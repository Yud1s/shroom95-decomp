#include "regen.hpp"
// SlideMenuDlg.ipp
#include "SlideMenuDlg.hpp"

// CSlideMenuDlg::SetButtonInfo
_SUB_EXCEPTION_HANDLER(312E90)
__SUB_CLASS_THIS(00312E90, __thiscall, 52281,  CSlideMenuDlg, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_312E90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0x5C]
	push 0xFFFFFFFF
	xor edi,edi
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x24],edi
	call ZXString16::AssignCharStr
	push 0xFFFFFFFF
	push offset _S___12
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x5C],1
	mov dword ptr [esp+0x28],edi
	call ZXString16::AssignCharStr
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],2
	cmp esi,edi
	je Block2

 Block1:
	mov eax,dword ptr [esi-4]
	shr eax,1
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push eax
	push esi
	lea ecx,[esp+0x24]
	call ZXString16::_Cat
	mov byte ptr [esp+0x54],1
	cmp esi,edi
	je Block5

 Block4:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block5:
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x44],edi
	lea ecx,[ebx+0x90]
	push 0xFFFFFFFF
	mov byte ptr [esp+0x58],3
	mov dword ptr [esp+0x4C],0xFFFFFFF6
	call ZArray<CSlideMenuDlg::MAINBUTTONINFO>::InsertBefore
	lea ecx,[esp+0x40]
	mov esi,eax
	push ecx
	mov ecx,esi
	call ZXString16::op_assign
	lea edx,[esp+0x44]
	push edx
	lea ecx,[esi+4]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	mov ebp,dword ptr [esp+0x1C]
	mov dword ptr [esi+8],eax
	xor esi,esi

 Block6:
	cmp ebp,edi
	je Block8

 Block7:
	mov eax,dword ptr [ebp-4]
	shr eax,1
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	dec eax
	cmp esi,eax
	jge Block27

 Block10:
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	cmp word ptr [ebp+esi*2],0x23
	mov byte ptr [esp+0x54],5
	jne Block23

 Block11:
	inc esi
	cmp word ptr [ebp+esi*2],0x23
	je Block14

 Block12:
	mov cl,byte ptr [ebp+esi*2]
	push 1
	lea edx,[esp+0x18]
	mov byte ptr [esp+0x18],cl
	push edx
	lea ecx,[esp+0x2C]
	call ZXString<char>::_Cat
	inc esi
	cmp word ptr [ebp+esi*2],0x23
	jne Block12

 Block13:
	mov ebx,dword ptr [esp+0x24]

 Block14:
	mov eax,esi

 Block15:
	inc esi
	cmp word ptr [ebp+esi*2],0x23
	jne Block15

 Block16:
	push esi
	inc eax
	push eax
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	call ZXString16::Substring
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x58],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x54],5
	cmp eax,edi
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x38],edi
	push ebx
	mov byte ptr [esp+0x58],7
	call _atoi
	add esp,4
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x40],eax
	call ZXString16::op_assign
	lea edx,[esp+0x30]
	push 0x11AB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x28],edi
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [edx+0x98]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x64],9
	call ZXString16::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x3C]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x54],8
	cmp eax,edi
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x54],7
	cmp eax,edi
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x18]
	push 0xFFFFFFFF
	add ecx,0x90
	call ZArray<CSlideMenuDlg::MAINBUTTONINFO>::InsertBefore
	mov edi,eax
	lea eax,[esp+0x34]
	push eax
	mov ecx,edi
	call ZXString16::op_assign
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[edi+4]
	call ZXString16::op_assign
	mov edx,dword ptr [esp+0x3C]
	lea ecx,[esp+0x34]
	mov dword ptr [edi+8],edx
	mov byte ptr [esp+0x54],5
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
	mov eax,dword ptr [esp+0x20]
	xor edi,edi

 Block23:
	mov byte ptr [esp+0x54],4
	cmp eax,edi
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov byte ptr [esp+0x54],3
	cmp ebx,edi
	je Block6

 Block26:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block6

 Block27:
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esi+0x90]
	add esi,0x90
	cmp eax,edi
	je Block31

 Block28:
	cmp dword ptr [eax-4],1
	je Block43

 Block29:
	cmp eax,edi
	je Block31

 Block30:
	cmp dword ptr [eax-4],2
	je Block35

 Block31:
	or ebx,0xFFFFFFFF
	cmp dword ptr [eax+0x14],ebx
	jne Block35

 Block32:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x54],1
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
	mov byte ptr [esp+0x54],0
	cmp ebp,edi
	je Block34

 Block33:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x54],ebx
	jmp Block46

 Block35:
	mov ebx,dword ptr [esi]
	mov eax,ebx
	cmp eax,edi
	je Block37

 Block36:
	mov ecx,dword ptr [eax-4]
	cmp ecx,edi
	jne Block38

 Block37:
	mov dword ptr [esp+0x20],edi
	jmp Block39

 Block38:
	lea ecx,[ecx+ecx*2]
	lea edx,[eax+ecx*4-0xC]
	mov dword ptr [esp+0x20],edx

 Block39:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call ZArray<CSlideMenuDlg::MAINBUTTONINFO>::GetNext
	mov edx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x30],0
	mov ecx,dword ptr [esp+0x30]
	push ecx
	push edx
	push ebx
	push esi
	call ZSortHelper<CSlideMenuDlg::MAINBUTTONINFO, CSlideMenuDlg::CompButtonInfo>::call
	mov eax,dword ptr [esi]
	add esp,0x10
	cmp eax,edi
	je Block42

 Block40:
	cmp dword ptr [eax-4],2
	jne Block42

 Block41:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [eax+0x94],edi
	jmp Block43

 Block42:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0x94],1

 Block43:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x54],1
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
	mov byte ptr [esp+0x54],0
	cmp ebp,edi
	je Block45

 Block44:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block45:
	mov dword ptr [esp+0x54],0xFFFFFFFF

 Block46:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,edi
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 4
}
}
// CSlideMenuDlg::ArrowButtonClicked
__SUB_CLASS_THIS(00310CD0, __thiscall, 52282,  CSlideMenuDlg, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push esi
	push edi
	mov esi,ecx
	cmp eax,0xBB8
	jne Block3

 Block1:
	add dword ptr [esi+0x94],0xFFFFFFFF
	js Block8

 Block2:
	jmp Block7

 Block3:
	cmp eax,0xBB9
	jne Block8

 Block4:
	inc dword ptr [esi+0x94]
	mov eax,dword ptr [esi+0x90]
	mov ecx,dword ptr [esi+0x94]
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax-4]

 Block6:
	add ecx,2
	cmp ecx,eax
	ja Block8

 Block7:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x2C]
	lea edi,[esi+4]
	mov ecx,edi
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	mov ecx,esi
	mov edi,eax
	call CWnd::Destroy
	push 0
	push 0
	push 1
	push 0xA
	push 0xA5
	push 0xEB
	push edi
	push ebx
	mov ecx,esi
	call CDialog::CreateDlg_0

 Block8:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CSlideMenuDlg::CSlideMenuDlg
_SUB_EXCEPTION_HANDLER(3133E0)
__SUB_CLASS_THIS(003133E0, __thiscall, 52270,  CSlideMenuDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3133E0
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
	int 3// TODO: 	mov dword ptr [esi],offset CSlideMenuDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSlideMenuDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSlideMenuDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x98],1
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	mov eax,dword ptr [esp+0x20]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x1C],0xA
	call CSlideMenuDlg::SetSlideMenuDlg
	push edi
	push 1
	push 0xA5
	push 0xEB
	mov ecx,esi
	call CDialog::CreateDlg_1
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
// CSlideMenuDlg::OnCreate
_SUB_EXCEPTION_HANDLER(3125A0)
__SUB_CLASS_THIS(003125A0, __thiscall, 52273,  CSlideMenuDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3125A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x40]
	push 0x11AA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	xor ebp,ebp
	mov dword ptr [esp+0xA0],ebp
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0xAC],1
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xA0],3
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xA0],4
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea eax,[esp+0x50]
	push 0x11A9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x2C],ebp
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xAC],6
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebp
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA0],8
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xA0],9
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push eax
	call edi
	lea ecx,[esp+0x64]
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
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0xA4],0xA
	call edi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esp+0x20]
	push ebp
	push ebp
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xB
	push eax
	mov byte ptr [esp+0xB8],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xB4],0xC
	cmp dword ptr [_D_G_RM],ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x98]
	push ecx
	mov byte ptr [esp+0xB8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov edi,8
	mov byte ptr [esp+0xA0],0xF
	cmp word ptr [esp+0x84],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x84]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [esp+0xA0],0x10
	cmp word ptr [esp+0x54],di
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,ebp
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [esp+0xA0],0x11
	cmp word ptr [esp+0x64],di
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	push ebp
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_ISANIBACKGRD
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0x30]
	mov byte ptr [esp+0xA8],0x12
	cmp edi,ebp
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x7C]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xAC],0x11
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xA8],0x13
	call get_int32
	add esp,8
	cmp word ptr [esp+0x74],8
	mov ebx,eax
	mov byte ptr [esp+0xA0],0x11
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	cmp ebx,ebp
	je Block39

 Block36:
	cmp ebx,1
	je Block38

 Block37:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xA4],9
	call eax
	jmp Block83

 Block38:
	mov edx,dword ptr [esp+0x1C]
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetAnimationBackgrnd
	jmp Block40

 Block39:
	mov eax,dword ptr [esp+0x1C]
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd

 Block40:
	lea ecx,[esp+0x48]
	push 0x11B1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x3C],ebp
	mov edx,dword ptr [esi+0x98]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xAC],0x15
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebp
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xA0],0x17
	cmp eax,ebp
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xA0],0x18
	cmp eax,ebp
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	lea ecx,[esp+0x4C]
	push 0x11B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x38],ebp
	mov edx,dword ptr [esi+0x98]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0xAC],0x1A
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],ebp
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA0],0x1C
	cmp eax,ebp
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA0],0x1D
	cmp eax,ebp
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	mov edi,dword ptr [esi+0x20]
	push ebp
	push 0xFF
	cmp edi,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xB0]
	lea edx,[esp+0x20]
	push edx
	push edi
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block52:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [esi+0x18]
	inc ecx
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block54:
	mov ecx,dword ptr [esi+0x18]
	push 0x3A
	mov byte ptr [esp+0xB4],0x1E
	push 0x2D
	cmp ecx,ebp
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [esp+0x40]
	push ebp
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xC8],0x1D
	call CAnimationDisplayer::LoadSingleLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xD8]
	add esp,0x28
	cmp edi,eax
	je Block61

 Block57:
	mov dword ptr [esi+0xD8],eax
	cmp eax,ebp
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block59:
	cmp edi,ebp
	je Block61

 Block60:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block61:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov edi,dword ptr [esi+0x20]
	push ebp
	push 0xFF
	cmp edi,ebp
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebp
	call edx
	cmp eax,ebp
	jge Block67

 Block66:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block67:
	mov eax,dword ptr [esp+0x20]
	add eax,2
	push eax
	mov eax,dword ptr [esi+0x18]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block69:
	mov ecx,dword ptr [esi+0x18]
	push 0x3A
	mov byte ptr [esp+0xB4],0x1F
	push 0x61
	cmp ecx,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xB0],esp
	push eax
	call IWzGr2DLayer::Getlt
	mov ebx,dword ptr [esp+0x50]
	push ebp
	lea ecx,[esp+0x34]
	push ebx
	push ecx
	mov byte ptr [esp+0xC8],0x1D
	call CAnimationDisplayer::LoadSingleLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xDC]
	add esp,0x28
	cmp edi,eax
	je Block76

 Block72:
	mov dword ptr [esi+0xDC],eax
	cmp eax,ebp
	je Block74

 Block73:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block74:
	cmp edi,ebp
	je Block76

 Block75:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block76:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov ecx,esi
	call CSlideMenuDlg::CreateSlideMenuButton
	mov byte ptr [esp+0xA0],0x18
	cmp ebx,ebp
	je Block80

 Block79:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block80:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA0],0x11
	cmp eax,ebp
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block82:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xA4],9
	call edx

 Block83:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xA0],4
	cmp eax,ebp
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block85:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	cmp eax,ebp
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block87:
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x90
	ret 4
}
}
// CSlideMenuDlg::MAINBUTTONINFO::MAINBUTTONINFO
_SUB_EXCEPTION_HANDLER(311220)
__SUB_CLASS_THIS(00311220, __thiscall, 52297,  CSlideMenuDlg::MAINBUTTONINFO, void, const CSlideMenuDlg::MAINBUTTONINFO&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_311220
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
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[edi+4]
	lea ecx,[esi+4]
	push eax
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esi+8],ecx
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
// InsertionSort_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_
_SUB_EXCEPTION_HANDLER(312140)
__SUB(00312140, __cdecl, 132798,  void, ZArray<CSlideMenuDlg::MAINBUTTONINFO>&, int32_t, int32_t, CSlideMenuDlg::CompButtonInfo&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_312140
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
	xor eax,eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],eax
	mov edi,dword ptr [esp+0x48]
	cmp edi,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x1C],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0x44]
	lea eax,[edi+edi*2]
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov esi,dword ptr [ebx]
	add esi,eax
	mov ebp,edi
	push esi
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x1C],ebp
	call ZXString16::op_assign
	lea eax,[esi+4]
	push eax
	lea ecx,[esp+0x30]
	call ZXString16::op_assign
	cmp edi,dword ptr [esp+0x48]
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esp+0x30],ecx
	jle Block8

 Block4:
	mov ebp,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	sub esp,0xC
	mov esi,esp
	lea edi,[edx+ebp-0xC]
	mov dword ptr [esp+0x2C],esp
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x34],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[edi+4]
	lea ecx,[esi+4]
	push eax
	mov byte ptr [esp+0x4C],1
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esi+8],ecx
	sub esp,0xC
	mov esi,esp
	mov dword ptr [esp+0x3C],esp
	lea edx,[esp+0x40]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x58],2
	mov dword ptr [esp+0x40],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[esp+0x44]
	lea ecx,[esi+4]
	push eax
	mov byte ptr [esp+0x58],3
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [esi+8],ecx
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x54],2
	mov byte ptr [esp+0x54],0
	call CSlideMenuDlg::CompButtonInfo::operator()
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [ebx]
	lea esi,[edx+ebp]
	lea edi,[esi-0xC]
	push edi
	mov ecx,esi
	call ZXString16::op_assign
	lea eax,[edi+4]
	push eax
	lea ecx,[esi+4]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi+8]
	dec eax
	sub ebp,0xC
	cmp eax,dword ptr [esp+0x48]
	mov dword ptr [esi+8],ecx
	mov dword ptr [esp+0x18],eax
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x18]

 Block8:
	mov eax,dword ptr [ebx]
	lea edx,[ebp+ebp*2]
	lea ecx,[esp+0x28]
	lea esi,[eax+edx*4]
	push ecx
	mov ecx,esi
	call ZXString16::op_assign
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esi+4]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x30]
	add dword ptr [esp+0x14],0xC
	inc edi
	cmp edi,dword ptr [esp+0x4C]
	mov dword ptr [esi+8],eax
	mov dword ptr [esp+0x1C],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
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
// CSlideMenuDlg::SetSlideMenuDlg
_SUB_EXCEPTION_HANDLER(313250)
__SUB_CLASS_THIS(00313250, __thiscall, 52280,  CSlideMenuDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_313250
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
	mov esi,dword ptr [esp+0x34]
	mov ecx,esi
	call CInPacket::Decode4
	mov ebx,eax
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	push ecx
	mov ecx,esp
	lea edx,[esp+0x38]
	xor edi,edi
	mov dword ptr [esp+0x18],esp
	push edx
	mov dword ptr [esp+0x34],edi
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,ebp
	call CSlideMenuDlg::SetButtonInfo
	mov eax,dword ptr [ebp+0x90]
	cmp dword ptr [eax+0x14],0xFFFFFFFF
	lea esi,[ebp+0x90]
	jne Block4

 Block1:
	cmp eax,edi
	je Block3

 Block2:
	cmp dword ptr [eax-4],2
	je Block4

 Block3:
	mov ecx,esi
	call ZArray<CSlideMenuDlg::MAINBUTTONINFO>::RemoveAll
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x1C],edi
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x30],1
	mov dword ptr [esp+0x24],0xFFFFFFF6
	call ZArray<CSlideMenuDlg::MAINBUTTONINFO>::InsertBefore
	lea ecx,[esp+0x18]
	mov edi,eax
	push ecx
	mov ecx,edi
	call ZXString16::op_assign
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[edi+4]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [edi+8],eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<CSlideMenuDlg::MAINBUTTONINFO>::InsertBefore
	lea ecx,[esp+0x18]
	mov edi,eax
	push ecx
	mov ecx,edi
	call ZXString16::op_assign
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[edi+4]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	lea ecx,[esp+0x18]
	mov dword ptr [edi+8],eax
	mov byte ptr [esp+0x2C],0
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO

 Block4:
	cmp ebx,0xFFFFFFFF
	je Block14

 Block5:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block7

 Block6:
	cmp dword ptr [eax-4],2
	je Block14

 Block7:
	or eax,0xFFFFFFFF
	xor edi,edi

 Block8:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block14

 Block9:
	mov ecx,dword ptr [ecx-4]
	lea edx,[eax+1]
	cmp edx,ecx
	jae Block14

 Block10:
	mov ecx,dword ptr [esi]
	cmp dword ptr [edi+ecx+8],ebx
	jne Block13

 Block11:
	mov dword ptr [ebp+0x94],eax
	test eax,eax
	jge Block13

 Block12:
	mov dword ptr [ebp+0x94],1

 Block13:
	add edi,0xC
	mov eax,edx
	jmp Block8

 Block14:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
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
// CSlideMenuDlg::CreateSlideMenuButton
_SUB_EXCEPTION_HANDLER(311860)
__SUB_CLASS_THIS0(00311860, __thiscall, 52272,  CSlideMenuDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_311860
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x98],0xFFFFFFFF
	je Block54

 Block1:
	mov eax,dword ptr [esi+0x90]
	xor ebx,ebx
	cmp eax,ebx
	je Block54

 Block2:
	cmp dword ptr [eax-4],ebx
	je Block54

 Block3:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0x11AC
	push eax
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0xC],ebx
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x3C],2
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x28]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x30],1
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],3
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push eax
	lea ecx,[esi+0xB8]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBC]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	push ebx
	push 0x43
	push 0xB
	push 0xBB8
	push esi
	call eax
	lea ecx,[esp+0x10]
	push 0x11AD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0xC],ebx
	mov edx,dword ptr [esi+0x98]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x3C],5
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x28]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x30],4
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],6
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	push eax
	lea ecx,[esi+0xC0]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x43
	push 0xC8
	push 0xBB9
	push esi
	call edx
	mov eax,dword ptr [esi+0xBC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	mov eax,dword ptr [esi+0xC4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	lea eax,[esp+0x10]
	push 0x11AE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0xC],ebx
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x3C],8
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x28]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x30],7
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],9
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
	lea ecx,[esi+0xC8]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xCC]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	push ebx
	push 0x86
	push 0x45
	push 0xBBA
	push esi
	call eax
	mov eax,dword ptr [esi+0xCC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	lea ecx,[esp+0x10]
	push 0x11AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0xC],ebx
	mov edx,dword ptr [esi+0x98]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x3C],0xB
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x28]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x30],0xA
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],0xC
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	push eax
	lea ecx,[esi+0xD0]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xD4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x86
	push 0x80
	push 0xBBB
	push esi
	call edx
	mov eax,dword ptr [esi+0x90]
	cmp dword ptr [eax+0x14],0xFFFFFFFF
	jne Block36

 Block32:
	mov eax,dword ptr [esi+0xD8]
	cmp eax,ebx
	je Block34

 Block33:
	mov dword ptr [esi+0xD8],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov eax,dword ptr [esi+0xDC]
	cmp eax,ebx
	je Block52

 Block35:
	mov dword ptr [esi+0xDC],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block52

 Block36:
	mov eax,dword ptr [esi+0xCC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0x94]
	mov ecx,dword ptr [esi+0x90]
	lea eax,[eax+eax*2]
	lea edx,[ecx+eax*4+0x10]
	push edx
	lea ecx,[esp+0x28]
	call ZXString16::op_assign
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],0xD
	cmp eax,ebx
	je Block38

 Block37:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block39

 Block38:
	xor eax,eax

 Block39:
	push eax
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xA4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	push ebx
	push 0x3A
	push 0x61
	push 0xBBD
	push esi
	call eax
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0x90]
	lea ecx,[eax+eax*2]
	lea ecx,[edx+ecx*4]
	mov edx,dword ptr [ecx+0x14]
	mov dword ptr [esi+0x9C],edx
	cmp eax,ebx
	je Block44

 Block40:
	add ecx,4
	push ecx
	lea ecx,[esp+0x28]
	call ZXString16::op_assign
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],0xE
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block43

 Block42:
	xor eax,eax

 Block43:
	push eax
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xAC]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	push ebx
	push 0x3A
	push 0x2D
	push 0xBBC
	push esi
	call eax
	mov eax,dword ptr [esi+0xAC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [eax+0xAD8],1
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax

 Block44:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebx
	jne Block46

 Block45:
	xor ecx,ecx
	jmp Block47

 Block46:
	mov ecx,dword ptr [eax-4]

 Block47:
	mov eax,dword ptr [esi+0x94]
	lea edx,[eax+2]
	cmp edx,ecx
	je Block52

 Block48:
	mov ecx,dword ptr [esi+0x90]
	lea eax,[eax+eax*2]
	lea edx,[ecx+eax*4+0x1C]
	push edx
	lea ecx,[esp+0x28]
	call ZXString16::op_assign
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x30],0xF
	cmp eax,ebx
	je Block50

 Block49:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block51

 Block50:
	xor eax,eax

 Block51:
	push eax
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x34],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xB4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	push ebx
	push 0x3A
	push 0x95
	push 0xBBE
	push esi
	call eax
	mov eax,dword ptr [esi+0xB4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [eax+0xAD8],1
	mov esi,dword ptr [esi+0xC4]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 1
	call eax

 Block52:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block54:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x28
	ret
}
}
// CSlideMenuDlg::GetRTTI
__SUB_CLASS_THIS0(00312550, __thiscall, 52285,  CSlideMenuDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CSlideMenuDlg::ms_RTTI_CSlideMenuDlg
	ret
}
}
// CSlideMenuDlg::CompButtonInfo::operator()
_SUB_EXCEPTION_HANDLER(3110B0)
__SUB_CLASS_THIS(003110B0, __thiscall, 52308,  CSlideMenuDlg::CompButtonInfo, int32_t, NakedParam<CSlideMenuDlg::MAINBUTTONINFO>, NakedParam<CSlideMenuDlg::MAINBUTTONINFO>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3110B0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0xC],eax
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xC],al
	lea ecx,[esp+0x14]
	jge Block2

 Block1:
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
	mov eax,1
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 0x18

 Block2:
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
	xor eax,eax
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 0x18
}
}
// CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
_SUB_EXCEPTION_HANDLER(311020)
__SUB_CLASS_THIS0(00311020, __thiscall, 52300,  CSlideMenuDlg::MAINBUTTONINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_311020
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
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// Median_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_
_SUB_EXCEPTION_HANDLER(311290)
__SUB(00311290, __cdecl, 132792,  const CSlideMenuDlg::MAINBUTTONINFO&, const CSlideMenuDlg::MAINBUTTONINFO&, const CSlideMenuDlg::MAINBUTTONINFO&, const CSlideMenuDlg::MAINBUTTONINFO&, CSlideMenuDlg::CompButtonInfo&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_311290
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
	mov edi,dword ptr [esp+0x30]
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edi
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	mov ebx,dword ptr [esp+0x38]
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebx
	mov dword ptr [esp+0x40],0
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	mov esi,dword ptr [esp+0x50]
	or ebp,0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlg::CompButtonInfo::operator()
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [esp+0x40]
	push eax
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edi
	mov dword ptr [esp+0x40],1
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlg::CompButtonInfo::operator()
	test eax,eax
	jne Block6

 Block2:
	mov edi,dword ptr [esp+0x34]
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edi
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ebx
	mov dword ptr [esp+0x40],2
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlg::CompButtonInfo::operator()
	test eax,eax
	jne Block6

 Block3:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block4:
	mov edx,dword ptr [esp+0x40]
	push edx
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ebx
	mov dword ptr [esp+0x40],3
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlg::CompButtonInfo::operator()
	test eax,eax
	jne Block3

 Block5:
	mov ebx,dword ptr [esp+0x34]
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push ebx
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edi
	mov dword ptr [esp+0x40],4
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlg::CompButtonInfo::operator()
	test eax,eax
	mov eax,ebx
	jne Block7

 Block6:
	mov eax,edi

 Block7:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// ZSort_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_
__SUB(00312E20, __cdecl, 132800,  void, ZArray<CSlideMenuDlg::MAINBUTTONINFO>&, __POSITION*, __POSITION*, NakedParam<CSlideMenuDlg::CompButtonInfo>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CSlideMenuDlg::MAINBUTTONINFO>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CSlideMenuDlg::MAINBUTTONINFO>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CSlideMenuDlg::MAINBUTTONINFO, int, CSlideMenuDlg::CompButtonInfo>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CSlideMenuDlg::MAINBUTTONINFO, CSlideMenuDlg::CompButtonInfo>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CSlideMenuDlg::Draw
_SUB_EXCEPTION_HANDLER(311E90)
__SUB_CLASS_THIS(00311E90, __thiscall, 52274,  CSlideMenuDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_311E90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x48]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0x94]
	inc eax
	lea edx,[eax+eax*2]
	mov eax,dword ptr [esi+0x90]
	lea eax,[eax+edx*4]
	push eax
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x44],0
	mov dword ptr [esp+0x4C],0
	call ZXString16::op_assign
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x44],1
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,dword ptr [esp+0x48]
	lea eax,[esp+0x18]
	push eax
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x4C],2
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x14]
	push 0
	push eax
	mov byte ptr [esp+0x50],3
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x48],4
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x48],5
	call IWzFont::CalcTextWidth
	shr eax,1
	mov esi,0x75
	sub esi,eax
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x40],1
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[esp+0x28]
	push edx
	call edi
	lea eax,[esp+0x28]
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
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x44],6
	call edi
	lea edx,[esp+0x18]
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
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x14]
	push 0
	push edx
	mov byte ptr [esp+0x50],7
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x54]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x54],8
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],9
	test edi,edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	push 0x6B
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x58],8
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x40],7
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov esi,8
	mov byte ptr [esp+0x40],6
	cmp word ptr [esp+0x18],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x28],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x38
	ret 4
}
}
// CSlideMenuDlg::IsKindOf
__SUB_CLASS_THIS(00312570, __thiscall, 52286,  CSlideMenuDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CSlideMenuDlg::ms_RTTI_CSlideMenuDlg
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
// DownHeap_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_
_SUB_EXCEPTION_HANDLER(311680)
__SUB(00311680, __cdecl, 132796,  void, ZArray<CSlideMenuDlg::MAINBUTTONINFO>&, int32_t, int32_t, int32_t, CSlideMenuDlg::CompButtonInfo&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_311680
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
	mov esi,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x44]
	mov ebx,dword ptr [esp+0x38]
	mov ecx,dword ptr [ebx]
	lea eax,[esi+edi]
	lea eax,[eax+eax*2]
	lea eax,[ecx+eax*4-0xC]
	push eax
	lea ecx,[esp+0x20]
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	mov eax,dword ptr [esp+0x40]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x30],0
	mov dword ptr [esp+0x38],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov edi,dword ptr [esp+0x44]
	mov esi,dword ptr [esp+0x3C]

 Block5:
	lea ebp,[esi+esi]
	cmp ebp,dword ptr [esp+0x40]
	jge Block8

 Block6:
	mov eax,dword ptr [ebx]
	lea esi,[edi+ebp]
	lea esi,[esi+esi*2]
	add esi,esi
	sub esp,0xC
	add esi,esi
	add eax,esi
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	mov edx,dword ptr [ebx]
	sub esp,0xC
	lea esi,[edx+esi-0xC]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push esi
	mov byte ptr [esp+0x4C],1
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x48],0
	call CSlideMenuDlg::CompButtonInfo::operator()
	test eax,eax
	je Block8

 Block7:
	inc ebp

 Block8:
	mov eax,dword ptr [ebx]
	add edi,ebp
	lea edi,[edi+edi*2]
	add edi,edi
	sub esp,0xC
	add edi,edi
	lea eax,[eax+edi-0xC]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	call CSlideMenuDlg::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov esi,esp
	mov dword ptr [esp+0x2C],esp
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x4C],2
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea edx,[esp+0x38]
	lea ecx,[esi+4]
	push edx
	mov byte ptr [esp+0x4C],3
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],2
	mov byte ptr [esp+0x48],0
	call CSlideMenuDlg::CompButtonInfo::operator()
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [ebx]
	add ecx,edx
	lea ecx,[ecx+ecx*2]
	lea esi,[edi+eax-0xC]
	lea edi,[eax+ecx*4-0xC]
	push esi
	mov ecx,edi
	call ZXString16::op_assign
	lea edx,[esi+4]
	push edx
	lea ecx,[edi+4]
	call ZXString16::op_assign
	cmp ebp,dword ptr [esp+0x38]
	mov eax,dword ptr [esi+8]
	mov dword ptr [edi+8],eax
	mov dword ptr [esp+0x3C],ebp
	jle Block4

 Block10:
	mov edi,dword ptr [esp+0x44]
	mov esi,dword ptr [esp+0x3C]

 Block11:
	mov edx,dword ptr [ebx]
	lea eax,[esi+edi]
	lea ecx,[eax+eax*2]
	lea esi,[edx+ecx*4-0xC]
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call ZXString16::op_assign
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esi+4]
	call ZXString16::op_assign
	mov edx,dword ptr [esp+0x24]
	lea ecx,[esp+0x1C]
	mov dword ptr [esi+8],edx
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO
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
// CSlideMenuDlg::OnButtonClicked
__SUB_CLASS_THIS(00310D60, __thiscall, 52275,  CSlideMenuDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea eax,[ecx-0xBB8]
	cmp eax,5
	ja Block13

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block2
cmp EAX, 2
je Block3
cmp EAX, 3
je Block8
cmp EAX, 4
je Block13
cmp EAX, 5
je Block3


 Block2:
	push ecx
	mov ecx,esi
	call CSlideMenuDlg::ArrowButtonClicked
	pop esi
	ret 4

 Block3:
	mov eax,dword ptr [esi+0xD8]
	test eax,eax
	je Block5

 Block4:
	mov dword ptr [esi+0xD8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	mov eax,dword ptr [esi+0xDC]
	test eax,eax
	je Block7

 Block6:
	mov dword ptr [esi+0xDC],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block8:
	mov eax,dword ptr [esi+0xD8]
	test eax,eax
	je Block10

 Block9:
	mov dword ptr [esi+0xD8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xDC]
	test eax,eax
	je Block12

 Block11:
	mov dword ptr [esi+0xDC],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx

 Block13:
	pop esi
	ret 4
}
}
// Partition_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_
_SUB_EXCEPTION_HANDLER(311410)
__SUB(00311410, __cdecl, 132794,  int32_t, ZArray<CSlideMenuDlg::MAINBUTTONINFO>&, int32_t, int32_t, const CSlideMenuDlg::MAINBUTTONINFO&, CSlideMenuDlg::CompButtonInfo&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_311410
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x20],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x50]
	mov ebx,dword ptr [esp+0x48]
	mov ebp,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x1C],esi

 Block1:
	cmp edx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x18],edx
	jge Block7

 Block2:
	lea edi,[edx+edx*2]
	add edi,edi
	add edi,edi
	mov dword ptr [esp+0x14],edi
	jmp Block4

 Block3:
	mov edi,dword ptr [esp+0x14]

 Block4:
	sub esp,0xC
	mov esi,esp
	mov dword ptr [esp+0x2C],esp
	push ebp
	mov ecx,esi
	mov dword ptr [esp+0x34],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[ebp+4]
	lea ecx,[esi+4]
	push eax
	mov dword ptr [esp+0x50],0
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+8]
	mov dword ptr [esi+8],eax
	mov esi,dword ptr [ebx]
	sub esp,0xC
	add esi,edi
	mov edi,esp
	mov dword ptr [esp+0x3C],esp
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x5C],1
	mov dword ptr [esp+0x40],edi
	mov dword ptr [edi],0
	call ZXString16::op_assign
	lea edx,[esi+4]
	lea ecx,[edi+4]
	push edx
	mov byte ptr [esp+0x5C],2
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov eax,dword ptr [esi+8]
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr [edi+8],eax
	mov byte ptr [esp+0x58],1
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call CSlideMenuDlg::CompButtonInfo::operator()
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [esp+0x18]
	add dword ptr [esp+0x14],0xC
	inc eax
	cmp eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x18],eax
	jl Block3

 Block6:
	mov esi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]

 Block7:
	dec esi
	cmp dword ptr [esp+0x4C],esi
	mov dword ptr [esp+0x1C],esi
	jge Block14

 Block8:
	lea eax,[esi+esi*2]
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block11

 Block10:
	mov eax,dword ptr [esp+0x14]

 Block11:
	mov esi,dword ptr [ebx]
	sub esp,0xC
	mov edi,esp
	add esi,eax
	mov dword ptr [esp+0x30],esp
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x30],edi
	mov dword ptr [edi],0
	call ZXString16::op_assign
	lea edx,[esi+4]
	lea ecx,[edi+4]
	push edx
	mov dword ptr [esp+0x50],3
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov eax,dword ptr [esi+8]
	mov dword ptr [edi+8],eax
	sub esp,0xC
	mov esi,esp
	mov dword ptr [esp+0x38],esp
	push ebp
	mov ecx,esi
	mov dword ptr [esp+0x5C],4
	mov dword ptr [esp+0x3C],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[ebp+4]
	lea ecx,[esi+4]
	push eax
	mov byte ptr [esp+0x5C],5
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [esi+8],ecx
	mov ecx,dword ptr [esp+0x70]
	mov byte ptr [esp+0x58],4
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call CSlideMenuDlg::CompButtonInfo::operator()
	test eax,eax
	je Block13

 Block12:
	mov eax,dword ptr [esp+0x1C]
	sub dword ptr [esp+0x14],0xC
	dec eax
	cmp dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x1C],eax
	jl Block10

 Block13:
	mov esi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]

 Block14:
	cmp edx,esi
	jge Block16

 Block15:
	mov ecx,dword ptr [ebx]
	lea edi,[edx+edx*2]
	lea eax,[esi+esi*2]
	lea eax,[ecx+eax*4]
	lea ecx,[ecx+edi*4]
	mov edi,dword ptr [ecx]
	mov dword ptr [esp+0x28],edi
	mov edi,dword ptr [ecx+4]
	mov dword ptr [esp+0x2C],edi
	mov edi,dword ptr [ecx+8]
	mov dword ptr [esp+0x30],edi
	mov edi,dword ptr [eax]
	mov dword ptr [ecx],edi
	mov edi,dword ptr [eax+4]
	mov dword ptr [ecx+4],edi
	mov edi,dword ptr [eax+8]
	mov dword ptr [ecx+8],edi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ecx
	inc edx
	jmp Block1

 Block16:
	mov eax,edx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x20]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x30
	ret
}
}
// CSlideMenuDlg::~CSlideMenuDlg
_SUB_EXCEPTION_HANDLER(3123F0)
__SUB_CLASS_THIS0(003123F0, __thiscall, 52272,  CSlideMenuDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3123F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CSlideMenuDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSlideMenuDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSlideMenuDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDC]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],7
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xD8]
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	cmp dword ptr [esi+0xD4],ebx
	lea edi,[esi+0xD0]
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	call ZArray<CSlideMenuDlg::MAINBUTTONINFO>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
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
// CSlideMenuDlg::OnKey
// 710F68
static uint8_t _SUB_310E30_LOOKUP_TABLE_0[27] = {
0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 2, 4, 3, 
};
__SUB_CLASS_THIS(00310E30, __thiscall, 52276,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	js Block20

 Block1:
	lea eax,[edx-0xD]
	cmp eax,0x1A
	ja Block20

 Block2:
	movzx eax,byte ptr [eax+_SUB_310E30_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block9
cmp EAX, 2
je Block14
cmp EAX, 3
je Block16
cmp EAX, 4
je Block20


 Block3:
	mov ecx,dword ptr [esi+0x8C]
	cmp dword ptr [ecx+0x14],0xFFFFFFFF
	je Block21

 Block4:
	mov eax,dword ptr [esi+0xD4]
	test eax,eax
	je Block6

 Block5:
	mov dword ptr [esi+0xD4],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block6:
	mov eax,dword ptr [esi+0xD8]
	test eax,eax
	je Block8

 Block7:
	mov dword ptr [esi+0xD8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi-4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi-4]
	push 1
	call edx
	pop esi
	ret 8

 Block9:
	mov eax,dword ptr [esi+0xD4]
	test eax,eax
	je Block11

 Block10:
	mov dword ptr [esi+0xD4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0xD8]
	test eax,eax
	je Block13

 Block12:
	mov dword ptr [esi+0xD8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi-4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi-4]
	push 2
	call edx
	pop esi
	ret 8

 Block14:
	cmp dword ptr [esi+0x90],0
	je Block21

 Block15:
	push 0xBB8
	lea ecx,[esi-4]
	call CSlideMenuDlg::ArrowButtonClicked
	pop esi
	ret 8

 Block16:
	mov eax,dword ptr [esi+0x8C]
	test eax,eax
	je Block18

 Block17:
	mov eax,dword ptr [eax-4]

 Block18:
	mov ecx,dword ptr [esi+0x90]
	add ecx,2
	cmp ecx,eax
	je Block21

 Block19:
	push 0xBB9
	lea ecx,[esi-4]
	call CSlideMenuDlg::ArrowButtonClicked
	pop esi
	ret 8

 Block20:
	push ecx
	push edx
	mov ecx,esi
	call CDialog::OnKey

 Block21:
	pop esi
	ret 8
}
}
