#include "regen.hpp"
// LoginWnd_New.ipp
#include "LoginWnd_New.hpp"

// CConfirmRaceDlg::~CConfirmRaceDlg
_SUB_EXCEPTION_HANDLER(1F4AC0)
__SUB_CLASS_THIS0(001F4AC0, __thiscall, 87884,  CConfirmRaceDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4AC0
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
	int 3// TODO: 	mov dword ptr [esi],offset CConfirmRaceDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CConfirmRaceDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CConfirmRaceDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esp+0x18],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0x9C],0
	lea edi,[esi+0x98]
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	cmp dword ptr [esi+0x94],0
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x18],0
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
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
// CUINewCharAvatarSelect::Draw
_SUB_EXCEPTION_HANDLER(1F51A0)
__SUB_CLASS_THIS(001F51A0, __thiscall, 87782,  CUINewCharAvatarSelect, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F51A0
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
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	mov eax,dword ptr [esp+0x90]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	xor ecx,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x88],ecx
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x28],ebx
	mov edx,dword ptr [edi+0x80]
	mov eax,dword ptr [edx+0x240]
	sub eax,ecx
	mov byte ptr [esp+0x88],1
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x14],ecx
	je Block6

 Block1:
	sub eax,2
	je Block5

 Block2:
	sub eax,1
	je Block4

 Block3:
	mov ebp,dword ptr [esp+0x2C]
	xor esi,esi
	mov dword ptr [esp+0x90],0xFFFFFFF6
	mov dword ptr [esp+0x14],0xFFFFFFF8
	mov dword ptr [esp+0x1C],esi
	jmp Block9

 Block4:
	mov ebp,dword ptr [esp+0x2C]
	xor esi,esi
	mov dword ptr [esp+0x90],0xA
	mov dword ptr [esp+0x24],0xFFFFFFEE
	mov dword ptr [esp+0x1C],esi
	jmp Block9

 Block5:
	mov ebp,dword ptr [esp+0x2C]
	xor esi,esi
	mov dword ptr [esp+0x90],0xFFFFFFF8
	mov dword ptr [esp+0x24],8
	mov dword ptr [esp+0x14],0xFFFFFFF9
	mov dword ptr [esp+0x1C],esi
	jmp Block9

 Block6:
	mov ebp,dword ptr [esp+0x2C]
	xor esi,esi
	mov dword ptr [esp+0x90],0xFFFFFFF9
	mov dword ptr [esp+0x14],0xFFFFFFFB
	mov dword ptr [esp+0x1C],esi
	jmp Block9

 Block8:
	xor ecx,ecx

 Block9:
	cmp esi,5
	jne Block12

 Block10:
	mov eax,dword ptr [edi+0x80]
	cmp dword ptr [eax+0x240],ecx
	jne Block12

 Block11:
	dec dword ptr [esp+0x20]
	jmp Block43

 Block12:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block13:
	mov ecx,dword ptr [edi+esi*4+0x128]
	mov byte ptr [esp+0x88],2
	test ebp,ebp
	je Block50

 Block14:
	mov eax,dword ptr [esp+0x20]
	mov ebx,dword ptr [esp+0x40]
	add eax,esi
	lea edx,[eax+eax*8]
	mov eax,dword ptr [esp+0x24]
	sub esp,0x10
	lea edi,[eax+edx*2]
	mov edx,dword ptr [ebp]
	mov edx,dword ptr [edx+0x80]
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x5C]
	push ecx
	mov ecx,dword ptr [esp+0xA4]
	mov dword ptr [eax+0xC],ebx
	lea eax,[edi+0x66]
	push eax
	add ecx,0x15
	push ecx
	push ebp
	call edx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block16:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x88],1
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x80]
	push esi
	lea edx,[esp+0x34]
	push edx
	call CLogin::GetNewCharEquipName
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x8C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x88],1
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block23:
	mov ebx,dword ptr [esp+0x28]
	lea eax,[esp+0x50]
	push eax
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x94],4
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x3C]
	push 1
	push ecx
	mov byte ptr [esp+0x98],5
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x90],6
	test ecx,ecx
	je Block50

 Block24:
	mov byte ptr [esp+0x90],7
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x88],4
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x88],1
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	lea eax,[esp+0x70]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block31:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0x8C],8
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block32:
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x40]
	push 1
	push eax
	mov byte ptr [esp+0x98],9
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x9C],0xA
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov eax,esi
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0xA0]
	sar eax,1
	sub ecx,eax
	add edi,0x68
	lea eax,[ecx+edx+0x9E]
	push edi
	mov byte ptr [esp+0x9C],0xB
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xA0],0xA
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x88],9
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov esi,8
	mov byte ptr [esp+0x88],8
	cmp word ptr [esp+0x60],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0x88],1
	cmp word ptr [esp+0x70],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov esi,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x18]

 Block43:
	inc esi
	cmp esi,9
	mov dword ptr [esp+0x1C],esi
	jl Block8

 Block44:
	mov byte ptr [esp+0x88],0
	test ebx,ebx
	je Block46

 Block45:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov dword ptr [esp+0x88],0xFFFFFFFF
	test ebp,ebp
	je Block48

 Block47:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block48:
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret 4

 Block49:
	push eax
	call _com_issue_error

 Block50:
	push 0x80004003
	call _com_issue_error
}
}
// CUINewCharAvatarSelect::Delete
__SUB_CLASS_THIS0(001F3680, __thiscall, 87780,  CUINewCharAvatarSelect, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	ret
}
}
// CUINewCharAvatarSelectAran::CUINewCharAvatarSelectAran
_SUB_EXCEPTION_HANDLER(1F4720)
__SUB_CLASS_THIS(001F4720, __thiscall, 87837,  CUINewCharAvatarSelectAran, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4720
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
	mov edi,dword ptr [esp+0x20]
	push edi
	call CUINewCharAvatarSelect::_ctor_0
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharAvatarSelectAran::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharAvatarSelectAran::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharAvatarSelectAran::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push 0
	push 1
	push 0
	push 0
	push 0xA
	push 0x174
	push 0x10E
	mov ecx,0xFFFFF5CB
	sub ecx,eax
	push ecx
	push 0x6D
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharRaceSelect::IsKindOf
__SUB_CLASS_THIS(001F3E40, __thiscall, 87567,  CUINewCharRaceSelect, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUINewCharRaceSelect::ms_RTTI_CUINewCharRaceSelect
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
// CUINewCharNameSelectRes::OnCreate
_SUB_EXCEPTION_HANDLER(1FA420)
__SUB_CLASS_THIS(001FA420, __thiscall, 87718,  CUINewCharNameSelectRes, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FA420
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
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1977
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea ecx,[esp+0x14]
	push 0x1976
	push ecx
	mov dword ptr [esp+0x7C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x78],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x74],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x74],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x88]
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x88]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x20]
	push edx
	push ebx
	push 0xB2
	push 0x2F
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x1974
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x78],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x74],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x74],bl
	cmp eax,ebx
	je Block25

 Block18:
	add eax,8
	cmp eax,ebx
	je Block25

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block21:
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x20]
	push edx
	push ebx
	push 0xB2
	push 0x7A
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x30]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x78],5
	mov dword ptr [esp+0x64],0xC
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x74],6
	cmp eax,ebx
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0x74],5
	cmp eax,ebx
	je Block38

 Block28:
	add eax,8
	cmp eax,ebx
	je Block38

 Block29:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block31

 Block30:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block31:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block33

 Block32:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x30]
	push eax
	push 0xF
	push 0x78
	push 0x71
	push 0x31
	push 0x3EA
	push esi
	call edx
	mov ecx,dword ptr [esi+0x80]
	lea eax,[esp+0x14]
	push eax
	call CLogin::GetCheckedName
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x98]
	push eax
	mov byte ptr [esp+0x78],7
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],5
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x74],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 4

 Block38:
	xor edi,edi
	jmp Block31
}
}
// CUINewCharRaceSelect::OnChildNotify
__SUB_CLASS_THIS(001F3380, __thiscall, 87561,  CUINewCharRaceSelect, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0x64
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [eax+0x20]
	push edx
	call eax

 Block2:
	ret 0xC
}
}
// CUINewCharRaceSelect::OnButtonClicked
__SUB_CLASS_THIS(001F9470, __thiscall, 87558,  CUINewCharRaceSelect, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,5
	ja Block3

 Block1:
	mov ecx,dword ptr [esi+0x80]
	cmp dword ptr [ecx+0x1A8],0
	jne Block3

 Block2:
	push eax
	mov ecx,esi
	call CUINewCharRaceSelect::SelectRaceButton
	mov ecx,esi
	call CUINewCharRaceSelect::OpenConfirmRaceDlg
	mov ecx,dword ptr [esi+0x80]
	call CLogin::ReSetExtraCharInfo

 Block3:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block4:
	mov edx,dword ptr [esi+0x80]
	mov eax,dword ptr [edx+0x1C8]
	pop esi
	mov dword ptr [esp+4],eax
	jmp  CWndMan::SetFocus

 Block5:
	pop esi
	ret 4
}
}
// CUINewCharAvatarSelectNormal::OnCreate
_SUB_EXCEPTION_HANDLER(1FBB60)
__SUB_CLASS_THIS(001FBB60, __thiscall, 87825,  CUINewCharAvatarSelectNormal, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FBB60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x48],ebx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
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
	lea edx,[ebp-0x1C]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
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
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push 0x563
	push eax
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
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[ebp+0x30]
	push edx
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[ebp+0x54]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],9
	cmp ecx,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[ebp+0x30]
	push eax
	lea edx,[ebp+0x54]
	push edx
	push 0xFFFFFFFF
	push 0x179
	push 0xE1
	push edi
	push edi
	lea eax,[ebp+0x50]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x124]
	cmp esi,eax
	je Block32

 Block28:
	mov dword ptr [ebx+0x124],eax
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	cmp esi,edi
	je Block32

 Block31:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block32:
	mov eax,dword ptr [ebp+0x50]
	cmp eax,edi
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],8
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],7
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea edx,[ebp+0x50]
	push edx
	mov ecx,ebx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0xA
	mov word ptr [ebp+0x54],cx
	mov dword ptr [ebp+0x5C],eax
	cmp eax,edi
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	mov esi,dword ptr [ebx+0x124]
	mov byte ptr [ebp-4],0xB
	cmp esi,edi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block48

 Block47:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0xA
	jne Block51

 Block49:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov ecx,dword ptr [ebp+0x48]
	lea eax,[ebp+0x50]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xC
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x54],cx
	mov dword ptr [ebp+0x5C],eax
	cmp eax,edi
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block56:
	mov ecx,dword ptr [ebp+0x48]
	mov esi,dword ptr [ecx+0x124]
	mov byte ptr [ebp-4],0xD
	cmp esi,edi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [ebp+0x54]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x58]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x60]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block60

 Block59:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],bl
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x54]
	push ecx
	call esi
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	lea eax,[ebp+0x30]
	mov bl,0xE
	push eax
	mov byte ptr [ebp-4],bl
	call esi
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [edx+0x124]
	mov byte ptr [ebp-4],0xF
	cmp ecx,edi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea eax,[ebp+0x54]
	push eax
	lea edx,[ebp+0x30]
	push edx
	push edi
	push edi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x30],si
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x54],si
	jne Block79

 Block77:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov ecx,dword ptr [ebp+0x48]
	mov esi,dword ptr [ecx+0x124]
	cmp esi,edi
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block84

 Block83:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov eax,3
	mov word ptr [ebp+0x30],ax
	mov dword ptr [ebp+0x38],edi
	mov ecx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ecx+0x124]
	mov bl,0x11
	mov byte ptr [ebp-4],bl
	cmp ecx,edi
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x50]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x12
	cmp esi,edi
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x24]
	push eax
	push edi
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block92

 Block91:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block92:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block94

 Block93:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block94:
	mov ebx,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x30],bx
	jne Block101

 Block95:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,edi
	je Block97

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block97:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x54],bx
	jne Block102

 Block99:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block103

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block101:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp+0x30]
	push edx
	call esi
	jmp Block98

 Block102:
	lea ecx,[ebp+0x54]
	push ecx
	call esi

 Block103:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x54]
	push edx
	call ebx
	lea eax,[ebp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x13
	call ebx
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	push edi
	push edi
	lea eax,[ebp+0x54]
	push eax
	lea ecx,[ebp+0x30]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x44],esp
	push 0x564
	mov bl,0x14
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x15
	cmp dword ptr [_D_G_RM],edi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block112

 Block110:
	cmp eax,0x80004002
	je Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	mov ebx,8
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x2C],bx
	jne Block115

 Block113:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block116:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x30],bx
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[ebp+0x30]
	push ecx
	call esi

 Block120:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+0x54],bx
	jne Block123

 Block121:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	cmp eax,edi
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[ebp+0x54]
	push eax
	call esi

 Block124:
	mov ecx,dword ptr [ebp+0x48]
	add ecx,0x128
	mov dword ptr [ebp+0x40],edi
	mov dword ptr [ebp+0x4C],ecx

 Block125:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x40]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	je Block5

 Block126:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	je Block129

 Block127:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov esi,ecx
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	jge Block129

 Block128:
	cmp eax,0x80004002
	jne Block1

 Block129:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x1E
	jne Block132

 Block130:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block133:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x5C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1F
	test esi,esi
	je Block5

 Block134:
	lea edx,[ebp-0x5C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block142

 Block135:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ecx,dword ptr [ebp+0x4C]
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [ecx]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x44]
	test eax,eax
	je Block137

 Block136:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block137:
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [ecx],ebx
	test edi,edi
	jge Block139

 Block138:
	cmp edi,0x80004002
	jne Block150

 Block139:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x1E
	jne Block144

 Block140:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block145

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block142:
	mov edx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block139

 Block143:
	mov ecx,edx
	mov dword ptr [ecx],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block139

 Block144:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x1A
	call ecx
	mov eax,dword ptr [ebp+0x40]
	add dword ptr [ebp+0x4C],4
	inc eax
	cmp eax,9
	mov dword ptr [ebp+0x40],eax
	jl Block125

 Block146:
	xor edi,edi
	mov dword ptr [ebp+0x20],edi
	mov dword ptr [ebp+0x14],1
	mov dword ptr [ebp+0x18],edi
	mov dword ptr [ebp+0x1C],edi
	lea edx,[ebp+0x44]
	push 0x56B
	push edx
	mov byte ptr [ebp-4],0x21
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x22
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x21
	cmp eax,edi
	je Block148

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block148:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x23
	cmp eax,edi
	je Block151

 Block149:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block152

 Block150:
	push edi
	call _com_issue_error

 Block151:
	xor eax,eax

 Block152:
	mov byte ptr [ebp-4],0x21
	cmp eax,edi
	je Block164

 Block153:
	add eax,8
	cmp eax,edi
	je Block164

 Block154:
	lea esi,[eax-8]
	cmp esi,edi
	je Block156

 Block155:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block156:
	mov ebx,dword ptr [ebp+0x48]
	mov eax,dword ptr [ebx+0x118]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [ebx+0x118],esi
	test eax,eax
	je Block160

 Block157:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call edi
	test eax,eax
	jne Block160

 Block158:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block160

 Block159:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block160:
	mov ecx,dword ptr [ebx+0x118]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp+0x14]
	push edx
	push 0
	push 0x14A
	push 0x25
	push 0x3E8
	push ebx
	call eax
	lea ecx,[ebp+0x44]
	push 0x56C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x24
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block162

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block162:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block165

 Block163:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block166

 Block164:
	xor esi,esi
	jmp Block156

 Block165:
	xor eax,eax

 Block166:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block179

 Block167:
	add eax,8
	je Block179

 Block168:
	lea esi,[eax-8]
	test esi,esi
	je Block170

 Block169:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block170:
	mov eax,dword ptr [ebx+0x120]
	mov dword ptr [ebx+0x120],esi
	test eax,eax
	je Block174

 Block171:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call edi
	test eax,eax
	jne Block174

 Block172:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block174

 Block173:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block174:
	mov ecx,dword ptr [ebx+0x120]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0x14A
	push 0x6F
	push 0x3E9
	push ebx
	call edx
	mov dword ptr [ebp+0x4C],0x3F3
	mov dword ptr [ebp+0x40],0x67
	lea esi,[ebx+0xD0]
	mov dword ptr [ebp+0x48],9

 Block175:
	lea eax,[ebp+0x44]
	push 0x567
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x26
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block177

 Block176:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block177:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block180

 Block178:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block181

 Block179:
	xor esi,esi
	jmp Block170

 Block180:
	xor eax,eax

 Block181:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block193

 Block182:
	add eax,8
	je Block193

 Block183:
	lea edi,[eax-8]
	test edi,edi
	je Block185

 Block184:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block185:
	mov eax,dword ptr [esi-0x48]
	mov dword ptr [esi-0x48],edi
	test eax,eax
	je Block189

 Block186:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block189

 Block187:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block189

 Block188:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block189:
	mov ecx,dword ptr [esi-0x48]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	mov eax,dword ptr [ebp+0x40]
	push 0
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push 0x42
	add eax,0xFFFFFFF7
	push eax
	push ebx
	call edx
	lea eax,[ebp+0x28]
	push 0x568
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x28
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block191:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x29
	test eax,eax
	je Block194

 Block192:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block195

 Block193:
	xor edi,edi
	jmp Block185

 Block194:
	xor eax,eax

 Block195:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block209

 Block196:
	add eax,8
	je Block209

 Block197:
	lea edi,[eax-8]
	test edi,edi
	je Block199

 Block198:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block199:
	mov eax,dword ptr [esi]
	mov dword ptr [esi],edi
	test eax,eax
	je Block203

 Block200:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block203

 Block201:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block203

 Block202:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block203:
	mov edi,dword ptr [ebp+0x40]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push 0
	push edi
	push 0xC6
	push eax
	push ebx
	call edx
	mov eax,1
	add dword ptr [ebp+0x4C],eax
	add edi,0x12
	add esi,8
	sub dword ptr [ebp+0x48],eax
	mov dword ptr [ebp+0x40],edi
	jne Block175

 Block204:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block206

 Block205:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block206:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block208

 Block207:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block208:
	lea esp,[ebp-0x6C]
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

 Block209:
	xor edi,edi
	jmp Block199
}
}
// CUINewCharNameSelectCygnus::OnCreate
_SUB_EXCEPTION_HANDLER(1F96E0)
__SUB_CLASS_THIS(001F96E0, __thiscall, 87615,  CUINewCharNameSelectCygnus, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F96E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1422
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x10]
	push 0x1421
	push ecx
	mov dword ptr [esp+0x78],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x88]
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x88]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xB5
	push 0x1F
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x10]
	push 0x141F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block25

 Block18:
	add eax,8
	cmp eax,ebx
	je Block25

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xB5
	push 0x68
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x2C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x74],5
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	mov dword ptr [esp+0x60],0xC
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],6
	cmp eax,ebx
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0x70],5
	cmp eax,ebx
	je Block38

 Block28:
	add eax,8
	cmp eax,ebx
	je Block38

 Block29:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block31

 Block30:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block33

 Block32:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x2C]
	push eax
	push 0xF
	push 0x78
	push 0x6E
	push 0x24
	push 0x3EA
	push esi
	call edx
	mov ecx,dword ptr [esi+0x80]
	lea eax,[esp+0x10]
	push eax
	call CLogin::GetCheckedName
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x98]
	push eax
	mov byte ptr [esp+0x74],7
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],5
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x70],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x64
	ret 4

 Block38:
	xor edi,edi
	jmp Block31
}
}
// CConfirmRaceDlg::OnCreate
_SUB_EXCEPTION_HANDLER(1F7320)
__SUB_CLASS_THIS(001F7320, __thiscall, 87885,  CConfirmRaceDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F7320
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
	mov edi,dword ptr [esi+0x78]
	xor ebx,ebx
	cmp edi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov edi,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x14]
	cmp edi,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,ebp
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0xFFFFFFD8
	sub ecx,eax
	mov eax,dword ptr [esp+0x18]
	cdq
	sub eax,edx
	sar eax,1
	push ecx
	mov edx,0xA
	sub edx,eax
	push edx
	mov ecx,esi
	call CWnd::MoveWnd
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea eax,[esp+0x18]
	push 0x15C6
	push eax
	mov dword ptr [esp+0x40],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x3C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x38],2
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block23

 Block14:
	add eax,8
	cmp eax,ebx
	je Block23

 Block15:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block17

 Block16:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block17:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0x4D
	push 0x2A
	push 1
	push esi
	call edx
	lea eax,[esp+0x18]
	push 0x15C7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x3C],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x38],4
	cmp eax,ebx
	je Block24

 Block22:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block25

 Block23:
	xor edi,edi
	jmp Block17

 Block24:
	xor eax,eax

 Block25:
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block34

 Block26:
	add eax,8
	cmp eax,ebx
	je Block34

 Block27:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block29

 Block28:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block29:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block31

 Block30:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block31:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0x4D
	push 0x72
	push 2
	push esi
	call edx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block34:
	xor edi,edi
	jmp Block29
}
}
// CUINewCharAvatarSelectEvan::OnCreate
_SUB_EXCEPTION_HANDLER(1F5670)
__SUB_CLASS_THIS(001F5670, __thiscall, 87855,  CUINewCharAvatarSelectEvan, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F5670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x48],ebx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
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
	lea edx,[ebp-0x1C]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
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
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push 0x563
	push eax
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
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[ebp+0x30]
	push edx
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[ebp+0x54]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],9
	cmp ecx,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[ebp+0x30]
	push eax
	lea edx,[ebp+0x54]
	push edx
	push 0xFFFFFFFF
	push 0x179
	push 0xE1
	push edi
	push edi
	lea eax,[ebp+0x50]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x124]
	cmp esi,eax
	je Block32

 Block28:
	mov dword ptr [ebx+0x124],eax
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	cmp esi,edi
	je Block32

 Block31:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block32:
	mov eax,dword ptr [ebp+0x50]
	cmp eax,edi
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],8
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],7
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea edx,[ebp+0x50]
	push edx
	mov ecx,ebx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0xA
	mov word ptr [ebp+0x54],cx
	mov dword ptr [ebp+0x5C],eax
	cmp eax,edi
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	mov esi,dword ptr [ebx+0x124]
	mov byte ptr [ebp-4],0xB
	cmp esi,edi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block48

 Block47:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0xA
	jne Block51

 Block49:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov ecx,dword ptr [ebp+0x48]
	lea eax,[ebp+0x50]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xC
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x54],cx
	mov dword ptr [ebp+0x5C],eax
	cmp eax,edi
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block56:
	mov ecx,dword ptr [ebp+0x48]
	mov esi,dword ptr [ecx+0x124]
	mov byte ptr [ebp-4],0xD
	cmp esi,edi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [ebp+0x54]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x58]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x60]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block60

 Block59:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],bl
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x54]
	push ecx
	call esi
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	lea eax,[ebp+0x30]
	mov bl,0xE
	push eax
	mov byte ptr [ebp-4],bl
	call esi
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [edx+0x124]
	mov byte ptr [ebp-4],0xF
	cmp ecx,edi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea eax,[ebp+0x54]
	push eax
	lea edx,[ebp+0x30]
	push edx
	push edi
	push edi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x30],si
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x54],si
	jne Block79

 Block77:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov ecx,dword ptr [ebp+0x48]
	mov esi,dword ptr [ecx+0x124]
	cmp esi,edi
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block84

 Block83:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov eax,3
	mov word ptr [ebp+0x30],ax
	mov dword ptr [ebp+0x38],edi
	mov ecx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ecx+0x124]
	mov bl,0x11
	mov byte ptr [ebp-4],bl
	cmp ecx,edi
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x50]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x12
	cmp esi,edi
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x24]
	push eax
	push edi
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block92

 Block91:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block92:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block94

 Block93:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block94:
	mov ebx,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x30],bx
	jne Block101

 Block95:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,edi
	je Block97

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block97:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x54],bx
	jne Block102

 Block99:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block103

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block101:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp+0x30]
	push edx
	call esi
	jmp Block98

 Block102:
	lea ecx,[ebp+0x54]
	push ecx
	call esi

 Block103:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x54]
	push edx
	call ebx
	lea eax,[ebp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x13
	call ebx
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	push edi
	push edi
	lea eax,[ebp+0x54]
	push eax
	lea ecx,[ebp+0x30]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x44],esp
	push 0x564
	mov bl,0x14
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x15
	cmp dword ptr [_D_G_RM],edi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block112

 Block110:
	cmp eax,0x80004002
	je Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	mov ebx,8
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x2C],bx
	jne Block115

 Block113:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block116:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x30],bx
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[ebp+0x30]
	push ecx
	call esi

 Block120:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+0x54],bx
	jne Block123

 Block121:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	cmp eax,edi
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[ebp+0x54]
	push eax
	call esi

 Block124:
	mov ecx,dword ptr [ebp+0x48]
	add ecx,0x128
	mov dword ptr [ebp+0x40],edi
	mov dword ptr [ebp+0x4C],ecx

 Block125:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x40]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	je Block5

 Block126:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	je Block129

 Block127:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov esi,ecx
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	jge Block129

 Block128:
	cmp eax,0x80004002
	jne Block1

 Block129:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x1E
	jne Block132

 Block130:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block133:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x5C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1F
	test esi,esi
	je Block5

 Block134:
	lea edx,[ebp-0x5C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block142

 Block135:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ecx,dword ptr [ebp+0x4C]
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [ecx]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x44]
	test eax,eax
	je Block137

 Block136:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block137:
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [ecx],ebx
	test edi,edi
	jge Block139

 Block138:
	cmp edi,0x80004002
	jne Block150

 Block139:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x1E
	jne Block144

 Block140:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block145

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block142:
	mov edx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block139

 Block143:
	mov ecx,edx
	mov dword ptr [ecx],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block139

 Block144:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x1A
	call ecx
	mov eax,dword ptr [ebp+0x40]
	add dword ptr [ebp+0x4C],4
	inc eax
	cmp eax,9
	mov dword ptr [ebp+0x40],eax
	jl Block125

 Block146:
	xor edi,edi
	mov dword ptr [ebp+0x20],edi
	mov dword ptr [ebp+0x14],1
	mov dword ptr [ebp+0x18],edi
	mov dword ptr [ebp+0x1C],edi
	lea edx,[ebp+0x44]
	push 0x56B
	push edx
	mov byte ptr [ebp-4],0x21
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x22
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x21
	cmp eax,edi
	je Block148

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block148:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x23
	cmp eax,edi
	je Block151

 Block149:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block152

 Block150:
	push edi
	call _com_issue_error

 Block151:
	xor eax,eax

 Block152:
	mov byte ptr [ebp-4],0x21
	cmp eax,edi
	je Block164

 Block153:
	add eax,8
	cmp eax,edi
	je Block164

 Block154:
	lea esi,[eax-8]
	cmp esi,edi
	je Block156

 Block155:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block156:
	mov ebx,dword ptr [ebp+0x48]
	mov eax,dword ptr [ebx+0x118]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [ebx+0x118],esi
	test eax,eax
	je Block160

 Block157:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call edi
	test eax,eax
	jne Block160

 Block158:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block160

 Block159:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block160:
	mov ecx,dword ptr [ebx+0x118]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp+0x14]
	push edx
	push 0
	push 0x14A
	push 0x25
	push 0x3E8
	push ebx
	call eax
	lea ecx,[ebp+0x44]
	push 0x56C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x24
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block162

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block162:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block165

 Block163:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block166

 Block164:
	xor esi,esi
	jmp Block156

 Block165:
	xor eax,eax

 Block166:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block179

 Block167:
	add eax,8
	je Block179

 Block168:
	lea esi,[eax-8]
	test esi,esi
	je Block170

 Block169:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block170:
	mov eax,dword ptr [ebx+0x120]
	mov dword ptr [ebx+0x120],esi
	test eax,eax
	je Block174

 Block171:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call edi
	test eax,eax
	jne Block174

 Block172:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block174

 Block173:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block174:
	mov ecx,dword ptr [ebx+0x120]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0x14A
	push 0x6F
	push 0x3E9
	push ebx
	call edx
	mov dword ptr [ebp+0x4C],0x3F3
	mov dword ptr [ebp+0x40],0x67
	lea esi,[ebx+0xD0]
	mov dword ptr [ebp+0x48],9

 Block175:
	lea eax,[ebp+0x44]
	push 0x567
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x26
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block177

 Block176:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block177:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block180

 Block178:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block181

 Block179:
	xor esi,esi
	jmp Block170

 Block180:
	xor eax,eax

 Block181:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block193

 Block182:
	add eax,8
	je Block193

 Block183:
	lea edi,[eax-8]
	test edi,edi
	je Block185

 Block184:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block185:
	mov eax,dword ptr [esi-0x48]
	mov dword ptr [esi-0x48],edi
	test eax,eax
	je Block189

 Block186:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block189

 Block187:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block189

 Block188:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block189:
	mov ecx,dword ptr [esi-0x48]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	mov eax,dword ptr [ebp+0x40]
	push 0
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push 0x42
	add eax,0xFFFFFFF7
	push eax
	push ebx
	call edx
	lea eax,[ebp+0x28]
	push 0x568
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x28
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block191:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x29
	test eax,eax
	je Block194

 Block192:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block195

 Block193:
	xor edi,edi
	jmp Block185

 Block194:
	xor eax,eax

 Block195:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block209

 Block196:
	add eax,8
	je Block209

 Block197:
	lea edi,[eax-8]
	test edi,edi
	je Block199

 Block198:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block199:
	mov eax,dword ptr [esi]
	mov dword ptr [esi],edi
	test eax,eax
	je Block203

 Block200:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block203

 Block201:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block203

 Block202:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block203:
	mov edi,dword ptr [ebp+0x40]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push 0
	push edi
	push 0xC6
	push eax
	push ebx
	call edx
	mov eax,1
	add dword ptr [ebp+0x4C],eax
	add edi,0x12
	add esi,8
	sub dword ptr [ebp+0x48],eax
	mov dword ptr [ebp+0x40],edi
	jne Block175

 Block204:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block206

 Block205:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block206:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block208

 Block207:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block208:
	lea esp,[ebp-0x6C]
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

 Block209:
	xor edi,edi
	jmp Block199
}
}
// CUINewCharAvatarSelectCygnus::OnCreate
_SUB_EXCEPTION_HANDLER(1FAE00)
__SUB_CLASS_THIS(001FAE00, __thiscall, 87810,  CUINewCharAvatarSelectCygnus, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FAE00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x48],ebx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
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
	lea edx,[ebp-0x1C]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
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
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push 0x1423
	push eax
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
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[ebp+0x30]
	push edx
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[ebp+0x54]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],9
	cmp ecx,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[ebp+0x30]
	push eax
	lea edx,[ebp+0x54]
	push edx
	push 0xFFFFFFFF
	push 0x17A
	push 0xE4
	push edi
	push edi
	lea eax,[ebp+0x50]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x124]
	cmp esi,eax
	je Block32

 Block28:
	mov dword ptr [ebx+0x124],eax
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	cmp esi,edi
	je Block32

 Block31:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block32:
	mov eax,dword ptr [ebp+0x50]
	cmp eax,edi
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],8
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],7
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea edx,[ebp+0x50]
	push edx
	mov ecx,ebx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0xA
	mov word ptr [ebp+0x54],cx
	mov dword ptr [ebp+0x5C],eax
	cmp eax,edi
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	mov esi,dword ptr [ebx+0x124]
	mov byte ptr [ebp-4],0xB
	cmp esi,edi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block48

 Block47:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0xA
	jne Block51

 Block49:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov ecx,dword ptr [ebp+0x48]
	lea eax,[ebp+0x50]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xC
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x54],cx
	mov dword ptr [ebp+0x5C],eax
	cmp eax,edi
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block56:
	mov ecx,dword ptr [ebp+0x48]
	mov esi,dword ptr [ecx+0x124]
	mov byte ptr [ebp-4],0xD
	cmp esi,edi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [ebp+0x54]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x58]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x60]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block60

 Block59:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],bl
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x54]
	push ecx
	call esi
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	lea eax,[ebp+0x30]
	mov bl,0xE
	push eax
	mov byte ptr [ebp-4],bl
	call esi
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [edx+0x124]
	mov byte ptr [ebp-4],0xF
	cmp ecx,edi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea eax,[ebp+0x54]
	push eax
	lea edx,[ebp+0x30]
	push edx
	push edi
	push edi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x30],si
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x54],si
	jne Block79

 Block77:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov ecx,dword ptr [ebp+0x48]
	mov esi,dword ptr [ecx+0x124]
	cmp esi,edi
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block84

 Block83:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov eax,3
	mov word ptr [ebp+0x30],ax
	mov dword ptr [ebp+0x38],edi
	mov ecx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ecx+0x124]
	mov bl,0x11
	mov byte ptr [ebp-4],bl
	cmp ecx,edi
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x50]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x12
	cmp esi,edi
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x24]
	push eax
	push edi
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block92

 Block91:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block92:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block94

 Block93:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block94:
	mov ebx,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x30],bx
	jne Block101

 Block95:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,edi
	je Block97

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block97:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x54],bx
	jne Block102

 Block99:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block103

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block101:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp+0x30]
	push edx
	call esi
	jmp Block98

 Block102:
	lea ecx,[ebp+0x54]
	push ecx
	call esi

 Block103:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x54]
	push edx
	call ebx
	lea eax,[ebp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x13
	call ebx
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	push edi
	push edi
	lea eax,[ebp+0x54]
	push eax
	lea ecx,[ebp+0x30]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x44],esp
	push 0x141D
	mov bl,0x14
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x15
	cmp dword ptr [_D_G_RM],edi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block112

 Block110:
	cmp eax,0x80004002
	je Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	mov ebx,8
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x2C],bx
	jne Block115

 Block113:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block116:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x30],bx
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[ebp+0x30]
	push ecx
	call esi

 Block120:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+0x54],bx
	jne Block123

 Block121:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	cmp eax,edi
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[ebp+0x54]
	push eax
	call esi

 Block124:
	mov ecx,dword ptr [ebp+0x48]
	add ecx,0x128
	mov dword ptr [ebp+0x40],edi
	mov dword ptr [ebp+0x4C],ecx

 Block125:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x40]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	je Block5

 Block126:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	je Block129

 Block127:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov esi,ecx
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	jge Block129

 Block128:
	cmp eax,0x80004002
	jne Block1

 Block129:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x1E
	jne Block132

 Block130:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block133:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x5C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1F
	test esi,esi
	je Block5

 Block134:
	lea edx,[ebp-0x5C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block142

 Block135:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ecx,dword ptr [ebp+0x4C]
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [ecx]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x44]
	test eax,eax
	je Block137

 Block136:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block137:
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [ecx],ebx
	test edi,edi
	jge Block139

 Block138:
	cmp edi,0x80004002
	jne Block150

 Block139:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x1E
	jne Block144

 Block140:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block145

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block142:
	mov edx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block139

 Block143:
	mov ecx,edx
	mov dword ptr [ecx],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block139

 Block144:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x1A
	call ecx
	mov eax,dword ptr [ebp+0x40]
	add dword ptr [ebp+0x4C],4
	inc eax
	cmp eax,9
	mov dword ptr [ebp+0x40],eax
	jl Block125

 Block146:
	xor edi,edi
	mov dword ptr [ebp+0x20],edi
	mov dword ptr [ebp+0x14],1
	mov dword ptr [ebp+0x18],edi
	mov dword ptr [ebp+0x1C],edi
	lea edx,[ebp+0x44]
	push 0x1421
	push edx
	mov byte ptr [ebp-4],0x21
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x22
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x21
	cmp eax,edi
	je Block148

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block148:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x23
	cmp eax,edi
	je Block151

 Block149:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block152

 Block150:
	push edi
	call _com_issue_error

 Block151:
	xor eax,eax

 Block152:
	mov byte ptr [ebp-4],0x21
	cmp eax,edi
	je Block164

 Block153:
	add eax,8
	cmp eax,edi
	je Block164

 Block154:
	lea esi,[eax-8]
	cmp esi,edi
	je Block156

 Block155:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block156:
	mov ebx,dword ptr [ebp+0x48]
	mov eax,dword ptr [ebx+0x118]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [ebx+0x118],esi
	test eax,eax
	je Block160

 Block157:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call edi
	test eax,eax
	jne Block160

 Block158:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block160

 Block159:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block160:
	mov ecx,dword ptr [ebx+0x118]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp+0x14]
	push edx
	push 0
	push 0x14A
	push 0x2D
	push 0x3E8
	push ebx
	call eax
	lea ecx,[ebp+0x44]
	push 0x141F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x24
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block162

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block162:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block165

 Block163:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block166

 Block164:
	xor esi,esi
	jmp Block156

 Block165:
	xor eax,eax

 Block166:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block179

 Block167:
	add eax,8
	je Block179

 Block168:
	lea esi,[eax-8]
	test esi,esi
	je Block170

 Block169:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block170:
	mov eax,dword ptr [ebx+0x120]
	mov dword ptr [ebx+0x120],esi
	test eax,eax
	je Block174

 Block171:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call edi
	test eax,eax
	jne Block174

 Block172:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block174

 Block173:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block174:
	mov ecx,dword ptr [ebx+0x120]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0x14A
	push 0x75
	push 0x3E9
	push ebx
	call edx
	mov dword ptr [ebp+0x4C],0x3F3
	mov dword ptr [ebp+0x40],0x6E
	lea esi,[ebx+0xD0]
	mov dword ptr [ebp+0x48],9

 Block175:
	lea eax,[ebp+0x44]
	push 0x141E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x26
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block177

 Block176:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block177:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block180

 Block178:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block181

 Block179:
	xor esi,esi
	jmp Block170

 Block180:
	xor eax,eax

 Block181:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block193

 Block182:
	add eax,8
	je Block193

 Block183:
	lea edi,[eax-8]
	test edi,edi
	je Block185

 Block184:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block185:
	mov eax,dword ptr [esi-0x48]
	mov dword ptr [esi-0x48],edi
	test eax,eax
	je Block189

 Block186:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block189

 Block187:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block189

 Block188:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block189:
	mov ecx,dword ptr [esi-0x48]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	mov eax,dword ptr [ebp+0x40]
	push 0
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push 0x47
	add eax,0xFFFFFFF7
	push eax
	push ebx
	call edx
	lea eax,[ebp+0x28]
	push 0x1420
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x28
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block191:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x29
	test eax,eax
	je Block194

 Block192:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block195

 Block193:
	xor edi,edi
	jmp Block185

 Block194:
	xor eax,eax

 Block195:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block209

 Block196:
	add eax,8
	je Block209

 Block197:
	lea edi,[eax-8]
	test edi,edi
	je Block199

 Block198:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block199:
	mov eax,dword ptr [esi]
	mov dword ptr [esi],edi
	test eax,eax
	je Block203

 Block200:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block203

 Block201:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block203

 Block202:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block203:
	mov edi,dword ptr [ebp+0x40]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push 0
	push edi
	push 0xC9
	push eax
	push ebx
	call edx
	mov eax,1
	add dword ptr [ebp+0x4C],eax
	add edi,0x12
	add esi,8
	sub dword ptr [ebp+0x48],eax
	mov dword ptr [ebp+0x40],edi
	jne Block175

 Block204:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block206

 Block205:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block206:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block208

 Block207:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block208:
	lea esp,[ebp-0x6C]
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

 Block209:
	xor edi,edi
	jmp Block199
}
}
// CUINewCharNameSelectAran::OnCreate
_SUB_EXCEPTION_HANDLER(1F9D80)
__SUB_CLASS_THIS(001F9D80, __thiscall, 87667,  CUINewCharNameSelectAran, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F9D80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x141B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x10]
	push 0x141A
	push ecx
	mov dword ptr [esp+0x78],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x88]
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x88]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x89
	push 0x22
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x10]
	push 0x1418
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block25

 Block18:
	add eax,8
	cmp eax,ebx
	je Block25

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x89
	push 0x6C
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x2C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x74],5
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	mov dword ptr [esp+0x60],0xC
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],6
	cmp eax,ebx
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0x70],5
	cmp eax,ebx
	je Block38

 Block28:
	add eax,8
	cmp eax,ebx
	je Block38

 Block29:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block31

 Block30:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block33

 Block32:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x2C]
	push eax
	push 0xF
	push 0x78
	push 0x62
	push 0x24
	push 0x3EA
	push esi
	call edx
	mov ecx,dword ptr [esi+0x80]
	lea eax,[esp+0x10]
	push eax
	call CLogin::GetCheckedName
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x98]
	push eax
	mov byte ptr [esp+0x74],7
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],5
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x70],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x64
	ret 4

 Block38:
	xor edi,edi
	jmp Block31
}
}
// CConfirmRaceDlg::CConfirmRaceDlg
_SUB_EXCEPTION_HANDLER(1F49F0)
__SUB_CLASS_THIS0(001F49F0, __thiscall, 87882,  CConfirmRaceDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F49F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CConfirmRaceDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CConfirmRaceDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CConfirmRaceDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	lea eax,[esp+0xC]
	push 0x15C5
	push eax
	mov byte ptr [esp+0x24],3
	mov dword ptr [esi+0xA4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],4
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],3
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CUINewCharAvatarSelect::IsRequestValid
__SUB_CLASS_THIS0(001F34C0, __thiscall, 87785,  CUINewCharAvatarSelect, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x80]
	cmp dword ptr [eax+0x1AC],0
	jne Block3

 Block1:
	cmp dword ptr [eax+0x1A4],4
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUINewCharJobSelectNormal::CUINewCharJobSelectNormal
_SUB_EXCEPTION_HANDLER(1F4EA0)
__SUB_CLASS_THIS(001F4EA0, __thiscall, 87762,  CUINewCharJobSelectNormal, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4EA0
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
	mov edi,dword ptr [esp+0x20]
	push edi
	call CUINewCharJobSelect::_ctor_0
	push 0
	push 1
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharJobSelectNormal::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharJobSelectNormal::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharJobSelectNormal::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [edi+0x240]
	push 0
	imul eax,0x258
	push 0
	push 0xA
	push 0xE0
	push 0xC9
	mov ecx,0xFFFFF5CB
	sub ecx,eax
	push ecx
	push 0x6D
	mov ecx,esi
	mov dword ptr [esp+0x3C],0
	call CWnd::CreateWnd
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
// CUINewCharNameSelectRes::CUINewCharNameSelectRes
_SUB_EXCEPTION_HANDLER(1F4410)
__SUB_CLASS_THIS(001F4410, __thiscall, 87715,  CUINewCharNameSelectRes, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4410
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
	call CWnd::_ctor_default
	mov ecx,dword ptr [esp+0x20]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x98],edi
	lea eax,[esi+0x9D]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF63
	mov dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelectRes::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelectRes::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelectRes::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push edi
	push 1
	push edi
	push edi
	push 0xA
	push 0xF5
	push 0xD4
	mov ecx,0xFFFFF5C8
	sub ecx,eax
	push ecx
	push 0x62
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharNameSelectNormal::CUINewCharNameSelectNormal
_SUB_EXCEPTION_HANDLER(1F4080)
__SUB_CLASS_THIS(001F4080, __thiscall, 87638,  CUINewCharNameSelectNormal, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4080
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
	call CWnd::_ctor_default
	mov ecx,dword ptr [esp+0x20]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x98],edi
	lea eax,[esi+0x9D]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF63
	mov dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUINewCharNameSelectNormal>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelectNormal::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelectNormal::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelectNormal::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push edi
	push 1
	push edi
	push edi
	push 0xA
	push 0xE0
	push 0xC9
	mov ecx,0xFFFFF5CB
	sub ecx,eax
	push ecx
	push 0x6D
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharNameSelectEvan::CUINewCharNameSelectEvan
_SUB_EXCEPTION_HANDLER(1F42E0)
__SUB_CLASS_THIS(001F42E0, __thiscall, 87690,  CUINewCharNameSelectEvan, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F42E0
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
	call CWnd::_ctor_default
	mov ecx,dword ptr [esp+0x20]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x98],edi
	lea eax,[esi+0x9D]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF63
	mov dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUINewCharNameSelectEvan>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelectEvan::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelectEvan::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelectEvan::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push edi
	push 1
	push edi
	push edi
	push 0xA
	push 0xE0
	push 0xC9
	mov ecx,0xFFFFF5CB
	sub ecx,eax
	push ecx
	push 0x6D
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharRaceSelect::OpenConfirmRaceDlg
_SUB_EXCEPTION_HANDLER(1F9370)
__SUB_CLASS_THIS0(001F9370, __thiscall, 87556,  CUINewCharRaceSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F9370
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0xAC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block10

 Block1:
	mov ecx,eax
	call CConfirmRaceDlg::_ctor_default
	test eax,eax
	je Block10

 Block2:
	add eax,8
	je Block10

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	movsx ecx,word ptr [edi+0x8C]
	mov edx,dword ptr [edi+0x88]
	push ecx
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],1
	call CConfirmRaceDlg::SetOption
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block7

 Block6:
	mov ecx,dword ptr [edi+0x80]
	push 0xFFFFFFFF
	call CLogin::ChangeStep

 Block7:
	mov eax,dword ptr [edi+0x80]
	mov ecx,dword ptr [eax+0x20C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 1
	call eax
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CConfirmRaceDlg>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block5
}
}
// CUINewCharJobSelect::~CUINewCharJobSelect
_SUB_EXCEPTION_HANDLER(1F4C20)
__SUB_CLASS_THIS0(001F4C20, __thiscall, 87735,  CUINewCharJobSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4C20
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
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharJobSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharJobSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharJobSelect::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xAC]
	mov dword ptr [esp+0x1C],7
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov eax,dword ptr [esi+0xA8]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xA4]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x8C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x84]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov ecx,esi
	mov dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
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
// CUINewCharRaceSelect::OnCreate
_SUB_EXCEPTION_HANDLER(1F81C0)
__SUB_CLASS_THIS(001F81C0, __thiscall, 87557,  CUINewCharRaceSelect, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F81C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov ebx,1
	mov dword ptr [esp+0x5C],ebp
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x58],ebp
	lea eax,[esp+0x18]
	push 0x1429
	push eax
	mov dword ptr [esp+0xD8],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0xD4],bl
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xD0],0
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],2
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0xD0],0
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
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block11

 Block10:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x50]
	push eax
	push 8
	push 0x2B
	push 0x195
	push ebp
	push esi
	call edx
	lea eax,[esp+0x18]
	push 0x1427
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0xD4],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],4
	cmp eax,ebp
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block27

 Block18:
	add eax,8
	cmp eax,ebp
	je Block27

 Block19:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block21

 Block20:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block23

 Block22:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x50]
	push eax
	push 8
	push 0x2B
	push 0x244
	push ebx
	push esi
	call edx
	lea eax,[esp+0x18]
	push 0x142B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0xD4],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],6
	cmp eax,ebp
	je Block28

 Block26:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block29

 Block27:
	xor edi,edi
	jmp Block21

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block33

 Block30:
	add eax,8
	cmp eax,ebp
	je Block33

 Block31:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block34

 Block32:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[edi+0xC]
	push ecx
	call ebx
	jmp Block35

 Block33:
	xor edi,edi

 Block34:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block35:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block37

 Block36:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block37:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x50]
	push eax
	push 8
	push 0x127
	push 0x2D
	push 2
	push esi
	call edx
	lea eax,[esp+0x18]
	push 0x142D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0xD4],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],8
	cmp eax,ebp
	je Block41

 Block40:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block42

 Block41:
	xor eax,eax

 Block42:
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block52

 Block43:
	add eax,8
	cmp eax,ebp
	je Block52

 Block44:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block46

 Block45:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block46:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block48

 Block47:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block48:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x50]
	push eax
	push 8
	push 0x127
	push 0x11C
	push 3
	push esi
	call edx
	lea eax,[esp+0x18]
	push 0x142F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0xD4],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block50:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0xA
	cmp eax,ebp
	je Block53

 Block51:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block54

 Block52:
	xor edi,edi
	jmp Block46

 Block53:
	xor eax,eax

 Block54:
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block64

 Block55:
	add eax,8
	cmp eax,ebp
	je Block64

 Block56:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block58

 Block57:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block58:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block60

 Block59:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block60:
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x50]
	push eax
	push 8
	push 0x127
	push 0x20C
	push 4
	push esi
	call edx
	lea eax,[esp+0x18]
	push 0x197A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0xD4],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD0],0xC
	cmp eax,ebp
	je Block65

 Block63:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block66

 Block64:
	xor edi,edi
	jmp Block58

 Block65:
	xor eax,eax

 Block66:
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block75

 Block67:
	add eax,8
	cmp eax,ebp
	je Block75

 Block68:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block70

 Block69:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block70:
	mov eax,dword ptr [esi+0xC4]
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block72

 Block71:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block72:
	mov ecx,dword ptr [esi+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x50]
	push eax
	push 8
	push 0x2B
	push 0x2D
	push 5
	push esi
	call edx
	push ebp
	push 0xFF
	push 0xA
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xD4],esp
	push eax
	mov byte ptr [esp+0xE4],0xD
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzGr2DLayer>::_QueryUnknown
	cmp eax,ebp
	jge Block76

 Block73:
	cmp eax,0x80004002
	je Block76

 Block74:
	push eax
	call _com_issue_error

 Block75:
	xor edi,edi
	jmp Block70

 Block76:
	push 0x2D
	push 0x159
	lea ecx,[esp+0x98]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xEC],0xE
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov byte ptr [esp+0xF0],0xF
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	lea edx,[esp+0x48]
	push 0x15CD
	push edx
	mov byte ptr [esp+0xF4],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xEC],0x11
	push ebp
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xF8],0x13
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x94]
	add esp,0x28
	cmp edi,eax
	je Block84

 Block80:
	mov dword ptr [esi+0x94],eax
	cmp eax,ebp
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block82:
	cmp edi,ebp
	je Block84

 Block83:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block84:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block86

 Block85:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block86:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xD0],0x12
	cmp eax,ebp
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block88:
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0xD0],0xD
	cmp eax,ebp
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],0
	cmp eax,ebp
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x60]
	push eax
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	lea edx,[esp+0x1C]
	mov bl,0x14
	push edx
	mov byte ptr [esp+0xD4],bl
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	mov ecx,dword ptr [esi+0x94]
	mov byte ptr [esp+0xD0],0x15
	cmp ecx,edi
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xD0],bl
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0xD0],0
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	lea edx,[esp+0x94]
	push edx
	call ebp
	lea eax,[esp+0x94]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xD4],0x16
	call ebp
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	push edi
	push edi
	lea eax,[esp+0x9C]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x15CE
	mov bl,0x17
	push edx
	mov byte ptr [esp+0xEC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE4],0x18
	cmp dword ptr [_D_G_RM],edi
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	lea eax,[esp+0xC8]
	mov byte ptr [esp+0xE4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xD8],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block115

 Block113:
	cmp eax,0x80004002
	je Block115

 Block114:
	push eax
	call _com_issue_error

 Block115:
	mov ebx,8
	mov byte ptr [esp+0xD0],0x1B
	cmp word ptr [esp+0xB4],bx
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0xBC]
	xor ecx,ecx
	mov word ptr [esp+0xB4],cx
	cmp eax,edi
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[esp+0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov byte ptr [esp+0xD0],0x1C
	cmp word ptr [esp+0x60],bx
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov byte ptr [esp+0xD0],0x1D
	cmp word ptr [esp+0x94],bx
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	cmp eax,edi
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[esp+0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	lea ecx,[esp+0x70]
	push ecx
	call ebp
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xD0],0x1F
	cmp ecx,edi
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0xFFFFFFFF
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x90]
	cmp edi,eax
	je Block136

 Block132:
	mov dword ptr [esi+0x90],eax
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
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block138

 Block137:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block138:
	mov ebx,8
	mov byte ptr [esp+0xD0],0x1E
	cmp word ptr [esp+0x1C],bx
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov byte ptr [esp+0xD0],0x1D
	cmp word ptr [esp+0x70],bx
	jne Block145

 Block143:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xD0],0x20
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block148

 Block147:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block148:
	mov edi,dword ptr [esi+0x90]
	mov byte ptr [esp+0xD0],0x21
	test edi,edi
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block152

 Block151:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block152:
	mov byte ptr [esp+0xD0],0x20
	cmp word ptr [esp+0x1C],bx
	jne Block155

 Block153:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],0x1D
	test eax,eax
	je Block158

 Block157:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block158:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x22
	mov ecx,0xD
	mov byte ptr [esp+0xD0],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block160

 Block159:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block160:
	mov edi,dword ptr [esi+0x90]
	mov byte ptr [esp+0xD0],0x23
	test edi,edi
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block164

 Block163:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block164:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xD0],bl
	jne Block172

 Block165:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block167

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block167:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block168:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],0x1D
	test eax,eax
	je Block170

 Block169:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block170:
	lea eax,[esp+0x30]
	push eax
	call ebp
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block173

 Block171:
	push eax
	call _com_issue_error

 Block172:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x1C]
	push edx
	call edi
	jmp Block168

 Block173:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0xD4],0x24
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block175

 Block174:
	push eax
	call _com_issue_error

 Block175:
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0xD4],0x25
	call ebp
	lea edx,[esp+0x84]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block177

 Block176:
	push eax
	call _com_issue_error

 Block177:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xD4],0x26
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	lea edx,[esp+0x70]
	mov bl,0x27
	push edx
	mov byte ptr [esp+0xD4],bl
	call ebp
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	mov ecx,dword ptr [esi+0x90]
	mov byte ptr [esp+0xD0],0x28
	test ecx,ecx
	jne Block183

 Block182:
	push 0x80004003
	call _com_issue_error

 Block183:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x8C]
	push edx
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x3C]
	lea edx,[esp+0x80]
	push edx
	push eax
	lea edx,[esp+0xBC]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xA4],8
	jne Block186

 Block184:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	test eax,eax
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea ecx,[esp+0xA4]
	push ecx
	call edi

 Block187:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xD0],bl
	jne Block190

 Block188:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea eax,[esp+0x70]
	push eax
	call edi

 Block191:
	mov ebx,8
	mov byte ptr [esp+0xD0],0x26
	cmp word ptr [esp+0x1C],bx
	jne Block194

 Block192:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block195:
	mov byte ptr [esp+0xD0],0x25
	cmp word ptr [esp+0x84],bx
	jne Block198

 Block196:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block199

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block199

 Block198:
	lea ecx,[esp+0x84]
	push ecx
	call edi

 Block199:
	mov byte ptr [esp+0xD0],0x24
	cmp word ptr [esp+0x40],bx
	jne Block202

 Block200:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block203:
	mov byte ptr [esp+0xD0],0x1D
	cmp word ptr [esp+0x30],bx
	jne Block206

 Block204:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block207:
	lea eax,[esp+0x40]
	push eax
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block209

 Block208:
	push eax
	call _com_issue_error

 Block209:
	lea edx,[esp+0x30]
	mov bl,0x29
	push edx
	mov byte ptr [esp+0xD4],bl
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block211

 Block210:
	push eax
	call _com_issue_error

 Block211:
	mov ecx,dword ptr [esi+0x90]
	mov byte ptr [esp+0xD0],0x2A
	test ecx,ecx
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xD0],bl
	jne Block216

 Block214:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block217:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xD0],0x1D
	jne Block220

 Block218:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block221:
	mov edi,dword ptr [esi+0x90]
	test edi,edi
	jne Block223

 Block222:
	push 0x80004003
	call _com_issue_error

 Block223:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	test eax,eax
	jge Block225

 Block224:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block225:
	mov ecx,dword ptr [esi+0x90]
	test ecx,ecx
	jne Block227

 Block226:
	push 0x80004003
	call _com_issue_error

 Block227:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x2B
	test edi,edi
	jne Block229

 Block228:
	push 0x80004003
	call _com_issue_error

 Block229:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x40]
	push 0
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block231

 Block230:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block231:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],0x1D
	test eax,eax
	je Block233

 Block232:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block233:
	lea ecx,[esp+0x40]
	push ecx
	call ebp
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block235

 Block234:
	push eax
	call _com_issue_error

 Block235:
	mov edi,dword ptr [esi+0x90]
	mov bl,0x2C
	mov byte ptr [esp+0xD0],bl
	test edi,edi
	jne Block237

 Block236:
	push 0x80004003
	call _com_issue_error

 Block237:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block239

 Block238:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block239:
	mov eax,dword ptr [esp+0x18]
	add eax,0x1F4
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	mov ecx,dword ptr [esi+0x90]
	mov byte ptr [esp+0xD0],0x2D
	test ecx,ecx
	jne Block241

 Block240:
	push 0x80004003
	call _com_issue_error

 Block241:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x2E
	test ecx,ecx
	jne Block243

 Block242:
	push 0x80004003
	call _com_issue_error

 Block243:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x34]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD0],0x2D
	test eax,eax
	je Block245

 Block244:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block245:
	mov edi,8
	mov byte ptr [esp+0xD0],bl
	cmp word ptr [esp+0x30],di
	jne Block248

 Block246:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block249:
	mov byte ptr [esp+0xD0],0x1D
	cmp word ptr [esp+0x40],di
	jne Block252

 Block250:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block253:
	mov ecx,dword ptr [esi+0x84]
	push ecx
	mov ecx,esi
	call CUINewCharRaceSelect::SetKeyFocus
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xD0],0
	test eax,eax
	je Block255

 Block254:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block255:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	test eax,eax
	je Block257

 Block256:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block257:
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC0
	ret 4
}
}
// CUINewCharRaceSelect::~CUINewCharRaceSelect
_SUB_EXCEPTION_HANDLER(1F3E70)
__SUB_CLASS_THIS0(001F3E70, __thiscall, 87556,  CUINewCharRaceSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F3E70
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
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharRaceSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharRaceSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharRaceSelect::`vftable'{for `ZRefCounted'}
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 6
	push 8
	lea eax,[esi+0x98]
	push eax
	mov dword ptr [esp+0x24],3
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x90]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov ecx,esi
	mov dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUINewCharAvatarSelect::OnButtonClicked
__SUB_CLASS_THIS(001F36B0, __thiscall, 87783,  CUINewCharAvatarSelect, void, uint32_t) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	call CUINewCharAvatarSelect::IsRequestValid
	test eax,eax
	je Block13

 Block1:
	mov eax,dword ptr [esp+8]
	mov ecx,eax
	sub ecx,0x3E8
	je Block15

 Block2:
	sub ecx,1
	je Block14

 Block3:
	lea ecx,[eax-0x3EA]
	cmp ecx,0x11
	ja Block13

 Block4:
	push esi
	mov esi,1
	cmp eax,0x3F3
	jae Block6

 Block5:
	xor esi,esi
	add eax,0xFFFFFC16
	jmp Block7

 Block6:
	add eax,0xFFFFFC0D

 Block7:
	cmp eax,8
	jne Block9

 Block8:
	mov ecx,dword ptr [edi+0x80]
	cmp byte ptr [ecx+0x264],0
	sete dl
	mov byte ptr [ecx+0x264],dl
	jmp Block11

 Block9:
	test eax,eax
	jl Block12

 Block10:
	cmp eax,9
	jge Block12

 Block11:
	xor ecx,ecx
	test esi,esi
	setne cl
	lea ecx,[ecx+ecx-1]
	push ecx
	mov ecx,dword ptr [edi+0x80]
	push eax
	call CLogin::ShiftNewCharEquip
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect

 Block12:
	pop esi

 Block13:
	pop edi
	ret 4

 Block14:
	mov ecx,dword ptr [edi+0x80]
	call CLogin::OnNewCharAvatarSelCanceled
	pop edi
	ret 4

 Block15:
	mov ecx,dword ptr [edi+0x80]
	call CLogin::SendNewCharPacket
	pop edi
	ret 4
}
}
// CUINewCharNameSelect::IsRequestValid
__SUB_CLASS_THIS0(001F3400, __thiscall, 87599,  CUINewCharNameSelect, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x80]
	cmp dword ptr [eax+0x1AC],0
	jne Block3

 Block1:
	cmp dword ptr [eax+0x1A4],4
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUINewCharAvatarSelectEvan::CUINewCharAvatarSelectEvan
_SUB_EXCEPTION_HANDLER(1F4810)
__SUB_CLASS_THIS(001F4810, __thiscall, 87852,  CUINewCharAvatarSelectEvan, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4810
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
	mov edi,dword ptr [esp+0x20]
	push edi
	call CUINewCharAvatarSelect::_ctor_0
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharAvatarSelectEvan::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharAvatarSelectEvan::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharAvatarSelectEvan::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push 0
	push 1
	push 0
	push 0
	push 0xA
	push 0x179
	push 0xE1
	mov ecx,0xFFFFF5CB
	sub ecx,eax
	push ecx
	push 0x6D
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharJobSelect::Draw
_SUB_EXCEPTION_HANDLER(1F38E0)
__SUB_CLASS_THIS(001F38E0, __thiscall, 87737,  CUINewCharJobSelect, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F38E0
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
	mov eax,dword ptr [esp+0x2C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,dword ptr [esi+0x80]
	mov eax,dword ptr [edx+0x2C0]
	mov edi,dword ptr [esp+0x2C]
	lea ecx,[eax-1]
	mov dword ptr [esp+0x24],0
	cmp ecx,4
	ja Block7

 Block1:
	mov edx,3
	mov word ptr [esp+0xC],dx
	mov dword ptr [esp+0x14],0xFF
	mov ecx,dword ptr [esi+0xAC]
	lea eax,[ecx+eax*4-4]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x24],1
	test edi,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0xC]
	push edx
	push eax
	push 0x66
	push 0x40
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0xC],8
	mov byte ptr [esp+0x24],0
	jne Block6

 Block4:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test edi,edi
	je Block9

 Block8:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block9:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CUINewCharAvatarSelectAran::OnCreate
_SUB_EXCEPTION_HANDLER(1FC8C0)
__SUB_CLASS_THIS(001FC8C0, __thiscall, 87840,  CUINewCharAvatarSelectAran, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FC8C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x5C],ebx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
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
	lea edx,[ebp-0x1C]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
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
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x141C
	push eax
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
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[ebp+0x30]
	push edx
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],9
	cmp ecx,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[ebp+0x30]
	push eax
	lea edx,[ebp+0x4C]
	push edx
	push 0xFFFFFFFF
	push 0x18F
	push 0x10E
	push edi
	push edi
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x124]
	cmp esi,eax
	je Block32

 Block28:
	mov dword ptr [ebx+0x124],eax
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	cmp esi,edi
	je Block32

 Block31:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block32:
	mov eax,dword ptr [ebp+0x60]
	cmp eax,edi
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],8
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],7
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea edx,[ebp+0x60]
	push edx
	mov ecx,ebx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0xA
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],eax
	cmp eax,edi
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	mov esi,dword ptr [ebx+0x124]
	mov byte ptr [ebp-4],0xB
	cmp esi,edi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block48

 Block47:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0xA
	jne Block51

 Block49:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov ecx,dword ptr [ebp+0x5C]
	lea eax,[ebp+0x60]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xC
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],eax
	cmp eax,edi
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block56:
	mov ecx,dword ptr [ebp+0x5C]
	mov esi,dword ptr [ecx+0x124]
	mov byte ptr [ebp-4],0xD
	cmp esi,edi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x58]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block60

 Block59:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	cmp eax,edi
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov ecx,dword ptr [ebp+0x5C]
	mov esi,dword ptr [ecx+0x124]
	cmp esi,edi
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block70

 Block69:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block70:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov eax,3
	mov word ptr [ebp+0x30],ax
	mov dword ptr [ebp+0x38],edi
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0x124]
	mov bl,0xF
	mov byte ptr [ebp-4],bl
	cmp ecx,edi
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x10
	cmp esi,edi
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x24]
	push eax
	push edi
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block78

 Block77:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block78:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block80

 Block79:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block80:
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x30],si
	jne Block87

 Block81:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,edi
	je Block83

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block83:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],si
	jne Block88

 Block85:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	cmp eax,edi
	je Block89

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block87:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp+0x30]
	push edx
	call ebx
	jmp Block84

 Block88:
	lea ecx,[ebp+0x4C]
	push ecx
	call ebx

 Block89:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push edx
	call esi
	lea eax,[ebp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x11
	call esi
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	push edi
	push edi
	lea eax,[ebp+0x4C]
	push eax
	lea ecx,[ebp+0x30]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1416
	push edx
	mov byte ptr [ebp-4],0x12
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x13
	cmp dword ptr [_D_G_RM],edi
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x12
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block98

 Block96:
	cmp eax,0x80004002
	je Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	mov esi,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x2C],si
	jne Block101

 Block99:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[ebp-0x2C]
	push edx
	call ebx

 Block102:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x30],si
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[ebp+0x30]
	push ecx
	call ebx

 Block106:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x4C],si
	jne Block109

 Block107:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	cmp eax,edi
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp+0x4C]
	push eax
	call ebx

 Block110:
	mov ecx,dword ptr [ebp+0x5C]
	add ecx,0x128
	mov dword ptr [ebp+0x40],edi
	mov dword ptr [ebp+0x44],ecx
	mov edi,edi

 Block111:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x40]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	je Block5

 Block112:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	je Block115

 Block113:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov esi,ecx
	mov dword ptr [ebp+0x28],esi
	test eax,eax
	jge Block115

 Block114:
	cmp eax,0x80004002
	jne Block1

 Block115:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x1C
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block119:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x5C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1D
	test esi,esi
	je Block5

 Block120:
	lea edx,[ebp-0x5C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block128

 Block121:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ecx,dword ptr [ebp+0x44]
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [ecx]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x48]
	test eax,eax
	je Block123

 Block122:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block123:
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [ecx],ebx
	test edi,edi
	jge Block125

 Block124:
	cmp edi,0x80004002
	jne Block136

 Block125:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x1C
	jne Block130

 Block126:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block131

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block128:
	mov edx,dword ptr [ebp+0x44]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block125

 Block129:
	mov ecx,edx
	mov dword ptr [ecx],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block125

 Block130:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x18
	call ecx
	mov eax,dword ptr [ebp+0x40]
	add dword ptr [ebp+0x44],4
	inc eax
	cmp eax,9
	mov dword ptr [ebp+0x40],eax
	jl Block111

 Block132:
	xor edi,edi
	mov dword ptr [ebp+0x20],edi
	mov dword ptr [ebp+0x14],1
	mov dword ptr [ebp+0x18],edi
	mov dword ptr [ebp+0x1C],edi
	lea edx,[ebp+0x48]
	push 0x141A
	push edx
	mov byte ptr [ebp-4],0x1F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x20
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x1F
	cmp eax,edi
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block134:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x21
	cmp eax,edi
	je Block137

 Block135:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block138

 Block136:
	push edi
	call _com_issue_error

 Block137:
	xor eax,eax

 Block138:
	mov byte ptr [ebp-4],0x1F
	cmp eax,edi
	je Block150

 Block139:
	add eax,8
	cmp eax,edi
	je Block150

 Block140:
	lea esi,[eax-8]
	cmp esi,edi
	je Block142

 Block141:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block142:
	mov ebx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebx+0x118]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [ebx+0x118],esi
	test eax,eax
	je Block146

 Block143:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call edi
	test eax,eax
	jne Block146

 Block144:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block146

 Block145:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block146:
	mov ecx,dword ptr [ebx+0x118]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp+0x14]
	push edx
	push 0
	push 0x109
	push 0x3C
	push 0x3E8
	push ebx
	call eax
	lea ecx,[ebp+0x48]
	push 0x1418
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x22
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block148

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block148:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block151

 Block149:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block152

 Block150:
	xor esi,esi
	jmp Block142

 Block151:
	xor eax,eax

 Block152:
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block165

 Block153:
	add eax,8
	je Block165

 Block154:
	lea esi,[eax-8]
	test esi,esi
	je Block156

 Block155:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block156:
	mov eax,dword ptr [ebx+0x120]
	mov dword ptr [ebx+0x120],esi
	test eax,eax
	je Block160

 Block157:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call edi
	test eax,eax
	jne Block160

 Block158:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block160

 Block159:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block160:
	mov ecx,dword ptr [ebx+0x120]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0x109
	push 0x86
	push 0x3E9
	push ebx
	call edx
	mov dword ptr [ebp+0x5C],0x3F3
	mov dword ptr [ebp+0x40],0x54
	lea esi,[ebx+0xD0]
	mov dword ptr [ebp+0x44],9

 Block161:
	lea eax,[ebp+0x48]
	push 0x1417
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x24
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block163

 Block162:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block163:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block166

 Block164:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block167

 Block165:
	xor esi,esi
	jmp Block156

 Block166:
	xor eax,eax

 Block167:
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block179

 Block168:
	add eax,8
	je Block179

 Block169:
	lea edi,[eax-8]
	test edi,edi
	je Block171

 Block170:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block171:
	mov eax,dword ptr [esi-0x48]
	mov dword ptr [esi-0x48],edi
	test eax,eax
	je Block175

 Block172:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block175

 Block173:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block175

 Block174:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block175:
	mov ecx,dword ptr [esi-0x48]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	mov eax,dword ptr [ebp+0x40]
	push 0
	push eax
	mov eax,dword ptr [ebp+0x5C]
	push 0x59
	add eax,0xFFFFFFF7
	push eax
	push ebx
	call edx
	lea eax,[ebp+0x28]
	push 0x1419
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x26
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block177

 Block176:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block177:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x2C],eax
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block180

 Block178:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block181

 Block179:
	xor edi,edi
	jmp Block171

 Block180:
	xor eax,eax

 Block181:
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block195

 Block182:
	add eax,8
	je Block195

 Block183:
	lea edi,[eax-8]
	test edi,edi
	je Block185

 Block184:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block185:
	mov eax,dword ptr [esi]
	mov dword ptr [esi],edi
	test eax,eax
	je Block189

 Block186:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block189

 Block187:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block189

 Block188:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block189:
	mov edi,dword ptr [ebp+0x40]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	mov eax,dword ptr [ebp+0x5C]
	push 0
	push edi
	push 0xE2
	push eax
	push ebx
	call edx
	mov eax,1
	add dword ptr [ebp+0x5C],eax
	add edi,0x12
	add esi,8
	sub dword ptr [ebp+0x44],eax
	mov dword ptr [ebp+0x40],edi
	jne Block161

 Block190:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block192

 Block191:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block192:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block194

 Block193:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block194:
	lea esp,[ebp-0x6C]
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

 Block195:
	xor edi,edi
	jmp Block185
}
}
// CUINewCharAvatarSelect::OnCreate
__SUB_CLASS_THIS(001F3340, __thiscall, 87781,  CUINewCharAvatarSelect, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CUINewCharAvatarSelect::CUINewCharAvatarSelect
_SUB_EXCEPTION_HANDLER(1F3AF0)
__SUB_CLASS_THIS(001F3AF0, __thiscall, 87778,  CUINewCharAvatarSelect, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F3AF0
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance],edi

 Block3:
	mov edx,dword ptr [esp+0x20]
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 9
	mov dword ptr [eax],edx
	push 8
	lea eax,[esi+0x84]
	push eax
	mov byte ptr [esp+0x2C],1
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharAvatarSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharAvatarSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharAvatarSelect::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 9
	push 8
	lea ecx,[esi+0xCC]
	push ecx
	mov byte ptr [esp+0x2C],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esi+0x120],edi
	mov dword ptr [esi+0x124],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 9
	push 4
	lea edx,[esi+0x128]
	push edx
	mov byte ptr [esp+0x2C],6
	call __eh_vector_ctor_iterator
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
// CUINewCharRaceSelect::OnSetFocus
__SUB_CLASS_THIS(001F33A0, __thiscall, 87560,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	test edx,edx
	je Block2

 Block1:
	lea eax,[ecx-4]
	neg eax
	push esi
	mov esi,dword ptr [ecx+0x7C]
	sbb eax,eax
	and eax,ecx
	mov dword ptr [esi+0x1C8],eax
	pop esi

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CWnd::OnSetFocus
}
}
// CUINewCharJobSelect::OnButtonClicked
__SUB_CLASS_THIS(001F35D0, __thiscall, 87738,  CUINewCharJobSelect, void, uint32_t) {
__asm {

 Block0:
	call CUINewCharJobSelect::IsRequestValid
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFC18
	cmp eax,3
	ja Block4

 Block2:
	push esi
	push edi
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block5
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7


 Block3:
	mov ecx,dword ptr [ecx+0x80]
	call CLogin::OnNewCharJobSel
	pop edi
	pop esi

 Block4:
	ret 4

 Block5:
	mov ecx,dword ptr [ecx+0x80]
	call CLogin::OnNewCharJobSelCanceled
	pop edi
	pop esi
	ret 4

 Block6:
	mov esi,dword ptr [ecx+0x80]
	mov eax,dword ptr [esi+0x2C0]
	add eax,3
	cdq
	mov edi,5
	idiv edi
	pop edi
	inc edx
	mov dword ptr [esi+0x2C0],edx
	pop esi
	mov dword ptr [esp+4],0
	jmp  CWnd::InvalidateRect

 Block7:
	mov esi,dword ptr [ecx+0x80]
	mov eax,dword ptr [esi+0x2C0]
	add eax,5
	cdq
	mov edi,5
	idiv edi
	pop edi
	mov dword ptr [esp+8],0
	inc edx
	mov dword ptr [esi+0x2C0],edx
	pop esi
	jmp  CWnd::InvalidateRect
}
}
// CUINewCharNameSelect::OnKey
_SUB_EXCEPTION_HANDLER(1F5090)
__SUB_CLASS_THIS(001F5090, __thiscall, 87597,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F5090
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edx,edx
	test dword ptr [esp+0x24],0x80000000
	mov dword ptr [esp+0xC],edx
	jne Block15

 Block1:
	mov eax,dword ptr [esp+0x20]
	cmp eax,0xD
	je Block4

 Block2:
	cmp eax,0x1B
	jne Block15

 Block3:
	mov ecx,dword ptr [esi+0x7C]
	call CLogin::OnNewCharCanceled
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8

 Block4:
	lea ecx,[esi-4]
	call CUINewCharNameSelect::IsRequestValid
	test eax,eax
	je Block8

 Block5:
	mov ecx,dword ptr [esi+0x94]
	lea eax,[esp+0x24]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov edx,1
	test eax,eax
	je Block8

 Block6:
	cmp byte ptr [eax],0
	je Block8

 Block7:
	xor bl,bl
	jmp Block9

 Block8:
	mov bl,1

 Block9:
	test dl,1
	je Block12

 Block10:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	test bl,bl
	jne Block15

 Block13:
	mov ecx,dword ptr [esi+0x94]
	lea edx,[esp+0x20]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0x7C]
	push eax
	mov dword ptr [esp+0x1C],0
	call CLogin::SendCheckDuplicateIDPacket
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUINewCharJobSelect::OnKey
__SUB_CLASS_THIS(001F3430, __thiscall, 87739,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block5

 Block1:
	mov eax,dword ptr [esp+4]
	cmp eax,0xD
	je Block4

 Block2:
	cmp eax,0x1B
	jne Block5

 Block3:
	mov ecx,dword ptr [ecx+0x7C]
	call CLogin::OnNewCharJobSelCanceled
	ret 8

 Block4:
	mov ecx,dword ptr [ecx+0x7C]
	call CLogin::OnNewCharJobSel

 Block5:
	ret 8
}
}
// CConfirmRaceDlg::SetOption
_SUB_EXCEPTION_HANDLER(1F75B0)
__SUB_CLASS_THIS(001F75B0, __thiscall, 87886,  CConfirmRaceDlg, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F75B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x128
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x13C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [esp+0x14C]
	mov ecx,dword ptr [esp+0x150]
	xor esi,esi
	mov dword ptr [ebp+0xA4],eax
	mov word ptr [ebp+0xA8],cx
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x144],esi
	cmp eax,4
	ja Block34

 Block1:
	cmp EAX, 0
je Block27
cmp EAX, 1
je Block8
cmp EAX, 2
je Block2
cmp EAX, 3
je Block15
cmp EAX, 4
je Block21


 Block2:
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x148],1
	call Ztl_variant_t::_ctor_1
	push esi
	push esi
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x78]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x15C9
	mov bl,2
	push edx
	mov byte ptr [esp+0x160],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x158],3
	cmp dword ptr [_D_G_RM],esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0xF0]
	mov byte ptr [esp+0x158],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea ecx,[esp+0xDC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	jmp Block33

 Block8:
	push offset _D_VTMISSING
	cmp cx,si
	je Block12

 Block9:
	lea ecx,[esp+0x60]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x148],5
	call Ztl_variant_t::_ctor_1
	push esi
	push esi
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x15CC
	mov bl,6
	push eax
	mov byte ptr [esp+0x160],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x158],7
	cmp dword ptr [_D_G_RM],esi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x110]
	push ecx
	mov byte ptr [esp+0x15C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0xFC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x5C]
	jmp Block33

 Block12:
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x148],9
	call Ztl_variant_t::_ctor_1
	push esi
	push esi
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x15C8
	push ecx
	mov byte ptr [esp+0x160],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x158],0xB
	cmp dword ptr [_D_G_RM],esi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x130]
	mov byte ptr [esp+0x158],0xA
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0x11C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x18]
	jmp Block33

 Block15:
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xA0]
	mov byte ptr [esp+0x148],0xD
	call Ztl_variant_t::_ctor_1
	push esi
	push esi
	lea eax,[esp+0x84]
	push eax
	lea ecx,[esp+0xA8]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x15CA
	mov bl,0xE
	push edx
	mov byte ptr [esp+0x160],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x158],0xF
	cmp dword ptr [_D_G_RM],esi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea eax,[esp+0x100]
	mov byte ptr [esp+0x158],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block20

 Block18:
	cmp eax,0x80004002
	je Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea ecx,[esp+0xEC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x9C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x7C]
	jmp Block33

 Block21:
	push offset _D_VTMISSING
	lea ecx,[esp+0x90]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xC0]
	mov byte ptr [esp+0x148],0x11
	call Ztl_variant_t::_ctor_1
	push esi
	push esi
	lea ecx,[esp+0x94]
	push ecx
	lea edx,[esp+0xC8]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x15CB
	mov bl,0x12
	push eax
	mov byte ptr [esp+0x160],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x158],0x13
	cmp dword ptr [_D_G_RM],esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x120]
	push ecx
	mov byte ptr [esp+0x15C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea ecx,[esp+0x10C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xBC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x8C]
	jmp Block33

 Block27:
	push offset _D_VTMISSING
	lea ecx,[esp+0xD0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xB0]
	mov byte ptr [esp+0x148],0x15
	call Ztl_variant_t::_ctor_1
	push esi
	push esi
	lea edx,[esp+0xD4]
	push edx
	lea eax,[esp+0xB8]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x197B
	mov bl,0x16
	push ecx
	mov byte ptr [esp+0x160],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x158],0x17
	cmp dword ptr [_D_G_RM],esi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[esp+0x140]
	mov byte ptr [esp+0x158],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea ecx,[esp+0x12C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xAC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xCC]

 Block33:
	mov byte ptr [esp+0x144],0
	call Ztl_variant_t::~Ztl_variant_t

 Block34:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],esi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x144],0x1A
	cmp ecx,esi
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xA0]
	cmp esi,eax
	je Block43

 Block39:
	mov dword ptr [ebp+0xA0],eax
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block41:
	test esi,esi
	je Block43

 Block42:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block43:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block45:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x144],0x19
	cmp word ptr [esp+0x18],bx
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block49:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0x2C],bx
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block53:
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x1B
	mov ecx,0xD
	mov byte ptr [esp+0x144],bl
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block55:
	mov esi,dword ptr [ebp+0xA0]
	mov byte ptr [esp+0x144],0x1C
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
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
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x144],bl
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x144],0
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x1D
	mov ecx,0xD
	mov byte ptr [esp+0x144],bl
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block67

 Block66:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block67:
	mov esi,dword ptr [ebp+0xA0]
	mov byte ptr [esp+0x144],0x1E
	test esi,esi
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
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
	test eax,eax
	jge Block71

 Block70:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block71:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x144],bl
	jne Block79

 Block72:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block74:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block75:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x144],0
	test eax,eax
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	lea eax,[esp+0x4C]
	push eax
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block80

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x18]
	push edx
	call esi
	jmp Block75

 Block80:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x148],0x1F
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x148],0x20
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x148],0x21
	call edi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea edx,[esp+0x2C]
	mov bl,0x22
	push edx
	mov byte ptr [esp+0x148],bl
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov ecx,dword ptr [ebp+0xA0]
	mov byte ptr [esp+0x144],0x23
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x3C]
	push edx
	push eax
	lea edx,[esp+0x84]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x6C],8
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x6C]
	push ecx
	call esi

 Block94:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x144],bl
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[esp+0x2C]
	push eax
	call esi

 Block98:
	mov ebx,8
	mov byte ptr [esp+0x144],0x21
	cmp word ptr [esp+0x18],bx
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block102:
	mov byte ptr [esp+0x144],0x20
	cmp word ptr [esp+0x5C],bx
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x5C]
	push ecx
	call esi

 Block106:
	mov byte ptr [esp+0x144],0x1F
	cmp word ptr [esp+0x3C],bx
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block110:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0x4C],bx
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea edx,[esp+0x4C]
	push edx
	call esi

 Block114:
	lea eax,[esp+0x3C]
	push eax
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	lea edx,[esp+0x4C]
	mov bl,0x24
	push edx
	mov byte ptr [esp+0x148],bl
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	mov esi,dword ptr [ebp+0xA0]
	mov edi,dword ptr [ebp+0x24]
	mov byte ptr [esp+0x144],0x25
	test esi,esi
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB8]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block122

 Block121:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block122:
	mov ecx,dword ptr [ebp+0xA0]
	test ecx,ecx
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x50]
	push eax
	mov eax,edi
	sub eax,dword ptr [esp+0x1C]
	push 0xA
	cdq
	sub eax,edx
	sar eax,1
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x144],bl
	cmp word ptr [esp+0x4C],si
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0x3C],si
	jne Block131

 Block129:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov esi,dword ptr [ebp+0xA0]
	test esi,esi
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block136

 Block135:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block136:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x144],0xFFFFFFFF
	test eax,eax
	je Block138

 Block137:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block138:
	mov ecx,dword ptr [esp+0x13C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x134
	ret 8
}
}
// CUINewCharAvatarSelect::~CUINewCharAvatarSelect
_SUB_EXCEPTION_HANDLER(1F3BF0)
__SUB_CLASS_THIS0(001F3BF0, __thiscall, 87780,  CUINewCharAvatarSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F3BF0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharAvatarSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharAvatarSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharAvatarSelect::`vftable'{for `ZRefCounted'}
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 9
	push 4
	lea eax,[esi+0x128]
	push eax
	mov dword ptr [esp+0x28],6
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x124]
	mov byte ptr [esp+0x18],5
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0x120],0
	lea edi,[esi+0x11C]
	mov byte ptr [esp+0x18],4
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	cmp dword ptr [esi+0x118],0
	lea edi,[esi+0x114]
	mov byte ptr [esp+0x18],3
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 9
	push 8
	lea eax,[esi+0xCC]
	push eax
	mov byte ptr [esp+0x28],2
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 9
	push 8
	lea ecx,[esi+0x84]
	push ecx
	mov byte ptr [esp+0x28],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUINewCharAvatarSelect>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUINewCharRaceSelect::HitTest
__SUB_CLASS_THIS(001F3350, __thiscall, 87563,  CUINewCharRaceSelect, int32_t, long, long, CCtrlWnd**) {
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
	je Block4

 Block2:
	cmp dword ptr [esi],0
	jne Block4

 Block3:
	xor eax,eax

 Block4:
	pop esi
	ret 0xC
}
}
// CUINewCharNameSelectAran::CUINewCharNameSelectAran
_SUB_EXCEPTION_HANDLER(1F41B0)
__SUB_CLASS_THIS(001F41B0, __thiscall, 87664,  CUINewCharNameSelectAran, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F41B0
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
	call CWnd::_ctor_default
	mov ecx,dword ptr [esp+0x20]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x98],edi
	lea eax,[esi+0x9D]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF63
	mov dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUINewCharNameSelectAran>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelectAran::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelectAran::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelectAran::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push edi
	push 1
	push edi
	push edi
	push 0xA
	push 0x114
	push 0xCF
	mov ecx,0xFFFFF5CB
	sub ecx,eax
	push ecx
	push 0x6D
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharJobSelectNormal::OnCreate
_SUB_EXCEPTION_HANDLER(1FAA20)
__SUB_CLASS_THIS(001FAA20, __thiscall, 87765,  CUINewCharJobSelectNormal, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FAA20
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
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x565
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x14]
	push 0x56B
	push ecx
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xB2
	push 0x1B
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x56C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block27

 Block18:
	add eax,8
	cmp eax,ebx
	je Block27

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block21:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xB2
	push 0x65
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x567
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],6
	cmp eax,ebx
	je Block28

 Block26:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block29

 Block27:
	xor edi,edi
	jmp Block21

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block39

 Block30:
	add eax,8
	cmp eax,ebx
	je Block39

 Block31:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block33

 Block32:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block33:
	mov eax,dword ptr [esi+0x88]
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block35

 Block34:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [esi+0x88]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x68
	push 0x1F
	push 0x3EA
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x568
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],8
	cmp eax,ebx
	je Block40

 Block38:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block41

 Block39:
	xor edi,edi
	jmp Block33

 Block40:
	xor eax,eax

 Block41:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block50

 Block42:
	add eax,8
	cmp eax,ebx
	je Block50

 Block43:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block45

 Block44:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block45:
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block47

 Block46:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block47:
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x68
	push 0x9B
	push 0x3EB
	push esi
	call eax
	mov ecx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,esi
	call CUINewCharJobSelect::OnCreate
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block50:
	xor edi,edi
	jmp Block45
}
}
// CUINewCharJobSelect::Delete
__SUB_CLASS_THIS0(001F35A0, __thiscall, 87735,  CUINewCharJobSelect, void) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	ret
}
}
// CUINewCharRaceSelect::SetKeyFocus
__SUB_CLASS_THIS(001F3560, __thiscall, 87564,  CUINewCharRaceSelect, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov ebx,ecx
	push edi
	lea esi,[ebx+0x9C]
	mov edi,6

 Block1:
	mov ecx,dword ptr [esi]
	push 0
	call CCtrlButton::SetKeyFocus
	add esi,8
	sub edi,1
	jne Block1

 Block2:
	mov eax,dword ptr [esp+0x10]
	cmp eax,5
	ja Block4

 Block3:
	mov ecx,dword ptr [ebx+eax*8+0x9C]
	push 1
	call CCtrlButton::SetKeyFocus

 Block4:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUINewCharAvatarSelectRes::OnCreate
_SUB_EXCEPTION_HANDLER(1F63D0)
__SUB_CLASS_THIS(001F63D0, __thiscall, 87870,  CUINewCharAvatarSelectRes, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F63D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x5C],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x1C]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push 0x1978
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[ebp+0x34]
	push edx
	call esi
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],8
	call esi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],9
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[ebp+0x34]
	push eax
	lea edx,[ebp+0x4C]
	push edx
	push 0xFFFFFFFF
	push 0x18A
	push 0xE8
	push ebx
	push ebx
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x124]
	cmp esi,eax
	je Block32

 Block28:
	mov dword ptr [edi+0x124],eax
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	cmp esi,ebx
	je Block32

 Block31:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block32:
	mov eax,dword ptr [ebp+0x60]
	cmp eax,ebx
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],8
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	cmp eax,ebx
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],7
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea edx,[ebp+0x60]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0xA
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],eax
	cmp eax,ebx
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	mov esi,dword ptr [edi+0x124]
	mov byte ptr [ebp-4],0xB
	cmp esi,ebx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block48

 Block47:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0xA
	jne Block51

 Block49:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	cmp eax,ebx
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],7
	cmp eax,ebx
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	lea eax,[ebp+0x60]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xC
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],eax
	test eax,eax
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block56:
	mov esi,dword ptr [edi+0x124]
	mov byte ptr [ebp-4],0xD
	test esi,esi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block60

 Block59:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block63

 Block61:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x4C]
	push eax
	call esi
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	lea edx,[ebp+0x34]
	mov bl,0xE
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov ecx,dword ptr [edi+0x124]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp+0x34]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x34],si
	jne Block75

 Block73:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],si
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov esi,dword ptr [edi+0x124]
	test esi,esi
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov eax,3
	mov word ptr [ebp+0x34],ax
	mov dword ptr [ebp+0x3C],0
	mov ecx,dword ptr [edi+0x124]
	mov bl,0x11
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea edx,[ebp+0x34]
	push edx
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	xor edi,edi
	mov byte ptr [ebp-4],0x12
	cmp esi,edi
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	mov edx,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x24]
	push eax
	push edi
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block92

 Block91:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block92:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block94

 Block93:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block94:
	mov esi,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x34],si
	jne Block97

 Block95:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	cmp eax,edi
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x4C],si
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	cmp eax,edi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x2C]
	push edx
	call esi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea ecx,[ebp+0x34]
	push ecx
	mov byte ptr [ebp-4],0x13
	call esi
	lea edx,[ebp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	push edi
	push edi
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp+0x34]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x44],esp
	push 0x1972
	mov bl,0x14
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x15
	cmp dword ptr [_D_G_RM],edi
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	lea eax,[ebp-0x5C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block111

 Block109:
	cmp eax,0x80004002
	je Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	mov esi,8
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x5C],si
	jne Block114

 Block112:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,edi
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x34],si
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,edi
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x2C],si
	jne Block122

 Block120:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,edi
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov dword ptr [ebp+0x48],edi
	lea ecx,[ecx]

 Block124:
	mov edi,dword ptr [ebp+0x48]
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	cmp edi,4
	jne Block146

 Block125:
	push 9
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	je Block5

 Block126:
	lea edx,[ebp-0x7C]
	push edx
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x60],edi
	test eax,eax
	je Block129

 Block127:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov edi,ecx
	mov dword ptr [ebp+0x60],edi
	test eax,eax
	jge Block129

 Block128:
	cmp eax,0x80004002
	jne Block1

 Block129:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x1E
	jne Block132

 Block130:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block133:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x5C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1F
	test edi,edi
	je Block5

 Block134:
	lea edx,[ebp-0x4C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block142

 Block135:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ecx,dword ptr [ebp+0x5C]
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [ecx+0x138]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x58]
	test eax,eax
	je Block137

 Block136:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block137:
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [ecx+0x138],ebx
	test esi,esi
	jge Block139

 Block138:
	cmp esi,0x80004002
	jne Block172

 Block139:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x1E
	jne Block144

 Block140:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block145

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0x1A
	call ecx
	jmp Block167

 Block142:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx+0x138]
	test eax,eax
	je Block139

 Block143:
	mov ecx,edx
	mov dword ptr [ecx+0x138],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block139

 Block144:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0x1A
	call ecx
	jmp Block167

 Block146:
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x30],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	je Block5

 Block147:
	lea edx,[ebp-0x6C]
	push edx
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x22
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x60],esi
	test eax,eax
	je Block150

 Block148:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x28]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x28]
	mov esi,ecx
	mov dword ptr [ebp+0x60],esi
	test eax,eax
	jge Block150

 Block149:
	cmp eax,0x80004002
	jne Block1

 Block150:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x24
	jne Block153

 Block151:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block154:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x30],esp
	push 0x5C6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x25
	test esi,esi
	je Block5

 Block155:
	lea edx,[ebp-0x8C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block163

 Block156:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov edi,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebp+0x5C]
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [ecx+edi*4+0x128]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x44]
	test eax,eax
	je Block158

 Block157:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block158:
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [ecx+edi*4+0x128],ebx
	test esi,esi
	jge Block160

 Block159:
	cmp esi,0x80004002
	jne Block172

 Block160:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x24
	jne Block165

 Block161:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block166

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block163:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx+edi*4+0x128]
	test eax,eax
	je Block160

 Block164:
	mov ecx,edx
	mov edx,dword ptr [ebp+0x48]
	mov dword ptr [ecx+edx*4+0x128],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block160

 Block165:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov eax,dword ptr [ebp+0x60]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x1A
	call eax

 Block167:
	mov eax,dword ptr [ebp+0x48]
	inc eax
	cmp eax,9
	mov dword ptr [ebp+0x48],eax
	jl Block124

 Block168:
	xor esi,esi
	mov dword ptr [ebp+0x20],esi
	mov dword ptr [ebp+0x14],1
	mov dword ptr [ebp+0x18],esi
	mov dword ptr [ebp+0x1C],esi
	lea ecx,[ebp+0x44]
	push 0x1976
	push ecx
	mov byte ptr [ebp-4],0x27
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x28
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x27
	cmp eax,esi
	je Block170

 Block169:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block170:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x30],eax
	mov byte ptr [ebp-4],0x29
	cmp eax,esi
	je Block173

 Block171:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block174

 Block172:
	push esi
	call _com_issue_error

 Block173:
	xor eax,eax

 Block174:
	mov byte ptr [ebp-4],0x27
	cmp eax,esi
	je Block186

 Block175:
	lea edi,[eax+8]
	cmp edi,esi
	je Block186

 Block176:
	add edi,0xFFFFFFF8
	cmp edi,esi
	je Block178

 Block177:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block178:
	mov ebx,dword ptr [ebp+0x5C]
	mov esi,dword ptr [ebx+0x118]
	mov dword ptr [ebx+0x118],edi
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	test esi,esi
	je Block182

 Block179:
	add esi,8
	lea eax,[esi+4]
	push eax
	call edi
	test eax,eax
	jne Block182

 Block180:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block182

 Block181:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block182:
	mov ecx,dword ptr [ebx+0x118]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 0x145
	push 0x35
	push 0x3E8
	push ebx
	call edx
	lea eax,[ebp+0x44]
	push 0x1974
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x2A
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block184

 Block183:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block184:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x30],eax
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block187

 Block185:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block188

 Block186:
	xor edi,edi
	jmp Block178

 Block187:
	xor eax,eax

 Block188:
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block199

 Block189:
	add eax,8
	je Block199

 Block190:
	lea esi,[eax-8]
	test esi,esi
	je Block192

 Block191:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block192:
	mov eax,dword ptr [ebx+0x120]
	mov dword ptr [ebx+0x120],esi
	test eax,eax
	je Block196

 Block193:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call edi
	test eax,eax
	jne Block196

 Block194:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block196

 Block195:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block196:
	mov ecx,dword ptr [ebx+0x120]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	xor esi,esi
	push esi
	push 0x145
	push 0x81
	push 0x3E9
	push ebx
	call edx
	mov dword ptr [ebp+0x48],esi

 Block197:
	cmp esi,5
	jne Block200

 Block198:
	dec dword ptr [ebp+0x48]
	jmp Block230

 Block199:
	xor esi,esi
	jmp Block192

 Block200:
	lea eax,[ebp+0x44]
	push 0x567
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x2C
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block202

 Block201:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block202:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x30],eax
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block204

 Block203:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block205

 Block204:
	xor eax,eax

 Block205:
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block217

 Block206:
	lea ebx,[eax+8]
	test ebx,ebx
	je Block217

 Block207:
	add ebx,0xFFFFFFF8
	test ebx,ebx
	je Block209

 Block208:
	lea ecx,[ebx+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block209:
	mov edx,dword ptr [ebp+0x5C]
	mov edi,dword ptr [edx+esi*8+0x88]
	lea eax,[edx+esi*8+0x88]
	mov dword ptr [eax],ebx
	test edi,edi
	je Block213

 Block210:
	add edi,8
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block213

 Block211:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block213

 Block212:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block213:
	mov edx,dword ptr [ebp+0x48]
	mov edi,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [edi+esi*8+0x88]
	lea eax,[edx+esi]
	lea eax,[eax+eax*8]
	lea edx,[ebp+0x14]
	push edx
	push 0
	lea ebx,[eax+eax+0x67]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	push ebx
	push 0x48
	lea edx,[esi+0x3EA]
	push edx
	push edi
	call eax
	lea ecx,[ebp+0x28]
	push 0x568
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x2E
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block215

 Block214:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block215:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x30],eax
	mov byte ptr [ebp-4],0x2F
	test eax,eax
	je Block218

 Block216:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block219

 Block217:
	xor ebx,ebx
	jmp Block209

 Block218:
	xor eax,eax

 Block219:
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block236

 Block220:
	add eax,8
	je Block236

 Block221:
	lea ecx,[eax-8]
	mov dword ptr [ebp+0x58],ecx
	test ecx,ecx
	je Block224

 Block222:
	add ecx,0xC
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block223:
	mov ecx,dword ptr [ebp+0x58]

 Block224:
	mov eax,dword ptr [edi+esi*8+0xD0]
	mov dword ptr [edi+esi*8+0xD0],ecx
	test eax,eax
	je Block229

 Block225:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block228

 Block226:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block228

 Block227:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block228:
	mov edi,dword ptr [ebp+0x5C]

 Block229:
	mov ecx,dword ptr [edi+esi*8+0xD0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push ebx
	push 0xCC
	lea eax,[esi+0x3F3]
	push eax
	push edi
	call edx

 Block230:
	inc esi
	cmp esi,9
	jl Block197

 Block231:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block233:
	mov eax,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block235

 Block234:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block235:
	lea esp,[ebp-0x9C]
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

 Block236:
	mov dword ptr [ebp+0x58],0
	jmp Block223
}
}
// CUINewCharNameSelect::OnCreate
__SUB_CLASS_THIS(001F3330, __thiscall, 87595,  CUINewCharNameSelect, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CUINewCharNameSelectNormal::OnCreate
_SUB_EXCEPTION_HANDLER(1F9A30)
__SUB_CLASS_THIS(001F9A30, __thiscall, 87641,  CUINewCharNameSelectNormal, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F9A30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x562
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x10]
	push 0x56B
	push ecx
	mov dword ptr [esp+0x78],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x88]
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x88]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xB2
	push 0x1B
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x10]
	push 0x56C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block25

 Block18:
	add eax,8
	cmp eax,ebx
	je Block25

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xB2
	push 0x65
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x2C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x74],5
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	mov dword ptr [esp+0x60],0xC
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],6
	cmp eax,ebx
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0x70],5
	cmp eax,ebx
	je Block38

 Block28:
	add eax,8
	cmp eax,ebx
	je Block38

 Block29:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block31

 Block30:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block33

 Block32:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x2C]
	push eax
	push 0xF
	push 0x78
	push 0x6C
	push 0x24
	push 0x3EA
	push esi
	call edx
	mov ecx,dword ptr [esi+0x80]
	lea eax,[esp+0x10]
	push eax
	call CLogin::GetCheckedName
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x98]
	push eax
	mov byte ptr [esp+0x74],7
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],5
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x70],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x64
	ret 4

 Block38:
	xor edi,edi
	jmp Block31
}
}
// CUINewCharAvatarSelect::OnKey
__SUB_CLASS_THIS(001F3490, __thiscall, 87784,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block5

 Block1:
	mov eax,dword ptr [esp+4]
	cmp eax,0xD
	je Block4

 Block2:
	cmp eax,0x1B
	jne Block5

 Block3:
	mov ecx,dword ptr [ecx+0x7C]
	call CLogin::OnNewCharAvatarSelCanceled
	ret 8

 Block4:
	mov ecx,dword ptr [ecx+0x7C]
	call CLogin::SendNewCharPacket

 Block5:
	ret 8
}
}
// CUINewCharNameSelect::OnSetFocus
__SUB_CLASS_THIS(001F33D0, __thiscall, 87598,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	test edx,edx
	je Block2

 Block1:
	lea eax,[ecx-4]
	neg eax
	push esi
	mov esi,dword ptr [ecx+0x7C]
	sbb eax,eax
	and eax,ecx
	mov dword ptr [esi+0x1C8],eax
	pop esi

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CWnd::OnSetFocus
}
}
// CUINewCharRaceSelect::CUINewCharRaceSelect
_SUB_EXCEPTION_HANDLER(1F3D30)
__SUB_CLASS_THIS(001F3D30, __thiscall, 87554,  CUINewCharRaceSelect, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F3D30
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUINewCharRaceSelect>::ms_pInstance],edi

 Block3:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax],edx
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharRaceSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharRaceSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharRaceSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x84],5
	mov dword ptr [esi+0x88],edi
	mov word ptr [esi+0x8C],ax
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x94],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 6
	push 8
	lea ecx,[esi+0x98]
	push ecx
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	push edi
	push 1
	push edi
	push edi
	push 0xC0000000
	push 0x258
	push 0x320
	push 0xFFFFF7C4
	push 0xFFFFFE8C
	mov ecx,esi
	mov byte ptr [esp+0x3C],4
	call CWnd::CreateWnd
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
// CUINewCharRaceSelect::OnKey
// 5F96B8
static uint8_t _SUB_1F94D0_LOOKUP_TABLE_0[28] = {
0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 2, 3, 4, 3, 
};
__SUB_CLASS_THIS(001F94D0, __thiscall, 87559,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	push esi
	mov esi,ecx
	jne Block27

 Block1:
	mov eax,dword ptr [esp+8]
	add eax,0xFFFFFFF3
	cmp eax,0x1B
	ja Block27

 Block2:
	movzx eax,byte ptr [eax+_SUB_1F94D0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block6
cmp EAX, 2
je Block8
cmp EAX, 3
je Block14
cmp EAX, 4
je Block11
cmp EAX, 5
je Block27


 Block3:
	mov ecx,dword ptr [esi+0x7C]
	cmp dword ptr [ecx+0x1A8],0
	jne Block27

 Block4:
	lea ecx,[esi-4]
	call CUINewCharRaceSelect::OpenConfirmRaceDlg
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test ecx,ecx
	je Block27

 Block5:
	mov edx,dword ptr [esi+0x7C]
	mov eax,dword ptr [edx+0x1C8]
	push eax
	call CWndMan::SetFocus
	pop esi
	ret 8

 Block6:
	mov ecx,dword ptr [esi+0x7C]
	cmp dword ptr [ecx+0x1A8],0
	jne Block27

 Block7:
	call CLogin::OnCancleRaceSelect
	pop esi
	ret 8

 Block8:
	mov eax,dword ptr [esi+0x80]
	test eax,eax
	jne Block10

 Block9:
	mov dword ptr [esi+0x80],5
	mov ecx,dword ptr [esi+0x80]
	push ecx
	lea ecx,[esi-4]
	call CUINewCharRaceSelect::SelectRaceButton
	pop esi
	ret 8

 Block10:
	dec eax
	mov ecx,eax
	push ecx
	lea ecx,[esi-4]
	mov dword ptr [esi+0x80],eax
	call CUINewCharRaceSelect::SelectRaceButton
	pop esi
	ret 8

 Block11:
	mov eax,dword ptr [esi+0x80]
	cmp eax,5
	jne Block13

 Block12:
	mov dword ptr [esi+0x80],0
	mov edx,dword ptr [esi+0x80]
	push edx
	lea ecx,[esi-4]
	call CUINewCharRaceSelect::SelectRaceButton
	pop esi
	ret 8

 Block13:
	inc eax
	mov edx,eax
	push edx
	lea ecx,[esi-4]
	mov dword ptr [esi+0x80],eax
	call CUINewCharRaceSelect::SelectRaceButton
	pop esi
	ret 8

 Block14:
	mov eax,dword ptr [esi+0x80]
	test eax,eax
	jne Block16

 Block15:
	mov dword ptr [esi+0x80],3
	mov eax,dword ptr [esi+0x80]
	push eax
	lea ecx,[esi-4]
	call CUINewCharRaceSelect::SelectRaceButton
	pop esi
	ret 8

 Block16:
	cmp eax,1
	jne Block18

 Block17:
	mov dword ptr [esi+0x80],4
	mov eax,dword ptr [esi+0x80]
	push eax
	lea ecx,[esi-4]
	call CUINewCharRaceSelect::SelectRaceButton
	pop esi
	ret 8

 Block18:
	cmp eax,3
	jne Block20

 Block19:
	mov dword ptr [esi+0x80],0
	mov eax,dword ptr [esi+0x80]
	push eax
	lea ecx,[esi-4]
	call CUINewCharRaceSelect::SelectRaceButton
	pop esi
	ret 8

 Block20:
	cmp eax,4
	jne Block22

 Block21:
	mov dword ptr [esi+0x80],1
	mov eax,dword ptr [esi+0x80]
	push eax
	lea ecx,[esi-4]
	call CUINewCharRaceSelect::SelectRaceButton
	pop esi
	ret 8

 Block22:
	cmp eax,5
	jne Block24

 Block23:
	mov dword ptr [esi+0x80],2
	mov eax,dword ptr [esi+0x80]
	push eax
	lea ecx,[esi-4]
	call CUINewCharRaceSelect::SelectRaceButton
	pop esi
	ret 8

 Block24:
	cmp eax,2
	jne Block26

 Block25:
	mov dword ptr [esi+0x80],5

 Block26:
	mov eax,dword ptr [esi+0x80]
	push eax
	lea ecx,[esi-4]
	call CUINewCharRaceSelect::SelectRaceButton

 Block27:
	pop esi
	ret 8
}
}
// CUINewCharRaceSelect::Draw
_SUB_EXCEPTION_HANDLER(1F37D0)
__SUB_CLASS_THIS(001F37D0, __thiscall, 87562,  CUINewCharRaceSelect, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F37D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	lea eax,[esp+0x20]
	push eax
	call CWnd::GetLayer
	lea ecx,[esp+0x1C]
	push ecx
	xor ebx,ebx
	mov ecx,ebp
	mov dword ptr [esp+0x30],ebx
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],1
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	mov edi,dword ptr [esp+0x14]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x8C]
	push 0xFFFFFF
	push edi
	push eax
	push ebx
	push ebx
	push esi
	call ecx
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov edx,dword ptr [esp+0x34]
	push edx
	mov ecx,ebp
	call CWnd::Draw
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x30],bl
	call ecx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CUINewCharAvatarSelectRes::CUINewCharAvatarSelectRes
_SUB_EXCEPTION_HANDLER(1F4900)
__SUB_CLASS_THIS(001F4900, __thiscall, 87867,  CUINewCharAvatarSelectRes, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4900
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
	mov edi,dword ptr [esp+0x20]
	push edi
	call CUINewCharAvatarSelect::_ctor_0
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharAvatarSelectRes::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharAvatarSelectRes::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharAvatarSelectRes::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push 0
	push 1
	push 0
	push 0
	push 0xA
	push 0x179
	push 0xE1
	mov ecx,0xFFFFF5C8
	sub ecx,eax
	push ecx
	push 0x62
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharJobSelect::CUINewCharJobSelect
__SUB_CLASS_THIS(001F4BA0, __thiscall, 87733,  CUINewCharJobSelect, void, CLogin*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	lea ecx,[esi+0x80]
	xor eax,eax
	cmp ecx,eax
	je Block2

 Block1:
	lea edx,[ecx-0x80]
	mov dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance],edx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUINewCharJobSelect>::ms_pInstance],eax

 Block3:
	mov edx,dword ptr [esp+8]
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharJobSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharJobSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharJobSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [ecx],edx
	mov dword ptr [esi+0x88],eax
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	mov eax,esi
	pop esi
	ret 4
}
}
// CUINewCharAvatarSelectNormal::CUINewCharAvatarSelectNormal
_SUB_EXCEPTION_HANDLER(1F4630)
__SUB_CLASS_THIS(001F4630, __thiscall, 87822,  CUINewCharAvatarSelectNormal, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4630
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
	mov edi,dword ptr [esp+0x20]
	push edi
	call CUINewCharAvatarSelect::_ctor_0
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharAvatarSelectNormal::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharAvatarSelectNormal::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharAvatarSelectNormal::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push 0
	push 1
	push 0
	push 0
	push 0xA
	push 0x179
	push 0xE1
	mov ecx,0xFFFFF5CB
	sub ecx,eax
	push ecx
	push 0x6D
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharAvatarSelectCygnus::CUINewCharAvatarSelectCygnus
_SUB_EXCEPTION_HANDLER(1F4540)
__SUB_CLASS_THIS(001F4540, __thiscall, 87807,  CUINewCharAvatarSelectCygnus, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4540
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
	mov edi,dword ptr [esp+0x20]
	push edi
	call CUINewCharAvatarSelect::_ctor_0
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharAvatarSelectCygnus::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharAvatarSelectCygnus::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharAvatarSelectCygnus::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push 0
	push 1
	push 0
	push 0
	push 0xA
	push 0x17A
	push 0xE4
	mov ecx,0xFFFFF5CB
	sub ecx,eax
	push ecx
	push 0x6D
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharJobSelect::OnCreate
_SUB_EXCEPTION_HANDLER(1FA760)
__SUB_CLASS_THIS(001FA760, __thiscall, 87736,  CUINewCharJobSelect, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FA760
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
	mov dword ptr [ebp-0x1C],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x30]
	push eax
	call esi
	lea ecx,[ebp-0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x40]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp-0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp-0x40]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x18],esp
	push 0x566
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x50],si
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x40],si
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x30],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [ebp-0x14]
	cmp esi,ebx
	je Block38

 Block22:
	lea esp,[esp]

 Block23:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x60]
	mov byte ptr [ebp-4],8
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x18],esi
	test eax,eax
	je Block26

 Block24:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x20]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x20]
	mov esi,ecx
	mov dword ptr [ebp-0x18],esi
	test eax,eax
	jge Block26

 Block25:
	cmp eax,0x80004002
	jne Block1

 Block26:
	mov ecx,dword ptr [ebp-0x1C]
	push 0xFFFFFFFF
	add ecx,0xAC
	mov byte ptr [ebp-4],0xA
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	cmp edi,esi
	je Block31

 Block27:
	mov dword ptr [eax],esi
	test esi,esi
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block29:
	test edi,edi
	je Block31

 Block30:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block31:
	mov byte ptr [ebp-4],9
	test esi,esi
	je Block33

 Block32:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block33:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],7
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0x58]
	xor edx,edx
	mov word ptr [ebp-0x60],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov esi,dword ptr [ebp-0x14]
	inc ebx
	cmp ebx,5
	jl Block23

 Block38:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block40

 Block39:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block40:
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
}
}
// CUINewCharNameSelect::~CUINewCharNameSelect
_SUB_EXCEPTION_HANDLER(1F3A10)
__SUB_CLASS_THIS0(001F3A10, __thiscall, 87594,  CUINewCharNameSelect, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F3A10
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
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelect::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0x94]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x8C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x84]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
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
// CUINewCharNameSelectCygnus::CUINewCharNameSelectCygnus
_SUB_EXCEPTION_HANDLER(1F3F50)
__SUB_CLASS_THIS(001F3F50, __thiscall, 87612,  CUINewCharNameSelectCygnus, void, CLogin*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F3F50
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
	call CWnd::_ctor_default
	mov ecx,dword ptr [esp+0x20]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelect::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelect::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelect::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x98],edi
	lea eax,[esi+0x9D]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF63
	mov dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUINewCharNameSelectCygnus>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [esi],offset CUINewCharNameSelectCygnus::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewCharNameSelectCygnus::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewCharNameSelectCygnus::`vftable'{for `ZRefCounted'}
	call CLogin::ConvertSelectedRaceToUIRace
	imul eax,0x258
	push edi
	push 1
	push edi
	push edi
	push 0xA
	push 0xE2
	push 0xCB
	mov ecx,0xFFFFF5CB
	sub ecx,eax
	push ecx
	push 0x6D
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUINewCharRaceSelect::SelectRaceButton
_SUB_EXCEPTION_HANDLER(1F4D60)
__SUB_CLASS_THIS(001F4D60, __thiscall, 87558,  CUINewCharRaceSelect, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4D60
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0x84],eax
	cmp eax,5
	ja Block3

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block2
cmp EAX, 2
je Block5
cmp EAX, 3
je Block10
cmp EAX, 4
je Block11
cmp EAX, 5
je Block12


 Block2:
	mov dword ptr [esi+0x88],1

 Block3:
	test eax,eax
	jne Block6

 Block4:
	mov eax,1
	mov word ptr [esi+0x8C],ax
	jmp Block7

 Block5:
	mov dword ptr [esi+0x88],2

 Block6:
	xor ecx,ecx
	mov word ptr [esi+0x8C],cx

 Block7:
	mov eax,dword ptr [esi+0x88]
	mov ecx,dword ptr [esi+0x80]
	mov dword ptr [ecx+0x240],eax
	movzx eax,word ptr [esi+0x8C]
	mov ecx,dword ptr [esi+0x80]
	lea edx,[esp+0x18]
	push 0x140C
	push edx
	mov word ptr [ecx+0x244],ax
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
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esi+0x84]
	push eax
	mov ecx,esi
	call CUINewCharRaceSelect::SetKeyFocus
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block10:
	mov dword ptr [esi+0x88],3
	jmp Block6

 Block11:
	mov dword ptr [esi+0x88],4
	jmp Block6

 Block12:
	mov dword ptr [esi+0x88],0
	jmp Block6
}
}
// CUINewCharRaceSelect::GetRTTI
__SUB_CLASS_THIS0(001F3E20, __thiscall, 87566,  CUINewCharRaceSelect, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUINewCharRaceSelect::ms_RTTI_CUINewCharRaceSelect
	ret
}
}
// CUINewCharJobSelect::IsRequestValid
__SUB_CLASS_THIS0(001F3460, __thiscall, 87740,  CUINewCharJobSelect, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x80]
	cmp dword ptr [eax+0x1AC],0
	jne Block3

 Block1:
	cmp dword ptr [eax+0x1A4],4
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUINewCharNameSelect::OnButtonClicked
_SUB_EXCEPTION_HANDLER(1F4FE0)
__SUB_CLASS_THIS(001F4FE0, __thiscall, 87596,  CUINewCharNameSelect, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F4FE0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call CUINewCharNameSelect::IsRequestValid
	test eax,eax
	je Block6

 Block1:
	mov eax,dword ptr [esp+0x18]
	sub eax,0x3E8
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov ecx,dword ptr [esi+0x80]
	call CLogin::OnNewCharCanceled
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block4:
	mov ecx,dword ptr [esi+0x98]
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0x80]
	push eax
	mov dword ptr [esp+0x14],0
	call CLogin::SendCheckDuplicateIDPacket
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CUINewCharNameSelectEvan::OnCreate
_SUB_EXCEPTION_HANDLER(1FA0D0)
__SUB_CLASS_THIS(001FA0D0, __thiscall, 87693,  CUINewCharNameSelectEvan, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FA0D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x562
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x10]
	push 0x56B
	push ecx
	mov dword ptr [esp+0x78],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x88]
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x88]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xB2
	push 0x1B
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x10]
	push 0x56C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x70],bl
	cmp eax,ebx
	je Block25

 Block18:
	add eax,8
	cmp eax,ebx
	je Block25

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xB2
	push 0x65
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x2C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x74],5
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	mov dword ptr [esp+0x60],0xC
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],6
	cmp eax,ebx
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0x70],5
	cmp eax,ebx
	je Block38

 Block28:
	add eax,8
	cmp eax,ebx
	je Block38

 Block29:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block31

 Block30:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block33

 Block32:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x2C]
	push eax
	push 0xF
	push 0x78
	push 0x6C
	push 0x24
	push 0x3EA
	push esi
	call edx
	mov ecx,dword ptr [esi+0x80]
	lea eax,[esp+0x10]
	push eax
	call CLogin::GetCheckedName
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x98]
	push eax
	mov byte ptr [esp+0x74],7
	call CCtrlEdit::SetText
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x70],5
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x70],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x64
	ret 4

 Block38:
	xor edi,edi
	jmp Block31
}
}
