#include "regen.hpp"
// WvsContext2.ipp
#include "WvsContext2.hpp"

// CMiniGameCreateDlg::CMiniGameCreateDlg
_SUB_EXCEPTION_HANDLER(5F5980)
__SUB_CLASS_THIS0(005F5980, __thiscall, 53904,  CMiniGameCreateDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F5980
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
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea eax,[esi+0x90]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x30],edi
	int 3// TODO: 	mov dword ptr [esi],offset CMiniGameCreateDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMiniGameCreateDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMiniGameCreateDlg::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea ecx,[esi+0x98]
	push ecx
	mov byte ptr [esp+0x30],1
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push offset _x_com_ptr<IWzFont>::_ctor_default
	push 2
	push 4
	lea edx,[esi+0xA0]
	push edx
	mov byte ptr [esp+0x30],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD4],edi
	lea eax,[esp+0xC]
	push 0x75C
	push eax
	mov byte ptr [esp+0x24],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],0xA
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],9
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
// Partition_ZRef_CS_COMMODITY__SnLessFunc_
__SUB(005F5200, __cdecl, 66664,  int32_t, ZArray<ZRef<CS_COMMODITY> >&, int32_t, int32_t, const ZRef<CS_COMMODITY>&, SnLessFunc&) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+4],eax
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push esi
	mov esi,dword ptr [esp+0x1C]
	push edi
	mov edi,ebp

 Block1:
	cmp esi,ebp
	jge Block8

 Block2:
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov ecx,dword ptr [ebx]
	lea eax,[ecx+esi*8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block6

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,dword ptr [esp+0x3C]
	call SnLessFunc::operator()
	test eax,eax
	je Block8

 Block7:
	inc esi
	cmp esi,ebp
	jl Block2

 Block8:
	dec edi
	cmp dword ptr [esp+0x20],edi
	jge Block15

 Block9:
	mov edx,dword ptr [ebx]
	lea eax,[edx+edi*8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block11

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [esp+0x30]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,dword ptr [esp+0x3C]
	call SnLessFunc::operator()
	test eax,eax
	je Block15

 Block14:
	dec edi
	cmp dword ptr [esp+0x20],edi
	jl Block9

 Block15:
	cmp esi,edi
	jge Block17

 Block16:
	mov eax,dword ptr [ebx]
	mov ebp,dword ptr [eax+edi*8]
	mov ecx,dword ptr [eax+esi*8]
	mov edx,dword ptr [eax+esi*8+4]
	mov dword ptr [eax+esi*8],ebp
	mov ebp,dword ptr [eax+edi*8+4]
	mov dword ptr [eax+esi*8+4],ebp
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [eax+edi*8],ecx
	mov dword ptr [eax+edi*8+4],edx
	inc esi
	jmp Block1

 Block17:
	mov ecx,dword ptr [esp+0x14]
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,8
	ret
}
}
// CMiniGameCreateDlg::IsTitleValid
_SUB_EXCEPTION_HANDLER(383600)
__SUB_CLASS_THIS0(00383600, __thiscall, 53911,  CMiniGameCreateDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_383600
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xB4]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block6

 Block2:
	mov dword ptr [esp+0x14],0xFFFFFFFF

 Block3:
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret

 Block6:
	push 1
	push 0
	push 1
	push 0x400
	lea ecx,[esp+0x18]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0xC]
	mov esi,eax
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block3

 Block7:
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// ZSort_ZRef_CS_COMMODITY__PriceMoreFunc_
__SUB(00602A10, __cdecl, 66724,  void, ZArray<ZRef<CS_COMMODITY> >&, __POSITION*, __POSITION*, NakedParam<PriceMoreFunc>) {
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
	call ZArray<ZRef<CS_COMMODITY>>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<ZRef<CS_COMMODITY>>::IndexOf
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
	call IntroSortLoopHelper<ZRef<CS_COMMODITY>, int, PriceMoreFunc>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<ZRef<CS_COMMODITY>, PriceMoreFunc>::call
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
// CMiniGameCreateDlg::GetResult
_SUB_EXCEPTION_HANDLER(383790)
__SUB_CLASS_THIS(00383790, __thiscall, 53913,  CMiniGameCreateDlg, void, ZXString<char>&, ZXString<char>&, int32_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_383790
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
	mov ecx,dword ptr [esi+0xB4]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esi+0xBC]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x20]
	push eax
	mov dword ptr [esp+0x18],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0xAC]
	mov ecx,dword ptr [eax+0x48]
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [edx],ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}
// MedalAchievementInfo::~MedalAchievementInfo
_SUB_EXCEPTION_HANDLER(5F2890)
__SUB_CLASS_THIS0(005F2890, __thiscall, 56448,  MedalAchievementInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F2890
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
	lea ecx,[esi+0x10]
	mov dword ptr [esp+0x14],0
	call ZArray<unsigned short>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMemoryGameCreateDlg::OnCreate
_SUB_EXCEPTION_HANDLER(396F10)
__SUB_CLASS_THIS(00396F10, __thiscall, 53933,  CMemoryGameCreateDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_396F10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x120]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call ebx
	lea ecx,[esp+0x1C]
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
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x12C],ebp
	call ebx
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xAFB
	push eax
	mov byte ptr [esp+0x144],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x13C],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x140],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x130],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x90]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [esp+0x3C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x128],1
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block13:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x128],0
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block17:
	or edi,0xFFFFFFFF
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x128],edi
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[esp+0x2C]
	push edx
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x1C]
	push ecx
	mov dword ptr [esp+0x12C],4
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xAFC
	mov bl,5
	push edx
	mov byte ptr [esp+0x144],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x13C],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x13C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x130],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x94]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x128],bl
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ebx,8
	mov byte ptr [esp+0x128],4
	cmp word ptr [esp+0x1C],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [esp+0x128],edi
	cmp word ptr [esp+0x2C],bx
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea ecx,[esp+0x5C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	or ecx,0xFFFFFFFF
	mov eax,1
	mov dword ptr [esp+0x64],ecx
	mov dword ptr [esp+0x80],ecx
	lea ecx,[esp+0x14]
	mov edx,eax
	mov edi,eax
	push 0x1A25
	push ecx
	mov dword ptr [esp+0x130],8
	mov dword ptr [esp+0x68],eax
	mov dword ptr [esp+0x70],edx
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x80],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0x70]
	cmp edx,edi
	je Block47

 Block43:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,ebp
	je Block45

 Block44:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x70],ebp

 Block45:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x70],edi
	cmp edi,ebp
	je Block47

 Block46:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block47:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block49

 Block48:
	call _xbstr_t::Data_t::Release

 Block49:
	lea ecx,[esp+0x98]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov dword ptr [esp+0x9C],ebp
	mov dword ptr [esp+0xB4],0xB4
	mov dword ptr [esp+0xB8],0xF
	mov dword ptr [esp+0x58],ebp
	mov dword ptr [esp+0x4C],1
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x54],ebp
	lea ecx,[esp+0xCC]
	mov byte ptr [esp+0x128],0xA
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x12C],0xB
	mov dword ptr [esp+0xD0],0xFFEEEEEE
	mov dword ptr [esp+0xD4],0xFFA5A198
	mov dword ptr [esp+0xD8],0xFF999999
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov ebx,0xC
	mov byte ptr [esp+0x128],bl
	cmp eax,ebp
	je Block51

 Block50:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block52

 Block51:
	xor eax,eax

 Block52:
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block60

 Block53:
	add eax,8
	cmp eax,ebp
	je Block60

 Block54:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block56

 Block55:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block56:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block58

 Block57:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block58:
	push offset _S_
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x90],0x1E
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x5C]
	push eax
	push 0xF
	push 0xDA
	push 0x32
	push 0x19
	push 0x3E9
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x128],0xD
	cmp eax,ebp
	je Block61

 Block59:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block62

 Block60:
	xor edi,edi
	jmp Block56

 Block61:
	xor eax,eax

 Block62:
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block70

 Block63:
	add eax,8
	cmp eax,ebp
	je Block70

 Block64:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block66

 Block65:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block66:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block68

 Block67:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block68:
	lea ecx,[esp+0x5C]
	push offset _S_
	push ecx
	mov dword ptr [esp+0x94],ebx
	call ZXString<char>::Format
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	add esp,8
	lea eax,[esp+0x5C]
	push eax
	push 0xF
	push 0x82
	push 0x8E
	push 0x73
	push 0x3EA
	push esi
	call edx
	mov eax,dword ptr [esi+0xBC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x128],0xE
	cmp eax,ebp
	je Block71

 Block69:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block72

 Block70:
	xor edi,edi
	jmp Block66

 Block71:
	xor eax,eax

 Block72:
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block76

 Block73:
	add eax,8
	cmp eax,ebp
	je Block76

 Block74:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block77

 Block75:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea eax,[edi+0xC]
	push eax
	call ebx
	jmp Block78

 Block76:
	xor edi,edi

 Block77:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block78:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block80

 Block79:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block80:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x98]
	push eax
	push 0x79
	push 0x3D
	push 0x3E8
	push esi
	call edx
	mov ecx,dword ptr [esi+0xAC]
	push ebp
	call CCtrlCheckBox::SetChecked
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x128],0xF
	cmp eax,ebp
	je Block82

 Block81:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block83

 Block82:
	xor eax,eax

 Block83:
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block99

 Block84:
	add eax,8
	cmp eax,ebp
	je Block99

 Block85:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block87

 Block86:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block87:
	mov eax,dword ptr [esi+0xC4]
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block89

 Block88:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block89:
	mov ecx,dword ptr [esi+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0xCC]
	push eax
	push 0xF
	push 0x55
	push 0x53
	push 0xA0
	push ebp
	push 0x3EB
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x74F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xC4]
	push ebp
	push eax
	mov byte ptr [esp+0x130],0x10
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	lea ecx,[esp+0x14]
	push 0x750
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xC4]
	push 1
	push eax
	mov byte ptr [esp+0x130],0x11
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	lea edx,[esp+0x14]
	push 0x751
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xC4]
	push 2
	push eax
	mov byte ptr [esp+0x130],0x12
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	lea eax,[esp+0x14]
	push 0x512
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x12C],0x13
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block97:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x128],0x14
	cmp eax,ebp
	je Block100

 Block98:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block101

 Block99:
	xor edi,edi
	jmp Block87

 Block100:
	xor eax,eax

 Block101:
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block111

 Block102:
	add eax,8
	cmp eax,ebp
	je Block111

 Block103:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block105

 Block104:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block105:
	mov eax,dword ptr [esi+0xCC]
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block107

 Block106:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block107:
	mov ecx,dword ptr [esi+0xCC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x4C]
	push eax
	push ebp
	push 0xB4
	push 0xB0
	push 1
	push esi
	call edx
	mov eax,dword ptr [esi+0xCC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx
	lea eax,[esp+0x14]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x12C],0x15
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block109:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x128],0x16
	cmp eax,ebp
	je Block112

 Block110:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block113

 Block111:
	xor edi,edi
	jmp Block105

 Block112:
	xor eax,eax

 Block113:
	mov byte ptr [esp+0x128],0xB
	cmp eax,ebp
	je Block121

 Block114:
	add eax,8
	cmp eax,ebp
	je Block121

 Block115:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block117

 Block116:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block117:
	mov eax,dword ptr [esi+0xD4]
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block119

 Block118:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block119:
	mov ecx,dword ptr [esi+0xD4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x4C]
	push eax
	push ebp
	push 0xB4
	push 0xDA
	push 2
	push esi
	call edx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block122

 Block120:
	push eax
	call _com_issue_error

 Block121:
	xor edi,edi
	jmp Block117

 Block122:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x12C],0x17
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	push ebp
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xB27
	mov bl,0x18
	push eax
	mov byte ptr [esp+0x144],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x13C],0x19
	cmp dword ptr [_D_G_RM],ebp
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x140],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x130],0x1A
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x98]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block129

 Block127:
	cmp eax,0x80004002
	je Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x128],bl
	jne Block136

 Block130:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block132

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block132:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block133:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x128],0x17
	jne Block137

 Block134:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block138

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block136:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x3C]
	push eax
	call edi
	jmp Block133

 Block137:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block138:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x128],0xB
	jne Block141

 Block139:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block142:
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
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x12C],0x1B
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xB28
	mov bl,0x1C
	push edx
	mov byte ptr [esp+0x144],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x13C],0x1D
	cmp dword ptr [_D_G_RM],ebp
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x13C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x130],0x1E
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x9C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block151

 Block149:
	cmp eax,0x80004002
	je Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x128],bl
	jne Block154

 Block152:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block155:
	mov ebx,8
	mov byte ptr [esp+0x128],0x1B
	cmp word ptr [esp+0x1C],bx
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block159:
	mov byte ptr [esp+0x128],0xB
	cmp word ptr [esp+0x2C],bx
	jne Block162

 Block160:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block163:
	lea ecx,[esp+0x14]
	push 0x43
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xA0]
	add esp,8
	cmp edi,eax
	je Block168

 Block164:
	mov dword ptr [esi+0xA0],eax
	cmp eax,ebp
	je Block166

 Block165:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block166:
	cmp edi,ebp
	je Block168

 Block167:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block168:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block170

 Block169:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block170:
	lea eax,[esp+0x14]
	push 1
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xA4]
	add esp,8
	cmp edi,eax
	je Block175

 Block171:
	mov dword ptr [esi+0xA4],eax
	cmp eax,ebp
	je Block173

 Block172:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block173:
	cmp edi,ebp
	je Block175

 Block174:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block175:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block177

 Block176:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block177:
	mov eax,dword ptr [esi+0xB4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov ecx,dword ptr [esp+0x118]
	cmp ecx,ebp
	je Block179

 Block178:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x118],ebp

 Block179:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x128],9
	cmp eax,ebp
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block181:
	mov ecx,dword ptr [esp+0xA4]
	mov byte ptr [esp+0x128],bl
	cmp ecx,ebp
	je Block183

 Block182:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA4],ebp

 Block183:
	mov eax,dword ptr [esp+0xA0]
	cmp eax,ebp
	je Block185

 Block184:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block185:
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0x128],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x120]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x118
	ret 4
}
}
// DownHeap_ZRef_CS_COMMODITY__PriceMoreFunc_
_SUB_EXCEPTION_HANDLER(5F5780)
__SUB(005F5780, __cdecl, 66672,  void, ZArray<ZRef<CS_COMMODITY> >&, int32_t, int32_t, int32_t, PriceMoreFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F5780
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
	mov edi,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x30]
	mov ecx,dword ptr [ebx]
	lea eax,[edi+ebp]
	mov esi,dword ptr [ecx+eax*8-4]
	lea eax,[ecx+eax*8-8]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block2

 Block1:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,dword ptr [esp+0x38]
	cdq
	sub eax,edx
	sar eax,1
	cmp ebp,eax
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x30],eax
	jg Block25

 Block3:
	nop

 Block4:
	mov ebp,dword ptr [esp+0x34]
	add ebp,ebp
	cmp ebp,dword ptr [esp+0x38]
	jge Block11

 Block5:
	mov eax,dword ptr [ebx]
	lea esi,[edi+ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	add eax,esi
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [ebx]
	sub esp,8
	lea eax,[eax+esi-8]
	mov eax,dword ptr [eax+4]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block9

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov ecx,dword ptr [esp+0x50]
	call PriceMoreFunc::operator()
	test eax,eax
	je Block11

 Block10:
	inc ebp

 Block11:
	mov ecx,dword ptr [ebx]
	lea esi,[edi+ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[ecx+esi-8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov eax,dword ptr [esp+0x24]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block15

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov ecx,dword ptr [esp+0x50]
	call PriceMoreFunc::operator()
	test eax,eax
	je Block24

 Block16:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [esp+0x34]
	add edx,edi
	lea esi,[esi+eax-4]
	lea edi,[eax+edx*8-8]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block18

 Block17:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block23

 Block19:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block22

 Block21:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block22:
	mov dword ptr [edi+4],0

 Block23:
	cmp ebp,dword ptr [esp+0x30]
	mov eax,dword ptr [esi]
	mov dword ptr [edi+4],eax
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],ebp
	jle Block4

 Block24:
	mov esi,dword ptr [esp+0x1C]

 Block25:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [ebx]
	lea ecx,[esp+0x18]
	add edx,edi
	push ecx
	lea ecx,[eax+edx*8-8]
	call ZRef<CS_COMMODITY>::op_assign_copy
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block28

 Block26:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
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
// CMiniGameCreateDlg::SetRet
__SUB_CLASS_THIS(0037F130, __thiscall, 53909,  CMiniGameCreateDlg, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [ecx+0x14],0
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x80],eax
	mov dword ptr [ecx+0x84],1
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	ret 4
}
}
// _anon__CreateCanvasFromJpegPacket
_SUB_EXCEPTION_HANDLER(5F1550)
__SUB(005F1550, __cdecl, 66644,  _x_com_ptr<IWzCanvas>, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F1550
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
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [ebx],edi
	mov ebp,dword ptr [esp+0x30]
	mov ecx,ebp
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x14],1
	call CInPacket::Decode4
	mov esi,eax
	cmp esi,edi
	je Block9

 Block1:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	push esi
	push edi
	mov ecx,ebp
	call CInPacket::DecodeBuffer
	push esi
	lea eax,[esp+0x1C]
	push edi
	push eax
	call CreateCanvasFromJpeg
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx]
	add esp,0xC
	cmp esi,eax
	je Block6

 Block2:
	mov dword ptr [ebx],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	test esi,esi
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block6:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block9:
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
}
}
// InsertionSort_ZRef_CS_COMMODITY__PriceMoreFunc_
_SUB_EXCEPTION_HANDLER(5F4DA0)
__SUB(005F4DA0, __cdecl, 66660,  void, ZArray<ZRef<CS_COMMODITY> >&, int32_t, int32_t, PriceMoreFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F4DA0
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
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	mov edi,dword ptr [esp+0x38]
	cmp edi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x14],edi
	jg Block29

 Block1:
	mov ebx,dword ptr [esp+0x34]
	mov eax,dword ptr [ebx]
	lea esi,[eax+edi*8]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block3

 Block2:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	test ebp,ebp
	je Block7

 Block4:
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block5:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block6:
	mov ebx,dword ptr [esp+0x34]

 Block7:
	mov ecx,dword ptr [esp+0x38]
	cmp dword ptr [esp+0x14],ecx
	mov ebp,dword ptr [esi+4]
	mov dword ptr [esp+0x20],ebp
	jle Block21

 Block8:
	mov edx,dword ptr [ebx]
	lea eax,[edx+edi*8-8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block10

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],ebp
	test ebp,ebp
	je Block12

 Block11:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov ecx,dword ptr [esp+0x50]
	call PriceMoreFunc::operator()
	test eax,eax
	je Block21

 Block13:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+edi*8-4]
	lea esi,[ecx+edi*8]
	test eax,eax
	je Block15

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block20

 Block16:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block19

 Block18:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block19:
	mov dword ptr [esi+4],0

 Block20:
	mov ecx,dword ptr [esi-4]
	dec edi
	cmp edi,dword ptr [esp+0x38]
	mov dword ptr [esi+4],ecx
	jg Block8

 Block21:
	mov edx,dword ptr [ebx]
	lea esi,[edx+edi*8]
	test ebp,ebp
	je Block23

 Block22:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block28

 Block24:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov dword ptr [esi+4],0

 Block28:
	mov edi,dword ptr [esp+0x14]
	inc edi
	cmp edi,dword ptr [esp+0x3C]
	mov dword ptr [esi+4],ebp
	mov dword ptr [esp+0x14],edi
	jle Block1

 Block29:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test ebp,ebp
	je Block32

 Block30:
	lea esi,[ebp+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block31:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block32:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// Partition_ZRef_CS_COMMODITY__PriceMoreFunc_
__SUB(005F5460, __cdecl, 66668,  int32_t, ZArray<ZRef<CS_COMMODITY> >&, int32_t, int32_t, const ZRef<CS_COMMODITY>&, PriceMoreFunc&) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+4],eax
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	push esi
	mov esi,dword ptr [esp+0x1C]
	push edi
	mov edi,ebp

 Block1:
	cmp esi,ebp
	jge Block8

 Block2:
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov ecx,dword ptr [ebx]
	lea eax,[ecx+esi*8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block6

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,dword ptr [esp+0x3C]
	call PriceMoreFunc::operator()
	test eax,eax
	je Block8

 Block7:
	inc esi
	cmp esi,ebp
	jl Block2

 Block8:
	dec edi
	cmp dword ptr [esp+0x20],edi
	jge Block15

 Block9:
	mov edx,dword ptr [ebx]
	lea eax,[edx+edi*8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block11

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [esp+0x30]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,dword ptr [esp+0x3C]
	call PriceMoreFunc::operator()
	test eax,eax
	je Block15

 Block14:
	dec edi
	cmp dword ptr [esp+0x20],edi
	jl Block9

 Block15:
	cmp esi,edi
	jge Block17

 Block16:
	mov eax,dword ptr [ebx]
	mov ebp,dword ptr [eax+edi*8]
	mov ecx,dword ptr [eax+esi*8]
	mov edx,dword ptr [eax+esi*8+4]
	mov dword ptr [eax+esi*8],ebp
	mov ebp,dword ptr [eax+edi*8+4]
	mov dword ptr [eax+esi*8+4],ebp
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [eax+edi*8],ecx
	mov dword ptr [eax+edi*8+4],edx
	inc esi
	jmp Block1

 Block17:
	mov ecx,dword ptr [esp+0x14]
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,8
	ret
}
}
// ZSort_ZRef_CS_COMMODITY__SnLessFunc_
__SUB(00606B30, __cdecl, 66874,  void, ZArray<ZRef<CS_COMMODITY> >&, NakedParam<SnLessFunc>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<ZRef<CS_COMMODITY>, SnLessFunc>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea ecx,[eax+ecx*8-8]
	push ecx
	push eax
	push edx
	call ZSortHelper<ZRef<CS_COMMODITY>, SnLessFunc>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// ZSort_ZRef_CS_COMMODITY__SnLessFunc_
__SUB(006029A0, __cdecl, 66722,  void, ZArray<ZRef<CS_COMMODITY> >&, __POSITION*, __POSITION*, NakedParam<SnLessFunc>) {
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
	call ZArray<ZRef<CS_COMMODITY>>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<ZRef<CS_COMMODITY>>::IndexOf
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
	call IntroSortLoopHelper<ZRef<CS_COMMODITY>, int, SnLessFunc>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<ZRef<CS_COMMODITY>, SnLessFunc>::call
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
// Median_ZRef_CS_COMMODITY__PriceMoreFunc_
__SUB(005F5320, __cdecl, 66666,  const ZRef<CS_COMMODITY>&, const ZRef<CS_COMMODITY>&, const ZRef<CS_COMMODITY>&, const ZRef<CS_COMMODITY>&, PriceMoreFunc&) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	mov eax,dword ptr [eax+4]
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,4
	push eax
	call edi

 Block2:
	mov ebx,dword ptr [esp+0x20]
	mov eax,dword ptr [ebx+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,4
	push eax
	call edi

 Block4:
	mov ebp,dword ptr [esp+0x34]
	mov ecx,ebp
	call PriceMoreFunc::operator()
	mov esi,dword ptr [esp+0x20]
	sub esp,8
	test eax,eax
	mov eax,dword ptr [esi+4]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	je Block14

 Block5:
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call edi

 Block7:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block9

 Block8:
	add eax,4
	push eax
	call edi

 Block9:
	mov ecx,ebp
	call PriceMoreFunc::operator()
	test eax,eax
	je Block11

 Block10:
	mov eax,dword ptr [esp+0x1C]
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block11:
	mov eax,dword ptr [esi+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call edi

 Block13:
	sub esp,8
	mov dword ptr [esp+0x2C],esp
	jmp Block22

 Block14:
	test eax,eax
	je Block16

 Block15:
	add eax,4
	push eax
	call edi

 Block16:
	mov eax,dword ptr [ebx+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block18

 Block17:
	add eax,4
	push eax
	call edi

 Block18:
	mov ecx,ebp
	call PriceMoreFunc::operator()
	test eax,eax
	jne Block25

 Block19:
	mov eax,dword ptr [esi+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block21

 Block20:
	add eax,4
	push eax
	call edi

 Block21:
	mov ebx,dword ptr [esp+0x24]
	sub esp,8
	mov dword ptr [esp+0x28],esp

 Block22:
	mov eax,dword ptr [ebx+4]
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block24

 Block23:
	add eax,4
	push eax
	call edi

 Block24:
	mov ecx,ebp
	call PriceMoreFunc::operator()
	test eax,eax
	mov eax,esi
	jne Block26

 Block25:
	mov eax,ebx

 Block26:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// InsertionSort_ZRef_CS_COMMODITY__SnLessFunc_
_SUB_EXCEPTION_HANDLER(5F4BB0)
__SUB(005F4BB0, __cdecl, 66657,  void, ZArray<ZRef<CS_COMMODITY> >&, int32_t, int32_t, SnLessFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F4BB0
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
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	mov edi,dword ptr [esp+0x38]
	cmp edi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x14],edi
	jg Block29

 Block1:
	mov ebx,dword ptr [esp+0x34]
	mov eax,dword ptr [ebx]
	lea esi,[eax+edi*8]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block3

 Block2:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	test ebp,ebp
	je Block7

 Block4:
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block5:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block6:
	mov ebx,dword ptr [esp+0x34]

 Block7:
	mov ecx,dword ptr [esp+0x38]
	cmp dword ptr [esp+0x14],ecx
	mov ebp,dword ptr [esi+4]
	mov dword ptr [esp+0x20],ebp
	jle Block21

 Block8:
	mov edx,dword ptr [ebx]
	lea eax,[edx+edi*8-8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block10

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],ebp
	test ebp,ebp
	je Block12

 Block11:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov ecx,dword ptr [esp+0x50]
	call SnLessFunc::operator()
	test eax,eax
	je Block21

 Block13:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+edi*8-4]
	lea esi,[ecx+edi*8]
	test eax,eax
	je Block15

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block20

 Block16:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block19

 Block18:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block19:
	mov dword ptr [esi+4],0

 Block20:
	mov ecx,dword ptr [esi-4]
	dec edi
	cmp edi,dword ptr [esp+0x38]
	mov dword ptr [esi+4],ecx
	jg Block8

 Block21:
	mov edx,dword ptr [ebx]
	lea esi,[edx+edi*8]
	test ebp,ebp
	je Block23

 Block22:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block28

 Block24:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov dword ptr [esi+4],0

 Block28:
	mov edi,dword ptr [esp+0x14]
	inc edi
	cmp edi,dword ptr [esp+0x3C]
	mov dword ptr [esi+4],ebp
	mov dword ptr [esp+0x14],edi
	jle Block1

 Block29:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test ebp,ebp
	je Block32

 Block30:
	lea esi,[ebp+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block31:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block32:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// CMemoryGameCreateDlg::~CMemoryGameCreateDlg
_SUB_EXCEPTION_HANDLER(5F5D80)
__SUB_CLASS_THIS0(005F5D80, __thiscall, 53932,  CMemoryGameCreateDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F5D80
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
	int 3// TODO: 	mov dword ptr [esi],offset CMemoryGameCreateDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMemoryGameCreateDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMemoryGameCreateDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xD8]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xD0]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push 2
	push 4
	lea eax,[esi+0xA0]
	push eax
	mov byte ptr [esp+0x2C],2
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea ecx,[esi+0x98]
	push ecx
	mov byte ptr [esp+0x2C],1
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea edx,[esi+0x90]
	push edx
	mov byte ptr [esp+0x2C],bl
	call __eh_vector_dtor_iterator
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
// CMemoryGameCreateDlg::SetRet
__SUB_CLASS_THIS(0037F160, __thiscall, 53935,  CMemoryGameCreateDlg, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [ecx+0x14],0
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x80],eax
	mov dword ptr [ecx+0x84],1
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	ret 4
}
}
// CMiniGameCreateDlg::~CMiniGameCreateDlg
_SUB_EXCEPTION_HANDLER(5F5AC0)
__SUB_CLASS_THIS0(005F5AC0, __thiscall, 53906,  CMiniGameCreateDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F5AC0
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
	int 3// TODO: 	mov dword ptr [esi],offset CMiniGameCreateDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMiniGameCreateDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMiniGameCreateDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xD0]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push 2
	push 4
	lea eax,[esi+0xA0]
	push eax
	mov byte ptr [esp+0x2C],2
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea ecx,[esi+0x98]
	push ecx
	mov byte ptr [esp+0x2C],1
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea edx,[esi+0x90]
	push edx
	mov byte ptr [esp+0x2C],bl
	call __eh_vector_dtor_iterator
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
// DownHeap_ZRef_CS_COMMODITY__SnLessFunc_
_SUB_EXCEPTION_HANDLER(5F5580)
__SUB(005F5580, __cdecl, 66670,  void, ZArray<ZRef<CS_COMMODITY> >&, int32_t, int32_t, int32_t, SnLessFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F5580
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
	mov edi,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x30]
	mov ecx,dword ptr [ebx]
	lea eax,[edi+ebp]
	mov esi,dword ptr [ecx+eax*8-4]
	lea eax,[ecx+eax*8-8]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block2

 Block1:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,dword ptr [esp+0x38]
	cdq
	sub eax,edx
	sar eax,1
	cmp ebp,eax
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x30],eax
	jg Block25

 Block3:
	nop

 Block4:
	mov ebp,dword ptr [esp+0x34]
	add ebp,ebp
	cmp ebp,dword ptr [esp+0x38]
	jge Block11

 Block5:
	mov eax,dword ptr [ebx]
	lea esi,[edi+ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	add eax,esi
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [ebx]
	sub esp,8
	lea eax,[eax+esi-8]
	mov eax,dword ptr [eax+4]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block9

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov ecx,dword ptr [esp+0x50]
	call SnLessFunc::operator()
	test eax,eax
	je Block11

 Block10:
	inc ebp

 Block11:
	mov ecx,dword ptr [ebx]
	lea esi,[edi+ebp]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[ecx+esi-8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov eax,dword ptr [esp+0x24]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block15

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov ecx,dword ptr [esp+0x50]
	call SnLessFunc::operator()
	test eax,eax
	je Block24

 Block16:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [esp+0x34]
	add edx,edi
	lea esi,[esi+eax-4]
	lea edi,[eax+edx*8-8]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block18

 Block17:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block23

 Block19:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block22

 Block21:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block22:
	mov dword ptr [edi+4],0

 Block23:
	cmp ebp,dword ptr [esp+0x30]
	mov eax,dword ptr [esi]
	mov dword ptr [edi+4],eax
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],ebp
	jle Block4

 Block24:
	mov esi,dword ptr [esp+0x1C]

 Block25:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [ebx]
	lea ecx,[esp+0x18]
	add edx,edi
	push ecx
	lea ecx,[eax+edx*8-8]
	call ZRef<CS_COMMODITY>::op_assign_copy
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block28

 Block26:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
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
// SnLessFunc::operator()
_SUB_EXCEPTION_HANDLER(5F38F0)
__SUB_CLASS_THIS(005F38F0, __thiscall, 61771,  SnLessFunc, int32_t, NakedParam<ZRef<CS_COMMODITY>>, NakedParam<ZRef<CS_COMMODITY>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F38F0
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
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x18],bl
	cmp eax,ebx
	je Block10

 Block1:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block3

 Block2:
	mov eax,dword ptr [eax+0xC]
	xor edx,edx
	cmp eax,dword ptr [ecx+0xC]
	lea ecx,[esp+0x20]
	setl dl
	mov esi,edx
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10

 Block3:
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	add eax,4
	push eax
	call edi
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	test eax,eax
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x24]
	add eax,4
	push eax
	call esi
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebx
	je Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block6:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block7:
	add eax,4
	push eax
	call edi
	test eax,eax
	jne Block13

 Block8:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	push ecx
	call esi
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block13

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax
	jmp Block13

 Block10:
	lea ecx,[esp+0x20]
	cmp dword ptr [esp+0x2C],ebx
	je Block12

 Block11:
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10

 Block12:
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>

 Block13:
	mov eax,1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10
}
}
// CMiniGameCreateDlg::OnCreate
_SUB_EXCEPTION_HANDLER(3962C0)
__SUB_CLASS_THIS(003962C0, __thiscall, 53907,  CMiniGameCreateDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3962C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xCC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call ebx
	lea ecx,[esp+0x1C]
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
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0xD8],ebp
	call ebx
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xAFB
	push eax
	mov byte ptr [esp+0xF0],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE8],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xEC],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xDC],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x90]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [esp+0x3C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xD4],1
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block13:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xD4],0
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block17:
	or edi,0xFFFFFFFF
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0xD4],edi
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[esp+0x2C]
	push edx
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x1C]
	push ecx
	mov dword ptr [esp+0xD8],4
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xAFC
	mov bl,5
	push edx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE8],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0xE8],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xDC],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x94]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xD4],bl
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ebx,8
	mov byte ptr [esp+0xD4],4
	cmp word ptr [esp+0x1C],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [esp+0xD4],edi
	cmp word ptr [esp+0x2C],bx
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea ecx,[esp+0x5C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	or ecx,0xFFFFFFFF
	mov eax,1
	mov dword ptr [esp+0x64],ecx
	mov dword ptr [esp+0x80],ecx
	lea ecx,[esp+0x14]
	mov edx,eax
	mov edi,eax
	push 0x1A25
	push ecx
	mov dword ptr [esp+0xDC],8
	mov dword ptr [esp+0x68],eax
	mov dword ptr [esp+0x70],edx
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x80],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	lea edx,[esp+0x70]
	cmp edx,edi
	je Block47

 Block43:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,ebp
	je Block45

 Block44:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x70],ebp

 Block45:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x70],edi
	cmp edi,ebp
	je Block47

 Block46:
	add edi,8
	push edi
	call ebx

 Block47:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block49

 Block48:
	call _xbstr_t::Data_t::Release

 Block49:
	lea ecx,[esp+0x98]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov dword ptr [esp+0x9C],ebp
	mov dword ptr [esp+0xB4],0xB4
	mov dword ptr [esp+0xB8],0xF
	mov dword ptr [esp+0x58],ebp
	mov dword ptr [esp+0x4C],1
	mov dword ptr [esp+0x50],ebp
	mov dword ptr [esp+0x54],ebp
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xD8],0xA
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD4],0xB
	cmp eax,ebp
	je Block51

 Block50:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block52

 Block51:
	xor eax,eax

 Block52:
	mov byte ptr [esp+0xD4],0xA
	cmp eax,ebp
	je Block60

 Block53:
	add eax,8
	cmp eax,ebp
	je Block60

 Block54:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block56

 Block55:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block56:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block58

 Block57:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block58:
	push offset _S_
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x90],0x1E
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x5C]
	push eax
	push 0xF
	push 0xDB
	push 0x32
	push 0x19
	push 0x3E9
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov ebx,0xC
	mov byte ptr [esp+0xD4],bl
	cmp eax,ebp
	je Block61

 Block59:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block62

 Block60:
	xor edi,edi
	jmp Block56

 Block61:
	xor eax,eax

 Block62:
	mov byte ptr [esp+0xD4],0xA
	cmp eax,ebp
	je Block70

 Block63:
	add eax,8
	cmp eax,ebp
	je Block70

 Block64:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block66

 Block65:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block66:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block68

 Block67:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block68:
	lea ecx,[esp+0x5C]
	push offset _S_
	push ecx
	mov dword ptr [esp+0x94],ebx
	call ZXString<char>::Format
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	add esp,8
	lea eax,[esp+0x5C]
	push eax
	push 0xF
	push 0x82
	push 0x73
	push 0x73
	push 0x3EA
	push esi
	call edx
	mov eax,dword ptr [esi+0xBC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD4],0xD
	cmp eax,ebp
	je Block71

 Block69:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block72

 Block70:
	xor edi,edi
	jmp Block66

 Block71:
	xor eax,eax

 Block72:
	mov byte ptr [esp+0xD4],0xA
	cmp eax,ebp
	je Block82

 Block73:
	add eax,8
	cmp eax,ebp
	je Block82

 Block74:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block76

 Block75:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block76:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block78

 Block77:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block78:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x98]
	push eax
	push 0x5E
	push 0x3C
	push 0x3E8
	push esi
	call edx
	mov ecx,dword ptr [esi+0xAC]
	push ebp
	call CCtrlCheckBox::SetChecked
	lea eax,[esp+0x14]
	push 0x512
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0xD8],0xE
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD4],0xA
	cmp eax,ebp
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block80:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD4],0xF
	cmp eax,ebp
	je Block83

 Block81:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block84

 Block82:
	xor edi,edi
	jmp Block76

 Block83:
	xor eax,eax

 Block84:
	mov byte ptr [esp+0xD4],0xA
	cmp eax,ebp
	je Block94

 Block85:
	add eax,8
	cmp eax,ebp
	je Block94

 Block86:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block88

 Block87:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block88:
	mov eax,dword ptr [esi+0xC4]
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block90

 Block89:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block90:
	mov ecx,dword ptr [esi+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x4C]
	push eax
	push ebp
	push 0x98
	push 0x9C
	push 1
	push esi
	call edx
	mov eax,dword ptr [esi+0xC4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx
	lea eax,[esp+0x14]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0xD8],0x10
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD4],0xA
	cmp eax,ebp
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block92:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD4],0x11
	cmp eax,ebp
	je Block95

 Block93:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block96

 Block94:
	xor edi,edi
	jmp Block88

 Block95:
	xor eax,eax

 Block96:
	mov byte ptr [esp+0xD4],0xA
	cmp eax,ebp
	je Block104

 Block97:
	add eax,8
	cmp eax,ebp
	je Block104

 Block98:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block100

 Block99:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block100:
	mov eax,dword ptr [esi+0xCC]
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block102

 Block101:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block102:
	mov ecx,dword ptr [esi+0xCC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x4C]
	push eax
	push ebp
	push 0x98
	push 0xC5
	push 2
	push esi
	call edx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block105

 Block103:
	push eax
	call _com_issue_error

 Block104:
	xor edi,edi
	jmp Block100

 Block105:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xD8],0x12
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	push ebp
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xB27
	mov bl,0x13
	push eax
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE8],0x14
	cmp dword ptr [_D_G_RM],ebp
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xEC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xDC],0x15
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x98]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block112

 Block110:
	cmp eax,0x80004002
	je Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xD4],bl
	jne Block119

 Block113:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block115

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block115:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block116:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xD4],0x12
	jne Block120

 Block117:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block121

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block119:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x3C]
	push eax
	call edi
	jmp Block116

 Block120:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block121:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xD4],0xA
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block125:
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
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0xD8],0x16
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xB28
	mov bl,0x17
	push edx
	mov byte ptr [esp+0xF0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE8],0x18
	cmp dword ptr [_D_G_RM],ebp
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0xE8],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xDC],0x19
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x9C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block134

 Block132:
	cmp eax,0x80004002
	je Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xD4],bl
	jne Block137

 Block135:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block138:
	mov ebx,8
	mov byte ptr [esp+0xD4],0x16
	cmp word ptr [esp+0x1C],bx
	jne Block141

 Block139:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block142:
	mov byte ptr [esp+0xD4],0xA
	cmp word ptr [esp+0x2C],bx
	jne Block145

 Block143:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block146:
	lea ecx,[esp+0x14]
	push 0x43
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xA0]
	add esp,8
	cmp edi,eax
	je Block151

 Block147:
	mov dword ptr [esi+0xA0],eax
	cmp eax,ebp
	je Block149

 Block148:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block149:
	cmp edi,ebp
	je Block151

 Block150:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block151:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block153

 Block152:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block153:
	lea eax,[esp+0x14]
	push 1
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xA4]
	add esp,8
	cmp edi,eax
	je Block158

 Block154:
	mov dword ptr [esi+0xA4],eax
	cmp eax,ebp
	je Block156

 Block155:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block156:
	cmp edi,ebp
	je Block158

 Block157:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block158:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block160

 Block159:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block160:
	mov eax,dword ptr [esi+0xB4]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xD4],9
	cmp eax,ebp
	je Block162

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block162:
	mov ecx,dword ptr [esp+0xA4]
	mov byte ptr [esp+0xD4],bl
	cmp ecx,ebp
	je Block164

 Block163:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA4],ebp

 Block164:
	mov eax,dword ptr [esp+0xA0]
	cmp eax,ebp
	je Block166

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block166:
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0xD4],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0xCC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC4
	ret 4
}
}
// CMemoryGameCreateDlg::CMemoryGameCreateDlg
_SUB_EXCEPTION_HANDLER(5F5C40)
__SUB_CLASS_THIS0(005F5C40, __thiscall, 53930,  CMemoryGameCreateDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F5C40
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
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea eax,[esi+0x90]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x30],edi
	int 3// TODO: 	mov dword ptr [esi],offset CMemoryGameCreateDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMemoryGameCreateDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMemoryGameCreateDlg::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea ecx,[esi+0x98]
	push ecx
	mov byte ptr [esp+0x30],1
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push offset _x_com_ptr<IWzFont>::_ctor_default
	push 2
	push 4
	lea edx,[esi+0xA0]
	push edx
	mov byte ptr [esp+0x30],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xDC],edi
	lea eax,[esp+0xC]
	push 0x75D
	push eax
	mov byte ptr [esp+0x24],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],0xB
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],0xA
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
// CMemoryGameCreateDlg::IsTitleValid
_SUB_EXCEPTION_HANDLER(383DE0)
__SUB_CLASS_THIS0(00383DE0, __thiscall, 53937,  CMemoryGameCreateDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_383DE0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0xB4]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block6

 Block2:
	mov dword ptr [esp+0x14],0xFFFFFFFF

 Block3:
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret

 Block6:
	push 1
	push 0
	push 1
	push 0x400
	lea ecx,[esp+0x18]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0xC]
	mov esi,eax
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block3

 Block7:
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMemoryGameCreateDlg::IsPasswordValid
_SUB_EXCEPTION_HANDLER(383EC0)
__SUB_CLASS_THIS0(00383EC0, __thiscall, 53937,  CMemoryGameCreateDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_383EC0
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
	mov ecx,dword ptr [esi+0xBC]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov esi,dword ptr [esi+0xAC]
	mov esi,dword ptr [esi+0x48]
	mov eax,dword ptr [esp+8]
	test esi,esi
	je Block6

 Block1:
	test eax,eax
	je Block3

 Block2:
	cmp byte ptr [eax],0
	jne Block6

 Block3:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret

 Block6:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMiniGameCreateDlg::Draw
_SUB_EXCEPTION_HANDLER(383080)
__SUB_CLASS_THIS(00383080, __thiscall, 53910,  CMiniGameCreateDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_383080
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
	mov esi,ecx
	push 0
	call CWnd::Draw
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x48],0
	call ebp
	lea edx,[esp+0x2C]
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
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	xor ecx,ecx
	test eax,eax
	setne cl
	mov bl,2
	mov byte ptr [esp+0x4C],bl
	mov eax,dword ptr [esi+ecx*4+0xA0]
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xB29
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x54],3
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	push 0x75
	push 0x3C
	mov ecx,edi
	mov byte ptr [esp+0x5C],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x44],1
	cmp word ptr [esp+0x1C],bx
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x2C],bx
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block14:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
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
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	mov ebp,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi]
	xor ecx,ecx
	test eax,eax
	setne cl
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi+ecx*4+0x98]
	push ecx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x3C]
	push 0x72
	push 0x71
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x80]
	push edi
	mov byte ptr [esp+0x64],4
	call eax
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x1C],bx
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],ecx
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	mov ebp,dword ptr [esp+0x1C]
	mov ebx,dword ptr [edi]
	xor edx,edx
	test eax,eax
	sete dl
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [esi+edx*4+0x90]
	mov ecx,dword ptr [esp+0x38]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0x5E
	push 0xF
	push edi
	mov byte ptr [esp+0x64],5
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],0
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov eax,dword ptr [esi+0xBC]
	mov esi,dword ptr [esi+0xAC]
	mov esi,dword ptr [esi+0x48]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call edx
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
// MedalAchievementInfo::Decode
__SUB_CLASS_THIS(004AD180, __thiscall, 56447,  MedalAchievementInfo, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+8]
	push esi
	mov esi,ecx
	push edi
	mov ecx,ebp
	call CInPacket::Decode4
	mov ecx,ebp
	mov dword ptr [esi+0xC],eax
	call CInPacket::Decode2
	movzx edi,ax
	test edi,edi
	jle Block4

 Block1:
	push ebx
	lea ebx,[esi+0x10]

 Block2:
	mov ecx,ebp
	call CInPacket::Decode2
	push 0xFFFFFFFF
	mov ecx,ebx
	movzx esi,ax
	call ZArray<unsigned short>::InsertBefore
	sub edi,1
	mov word ptr [eax],si
	jne Block2

 Block3:
	pop ebx

 Block4:
	pop edi
	pop esi
	pop ebp
	ret 4
}
}
// CMiniGameCreateDlg::OnChildNotify
_SUB_EXCEPTION_HANDLER(383380)
__SUB_CLASS_THIS(00383380, __thiscall, 53908,  CMiniGameCreateDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_383380
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
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x58]
	cmp eax,0x3E8
	jne Block25

 Block1:
	cmp ecx,0xC8
	jne Block25

 Block2:
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xAC]
	cmp dword ptr [eax+0x48],0
	mov dword ptr [esp+0x4C],0
	jne Block4

 Block3:
	mov ecx,dword ptr [esi+0xBC]
	push 0
	call CCtrlEdit::SetText

 Block4:
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
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x50],1
	call ebp
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	xor ecx,ecx
	test eax,eax
	setne cl
	mov bl,2
	mov byte ptr [esp+0x54],bl
	mov eax,dword ptr [esi+ecx*4+0xA0]
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0xB29
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],3
	test edi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	push 0x75
	push 0x3C
	mov ecx,edi
	mov byte ptr [esp+0x64],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x14],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x24],bx
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea ecx,[esp+0x34]
	push ecx
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	xor ecx,ecx
	test eax,eax
	setne cl
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x50],4
	mov eax,dword ptr [esi+ecx*4+0x98]
	push eax
	push 0x72
	push 0x71
	mov ecx,edi
	call IWzCanvas::Copy
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x34],bx
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call edx
	jmp Block27

 Block25:
	cmp ecx,0x64
	jne Block27

 Block26:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x20]
	mov ecx,esi
	call eax

 Block27:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0xC
}
}
// Median_ZRef_CS_COMMODITY__SnLessFunc_
__SUB(005F50C0, __cdecl, 66662,  const ZRef<CS_COMMODITY>&, const ZRef<CS_COMMODITY>&, const ZRef<CS_COMMODITY>&, const ZRef<CS_COMMODITY>&, SnLessFunc&) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	mov eax,dword ptr [eax+4]
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,4
	push eax
	call edi

 Block2:
	mov ebx,dword ptr [esp+0x20]
	mov eax,dword ptr [ebx+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,4
	push eax
	call edi

 Block4:
	mov ebp,dword ptr [esp+0x34]
	mov ecx,ebp
	call SnLessFunc::operator()
	mov esi,dword ptr [esp+0x20]
	sub esp,8
	test eax,eax
	mov eax,dword ptr [esi+4]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	je Block14

 Block5:
	test eax,eax
	je Block7

 Block6:
	add eax,4
	push eax
	call edi

 Block7:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block9

 Block8:
	add eax,4
	push eax
	call edi

 Block9:
	mov ecx,ebp
	call SnLessFunc::operator()
	test eax,eax
	je Block11

 Block10:
	mov eax,dword ptr [esp+0x1C]
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret

 Block11:
	mov eax,dword ptr [esi+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block13

 Block12:
	add eax,4
	push eax
	call edi

 Block13:
	sub esp,8
	mov dword ptr [esp+0x2C],esp
	jmp Block22

 Block14:
	test eax,eax
	je Block16

 Block15:
	add eax,4
	push eax
	call edi

 Block16:
	mov eax,dword ptr [ebx+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block18

 Block17:
	add eax,4
	push eax
	call edi

 Block18:
	mov ecx,ebp
	call SnLessFunc::operator()
	test eax,eax
	jne Block25

 Block19:
	mov eax,dword ptr [esi+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block21

 Block20:
	add eax,4
	push eax
	call edi

 Block21:
	mov ebx,dword ptr [esp+0x24]
	sub esp,8
	mov dword ptr [esp+0x28],esp

 Block22:
	mov eax,dword ptr [ebx+4]
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block24

 Block23:
	add eax,4
	push eax
	call edi

 Block24:
	mov ecx,ebp
	call SnLessFunc::operator()
	test eax,eax
	mov eax,esi
	jne Block26

 Block25:
	mov eax,ebx

 Block26:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// ITEMDATA::~ITEMDATA
_SUB_EXCEPTION_HANDLER(5F4AC0)
__SUB_CLASS_THIS0(005F4AC0, __thiscall, 54739,  ITEMDATA, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F4AC0
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
	mov eax,dword ptr [esi+0x28]
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
	mov eax,dword ptr [esi+0x28]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x28]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x28],0

 Block5:
	mov eax,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov esi,dword ptr [esi+0x18]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMiniGameCreateDlg::IsPasswordValid
_SUB_EXCEPTION_HANDLER(3836E0)
__SUB_CLASS_THIS0(003836E0, __thiscall, 53911,  CMiniGameCreateDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3836E0
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
	mov ecx,dword ptr [esi+0xBC]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov esi,dword ptr [esi+0xAC]
	mov esi,dword ptr [esi+0x48]
	mov eax,dword ptr [esp+8]
	test esi,esi
	je Block6

 Block1:
	test eax,eax
	je Block3

 Block2:
	cmp byte ptr [eax],0
	jne Block6

 Block3:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret

 Block6:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// get_minigame_type
__SUB(005F08B0, __cdecl, 66633,  long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0xA
	idiv ecx
	sub edx,0
	je Block4

 Block1:
	sub edx,1
	je Block3

 Block2:
	xor eax,eax
	ret

 Block3:
	mov eax,2
	ret

 Block4:
	mov eax,1
	ret
}
}
// CMemoryGameCreateDlg::Draw
_SUB_EXCEPTION_HANDLER(383860)
__SUB_CLASS_THIS(00383860, __thiscall, 53936,  CMemoryGameCreateDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_383860
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
	mov esi,ecx
	push 0
	call CWnd::Draw
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x48],0
	call ebp
	lea edx,[esp+0x2C]
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
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x48],1
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	xor ecx,ecx
	test eax,eax
	setne cl
	mov bl,2
	mov byte ptr [esp+0x4C],bl
	mov eax,dword ptr [esi+ecx*4+0xA0]
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xB29
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x54],3
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	push 0x90
	push 0x3D
	mov ecx,edi
	mov byte ptr [esp+0x5C],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x44],1
	cmp word ptr [esp+0x1C],bx
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x2C],bx
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block14:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
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
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	mov ebp,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi]
	xor ecx,ecx
	test eax,eax
	setne cl
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi+ecx*4+0x98]
	push ecx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x3C]
	push 0x8D
	push 0x71
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x80]
	push edi
	mov byte ptr [esp+0x64],4
	call eax
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x1C],bx
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],ecx
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	mov ebp,dword ptr [esp+0x1C]
	mov ebx,dword ptr [edi]
	xor edx,edx
	test eax,eax
	sete dl
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [esi+edx*4+0x90]
	mov ecx,dword ptr [esp+0x38]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0x79
	push 0xF
	push edi
	mov byte ptr [esp+0x64],5
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],0
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov eax,dword ptr [esi+0xBC]
	mov esi,dword ptr [esi+0xAC]
	mov esi,dword ptr [esi+0x48]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push esi
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call edx
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
// CMemoryGameCreateDlg::OnChildNotify
_SUB_EXCEPTION_HANDLER(383B60)
__SUB_CLASS_THIS(00383B60, __thiscall, 53934,  CMemoryGameCreateDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_383B60
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
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x58]
	cmp eax,0x3E8
	jne Block25

 Block1:
	cmp ecx,0xC8
	jne Block25

 Block2:
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xAC]
	cmp dword ptr [eax+0x48],0
	mov dword ptr [esp+0x4C],0
	jne Block4

 Block3:
	mov ecx,dword ptr [esi+0xBC]
	push 0
	call CCtrlEdit::SetText

 Block4:
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
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x50],1
	call ebp
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	xor ecx,ecx
	test eax,eax
	setne cl
	mov bl,2
	mov byte ptr [esp+0x54],bl
	mov eax,dword ptr [esi+ecx*4+0xA0]
	push eax
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0xB29
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],3
	test edi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	push 0x90
	push 0x3D
	mov ecx,edi
	mov byte ptr [esp+0x64],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x14],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x24],bx
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea ecx,[esp+0x34]
	push ecx
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	xor ecx,ecx
	test eax,eax
	setne cl
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x50],4
	mov eax,dword ptr [esi+ecx*4+0x98]
	push eax
	push 0x8D
	push 0x71
	mov ecx,edi
	call IWzCanvas::Copy
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x34],bx
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0xAC]
	mov eax,dword ptr [eax+0x48]
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call edx
	jmp Block27

 Block25:
	cmp ecx,0x64
	jne Block27

 Block26:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x20]
	mov ecx,esi
	call eax

 Block27:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0xC
}
}
// CMemoryGameCreateDlg::GetResult
_SUB_EXCEPTION_HANDLER(383F70)
__SUB_CLASS_THIS(00383F70, __thiscall, 53939,  CMemoryGameCreateDlg, void, ZXString<char>&, long&, ZXString<char>&, int32_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_383F70
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
	mov ecx,dword ptr [esi+0xB4]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x1C]
	push eax
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esi+0xBC]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esp+0x24]
	push eax
	mov dword ptr [esp+0x18],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0xAC]
	mov ecx,dword ptr [eax+0x48]
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [edx],ecx
	mov eax,dword ptr [esi+0xC4]
	mov ecx,dword ptr [eax+0x68]
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [edx],ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x10
}
}
// PriceMoreFunc::operator()
_SUB_EXCEPTION_HANDLER(5F3A40)
__SUB_CLASS_THIS(005F3A40, __thiscall, 61776,  PriceMoreFunc, int32_t, NakedParam<ZRef<CS_COMMODITY>>, NakedParam<ZRef<CS_COMMODITY>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F3A40
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
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x18],bl
	cmp eax,ebx
	je Block10

 Block1:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block3

 Block2:
	mov eax,dword ptr [eax+0x20]
	xor edx,edx
	cmp eax,dword ptr [ecx+0x20]
	lea ecx,[esp+0x20]
	setg dl
	mov esi,edx
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10

 Block3:
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	add eax,4
	push eax
	call edi
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	test eax,eax
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x24]
	add eax,4
	push eax
	call esi
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebx
	je Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block6:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block7:
	add eax,4
	push eax
	call edi
	test eax,eax
	jne Block13

 Block8:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	push ecx
	call esi
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block13

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax
	jmp Block13

 Block10:
	lea ecx,[esp+0x20]
	cmp dword ptr [esp+0x2C],ebx
	je Block12

 Block11:
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10

 Block12:
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CS_COMMODITY>::~ZRef<CS_COMMODITY>

 Block13:
	mov eax,1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x10
}
}
// ZSort_ZRef_CS_COMMODITY__PriceMoreFunc_
__SUB(00606B70, __cdecl, 66876,  void, ZArray<ZRef<CS_COMMODITY> >&, NakedParam<PriceMoreFunc>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelper<ZRef<CS_COMMODITY>, PriceMoreFunc>::call_0
	add esp,0x10
	pop esi
	ret

 Block3:
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	lea ecx,[eax+ecx*8-8]
	push ecx
	push eax
	push edx
	call ZSortHelper<ZRef<CS_COMMODITY>, PriceMoreFunc>::call_0
	add esp,0x10
	pop esi
	ret
}
}
