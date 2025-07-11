#include "regen.hpp"
// GuildDlgs.ipp
#include "GuildDlgs.hpp"

// CGuildRankDlg::OnCreate
_SUB_EXCEPTION_HANDLER(16A710)
__SUB_CLASS_THIS(0016A710, __thiscall, 45235,  CGuildRankDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16A710
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
	push 0
	lea edi,[esi+0xB4]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push 0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGUS__166
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov dword ptr [esp+0x44],0
	lea ebp,[esi+0xA4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	cmp dword ptr [ebp+4],0
	je Block4

 Block3:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block4:
	cmp dword ptr [esp+0x18],0
	mov ecx,dword ptr [ebx+4]
	mov dword ptr [ebp+4],ecx
	mov dword ptr [esp+0x44],0xFFFFFFFF
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	push 0
	push 0
	push 0
	push 0x3E8
	push offset _S_UIUIWINDOW2IMGUS__165
	lea edx,[esp+0x28]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov dword ptr [esp+0x44],1
	lea ebx,[esi+0x94]
	test eax,eax
	je Block8

 Block7:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	cmp dword ptr [ebx+4],0
	je Block10

 Block9:
	push 0
	mov ecx,ebx
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block10:
	cmp dword ptr [esp+0x18],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [ebx+4],eax
	mov dword ptr [esp+0x44],0xFFFFFFFF
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block12:
	push 0
	push 0
	push 0
	push 0x3E9
	push offset _S_UIUIWINDOW2IMGUS__164
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov dword ptr [esp+0x44],2
	lea ebx,[esi+0x9C]
	test eax,eax
	je Block14

 Block13:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	cmp dword ptr [ebx+4],0
	je Block16

 Block15:
	push 0
	mov ecx,ebx
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block16:
	mov edx,dword ptr [ebp+4]
	or ebp,0xFFFFFFFF
	cmp dword ptr [esp+0x18],0
	mov dword ptr [ebx+4],edx
	mov dword ptr [esp+0x44],ebp
	je Block18

 Block17:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block18:
	push 1
	push 1
	push offset _S_UIUIWINDOW2IMGUS__163
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CLayoutMan::AddLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xAC]
	cmp edi,eax
	je Block23

 Block19:
	mov dword ptr [esi+0xAC],eax
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	test edi,edi
	je Block23

 Block22:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block23:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block25:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea eax,[esp+0x1C]
	mov ebx,3
	push eax
	mov dword ptr [esp+0x48],ebx
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [esi+0xAC]
	mov byte ptr [esp+0x44],4
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x44],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x1C],di
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block35:
	mov dword ptr [esp+0x44],ebp
	cmp word ptr [esp+0x2C],di
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block39:
	cmp dword ptr [esi+0xB0],1
	mov eax,dword ptr [esi+0x98]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	jne Block41

 Block40:
	push 0
	jmp Block42

 Block41:
	push 1

 Block42:
	call eax
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	jne Block44

 Block43:
	xor ecx,ecx
	jmp Block45

 Block44:
	mov ecx,dword ptr [eax-4]

 Block45:
	mov eax,dword ptr [esi+0xB0]
	mov esi,dword ptr [esi+0xA0]
	lea edx,[eax+eax*2]
	lea eax,[edx+edx+2]
	mov edx,dword ptr [esi+4]
	cmp eax,ecx
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	jbe Block47

 Block46:
	push 0
	jmp Block48

 Block47:
	push 1

 Block48:
	call eax
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
// CGuildRankDlg::OnButtonClicked
__SUB_CLASS_THIS(00169E90, __thiscall, 45237,  CGuildRankDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,edi
	sub eax,0x3E8
	mov esi,ecx
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	inc dword ptr [esi+0xB0]
	jmp Block4

 Block3:
	dec dword ptr [esi+0xB0]

 Block4:
	cmp dword ptr [esi+0xB0],1
	mov eax,dword ptr [esi+0x98]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	jne Block6

 Block5:
	push 0
	jmp Block7

 Block6:
	push 1

 Block7:
	call edx
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	jne Block9

 Block8:
	xor ecx,ecx
	jmp Block10

 Block9:
	mov ecx,dword ptr [eax-4]

 Block10:
	mov eax,dword ptr [esi+0xB0]
	lea eax,[eax+eax*2]
	lea edx,[eax+eax+2]
	mov eax,dword ptr [esi+0xA0]
	cmp edx,ecx
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	jbe Block12

 Block11:
	push 0
	jmp Block13

 Block12:
	push 1

 Block13:
	call edx
	cmp edi,1
	jne Block15

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push edi
	mov ecx,esi
	call edx
	pop edi
	pop esi
	ret 4

 Block15:
	cmp edi,2
	jne Block17

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push edi
	mov ecx,esi
	call edx
	pop edi
	pop esi
	ret 4

 Block17:
	cmp edi,8
	jne Block19

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push edi
	mov ecx,esi
	call edx

 Block19:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 4
}
}
// CSetGuildMarkDlg::Update
_SUB_EXCEPTION_HANDLER(16ABC0)
__SUB_CLASS_THIS0(0016ABC0, __thiscall, 44968,  CSetGuildMarkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16ABC0
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov eax,dword ptr [edi+0xF0]
	sub eax,1
	mov dword ptr [esp+0x20],ebx
	je Block9

 Block1:
	sub eax,1
	je Block7

 Block2:
	sub eax,1
	jne Block13

 Block3:
	add dword ptr [edi+0xFC],0xFFFFFFE2
	cmp dword ptr [edi+0xFC],ebx
	jg Block13

 Block4:
	mov eax,dword ptr [edi+0x94]
	lea ecx,[eax+4]
	mov dword ptr [edi+0xF0],4
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov eax,dword ptr [edi+0x9C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	lea esi,[edi+0xD4]
	mov ebx,2
	nop

 Block5:
	mov eax,dword ptr [esi-0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov eax,dword ptr [esi-0x10]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov eax,dword ptr [esi-0x30]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	add esi,8
	sub ebx,1
	jne Block5

 Block6:
	mov eax,dword ptr [edi+0xE4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	jmp Block13

 Block7:
	add dword ptr [edi+0xF8],0xFFFFFFE2
	cmp dword ptr [edi+0xF8],ebx
	jg Block13

 Block8:
	mov ecx,edi
	call CSetGuildMarkDlg::ShowGuildMark
	push ebx
	push ebx
	push offset _S_UIUIWINDOW2IMGUS__167
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov ecx,edi
	call CWnd::GetCanvas
	lea ecx,[edi+0x138]
	call CLayoutMan::CopyToCanvas_1
	mov dword ptr [edi+0xF0],3
	jmp Block13

 Block9:
	mov eax,dword ptr [edi+0xEC]
	cmp eax,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x114]
	lea esi,[edi+0xF4]
	push esi
	push eax
	call edx
	cmp dword ptr [esi],ebx
	jne Block13

 Block12:
	mov dword ptr [edi+0xF0],2

 Block13:
	mov ecx,edi
	call CWnd::Update
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// CGuildRankDlg::CGuildRankDlg
_SUB_EXCEPTION_HANDLER(16DB70)
__SUB_CLASS_THIS(0016DB70, __thiscall, 45232,  CGuildRankDlg, void, ZArray<GUILDRANKING>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16DB70
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
	lea ecx,[esi+0x90]
	int 3// TODO: 	mov dword ptr [esi],offset CGuildRankDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CGuildRankDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CGuildRankDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [ecx],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov eax,dword ptr [esp+0x20]
	push eax
	mov byte ptr [esp+0x1C],6
	call ZArray<GUILDRANKING>::operator=
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGUS__175
	mov ecx,esi
	mov dword ptr [esi+0xB0],1
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
// CSetGuildMarkDlg::OnCreate
_SUB_EXCEPTION_HANDLER(16D0B0)
__SUB_CLASS_THIS(0016D0B0, __thiscall, 44969,  CSetGuildMarkDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16D0B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	lea ebx,[esi+0x138]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	mov dword ptr [esi+0xF0],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[esi+0xE8]
	push edi
	push eax
	mov dword ptr [esp+0xA8],ebp
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x9C],1
	cmp eax,ebp
	je Block4

 Block3:
	mov ebp,dword ptr [eax]

 Block4:
	mov edx,8
	push ebp
	mov word ptr [esp+0x34],dx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x38],eax
	test eax,eax
	jne Block7

 Block5:
	test ebp,ebp
	je Block7

 Block6:
	push 0x8007000E
	call _com_issue_error

 Block7:
	lea eax,[esp+0x30]
	push eax
	push 0xFFFFFF00
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xB4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xAC],3
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov byte ptr [esp+0xAC],2
	call IWzFont::Create
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x9C],1
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block15

 Block14:
	call _xbstr_t::Data_t::Release

 Block15:
	xor eax,eax
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x28],eax
	lea ecx,[esp+0x20]
	push ecx
	push eax
	push eax
	push 1
	push offset _S_UIUIWINDOW2IMGUS__174
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0xB4],4
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x3C],1
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov byte ptr [esp+0x9C],5
	lea ebp,[esi+0x90]
	test eax,eax
	je Block17

 Block16:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	cmp dword ptr [ebp+4],0
	je Block19

 Block18:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block19:
	cmp dword ptr [esp+0x1C],0
	mov eax,dword ptr [edi+4]
	mov dword ptr [ebp+4],eax
	mov byte ptr [esp+0x9C],4
	je Block21

 Block20:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block21:
	lea ecx,[esp+0x20]
	push ecx
	push 0
	push 0
	push 2
	push offset _S_UIUIWINDOW2IMGUS__173
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0x9C],6
	lea edi,[esi+0x98]
	test eax,eax
	je Block23

 Block22:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	cmp dword ptr [edi+4],0
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	je Block25

 Block24:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block25:
	cmp dword ptr [esp+0x1C],0
	mov eax,dword ptr [ebp+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [esp+0x9C],4
	je Block27

 Block26:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block27:
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	push offset _S_UIUIWINDOW2IMGUS__172
	lea ecx,[esp+0x30]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],7
	test eax,eax
	je Block29

 Block28:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	mov byte ptr [esp+0x9C],4
	test eax,eax
	je Block38

 Block31:
	lea edi,[eax+8]
	test edi,edi
	je Block38

 Block32:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block34

 Block33:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block34:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block36

 Block35:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block36:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0
	push 0xAC
	push 0x25
	push 0x3E8
	push esi
	call edx
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],8
	test eax,eax
	je Block39

 Block37:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block40

 Block38:
	xor edi,edi
	jmp Block34

 Block39:
	xor eax,eax

 Block40:
	mov byte ptr [esp+0x9C],4
	test eax,eax
	je Block48

 Block41:
	lea edi,[eax+8]
	test edi,edi
	je Block48

 Block42:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block44

 Block43:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block44:
	mov eax,dword ptr [esi+0xD4]
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block46

 Block45:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block46:
	mov ecx,dword ptr [esi+0xD4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0
	push 0xE4
	push 0x25
	push 0x3EC
	push esi
	call edx
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],9
	test eax,eax
	je Block49

 Block47:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block50

 Block48:
	xor edi,edi
	jmp Block44

 Block49:
	xor eax,eax

 Block50:
	mov byte ptr [esp+0x9C],4
	test eax,eax
	je Block58

 Block51:
	lea edi,[eax+8]
	test edi,edi
	je Block58

 Block52:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block54

 Block53:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block54:
	mov eax,dword ptr [esi+0xC4]
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block56

 Block55:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block56:
	mov ecx,dword ptr [esi+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0
	push 0xAC
	push 0x82
	push 0x3EA
	push esi
	call edx
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],0xA
	test eax,eax
	je Block59

 Block57:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block60

 Block58:
	xor edi,edi
	jmp Block54

 Block59:
	xor eax,eax

 Block60:
	mov byte ptr [esp+0x9C],4
	test eax,eax
	je Block68

 Block61:
	lea edi,[eax+8]
	test edi,edi
	je Block68

 Block62:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block64

 Block63:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block64:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block66

 Block65:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block66:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0
	push 0xE4
	push 0x82
	push 0x3EE
	push esi
	call edx
	push offset _S_UIUIWINDOW2IMGUS__171
	lea ecx,[esp+0x30]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],0xB
	test eax,eax
	je Block69

 Block67:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block70

 Block68:
	xor edi,edi
	jmp Block64

 Block69:
	xor eax,eax

 Block70:
	mov byte ptr [esp+0x9C],4
	test eax,eax
	je Block78

 Block71:
	lea edi,[eax+8]
	test edi,edi
	je Block78

 Block72:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block74

 Block73:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block74:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block76

 Block75:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block76:
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0
	push 0xAC
	push 0x50
	push 0x3E9
	push esi
	call edx
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],0xC
	test eax,eax
	je Block79

 Block77:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block80

 Block78:
	xor edi,edi
	jmp Block74

 Block79:
	xor eax,eax

 Block80:
	mov byte ptr [esp+0x9C],4
	test eax,eax
	je Block88

 Block81:
	lea edi,[eax+8]
	test edi,edi
	je Block88

 Block82:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block84

 Block83:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block84:
	mov eax,dword ptr [esi+0xDC]
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block86

 Block85:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block86:
	mov ecx,dword ptr [esi+0xDC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0
	push 0xE4
	push 0x50
	push 0x3ED
	push esi
	call edx
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],0xD
	test eax,eax
	je Block89

 Block87:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block90

 Block88:
	xor edi,edi
	jmp Block84

 Block89:
	xor eax,eax

 Block90:
	mov byte ptr [esp+0x9C],4
	test eax,eax
	je Block98

 Block91:
	lea edi,[eax+8]
	test edi,edi
	je Block98

 Block92:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block94

 Block93:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block94:
	mov eax,dword ptr [esi+0xCC]
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block96

 Block95:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block96:
	mov ecx,dword ptr [esi+0xCC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0
	push 0xAC
	push 0xAD
	push 0x3EB
	push esi
	call edx
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],0xE
	test eax,eax
	je Block99

 Block97:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block100

 Block98:
	xor edi,edi
	jmp Block94

 Block99:
	xor eax,eax

 Block100:
	mov byte ptr [esp+0x9C],4
	test eax,eax
	je Block110

 Block101:
	lea edi,[eax+8]
	test edi,edi
	je Block110

 Block102:
	add edi,0xFFFFFFF8
	test edi,edi
	je Block104

 Block103:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block104:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block106

 Block105:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block106:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0
	push 0xE4
	push 0xAD
	push 0x3EF
	push esi
	call edx
	lea edi,[esi+0xD4]
	mov ebp,2
	lea ecx,[ecx]

 Block107:
	mov eax,dword ptr [edi-0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [edi-0x10]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [edi-0x30]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	add edi,8
	sub ebp,1
	jne Block107

 Block108:
	lea ecx,[esp+0x40]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	mov bl,0xF
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xA0],bl
	mov dword ptr [esp+0x44],0xFFEEEEEE
	mov dword ptr [esp+0x48],0xFFA5A198
	mov dword ptr [esp+0x4C],0xFF999999
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x9C],0x10
	cmp eax,ebp
	je Block111

 Block109:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block112

 Block110:
	xor edi,edi
	jmp Block104

 Block111:
	xor eax,eax

 Block112:
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebp
	je Block142

 Block113:
	lea edi,[eax+8]
	cmp edi,ebp
	je Block142

 Block114:
	add edi,0xFFFFFFF8
	cmp edi,ebp
	je Block116

 Block115:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block116:
	mov eax,dword ptr [esi+0xE4]
	mov dword ptr [esi+0xE4],edi
	cmp eax,ebp
	je Block120

 Block117:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block120

 Block118:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block120

 Block119:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block120:
	mov ecx,dword ptr [esi+0xE4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x40]
	push edx
	push 0x12
	push 0x58
	push 0xFC
	push 0x23
	push 2
	push 0x3F0
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0xD14
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xE4]
	push ebp
	push eax
	mov byte ptr [esp+0xA4],0x11
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebp
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block122:
	lea edx,[esp+0x14]
	push 0xD15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xE4]
	push 1
	push eax
	mov byte ptr [esp+0xA4],0x12
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebp
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block124:
	lea eax,[esp+0x14]
	push 0xD16
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xE4]
	push 2
	push eax
	mov byte ptr [esp+0xA4],0x13
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebp
	je Block126

 Block125:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block126:
	lea ecx,[esp+0x14]
	push 0xD17
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xE4]
	push 3
	push eax
	mov byte ptr [esp+0xA4],0x14
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebp
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block128:
	lea edx,[esp+0x18]
	push 0xD18
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xE4]
	push 4
	push eax
	mov byte ptr [esp+0xA4],0x15
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x9C],bl
	cmp eax,ebp
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block130:
	mov eax,dword ptr [esi+0xE4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebp
	call edx
	mov ecx,esi
	mov dword ptr [esi+0xF8],0x3E8
	mov dword ptr [esi+0xFC],ebp
	call CSetGuildMarkDlg::ShowAnimation
	mov ecx,esi
	call CSetGuildMarkDlg::InitGuildMark
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x9C],4
	cmp eax,ebp
	je Block139

 Block131:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block138

 Block132:
	cmp esi,ebp
	je Block138

 Block133:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block135

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block135:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block137

 Block136:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block137:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block138:
	mov dword ptr [esp+0x8C],ebp

 Block139:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp eax,ebp
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block141:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret 4

 Block142:
	xor edi,edi
	jmp Block116
}
}
// CSetGuildMarkDlg::ShowAnimation
_SUB_EXCEPTION_HANDLER(169FE0)
__SUB_CLASS_THIS0(00169FE0, __thiscall, 44968,  CSetGuildMarkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_169FE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0
	push 0xFF
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call CWnd::GetLayer
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x64],0
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],1
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	call IWzGr2DLayer::Getlt
	push 0
	lea eax,[esp+0x30]
	push offset _S_UIUIWINDOW2IMGUS__162
	push eax
	mov byte ptr [esp+0x70],2
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xEC]
	add esp,0x28
	cmp esi,eax
	je Block7

 Block3:
	mov dword ptr [edi+0xEC],eax
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	test esi,esi
	je Block7

 Block6:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block7:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea edx,[esp+0x20]
	mov ebx,3
	push edx
	mov dword ptr [esp+0x4C],ebx
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov ecx,dword ptr [edi+0xEC]
	mov byte ptr [esp+0x48],4
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x20],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block21:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block25:
	mov dword ptr [edi+0xF0],1
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret
}
}
// CSetGuildMarkDlg::~CSetGuildMarkDlg
_SUB_EXCEPTION_HANDLER(16A5A0)
__SUB_CLASS_THIS0(0016A5A0, __thiscall, 44968,  CSetGuildMarkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16A5A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CSetGuildMarkDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSetGuildMarkDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSetGuildMarkDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x138]
	mov dword ptr [esp+0x1C],9
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xEC]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0xE0]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 2
	push 8
	lea eax,[esi+0xD0]
	push eax
	mov byte ptr [esp+0x2C],5
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 2
	push 8
	lea ecx,[esi+0xC0]
	push ecx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 2
	push 8
	lea edx,[esi+0xB0]
	push edx
	mov byte ptr [esp+0x2C],3
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 2
	push 8
	lea eax,[esi+0xA0]
	push eax
	mov byte ptr [esp+0x2C],2
	call __eh_vector_dtor_iterator
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
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
// CCreateGuildAgreeDlg::Update
_SUB_EXCEPTION_HANDLER(16BD60)
__SUB_CLASS_THIS0(0016BD60, __thiscall, 45094,  CCreateGuildAgreeDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16BD60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1EC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x200]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x3C],ebp
	mov eax,dword ptr [esi+0xB4]
	dec eax
	mov dword ptr [esp+0x208],ebp
	cmp eax,3
	ja Block64

 Block1:
	lea ebx,[ebp-0x1E]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block6
cmp EAX, 2
je Block59
cmp EAX, 3
je Block61


 Block2:
	mov eax,dword ptr [esi+0xAC]
	cmp eax,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x114]
	lea edi,[esi+0xB8]
	push edi
	push eax
	call edx
	cmp dword ptr [edi],ebp
	jne Block64

 Block5:
	mov dword ptr [esi+0xB4],2
	jmp Block64

 Block6:
	add dword ptr [esi+0xBC],ebx
	cmp dword ptr [esi+0xBC],ebp
	jg Block64

 Block7:
	push offset _D_VTMISSING
	lea ecx,[esp+0xA4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x164]
	mov byte ptr [esp+0x20C],1
	call Ztl_variant_t::_ctor_1
	push ebp
	push ebp
	lea eax,[esp+0xA8]
	push eax
	lea ecx,[esp+0x16C]
	push ecx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,2
	push offset _S_UIUIWINDOW2IMGUS__170
	mov byte ptr [esp+0x220],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x21C],3
	cmp dword ptr [_D_G_RM],ebp
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x1F4]
	mov byte ptr [esp+0x21C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x210],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[esp+0x1E0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x160]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA0]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esp+0x14],ebp
	lea eax,[esp+0x28]
	push 0x3D0
	mov bl,9
	push eax
	mov byte ptr [esp+0x210],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x214],0xA
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x208],bl
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push offset _D_VTMISSING
	lea ecx,[esp+0xC4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1A4]
	mov byte ptr [esp+0x20C],0xB
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x208],0xC
	cmp ecx,ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0xC0]
	push edx
	lea eax,[esp+0x1A4]
	push eax
	push 0x13A
	push 0xFA
	call IWzCanvas::Create
	lea ecx,[esp+0x1A0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xC0]
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x84]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0x90]
	lea ecx,[esp+0x80]
	push ecx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x214],0xD
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xA8]
	mov byte ptr [esp+0x210],0xE
	cmp ecx,ebp
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov byte ptr [esp+0x210],0xD
	call IWzFont::CalcTextWidth
	lea ecx,[esp+0x80]
	mov edi,eax
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xE4]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0x94]
	lea edx,[esp+0xE0]
	push edx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x214],0xF
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xA8]
	mov byte ptr [esp+0x210],0x10
	cmp ecx,ebp
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov byte ptr [esp+0x210],0xF
	call IWzFont::CalcTextWidth
	lea ecx,[esp+0xE0]
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x1D4]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x208],0x11
	cmp ecx,ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x1D0]
	push eax
	push edx
	push ebp
	push ebp
	call IWzCanvas::Copy
	lea ecx,[esp+0x1D0]
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x184]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x104]
	mov byte ptr [esp+0x20C],0x12
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x180]
	push eax
	mov eax,dword ptr [esi+0xA8]
	lea ecx,[esp+0x104]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x90]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x21C],0x13
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x218],0x14
	cmp ecx,ebp
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov ebp,0x66
	push 0x24
	sub ebp,edi
	push ebp
	mov byte ptr [esp+0x220],0x13
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0x100]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x180]
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x1C4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x124]
	mov byte ptr [esp+0x20C],0x15
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x1C0]
	push edx
	lea eax,[esp+0x124]
	push eax
	mov eax,dword ptr [esi+0xA8]
	push eax
	mov eax,dword ptr [esi+0x94]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x21C],0x16
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x218],0x17
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edi,0x66
	sub edi,dword ptr [esp+0x28]
	push 0x36
	push edi
	mov byte ptr [esp+0x220],0x16
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0x120]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1C0]
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x94]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x144]
	mov byte ptr [esp+0x20C],0x18
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0xA8]
	lea ecx,[esp+0x90]
	push ecx
	lea edx,[esp+0x144]
	push edx
	push eax
	mov eax,dword ptr [esi+0x94]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x21C],0x19
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x218],0x1A
	test ecx,ecx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	push 0x5A
	push edi
	mov byte ptr [esp+0x220],0x19
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0x140]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xD4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xB4]
	mov byte ptr [esp+0x20C],0x1B
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0xD0]
	push eax
	mov eax,dword ptr [esi+0xA8]
	lea ecx,[esp+0xB4]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x90]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x21C],0x1C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x218],0x1D
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	push 0x6E
	push ebp
	mov byte ptr [esp+0x220],0x1C
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0xB0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xD0]
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xF4]
	call Ztl_variant_t::_ctor_1
	mov edx,3
	mov word ptr [esp+0x60],dx
	mov dword ptr [esp+0x68],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x208],0x1F
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[esp+0xF0]
	push eax
	lea edx,[esp+0x64]
	push edx
	push 0
	push 0x13A
	push 0xFA
	push 0x33
	push 0x1F
	lea eax,[esp+0x48]
	push eax
	call IWzGr2D::CreateLayer
	lea edi,[esi+0xB0]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	lea ecx,[esp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xF0]
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x208],0x20
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x208],0x21
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x40]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x208],bl
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x208],0x22
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],eax
	test eax,eax
	je Block39

 Block38:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block39:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x208],0x23
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea edx,[esp+0x50]
	push edx
	call IWzGr2DLayer::Putoverlay
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x208],bl
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	push 0xFFFFFF
	call IWzGr2DLayer::Putcolor
	push offset _D_VTMISSING
	lea ecx,[esp+0x194]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x174]
	mov byte ptr [esp+0x20C],0x24
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x154]
	mov byte ptr [esp+0x20C],0x25
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x134]
	mov byte ptr [esp+0x20C],0x26
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x114]
	mov byte ptr [esp+0x20C],0x27
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x208],0x28
	test ecx,ecx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x190]
	push eax
	lea edx,[esp+0x174]
	push edx
	lea eax,[esp+0x158]
	push eax
	lea edx,[esp+0x13C]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0x120]
	push eax
	push edx
	lea eax,[esp+0x208]
	push eax
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0x1F0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x110]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x130]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x150]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x170]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x190]
	mov byte ptr [esp+0x208],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x1B4]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x208],0x29
	test ecx,ecx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	call IWzVector2D::GetcurrentTime
	add eax,0x3E8
	mov ecx,3
	mov word ptr [esp+0x70],cx
	mov dword ptr [esp+0x78],eax
	mov edi,dword ptr [edi]
	mov bl,0x2A
	mov byte ptr [esp+0x208],bl
	test edi,edi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea edx,[esp+0x24]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x208],0x2B
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea eax,[esp+0x1B0]
	push eax
	lea edx,[esp+0x74]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x208],bl
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	lea ecx,[esp+0x70]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1B0]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0xB4],3
	mov byte ptr [esp+0x208],8
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x208],0
	test eax,eax
	je Block64

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block64

 Block59:
	add dword ptr [esi+0xC0],ebx
	cmp dword ptr [esi+0xC0],ebp
	jg Block61

 Block60:
	mov ecx,dword ptr [esi+0x9C]
	mov edi,4
	add ecx,edi
	mov dword ptr [esi+0xB4],edi
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov ecx,dword ptr [esi+0xA4]
	mov eax,dword ptr [ecx+edi]
	mov edx,dword ptr [eax+0x24]
	add ecx,edi
	push 1
	call edx
	mov dword ptr [esi+0xB4],edi

 Block61:
	add dword ptr [esi+0xC4],ebx
	cmp dword ptr [esi+0xC4],ebp
	jg Block64

 Block62:
	push 7
	mov ecx,esi
	call CDialog::SetRet
	lea eax,[esp+0x30]
	push 0x15A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [esp+0x210],0x2C
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x38]
	add esp,8
	mov byte ptr [esp+0x208],0
	cmp eax,ebp
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov ecx,esi
	call CWnd::Update
	mov ecx,dword ptr [esp+0x200]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1F8
	ret
}
}
// CGuildRankDlg::DrawRanking
_SUB_EXCEPTION_HANDLER(16B380)
__SUB_CLASS_THIS(0016B380, __thiscall, 45239,  CGuildRankDlg, void, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16B380
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
	mov edi,ecx
	lea eax,[esp+0x14]
	push eax
	call CWnd::GetCanvas
	xor ebp,ebp
	mov dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x1C],ebp
	mov esi,dword ptr [esp+0x68]
	cmp esi,0xA
	mov byte ptr [esp+0x60],2
	push esi
	jge Block2

 Block1:
	push offset _S_0D
	lea ecx,[esp+0x20]
	push ecx
	jmp Block3

 Block2:
	push offset _S_D__1
	lea edx,[esp+0x20]
	push edx

 Block3:
	call ZXString<char>::Format
	mov ecx,dword ptr [edi+0x90]
	lea eax,[esi+esi*2]
	mov edx,dword ptr [ecx+eax*8-0x14]
	lea edi,[ecx+eax*8-0x18]
	add esp,0xC
	push edx
	lea eax,[esp+0x20]
	push offset _S_D__1
	push eax
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov esi,dword ptr [esp+0x74]
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],esi
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x70]
	push 0x31
	push eax
	mov byte ptr [esp+0x70],4
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x70],6
	cmp ecx,ebp
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ebp,dword ptr [esp+0x7C]
	push ebp
	push 0x38
	mov byte ptr [esp+0x78],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],4
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov ebx,8
	mov byte ptr [esp+0x60],3
	cmp word ptr [esp+0x28],bx
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x38],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov eax,3
	mov word ptr [esp+0x38],ax
	mov dword ptr [esp+0x40],esi
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x70]
	push 0x31
	push eax
	mov byte ptr [esp+0x70],8
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi]
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	mov bl,9
	push eax
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	push ebp
	mov byte ptr [esp+0x74],0xA
	push 0x5E
	mov byte ptr [esp+0x78],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],8
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov ebx,8
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x38],bx
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x28],bx
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push ecx
	call ebx
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],esi
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x64],0xC
	call ebx
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x7C]
	push 0x31
	push edx
	mov byte ptr [esp+0x70],0xD
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x24]
	push eax
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	mov bl,0xE
	push esi
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_0
	push ebp
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0x80],0xF
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x84]
	push 0x31
	push ecx
	mov byte ptr [esp+0x84],0x10
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x7C],0x11
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov byte ptr [esp+0x7C],0x12
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [esp+0x28]
	mov edx,0x113
	sub edx,eax
	push edx
	mov byte ptr [esp+0x78],0x13
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x60],0xD
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],0xC
	jne Block46

 Block40:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block42:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block43:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],0xB
	jne Block47

 Block44:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block48

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block46:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x38]
	push ecx
	call ebx
	jmp Block43

 Block47:
	lea eax,[esp+0x28]
	push eax
	call ebx

 Block48:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],2
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x48]
	push edx
	call ebx

 Block52:
	cmp dword ptr [edi+8],0
	jne Block61

 Block53:
	cmp dword ptr [edi+0xC],0
	jne Block61

 Block54:
	cmp dword ptr [edi+0x10],0
	jne Block61

 Block55:
	cmp dword ptr [edi+0x14],0
	jne Block61

 Block56:
	mov byte ptr [esp+0x60],1
	test esi,esi
	je Block58

 Block57:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	push eax
	jmp Block79

 Block61:
	movzx eax,byte ptr [edi+0x14]
	movzx ecx,word ptr [edi+0x10]
	movzx edx,byte ptr [edi+0xC]
	push eax
	movzx eax,word ptr [edi+8]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetGuildMarkCanvas
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	sete cl
	test cl,cl
	je Block68

 Block62:
	mov byte ptr [esp+0x60],2
	test eax,eax
	je Block64

 Block63:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block64:
	mov byte ptr [esp+0x60],1
	test esi,esi
	je Block66

 Block65:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block60

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	add esp,4
	push eax
	jmp Block79

 Block68:
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],0xFF
	mov edi,dword ptr [esp+0x14]
	lea edx,[esp+0x48]
	push edx
	push eax
	add ebp,0xFFFFFFFC
	push ebp
	push 0x4A
	mov ecx,edi
	mov byte ptr [esp+0x70],0x15
	call IWzCanvas::Copy
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],0x14
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x48]
	push ecx
	call ebx

 Block72:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x60],2
	test eax,eax
	je Block74

 Block73:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block74:
	mov byte ptr [esp+0x60],1
	test esi,esi
	je Block76

 Block75:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov ecx,dword ptr [edi]
	push edi

 Block79:
	mov edx,dword ptr [ecx+8]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 0x10
}
}
// CSetGuildMarkDlg::InitLastMarkNumber
_SUB_EXCEPTION_HANDLER(16C810)
__SUB_CLASS_THIS0(0016C810, __thiscall, 44968,  CSetGuildMarkDlg, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16C810
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor esi,esi
	add ecx,0x114
	mov dword ptr [ebp-0x1C],esi
	mov dword ptr [ebp-0x18],ecx

 Block1:
	lea eax,[ebp-0x14]
	push 0xD20
	xor ebx,ebx
	push eax
	mov dword ptr [ecx],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],ebx
	cmp esi,8
	ja Block74

 Block2:
	cmp ESI, 0
je Block3
cmp ESI, 1
je Block6
cmp ESI, 2
je Block9
cmp ESI, 3
je Block12
cmp ESI, 4
je Block15
cmp ESI, 5
je Block74
cmp ESI, 6
je Block74
cmp ESI, 7
je Block74
cmp ESI, 8
je Block18


 Block3:
	lea ecx,[ebp-0x3C]
	push 0xD21
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,dword ptr [eax-4]
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x3C]
	jmp Block22

 Block5:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x3C]
	jmp Block22

 Block6:
	lea edx,[ebp-0x34]
	push 0xD22
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax-4]
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x34]
	jmp Block22

 Block8:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x34]
	jmp Block22

 Block9:
	lea eax,[ebp-0x4C]
	push 0xD23
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],3
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax-4]
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x4C]
	jmp Block22

 Block11:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x4C]
	jmp Block22

 Block12:
	lea ecx,[ebp-0x30]
	push 0xD24
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax-4]
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x30]
	jmp Block22

 Block14:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x30]
	jmp Block22

 Block15:
	lea edx,[ebp-0x48]
	push 0xD25
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],5
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax-4]
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x48]
	jmp Block22

 Block17:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x48]
	jmp Block22

 Block18:
	lea eax,[ebp-0x44]
	push 0xD26
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],6
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax-4]
	jmp Block21

 Block20:
	xor ecx,ecx

 Block21:
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp-0x44]

 Block22:
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x80]
	push ecx
	call edi
	lea edx,[ebp-0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block76

 Block25:
	lea eax,[ebp-0x60]
	push eax
	mov byte ptr [ebp-4],7
	call edi
	lea ecx,[ebp-0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block76

 Block26:
	mov edx,dword ptr [ebp-0x14]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edx
	push ebx
	push ebx
	mov byte ptr [ebp-4],8
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp-0x14]
	mov esi,esp
	push ebx
	push ebx
	lea eax,[ebp-0x80]
	push eax
	lea ecx,[ebp-0x60]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edx
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x2C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],9
	cmp dword ptr [_D_G_RM],ebx
	je Block77

 Block27:
	lea eax,[ebp-0x90]
	mov byte ptr [ebp-4],8
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp-0x2C],ebx
	test eax,eax
	je Block30

 Block28:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x50]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x50]
	mov dword ptr [ebp-0x2C],ebx
	test eax,eax
	jge Block30

 Block29:
	cmp eax,0x80004002
	jne Block76

 Block30:
	mov esi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x90],si
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x88]
	xor ecx,ecx
	mov word ptr [ebp-0x90],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp-0x90]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x60],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x80],si
	jne Block41

 Block39:
	mov eax,dword ptr [ebp-0x78]
	xor edx,edx
	mov word ptr [ebp-0x80],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[ebp-0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea ecx,[ebp-0x70]
	push ecx
	call edi
	xor esi,esi
	mov byte ptr [ebp-4],0xF
	cmp ebx,esi
	je Block77

 Block43:
	lea edx,[ebp-0x38]
	push edx
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x10
	mov dword ptr [ebp-0x24],esi
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block45:
	lea ecx,[ebp-0x24]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block47

 Block46:
	cmp eax,0x80004002
	jne Block76

 Block47:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x12
	cmp eax,esi
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	mov dword ptr [ebp-0x40],esi
	mov esi,dword ptr [ebp-0x24]
	test esi,esi
	je Block77

 Block50:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x20]
	push ecx
	push ebx
	mov dword ptr [ebp-0x20],0
	call edx
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block52:
	mov ecx,dword ptr [ebp-0x20]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	dec ecx
	push ecx
	push esi
	call edx
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[ebp-0x40]
	push ecx
	lea edx,[ebp-0x70]
	push edx
	push 1
	push esi
	call eax
	lea ecx,[ebp-0x70]
	push ecx
	lea edx,[ebp-0x28]
	push edx
	call DetachBSTR
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block54

 Block53:
	mov eax,dword ptr [eax]
	jmp Block55

 Block54:
	xor eax,eax

 Block55:
	push eax
	call __wtoi
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [ebp-0x28]
	add esp,4
	test eax,eax
	je Block64

 Block56:
	mov edi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block63

 Block57:
	test edi,edi
	je Block63

 Block58:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block60:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block62

 Block61:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block62:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block63:
	mov dword ptr [ebp-0x28],0

 Block64:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xF
	call eax
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],0xE
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0x68]
	xor ecx,ecx
	mov word ptr [ebp-0x70],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[ebp-0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block70:
	mov esi,dword ptr [ebp-0x1C]

 Block71:
	mov ecx,dword ptr [ebp-0x18]
	inc esi
	add ecx,4
	lea edx,[esi+1]
	cmp edx,9
	mov dword ptr [ebp-0x18],ecx
	mov dword ptr [ebp-0x1C],esi
	jle Block1

 Block72:
	lea esp,[ebp-0xA0]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp

 Block73:
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret

 Block74:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block71

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block71

 Block76:
	push eax
	call _com_issue_error

 Block77:
	push 0x80004003
	call _com_issue_error
}
}
// CCreateGuildAgreeDlg::CCreateGuildAgreeDlg
_SUB_EXCEPTION_HANDLER(16B110)
__SUB_CLASS_THIS(0016B110, __thiscall, 45092,  CCreateGuildAgreeDlg, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16B110
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
	mov dword ptr [esp+0xC],esi
	mov dword ptr [esp+0x18],1
	call CDialog::_ctor_default
	lea eax,[esp+0x20]
	lea ecx,[esi+0x90]
	int 3// TODO: 	mov dword ptr [esi],offset CCreateGuildAgreeDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCreateGuildAgreeDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCreateGuildAgreeDlg::`vftable'{for `ZRefCounted'}
	xor ebx,ebx
	push eax
	mov byte ptr [esp+0x1C],2
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea edx,[esp+0x24]
	lea ecx,[esi+0x94]
	push edx
	mov byte ptr [esp+0x1C],3
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esi+0x9C],ebx
	mov dword ptr [esi+0xA4],ebx
	mov dword ptr [esi+0xA8],ebx
	mov dword ptr [esi+0xAC],ebx
	mov dword ptr [esi+0xB0],ebx
	mov dword ptr [esi+0xC8],ebx
	mov dword ptr [esi+0xCC],ebx
	mov dword ptr [esi+0xD0],ebx
	mov dword ptr [esi+0xD4],ebx
	mov dword ptr [esi+0xD8],ebx
	push ebx
	push ebx
	push 1
	push 0xA
	push 0x13A
	push 0xFA
	push 0x64
	push 0x113
	mov ecx,esi
	mov byte ptr [esp+0x38],0xA
	call CDialog::CreateDlg_0
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CCreateGuildAgreeDlg::OnCreate
_SUB_EXCEPTION_HANDLER(16BAB0)
__SUB_CLASS_THIS(0016BAB0, __thiscall, 45095,  CCreateGuildAgreeDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16BAB0
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
	xor ebp,ebp
	push ebp
	push ebp
	lea ebx,[esi+0xC8]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	mov dword ptr [esi+0xB4],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[esi+0xA8]
	push edi
	push eax
	mov dword ptr [esp+0x48],ebp
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x3C],1
	cmp eax,ebp
	je Block4

 Block3:
	mov ebp,dword ptr [eax]

 Block4:
	mov edx,8
	push ebp
	mov word ptr [esp+0x28],dx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	jne Block7

 Block5:
	test ebp,ebp
	je Block7

 Block6:
	push 0x8007000E
	call _com_issue_error

 Block7:
	lea eax,[esp+0x24]
	push eax
	push 0xFFFFFF00
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x54],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x4C],3
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov byte ptr [esp+0x4C],2
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],1
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test ecx,ecx
	je Block15

 Block14:
	call _xbstr_t::Data_t::Release

 Block15:
	push 0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGUS__169
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0x3C],4
	lea ebp,[esi+0x98]
	test eax,eax
	je Block17

 Block16:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	cmp dword ptr [ebp+4],0
	je Block19

 Block18:
	push 0
	mov ecx,ebp
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block19:
	cmp dword ptr [esp+0x18],0
	mov edx,dword ptr [edi+4]
	mov dword ptr [ebp+4],edx
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	je Block21

 Block20:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block21:
	push 0
	push 0
	push 0
	push 2
	push offset _S_UIUIWINDOW2IMGUS__168
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	xor ebx,ebx
	mov dword ptr [esp+0x3C],5
	lea edi,[esi+0xA0]
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	cmp dword ptr [edi+4],ebx
	je Block25

 Block24:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block25:
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [edi+4],ecx
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp dword ptr [esp+0x20],ebx
	je Block27

 Block26:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x20],ebx

 Block27:
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	mov eax,dword ptr [esi+0xA4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	mov ecx,esi
	mov dword ptr [esi+0xBC],0x3E8
	mov dword ptr [esi+0xC0],0x7D0
	mov dword ptr [esi+0xC4],0x7530
	call CCreateGuildAgreeDlg::ShowAnimation
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CCreateGuildAgreeDlg::ShowAnimation
_SUB_EXCEPTION_HANDLER(16ADB0)
__SUB_CLASS_THIS0(0016ADB0, __thiscall, 45094,  CCreateGuildAgreeDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16ADB0
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
	mov edi,ecx
	push 0
	push 0xFF
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	call CWnd::GetLayer
	push 0
	push 0
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x68],0
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],1
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push edx
	call IWzGr2DLayer::Getlt
	lea eax,[esp+0x30]
	push 0x872
	push eax
	mov byte ptr [esp+0x70],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x68],3
	push 0
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x74],5
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xAC]
	add esp,0x28
	cmp esi,eax
	je Block7

 Block3:
	mov dword ptr [edi+0xAC],eax
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	test esi,esi
	je Block7

 Block6:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block7:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],4
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x24]
	mov ebx,6
	push edx
	mov dword ptr [esp+0x50],ebx
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [edi+0xAC]
	mov byte ptr [esp+0x4C],7
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x4C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x24],si
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x24]
	push edx
	call ebx

 Block23:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block27:
	mov dword ptr [edi+0xB4],1
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
// CSetGuildMarkDlg::InitGuildMark
__SUB_CLASS_THIS0(0016CE80, __thiscall, 44968,  CSetGuildMarkDlg, void) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp word ptr [eax+0x37E3],0
	push esi
	mov esi,ecx
	je Block2

 Block1:
	movzx ecx,word ptr [eax+0x37E0]
	mov dword ptr [esi+0x100],ecx
	movzx edx,byte ptr [eax+0x37E2]
	mov dword ptr [esi+0x104],edx
	movzx ecx,word ptr [eax+0x37E3]
	mov dword ptr [esi+0x108],ecx
	movzx edx,byte ptr [eax+0x37E5]
	mov dword ptr [esi+0x10C],edx
	jmp Block3

 Block2:
	mov dword ptr [esi+0x100],0x3E8
	mov dword ptr [esi+0x104],1
	mov dword ptr [esi+0x108],0x7D0
	mov dword ptr [esi+0x10C],1

 Block3:
	mov ecx,dword ptr [esi+0x108]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,9
	jne Block5

 Block4:
	mov eax,dword ptr [esi+0xE4]
	mov eax,dword ptr [eax+0x3C]
	dec eax
	jmp Block6

 Block5:
	add eax,0xFFFFFFFE

 Block6:
	mov ecx,dword ptr [esi+0xE4]
	mov dword ptr [ecx+0x68],eax
	mov ecx,esi
	call CSetGuildMarkDlg::InitLastMarkNumber
	cmp dword ptr [esi+0xF0],1
	jle Block8

 Block7:
	mov ecx,esi
	pop esi
	jmp  CSetGuildMarkDlg::ShowGuildMark

 Block8:
	pop esi
	ret
}
}
// CSetGuildMarkDlg::ShowGuildMark
_SUB_EXCEPTION_HANDLER(16A1D0)
__SUB_CLASS_THIS0(0016A1D0, __thiscall, 44968,  CSetGuildMarkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16A1D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWnd::GetCanvas
	movzx ecx,byte ptr [esi+0x104]
	movzx edx,word ptr [esi+0x100]
	movzx eax,byte ptr [esi+0x10C]
	push ecx
	movzx ecx,word ptr [esi+0x108]
	push edx
	push eax
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x40],0
	call CWvsContext::GetGuildMarkCanvas
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	sete al
	mov byte ptr [esp+0x2C],1
	test al,al
	je Block5

 Block1:
	mov byte ptr [esp+0x2C],0
	test ecx,ecx
	je Block3

 Block2:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block16

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret

 Block5:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x11
	push 0x11
	push 0x67
	push 0x75
	push esi
	call edx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov eax,3
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],0xFF
	mov edx,dword ptr [esp+0xC]
	lea ecx,[esp+0x14]
	push ecx
	push edx
	push 0x67
	push 0x75
	mov ecx,esi
	mov byte ptr [esp+0x3C],2
	call IWzCanvas::Copy
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],1
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call edx

 Block16:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CSetGuildMarkDlg::OnButtonClicked
__SUB_CLASS_THIS(0016A360, __thiscall, 44970,  CSetGuildMarkDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea eax,[edi-0x3E8]
	mov esi,ecx
	cmp eax,7
	ja Block28

 Block1:
	push ebp
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block5
cmp EAX, 2
je Block14
cmp EAX, 3
je Block17
cmp EAX, 4
je Block8
cmp EAX, 5
je Block11
cmp EAX, 6
je Block20
cmp EAX, 7
je Block23


 Block2:
	mov ecx,dword ptr [esi+0x100]
	mov eax,ecx
	cdq
	mov ebp,0x3E8
	idiv ebp
	test edx,edx
	jne Block4

 Block3:
	mov eax,dword ptr [esi+0x114]
	mov dword ptr [esi+0x100],eax
	jmp Block27

 Block4:
	dec ecx
	mov dword ptr [esi+0x100],ecx
	jmp Block27

 Block5:
	mov eax,dword ptr [esi+0x100]
	cmp eax,dword ptr [esi+0x114]
	jne Block7

 Block6:
	mov dword ptr [esi+0x100],0x3E8
	jmp Block27

 Block7:
	inc eax
	mov dword ptr [esi+0x100],eax
	jmp Block27

 Block8:
	mov ecx,dword ptr [esi+0x108]
	mov eax,ecx
	cdq
	mov ebp,0x3E8
	idiv ebp
	test edx,edx
	jne Block10

 Block9:
	mov ecx,dword ptr [esi+eax*4+0x110]
	mov dword ptr [esi+0x108],ecx
	jmp Block27

 Block10:
	dec ecx
	mov dword ptr [esi+0x108],ecx
	jmp Block27

 Block11:
	mov ecx,dword ptr [esi+0x108]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp ecx,dword ptr [esi+eax*4+0x110]
	jne Block13

 Block12:
	imul eax,0x3E8
	mov dword ptr [esi+0x108],eax
	jmp Block27

 Block13:
	inc ecx
	mov dword ptr [esi+0x108],ecx
	jmp Block27

 Block14:
	mov eax,dword ptr [esi+0x104]
	cmp eax,1
	jne Block16

 Block15:
	mov dword ptr [esi+0x104],0x10
	jmp Block27

 Block16:
	dec eax
	mov dword ptr [esi+0x104],eax
	jmp Block27

 Block17:
	mov eax,dword ptr [esi+0x104]
	cmp eax,0x10
	jne Block19

 Block18:
	mov dword ptr [esi+0x104],1
	jmp Block27

 Block19:
	inc eax
	mov dword ptr [esi+0x104],eax
	jmp Block27

 Block20:
	mov eax,dword ptr [esi+0x10C]
	cmp eax,1
	jne Block22

 Block21:
	mov dword ptr [esi+0x10C],0x10
	jmp Block27

 Block22:
	dec eax
	jmp Block26

 Block23:
	mov eax,dword ptr [esi+0x10C]
	cmp eax,0x10
	jne Block25

 Block24:
	mov dword ptr [esi+0x10C],1
	jmp Block27

 Block25:
	inc eax

 Block26:
	mov dword ptr [esi+0x10C],eax

 Block27:
	pop ebp

 Block28:
	cmp edi,1
	jne Block30

 Block29:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	pop edi
	pop esi
	ret 4

 Block30:
	cmp edi,2
	jne Block32

 Block31:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	pop edi
	pop esi
	ret 4

 Block32:
	cmp edi,8
	jne Block34

 Block33:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax

 Block34:
	mov ecx,esi
	call CSetGuildMarkDlg::ShowGuildMark
	pop edi
	pop esi
	ret 4
}
}
// CSetGuildMarkDlg::GetResult
__SUB_CLASS_THIS(0060B230, __thiscall, 44974,  CSetGuildMarkDlg, void, long&, long&, long&, long&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x100]
	mov edx,dword ptr [esp+4]
	mov dword ptr [edx],eax
	mov eax,dword ptr [ecx+0x104]
	mov edx,dword ptr [esp+8]
	mov dword ptr [edx],eax
	mov eax,dword ptr [ecx+0x108]
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [edx],eax
	mov eax,dword ptr [ecx+0x10C]
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [ecx],eax
	ret 0x10
}
}
// CGuildRankDlg::DrawCurPage
__SUB_CLASS_THIS0(0016B990, __thiscall, 45234,  CGuildRankDlg, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x90]
	push edi
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [eax-4],0
	je Block3

 Block2:
	mov ecx,dword ptr [eax+4]
	push 0xFF
	push ecx
	push 0x50
	push 1
	mov ecx,esi
	call CGuildRankDlg::DrawRanking

 Block3:
	mov ebx,2
	mov edi,0x89
	jmp Block5

 Block5:
	mov eax,dword ptr [esi+0xB0]
	mov ecx,dword ptr [esi+0x90]
	lea edx,[eax+eax*2]
	lea eax,[ebx+edx*2-6]
	test ecx,ecx
	je Block7

 Block6:
	mov ecx,dword ptr [ecx-4]

 Block7:
	cmp eax,ecx
	ja Block9

 Block8:
	mov edx,dword ptr [esi+0x90]
	xor ecx,ecx
	cmp eax,3
	setg cl
	dec ecx
	and ecx,0x3C
	add ecx,0x78
	push ecx
	lea ecx,[eax+eax*2]
	mov ecx,dword ptr [edx+ecx*8-0x14]
	push ecx
	push edi
	push eax
	mov ecx,esi
	call CGuildRankDlg::DrawRanking
	add edi,0x19
	inc ebx
	cmp edi,0x106
	jle Block5

 Block9:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CSetGuildMarkDlg::SetRet
__SUB_CLASS_THIS(0016AFD0, __thiscall, 44972,  CSetGuildMarkDlg, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	cmp edi,1
	jne Block2

 Block1:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0xD2C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block5

 Block2:
	cmp dword ptr [esi+0x84],0
	jne Block5

 Block3:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],1
	je Block5

 Block4:
	mov ecx,esi
	call CWnd::Destroy

 Block5:
	pop edi
	pop esi
	ret 4
}
}
// CGuildRankDlg::Draw
__SUB_CLASS_THIS(0016CDD0, __thiscall, 45236,  CGuildRankDlg, void, const tagRECT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::Draw
	mov ecx,esi
	call CGuildRankDlg::DrawCurPage
	pop esi
	ret 4
}
}
// CGuildRankDlg::~CGuildRankDlg
_SUB_EXCEPTION_HANDLER(16CF40)
__SUB_CLASS_THIS0(0016CF40, __thiscall, 45234,  CGuildRankDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16CF40
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
	int 3// TODO: 	mov dword ptr [esi],offset CGuildRankDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CGuildRankDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CGuildRankDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB4]
	mov dword ptr [esp+0x1C],5
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xAC]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	call ZArray<GUILDRANKING>::RemoveAll
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
// CSetGuildMarkDlg::CSetGuildMarkDlg
_SUB_EXCEPTION_HANDLER(16B240)
__SUB_CLASS_THIS0(0016B240, __thiscall, 44966,  CSetGuildMarkDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16B240
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
	int 3// TODO: 	mov dword ptr [esi],offset CSetGuildMarkDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSetGuildMarkDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSetGuildMarkDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 2
	push 8
	lea eax,[esi+0xA0]
	push eax
	mov byte ptr [esp+0x2C],2
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 2
	push 8
	lea ecx,[esi+0xB0]
	push ecx
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 2
	push 8
	lea edx,[esi+0xC0]
	push edx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 2
	push 8
	lea eax,[esi+0xD0]
	push eax
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0x138],edi
	mov dword ptr [esi+0x13C],edi
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esi+0x144],edi
	mov dword ptr [esi+0x148],edi
	push edi
	push edi
	push 1
	push 0xA
	push 0x157
	push 0xFA
	push 0x64
	push 0x113
	mov ecx,esi
	mov byte ptr [esp+0x38],0xA
	call CDialog::CreateDlg_0
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// GUILDRANKING::~GUILDRANKING
__SUB_CLASS_THIS0(0016AD50, __thiscall, 45171,  GUILDRANKING, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// CSetGuildMarkDlg::OnChildNotify
__SUB_CLASS_THIS(0016A530, __thiscall, 44971,  CSetGuildMarkDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3F0
	jne Block5

 Block1:
	cmp edx,0x258
	jne Block5

 Block2:
	mov eax,dword ptr [ecx+0xE4]
	mov edx,dword ptr [eax+0x3C]
	mov eax,dword ptr [esp+0xC]
	dec edx
	cmp eax,edx
	jne Block4

 Block3:
	mov dword ptr [ecx+0x108],0x2328
	call CSetGuildMarkDlg::ShowGuildMark
	ret 0xC

 Block4:
	add eax,2
	imul eax,0x3E8
	mov dword ptr [ecx+0x108],eax
	call CSetGuildMarkDlg::ShowGuildMark
	ret 0xC

 Block5:
	cmp edx,0x64
	jne Block7

 Block6:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block7:
	ret 0xC
}
}
// CCreateGuildAgreeDlg::~CCreateGuildAgreeDlg
_SUB_EXCEPTION_HANDLER(16AA50)
__SUB_CLASS_THIS0(0016AA50, __thiscall, 45094,  CCreateGuildAgreeDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_16AA50
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
	int 3// TODO: 	mov dword ptr [esi],offset CCreateGuildAgreeDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCreateGuildAgreeDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCreateGuildAgreeDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC8]
	mov dword ptr [esp+0x18],7
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x18],6
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xAC]
	mov byte ptr [esp+0x18],5
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xA8]
	mov byte ptr [esp+0x18],4
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp dword ptr [esi+0xA4],0
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x18],3
	je Block8

 Block7:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block8:
	cmp dword ptr [esi+0x9C],0
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x18],2
	je Block10

 Block9:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block10:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esi+0x90]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
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
