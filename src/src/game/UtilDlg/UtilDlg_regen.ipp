#include "regen.hpp"
// UtilDlg.ipp
#include "UtilDlg.hpp"

// CUIPamsSong::CUIPamsSong
_SUB_EXCEPTION_HANDLER(56B060)
__SUB_CLASS_THIS0(0056B060, __thiscall, 13641,  CUIPamsSong, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56B060
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
	call CDialog::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CUIPamsSong::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPamsSong::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPamsSong::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],0
	mov dword ptr [esi+0x94],0
	mov dword ptr [esi+0x9C],0
	lea eax,[esp+8]
	push 0x1807
	push eax
	mov byte ptr [esp+0x20],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],3
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+8]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CUIGachaponBox::OnKey
__SUB_CLASS_THIS(00568C80, __thiscall, 13477,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	jns Block2

 Block1:
	push edi
	push ebx
	call CDialog::OnKey

 Block2:
	cmp dword ptr [esi+0x8C],0
	jne Block9

 Block3:
	cmp ebx,0xD
	je Block6

 Block4:
	cmp ebx,0x1B
	jne Block8

 Block5:
	push 2
	jmp Block7

 Block6:
	push 1

 Block7:
	mov eax,dword ptr [esi-4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi-4]
	call edx

 Block8:
	push edi
	push ebx
	mov ecx,esi
	call CDialog::OnKey

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUICashItemGachapon::OnCashItemGachaponResult
_SUB_EXCEPTION_HANDLER(569F70)
__SUB_CLASS_THIS(00569F70, __thiscall, 13570,  CUICashItemGachapon, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_569F70
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
	mov edi,dword ptr [esp+0x2C]
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebp,al
	call CInPacket::Decode1
	movzx edi,al
	mov dword ptr [esi+0xBC],ebx
	mov dword ptr [esi+0xC0],ebp
	mov dword ptr [esi+0xF0],edi
	call get_update_time
	push edi
	push ecx
	add eax,0x9C4
	mov dword ptr [esi+0xEC],eax
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov ebx,1
	push eax
	mov ecx,esi
	mov dword ptr [esi+0xCC],ebx
	call CWnd::GetLayer
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call CWnd::GetLayer
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [esi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x34],bl
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,esi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov byte ptr [esp+0x30],2
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	call CAnimationDisplayer::Effect_CashItemGachapon
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	test edi,edi
	je Block9

 Block8:
	push offset _S_CASHGACHAPONJACK
	jmp Block10

 Block9:
	push offset _S_CASHGACHAPONNORM

 Block10:
	call play_ui_sound
	add esp,4
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CUIGameOpt::OnChildNotify
__SUB_CLASS_THIS(00569760, __thiscall, 13223,  CUIGameOpt, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp eax,0xC8
	jne Block2

 Block1:
	call CUIGameOpt::GetSysOptFromCtrl
	add ecx,0x15C
	push ecx
	mov ecx,esi
	call CConfig::ApplyGameOpt
	pop esi
	ret 0xC

 Block2:
	cmp eax,0x64
	jne Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [eax+0x20]
	push edx
	call eax

 Block4:
	pop esi
	ret 0xC
}
}
// CUIGachaponBox::CUIGachaponBox
_SUB_EXCEPTION_HANDLER(578DC0)
__SUB_CLASS_THIS(00578DC0, __thiscall, 13471,  CUIGachaponBox, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_578DC0
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
	call CDialog::_ctor_default
	mov eax,dword ptr [esp+0x30]
	mov edi,dword ptr [esp+0x34]
	xor ebp,ebp
	int 3// TODO: 	mov dword ptr [esi],offset CUIGachaponBox::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGachaponBox::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGachaponBox::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esi+0x9C],ebp
	mov dword ptr [esi+0xA4],ebp
	mov dword ptr [esp+0x30],ebp
	mov eax,dword ptr [esi+0x90]
	sub eax,ebp
	mov bl,3
	mov byte ptr [esp+0x28],bl
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block8

 Block3:
	lea ecx,[esp+0x34]
	push 0x130C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	xor edx,edx
	cmp edi,ebp
	sete dl
	mov byte ptr [esp+0x28],6
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	call ZXString16::Format
	mov eax,dword ptr [esp+0x40]
	jmp Block6

 Block4:
	lea ecx,[esp+0x14]
	push 0x130B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	xor edx,edx
	cmp edi,ebp
	sete dl
	mov byte ptr [esp+0x28],5
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	jmp Block6

 Block5:
	lea ecx,[esp+0x18]
	push 0x130A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	xor edx,edx
	cmp edi,ebp
	sete dl
	mov byte ptr [esp+0x28],4
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]

 Block6:
	add esp,0xC
	mov byte ptr [esp+0x28],bl
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0x30]
	push ebp
	push ebp
	push 1
	push ecx
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],2
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
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
// CUtilDlg::SetUtilDlg
_SUB_EXCEPTION_HANDLER(56B430)
__SUB_CLASS_THIS(0056B430, __thiscall, 12988,  CUtilDlg, void, long, NakedParam<ZXString<char>>, const wchar_t*, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56B430
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
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov esi,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x28]
	neg esi
	sbb esi,esi
	and esi,0x22
	add esi,0xC8
	push ecx
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [edi+0xB4],eax
	mov dword ptr [edi+0xF4],ecx
	mov dword ptr [esp+0x2C],esp
	cmp dword ptr [esp+0x38],ebp
	je Block2

 Block1:
	mov edx,esp
	push 0x31
	push edx
	call get_basic_font
	add esp,8
	push esi
	push ecx
	mov ecx,esp
	lea eax,[esp+0x38]
	mov dword ptr [esp+0x44],esp
	push eax
	mov byte ptr [esp+0x30],1
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	add edi,0xF0
	push edi
	mov byte ptr [esp+0x30],0
	call separate_string_by_width
	add esp,0x10
	jmp Block3

 Block2:
	mov ecx,esp
	lea edx,[esp+0x30]
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	add edi,0xF0
	push edi
	call separate_string_by_line
	add esp,8

 Block3:
	mov edx,dword ptr [esp+0x30]
	cmp edx,ebp
	jne Block5

 Block4:
	lea eax,[esp+0x38]
	push 0x4F8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x20],2
	mov ebx,1
	jmp Block8

 Block5:
	mov eax,edx
	mov dword ptr [esp+0x28],ebp
	lea esi,[eax+2]
	lea ecx,[ecx]

 Block6:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,bp
	jne Block6

 Block7:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea ecx,[esi+esi]
	push ecx
	push edx
	push ebp
	push esi
	lea ecx,[esp+0x38]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x2C]
	call ZXString16::ReleaseBuffer
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x20],3
	mov ebx,2

 Block8:
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x18],ebx
	call play_ui_sound
	add esp,4
	mov dword ptr [esp+0x20],2
	test bl,2
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov dword ptr [esp+0x20],ebp
	test bl,1
	je Block14

 Block12:
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebp
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x18
}
}
// CUIArtSpeakerSample::OnCreate
_SUB_EXCEPTION_HANDLER(5793E0)
__SUB_CLASS_THIS(005793E0, __thiscall, 13495,  CUIArtSpeakerSample, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5793E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x70]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x24]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[ebx+0x78]
	push ebp
	push eax
	mov dword ptr [esp+0x84],0
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x30]
	or edi,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x78],edi
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push ecx
	call esi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x40]
	push eax
	mov dword ptr [esp+0x7C],1
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x78],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [ebx+0x28]
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [ebx+0x24]
	push edx
	push eax
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x78],1
	cmp word ptr [esp+0x40],si
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov dword ptr [esp+0x78],edi
	cmp word ptr [esp+0x50],si
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov esi,dword ptr [ebp]
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [ebx+0x28]
	mov ecx,dword ptr [ebx+0x24]
	mov edx,dword ptr [esi]
	push 0xFFFFFF
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ecx
	push 0
	push 0
	push esi
	call eax
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_T
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebx+0x9C]
	mov dword ptr [esp+0x84],3
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x5C]
	push edx
	mov dword ptr [esp+0x88],edi
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x80],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block25

 Block23:
	cmp eax,0x80004002
	je Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],6
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],ecx
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0x78],7
	test esi,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov edi,dword ptr [esp+0x40]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x54]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x2C]
	push edi
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x64]
	push 0
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x78],6
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	cmp dword ptr [ebx+0x98],0
	mov dword ptr [esp+0x20],0
	jle Block61

 Block38:
	mov ebx,0x17

 Block39:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_C__1
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edx+0x9C]
	mov byte ptr [esp+0x84],8
	test ecx,ecx
	je Block7

 Block40:
	lea eax,[esp+0x6C]
	push eax
	mov byte ptr [esp+0x88],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x80],9
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block48

 Block41:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov ebp,ecx
	test edi,edi
	je Block43

 Block42:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block43:
	mov edi,ebp
	mov dword ptr [esp+0x1C],edi
	test esi,esi
	jge Block45

 Block44:
	cmp esi,0x80004002
	jne Block68

 Block45:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x78],6
	jne Block51

 Block46:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block52

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block48:
	test edi,edi
	je Block45

 Block49:
	mov eax,edi
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	test eax,eax
	je Block45

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block45

 Block51:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],ecx
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+0x78]
	add eax,0x78
	mov byte ptr [esp+0x78],0xA
	test esi,esi
	je Block7

 Block53:
	mov ebp,dword ptr [esp+0x40]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x54]
	push edi
	push ebx
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x64]
	push 3
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block55

 Block54:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x78],6
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	inc eax
	add ebx,0xF
	cmp eax,dword ptr [edx+0x98]
	mov dword ptr [esp+0x20],eax
	jl Block39

 Block60:
	mov ebx,edx

 Block61:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_S__2
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebx+0x9C]
	mov byte ptr [esp+0x84],0xB
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[esp+0x6C]
	push eax
	mov byte ptr [esp+0x88],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x80],0xC
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block69

 Block64:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov ebp,ecx
	test edi,edi
	je Block66

 Block65:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block66:
	mov edi,ebp
	mov dword ptr [esp+0x1C],edi
	test esi,esi
	jge Block72

 Block67:
	cmp esi,0x80004002
	je Block72

 Block68:
	push esi
	call _com_issue_error

 Block69:
	test edi,edi
	je Block72

 Block70:
	mov eax,edi
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x78],6
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov edx,3
	mov word ptr [esp+0x40],dx
	mov edx,0xFF
	mov dword ptr [esp+0x48],edx
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+0x78]
	add eax,0x78
	mov byte ptr [esp+0x78],0xD
	test esi,esi
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x98]
	mov ebp,dword ptr [esp+0x40]
	mov ebx,dword ptr [esi]
	mov eax,ecx
	sub esp,0x10
	shl eax,4
	sub eax,ecx
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x54]
	push edi
	add eax,0x17
	push eax
	mov eax,dword ptr [ebx+0x80]
	mov dword ptr [ecx+4],ebp
	mov dword ptr [ecx+8],edx
	mov edx,dword ptr [esp+0x64]
	push 3
	push esi
	mov dword ptr [ecx+0xC],edx
	call eax
	xor ebx,ebx
	cmp eax,ebx
	jge Block80

 Block79:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x78],6
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebx
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetCaptureWnd
	mov eax,dword ptr [esi+0x98]
	lea edx,[esp+0x17]
	push edx
	lea ecx,[esi+0x90]
	push eax
	call ZArray<ZRef<CCtrlButton>>::_Alloc
	xor eax,eax
	mov dword ptr [esp+0x24],0x18
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	cmp dword ptr [esi+0x98],ebx
	jle Block111

 Block85:
	jmp Block87

 Block87:
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	lea eax,[esp+0x28]
	push 0x1180
	push eax
	mov byte ptr [esp+0x80],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx+0xA0]
	mov eax,dword ptr [eax]
	push ebx
	push edx
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x88],0x10
	call ZXString16::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0x10
	mov byte ptr [esp+0x78],0xF
	cmp eax,ebp
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block89:
	mov edx,dword ptr [esp+0x20]
	cmp edx,ebp
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block96

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov dword ptr [esp+0x3C],ebp
	jmp Block96

 Block92:
	mov eax,edx
	lea esi,[eax+2]
	jmp Block94

 Block94:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,bp
	jne Block94

 Block95:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea ecx,[esi+esi]
	push ecx
	push edx
	push ebp
	push esi
	lea ecx,[esp+0x4C]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x40]
	call ZXString16::ReleaseBuffer

 Block96:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x78],0x11
	cmp eax,ebp
	je Block98

 Block97:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block99

 Block98:
	xor eax,eax

 Block99:
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [ecx+0x90]
	add ecx,0x90
	lea edi,[ebx*8]
	add esi,edi
	mov byte ptr [esp+0x78],0xF
	cmp eax,ebp
	je Block116

 Block100:
	add eax,8
	cmp eax,ebp
	je Block116

 Block101:
	lea ebp,[eax-8]
	test ebp,ebp
	je Block103

 Block102:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block103:
	mov eax,dword ptr [esi+4]
	mov dword ptr [esi+4],ebp
	test eax,eax
	je Block107

 Block104:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block107

 Block105:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block107

 Block106:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block107:
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0x90]
	mov ecx,dword ptr [edi+ecx+4]
	mov edi,dword ptr [esp+0x24]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push 1
	push edi
	push 9
	lea eax,[ebx+0x7D0]
	push eax
	push esi
	call edx
	mov eax,dword ptr [esp+0x20]
	add edi,0xF
	mov dword ptr [esp+0x24],edi
	mov byte ptr [esp+0x78],0xE
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block109:
	inc ebx
	cmp ebx,dword ptr [esi+0x98]
	jl Block87

 Block110:
	mov eax,dword ptr [esp+0x3C]

 Block111:
	mov byte ptr [esp+0x78],6
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block113:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	test eax,eax
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block115:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret 4

 Block116:
	xor ebp,ebp
	jmp Block103
}
}
// CUIBlockUser::GetResult
__SUB_CLASS_THIS(0056B3D0, __thiscall, 13407,  CUIBlockUser, void, unsigned long&, unsigned long&, ZXString<char>&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	mov edx,dword ptr [esp+4]
	mov dword ptr [edx],eax
	mov eax,dword ptr [ecx+0x9C]
	mov edx,dword ptr [esp+8]
	add ecx,0xA0
	inc eax
	push ecx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [edx],eax
	call ZXString<char>::op_assign
	ret 0xC
}
}
// CUIContextMenu::Draw
_SUB_EXCEPTION_HANDLER(56EE30)
__SUB_CLASS_THIS(0056EE30, __thiscall, 13349,  CUIContextMenu, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56EE30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push esi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	add esi,0xE8
	push esi
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp-0x14],0
	call ZXString<char>::op_assign
	push 0x4E
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x18],esp
	push 0
	push edx
	mov byte ptr [ebp-4],1
	call get_basic_font
	lea eax,[ebp-0x14]
	add esp,8
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x2C]
	push ecx
	call esi
	lea edx,[ebp-0x2C]
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
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],2
	call esi
	lea ecx,[ebp-0x3C]
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
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x18]
	push 0
	push edx
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp-0x14]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],4
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],5
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	push 0xB
	push 0x10
	mov ecx,esi
	mov byte ptr [ebp-4],4
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],2
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],1
	jne Block15

 Block13:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x48]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUICashGachapon::Draw
_SUB_EXCEPTION_HANDLER(569C30)
__SUB_CLASS_THIS(00569C30, __thiscall, 13604,  CUICashGachapon, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_569C30
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
	mov eax,dword ptr [esp+0x28]
	push eax
	call CWnd::Draw
	cmp dword ptr [esi+0x98],0
	je Block9

 Block1:
	mov ecx,3
	mov word ptr [esp+8],cx
	mov dword ptr [esp+0x10],0xFF
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esi+0x98]
	mov byte ptr [esp+0x20],1
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea eax,[esp+8]
	push eax
	push esi
	push 0
	push 0
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	cmp word ptr [esp+8],8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+8],ax
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4

 Block8:
	lea ecx,[esp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CUISysOpt::OnChildNotify
__SUB_CLASS_THIS(00569820, __thiscall, 13243,  CUISysOpt, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	mov eax,ebx
	sub eax,0xC8
	push edi
	mov edi,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov esi,ecx
	je Block8

 Block1:
	sub eax,0x190
	je Block4

 Block2:
	sub eax,0x64
	je Block18

 Block3:
	jmp Block19

 Block4:
	mov eax,ebp
	sub eax,0x3ED
	je Block7

 Block5:
	sub eax,7
	jne Block19

 Block6:
	mov eax,dword ptr [esi+0xE4]
	mov ecx,dword ptr [eax+0x68]
	mov dword ptr [esi+0x178],ecx
	jmp Block19

 Block7:
	mov edx,dword ptr [esi+0xC4]
	mov eax,dword ptr [edx+0x68]
	mov dword ptr [esi+0x164],eax
	jmp Block19

 Block8:
	lea eax,[ebp-0x3F2]
	cmp eax,6
	ja Block18

 Block9:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block11
cmp EAX, 2
je Block18
cmp EAX, 3
je Block12
cmp EAX, 4
je Block13
cmp EAX, 5
je Block15
cmp EAX, 6
je Block14


 Block10:
	mov ecx,dword ptr [esi+0xEC]
	push 1
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0xF4]
	push 0
	jmp Block17

 Block11:
	mov ecx,dword ptr [esi+0xEC]
	push 0
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0xF4]
	jmp Block16

 Block12:
	mov ecx,dword ptr [esi+0x104]
	push 0
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0xFC]
	jmp Block16

 Block13:
	mov ecx,dword ptr [esi+0x104]
	push 1
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0xFC]
	push 0
	jmp Block17

 Block14:
	mov ecx,dword ptr [esi+0x114]
	push 1
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0x10C]
	push 0
	jmp Block17

 Block15:
	mov ecx,dword ptr [esi+0x114]
	push 0
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0x10C]

 Block16:
	push 1

 Block17:
	call CCtrlCheckBox::SetChecked

 Block18:
	mov ecx,esi
	call CUISysOpt::GetSysOptFromCtrl

 Block19:
	push 0
	lea ecx,[esi+0x150]
	push ecx
	mov ecx,edi
	call CConfig::ApplySysOpt
	cmp ebx,0x64
	jne Block21

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push ebp
	mov ecx,esi
	call eax

 Block21:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CUICancelCharacterCouponRequests::Draw
__SUB_CLASS_THIS(00568B00, __thiscall, 13435,  CUICancelCharacterCouponRequests, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CUIGameOpt::GetSysOptFromCtrl
__SUB_CLASS_THIS0(00569080, __thiscall, 13221,  CUIGameOpt, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x9C]
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xA4]
	mov dword ptr [ecx+0x15C],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xAC]
	mov dword ptr [ecx+0x160],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xB4]
	mov dword ptr [ecx+0x164],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xBC]
	mov dword ptr [ecx+0x168],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xC4]
	mov dword ptr [ecx+0x16C],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xCC]
	mov dword ptr [ecx+0x170],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xD4]
	mov dword ptr [ecx+0x174],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xDC]
	mov dword ptr [ecx+0x17C],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xE4]
	mov dword ptr [ecx+0x180],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xEC]
	mov dword ptr [ecx+0x184],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xF4]
	mov dword ptr [ecx+0x188],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xFC]
	mov dword ptr [ecx+0x18C],edx
	mov edx,dword ptr [eax+0x48]
	mov dword ptr [ecx+0x1A4],edx
	ret
}
}
// CUIChannelShift::~CUIChannelShift
_SUB_EXCEPTION_HANDLER(56C050)
__SUB_CLASS_THIS0(0056C050, __thiscall, 13318,  CUIChannelShift, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56C050
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIChannelShift::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIChannelShift::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIChannelShift::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC0]
	mov dword ptr [esp+0x14],5
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xBC]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xB8]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xB4]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea eax,[esi+0xAC]
	push eax
	mov byte ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 3
	push 4
	lea ecx,[esi+0xA0]
	push ecx
	mov byte ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUtilDlg::SetUtilDlg_COMBOBOX
_SUB_EXCEPTION_HANDLER(56B5F0)
__SUB_CLASS_THIS(0056B5F0, __thiscall, 12994,  CUtilDlg, void, ZList<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56B5F0
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
	mov ebx,ecx
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax+8]
	xor ebp,ebp
	cmp ecx,ebp
	je Block6

 Block1:
	mov eax,dword ptr [eax+0xC]
	xor edi,edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block5

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZXString<char>>::GetNext
	add esp,4
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebp
	call ZXString<char>::op_assign
	mov esi,dword ptr [esp+0x28]
	mov ecx,dword ptr [ebx+0xE4]
	push edi
	push esi
	mov dword ptr [esp+0x28],ebp
	call CCtrlComboBox::AddItem
	inc edi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp esi,ebp
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	cmp dword ptr [esp+0x14],ebp
	jne Block2

 Block5:
	mov ecx,dword ptr [ebx+0xE4]
	mov dword ptr [ecx+0x68],ebp
	mov ecx,dword ptr [ebx+0xE4]
	call CCtrlWnd::InvalidateRect

 Block6:
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
// CUICashGachapon::CUICashGachapon
_SUB_EXCEPTION_HANDLER(56AB80)
__SUB_CLASS_THIS(0056AB80, __thiscall, 13597,  CUICashGachapon, void, _LARGE_INTEGER, CCashShop*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56AB80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	call CUniqueModeless::_ctor_default
	xor edi,edi
	lea ebx,[esi+0x98]
	int 3// TODO: 	mov dword ptr [esi],offset CUICashGachapon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICashGachapon::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICashGachapon::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x40],edi
	mov dword ptr [ebx],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xE8],edi
	lea ecx,[esi+0xFC]
	mov byte ptr [esp+0x40],0xA
	call CUIToolTip::_ctor_default
	mov byte ptr [esp+0x40],0xB
	mov dword ptr [esi+0xDC],edi
	call get_update_time
	mov dword ptr [esi+0xE0],eax
	mov dword ptr [esi+0xE4],edi
	mov eax,dword ptr [esi+0xCC]
	cmp eax,edi
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xCC]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xCC]
	cmp ecx,edi
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xCC],edi

 Block5:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [esi+0xA0],eax
	lea eax,[esp+0x50]
	push 0x1613
	push eax
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xA4],ecx
	mov dword ptr [esi+0x94],edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x50],0xC
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],0xB
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	lea ecx,[esp+0x50]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push ebx
	push eax
	mov byte ptr [esp+0x4C],0xD
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x5C]
	add esp,0xC
	mov byte ptr [esp+0x40],0xB
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x44],0xE
	call ebp
	lea edx,[esp+0x18]
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
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0x40],0xF
	cmp ecx,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x40],0xE
	cmp word ptr [esp+0x18],bx
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x18]
	push ecx
	call ebp

 Block19:
	mov byte ptr [esp+0x40],0xB
	cmp word ptr [esp+0x28],bx
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x28]
	push eax
	call ebp

 Block23:
	mov eax,esi
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0xC
}
}
// CUtilDlg::PreCreateWnd
__SUB_CLASS_THIS(005696B0, __thiscall, 12982,  CUtilDlg, void, long, long, long, long, long, int32_t, void*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA4]
	push esi
	mov edx,0x2F
	mov esi,0x3EA
	test eax,eax
	jne Block3

 Block1:
	cmp dword ptr [ecx+0xA8],eax
	jne Block3

 Block2:
	cmp dword ptr [ecx+0xB4],esi
	jne Block4

 Block3:
	mov edx,0x4F

 Block4:
	test eax,eax
	je Block7

 Block5:
	cmp dword ptr [ecx+0xB4],esi
	jne Block7

 Block6:
	add edx,0x16

 Block7:
	cmp dword ptr [ecx+0x94],0
	je Block9

 Block8:
	mov eax,dword ptr [esp+0x14]
	lea eax,[eax+edx+0x29]
	jmp Block14

 Block9:
	mov eax,dword ptr [ecx+0xF0]
	test eax,eax
	je Block11

 Block10:
	mov eax,dword ptr [eax-4]

 Block11:
	lea esi,[eax*8]
	sub esi,eax
	add esi,esi
	mov eax,esi
	shr eax,4
	inc eax
	cmp eax,1
	jne Block13

 Block12:
	mov eax,2

 Block13:
	shl eax,4
	add eax,edx
	mov edx,dword ptr [esp+0x14]
	lea eax,[edx+eax+0x14]

 Block14:
	pop esi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0xC],0x104
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],0xFFFFFF7E
	jmp  CWnd::PreCreateWnd
}
}
// CUtilDlg::OnButtonClicked
__SUB_CLASS_THIS(003B9BF0, __thiscall, 12984,  CUtilDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB4]
	mov edx,dword ptr [esp+4]
	cmp eax,0x3E9
	je Block7

 Block1:
	cmp eax,0x3EB
	je Block7

 Block2:
	cmp eax,0x3EA
	jne Block11

 Block3:
	cmp edx,6
	jne Block5

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block5:
	cmp edx,7
	jne Block11

 Block6:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block7:
	cmp edx,6
	jne Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block9:
	cmp edx,7
	jne Block11

 Block10:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block11:
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnButtonClicked
}
}
// CUICancelCharacterCouponRequests::OnCreate
_SUB_EXCEPTION_HANDLER(570210)
__SUB_CLASS_THIS(00570210, __thiscall, 13434,  CUICancelCharacterCouponRequests, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_570210
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
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov eax,dword ptr [esi+0x90]
	mov dword ptr [esp+0x34],ebx
	cmp eax,ebx
	jne Block2

 Block1:
	lea eax,[esp+0x14]
	push 0x12E9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x34],1
	jmp Block6

 Block2:
	cmp eax,1
	jne Block4

 Block3:
	lea ecx,[esp+0x14]
	push 0x12EC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x34],2
	jmp Block6

 Block4:
	cmp eax,2
	jne Block8

 Block5:
	lea edx,[esp+0x14]
	push 0x12F1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x34],3

 Block6:
	push eax
	lea ecx,[esp+0x2C]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],4
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block19

 Block12:
	add eax,8
	cmp eax,ebx
	je Block19

 Block13:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block15

 Block14:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block15:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block17

 Block16:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block17:
	mov ecx,dword ptr [esi+0x98]
	cmp dword ptr [esi+0x90],ebx
	jne Block20

 Block18:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0x6E
	push 0x14
	push 0x3E8
	push esi
	call edx
	jmp Block21

 Block19:
	xor edi,edi
	jmp Block15

 Block20:
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x5A
	push 0x14
	push 0x3E8
	push esi
	call eax

 Block21:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebx
	jne Block23

 Block22:
	lea ecx,[esp+0x14]
	push 0x12EA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x34],5
	jmp Block27

 Block23:
	cmp eax,1
	jne Block25

 Block24:
	lea edx,[esp+0x14]
	push 0x12ED
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x34],6
	jmp Block27

 Block25:
	cmp eax,2
	jne Block29

 Block26:
	lea eax,[esp+0x14]
	push 0x12F2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x34],7

 Block27:
	push eax
	lea ecx,[esp+0x2C]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],8
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block32

 Block31:
	xor eax,eax

 Block32:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block40

 Block33:
	add eax,8
	cmp eax,ebx
	je Block40

 Block34:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block36

 Block35:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block36:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block38

 Block37:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block38:
	mov ecx,dword ptr [esi+0xA0]
	cmp dword ptr [esi+0x90],ebx
	jne Block41

 Block39:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0x6E
	push 0x94
	push 0x3E9
	push esi
	call edx
	jmp Block42

 Block40:
	xor edi,edi
	jmp Block36

 Block41:
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x5A
	push 0x94
	push 0x3E9
	push esi
	call eax

 Block42:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
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
// CUICashItemGachapon::OnButtonClicked
_SUB_EXCEPTION_HANDLER(56AA40)
__SUB_CLASS_THIS(0056AA40, __thiscall, 13572,  CUICashItemGachapon, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56AA40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	mov ecx,dword ptr [esp+0x30]
	mov eax,ecx
	sub eax,0x7D0
	mov dword ptr [esp+0x28],ebx
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	push ecx
	mov ecx,esi
	call CDialog::OnButtonClicked
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block3:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [eax+0x534],ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block4:
	cmp dword ptr [esi+0x98],1
	jge Block6

 Block5:
	call get_update_time
	mov dword ptr [esi+0xE8],eax
	mov eax,dword ptr [esi+0xDC]
	lea ecx,[eax+4]
	mov dword ptr [esi+0xBC],ebx
	mov dword ptr [esi+0xC0],ebx
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	mov eax,dword ptr [esi+0xDC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebx
	call edx
	mov eax,dword ptr [esi+0xD4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	push 0xB9
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 8
	add esi,0xB0
	push esi
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],1
	call COutPacket::EncodeBuffer
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x28],bl
	call ZArray<unsigned char>::RemoveAll

 Block6:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x20
	ret 4
}
}
// CUIBlockUser::OnButtonClicked
__SUB_CLASS_THIS(00578D50, __thiscall, 13404,  CUIBlockUser, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	cmp edi,0x3E8
	je Block7

 Block1:
	jbe Block4

 Block2:
	cmp edi,0x3EA
	ja Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	call edx

 Block4:
	cmp edi,1
	je Block8

 Block5:
	cmp edi,2
	jne Block9

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push edi
	mov ecx,esi
	call edx
	pop edi
	pop esi
	ret 4

 Block7:
	call CUIBlockUser::SetResult

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop edi
	pop esi
	ret 4

 Block9:
	cmp edi,8
	jne Block11

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push edi
	mov ecx,esi
	call edx

 Block11:
	pop edi
	pop esi
	ret 4
}
}
// CUICashGachapon::Update
_SUB_EXCEPTION_HANDLER(571330)
__SUB_CLASS_THIS0(00571330, __thiscall, 13599,  CUICashGachapon, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_571330
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4E4
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call get_update_time
	mov ecx,dword ptr [esi+0xE0]
	test ecx,ecx
	je Block186

 Block1:
	cmp ecx,eax
	jge Block186

 Block2:
	mov edi,dword ptr [esi+0x98]
	mov dword ptr [ebp-0xA0],edi
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block4:
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp+0x70],ebx
	mov dword ptr [ebp+0x6C],ebx
	mov eax,dword ptr [esi+0xDC]
	mov byte ptr [ebp-4],2
	cmp eax,7
	ja Block171

 Block5:
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block13
cmp EAX, 2
je Block20
cmp EAX, 3
je Block47
cmp EAX, 4
je Block53
cmp EAX, 5
je Block65
cmp EAX, 6
je Block65
cmp EAX, 7
je Block127


 Block6:
	mov edx,dword ptr [esi+0xE4]
	push edx
	lea eax,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__8
	push eax
	call ZXString<char>::Format
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[ebp-0x140]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1A0]
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],4
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x140]
	push ecx
	lea edx,[ebp-0x1A0]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp-0x400]
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x400]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1A0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x140]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0xE0],cx
	mov dword ptr [ebp-0xD8],0xFF
	mov byte ptr [ebp-4],7
	test edi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ebx,dword ptr [ebp+0x70]
	lea edx,[ebp-0xE0]
	push edx
	push ebx
	push 0x1B
	push 9
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0xE0]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	inc dword ptr [esi+0xE4]
	cmp dword ptr [esi+0xE4],0xF
	jle Block12

 Block11:
	mov dword ptr [esi+0xE4],0

 Block12:
	call get_update_time
	add eax,0x64
	mov dword ptr [esi+0xE0],eax
	jmp Block171

 Block13:
	mov eax,dword ptr [esi+0xE4]
	push eax
	lea ecx,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__7
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[ebp-0x160]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x320]
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],9
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea edx,[ebp-0x160]
	push edx
	lea ecx,[ebp-0x320]
	push ecx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xA
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[ebp-0x420]
	mov byte ptr [ebp-4],9
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x420]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x320]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x160]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [ebp-0x6C],ax
	mov dword ptr [ebp-0x64],0xFF
	mov byte ptr [ebp-4],0xC
	test edi,edi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov ebx,dword ptr [ebp+0x70]
	lea ecx,[ebp-0x6C]
	push ecx
	push ebx
	push 0x1B
	push 9
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x6C]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	inc dword ptr [esi+0xE4]
	cmp dword ptr [esi+0xE4],6
	jle Block19

 Block18:
	mov dword ptr [esi+0xDC],2
	mov dword ptr [esi+0xE4],0

 Block19:
	call get_update_time
	add eax,0xC8
	mov dword ptr [esi+0xE0],eax
	jmp Block171

 Block20:
	cmp dword ptr [esi+0xE4],2
	jle Block39

 Block21:
	lea edx,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__6
	push edx
	call ZXString<char>::Format
	add esp,8
	push offset _D_VTMISSING
	lea ecx,[ebp-0x180]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x3C0]
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0xE
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x180]
	push ecx
	lea edx,[ebp-0x3C0]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xF
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[ebp-0x4C0]
	mov byte ptr [ebp-4],0xE
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x4C0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x3C0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x180]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0xC0],cx
	mov dword ptr [ebp-0xB8],0xFF
	mov byte ptr [ebp-4],0x11
	test edi,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov eax,dword ptr [ebp+0x70]
	lea edx,[ebp-0xC0]
	push edx
	push eax
	push 0x1B
	push 9
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0xC0]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__5
	push ecx
	call ZXString<char>::Format
	add esp,8
	push offset _D_VTMISSING
	lea ecx,[ebp-0x120]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x340]
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x13
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea edx,[ebp-0x120]
	push edx
	lea ecx,[ebp-0x340]
	push ecx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x14
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[ebp-0x440]
	mov byte ptr [ebp-4],0x13
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x440]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x340]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x120]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp+0x58],0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x3D3
	push eax
	mov byte ptr [ebp-4],0x16
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[ebp+0x20]
	push edx
	call IWzCanvas::Getproperty
	mov byte ptr [ebp-4],0x18
	lea ecx,[ebp-0x4A0]
	push ecx
	mov ecx,eax
	call _x_com_ptr<IWzProperty>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzVector2D>::op_assign_unknown
	mov ecx,eax
	call _x_com_ptr<IWzVector2D>::op_neq
	lea ecx,[ebp-0x4A0]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	mov ecx,3
	mov word ptr [ebp-0x8C],cx
	mov dword ptr [ebp-0x84],0xFF
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov eax,dword ptr [ebp+0x70]
	lea edx,[ebp-0x8C]
	push edx
	push eax
	mov ebx,ecx
	call IWzShape2D::Gety
	mov ecx,0xB7
	sub ecx,eax
	push ecx
	mov ecx,ebx
	call IWzShape2D::Getx
	mov edx,0xC8
	sub edx,eax
	push edx
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x8C]
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esi+0xEC]
	push 0
	push 0
	push eax
	lea ecx,[ebp]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block35:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x3A0]
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x1C
	test ebx,ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[ebp-0x3A0]
	push ecx
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	call IWzCanvas::Getheight
	add eax,eax
	push eax
	mov ecx,ebx
	call IWzCanvas::Getwidth
	add eax,eax
	push eax
	push 0xFF
	push ebx
	mov ecx,ebx
	call IWzCanvas::Getheight
	mov edx,0xB7
	sub edx,eax
	push edx
	mov ecx,ebx
	call IWzCanvas::Getwidth
	mov ecx,0xD2
	sub ecx,eax
	push ecx
	mov ecx,edi
	call IWzCanvas::CopyEx
	lea ecx,[ebp-0x3A0]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block39

 Block38:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block39:
	mov ecx,dword ptr [esi+0xE4]
	push ecx
	lea edx,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__4
	push edx
	call ZXString<char>::Format
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[ebp-0x360]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C0]
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x1E
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x360]
	push ecx
	lea edx,[ebp-0x1C0]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1F
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[ebp-0x460]
	mov byte ptr [ebp-4],0x1E
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x460]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x360]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x100],cx
	mov dword ptr [ebp-0xF8],0xFF
	mov byte ptr [ebp-4],0x21
	test edi,edi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov ebx,dword ptr [ebp+0x70]
	lea edx,[ebp-0x100]
	push edx
	push ebx
	push 0x1B
	push 9
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x100]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	inc dword ptr [esi+0xE4]
	cmp dword ptr [esi+0xE4],4
	jle Block46

 Block44:
	mov eax,dword ptr [esi+0xAC]
	lea ecx,[eax+4]
	mov dword ptr [esi+0xDC],6
	mov dword ptr [esi+0xE4],0
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0xBC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0xC4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0xB4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov ecx,dword ptr [esi+0x94]
	call CCashShop::InvalidateLocker
	mov ecx,dword ptr [esi+0x94]
	call CCashShop::InvalidateInventory
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x4C]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp+0x68],ecx
	lea ecx,[ebp-0x4C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebp+0x68]
	push 2
	call CharacterData::GetEmptySlotCount
	cmp eax,1
	jge Block46

 Block45:
	mov eax,dword ptr [esi+0xB4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block46:
	call get_update_time
	add eax,0x96
	mov dword ptr [esi+0xE0],eax
	jmp Block171

 Block47:
	mov ecx,dword ptr [esi+0xE4]
	push ecx
	lea edx,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__4
	push edx
	call ZXString<char>::Format
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[ebp-0x3E0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1E0]
	mov byte ptr [ebp-4],0x22
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x23
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x3E0]
	push ecx
	lea edx,[ebp-0x1E0]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x24
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea eax,[ebp-0x4E0]
	mov byte ptr [ebp-4],0x23
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x4E0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1E0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x3E0]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x34],cx
	mov dword ptr [ebp-0x2C],0xFF
	mov byte ptr [ebp-4],0x26
	test edi,edi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov ebx,dword ptr [ebp+0x70]
	lea edx,[ebp-0x34]
	push edx
	push ebx
	push 0x1B
	push 9
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x34]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	inc dword ptr [esi+0xE4]
	cmp dword ptr [esi+0xE4],4
	jle Block19

 Block52:
	mov eax,dword ptr [esi+0xAC]
	lea ecx,[eax+4]
	mov dword ptr [esi+0xDC],7
	mov dword ptr [esi+0xE4],0
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0xBC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0xC4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0xB4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov ecx,dword ptr [esi+0x94]
	call CCashShop::InvalidateLocker
	mov ecx,dword ptr [esi+0x94]
	call CCashShop::InvalidateInventory
	jmp Block19

 Block53:
	mov eax,dword ptr [esi+0xE4]
	push eax
	lea ecx,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__3
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[ebp-0x380]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x200]
	mov byte ptr [ebp-4],0x27
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x28
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea edx,[ebp-0x380]
	push edx
	lea ecx,[ebp-0x200]
	push ecx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x29
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea edx,[ebp-0x480]
	mov byte ptr [ebp-4],0x28
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x2A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x480]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x200]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x380]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [ebp-0x44],ax
	mov dword ptr [ebp-0x3C],0xFF
	mov byte ptr [ebp-4],0x2B
	test edi,edi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov edx,dword ptr [ebp+0x70]
	lea ecx,[ebp-0x44]
	push ecx
	push edx
	push 0x1B
	push 9
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x44]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esi+0xEC]
	push 0
	push 0
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block59:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x220]
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x2C
	test ebx,ebx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea ecx,[ebp-0x220]
	push ecx
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	call IWzCanvas::Getheight
	add eax,eax
	push eax
	mov ecx,ebx
	call IWzCanvas::Getwidth
	add eax,eax
	push eax
	push 0xFF
	push ebx
	mov ecx,ebx
	call IWzCanvas::Getheight
	mov edx,0xB7
	sub edx,eax
	push edx
	mov ecx,ebx
	call IWzCanvas::Getwidth
	mov ecx,0xD2
	sub ecx,eax
	push ecx
	mov ecx,edi
	call IWzCanvas::CopyEx
	lea ecx,[ebp-0x220]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	inc dword ptr [esi+0xE4]
	cmp dword ptr [esi+0xE4],3
	jle Block19

 Block62:
	mov dword ptr [esi+0xDC],5
	mov dword ptr [esi+0xE4],0
	call get_update_time
	add eax,0x3E8
	mov dword ptr [esi+0xE0],eax
	mov eax,dword ptr [esi+0xAC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov eax,dword ptr [esi+0xC4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov eax,dword ptr [esi+0xB4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [eax+4]
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp+0x68],edx
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebp+0x68]
	push 2
	call CharacterData::GetEmptySlotCount
	cmp eax,1
	jge Block64

 Block63:
	mov eax,dword ptr [esi+0xB4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block64:
	mov ecx,dword ptr [esi+0x94]
	call CCashShop::InvalidateLocker
	mov ecx,dword ptr [esi+0x94]
	call CCashShop::InvalidateInventory
	jmp Block171

 Block65:
	lea eax,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__6
	push eax
	call ZXString<char>::Format
	add esp,8
	push offset _D_VTMISSING
	lea ecx,[ebp-0x240]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x310]
	mov byte ptr [ebp-4],0x2D
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x2E
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x240]
	push ecx
	lea edx,[ebp-0x310]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x2F
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea eax,[ebp-0x410]
	mov byte ptr [ebp-4],0x2E
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x30
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x410]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x310]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x240]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x5C],cx
	mov dword ptr [ebp-0x54],0xFF
	mov byte ptr [ebp-4],0x31
	test edi,edi
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	mov eax,dword ptr [ebp+0x70]
	lea edx,[ebp-0x5C]
	push edx
	push eax
	push 0x1B
	push 9
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x5C]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi+0xE4]
	push ecx
	lea edx,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__2
	push edx
	call ZXString<char>::Format
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[ebp-0x260]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x330]
	mov byte ptr [ebp-4],0x32
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x33
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x260]
	push ecx
	lea edx,[ebp-0x330]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x34
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[ebp-0x430]
	mov byte ptr [ebp-4],0x33
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x35
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x430]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x330]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x260]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp+0x48],0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x3D3
	push ecx
	mov byte ptr [ebp-4],0x36
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x37
	test ebx,ebx
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[ebp+0x1C]
	push edx
	mov ecx,ebx
	call IWzCanvas::Getproperty
	mov byte ptr [ebp-4],0x38
	lea ecx,[ebp-0x450]
	push ecx
	mov ecx,eax
	call _x_com_ptr<IWzProperty>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0x39
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	call _x_com_ptr<IWzVector2D>::op_assign_unknown
	mov ecx,eax
	call _x_com_ptr<IWzVector2D>::op_neq
	lea ecx,[ebp-0x450]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x36
	test eax,eax
	je Block75

 Block74:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block75:
	mov ecx,3
	mov word ptr [ebp-0x7C],cx
	mov dword ptr [ebp-0x74],0xFF
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x3B
	test ecx,ecx
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea edx,[ebp-0x7C]
	push edx
	push ebx
	mov dword ptr [ebp+0x68],ecx
	call IWzShape2D::Gety
	mov ecx,0xB7
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x68]
	call IWzShape2D::Getx
	mov edx,0xC8
	sub edx,eax
	push edx
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x7C]
	mov byte ptr [ebp-4],0x36
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esi+0xEC]
	push 0
	push 0
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block79:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x350]
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x3C
	test ebx,ebx
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea ecx,[ebp-0x350]
	push ecx
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	call IWzCanvas::Getheight
	add eax,eax
	push eax
	mov ecx,ebx
	call IWzCanvas::Getwidth
	add eax,eax
	push eax
	push 0xFF
	push ebx
	mov ecx,ebx
	call IWzCanvas::Getheight
	mov edx,0xB7
	sub edx,eax
	push edx
	mov ecx,ebx
	call IWzCanvas::Getwidth
	mov ecx,0xD2
	sub ecx,eax
	push ecx
	mov ecx,edi
	call IWzCanvas::CopyEx
	lea ecx,[ebp-0x350]
	mov byte ptr [ebp-4],0x36
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [esi+0xF0],0
	je Block123

 Block82:
	lea edx,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__1
	push edx
	call ZXString<char>::Format
	add esp,8
	push offset _D_VTMISSING
	lea ecx,[ebp-0x370]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x280]
	mov byte ptr [ebp-4],0x3D
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x3E
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x370]
	push ecx
	lea edx,[ebp-0x280]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x3F
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea eax,[ebp-0x470]
	mov byte ptr [ebp-4],0x3E
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x40
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x470]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x280]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x370]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x9C],cx
	mov dword ptr [ebp-0x94],0xFF
	mov ebx,dword ptr [ebp+0x70]
	lea edx,[ebp-0x9C]
	push edx
	push ebx
	push 0x114
	push 9
	mov ecx,edi
	mov byte ptr [ebp-4],0x41
	call IWzCanvas::Copy
	lea ecx,[ebp-0x9C]
	mov byte ptr [ebp-4],0x36
	call Ztl_variant_t::~Ztl_variant_t
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 3
	push 4
	lea eax,[ebp+0x3C]
	push eax
	call __eh_vector_ctor_iterator
	mov byte ptr [ebp-4],0x42
	test ebx,ebx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	mov ecx,ebx
	call IWzCanvas::Getwidth
	lea ecx,[ebp+0x4C]
	push 0x37
	push ecx
	mov dword ptr [ebp+0x54],eax
	call get_basic_font
	lea edx,[ebp+0x68]
	push 0x38
	push edx
	mov byte ptr [ebp-4],0x43
	call get_basic_font
	add esp,0x10
	mov eax,dword ptr [esi+0xEC]
	push eax
	lea ecx,[ebp+0x58]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [ebp-4],0x44
	call CItemInfo::GetItemName
	mov eax,dword ptr [esi+0xF0]
	cmp eax,1
	mov byte ptr [ebp-4],0x45
	jle Block89

 Block87:
	mov dword ptr [ebp+0x28],0
	push eax
	lea edx,[ebp+0x28]
	push offset _S_D__2
	push edx
	mov byte ptr [ebp-4],0x46
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x45
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	cmp dword ptr [esi+0xDC],6
	jne Block95

 Block90:
	lea eax,[ebp+4]
	push 0x1623
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp+0x3C]
	push ecx
	mov byte ptr [ebp-4],0x47
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+4]
	add esp,8
	mov byte ptr [ebp-4],0x45
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	lea edx,[ebp+0x14]
	push 0x1624
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x40]
	push edx
	mov byte ptr [ebp-4],0x48
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0x45
	test eax,eax
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block94:
	mov dword ptr [ebp+0x50],2
	jmp Block110

 Block95:
	mov eax,dword ptr [esi+0xF4]
	push eax
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [esi+0xF8]
	cmp eax,1
	mov byte ptr [ebp-4],0x49
	jle Block98

 Block96:
	mov dword ptr [ebp+0x2C],0
	push eax
	lea edx,[ebp+0x2C]
	push offset _S_D__2
	push edx
	mov byte ptr [ebp-4],0x4A
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[ebp+0x64]
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	lea eax,[ebp-0x18]
	push 0x1620
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x3C]
	push edx
	mov byte ptr [ebp-4],0x4B
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block100:
	lea eax,[ebp+0xC]
	push 0x1621
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x64]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x40]
	push edx
	mov byte ptr [ebp-4],0x4C
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0xC]
	add esp,0xC
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block102

 Block101:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block102:
	lea eax,[ebp-0x10]
	push 0x1622
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x4D
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x10]
	add esp,8
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block104

 Block103:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block104:
	mov edx,dword ptr [esi+0xF4]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push 1
	push edx
	lea eax,[ebp+0x24]
	push eax
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block106:
	mov eax,3
	mov word ptr [ebp-0xB0],ax
	mov dword ptr [ebp-0xA8],0xFF
	mov ebx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x4E
	test ebx,ebx
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	lea ecx,[ebp-0xB0]
	push ecx
	push ebx
	mov ecx,ebx
	call IWzCanvas::Getheight
	mov edx,0x33
	sub edx,eax
	shr edx,1
	add edx,0x114
	push edx
	mov ecx,ebx
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [ebp+0x54]
	sub ecx,eax
	sub ecx,5
	push ecx
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0xB0]
	mov byte ptr [ebp-4],0x49
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,ebx
	mov dword ptr [ebp+0x50],3
	call IWzCanvas::Getwidth
	mov edx,0xA
	sub edx,eax
	mov eax,dword ptr [ebp+0x64]
	add dword ptr [ebp+0x54],edx
	mov byte ptr [ebp-4],0x45
	test eax,eax
	je Block110

 Block109:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block110:
	mov ecx,dword ptr [ebp+0x50]
	mov eax,ecx
	shl eax,4
	mov edx,eax
	mov eax,0x33
	sub eax,edx
	cdq
	sub eax,edx
	sar eax,1
	add eax,0x114
	mov dword ptr [ebp+0x64],0
	test ecx,ecx
	jle Block116

 Block111:
	mov dword ptr [ebp+0x60],eax
	jmp Block113

 Block113:
	mov ebx,dword ptr [ebp+0x64]
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2A0]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+ebx*4+0x3C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x4F
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,esp
	lea ecx,[ebp-0x2A0]
	push ecx
	mov ecx,dword ptr [ebp+ebx*4+0x3C]
	push 0xFFFFFFFF
	push eax
	push ecx
	call ZStrUtil::_Conv_0
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x50
	test ecx,ecx
	je Block7

 Block114:
	mov byte ptr [ebp-4],0x4F
	call IWzFont::CalcTextWidth
	lea ecx,[ebp-0x2A0]
	mov ebx,eax
	mov byte ptr [ebp-4],0x45
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2C0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x390]
	mov byte ptr [ebp-4],0x51
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x68]
	lea edx,[ebp-0x2C0]
	push edx
	mov edx,dword ptr [ebp+0x64]
	lea eax,[ebp-0x390]
	push eax
	mov eax,dword ptr [ebp+edx*4+0x3C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x52
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x54]
	sub eax,ebx
	cdq
	sub eax,edx
	mov ebx,eax
	mov eax,dword ptr [ebp+0x60]
	inc eax
	sar ebx,1
	push eax
	lea ecx,[ebx+5]
	push ecx
	mov byte ptr [ebp-4],0x53
	mov ecx,edi
	mov byte ptr [ebp-4],0x52
	call IWzCanvas::DrawTextA
	lea ecx,[ebp-0x390]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C0]
	mov byte ptr [ebp-4],0x45
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2E0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x3B0]
	mov byte ptr [ebp-4],0x54
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	lea edx,[ebp-0x2E0]
	push edx
	mov edx,dword ptr [ebp+0x64]
	lea eax,[ebp-0x3B0]
	push eax
	mov eax,dword ptr [ebp+edx*4+0x3C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x55
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x60]
	push eax
	add ebx,4
	mov byte ptr [ebp-4],0x56
	push ebx
	mov byte ptr [ebp-4],0x55
	mov ecx,edi
	call IWzCanvas::DrawTextA
	lea ecx,[ebp-0x3B0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2E0]
	mov byte ptr [ebp-4],0x45
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x64]
	add dword ptr [ebp+0x60],0x10
	inc eax
	cmp eax,dword ptr [ebp+0x50]
	mov dword ptr [ebp+0x64],eax
	jl Block113

 Block115:
	mov ebx,dword ptr [ebp+0x70]

 Block116:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x44
	test eax,eax
	je Block118

 Block117:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block118:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x43
	test eax,eax
	je Block120

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block120:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x42
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	push offset ZXString<char>::~ZXString<char>
	push 3
	push 4
	lea eax,[ebp+0x3C]
	push eax
	mov byte ptr [ebp-4],0x36
	call __eh_vector_dtor_iterator

 Block123:
	inc dword ptr [esi+0xE4]
	cmp dword ptr [esi+0xE4],0xF
	jle Block125

 Block124:
	mov dword ptr [esi+0xE4],0

 Block125:
	call get_update_time
	add eax,0x64
	mov dword ptr [esi+0xE0],eax
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block171

 Block126:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block171

 Block127:
	lea eax,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__6
	push eax
	call ZXString<char>::Format
	add esp,8
	push offset _D_VTMISSING
	lea ecx,[ebp-0x300]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x3D0]
	mov byte ptr [ebp-4],0x57
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x58
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x300]
	push ecx
	lea edx,[ebp-0x3D0]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x59
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea eax,[ebp-0x490]
	mov byte ptr [ebp-4],0x58
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x5A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x490]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x3D0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x300]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0xD0],cx
	mov dword ptr [ebp-0xC8],0xFF
	mov byte ptr [ebp-4],0x5B
	test edi,edi
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	mov eax,dword ptr [ebp+0x70]
	lea edx,[ebp-0xD0]
	push edx
	push eax
	push 0x1B
	push 9
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0xD0]
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi+0xE4]
	push ecx
	lea edx,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC
	push edx
	call ZXString<char>::Format
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[ebp-0x130]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x3F0]
	mov byte ptr [ebp-4],0x5C
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x5D
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x130]
	push ecx
	lea edx,[ebp-0x3F0]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x5E
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	lea eax,[ebp-0x4B0]
	mov byte ptr [ebp-4],0x5D
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x5F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x4B0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x3F0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x130]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp+0x50],0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x3D3
	push ecx
	mov byte ptr [ebp-4],0x60
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x61
	test ecx,ecx
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	lea edx,[ebp+0x18]
	push edx
	call IWzCanvas::Getproperty
	mov byte ptr [ebp-4],0x62
	lea ecx,[ebp-0x4D0]
	push ecx
	mov ecx,eax
	call _x_com_ptr<IWzProperty>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0x63
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x64
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IWzVector2D>::op_assign_unknown
	mov ecx,eax
	call _x_com_ptr<IWzVector2D>::op_neq
	lea ecx,[ebp-0x4D0]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x60
	test eax,eax
	je Block137

 Block136:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block137:
	mov ecx,3
	mov word ptr [ebp-0xF0],cx
	mov dword ptr [ebp-0xE8],0xFF
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x65
	test ecx,ecx
	jne Block139

 Block138:
	push 0x80004003
	call _com_issue_error

 Block139:
	mov eax,dword ptr [ebp+0x70]
	lea edx,[ebp-0xF0]
	push edx
	push eax
	mov ebx,ecx
	call IWzShape2D::Gety
	mov ecx,0xB7
	sub ecx,eax
	push ecx
	mov ecx,ebx
	call IWzShape2D::Getx
	mov edx,0xC3
	sub edx,eax
	push edx
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0xF0]
	mov byte ptr [ebp-4],0x60
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esi+0xEC]
	push 0
	push 0
	push eax
	lea ecx,[ebp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block141

 Block140:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block141:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x150]
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0x66
	test ebx,ebx
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	lea ecx,[ebp-0x150]
	push ecx
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	call IWzCanvas::Getheight
	add eax,eax
	push eax
	mov ecx,ebx
	call IWzCanvas::Getwidth
	add eax,eax
	push eax
	push 0xFF
	push ebx
	mov ecx,ebx
	call IWzCanvas::Getheight
	mov edx,0xB7
	sub edx,eax
	push edx
	mov ecx,ebx
	call IWzCanvas::Getwidth
	mov ecx,0x7C
	sub ecx,eax
	push ecx
	mov ecx,edi
	call IWzCanvas::CopyEx
	lea ecx,[ebp-0x150]
	mov byte ptr [ebp-4],0x60
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x170]
	call Ztl_variant_t::_ctor_1
	lea edx,[ebp-0x170]
	push edx
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	mov byte ptr [ebp-4],0x67
	call IWzCanvas::Getheight
	add eax,eax
	push eax
	mov ecx,ebx
	call IWzCanvas::Getwidth
	add eax,eax
	push eax
	push 0xFF
	push ebx
	mov ecx,ebx
	call IWzCanvas::Getheight
	mov ecx,0xB7
	sub ecx,eax
	push ecx
	mov ecx,ebx
	call IWzCanvas::Getwidth
	mov edx,0x11C
	sub edx,eax
	push edx
	mov ecx,edi
	call IWzCanvas::CopyEx
	lea ecx,[ebp-0x170]
	mov byte ptr [ebp-4],0x60
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [esi+0xEC],0
	je Block167

 Block144:
	lea eax,[ebp+0x6C]
	push offset _S_UIUIWINDOWIMGGAC__1
	push eax
	call ZXString<char>::Format
	add esp,8
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1B0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x190]
	mov byte ptr [ebp-4],0x68
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp+0x6C]
	push 0xFFFFFFFF
	push 0
	push ebx
	mov byte ptr [ebp-4],0x69
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x1B0]
	push ecx
	lea edx,[ebp-0x190]
	push edx
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x6A
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	lea eax,[ebp-0x4F0]
	mov byte ptr [ebp-4],0x69
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x6B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x4F0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x190]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1B0]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x110],cx
	mov dword ptr [ebp-0x108],0xFF
	mov ebx,dword ptr [ebp+0x70]
	lea edx,[ebp-0x110]
	push edx
	push ebx
	push 0x114
	push 9
	mov ecx,edi
	mov byte ptr [ebp-4],0x6C
	call IWzCanvas::Copy
	lea ecx,[ebp-0x110]
	mov byte ptr [ebp-4],0x60
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[ebp+0x64]
	call ZXString<char>::CreateFromCharStr
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0x6D
	call ZXString<char>::CreateFromCharStr
	mov eax,dword ptr [esi+0xEC]
	push eax
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov byte ptr [ebp-4],0x6E
	call CItemInfo::GetItemName
	mov eax,dword ptr [esi+0xF0]
	cmp eax,1
	mov byte ptr [ebp-4],0x6F
	jle Block149

 Block147:
	mov dword ptr [ebp+0x30],0
	push eax
	lea edx,[ebp+0x30]
	push offset _S_D__2
	push edx
	mov byte ptr [ebp-4],0x70
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[ebp+0x4C]
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x6F
	test eax,eax
	je Block149

 Block148:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block149:
	lea eax,[ebp+8]
	push 0x161E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp+0x64]
	push ecx
	mov byte ptr [ebp-4],0x71
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+8]
	add esp,8
	mov byte ptr [ebp-4],0x6F
	test eax,eax
	je Block151

 Block150:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block151:
	lea edx,[ebp+0x34]
	push 0x161F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x60]
	push edx
	mov byte ptr [ebp-4],0x72
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x34]
	add esp,0xC
	mov byte ptr [ebp-4],0x6F
	test eax,eax
	je Block153

 Block152:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block153:
	lea eax,[ebp+0x54]
	push 0x37
	push eax
	call get_basic_font
	lea ecx,[ebp+0x48]
	push 0x38
	push ecx
	mov byte ptr [ebp-4],0x73
	call get_basic_font
	add esp,0x10
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1D0]
	mov byte ptr [ebp-4],0x74
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp+0x64]
	push 0xFFFFFFFF
	push 0
	push edx
	mov byte ptr [ebp-4],0x75
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x64]
	mov eax,esp
	lea ecx,[ebp-0x1D0]
	push ecx
	push 0xFFFFFFFF
	push eax
	push edx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x76
	test ecx,ecx
	jne Block155

 Block154:
	push 0x80004003
	call _com_issue_error

 Block155:
	mov byte ptr [ebp-4],0x75
	call IWzFont::CalcTextWidth
	lea ecx,[ebp-0x1D0]
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x74
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1F0]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x60]
	push 0xFFFFFFFF
	push 0
	push eax
	mov byte ptr [ebp-4],0x77
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x60]
	mov eax,esp
	lea ecx,[ebp-0x1F0]
	push ecx
	push 0xFFFFFFFF
	push eax
	push edx
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x78
	test ecx,ecx
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	mov byte ptr [ebp-4],0x77
	call IWzFont::CalcTextWidth
	lea ecx,[ebp-0x1F0]
	mov dword ptr [ebp+0x58],eax
	mov byte ptr [ebp-4],0x74
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x230]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x210]
	mov byte ptr [ebp-4],0x79
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp+0x48]
	lea eax,[ebp-0x230]
	push eax
	mov eax,dword ptr [ebp+0x64]
	lea ecx,[ebp-0x210]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov byte ptr [ebp-4],0x7A
	call Ztl_bstr_t::_ctor_1
	push 0x11E
	mov ecx,edi
	mov byte ptr [ebp-4],0x7B
	call IWzCanvas::Getwidth
	sub eax,dword ptr [ebp+0x68]
	mov ecx,edi
	cdq
	sub eax,edx
	sar eax,1
	inc eax
	push eax
	mov byte ptr [ebp-4],0x7A
	call IWzCanvas::DrawTextA
	lea ecx,[ebp-0x210]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x230]
	mov byte ptr [ebp-4],0x74
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x270]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x250]
	mov byte ptr [ebp-4],0x7C
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x54]
	lea ecx,[ebp-0x270]
	push ecx
	lea edx,[ebp-0x250]
	push edx
	mov edx,dword ptr [ebp+0x64]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push edx
	mov byte ptr [ebp-4],0x7D
	call Ztl_bstr_t::_ctor_1
	push 0x11D
	mov ecx,edi
	mov byte ptr [ebp-4],0x7E
	call IWzCanvas::Getwidth
	sub eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x7D
	cdq
	sub eax,edx
	sar eax,1
	push eax
	mov ecx,edi
	call IWzCanvas::DrawTextA
	lea ecx,[ebp-0x250]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x270]
	mov byte ptr [ebp-4],0x74
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2B0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x290]
	mov byte ptr [ebp-4],0x7F
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp+0x48]
	lea eax,[ebp-0x2B0]
	push eax
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[ebp-0x290]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov byte ptr [ebp-4],0x80
	call Ztl_bstr_t::_ctor_1
	push 0x132
	mov ecx,edi
	mov byte ptr [ebp-4],0x81
	call IWzCanvas::Getwidth
	sub eax,dword ptr [ebp+0x58]
	mov ecx,edi
	cdq
	sub eax,edx
	sar eax,1
	inc eax
	push eax
	mov byte ptr [ebp-4],0x80
	call IWzCanvas::DrawTextA
	lea ecx,[ebp-0x290]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2B0]
	mov byte ptr [ebp-4],0x74
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2F0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2D0]
	mov byte ptr [ebp-4],0x82
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x54]
	lea ecx,[ebp-0x2F0]
	push ecx
	lea edx,[ebp-0x2D0]
	push edx
	mov edx,dword ptr [ebp+0x60]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push edx
	mov byte ptr [ebp-4],0x83
	call Ztl_bstr_t::_ctor_1
	push 0x131
	mov ecx,edi
	mov byte ptr [ebp-4],0x84
	call IWzCanvas::Getwidth
	sub eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x83
	cdq
	sub eax,edx
	sar eax,1
	push eax
	mov ecx,edi
	call IWzCanvas::DrawTextA
	lea ecx,[ebp-0x2D0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2F0]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x73
	test eax,eax
	je Block159

 Block158:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block159:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x6F
	test eax,eax
	je Block161

 Block160:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block161:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x6E
	test eax,eax
	je Block163

 Block162:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block163:
	cmp dword ptr [ebp+0x60],0
	mov byte ptr [ebp-4],0x6D
	je Block165

 Block164:
	mov eax,dword ptr [ebp+0x60]
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block165:
	cmp dword ptr [ebp+0x64],0
	mov byte ptr [ebp-4],0x60
	je Block167

 Block166:
	mov ecx,dword ptr [ebp+0x64]
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block167:
	inc dword ptr [esi+0xE4]
	cmp dword ptr [esi+0xE4],0xF
	jle Block169

 Block168:
	mov dword ptr [esi+0xE4],0

 Block169:
	call get_update_time
	add eax,0x64
	mov dword ptr [esi+0xE0],eax
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block171

 Block170:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block171:
	cmp dword ptr [esi+0x98],0
	je Block180

 Block172:
	mov ecx,3
	mov word ptr [ebp+0x38],cx
	mov dword ptr [ebp+0x40],0xFF
	lea edx,[ebp+0x34]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x85
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esi+0x98]
	mov byte ptr [ebp-4],0x86
	test ecx,ecx
	jne Block174

 Block173:
	push 0x80004003
	call _com_issue_error

 Block174:
	lea eax,[ebp+0x38]
	push eax
	push esi
	push 0
	push 0
	call IWzCanvas::Copy
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x85
	test eax,eax
	je Block176

 Block175:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block176:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],2
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block182

 Block181:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block182:
	mov byte ptr [ebp-4],0
	test ebx,ebx
	je Block184

 Block183:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block184:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block186

 Block185:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block186:
	lea esp,[ebp-0x500]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x74]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x78
	mov esp,ebp
	pop ebp
	ret
}
}
// CUICashItemGachapon::IsKindOf
__SUB_CLASS_THIS(0056A890, __thiscall, 13579,  CUICashItemGachapon, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUICashItemGachapon::ms_RTTI_CUICashItemGachapon
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
// CUICashGachapon::OnCreate
_SUB_EXCEPTION_HANDLER(570F60)
__SUB_CLASS_THIS(00570F60, __thiscall, 13600,  CUICashGachapon, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_570F60
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
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x14]
	push 0x1614
	push eax
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
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x159
	push 0xC
	push 0x7D0
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x1615
	push eax
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
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block21:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 9
	push 0x18B
	push 0x7D1
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x1616
	push eax
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
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block33:
	mov eax,dword ptr [esi+0xC4]
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block35

 Block34:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [esi+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x159
	push 0x163
	push 0x7D2
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x1617
	push eax
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
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block45:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block47

 Block46:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block47:
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x159
	push 0x5F
	push 0x7D3
	push esi
	call edx
	mov esi,dword ptr [esi+0xB4]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push ebx
	call edx
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
// CUtilDlg::Draw
_SUB_EXCEPTION_HANDLER(56B6B0)
__SUB_CLASS_THIS(0056B6B0, __thiscall, 12986,  CUtilDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56B6B0
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x70]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x18],0x14
	mov dword ptr [esp+0x70],ebx
	mov byte ptr [esp+0x68],1
	mov dword ptr [esp+0x14],0x16
	cmp dword ptr [edi+0x9C],ebx
	je Block2

 Block1:
	mov dword ptr [esp+0x14],0x35

 Block2:
	mov ebp,dword ptr [esp+0x20]
	cmp dword ptr [edi+0xA8],ebx
	je Block19

 Block3:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push edx
	call esi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x6C],2
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x24]
	push 0x24
	push edx
	mov byte ptr [esp+0x78],3
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0xB0]
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,4
	push eax
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x78],5
	test ebp,ebp
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov eax,dword ptr [edi+0x28]
	sub eax,0x3F
	push eax
	push 0x24
	mov ecx,ebp
	mov byte ptr [esp+0x80],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],3
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov esi,8
	mov byte ptr [esp+0x68],2
	cmp word ptr [esp+0x30],si
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [esp+0x68],1
	cmp word ptr [esp+0x40],si
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	xor ecx,ecx
	mov dword ptr [esp+0x1C],ecx
	jmp Block21

 Block21:
	mov eax,dword ptr [edi+0xF0]
	test eax,eax
	je Block48

 Block22:
	cmp ecx,dword ptr [eax-4]
	jae Block48

 Block23:
	mov edx,eax
	lea eax,[edx+ecx*4]
	push eax
	lea ecx,[esp+0x74]
	call ZXString<char>::op_assign
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block24:
	mov edx,dword ptr [esp+0x70]
	lea eax,[esp+0x40]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x74],6
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x1C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x78],7
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],8
	test ecx,ecx
	je Block8

 Block25:
	mov byte ptr [esp+0x70],9
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x68],6
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block27:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],1
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	cmp dword ptr [edi+0x90],0
	je Block33

 Block32:
	mov eax,0xEA
	sub eax,esi
	cdq
	sub eax,edx
	mov esi,eax
	sar esi,1
	add esi,0xF
	jmp Block34

 Block33:
	mov esi,0x14

 Block34:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call ebx
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block35:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],0xA
	call ebx
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block36:
	mov eax,dword ptr [esp+0x14]
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x78],0xB
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x78]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x7C],0xC
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x78],0xD
	test ebp,ebp
	je Block8

 Block37:
	mov eax,dword ptr [esp+0x28]
	push eax
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0x80],0xC
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x68],0xB
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov esi,8
	mov byte ptr [esp+0x68],0xA
	cmp word ptr [esp+0x30],si
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov byte ptr [esp+0x68],1
	cmp word ptr [esp+0x50],si
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	add dword ptr [esp+0x18],0xE
	inc dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x1C]
	jmp Block21

 Block46:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	add dword ptr [esp+0x18],0xE
	inc dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x1C]
	jmp Block21

 Block48:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test ebp,ebp
	je Block52

 Block51:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block52:
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
// CUICashGachapon::~CUICashGachapon
_SUB_EXCEPTION_HANDLER(56AE80)
__SUB_CLASS_THIS0(0056AE80, __thiscall, 13599,  CUICashGachapon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56AE80
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
	int 3// TODO: 	mov dword ptr [esi],offset CUICashGachapon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICashGachapon::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICashGachapon::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xFC]
	mov dword ptr [esp+0x1C],0xA
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xE8]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],9
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xD8]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xD4]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xD0]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xCC]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block13

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov eax,dword ptr [esi+0xCC]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xCC]
	cmp ecx,ebx
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block12:
	mov dword ptr [esi+0xCC],ebx

 Block13:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block15

 Block14:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block15:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block17

 Block16:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block17:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block19

 Block18:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block19:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block21

 Block20:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block21:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
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
// CUIArtSpeakerSample::OnButtonClicked
__SUB_CLASS_THIS(00568D50, __thiscall, 13497,  CUIArtSpeakerSample, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x7D0
	jb Block3

 Block1:
	mov edx,dword ptr [ecx+0x98]
	add edx,0x7D0
	cmp eax,edx
	ja Block3

 Block2:
	add eax,0xFFFFF830
	mov dword ptr [ecx+0x94],eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block3:
	ret 4
}
}
// CUIChannelShift::OnCreate
_SUB_EXCEPTION_HANDLER(56C160)
__SUB_CLASS_THIS(0056C160, __thiscall, 13319,  CUIChannelShift, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56C160
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0
	push 0
	lea esi,[edi+0xC0]
	push edi
	mov ecx,esi
	call CLayoutMan::Init
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGCH__3
	mov dword ptr [edi+0x9C],1
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CWnd::SetBackgrnd
	push 0
	push 0
	push 0xFFFFFFEC
	push 1
	push offset _S_UIUIWINDOW2IMGCH__2
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],0
	je Block2

 Block1:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push 0
	push 0
	push 0
	push 2
	push offset _S_UIUIWINDOW2IMGCH__1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],0
	je Block4

 Block3:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x78],0
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push 0
	push 0
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGCH
	mov byte ptr [esp+0x8C],1
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x88],2
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x70]
	mov byte ptr [esp+0x88],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x74],5
	cmp word ptr [esp+0x5C],si
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x5C]
	push ecx
	call ebx

 Block17:
	mov byte ptr [esp+0x74],6
	cmp word ptr [esp+0x2C],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x2C]
	push eax
	call ebx

 Block21:
	mov byte ptr [esp+0x74],7
	cmp word ptr [esp+0x3C],si
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x3C]
	push edx
	call ebx

 Block25:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0xA20
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],8
	test esi,esi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x84],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x7C],9
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xAC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x74],7
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x4C]
	push eax
	call ebx

 Block34:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0xA21
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x80],0xA
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x84],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x7C],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xB0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x74],7
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x4C]
	push ecx
	call ebx

 Block41:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea ecx,[esp+0x1C]
	mov bl,0xC
	push ecx
	mov byte ptr [esp+0x78],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x74],0xD
	test ecx,ecx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push 1
	push 0xA8
	push 0x172
	push 0
	push 0
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xB4]
	cmp esi,eax
	je Block52

 Block48:
	mov dword ptr [edi+0xB4],eax
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block50:
	test esi,esi
	je Block52

 Block51:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block52:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block54:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x74],bl
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x74],7
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xE
	mov ecx,0xD
	mov byte ptr [esp+0x74],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block64

 Block63:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block64:
	mov esi,dword ptr [edi+0xB4]
	mov byte ptr [esp+0x74],0xF
	test esi,esi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
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
	push esi
	call eax
	test eax,eax
	jge Block68

 Block67:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block68:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x74],bl
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],7
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x10
	mov ecx,0xD
	mov byte ptr [esp+0x74],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block76

 Block75:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block76:
	mov esi,dword ptr [edi+0xB4]
	mov byte ptr [esp+0x74],0x11
	test esi,esi
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
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
	push esi
	call eax
	test eax,eax
	jge Block80

 Block79:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x74],bl
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],7
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	mov esi,dword ptr [edi+0xB4]
	test esi,esi
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block90

 Block89:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block90:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	mov bl,0x12
	push ecx
	mov byte ptr [esp+0x78],bl
	call esi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	mov ecx,dword ptr [edi+0xB4]
	mov byte ptr [esp+0x74],0x13
	test ecx,ecx
	jne Block96

 Block95:
	push 0x80004003
	call _com_issue_error

 Block96:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x50]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x74],bl
	mov ebx,8
	cmp word ptr [esp+0x4C],bx
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov byte ptr [esp+0x74],7
	cmp word ptr [esp+0x1C],bx
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block104:
	lea ecx,[esp+0x1C]
	push ecx
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	lea eax,[esp+0x4C]
	mov bl,0x14
	push eax
	mov byte ptr [esp+0x78],bl
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x74],0x15
	test ecx,ecx
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push 2
	push 0xA8
	push 0x172
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xB8]
	cmp esi,eax
	je Block115

 Block111:
	mov dword ptr [edi+0xB8],eax
	test eax,eax
	je Block113

 Block112:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block113:
	test esi,esi
	je Block115

 Block114:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block115:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block117

 Block116:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block117:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x74],bl
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x74],7
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x16
	mov ecx,0xD
	mov byte ptr [esp+0x74],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block127

 Block126:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block127:
	mov esi,dword ptr [edi+0xB8]
	mov byte ptr [esp+0x74],0x17
	test esi,esi
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
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
	push esi
	call eax
	test eax,eax
	jge Block131

 Block130:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block131:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x74],bl
	jne Block134

 Block132:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],7
	test eax,eax
	je Block137

 Block136:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block137:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x18
	mov ecx,0xD
	mov byte ptr [esp+0x74],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block139

 Block138:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block139:
	mov esi,dword ptr [edi+0xB8]
	mov byte ptr [esp+0x74],0x19
	test esi,esi
	jne Block141

 Block140:
	push 0x80004003
	call _com_issue_error

 Block141:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
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
	push esi
	call eax
	test eax,eax
	jge Block143

 Block142:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block143:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x74],bl
	jne Block146

 Block144:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],7
	test eax,eax
	je Block149

 Block148:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block149:
	mov esi,dword ptr [edi+0xB8]
	test esi,esi
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block153

 Block152:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block153:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	lea ecx,[esp+0x4C]
	mov bl,0x1A
	push ecx
	mov byte ptr [esp+0x78],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block157

 Block156:
	push eax
	call _com_issue_error

 Block157:
	mov ecx,dword ptr [edi+0xB8]
	mov byte ptr [esp+0x74],0x1B
	test ecx,ecx
	jne Block159

 Block158:
	push 0x80004003
	call _com_issue_error

 Block159:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x50]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x4C],si
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov byte ptr [esp+0x74],7
	cmp word ptr [esp+0x1C],si
	jne Block166

 Block164:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block167:
	mov ecx,dword ptr [edi+0x94]
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [edi+0x90],ecx
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x68
	ret 4
}
}
// CUIChannelShift::CUIChannelShift
_SUB_EXCEPTION_HANDLER(56BE90)
__SUB_CLASS_THIS0(0056BE90, __thiscall, 13316,  CUIChannelShift, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56BE90
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
	mov dword ptr [esp+0x18],esi
	call CDialog::_ctor_default
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 3
	push 4
	lea eax,[esi+0xA0]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x38],edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIChannelShift::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIChannelShift::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIChannelShift::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],0xFFFFFFFF
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea ecx,[esi+0xAC]
	push ecx
	mov byte ptr [esp+0x38],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x2060]
	mov dword ptr [esi+0x94],eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x3F74]
	mov byte ptr [esp+0x24],6
	cmp eax,edi
	jne Block2

 Block1:
	xor eax,eax
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	mov dword ptr [esi+0x98],eax
	mov eax,dword ptr [_D_G_GR]
	cmp eax,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x2C]
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov ebx,eax
	mov dword ptr [esp+0x1C],edi
	call edx
	cmp eax,edi
	jge Block7

 Block6:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push ebx
	push eax
	call _com_issue_errorex

 Block7:
	mov ebx,dword ptr [esp+0x14]
	mov eax,dword ptr [_D_G_GR]
	add ebx,0xFFFFFE8E
	shr ebx,1
	cmp eax,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov ebp,eax
	push eax
	mov eax,dword ptr [ecx+0x30]
	mov dword ptr [esp+0x1C],edi
	call eax
	cmp eax,edi
	jge Block11

 Block10:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push ebp
	push eax
	call _com_issue_errorex

 Block11:
	mov ecx,dword ptr [esp+0x14]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0xA8
	add ecx,0xFFFFFF58
	push 0x172
	shr ecx,1
	push ecx
	push ebx
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
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
// CUIGachaponBox::Draw
__SUB_CLASS_THIS(00568C70, __thiscall, 13475,  CUIGachaponBox, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CUIContextMenu::OnButtonClicked
__SUB_CLASS_THIS(00568A70, __thiscall, 13347,  CUIContextMenu, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x7D0
	jb Block3

 Block1:
	cmp eax,0x7DA
	ja Block3

 Block2:
	add eax,0xFFFFF830
	mov dword ptr [ecx+0xEC],eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block3:
	ret 4
}
}
// CUICancelCharacterCouponResults::Draw
__SUB_CLASS_THIS(00568BC0, __thiscall, 13455,  CUICancelCharacterCouponResults, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CUISysOpt::CUISysOpt
_SUB_EXCEPTION_HANDLER(3A7ED0)
__SUB_CLASS_THIS0(003A7ED0, __thiscall, 13239,  CUISysOpt, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A7ED0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISysOpt::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISysOpt::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISysOpt::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x188],edi
	mov dword ptr [esi+0x18C],edi
	mov dword ptr [esi+0x190],edi
	mov dword ptr [esi+0x194],edi
	mov dword ptr [esi+0x198],edi
	lea eax,[esp+0xC]
	push 0x19B1
	push eax
	mov byte ptr [esp+0x24],0x12
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 1
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],0x13
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],0x12
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
// CUICancelCharacterCouponRequests::OnButtonClicked
__SUB_CLASS_THIS(00568B50, __thiscall, 13436,  CUICancelCharacterCouponRequests, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x3E8
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block4:
	cmp edx,1
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block6:
	cmp edx,2
	jne Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block8:
	cmp edx,8
	jne Block10

 Block9:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block10:
	ret 4
}
}
// CUICancelCharacterCouponRequests::~CUICancelCharacterCouponRequests
_SUB_EXCEPTION_HANDLER(56A400)
__SUB_CLASS_THIS0(0056A400, __thiscall, 13433,  CUICancelCharacterCouponRequests, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56A400
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
	int 3// TODO: 	mov dword ptr [esi],offset CUICancelCharacterCouponRequests::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICancelCharacterCouponRequests::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICancelCharacterCouponRequests::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xA0],0
	lea edi,[esi+0x9C]
	mov dword ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x18],0
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
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
// CUISysOpt::HitTest
__SUB_CLASS_THIS(00568760, __thiscall, 13245,  CUISysOpt, int32_t, long, long, CCtrlWnd**) {
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
	cmp edi,0x32
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUtilDlg::YesNo2
_SUB_EXCEPTION_HANDLER(577530)
__SUB(00577530, __cdecl, 12969,  int32_t, NakedParam<ZXString<char>>, const wchar_t*, ZRef<CDialog>*, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_577530
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
	xor ebx,ebx
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x24],1
	cmp eax,ebx
	je Block12

 Block1:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	cmp eax,ebx
	je Block12

 Block2:
	add eax,8
	cmp eax,ebx
	je Block12

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esp+0x34]
	mov byte ptr [esp+0x24],2
	cmp edi,ebx
	je Block14

 Block6:
	cmp dword ptr [edi+4],ebx
	je Block13

 Block7:
	mov byte ptr [esp+0x24],bl
	cmp esi,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlg>::_ReleaseRaw

 Block9:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,3
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block12:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block5

 Block13:
	push esi
	mov ecx,edi
	call ZRef<CDialog>::op_assign_ptr

 Block14:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x30]
	push ebx
	push ecx
	push edx
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x48],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push 0x3EB
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_1
	push ebx
	push 1
	push ebx
	push ebx
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov ecx,esi
	call CDialog::DoModal
	mov ebp,eax
	cmp edi,ebx
	je Block18

 Block15:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	jne Block18

 Block16:
	cmp eax,ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	mov byte ptr [esp+0x24],bl
	cmp esi,ebx
	je Block20

 Block19:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlg>::_ReleaseRaw

 Block20:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,ebp
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
// CUICashItemGachapon::GetRTTI
__SUB_CLASS_THIS0(0056A880, __thiscall, 13578,  CUICashItemGachapon, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUICashItemGachapon::ms_RTTI_CUICashItemGachapon
	ret
}
}
// CUICashGachapon::OnCashGachaponItemCopyResult
__SUB_CLASS_THIS(00568F20, __thiscall, 13603,  CUICashGachapon, void, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,eax
	neg edx
	sbb edx,edx
	add edx,4
	mov dword ptr [ecx+0xDC],edx
	mov dword ptr [ecx+0xE4],0
	test eax,eax
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+0xC]
	push offset _S_VEGAFAIL
	mov dword ptr [ecx+0xF4],eax
	mov dword ptr [ecx+0xF8],edx
	call play_ui_sound
	pop ecx
	ret 0xC

 Block2:
	push offset _S_ENCHANT
	call play_ui_sound
	add esp,4
	ret 0xC
}
}
// CUIArtSpeakerSample::CUIArtSpeakerSample
_SUB_EXCEPTION_HANDLER(579030)
__SUB_CLASS_THIS(00579030, __thiscall, 13492,  CUIArtSpeakerSample, void, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_579030
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	call CDialog::_ctor_default
	xor ebp,ebp
	int 3// TODO: 	mov dword ptr [esi],offset CUIArtSpeakerSample::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIArtSpeakerSample::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIArtSpeakerSample::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esi+0x90],ebp
	lea ebx,[esi+0x9C]
	mov dword ptr [esi+0x94],0xFFFFFFFF
	mov dword ptr [ebx],ebp
	mov edi,dword ptr [esp+0x5C]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x5C],ebp
	lea eax,[esp+0x14]
	push 0x117F
	push eax
	mov byte ptr [esp+0x5C],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0x60],4
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x54],3
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call edi
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
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x58],5
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esp+0x5C]
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x6C],6
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],7
	cmp dword ptr [_D_G_RM],ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],6
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],8
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x54],6
	cmp word ptr [esp+0x3C],bp
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block15:
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x1C],bp
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block19:
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x2C],bp
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block23:
	mov edi,dword ptr [ebx]
	test edi,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,dword ptr [esp+0x14]
	add eax,0xFFFFFFFD
	mov dword ptr [esi+0x98],eax
	jns Block29

 Block28:
	mov dword ptr [esi+0x98],0

 Block29:
	mov eax,dword ptr [esi+0x98]
	add eax,2
	mov edi,eax
	shl edi,4
	sub edi,eax
	call get_screen_width
	mov ebx,dword ptr [esp+0x60]
	lea ecx,[ebx+0x64]
	cmp ecx,eax
	jle Block31

 Block30:
	call get_screen_width
	mov ebx,eax
	sub ebx,0x64

 Block31:
	call get_screen_height
	mov ecx,dword ptr [esp+0x64]
	lea edx,[ecx+edi]
	cmp edx,eax
	jle Block33

 Block32:
	call get_screen_height
	sub eax,edi
	jmp Block34

 Block33:
	mov eax,ecx

 Block34:
	push 0
	push 0
	push 1
	push 0xA
	push edi
	push 0x64
	push eax
	push ebx
	mov ecx,esi
	call CDialog::CreateDlg_0
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],2
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov eax,esi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0xC
}
}
// CUICancelCharacterCouponRequests::OnKey
__SUB_CLASS_THIS(00568B10, __thiscall, 13437,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	jns Block2

 Block1:
	push edi
	push ebx
	call CDialog::OnKey

 Block2:
	cmp ebx,0x1B
	jne Block4

 Block3:
	mov eax,dword ptr [esi-4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi-4]
	push 2
	call edx

 Block4:
	push edi
	push ebx
	mov ecx,esi
	call CDialog::OnKey
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUICashGachapon::OnCashGachaponOpenResult
__SUB_CLASS_THIS(00568EE0, __thiscall, 13601,  CUICashGachapon, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	push offset _S_CASHGACHAPONJACK
	mov dword ptr [ecx+0xEC],eax
	mov dword ptr [ecx+0xF0],edx
	mov dword ptr [ecx+0xDC],1
	mov dword ptr [ecx+0xE4],0
	call play_ui_sound
	pop ecx
	ret 8
}
}
// CUtilDlg::ForcedRet
__SUB0(00569B10, __cdecl, 12973,  void) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [CUtilDlg::ms_lDialog+12]
	mov dword ptr [esp],eax
	test eax,eax
	je Block3

 Block1:
	lea ecx,[ecx]

 Block2:
	lea eax,[esp]
	push eax
	call ZList<CUtilDlg *>::GetNext
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x34]
	add esp,4
	push 2
	call eax
	cmp dword ptr [esp],0
	jne Block2

 Block3:
	pop ecx
	ret
}
}
// CUIContextMenu::OnDestroy
__SUB_CLASS_THIS0(00569460, __thiscall, 13344,  CUIContextMenu, void) {
__asm {

 Block0:
	test ecx,ecx
	je Block2

 Block1:
	lea eax,[ecx+4]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::ReleaseCaptureWnd
	ret

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	push eax
	call CWndMan::ReleaseCaptureWnd
	ret
}
}
// CUICancelCharacterCouponResults::OnButtonClicked
__SUB_CLASS_THIS(00568C10, __thiscall, 13456,  CUICancelCharacterCouponResults, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x3E8
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block2:
	cmp eax,1
	jne Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block4:
	cmp eax,2
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block6:
	cmp eax,8
	jne Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block8:
	ret 4
}
}
// CUtilDlg::YesNo
_SUB_EXCEPTION_HANDLER(5776B0)
__SUB(005776B0, __cdecl, 12971,  int32_t, NakedParam<ZXString<char>>, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5776B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x20],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block8

 Block1:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	test eax,eax
	je Block8

 Block2:
	add eax,8
	je Block8

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
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x38]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov byte ptr [esp+0x34],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x3E9
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_1
	push 0
	push 1
	push 0
	push 0
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esi+0x9C],ecx
	mov ecx,esi
	call CDialog::DoModal
	push 0
	lea ecx,[esp+0x10]
	mov esi,eax
	mov byte ptr [esp+0x20],0
	call ZRef<CUtilDlg>::_ReleaseRaw
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret

 Block8:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block5
}
}
// CUIGameOpt::SetCtrlFromSysOpt
__SUB_CLASS_THIS0(00568F90, __thiscall, 13221,  CUIGameOpt, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x15C]
	mov ecx,dword ptr [esi+0x9C]
	push eax
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0x160]
	push ecx
	mov ecx,dword ptr [esi+0xA4]
	call CCtrlCheckBox::SetChecked
	mov edx,dword ptr [esi+0x164]
	mov ecx,dword ptr [esi+0xAC]
	push edx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0x168]
	mov ecx,dword ptr [esi+0xB4]
	push eax
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0x16C]
	push ecx
	mov ecx,dword ptr [esi+0xBC]
	call CCtrlCheckBox::SetChecked
	mov edx,dword ptr [esi+0x170]
	mov ecx,dword ptr [esi+0xC4]
	push edx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0x174]
	mov ecx,dword ptr [esi+0xCC]
	push eax
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0x17C]
	push ecx
	mov ecx,dword ptr [esi+0xD4]
	call CCtrlCheckBox::SetChecked
	mov edx,dword ptr [esi+0x180]
	mov ecx,dword ptr [esi+0xDC]
	push edx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0x184]
	mov ecx,dword ptr [esi+0xE4]
	push eax
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0x188]
	push ecx
	mov ecx,dword ptr [esi+0xEC]
	call CCtrlCheckBox::SetChecked
	mov edx,dword ptr [esi+0x18C]
	mov ecx,dword ptr [esi+0xF4]
	push edx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0x1A4]
	mov ecx,dword ptr [esi+0xFC]
	push eax
	call CCtrlCheckBox::SetChecked
	pop esi
	ret
}
}
// CUICashItemGachapon::Update
_SUB_EXCEPTION_HANDLER(579C80)
__SUB_CLASS_THIS0(00579C80, __thiscall, 13568,  CUICashItemGachapon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_579C80
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
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0xBC],ebx
	je Block67

 Block1:
	call get_update_time
	cmp eax,dword ptr [edi+0xEC]
	jle Block67

 Block2:
	cmp dword ptr [edi+0xC8],ebx
	jne Block67

 Block3:
	cmp dword ptr [edi+0xCC],ebx
	je Block5

 Block4:
	mov eax,dword ptr [edi+0xD4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov dword ptr [edi+0xCC],ebx

 Block5:
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call CWnd::GetCanvas
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x7C],ebx
	mov dword ptr [esp+0x28],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x7C],1
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov ecx,dword ptr [edi+0xBC]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x74],2
	call CItemInfo::GetItemName
	mov eax,dword ptr [edi+0xC0]
	cmp eax,1
	mov byte ptr [esp+0x6C],3
	jle Block7

 Block6:
	push offset _S_YOUHAVEGAINEDITE
	lea ecx,[esp+0x1C]
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi+0xC0]
	push eax
	push ecx
	lea edx,[esp+0x1C]
	push offset _S_DS
	push edx
	call ZXString<char>::Format
	add esp,0x10
	jmp Block9

 Block7:
	jne Block9

 Block8:
	push offset _S_YOUHAVEGAINEDANI
	lea ecx,[esp+0x1C]
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x18]
	push offset _S_S__1
	push ecx
	call ZXString<char>::Format
	add esp,0xC

 Block9:
	lea edx,[esp+0x20]
	push 0x37
	push edx
	call get_basic_font
	lea eax,[esp+0x24]
	push 0x3F
	push eax
	mov byte ptr [esp+0x7C],4
	call get_basic_font
	add esp,0x10
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x70],5
	call esi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x70],6
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x70],7
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov eax,dword ptr [esp+0x20]
	mov ebp,dword ptr [esp+0x18]
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x80],8
	call _xbstr_t::_ctor_0
	push 0x71
	lea ecx,[esp+0x48]
	push ecx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	mov bl,9
	push ebp
	mov byte ptr [esp+0x8C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x88],0xA
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov byte ptr [esp+0x88],bl
	call IWzFont::CalcTextWidth
	mov ebp,dword ptr [esp+0x40]
	test ebp,ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov edx,0xAA
	sub edx,eax
	shr edx,1
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x84],8
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x6C],7
	cmp word ptr [esp+0x34],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x6C],6
	cmp word ptr [esp+0x44],bx
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov byte ptr [esp+0x6C],5
	cmp word ptr [esp+0x54],bx
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	lea eax,[esp+0x54]
	push eax
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x54]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0xB
	push eax
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x74],0xC
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov byte ptr [esp+0x74],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x54],8
	mov esi,eax
	mov byte ptr [esp+0x6C],5
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	cmp esi,0xAA
	jl Block44

 Block40:
	push 0x1B
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x1C]
	mov esi,4
	call ZXString<char>::Left
	push offset _S___14
	lea ecx,[esp+0x2C]
	push ecx
	mov bl,0xD
	mov ecx,eax
	mov byte ptr [esp+0x74],bl
	call ZXString<char>::op_add_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x70],0xE
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x6C],bl
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x6C],5
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block45

 Block44:
	mov eax,0xAA
	sub eax,esi
	cdq
	sub eax,edx
	mov esi,eax
	sar esi,1

 Block45:
	cmp dword ptr [edi+0xF0],0
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	je Block47

 Block46:
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x70],0xF
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x58]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x10
	push edx
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x7C],0x11
	jmp Block48

 Block47:
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x70],0x12
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x58]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x13
	push eax
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x7C],0x14

 Block48:
	push 0x83
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0x84],bl
	call IWzCanvas::DrawTextA
	lea ecx,[esp+0x54]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x6C],5
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [edi+0xBC],0
	je Block56

 Block49:
	cmp dword ptr [edi+0xF0],0
	mov esi,0xFF
	mov dword ptr [esp+0x5C],esi
	je Block51

 Block50:
	mov ecx,3
	mov word ptr [esp+0x54],cx
	mov eax,dword ptr [edi+0xFC]
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x6C],0x15
	push edx
	jmp Block52

 Block51:
	mov eax,3
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [edi+0xF8]
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x6C],0x16
	push ecx

 Block52:
	push eax
	push 0x1F
	push 2
	mov ecx,ebp
	call IWzCanvas::Copy
	lea ecx,[esp+0x54]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esp+0x28],0
	mov edx,dword ptr [edi+0xBC]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push 0
	push edx
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x7C],0x17
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov eax,3
	mov word ptr [esp+0x54],ax
	mov dword ptr [esp+0x5C],esi
	mov esi,dword ptr [esp+0x28]
	lea ecx,[esp+0x54]
	push ecx
	push esi
	push 0x3E
	push 0x45
	mov ecx,ebp
	mov byte ptr [esp+0x7C],0x18
	call IWzCanvas::Copy
	lea ecx,[esp+0x54]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [esp+0x6C],5
	test esi,esi
	je Block56

 Block55:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block56:
	mov ecx,dword ptr [edi+0x94]
	call CCashShop::InvalidateLocker
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [edi+0xC8],1
	mov byte ptr [esp+0x6C],4
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],3
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x6C],2
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x6C],1
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],0
	test eax,eax
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call ecx

 Block67:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret
}
}
// CUICashItemGachapon::CUICashItemGachapon
_SUB_EXCEPTION_HANDLER(56A6C0)
__SUB_CLASS_THIS(0056A6C0, __thiscall, 13566,  CUICashItemGachapon, void, _LARGE_INTEGER, CCashShop*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56A6C0
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
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUICashItemGachapon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICashItemGachapon::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICashItemGachapon::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB4],ecx
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0xFC],edi
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0x18],6
	call CUIToolTip::_ctor_default
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x18],7
	cmp eax,0x4FA6B0
	je Block3

 Block1:
	cmp eax,0x4FA6B1
	je Block3

 Block2:
	cmp eax,0x4FA6B2
	jne Block4

 Block3:
	lea edx,[esp+0x2C]
	push 0x1A0C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x18],8
	jmp Block5

 Block4:
	lea eax,[esp+0x2C]
	push 0x1610
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x18],9

 Block5:
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x18],7
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esi+0xE4]
	cmp eax,edi
	je Block12

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov ecx,dword ptr [esi+0xE4]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xE4]
	cmp ecx,edi
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	mov dword ptr [esi+0xE4],edi

 Block12:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA4],0xFFFFFFFE
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0x94],ecx
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0x10
}
}
// CUICashItemGachapon::Draw
_SUB_EXCEPTION_HANDLER(569B40)
__SUB_CLASS_THIS(00569B40, __thiscall, 13571,  CUICashItemGachapon, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_569B40
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
	cmp dword ptr [esi+0xBC],0
	jne Block8

 Block1:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,3
	mov dword ptr [esp+0x24],0
	mov word ptr [esp+0xC],dx
	mov dword ptr [esp+0x14],0xFF
	mov edi,dword ptr [esp+0x2C]
	mov esi,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x24],1
	test edi,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea eax,[esp+0xC]
	push eax
	push esi
	push 0x1F
	push 2
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0xC],8
	mov byte ptr [esp+0x24],0
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x14]
	xor ecx,ecx
	mov word ptr [esp+0xC],cx
	test eax,eax
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea edx,[esp+0xC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ecx

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CUtilDlg::CUtilDlg
__SUB_CLASS_THIS0(003B9B50, __thiscall, 12979,  CUtilDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CDialog::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	int 3// TODO: 	mov dword ptr [esi],offset CUtilDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUtilDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUtilDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],1
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xBC],eax
	mov dword ptr [esi+0xC4],eax
	mov dword ptr [esi+0xCC],eax
	mov dword ptr [esi+0xD4],eax
	mov dword ptr [esi+0xDC],eax
	mov dword ptr [esi+0xE4],eax
	mov dword ptr [esi+0xEC],eax
	mov dword ptr [esi+0xF0],eax
	mov dword ptr [esi+0xF4],eax
	mov eax,esi
	pop esi
	ret
}
}
// CUtilDlg::GetInputResult
__SUB_CLASS_THIS0(003B8260, __thiscall, 12995,  CUtilDlg, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0xC4]
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	mov dword ptr [esp+8],0
	call CCtrlEdit::GetText
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUICashGachapon::ClearToolTip
__SUB_CLASS_THIS0(0056AE20, __thiscall, 13608,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xF8
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIContextMenu::CUIContextMenu
_SUB_EXCEPTION_HANDLER(56D870)
__SUB_CLASS_THIS(0056D870, __thiscall, 13342,  CUIContextMenu, void, NakedParam<ZXString<char>>, NakedParam<tagPOINT>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56D870
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
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	call CDialog::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CUIContextMenu::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIContextMenu::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIContextMenu::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE4],edi
	lea eax,[esp+0x28]
	lea ecx,[esi+0xE8]
	push eax
	mov byte ptr [esp+0x24],0xC
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [esi+0xEC],0xFFFFFFFF
	mov dword ptr [esi+0xF0],6
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x104],ecx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ebx+0x3604]
	mov byte ptr [esp+0x20],0xD
	cmp eax,edi
	je Block2

 Block1:
	mov eax,dword ptr [ebx+0x20B4]
	cmp dword ptr [ebx+0x36B6],eax
	jne Block3

 Block2:
	mov ebp,1
	mov dword ptr [esi+0xF4],ebp
	mov dword ptr [esi+0xF0],7
	jmp Block4

 Block3:
	mov ebp,1

 Block4:
	mov ecx,dword ptr [TSingleton<ExpeditionIntermediary>::ms_pInstance]
	call ExpeditionIntermediary::AmIMaster
	test eax,eax
	je Block6

 Block5:
	add dword ptr [esi+0xF0],ebp
	mov dword ptr [esi+0xF8],ebp

 Block6:
	mov eax,dword ptr [ebx+0x37C8]
	cmp eax,edi
	je Block10

 Block7:
	mov eax,dword ptr [ebx+0x20B4]
	mov edx,dword ptr [ebx+0x37D4]
	cmp dword ptr [edx],eax
	je Block9

 Block8:
	push eax
	mov ecx,ebx
	call CWvsContext::GetGuildMemberGrade
	cmp eax,2
	jne Block10

 Block9:
	add dword ptr [esi+0xF0],ebp
	mov dword ptr [esi+0xFC],ebp

 Block10:
	cmp dword ptr [ebx+0x4124],edi
	je Block13

 Block11:
	mov ax,word ptr [ebx+0x40F8]
	cmp ax,word ptr [ebx+0x40FA]
	jae Block13

 Block12:
	add dword ptr [esi+0xF0],ebp
	mov dword ptr [esi+0x100],ebp

 Block13:
	mov eax,dword ptr [esi+0xF0]
	mov ebx,eax
	shl ebx,4
	sub ebx,eax
	add ebx,0x25
	call get_screen_width
	mov ebp,dword ptr [esp+0x2C]
	lea ecx,[ebp+0x6B]
	cmp ecx,eax
	jle Block15

 Block14:
	call get_screen_width
	mov ebp,eax
	sub ebp,0x6B

 Block15:
	call get_screen_height
	mov ecx,dword ptr [esp+0x30]
	lea edx,[ecx+ebx]
	cmp edx,eax
	jle Block17

 Block16:
	call get_screen_height
	sub eax,ebx
	jmp Block18

 Block17:
	mov eax,ecx

 Block18:
	push edi
	push edi
	push 1
	push 0xA
	push ebx
	push 0x6B
	push eax
	push ebp
	mov ecx,esi
	call CDialog::CreateDlg_0
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,edi
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CUIBlockUser::~CUIBlockUser
_SUB_EXCEPTION_HANDLER(56F190)
__SUB_CLASS_THIS0(0056F190, __thiscall, 13401,  CUIBlockUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56F190
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIBlockUser::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIBlockUser::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIBlockUser::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xCC]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xC4]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xAC]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIBlockUser>::ms_pInstance],ebx
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
// CUtilDlg::YesNo
_SUB_EXCEPTION_HANDLER(5773B0)
__SUB(005773B0, __cdecl, 12969,  int32_t, NakedParam<ZXString<char>>, const wchar_t*, ZRef<CDialog>*, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5773B0
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
	xor ebx,ebx
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x24],1
	cmp eax,ebx
	je Block12

 Block1:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	cmp eax,ebx
	je Block12

 Block2:
	add eax,8
	cmp eax,ebx
	je Block12

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esp+0x34]
	mov byte ptr [esp+0x24],2
	cmp edi,ebx
	je Block14

 Block6:
	cmp dword ptr [edi+4],ebx
	je Block13

 Block7:
	mov byte ptr [esp+0x24],bl
	cmp esi,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlg>::_ReleaseRaw

 Block9:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,3
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block12:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block5

 Block13:
	push esi
	mov ecx,edi
	call ZRef<CDialog>::op_assign_ptr

 Block14:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x30]
	push ebx
	push ecx
	push edx
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x48],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push 0x3E9
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_1
	push ebx
	push 1
	push ebx
	push ebx
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov ecx,esi
	call CDialog::DoModal
	mov ebp,eax
	cmp edi,ebx
	je Block18

 Block15:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	jne Block18

 Block16:
	cmp eax,ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	mov byte ptr [esp+0x24],bl
	cmp esi,ebx
	je Block20

 Block19:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlg>::_ReleaseRaw

 Block20:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,ebp
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
// CUIGameOpt::SetRet
__SUB_CLASS_THIS(005697A0, __thiscall, 13224,  CUIGameOpt, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov esi,ecx
	call CUIGameOpt::GetSysOptFromCtrl
	mov ebx,dword ptr [esp+0x10]
	mov eax,ebx
	sub eax,1
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	lea eax,[esi+0x110]
	push eax
	mov ecx,edi
	call CConfig::ApplyGameOpt
	jmp Block4

 Block3:
	lea ecx,[esi+0x15C]
	push ecx
	mov ecx,edi
	call CConfig::ApplyGameOpt
	mov ecx,edi
	call CConfig::SaveCharacter

 Block4:
	cmp dword ptr [esi+0x84],0
	jne Block7

 Block5:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],ebx
	mov dword ptr [esi+0x84],1
	je Block7

 Block6:
	mov ecx,esi
	call CWnd::Destroy

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUIArtSpeakerSample::HitTest
__SUB_CLASS_THIS(00568E50, __thiscall, 13498,  CUIArtSpeakerSample, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	jmp  CWnd::HitTest
}
}
// CUIRandomMesoBag::Draw
_SUB_EXCEPTION_HANDLER(5736A0)
__SUB_CLASS_THIS(005736A0, __thiscall, 13629,  CUIRandomMesoBag, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5736A0
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x70]
	push eax
	call CWnd::Draw
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	call ebp
	lea edx,[esp+0x20]
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
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+0x9C]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov dword ptr [esp+0x74],0
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x78]
	push 0x38
	push ecx
	mov byte ptr [esp+0x78],1
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],2
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x70],3
	call IWzFont::CalcTextWidth
	mov edi,0xC8
	sub edi,eax
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block6:
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x68],0xFFFFFFFF
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea eax,[esp+0x30]
	push eax
	call ebp
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x6C],4
	call ebp
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x1C]
	push 0x38
	push eax
	mov byte ptr [esp+0x78],5
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0x9C]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,6
	push eax
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x80]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x7C],7
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x78],8
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	push 0x22
	add edi,0xFFFFFFFB
	push edi
	mov byte ptr [esp+0x80],9
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],5
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ebx,8
	mov byte ptr [esp+0x68],4
	cmp word ptr [esp+0x20],bx
	jne Block27

 Block21:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block23:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block24:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp word ptr [esp+0x30],bx
	jne Block28

 Block25:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block29

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block27:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x20]
	push ecx
	call edi
	jmp Block24

 Block28:
	lea eax,[esp+0x30]
	push eax
	call edi

 Block29:
	lea ecx,[esp+0x50]
	push ecx
	call ebp
	lea edx,[esp+0x50]
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
	lea eax,[esp+0x40]
	push eax
	mov dword ptr [esp+0x6C],0xA
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x24]
	push 0x37
	push ecx
	mov byte ptr [esp+0x78],0xB
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0x98]
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	mov bl,0xC
	push eax
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x7C],0xD
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x78],0xE
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	push 0x10
	push 0x4E
	mov byte ptr [esp+0x80],0xF
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],0xB
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov esi,8
	mov byte ptr [esp+0x68],0xA
	cmp word ptr [esp+0x40],si
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block43:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp word ptr [esp+0x50],si
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x50]
	push eax
	call edi

 Block47:
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
// CUIBlockUser::OnKey
__SUB_CLASS_THIS(00578D10, __thiscall, 13405,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	jns Block2

 Block1:
	push edi
	push ebx
	call CDialog::OnKey

 Block2:
	cmp ebx,0xD
	jne Block4

 Block3:
	lea ecx,[esi-4]
	call CUIBlockUser::SetResult

 Block4:
	push edi
	push ebx
	mov ecx,esi
	call CDialog::OnKey
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUISysOpt::OnCreate
_SUB_EXCEPTION_HANDLER(578010)
__SUB_CLASS_THIS(00578010, __thiscall, 13242,  CUISysOpt, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_578010
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB8]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea esi,[ebp+0x188]
	push ebp
	mov ecx,esi
	call CLayoutMan::Init
	push ebx
	push ebx
	push ebx
	push 1
	push offset _S_UIUIWINDOW2IMGSY__1
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebx
	je Block2

 Block1:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push ebx
	push ebx
	push ebx
	push 2
	push offset _S_UIUIWINDOW2IMGSY
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebx
	je Block4

 Block3:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	lea ecx,[esp+0x28]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	push offset _S_
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0xC4],ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x48],0x96
	mov dword ptr [esp+0x4C],0xF
	call ZXString<char>::AssignCStr
	push 0x64
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x28],0xFFFFFF
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],1
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,eax
	call CCtrlSlider::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block15

 Block8:
	add eax,8
	cmp eax,ebx
	je Block15

 Block9:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block11

 Block10:
	lea edx,[esi+0xC]
	push edx
	call edi

 Block11:
	mov eax,dword ptr [ebp+0x94]
	mov dword ptr [ebp+0x94],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block13

 Block12:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlSlider>::_ReleaseRaw

 Block13:
	mov ecx,dword ptr [ebp+0x94]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x20]
	push edx
	push 0x8C
	push 0x20
	push 0x5F
	push 0x3E8
	push ebp
	call eax
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],2
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block17

 Block15:
	xor esi,esi
	jmp Block11

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block25

 Block18:
	add eax,8
	cmp eax,ebx
	je Block25

 Block19:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block21

 Block20:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block21:
	mov eax,dword ptr [ebp+0xEC]
	mov dword ptr [ebp+0xEC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [ebp+0xEC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x3C
	push 0x41
	push 0x3F2
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],3
	cmp eax,ebx
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block27

 Block25:
	xor esi,esi
	jmp Block21

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block35

 Block28:
	add eax,8
	cmp eax,ebx
	je Block35

 Block29:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block31

 Block30:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block31:
	mov eax,dword ptr [ebp+0xF4]
	mov dword ptr [ebp+0xF4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block33

 Block32:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [ebp+0xF4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x3C
	push 0xA5
	push 0x3F3
	push ebp
	call edx
	push 0x64
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],4
	cmp eax,ebx
	je Block36

 Block34:
	mov ecx,eax
	call CCtrlSlider::_ctor_default
	jmp Block37

 Block35:
	xor esi,esi
	jmp Block31

 Block36:
	xor eax,eax

 Block37:
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block45

 Block38:
	add eax,8
	cmp eax,ebx
	je Block45

 Block39:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block41

 Block40:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block41:
	mov eax,dword ptr [ebp+0x9C]
	mov dword ptr [ebp+0x9C],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block43

 Block42:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlSlider>::_ReleaseRaw

 Block43:
	mov ecx,dword ptr [ebp+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x60
	push 0x5B
	push 0x5F
	push 0x3E9
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],5
	cmp eax,ebx
	je Block46

 Block44:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block47

 Block45:
	xor esi,esi
	jmp Block41

 Block46:
	xor eax,eax

 Block47:
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block55

 Block48:
	add eax,8
	cmp eax,ebx
	je Block55

 Block49:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block51

 Block50:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block51:
	mov eax,dword ptr [ebp+0xA4]
	mov dword ptr [ebp+0xA4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block53

 Block52:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block53:
	mov ecx,dword ptr [ebp+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x5A
	push 0xDF
	push 0x3EA
	push ebp
	call edx
	push 0x64
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],6
	cmp eax,ebx
	je Block56

 Block54:
	mov ecx,eax
	call CCtrlSlider::_ctor_default
	jmp Block57

 Block55:
	xor esi,esi
	jmp Block51

 Block56:
	xor eax,eax

 Block57:
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block65

 Block58:
	add eax,8
	cmp eax,ebx
	je Block65

 Block59:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block61

 Block60:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block61:
	mov eax,dword ptr [ebp+0xAC]
	mov dword ptr [ebp+0xAC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block63

 Block62:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlSlider>::_ReleaseRaw

 Block63:
	mov ecx,dword ptr [ebp+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x60
	push 0x79
	push 0x5F
	push 0x3EB
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],7
	cmp eax,ebx
	je Block66

 Block64:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block67

 Block65:
	xor esi,esi
	jmp Block61

 Block66:
	xor eax,eax

 Block67:
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebx
	je Block75

 Block68:
	add eax,8
	cmp eax,ebx
	je Block75

 Block69:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block71

 Block70:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block71:
	mov eax,dword ptr [ebp+0xB4]
	mov dword ptr [ebp+0xB4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block73

 Block72:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block73:
	mov ecx,dword ptr [ebp+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x78
	push 0xDF
	push 0x3EC
	push ebp
	call edx
	lea ecx,[esp+0x5C]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xC4],8
	mov dword ptr [esp+0x60],0xFFEEEEEE
	mov dword ptr [esp+0x64],0xFFA5A198
	mov dword ptr [esp+0x68],0xFF999999
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],9
	cmp eax,ebx
	je Block76

 Block74:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block77

 Block75:
	xor esi,esi
	jmp Block71

 Block76:
	xor eax,eax

 Block77:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block85

 Block78:
	add eax,8
	cmp eax,ebx
	je Block85

 Block79:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block81

 Block80:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block81:
	mov eax,dword ptr [ebp+0xC4]
	mov dword ptr [ebp+0xC4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block83

 Block82:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block83:
	mov ecx,dword ptr [ebp+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	push 0x12
	push 0xAE
	push 0x94
	push 0x42
	push ebx
	push 0x3ED
	push ebp
	call edx
	push 0x64
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0xA
	cmp eax,ebx
	je Block86

 Block84:
	mov ecx,eax
	call CCtrlSlider::_ctor_default
	jmp Block87

 Block85:
	xor esi,esi
	jmp Block81

 Block86:
	xor eax,eax

 Block87:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block95

 Block88:
	add eax,8
	cmp eax,ebx
	je Block95

 Block89:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block91

 Block90:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block91:
	mov eax,dword ptr [ebp+0xCC]
	mov dword ptr [ebp+0xCC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block93

 Block92:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlSlider>::_ReleaseRaw

 Block93:
	mov ecx,dword ptr [ebp+0xCC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x8C
	push 0xB5
	push 0x5F
	push 0x3EE
	push ebp
	call edx
	push 0x64
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0xB
	cmp eax,ebx
	je Block96

 Block94:
	mov ecx,eax
	call CCtrlSlider::_ctor_default
	jmp Block97

 Block95:
	xor esi,esi
	jmp Block91

 Block96:
	xor eax,eax

 Block97:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block105

 Block98:
	add eax,8
	cmp eax,ebx
	je Block105

 Block99:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block101

 Block100:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block101:
	mov eax,dword ptr [ebp+0xD4]
	mov dword ptr [ebp+0xD4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block103

 Block102:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlSlider>::_ReleaseRaw

 Block103:
	mov ecx,dword ptr [ebp+0xD4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x8C
	push 0xD3
	push 0x5F
	push 0x3EF
	push ebp
	call edx
	push 0x64
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0xC
	cmp eax,ebx
	je Block106

 Block104:
	mov ecx,eax
	call CCtrlSlider::_ctor_default
	jmp Block107

 Block105:
	xor esi,esi
	jmp Block101

 Block106:
	xor eax,eax

 Block107:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block115

 Block108:
	add eax,8
	cmp eax,ebx
	je Block115

 Block109:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block111

 Block110:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block111:
	mov eax,dword ptr [ebp+0xDC]
	mov dword ptr [ebp+0xDC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block113

 Block112:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlSlider>::_ReleaseRaw

 Block113:
	mov ecx,dword ptr [ebp+0xDC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x8C
	push 0xF1
	push 0x5F
	push 0x3F0
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0xD
	cmp eax,ebx
	je Block116

 Block114:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block117

 Block115:
	xor esi,esi
	jmp Block111

 Block116:
	xor eax,eax

 Block117:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block125

 Block118:
	add eax,8
	cmp eax,ebx
	je Block125

 Block119:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block121

 Block120:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block121:
	mov eax,dword ptr [ebp+0xBC]
	mov dword ptr [ebp+0xBC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block123

 Block122:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block123:
	mov ecx,dword ptr [ebp+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x10F
	push 0x41
	push 0x3F1
	push ebp
	call edx
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0xE
	cmp eax,ebx
	je Block126

 Block124:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block127

 Block125:
	xor esi,esi
	jmp Block121

 Block126:
	xor eax,eax

 Block127:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block135

 Block128:
	add eax,8
	cmp eax,ebx
	je Block135

 Block129:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block131

 Block130:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block131:
	mov eax,dword ptr [ebp+0xE4]
	mov dword ptr [ebp+0xE4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block133

 Block132:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block133:
	mov ecx,dword ptr [ebp+0xE4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	push 0x12
	push 0xAE
	push 0x12A
	push 0x42
	push ebx
	push 0x3F4
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0xF
	cmp eax,ebx
	je Block136

 Block134:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block137

 Block135:
	xor esi,esi
	jmp Block131

 Block136:
	xor eax,eax

 Block137:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block145

 Block138:
	add eax,8
	cmp eax,ebx
	je Block145

 Block139:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block141

 Block140:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block141:
	mov eax,dword ptr [ebp+0x104]
	mov dword ptr [ebp+0x104],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block143

 Block142:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block143:
	mov ecx,dword ptr [ebp+0x104]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x144
	push 0x41
	push 0x3F6
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x10
	cmp eax,ebx
	je Block146

 Block144:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block147

 Block145:
	xor esi,esi
	jmp Block141

 Block146:
	xor eax,eax

 Block147:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block155

 Block148:
	add eax,8
	cmp eax,ebx
	je Block155

 Block149:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block151

 Block150:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block151:
	mov eax,dword ptr [ebp+0xFC]
	mov dword ptr [ebp+0xFC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block153

 Block152:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block153:
	mov ecx,dword ptr [ebp+0xFC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x150
	push 0x41
	push 0x3F5
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x11
	cmp eax,ebx
	je Block156

 Block154:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block157

 Block155:
	xor esi,esi
	jmp Block151

 Block156:
	xor eax,eax

 Block157:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block165

 Block158:
	add eax,8
	cmp eax,ebx
	je Block165

 Block159:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block161

 Block160:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block161:
	mov eax,dword ptr [ebp+0x10C]
	mov dword ptr [ebp+0x10C],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block163

 Block162:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block163:
	mov ecx,dword ptr [ebp+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x169
	push 0x41
	push 0x3F7
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x12
	cmp eax,ebx
	je Block166

 Block164:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block167

 Block165:
	xor esi,esi
	jmp Block161

 Block166:
	xor eax,eax

 Block167:
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block192

 Block168:
	add eax,8
	cmp eax,ebx
	je Block192

 Block169:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block171

 Block170:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block171:
	mov eax,dword ptr [ebp+0x114]
	mov dword ptr [ebp+0x114],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block173

 Block172:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block173:
	mov ecx,dword ptr [ebp+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 0x169
	push 0x93
	push 0x3F8
	push ebp
	call edx
	lea eax,[esp+0x14]
	push 0x33F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0xC4]
	push ebx
	push eax
	mov byte ptr [esp+0xC8],0x13
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block175

 Block174:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block175:
	lea ecx,[esp+0x14]
	push 0x340
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0xC4]
	push 1
	push eax
	mov byte ptr [esp+0xC8],0x14
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block177

 Block176:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block177:
	mov ecx,dword ptr [ebp+0xC4]
	push 2
	push offset _S_C
	call CCtrlComboBox::AddItem
	lea edx,[esp+0x14]
	push 0x1084
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0xE4]
	push ebx
	push eax
	mov byte ptr [esp+0xC8],0x15
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block179:
	lea eax,[esp+0x14]
	push 0x1085
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0xE4]
	push 1
	push eax
	mov byte ptr [esp+0xC8],0x16
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block181

 Block180:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block181:
	lea ecx,[esp+0x14]
	push 0x1086
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0xE4]
	push 2
	push eax
	mov byte ptr [esp+0xC8],0x17
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block183

 Block182:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block183:
	lea edx,[esp+0x14]
	push 0x1087
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0xE4]
	push 3
	push eax
	mov byte ptr [esp+0xC8],0x18
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],8
	cmp eax,ebx
	je Block185

 Block184:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block185:
	mov eax,dword ptr [ebp+0x94]
	push eax
	mov ecx,ebp
	call CWnd::SetFocusChild
	mov ecx,dword ptr [ebp+0x94]
	push 4
	call CCtrlSlider::SetSliderRange
	mov ecx,dword ptr [ebp+0x9C]
	push 0x14
	call CCtrlSlider::SetSliderRange
	mov ecx,dword ptr [ebp+0xAC]
	push 0x14
	call CCtrlSlider::SetSliderRange
	mov ecx,dword ptr [ebp+0xCC]
	push 0x14
	call CCtrlSlider::SetSliderRange
	mov ecx,dword ptr [ebp+0xD4]
	push 0x14
	call CCtrlSlider::SetSliderRange
	mov ecx,dword ptr [ebp+0xDC]
	push 0x14
	call CCtrlSlider::SetSliderRange
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	add eax,0x6C
	mov esi,eax
	lea edi,[ebp+0x118]
	mov ecx,0xE
	rep movsd
	mov esi,eax
	lea edi,[ebp+0x150]
	mov ecx,0xE
	rep movsd
	mov ecx,ebp
	call CUISysOpt::SetCtrlFromSysOpt
	mov ecx,dword ptr [esp+0xA8]
	cmp ecx,ebx
	je Block187

 Block186:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA8],ebx

 Block187:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	cmp ecx,ebx
	je Block189

 Block188:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x34],ebx

 Block189:
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block191

 Block190:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block191:
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block192:
	xor esi,esi
	jmp Block171
}
}
// CUIBlockUser::Draw
_SUB_EXCEPTION_HANDLER(56FF40)
__SUB_CLASS_THIS(0056FF40, __thiscall, 13403,  CUIBlockUser, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56FF40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [ebp+8]
	push eax
	call CWnd::Draw
	lea ecx,[edi+0x94]
	push ecx
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call ZXString<char>::op_assign
	push 0x5F
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x18],esp
	push 1
	push edx
	mov dword ptr [ebp-4],0
	call get_basic_font
	lea eax,[ebp-0x14]
	add esp,8
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x2C]
	push ecx
	call esi
	lea edx,[ebp-0x2C]
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
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],1
	call esi
	lea ecx,[ebp-0x3C]
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
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],2
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x18]
	push 1
	push edx
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp-0x14]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],4
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	push 0x21
	push 0x69
	mov byte ptr [ebp-4],6
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x3C],si
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp-0x3C]
	push ecx
	call edi

 Block14:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp-0x2C],si
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[ebp-0x2C]
	push eax
	call edi

 Block18:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea esp,[ebp-0x4C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUIChannelShift::HitTest
__SUB_CLASS_THIS(00568980, __thiscall, 13324,  CUIChannelShift, int32_t, long, long, CCtrlWnd**) {
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
	cmp edi,0x18
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIGameOpt::CUIGameOpt
_SUB_EXCEPTION_HANDLER(56BB00)
__SUB_CLASS_THIS0(0056BB00, __thiscall, 13219,  CUIGameOpt, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56BB00
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIGameOpt::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGameOpt::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGameOpt::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1AC],edi
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esi+0x1B4],edi
	mov dword ptr [esi+0x1B8],edi
	lea eax,[esp+0xC]
	push 0x19B0
	push eax
	mov byte ptr [esp+0x24],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 1
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],0x12
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],0x11
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
// CUIContextMenu::OnMouseButton
__SUB_CLASS_THIS(00568AA0, __thiscall, 13346,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x201
	je Block4

 Block1:
	cmp eax,0x202
	je Block4

 Block2:
	cmp eax,0x204
	je Block4

 Block3:
	cmp eax,0x205
	jne Block7

 Block4:
	mov eax,dword ptr [ecx-4]
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [eax+0x24]
	push esi
	lea esi,[ecx-4]
	mov ecx,dword ptr [esp+0x14]
	push 0
	push ecx
	push edx
	mov ecx,esi
	call eax
	test eax,eax
	jne Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 2
	mov ecx,esi
	call eax

 Block6:
	pop esi

 Block7:
	ret 0x10
}
}
// CUIBlockUser::CUIBlockUser
_SUB_EXCEPTION_HANDLER(56F040)
__SUB_CLASS_THIS(0056F040, __thiscall, 13399,  CUIBlockUser, void, NakedParam<ZXString<char>>, unsigned long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56F040
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
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	call CDialog::_ctor_default
	lea eax,[esi+0x91]
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF6F
	mov dword ptr [TSingleton<CUIBlockUser>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIBlockUser>::ms_pInstance],edi

 Block3:
	lea eax,[esp+0x20]
	lea ecx,[esi+0x94]
	int 3// TODO: 	mov dword ptr [esi],offset CUIBlockUser::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIBlockUser::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIBlockUser::`vftable'{for `ZRefCounted'}
	push eax
	mov byte ptr [esp+0x1C],2
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x98],ecx
	mov dword ptr [esi+0x9C],edx
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xD0],edi
	lea eax,[esp+0x24]
	push 0xBEE
	push eax
	mov byte ptr [esp+0x20],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x28],0xB
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x18],0xA
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CUtilDlg::Notice
_SUB_EXCEPTION_HANDLER(577220)
__SUB(00577220, __cdecl, 12969,  int32_t, NakedParam<ZXString<char>>, const wchar_t*, ZRef<CDialog>*, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_577220
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
	xor ebx,ebx
	push 0xF8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x24],1
	cmp eax,ebx
	je Block12

 Block1:
	mov ecx,eax
	call CUtilDlg::_ctor_default
	cmp eax,ebx
	je Block12

 Block2:
	add eax,8
	cmp eax,ebx
	je Block12

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esp+0x34]
	mov byte ptr [esp+0x24],2
	cmp edi,ebx
	je Block14

 Block6:
	cmp dword ptr [edi+4],ebx
	je Block13

 Block7:
	mov byte ptr [esp+0x24],bl
	cmp esi,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlg>::_ReleaseRaw

 Block9:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,3
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block12:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block5

 Block13:
	push esi
	mov ecx,edi
	call ZRef<CDialog>::op_assign_ptr
	jmp Block15

 Block14:
	mov ecx,offset CUtilDlg::ms_lDialog
	call ZList<CUtilDlg *>::AddTail_
	mov dword ptr [eax],esi

 Block15:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x30]
	push ecx
	push ebx
	push edx
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x48],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push 0x3E8
	mov ecx,esi
	call CUtilDlg::SetUtilDlg_1
	push ebx
	push 1
	push ebx
	push ebx
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov ecx,esi
	call CDialog::DoModal
	mov ebp,eax
	cmp edi,ebx
	je Block19

 Block16:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	jne Block19

 Block17:
	cmp eax,ebx
	je Block19

 Block18:
	push ebx
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block19:
	mov byte ptr [esp+0x24],bl
	cmp esi,ebx
	je Block21

 Block20:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlg>::_ReleaseRaw

 Block21:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,ebp
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
// CUICashItemGachapon::~CUICashItemGachapon
_SUB_EXCEPTION_HANDLER(56A8D0)
__SUB_CLASS_THIS0(0056A8D0, __thiscall, 13568,  CUICashItemGachapon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56A8D0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUICashItemGachapon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICashItemGachapon::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICashItemGachapon::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x108]
	mov dword ptr [esp+0x1C],6
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xFC]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xE4]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block11

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov eax,dword ptr [esi+0xE4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xE4]
	cmp ecx,ebx
	je Block10

 Block9:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block10:
	mov dword ptr [esi+0xE4],ebx

 Block11:
	lea edi,[esi+0xD8]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block13

 Block12:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block13:
	lea edi,[esi+0xD0]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block15

 Block14:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block15:
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
// CUICancelCharacterCouponResults::OnKey
__SUB_CLASS_THIS(00568BD0, __thiscall, 13457,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	jns Block2

 Block1:
	push edi
	push ebx
	call CDialog::OnKey

 Block2:
	cmp ebx,0xD
	je Block4

 Block3:
	cmp ebx,0x1B
	jne Block5

 Block4:
	mov eax,dword ptr [esi-4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi-4]
	push 2
	call edx

 Block5:
	push edi
	push ebx
	mov ecx,esi
	call CDialog::OnKey
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUICancelCharacterCouponResults::CUICancelCharacterCouponResults
_SUB_EXCEPTION_HANDLER(56A4D0)
__SUB_CLASS_THIS(0056A4D0, __thiscall, 13451,  CUICancelCharacterCouponResults, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56A4D0
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
	call CDialog::_ctor_default
	mov eax,dword ptr [esp+0x20]
	int 3// TODO: 	mov dword ptr [esi],offset CUICancelCharacterCouponResults::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICancelCharacterCouponResults::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICancelCharacterCouponResults::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esp+0x18],0
	mov dword ptr [esi+0x98],0
	mov eax,dword ptr [esi+0x90]
	mov ebx,1
	mov byte ptr [esp+0x18],bl
	test eax,eax
	jne Block2

 Block1:
	lea ecx,[esp+0x20]
	push 0x12EE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x18],2
	jmp Block8

 Block2:
	cmp eax,ebx
	jne Block4

 Block3:
	lea edx,[esp+0x20]
	push 0x12EF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x18],3
	jmp Block8

 Block4:
	cmp eax,2
	jne Block6

 Block5:
	lea eax,[esp+0x20]
	push 0x12F3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x18],4
	jmp Block8

 Block6:
	cmp eax,3
	jne Block10

 Block7:
	lea ecx,[esp+0x20]
	push 0x12F4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x18],5

 Block8:
	mov eax,dword ptr [eax]
	push 0
	push 0
	push ebx
	push eax
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],bl
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CUIGachaponBox::OnButtonClicked
__SUB_CLASS_THIS(00568CD0, __thiscall, 13476,  CUIGachaponBox, void, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x3E8
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block4:
	cmp edx,1
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block6:
	cmp edx,2
	jne Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block8:
	cmp edx,8
	jne Block10

 Block9:
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+4],edx
	mov edx,dword ptr [eax+0x34]
	jmp edx

 Block10:
	ret 4
}
}
// CUIRandomMesoBag::CUIRandomMesoBag
_SUB_EXCEPTION_HANDLER(57A830)
__SUB_CLASS_THIS(0057A830, __thiscall, 13625,  CUIRandomMesoBag, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57A830
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
	mov dword ptr [esp+0x40],esi
	call CDialog::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CUIRandomMesoBag::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRandomMesoBag::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRandomMesoBag::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x4C],0
	mov dword ptr [esi+0x94],0
	lea edi,[esi+0x98]
	mov dword ptr [edi],0
	mov dword ptr [esi+0x9C],0
	mov eax,dword ptr [esp+0x54]
	sub eax,2
	mov bl,3
	mov byte ptr [esp+0x4C],bl
	je Block18

 Block1:
	sub eax,1
	je Block13

 Block2:
	sub eax,1
	je Block8

 Block3:
	lea eax,[esp+0x10]
	push 0x17A9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x5C],0xD
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	lea ecx,[esp+0x14]
	push 0x17AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x50],0xE
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	lea edx,[esp+0x18]
	push 0x17B6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push eax
	mov byte ptr [esp+0x58],0xF
	call CSoundMan::PlaySE
	mov eax,dword ptr [esp+0x18]
	jmp Block23

 Block8:
	lea eax,[esp+0x1C]
	push 0x17AC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x5C],4
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	lea ecx,[esp+0x20]
	push 0x17B2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x50],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	lea edx,[esp+0x24]
	push 0x17B9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push eax
	mov byte ptr [esp+0x58],6
	call CSoundMan::PlaySE
	mov eax,dword ptr [esp+0x24]
	jmp Block23

 Block13:
	lea eax,[esp+0x28]
	push 0x17AB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x5C],7
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	lea ecx,[esp+0x2C]
	push 0x17B1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x50],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	lea edx,[esp+0x30]
	push 0x17B8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push eax
	mov byte ptr [esp+0x58],9
	call CSoundMan::PlaySE
	mov eax,dword ptr [esp+0x30]
	jmp Block23

 Block18:
	lea eax,[esp+0x34]
	push 0x17AA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x5C],0xA
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	lea ecx,[esp+0x38]
	push 0x17B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x50],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	lea edx,[esp+0x3C]
	push 0x17B7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push eax
	mov byte ptr [esp+0x58],0xC
	call CSoundMan::PlaySE
	mov eax,dword ptr [esp+0x3C]

 Block23:
	mov byte ptr [esp+0x4C],bl
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x58]
	push 1
	mov dword ptr [esi+0xA0],eax
	push ecx
	lea eax,[esi+0x9C]
	push eax
	call format_integer
	add esp,0xC
	mov eax,esi
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x40
	ret 8
}
}
// CUISysOpt::GetSysOptFromCtrl
__SUB_CLASS_THIS0(005692A0, __thiscall, 13241,  CUISysOpt, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x94]
	mov edx,dword ptr [eax+0x34]
	mov eax,dword ptr [ecx+0x9C]
	mov dword ptr [ecx+0x150],edx
	mov edx,dword ptr [eax+0x34]
	mov eax,dword ptr [ecx+0xA4]
	mov dword ptr [ecx+0x154],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xAC]
	mov dword ptr [ecx+0x158],edx
	mov edx,dword ptr [eax+0x34]
	mov eax,dword ptr [ecx+0xB4]
	mov dword ptr [ecx+0x15C],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xC4]
	mov dword ptr [ecx+0x160],edx
	mov edx,dword ptr [eax+0x68]
	mov eax,dword ptr [ecx+0xCC]
	mov dword ptr [ecx+0x164],edx
	mov edx,dword ptr [eax+0x34]
	mov eax,dword ptr [ecx+0xD4]
	mov dword ptr [ecx+0x168],edx
	mov edx,dword ptr [eax+0x34]
	mov eax,dword ptr [ecx+0xDC]
	mov dword ptr [ecx+0x16C],edx
	mov edx,dword ptr [eax+0x34]
	mov eax,dword ptr [ecx+0xBC]
	mov dword ptr [ecx+0x170],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0xE4]
	mov dword ptr [ecx+0x174],edx
	mov edx,dword ptr [eax+0x68]
	mov eax,dword ptr [ecx+0xF4]
	mov dword ptr [ecx+0x178],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0x104]
	mov dword ptr [ecx+0x17C],edx
	mov edx,dword ptr [eax+0x48]
	mov eax,dword ptr [ecx+0x10C]
	mov dword ptr [ecx+0x180],edx
	mov edx,dword ptr [eax+0x48]
	mov dword ptr [ecx+0x184],edx
	ret
}
}
// CUIBlockUser::OnCreate
_SUB_EXCEPTION_HANDLER(56F300)
__SUB_CLASS_THIS(0056F300, __thiscall, 13402,  CUIBlockUser, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56F300
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x5C],ebx
	xor edi,edi
	mov dword ptr [ebp+0x48],edi
	mov dword ptr [ebp+0x3C],1
	mov dword ptr [ebp+0x40],edi
	mov dword ptr [ebp+0x44],edi
	lea eax,[ebp+0x60]
	push 0x512
	push eax
	mov dword ptr [ebp-4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],1
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0
	cmp eax,edi
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
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],2
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block15

 Block6:
	add eax,8
	cmp eax,edi
	je Block15

 Block7:
	lea esi,[eax-8]
	cmp esi,edi
	je Block9

 Block8:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [ebx+0xA8]
	mov dword ptr [ebx+0xA8],esi
	mov dword ptr [ebp+0x68],eax
	cmp eax,edi
	je Block11

 Block10:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [ebx+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x3C]
	push eax
	push edi
	push 0x84
	push 0x6B
	push 0x3E8
	push ebx
	call edx
	lea eax,[ebp+0x60]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],3
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0
	cmp eax,edi
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
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],4
	cmp eax,edi
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor esi,esi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block27

 Block18:
	add eax,8
	cmp eax,edi
	je Block27

 Block19:
	lea esi,[eax-8]
	cmp esi,edi
	je Block21

 Block20:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov eax,dword ptr [ebx+0xB0]
	mov dword ptr [ebx+0xB0],esi
	mov dword ptr [ebp+0x68],eax
	cmp eax,edi
	je Block23

 Block22:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [ebx+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x3C]
	push eax
	push edi
	push 0x84
	push 0x9C
	push 0x3E9
	push ebx
	call edx
	lea eax,[ebp+0x60]
	push 0x1A71
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],5
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0
	cmp eax,edi
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
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],6
	cmp eax,edi
	je Block28

 Block26:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block29

 Block27:
	xor esi,esi
	jmp Block21

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block37

 Block30:
	add eax,8
	cmp eax,edi
	je Block37

 Block31:
	lea esi,[eax-8]
	cmp esi,edi
	je Block33

 Block32:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	mov eax,dword ptr [ebx+0xB8]
	mov dword ptr [ebx+0xB8],esi
	mov dword ptr [ebp+0x68],eax
	cmp eax,edi
	je Block35

 Block34:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [ebx+0xB8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x3C]
	push eax
	push edi
	push 6
	push 0xBE
	push 0x3EA
	push ebx
	call edx
	lea ecx,[ebp-0xCC]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	mov eax,0x4C
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp-0xCC],0xFFEEEEEE
	mov dword ptr [ebp-0xC8],0xFFA5A198
	mov dword ptr [ebp-0xC4],0xFF999999
	mov dword ptr [ebp-0xA0],eax
	mov dword ptr [ebp-0x9C],eax
	mov dword ptr [ebp-0x98],eax
	mov dword ptr [ebp-0x94],eax
	mov dword ptr [ebp-0x7C],0xFFFFFFFE
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],8
	cmp eax,edi
	je Block38

 Block36:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block39

 Block37:
	xor esi,esi
	jmp Block33

 Block38:
	xor eax,eax

 Block39:
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block47

 Block40:
	add eax,8
	cmp eax,edi
	je Block47

 Block41:
	lea esi,[eax-8]
	cmp esi,edi
	je Block43

 Block42:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block43:
	mov eax,dword ptr [ebx+0xD0]
	mov dword ptr [ebx+0xD0],esi
	mov dword ptr [ebp+0x68],eax
	cmp eax,edi
	je Block45

 Block44:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block45:
	mov ecx,dword ptr [ebx+0xD0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0xCC]
	push eax
	push 0x11
	push 0x64
	push 0x44
	push 0x67
	push edi
	push 0x3EB
	push ebx
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block48

 Block46:
	push eax
	call _com_issue_error

 Block47:
	xor esi,esi
	jmp Block43

 Block48:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],9
	call esi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	push edi
	push edi
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0xB42
	push eax
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xB
	cmp dword ptr [_D_G_RM],edi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block55

 Block53:
	cmp eax,0x80004002
	je Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	cmp word ptr [ebp-0x68],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],0xE
	jne Block58

 Block56:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	cmp eax,edi
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[ebp-0x68]
	push eax
	call ebx

 Block59:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0xF
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	cmp eax,edi
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp+0x20]
	push edx
	call ebx

 Block63:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x10
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp]
	push ecx
	call ebx

 Block67:
	lea edx,[ebp+0x10]
	push edx
	mov dword ptr [ebp+0x4C],edi
	call esi
	mov esi,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x11
	cmp esi,edi
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[ebp+0x34]
	push eax
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x12
	mov dword ptr [ebp+0x58],edi
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block71:
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block74

 Block72:
	cmp eax,0x80004002
	je Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x14
	cmp eax,edi
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x38],edi
	cmp eax,edi
	je Block51

 Block77:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x38]
	push edx
	lea edx,[ebp+0x10]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block116

 Block78:
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x60]
	push edx
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [ebp+0x60]
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [eax],ebx
	cmp ebx,edi
	je Block80

 Block79:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block80:
	lea ecx,[ebp-0x58]
	push ecx
	mov byte ptr [ebp-4],0x16
	mov ecx,esi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x68],esi
	cmp eax,edi
	je Block83

 Block81:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x30]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x30]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x68],esi
	jge Block83

 Block82:
	cmp eax,0x80004002
	jne Block46

 Block83:
	cmp word ptr [ebp-0x58],8
	mov byte ptr [ebp-4],0x19
	jne Block86

 Block84:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	cmp eax,edi
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	cmp esi,edi
	sete al
	test al,al
	jne Block107

 Block88:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x618
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1A
	cmp esi,edi
	je Block51

 Block89:
	lea edx,[ebp-0x78]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x19
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1B
	jne Block91

 Block90:
	mov eax,dword ptr [eax+8]
	jmp Block92

 Block91:
	mov eax,offset _S___3

 Block92:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],edi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x78],8
	mov byte ptr [ebp-4],0x1D
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [ebp-0x78],ax
	mov eax,dword ptr [ebp-0x70]
	cmp eax,edi
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[ebp-0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov eax,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x5C]
	mov edi,dword ptr [ebp+0x50]
	mov ecx,dword ptr [edx+0xD0]
	push eax
	push edi
	call CCtrlComboBox::AddItem
	mov byte ptr [ebp-4],0x19
	test edi,edi
	je Block98

 Block97:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block98:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x15
	call edx
	mov byte ptr [ebp-4],0x14
	test ebx,ebx
	je Block106

 Block99:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block105

 Block100:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block102

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block102:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block104

 Block103:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block104:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block105:
	mov dword ptr [ebp+0x60],0

 Block106:
	inc dword ptr [ebp+0x4C]
	mov esi,dword ptr [ebp+0x54]
	mov eax,dword ptr [ebp+0x58]
	xor edi,edi
	jmp Block77

 Block107:
	mov byte ptr [ebp-4],0x15
	cmp esi,edi
	je Block109

 Block108:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block109:
	mov byte ptr [ebp-4],0x14
	cmp ebx,edi
	je Block116

 Block110:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,edi
	jne Block116

 Block111:
	mov eax,dword ptr [ebx]
	cmp eax,edi
	je Block113

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block113:
	mov eax,dword ptr [ebx+4]
	cmp eax,edi
	je Block115

 Block114:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block115:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block116:
	mov ebx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebx+0x9C]
	mov ecx,dword ptr [ebx+0xD0]
	push edx
	call CCtrlComboBox::SetSelect
	lea ecx,[ebp-0x48]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov eax,2
	mov edx,eax
	mov esi,eax
	mov dword ptr [ebp-0x44],eax
	xor ecx,ecx
	lea eax,[ebp+0x68]
	push 0x1A25
	push eax
	mov byte ptr [ebp-4],0x1E
	mov dword ptr [ebp-0x40],ecx
	mov dword ptr [ebp-0x3C],edx
	mov dword ptr [ebp-0x38],esi
	mov dword ptr [ebp-0x24],ecx
	mov dword ptr [ebp-0x2C],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[ebp-0x34]
	cmp ecx,edi
	je Block128

 Block117:
	mov esi,dword ptr [ebp-0x34]
	test esi,esi
	je Block126

 Block118:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block125

 Block119:
	test esi,esi
	je Block125

 Block120:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block122

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block122:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block124

 Block123:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block124:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block125:
	mov dword ptr [ebp-0x34],0

 Block126:
	mov edi,dword ptr [edi]
	mov dword ptr [ebp-0x34],edi
	test edi,edi
	je Block128

 Block127:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block128:
	mov esi,dword ptr [ebp+0x68]
	test esi,esi
	je Block136

 Block129:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block136

 Block130:
	test esi,esi
	je Block136

 Block131:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block133

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block133:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block135

 Block134:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block135:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block136:
	mov eax,0x20
	mov dword ptr [ebp-0x18],4
	call __chkstk
	mov ecx,dword ptr [ebx+0x98]
	mov eax,esp
	push 0xA
	push eax
	push ecx
	call _itoa
	add esp,0xC
	test eax,eax
	jne Block139

 Block137:
	mov eax,dword ptr [ebp-0x48]
	test eax,eax
	je Block142

 Block138:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [ebp-0x48],0
	jmp Block142

 Block139:
	mov ecx,eax
	lea esi,[ecx+1]

 Block140:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block140

 Block141:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push 0
	push esi
	lea ecx,[ebp-0x48]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp-0x48]
	call ZXString<char>::ReleaseBuffer

 Block142:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block144

 Block143:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block145

 Block144:
	xor eax,eax

 Block145:
	mov byte ptr [ebp-4],0x1E
	test eax,eax
	je Block176

 Block146:
	add eax,8
	je Block176

 Block147:
	lea esi,[eax-8]
	test esi,esi
	je Block149

 Block148:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block149:
	mov eax,dword ptr [ebx+0xC0]
	mov dword ptr [ebx+0xC0],esi
	test eax,eax
	je Block153

 Block150:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block153

 Block151:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block153

 Block152:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block153:
	mov ecx,dword ptr [ebx+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[ebp-0x48]
	push eax
	push 0xE
	push 0x5F
	push 0x33
	push 0x69
	push 0x3ED
	push ebx
	call edx
	push 0
	push offset _S_
	push 0
	push 0
	lea ecx,[ebp-0x48]
	mov dword ptr [ebp-0x18],0x1E
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	lea ecx,[ebp-0x48]
	call ZXString<char>::ReleaseBuffer
	lea eax,[ebp+0x5C]
	push 8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[ebp-0x34]
	cmp ecx,edi
	je Block165

 Block154:
	mov esi,dword ptr [ebp-0x34]
	test esi,esi
	je Block163

 Block155:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block162

 Block156:
	test esi,esi
	je Block162

 Block157:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block159

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block159:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block161

 Block160:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block161:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block162:
	mov dword ptr [ebp-0x34],0

 Block163:
	mov eax,dword ptr [edi]
	mov dword ptr [ebp-0x34],eax
	test eax,eax
	je Block165

 Block164:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block165:
	mov esi,dword ptr [ebp+0x5C]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	test esi,esi
	je Block174

 Block166:
	lea eax,[esi+8]
	push eax
	call edi
	test eax,eax
	jne Block173

 Block167:
	test esi,esi
	je Block173

 Block168:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block170

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block170:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block172

 Block171:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block172:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block173:
	mov dword ptr [ebp+0x5C],0

 Block174:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block177

 Block175:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block178

 Block176:
	xor esi,esi
	jmp Block149

 Block177:
	xor eax,eax

 Block178:
	mov byte ptr [ebp-4],0x1E
	test eax,eax
	je Block189

 Block179:
	add eax,8
	je Block189

 Block180:
	lea esi,[eax-8]
	test esi,esi
	je Block182

 Block181:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block182:
	mov eax,dword ptr [ebx+0xC8]
	mov dword ptr [ebx+0xC8],esi
	test eax,eax
	je Block186

 Block183:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call edi
	test eax,eax
	jne Block186

 Block184:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block186

 Block185:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block186:
	mov ecx,dword ptr [ebx+0xC8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[ebp-0x48]
	push eax
	push 0xE
	push 0xBE
	push 0x69
	push 0xA
	push 0x3EE
	push ebx
	call edx
	mov eax,dword ptr [ebx+0xC8]
	push eax
	mov ecx,ebx
	call CWnd::SetFocusChild
	lea ecx,[ebp-0x48]
	mov byte ptr [ebp-4],0x14
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x11
	call edx
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x10
	jne Block190

 Block187:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block191

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block189:
	xor esi,esi
	jmp Block182

 Block190:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	mov eax,dword ptr [ebp+0x54]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],7
	call eax
	mov eax,dword ptr [ebp-0x80]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block200

 Block192:
	mov esi,eax
	add eax,8
	push eax
	call edi
	test eax,eax
	jne Block199

 Block193:
	test esi,esi
	je Block199

 Block194:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block196

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block196:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block198

 Block197:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block198:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block199:
	mov dword ptr [ebp-0x80],0

 Block200:
	mov eax,dword ptr [ebp+0x48]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block202

 Block201:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block202:
	lea esp,[ebp-0xDC]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUIChannelShift::GetRectFromIdx
__SUB_CLASS_THIS(005689C0, __thiscall, 13326,  CUIChannelShift, tagRECT*, tagRECT*, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0xC]
	mov eax,0x66666667
	imul esi
	sar edx,1
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	lea eax,[ecx+ecx*4]
	sub esi,eax
	mov eax,dword ptr [esp+8]
	imul esi,0x46
	lea ecx,[ecx+ecx*4]
	lea edx,[esi+0xB]
	lea ecx,[ecx*4+0x37]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	add edx,0x44
	add ecx,0x14
	mov dword ptr [eax+8],edx
	mov dword ptr [eax+0xC],ecx
	pop esi
	ret 8
}
}
// CUIGameOpt::OnCreate
_SUB_EXCEPTION_HANDLER(5777D0)
__SUB_CLASS_THIS(005777D0, __thiscall, 13222,  CUIGameOpt, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5777D0
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
	mov ebp,ecx
	xor ebx,ebx
	push ebx
	push ebx
	lea esi,[ebp+0x1A8]
	push ebp
	mov ecx,esi
	call CLayoutMan::Init
	lea eax,[esp+0x14]
	push 0x1990
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push ebx
	push 1
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x78],ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebx
	je Block2

 Block1:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebx

 Block2:
	mov eax,dword ptr [esp+0x14]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x60],edi
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x14]
	push 0x198F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push ebx
	push 2
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x78],1
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebx
	je Block6

 Block5:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebx

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x60],edi
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x20]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	push offset _S_
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x64],2
	mov dword ptr [esp+0x28],ebx
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],3
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block19

 Block12:
	add eax,8
	cmp eax,ebx
	je Block19

 Block13:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block15

 Block14:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block15:
	mov eax,dword ptr [ebp+0x9C]
	mov dword ptr [ebp+0x9C],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block17

 Block16:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block17:
	mov ecx,dword ptr [ebp+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x17
	push 0x5D
	push 0x3E9
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],4
	cmp eax,ebx
	je Block20

 Block18:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block21

 Block19:
	xor esi,esi
	jmp Block15

 Block20:
	xor eax,eax

 Block21:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block29

 Block22:
	add eax,8
	cmp eax,ebx
	je Block29

 Block23:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block25

 Block24:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block25:
	mov eax,dword ptr [ebp+0xA4]
	mov dword ptr [ebp+0xA4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block27

 Block26:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block27:
	mov ecx,dword ptr [ebp+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x29
	push 0x5D
	push 0x3EA
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],5
	cmp eax,ebx
	je Block30

 Block28:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block31

 Block29:
	xor esi,esi
	jmp Block25

 Block30:
	xor eax,eax

 Block31:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block39

 Block32:
	add eax,8
	cmp eax,ebx
	je Block39

 Block33:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block35

 Block34:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block35:
	mov eax,dword ptr [ebp+0xAC]
	mov dword ptr [ebp+0xAC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block37

 Block36:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block37:
	mov ecx,dword ptr [ebp+0xAC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x3B
	push 0x5D
	push 0x3EB
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],6
	cmp eax,ebx
	je Block40

 Block38:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block41

 Block39:
	xor esi,esi
	jmp Block35

 Block40:
	xor eax,eax

 Block41:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block49

 Block42:
	add eax,8
	cmp eax,ebx
	je Block49

 Block43:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block45

 Block44:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block45:
	mov eax,dword ptr [ebp+0xB4]
	mov dword ptr [ebp+0xB4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block47

 Block46:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block47:
	mov ecx,dword ptr [ebp+0xB4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x4D
	push 0x5D
	push 0x3EC
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],7
	cmp eax,ebx
	je Block50

 Block48:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block51

 Block49:
	xor esi,esi
	jmp Block45

 Block50:
	xor eax,eax

 Block51:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block59

 Block52:
	add eax,8
	cmp eax,ebx
	je Block59

 Block53:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block55

 Block54:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block55:
	mov eax,dword ptr [ebp+0xBC]
	mov dword ptr [ebp+0xBC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block57

 Block56:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block57:
	mov ecx,dword ptr [ebp+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x5F
	push 0x5D
	push 0x3ED
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],8
	cmp eax,ebx
	je Block60

 Block58:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block61

 Block59:
	xor esi,esi
	jmp Block55

 Block60:
	xor eax,eax

 Block61:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block69

 Block62:
	add eax,8
	cmp eax,ebx
	je Block69

 Block63:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block65

 Block64:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block65:
	mov eax,dword ptr [ebp+0xC4]
	mov dword ptr [ebp+0xC4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block67

 Block66:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block67:
	mov ecx,dword ptr [ebp+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x71
	push 0x5D
	push 0x3EE
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],9
	cmp eax,ebx
	je Block70

 Block68:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block71

 Block69:
	xor esi,esi
	jmp Block65

 Block70:
	xor eax,eax

 Block71:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block79

 Block72:
	add eax,8
	cmp eax,ebx
	je Block79

 Block73:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block75

 Block74:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block75:
	mov eax,dword ptr [ebp+0xCC]
	mov dword ptr [ebp+0xCC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block77

 Block76:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block77:
	mov ecx,dword ptr [ebp+0xCC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x83
	push 0x5D
	push 0x3EF
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],0xA
	cmp eax,ebx
	je Block80

 Block78:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block81

 Block79:
	xor esi,esi
	jmp Block75

 Block80:
	xor eax,eax

 Block81:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block89

 Block82:
	add eax,8
	cmp eax,ebx
	je Block89

 Block83:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block85

 Block84:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block85:
	mov eax,dword ptr [ebp+0xDC]
	mov dword ptr [ebp+0xDC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block87

 Block86:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block87:
	mov ecx,dword ptr [ebp+0xDC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0x95
	push 0x5D
	push 0x3F2
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],0xB
	cmp eax,ebx
	je Block90

 Block88:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block91

 Block89:
	xor esi,esi
	jmp Block85

 Block90:
	xor eax,eax

 Block91:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block99

 Block92:
	add eax,8
	cmp eax,ebx
	je Block99

 Block93:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block95

 Block94:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block95:
	mov eax,dword ptr [ebp+0xD4]
	mov dword ptr [ebp+0xD4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block97

 Block96:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block97:
	mov ecx,dword ptr [ebp+0xD4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0xA7
	push 0x5D
	push 0x3F1
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],0xC
	cmp eax,ebx
	je Block100

 Block98:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block101

 Block99:
	xor esi,esi
	jmp Block95

 Block100:
	xor eax,eax

 Block101:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block109

 Block102:
	add eax,8
	cmp eax,ebx
	je Block109

 Block103:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block105

 Block104:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block105:
	mov eax,dword ptr [ebp+0xEC]
	mov dword ptr [ebp+0xEC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block107

 Block106:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block107:
	mov ecx,dword ptr [ebp+0xEC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0xB9
	push 0x5D
	push 0x3F4
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],0xD
	cmp eax,ebx
	je Block110

 Block108:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block111

 Block109:
	xor esi,esi
	jmp Block105

 Block110:
	xor eax,eax

 Block111:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block119

 Block112:
	add eax,8
	cmp eax,ebx
	je Block119

 Block113:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block115

 Block114:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block115:
	mov eax,dword ptr [ebp+0xE4]
	mov dword ptr [ebp+0xE4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block117

 Block116:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block117:
	mov ecx,dword ptr [ebp+0xE4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0xCB
	push 0x5D
	push 0x3F3
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],0xE
	cmp eax,ebx
	je Block120

 Block118:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block121

 Block119:
	xor esi,esi
	jmp Block115

 Block120:
	xor eax,eax

 Block121:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block129

 Block122:
	add eax,8
	cmp eax,ebx
	je Block129

 Block123:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block125

 Block124:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block125:
	mov eax,dword ptr [ebp+0xF4]
	mov dword ptr [ebp+0xF4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block127

 Block126:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block127:
	mov ecx,dword ptr [ebp+0xF4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0xDD
	push 0x5D
	push 0x3F5
	push ebp
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x60],0xF
	cmp eax,ebx
	je Block130

 Block128:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block131

 Block129:
	xor esi,esi
	jmp Block125

 Block130:
	xor eax,eax

 Block131:
	mov byte ptr [esp+0x60],2
	cmp eax,ebx
	je Block142

 Block132:
	add eax,8
	cmp eax,ebx
	je Block142

 Block133:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block135

 Block134:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block135:
	mov eax,dword ptr [ebp+0xFC]
	mov dword ptr [ebp+0xFC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block137

 Block136:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block137:
	mov ecx,dword ptr [ebp+0xFC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push 0xEF
	push 0x5D
	push 0x3F6
	push ebp
	call edx
	mov eax,dword ptr [ebp+0x94]
	push eax
	mov ecx,ebp
	call CWnd::SetFocusChild
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	add eax,0x20
	mov esi,eax
	lea edi,[ebp+0x110]
	mov ecx,0x13
	rep movsd
	mov esi,eax
	lea edi,[ebp+0x15C]
	mov ecx,0x13
	rep movsd
	mov ecx,ebp
	call CUIGameOpt::SetCtrlFromSysOpt
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp ecx,ebx
	je Block139

 Block138:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x2C],ebx

 Block139:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block141:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block142:
	xor esi,esi
	jmp Block135
}
}
// CUtilDlg::SetUtilDlg_Input
_SUB_EXCEPTION_HANDLER(56B360)
__SUB_CLASS_THIS(0056B360, __thiscall, 12992,  CUtilDlg, void, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56B360
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	mov dword ptr [ecx+0xB8],eax
	push edx
	add ecx,0xBC
	mov dword ptr [esp+0x10],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 8
}
}
// CUtilDlg::SetUtilDlg
_SUB_EXCEPTION_HANDLER(56B240)
__SUB_CLASS_THIS(0056B240, __thiscall, 12990,  CUtilDlg, void, long, const wchar_t*, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56B240
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
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [ecx+0xF4],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [ecx+0xB4],eax
	cmp edx,edi
	jne Block2

 Block1:
	lea eax,[esp+0x2C]
	push 0x4F8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x1C],edi
	lea ebx,[edi+1]
	jmp Block5

 Block2:
	mov eax,edx
	mov dword ptr [esp+0x24],edi
	lea esi,[eax+2]
	mov edi,edi

 Block3:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,di
	jne Block3

 Block4:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea ecx,[esi+esi]
	push ecx
	push edx
	push edi
	push esi
	lea ecx,[esp+0x34]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x28]
	call ZXString16::ReleaseBuffer
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x1C],1
	mov ebx,2

 Block5:
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x14],ebx
	call play_ui_sound
	add esp,4
	mov dword ptr [esp+0x1C],edi
	test bl,2
	je Block8

 Block6:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x10],ebx
	cmp eax,edi
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test bl,1
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CUIGameOpt::HitTest
__SUB_CLASS_THIS(00568720, __thiscall, 13225,  CUIGameOpt, int32_t, long, long, CCtrlWnd**) {
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
	cmp edi,0x19
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIGachaponBox::~CUIGachaponBox
_SUB_EXCEPTION_HANDLER(578F60)
__SUB_CLASS_THIS0(00578F60, __thiscall, 13473,  CUIGachaponBox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_578F60
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIGachaponBox::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGachaponBox::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGachaponBox::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xA4],0
	lea edi,[esi+0xA0]
	mov dword ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0x9C],0
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x18],0
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
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
// CUIRandomMesoBag::~CUIRandomMesoBag
_SUB_EXCEPTION_HANDLER(57ABF0)
__SUB_CLASS_THIS0(0057ABF0, __thiscall, 13627,  CUIRandomMesoBag, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57ABF0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIRandomMesoBag::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRandomMesoBag::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRandomMesoBag::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esp+0x18],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

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
// CUtilDlg::OnKey
// 7B9D00
static uint8_t _SUB_3B9C60_LOOKUP_TABLE_0[77] = {
0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 
};
__SUB_CLASS_THIS(003B9C60, __thiscall, 12985,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB0]
	sub eax,0x3E9
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	je Block2

 Block1:
	sub eax,2
	jne Block11

 Block2:
	test esi,esi
	js Block11

 Block3:
	lea eax,[edx-0xD]
	cmp eax,0x4C
	ja Block11

 Block4:
	movzx eax,byte ptr [eax+_SUB_3B9C60_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block6
cmp EAX, 2
je Block5
cmp EAX, 3
je Block11


 Block5:
	mov edi,6
	jmp Block8

 Block6:
	mov edi,7
	jmp Block8

 Block7:
	xor eax,eax
	cmp dword ptr [ecx+0xF0],eax
	setne al
	add eax,6
	mov edi,eax
	je Block11

 Block8:
	lea esi,[ecx-4]
	push edi
	mov ecx,esi
	call CWnd::GetChildItem
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block12

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	pop edi
	pop esi
	ret 8

 Block11:
	push esi
	push edx
	call CDialog::OnKey

 Block12:
	pop edi
	pop esi
	ret 8
}
}
// CUICancelCharacterCouponResults::OnCreate
_SUB_EXCEPTION_HANDLER(5704F0)
__SUB_CLASS_THIS(005704F0, __thiscall, 13454,  CUICancelCharacterCouponResults, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5704F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0x512
	push eax
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x34],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x30],bl
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
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebx
	je Block14

 Block12:
	cmp eax,1
	je Block17

 Block13:
	cmp eax,2
	jne Block16

 Block14:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x4D
	push 0x6E
	push 0x3E8
	push esi
	call edx
	jmp Block18

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	cmp eax,3
	jne Block18

 Block17:
	mov ecx,dword ptr [esi+0x98]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	push ebx
	push 0x5F
	push 0x6E
	push 0x3E8
	push esi
	call eax

 Block18:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4
}
}
// CUIChannelShift::SetRet
__SUB_CLASS_THIS(00569400, __thiscall, 13321,  CUIChannelShift, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,edi
	sub eax,1
	mov esi,ecx
	jne Block4

 Block1:
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	jl Block7

 Block2:
	cmp eax,dword ptr [esi+0x94]
	je Block7

 Block3:
	push eax
	call get_field
	mov ecx,eax
	call CField::SendTransferChannelRequest

 Block4:
	cmp dword ptr [esi+0x84],0
	jne Block7

 Block5:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],1
	je Block7

 Block6:
	mov ecx,esi
	call CWnd::Destroy

 Block7:
	pop edi
	pop esi
	ret 4
}
}
// CUICashGachapon::IsKindOf
__SUB_CLASS_THIS(0056AE40, __thiscall, 13612,  CUICashGachapon, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUICashGachapon::ms_RTTI_CUICashGachapon
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
// CUIContextMenu::OnCreate
_SUB_EXCEPTION_HANDLER(56DC70)
__SUB_CLASS_THIS(0056DC70, __thiscall, 13345,  CUIContextMenu, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56DC70
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
	mov edi,ecx
	lea eax,[esp+0x4C]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[edi+0x78]
	push ebp
	push eax
	mov dword ptr [esp+0xC8],0
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x58]
	or esi,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0xBC],esi
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	call ebx
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0xC0],1
	call ebx
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0xBC],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [edi+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [edi+0x24]
	push edx
	push eax
	call IWzCanvas::Create
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xBC],1
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
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
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0xBC],esi
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov esi,dword ptr [ebp]
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [edi+0x28]
	mov ecx,dword ptr [edi+0x24]
	mov edx,dword ptr [esi]
	push 0xFFFFFF
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ecx
	push 0
	push 0
	push esi
	call eax
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	lea ecx,[esp+0x84]
	push ecx
	call ebx
	lea edx,[esp+0x84]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea eax,[esp+0x94]
	push eax
	mov dword ptr [esp+0xC0],3
	call ebx
	lea ecx,[esp+0x94]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	push 0
	push 0
	lea edx,[esp+0x8C]
	push edx
	lea eax,[esp+0xA0]
	push eax
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	mov bl,4
	push offset _S_UIUIWINDOW2IMGCO__12
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],5
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea ecx,[esp+0xB8]
	push ecx
	mov byte ptr [esp+0xD4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov esi,8
	mov byte ptr [esp+0xBC],8
	cmp word ptr [esp+0xA4],si
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0xBC],9
	cmp word ptr [esp+0x94],si
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x94]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov byte ptr [esp+0xBC],0xA
	cmp word ptr [esp+0x84],si
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],ecx
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0xBC],0xB
	test esi,esi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov ebx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xBC],0xA
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	cmp dword ptr [edi+0xF0],0
	mov dword ptr [esp+0x4C],0
	jle Block84

 Block50:
	mov dword ptr [esp+0x50],0x1B
	jmp Block52

 Block52:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x64]
	push ecx
	mov bl,0xD
	call esi
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block53:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xC0],0xC
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block54:
	push 0
	push 0
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x60]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGCO__11
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],0xE
	je Block7

 Block55:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0xD4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0xF
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block67

 Block56:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x48]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x48]
	mov ebp,eax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	mov dword ptr [esp+0x14],ebp
	test esi,esi
	jge Block60

 Block59:
	cmp esi,0x80004002
	jne Block95

 Block60:
	mov esi,8
	mov byte ptr [esp+0xBC],bl
	cmp word ptr [esp+0x74],si
	jne Block70

 Block61:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block63:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0xBC],0xC
	cmp word ptr [esp+0x54],si
	jne Block71

 Block65:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block72

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block67:
	cmp dword ptr [esp+0x14],0
	je Block60

 Block68:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block60

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block60

 Block70:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x74]
	push ecx
	call ebp
	jmp Block64

 Block71:
	lea eax,[esp+0x54]
	push eax
	call ebp

 Block72:
	mov byte ptr [esp+0xBC],0xA
	cmp word ptr [esp+0x64],si
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x64]
	push edx
	call ebp

 Block76:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x38],ax
	mov dword ptr [esp+0x40],ecx
	mov esi,dword ptr [edi+0x78]
	mov byte ptr [esp+0xBC],0x10
	test esi,esi
	je Block7

 Block77:
	mov ebx,dword ptr [esp+0x38]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x60]
	push eax
	push ecx
	push 3
	push esi
	call edx
	test eax,eax
	jge Block79

 Block78:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block79:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xBC],0xA
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x38]
	push ecx
	call ebp

 Block83:
	mov eax,dword ptr [esp+0x4C]
	add dword ptr [esp+0x50],0xF
	inc eax
	cmp eax,dword ptr [edi+0xF0]
	mov dword ptr [esp+0x4C],eax
	jl Block52

 Block84:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x54]
	push edx
	call esi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0xC0],0x11
	call esi
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	push 0
	push 0
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x70]
	push ecx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0x12
	push offset _S_UIUIWINDOW2IMGCO__10
	mov byte ptr [esp+0xD4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xD0],0x13
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[esp+0x88]
	mov byte ptr [esp+0xD0],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xC4],0x14
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block96

 Block91:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x48]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x48]
	cmp dword ptr [esp+0x14],0
	mov ebp,ecx
	je Block93

 Block92:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block93:
	mov dword ptr [esp+0x14],ebp
	test esi,esi
	jge Block99

 Block94:
	cmp esi,0x80004002
	je Block99

 Block95:
	push esi
	call _com_issue_error

 Block96:
	cmp dword ptr [esp+0x14],0
	je Block99

 Block97:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov esi,8
	mov byte ptr [esp+0xBC],bl
	cmp word ptr [esp+0x74],si
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov byte ptr [esp+0xBC],0x11
	cmp word ptr [esp+0x64],si
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov byte ptr [esp+0xBC],0xA
	cmp word ptr [esp+0x54],si
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x38],ax
	mov dword ptr [esp+0x40],edx
	mov esi,dword ptr [edi+0x78]
	mov byte ptr [esp+0xBC],0x15
	test esi,esi
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	mov ecx,dword ptr [edi+0xF0]
	mov ebp,dword ptr [esp+0x38]
	mov ebx,dword ptr [esi]
	mov eax,ecx
	sub esp,0x10
	shl eax,4
	sub eax,ecx
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [ecx+4],ebp
	mov dword ptr [ecx+8],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [ecx+0xC],edx
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [ebx+0x80]
	push ecx
	add eax,0x1B
	push eax
	push 3
	push esi
	call edx
	xor ebx,ebx
	cmp eax,ebx
	jge Block115

 Block114:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block115:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xBC],0xA
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[edi+4]
	push eax
	call CWndMan::SetCaptureWnd
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x28],1
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	push 0x46
	push offset _S_UIUIWINDOW2IMGCO__9
	push ebx
	push 0x23
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xCC],0x16
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x23
	lea ecx,[esp+0x38]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x17
	cmp eax,ebx
	je Block121

 Block120:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block122

 Block121:
	xor eax,eax

 Block122:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block132

 Block123:
	add eax,8
	cmp eax,ebx
	je Block132

 Block124:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block126

 Block125:
	lea edx,[esi+0xC]
	push edx
	call ebp

 Block126:
	mov eax,dword ptr [edi+0x94]
	mov dword ptr [edi+0x94],esi
	cmp eax,ebx
	je Block130

 Block127:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block130

 Block128:
	lea ecx,[esi+4]
	push ecx
	call ebp
	cmp esi,ebx
	je Block130

 Block129:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block130:
	mov ecx,dword ptr [edi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 1
	push 0x1C
	push 0xC
	push 0x7D0
	push edi
	call edx
	push 0x46
	push offset _S_UIUIWINDOW2IMGCO__8
	push ebx
	push 0x23
	lea ecx,[esp+0x44]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x23
	lea ecx,[esp+0x38]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x18
	cmp eax,ebx
	je Block133

 Block131:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block134

 Block132:
	xor esi,esi
	jmp Block126

 Block133:
	xor eax,eax

 Block134:
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block144

 Block135:
	add eax,8
	cmp eax,ebx
	je Block144

 Block136:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block138

 Block137:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block138:
	mov eax,dword ptr [edi+0x9C]
	mov dword ptr [edi+0x9C],esi
	cmp eax,ebx
	je Block142

 Block139:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block142

 Block140:
	lea edx,[esi+4]
	push edx
	call ebp
	cmp esi,ebx
	je Block142

 Block141:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block142:
	mov ecx,dword ptr [edi+0x9C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x28]
	push edx
	push 1
	push 0x2B
	push 0xC
	push 0x7D1
	push edi
	call eax
	push 0x48
	push offset _S_UIUIWINDOW2IMGCO__7
	push ebx
	push 0x24
	lea ecx,[esp+0x44]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	lea ecx,[esp+0x38]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x19
	cmp eax,ebx
	je Block145

 Block143:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block146

 Block144:
	xor esi,esi
	jmp Block138

 Block145:
	xor eax,eax

 Block146:
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block156

 Block147:
	add eax,8
	cmp eax,ebx
	je Block156

 Block148:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block150

 Block149:
	lea ecx,[esi+0xC]
	push ecx
	call ebp

 Block150:
	mov eax,dword ptr [edi+0xA4]
	mov dword ptr [edi+0xA4],esi
	cmp eax,ebx
	je Block154

 Block151:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block154

 Block152:
	lea eax,[esi+4]
	push eax
	call ebp
	cmp esi,ebx
	je Block154

 Block153:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block154:
	mov ecx,dword ptr [edi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 1
	push 0x3A
	push 0xC
	push 0x7D2
	push edi
	call edx
	push 0x4C
	push offset _S_UIUIWINDOW2IMGCO__6
	push ebx
	push 0x26
	lea ecx,[esp+0x44]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x26
	lea ecx,[esp+0x38]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x1A
	cmp eax,ebx
	je Block157

 Block155:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block158

 Block156:
	xor esi,esi
	jmp Block150

 Block157:
	xor eax,eax

 Block158:
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block169

 Block159:
	add eax,8
	cmp eax,ebx
	je Block169

 Block160:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block162

 Block161:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block162:
	mov eax,dword ptr [edi+0xB4]
	mov dword ptr [edi+0xB4],esi
	cmp eax,ebx
	je Block166

 Block163:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block166

 Block164:
	lea edx,[esi+4]
	push edx
	call ebp
	cmp esi,ebx
	je Block166

 Block165:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block166:
	mov ecx,dword ptr [edi+0xB4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x28]
	push edx
	push 1
	push 0x49
	push 0xC
	push 0x7D4
	push edi
	call eax
	mov ebp,0x58
	cmp dword ptr [edi+0xF4],ebx
	je Block178

 Block167:
	push offset _S_UIUIWINDOW2IMGCO__5
	lea ecx,[esp+0x38]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x1B
	cmp eax,ebx
	je Block170

 Block168:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block171

 Block169:
	xor esi,esi
	jmp Block162

 Block170:
	xor eax,eax

 Block171:
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block181

 Block172:
	add eax,8
	cmp eax,ebx
	je Block181

 Block173:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block175

 Block174:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block175:
	mov eax,dword ptr [edi+0xBC]
	mov dword ptr [edi+0xBC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block177

 Block176:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block177:
	mov ecx,dword ptr [edi+0xBC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 1
	push 0x58
	push 0xC
	push 0x7D5
	push edi
	call edx
	mov ebp,0x67

 Block178:
	cmp dword ptr [edi+0xF8],ebx
	je Block190

 Block179:
	push offset _S_UIUIWINDOW2IMGCO__4
	lea ecx,[esp+0x38]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x1C
	cmp eax,ebx
	je Block182

 Block180:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block183

 Block181:
	xor esi,esi
	jmp Block175

 Block182:
	xor eax,eax

 Block183:
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block193

 Block184:
	add eax,8
	cmp eax,ebx
	je Block193

 Block185:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block187

 Block186:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block187:
	mov eax,dword ptr [edi+0xC4]
	mov dword ptr [edi+0xC4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block189

 Block188:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block189:
	mov ecx,dword ptr [edi+0xC4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 1
	push ebp
	push 0xC
	push 0x7D6
	push edi
	call edx
	add ebp,0xF

 Block190:
	cmp dword ptr [edi+0xFC],ebx
	je Block202

 Block191:
	push offset _S_UIUIWINDOW2IMGCO__3
	lea ecx,[esp+0x38]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x1D
	cmp eax,ebx
	je Block194

 Block192:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block195

 Block193:
	xor esi,esi
	jmp Block187

 Block194:
	xor eax,eax

 Block195:
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block204

 Block196:
	add eax,8
	cmp eax,ebx
	je Block204

 Block197:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block199

 Block198:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block199:
	mov eax,dword ptr [edi+0xCC]
	mov dword ptr [edi+0xCC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block201

 Block200:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block201:
	mov ecx,dword ptr [edi+0xCC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 1
	push ebp
	push 0xC
	push 0x7D7
	push edi
	call edx
	add ebp,0xF

 Block202:
	push 0x48
	push offset _S_UIUIWINDOW2IMGCO__2
	push ebx
	push 0x24
	lea ecx,[esp+0x44]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	lea ecx,[esp+0x38]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x1E
	cmp eax,ebx
	je Block205

 Block203:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block206

 Block204:
	xor esi,esi
	jmp Block199

 Block205:
	xor eax,eax

 Block206:
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block217

 Block207:
	add eax,8
	cmp eax,ebx
	je Block217

 Block208:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block210

 Block209:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block210:
	mov eax,dword ptr [edi+0xD4]
	mov dword ptr [edi+0xD4],esi
	cmp eax,ebx
	je Block214

 Block211:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block214

 Block212:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block214

 Block213:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block214:
	mov ecx,dword ptr [edi+0xD4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x28]
	push edx
	push 1
	push ebp
	push 0xC
	push 0x7D8
	push edi
	call eax
	add ebp,0xF
	cmp dword ptr [edi+0x100],ebx
	je Block226

 Block215:
	push offset _S_UIUIWINDOW2IMGCO__1
	lea ecx,[esp+0x38]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x1F
	cmp eax,ebx
	je Block218

 Block216:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block219

 Block217:
	xor esi,esi
	jmp Block210

 Block218:
	xor eax,eax

 Block219:
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block228

 Block220:
	add eax,8
	cmp eax,ebx
	je Block228

 Block221:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block223

 Block222:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block223:
	mov eax,dword ptr [edi+0xDC]
	mov dword ptr [edi+0xDC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block225

 Block224:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block225:
	mov ecx,dword ptr [edi+0xDC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push 1
	push ebp
	push 0xC
	push 0x7D9
	push edi
	call edx
	add ebp,0xF

 Block226:
	push 0x4A
	push offset _S_UIUIWINDOW2IMGCO
	push ebx
	push 0x25
	lea ecx,[esp+0x44]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x25
	lea ecx,[esp+0x38]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0xBC],0x20
	cmp eax,ebx
	je Block229

 Block227:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block230

 Block228:
	xor esi,esi
	jmp Block223

 Block229:
	xor eax,eax

 Block230:
	mov byte ptr [esp+0xBC],0x16
	cmp eax,ebx
	je Block245

 Block231:
	add eax,8
	cmp eax,ebx
	je Block245

 Block232:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block234

 Block233:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block234:
	mov eax,dword ptr [edi+0xE4]
	mov dword ptr [edi+0xE4],esi
	cmp eax,ebx
	je Block238

 Block235:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block238

 Block236:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block238

 Block237:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block238:
	mov ecx,dword ptr [edi+0xE4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x28]
	push edx
	push 1
	push ebp
	push 0xC
	push 0x7DA
	push edi
	call eax
	cmp dword ptr [edi+0x104],ebx
	je Block240

 Block239:
	mov ecx,dword ptr [edi+0xE4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push ebx
	call eax
	mov edi,dword ptr [edi+0xE4]
	mov dword ptr [edi+0xAD8],1

 Block240:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xBC],0xA
	cmp eax,ebx
	je Block242

 Block241:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block242:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp eax,ebx
	je Block244

 Block243:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block244:
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret 4

 Block245:
	xor esi,esi
	jmp Block234
}
}
// CUIGameOpt::~CUIGameOpt
_SUB_EXCEPTION_HANDLER(56BC40)
__SUB_CLASS_THIS0(0056BC40, __thiscall, 13221,  CUIGameOpt, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56BC40
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIGameOpt::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGameOpt::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGameOpt::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x1A8]
	mov dword ptr [esp+0x1C],0x10
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0x108]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],0xF
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x100]
	mov byte ptr [esp+0x1C],0xE
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xF8]
	mov byte ptr [esp+0x1C],0xD
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xF0]
	mov byte ptr [esp+0x1C],0xC
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xE8]
	mov byte ptr [esp+0x1C],0xB
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xE0]
	mov byte ptr [esp+0x1C],0xA
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xD8]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0xD0]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block20:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block22

 Block21:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block22:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block24

 Block23:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block24:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block26

 Block25:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block26:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block28

 Block27:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block28:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block30

 Block29:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block30:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block32

 Block31:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block32:
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
// CUISysOpt::SetCtrlFromSysOpt
__SUB_CLASS_THIS0(00569150, __thiscall, 13241,  CUISysOpt, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x150]
	mov ecx,dword ptr [esi+0x94]
	push eax
	call CCtrlSlider::SetCurPos
	mov ecx,dword ptr [esi+0x154]
	push ecx
	mov ecx,dword ptr [esi+0x9C]
	call CCtrlSlider::SetCurPos
	mov edx,dword ptr [esi+0x158]
	mov ecx,dword ptr [esi+0xA4]
	push edx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0x15C]
	mov ecx,dword ptr [esi+0xAC]
	push eax
	call CCtrlSlider::SetCurPos
	mov ecx,dword ptr [esi+0x160]
	push ecx
	mov ecx,dword ptr [esi+0xB4]
	call CCtrlCheckBox::SetChecked
	mov edx,dword ptr [esi+0x168]
	mov ecx,dword ptr [esi+0xCC]
	push edx
	call CCtrlSlider::SetCurPos
	mov eax,dword ptr [esi+0x16C]
	mov ecx,dword ptr [esi+0xD4]
	push eax
	call CCtrlSlider::SetCurPos
	mov ecx,dword ptr [esi+0x170]
	push ecx
	mov ecx,dword ptr [esi+0xDC]
	call CCtrlSlider::SetCurPos
	mov edx,dword ptr [esi+0x174]
	mov ecx,dword ptr [esi+0xBC]
	push edx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0x164]
	mov ecx,dword ptr [esi+0xC4]
	push eax
	call CCtrlComboBox::SetSelect
	mov ecx,dword ptr [esi+0x178]
	push ecx
	mov ecx,dword ptr [esi+0xE4]
	call CCtrlComboBox::SetSelect
	mov ecx,dword ptr [esi+0xEC]
	xor edx,edx
	cmp dword ptr [esi+0x17C],edx
	sete dl
	push edx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0x17C]
	mov ecx,dword ptr [esi+0xF4]
	push eax
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0x180]
	push ecx
	mov ecx,dword ptr [esi+0x104]
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0xFC]
	xor edx,edx
	cmp dword ptr [esi+0x180],edx
	sete dl
	push edx
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [esi+0x184]
	mov ecx,dword ptr [esi+0x10C]
	push eax
	call CCtrlCheckBox::SetChecked
	xor ecx,ecx
	cmp dword ptr [esi+0x184],ecx
	sete cl
	push ecx
	mov ecx,dword ptr [esi+0x114]
	call CCtrlCheckBox::SetChecked
	pop esi
	ret
}
}
// CUIChannelShift::OnMouseButton
__SUB_CLASS_THIS(00569380, __thiscall, 13322,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x10]
	push ebx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x18]
	push eax
	lea edi,[esi-4]
	push ecx
	mov ecx,edi
	call CUIChannelShift::GetIdxFromPoint
	cmp eax,0xFFFFFFFF
	je Block8

 Block1:
	cmp eax,dword ptr [esi+0x90]
	je Block8

 Block2:
	cmp dword ptr [esi+0x98],0
	jne Block4

 Block3:
	mov edx,dword ptr [ebx+0x3F78]
	cmp dword ptr [edx+eax*4],0
	jne Block8

 Block4:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,0x201
	jne Block6

 Block5:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0x8C],eax
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 0x10

 Block6:
	cmp ecx,0x203
	jne Block8

 Block7:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,edi
	call edx

 Block8:
	pop edi
	pop esi
	pop ebx
	ret 0x10
}
}
// CUIRandomMesoBag::OnCreate
_SUB_EXCEPTION_HANDLER(573A70)
__SUB_CLASS_THIS(00573A70, __thiscall, 13628,  CUIRandomMesoBag, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_573A70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0x17AD
	push eax
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x34],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x30],bl
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block6:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block14

 Block7:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x4D
	push 0xCC
	push 1
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block14:
	xor edi,edi
	jmp Block9
}
}
// CUIChannelShift::Draw
_SUB_EXCEPTION_HANDLER(56CCB0)
__SUB_CLASS_THIS(0056CCB0, __thiscall, 13320,  CUIChannelShift, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56CCB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x48],esi
	xor ebx,ebx
	push ebx
	call CWnd::Draw
	lea eax,[ebp-0x40]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov ecx,3
	mov dword ptr [ebp-4],ebx
	mov word ptr [ebp-0xA0],cx
	mov dword ptr [ebp-0x98],ebx
	mov ecx,dword ptr [esi+0xB4]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0xA0]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov edi,8
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0xA0],di
	jne Block5

 Block3:
	mov eax,dword ptr [ebp-0x98]
	xor ecx,ecx
	mov word ptr [ebp-0xA0],cx
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[ebp-0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov eax,3
	mov word ptr [ebp-0x80],ax
	mov dword ptr [ebp-0x78],ebx
	mov ecx,dword ptr [esi+0xB8]
	mov byte ptr [ebp-4],4
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp-0x80]
	push edx
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x80],di
	jne Block11

 Block9:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[ebp-0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov edi,dword ptr [ebp+0x5C]
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ebp+0x40],eax
	cmp edi,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[ebp+0x6C]
	push edx
	push edi
	mov dword ptr [ebp+0x6C],ebx
	call eax
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block16:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	mov esi,dword ptr [ebp+0x6C]
	lea edx,[ebp+0x68]
	push edx
	push edi
	mov dword ptr [ebp+0x68],ebx
	call eax
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	mov edx,dword ptr [ebp+0x68]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push esi
	push edx
	push ebx
	push ebx
	push edi
	call eax
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov ebx,dword ptr [ebp+0x60]
	test ebx,ebx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[ebp+0x6C]
	push edx
	push ebx
	mov dword ptr [ebp+0x6C],0
	call eax
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block24:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	mov esi,dword ptr [ebp+0x6C]
	lea edx,[ebp+0x68]
	push edx
	push ebx
	mov dword ptr [ebp+0x68],0
	call eax
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block26:
	mov edx,dword ptr [ebp+0x68]
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push esi
	push edx
	push 0
	push 0
	push ebx
	call eax
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block28:
	mov dword ptr [ebp+0x68],0
	mov ecx,dword ptr [ebp+0x40]
	mov eax,dword ptr [ecx+0x205C]
	push eax
	lea edx,[ebp+0x68]
	push offset _S_UIUIWINDOW2IMGCH__4
	push edx
	mov byte ptr [ebp-4],7
	call ZXString<char>::Format
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[ebp-0x60]
	push eax
	call esi
	lea ecx,[ebp-0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea edx,[ebp-0x50]
	push edx
	mov byte ptr [ebp-4],8
	call esi
	lea eax,[ebp-0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	mov bl,9
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x68]
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x60]
	push edx
	lea eax,[ebp-0x50]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x44],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xA
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[ebp-0xB0]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov ebx,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0xB0],bx
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [ebp-0xB0],ax
	mov eax,dword ptr [ebp-0xA8]
	cmp eax,esi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[ebp-0xB0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x50],bx
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,esi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x60],bx
	jne Block48

 Block46:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	cmp eax,esi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov ebx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x10
	cmp ebx,esi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[ebp+0x6C]
	push eax
	push ebx
	mov dword ptr [ebp+0x6C],esi
	call ecx
	cmp eax,esi
	jge Block55

 Block54:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block55:
	mov ecx,dword ptr [ebp+0x4C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x6C]
	push ebx
	shr eax,1
	mov ecx,0x28
	sub ecx,eax
	push ecx
	push 0x10
	push edi
	call edx
	cmp eax,esi
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block57:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0xF
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	cmp eax,esi
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov edx,dword ptr [ebp+0x48]
	cmp dword ptr [edx+0x98],esi
	mov dword ptr [ebp+0x6C],esi
	jle Block141

 Block62:
	mov eax,dword ptr [ebp+0x6C]
	push eax
	lea ecx,[ebp+0x68]
	push offset _S_UIUIWINDOWIMGCHA
	push ecx
	call ZXString<char>::Format
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[ebp-0x90]
	push edx
	call esi
	lea eax,[ebp-0x90]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block29

 Block63:
	lea ecx,[ebp-0x70]
	push ecx
	mov byte ptr [ebp-4],0x11
	call esi
	lea edx,[ebp-0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block29

 Block64:
	mov edi,dword ptr [ebp+0x68]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x12
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea eax,[ebp-0x90]
	push eax
	lea ecx,[ebp-0x70]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0xC4],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x13
	je Block1

 Block65:
	lea edx,[ebp-0xC0]
	mov byte ptr [ebp-4],0x12
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block73

 Block66:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov edi,ecx
	test ebx,ebx
	je Block68

 Block67:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block68:
	mov dword ptr [ebp+0x64],edi
	test esi,esi
	jge Block70

 Block69:
	cmp esi,0x80004002
	jne Block148

 Block70:
	mov esi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0xC0],si
	jne Block76

 Block71:
	xor eax,eax
	mov word ptr [ebp-0xC0],ax
	mov eax,dword ptr [ebp-0xB8]
	test eax,eax
	je Block77

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block73:
	test ebx,ebx
	je Block70

 Block74:
	mov eax,ebx
	mov dword ptr [ebp+0x64],0
	test eax,eax
	je Block70

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block70

 Block76:
	lea ecx,[ebp-0xC0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x70],si
	jne Block80

 Block78:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[ebp-0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x90],si
	jne Block84

 Block82:
	mov eax,dword ptr [ebp-0x88]
	xor ecx,ecx
	mov word ptr [ebp-0x90],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[ebp-0x90]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov edi,dword ptr [ebp+0x6C]
	mov esi,dword ptr [ebp+0x48]
	push edi
	lea eax,[ebp-0x3C]
	push eax
	mov ecx,esi
	call CUIChannelShift::GetRectFromIdx
	cmp edi,dword ptr [esi+0x94]
	je Block108

 Block86:
	cmp dword ptr [esi+0x9C],0
	jne Block88

 Block87:
	mov ecx,dword ptr [ebp+0x40]
	mov edx,dword ptr [ecx+0x3F78]
	cmp dword ptr [edx+edi*4],0
	jne Block108

 Block88:
	cmp edi,dword ptr [esi+0x90]
	jne Block102

 Block89:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block29

 Block90:
	mov ecx,dword ptr [esi+0xB0]
	mov esi,dword ptr [ebp+0x4C]
	mov ebx,dword ptr [ebp+0x5C]
	mov edi,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [ebp-0x38]
	mov eax,dword ptr [edx+0x80]
	push ecx
	push esi
	push edi
	push ebx
	mov byte ptr [ebp-4],0x19
	call eax
	test eax,eax
	jge Block92

 Block91:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block92:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0xF
	jne Block95

 Block93:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block29

 Block97:
	mov ebx,dword ptr [ebp-0x1C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x18]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x14]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x10]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp+0x64]
	push ebx
	lea ecx,[esi+5]
	mov esi,dword ptr [ebp+0x60]
	lea edx,[edi+8]
	mov edi,dword ptr [esi]
	push ecx
	push edx
	mov edx,dword ptr [edi+0x80]
	push esi
	mov byte ptr [ebp-4],0x1A
	call edx
	test eax,eax
	jge Block99

 Block98:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block99:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xF
	jne Block101

 Block100:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	jmp Block134

 Block101:
	lea ecx,[ebp-0x1C]
	jmp Block137

 Block102:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block29

 Block103:
	mov ebx,dword ptr [ebp+0x30]
	mov ecx,dword ptr [ebp-0x38]
	mov edx,dword ptr [ebp-0x3C]
	mov esi,dword ptr [ebp+0x60]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x34]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x38]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp+0x64]
	push ebx
	add ecx,5
	push ecx
	mov ecx,dword ptr [edi+0x80]
	add edx,8
	push edx
	push esi
	mov byte ptr [ebp-4],0x1B
	call ecx
	test eax,eax
	jge Block105

 Block104:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block105:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0xF
	jne Block107

 Block106:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	jmp Block134

 Block107:
	lea eax,[ebp+0x30]
	push eax
	jmp Block138

 Block108:
	cmp edi,dword ptr [esi+0x90]
	jne Block122

 Block109:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block29

 Block110:
	mov ecx,dword ptr [esi+0xB0]
	mov esi,dword ptr [ebp+0x20]
	mov ebx,dword ptr [ebp+0x5C]
	mov edi,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp+0x24]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x28]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp+0x2C]
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [ebp-0x38]
	mov eax,dword ptr [edx+0x80]
	push ecx
	push esi
	push edi
	push ebx
	mov byte ptr [ebp-4],0x15
	call eax
	test eax,eax
	jge Block112

 Block111:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block112:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0xF
	jne Block115

 Block113:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block29

 Block117:
	mov ebx,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+4]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+8]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0xC]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp+0x64]
	push ebx
	lea ecx,[esi+5]
	mov esi,dword ptr [ebp+0x60]
	lea edx,[edi+8]
	mov edi,dword ptr [esi]
	push ecx
	push edx
	mov edx,dword ptr [edi+0x80]
	push esi
	mov byte ptr [ebp-4],0x16
	call edx
	test eax,eax
	jge Block119

 Block118:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block119:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xF
	jne Block121

 Block120:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	jmp Block134

 Block121:
	lea ecx,[ebp]
	jmp Block137

 Block122:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block29

 Block123:
	mov ecx,dword ptr [esi+0xAC]
	mov esi,dword ptr [ebp-0x2C]
	mov ebx,dword ptr [ebp+0x5C]
	mov edi,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x28]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp-0x24]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp-0x20]
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [ebp-0x38]
	mov eax,dword ptr [edx+0x80]
	push ecx
	push esi
	push edi
	push ebx
	mov byte ptr [ebp-4],0x17
	call eax
	test eax,eax
	jge Block125

 Block124:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block125:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0xF
	jne Block128

 Block126:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block29

 Block130:
	mov ebx,dword ptr [ebp+0x10]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x14]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x18]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x1C]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp+0x64]
	push ebx
	lea ecx,[esi+5]
	mov esi,dword ptr [ebp+0x60]
	lea edx,[edi+8]
	mov edi,dword ptr [esi]
	push ecx
	push edx
	mov edx,dword ptr [edi+0x80]
	push esi
	mov byte ptr [ebp-4],0x18
	call edx
	test eax,eax
	jge Block132

 Block131:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block132:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0xF
	jne Block136

 Block133:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]

 Block134:
	test eax,eax
	je Block139

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block136:
	lea ecx,[ebp+0x10]

 Block137:
	push ecx

 Block138:
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov eax,dword ptr [ebp+0x6C]
	mov edx,dword ptr [ebp+0x48]
	inc eax
	cmp eax,dword ptr [edx+0x98]
	mov dword ptr [ebp+0x6C],eax
	jl Block62

 Block140:
	mov edi,dword ptr [ebp+0x5C]
	xor esi,esi

 Block141:
	mov byte ptr [ebp-4],7
	cmp ebx,esi
	je Block143

 Block142:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block143:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],6
	cmp eax,esi
	je Block145

 Block144:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block145:
	mov eax,dword ptr [ebp+0x60]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],3
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp-0x40]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block147

 Block146:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block147:
	lea esp,[ebp-0xD4]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret 4

 Block148:
	push esi
	call _com_issue_error
}
}
// CUIGachaponBox::OnCreate
_SUB_EXCEPTION_HANDLER(570660)
__SUB_CLASS_THIS(00570660, __thiscall, 13474,  CUIGachaponBox, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_570660
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x10]
	push 0x512
	push eax
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
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
	mov dword ptr [esp+0x10],eax
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
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block16

 Block6:
	add eax,8
	cmp eax,ebx
	je Block16

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0x90]
	neg eax
	push ebx
	sbb eax,eax
	push 0x93
	and eax,0x21
	add eax,0x1E
	push eax
	push 0x3E8
	push esi
	call edx
	cmp dword ptr [esi+0x90],ebx
	jne Block19

 Block12:
	lea eax,[esp+0x10]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x34],bl
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],4
	cmp eax,ebx
	je Block17

 Block15:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block18

 Block16:
	xor edi,edi
	jmp Block9

 Block17:
	xor eax,eax

 Block18:
	push eax
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x38],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0x93
	push 0x5F
	push 0x3E9
	push esi
	call edx

 Block19:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 4
}
}
// CUIChannelShift::OnKey
// 968960
static uint8_t _SUB_5687A0_LOOKUP_TABLE_0[28] = {
0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 2, 3, 4, 5, 
};
__SUB_CLASS_THIS(005687A0, __thiscall, 13323,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block37

 Block1:
	push ebp
	mov ebp,dword ptr [esp+8]
	cmp ebp,0x25
	je Block3

 Block2:
	cmp ebp,0x27
	jne Block4

 Block3:
	cmp dword ptr [ecx+0x94],2
	jl Block36

 Block4:
	cmp ebp,0x28
	je Block6

 Block5:
	cmp ebp,0x26
	jne Block7

 Block6:
	cmp dword ptr [ecx+0x94],7
	jl Block36

 Block7:
	lea eax,[ebp-0xD]
	push esi
	mov esi,dword ptr [ecx+0x8C]
	cmp eax,0x1B
	ja Block35

 Block8:
	movzx eax,byte ptr [eax+_SUB_5687A0_LOOKUP_TABLE_0]
	push edi
	cmp EAX, 0
je Block32
cmp EAX, 1
je Block33
cmp EAX, 2
je Block9
cmp EAX, 3
je Block15
cmp EAX, 4
je Block12
cmp EAX, 5
je Block20
cmp EAX, 6
je Block34


 Block9:
	cmp esi,1
	jge Block11

 Block10:
	mov eax,dword ptr [ecx+0x94]
	dec eax
	mov dword ptr [ecx+0x8C],eax
	jmp Block26

 Block11:
	lea eax,[esi-1]
	mov dword ptr [ecx+0x8C],eax
	jmp Block26

 Block12:
	mov edx,dword ptr [ecx+0x94]
	dec edx
	cmp esi,edx
	jge Block14

 Block13:
	lea eax,[esi+1]
	mov dword ptr [ecx+0x8C],eax
	jmp Block26

 Block14:
	xor eax,eax
	mov dword ptr [ecx+0x8C],eax
	jmp Block26

 Block15:
	mov eax,esi
	cdq
	mov edi,5
	idiv edi
	mov edi,edx
	cmp eax,0xFFFFFFFF
	je Block19

 Block16:
	test eax,eax
	je Block18

 Block17:
	lea eax,[esi-5]
	mov dword ptr [ecx+0x8C],eax
	jmp Block26

 Block18:
	mov eax,dword ptr [ecx+0x94]
	push ebx
	cdq
	mov ebx,5
	idiv ebx
	xor ebx,ebx
	dec edx
	cmp edx,edi
	setge bl
	lea edx,[eax+eax*4]
	dec ebx
	and ebx,5
	sub edx,ebx
	add edx,edi
	pop ebx
	jmp Block25

 Block19:
	mov eax,dword ptr [ecx+0x94]
	dec eax
	mov dword ptr [ecx+0x8C],eax
	jmp Block26

 Block20:
	mov edx,dword ptr [ecx+0x94]
	sub edx,5
	cmp esi,edx
	jge Block24

 Block21:
	mov eax,0x66666667
	imul esi
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	jns Block23

 Block22:
	xor edx,edx
	jmp Block25

 Block23:
	lea edx,[esi+5]
	jmp Block25

 Block24:
	mov eax,esi
	cdq
	mov edi,5
	idiv edi

 Block25:
	mov dword ptr [ecx+0x8C],edx

 Block26:
	cmp dword ptr [ecx+0x94],1
	jle Block31

 Block27:
	mov eax,dword ptr [ecx+0x8C]
	test eax,eax
	jl Block31

 Block28:
	cmp eax,dword ptr [ecx+0x90]
	jne Block31

 Block29:
	cmp eax,esi
	je Block31

 Block30:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx]
	push eax
	push ebp
	call edx
	pop edi
	pop esi
	pop ebp
	ret 8

 Block31:
	push 0
	add ecx,0xFFFFFFFC
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	ret 8

 Block32:
	mov eax,dword ptr [ecx-4]
	mov edx,dword ptr [eax+0x34]
	add ecx,0xFFFFFFFC
	push 1
	call edx
	pop edi
	pop esi
	pop ebp
	ret 8

 Block33:
	mov eax,dword ptr [ecx-4]
	mov edx,dword ptr [eax+0x34]
	add ecx,0xFFFFFFFC
	push 2
	call edx

 Block34:
	pop edi

 Block35:
	pop esi

 Block36:
	pop ebp

 Block37:
	ret 8
}
}
// CUIBlockUser::SetResult
_SUB_EXCEPTION_HANDLER(570150)
__SUB_CLASS_THIS0(00570150, __thiscall, 13401,  CUIBlockUser, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_570150
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
	mov ecx,dword ptr [esi+0xC0]
	lea eax,[esp+8]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov dword ptr [esi+0x98],eax
	mov eax,dword ptr [esp+0xC]
	add esp,4
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xD0]
	mov eax,dword ptr [eax+0x68]
	mov ecx,dword ptr [esi+0xC8]
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esi+0x9C],eax
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esi+0xA0]
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CUICashGachapon::OnMouseMove
_SUB_EXCEPTION_HANDLER(56A0B0)
__SUB_CLASS_THIS(0056A0B0, __thiscall, 13607,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56A0B0
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
	mov eax,dword ptr [esi+0xE8]
	test eax,eax
	je Block19

 Block1:
	mov ecx,dword ptr [esi+0xD8]
	cmp ecx,5
	jl Block18

 Block2:
	cmp ecx,6
	jle Block10

 Block3:
	cmp ecx,7
	jne Block18

 Block4:
	mov edi,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0x34]
	lea ecx,[edi-0x5C]
	cmp ecx,0x40
	ja Block7

 Block5:
	cmp ebx,0x97
	jl Block7

 Block6:
	cmp ebx,0xD7
	jle Block9

 Block7:
	lea edx,[edi-0xFC]
	cmp edx,0x40
	ja Block18

 Block8:
	lea ecx,[ebx-0x97]
	cmp ecx,0x40
	ja Block18

 Block9:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x14]
	push edx
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x40],2
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	lea ecx,[eax+edi+0x14]
	push ecx
	lea ecx,[esi+0xF8]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block19

 Block10:
	mov edi,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0x34]
	lea edx,[edi-0xB2]
	cmp edx,0x40
	ja Block14

 Block11:
	lea ecx,[ebx-0x97]
	cmp ecx,0x40
	ja Block14

 Block12:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CItemInfo::GetItemSlot
	mov dword ptr [esp+0x28],0

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [esi]
	push 0
	push 0
	push 0
	push 0
	push 0
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
	lea ecx,[eax+edi+0x14]
	push ecx
	lea ecx,[esi+0xF8]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block19

 Block14:
	mov eax,dword ptr [esi+0xF0]
	test eax,eax
	je Block18

 Block15:
	lea edx,[edi-0x168]
	cmp edx,0x28
	ja Block18

 Block16:
	lea ecx,[ebx-0x118]
	cmp ecx,0x23
	ja Block18

 Block17:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CItemInfo::GetItemSlot
	mov dword ptr [esp+0x28],1
	jmp Block13

 Block18:
	lea ecx,[esi+0xF8]
	call CUIToolTip::ClearToolTip

 Block19:
	xor eax,eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 8
}
}
// CUIContextMenu::HitTest
__SUB_CLASS_THIS(00568AF0, __thiscall, 13348,  CUIContextMenu, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	jmp  CWnd::HitTest
}
}
// CUIArtSpeakerSample::OnMouseButton
__SUB_CLASS_THIS(00568D90, __thiscall, 13496,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x28]
	push esi
	push edi
	mov edi,dword ptr [esp+0x24]
	mov ebx,ecx
	cmp edi,0x201
	je Block4

 Block1:
	cmp edi,0x202
	je Block4

 Block2:
	cmp edi,0x204
	je Block4

 Block3:
	cmp edi,0x205
	jne Block6

 Block4:
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [ebx-4]
	mov edx,dword ptr [eax+0x24]
	push 0
	lea esi,[ebx-4]
	push ebp
	push ecx
	mov ecx,esi
	call edx
	test eax,eax
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10

 Block6:
	cmp edi,0x201
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x2C]
	push ebp
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x1C],0xB
	mov dword ptr [esp+0x20],0xA
	mov dword ptr [esp+0x24],0x4D
	mov dword ptr [esp+0x28],0x16
	call PtInRect
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [ebx-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[ebx-4]
	push 5
	call eax

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CUICashGachapon::OnButtonClicked
_SUB_EXCEPTION_HANDLER(57A330)
__SUB_CLASS_THIS(0057A330, __thiscall, 13605,  CUICashGachapon, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57A330
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
	mov ebx,dword ptr [esp+0x58]
	lea eax,[ebx-0x7D0]
	cmp eax,3
	ja Block5

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block13
cmp EAX, 2
je Block13
cmp EAX, 3
je Block11


 Block2:
	xor ebp,ebp
	lea eax,[esp+0x30]
	mov dword ptr [esi+0xEC],ebp
	mov dword ptr [esi+0xF0],ebp
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x30]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push 0x3D887F
	push 4
	mov ecx,edi
	call CharacterData::GetItemCount
	test eax,eax
	jne Block7

 Block3:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push 0x1618
	push ecx

 Block4:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block5:
	cmp ebx,1
	jne Block33

 Block6:
	push ebx
	jmp Block36

 Block7:
	push 1
	mov ecx,edi
	call CharacterData::GetEmptySlotCount
	cmp eax,2
	jl Block10

 Block8:
	push 2
	mov ecx,edi
	call CharacterData::GetEmptySlotCount
	cmp eax,3
	jl Block10

 Block9:
	mov eax,dword ptr [esi+0xAC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	mov eax,dword ptr [esi+0xC4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	mov eax,dword ptr [esi+0xB4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	push 0xBA
	lea ecx,[esp+0x3C]
	call COutPacket::_ctor_1
	push 8
	lea ecx,[esi+0xA0]
	push ecx
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x58],ebp
	call COutPacket::EncodeBuffer
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x38]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	jmp Block5

 Block10:
	push ebp
	push 1
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x6C],esp
	push 0x1619
	push eax
	jmp Block4

 Block11:
	mov eax,dword ptr [esi+0xAC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	xor ebp,ebp
	push ebp
	call eax
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	mov eax,dword ptr [esi+0xC4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	mov eax,dword ptr [esi+0xB4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	mov ecx,dword ptr [esi+0xF0]
	mov edx,dword ptr [esi+0xEC]
	push ecx
	mov ecx,dword ptr [esi+0x94]
	push edx
	call CCashShop::OnCashGachaponCopy
	test eax,eax
	jne Block5

 Block12:
	mov eax,dword ptr [esi+0xAC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebp
	call edx
	mov eax,dword ptr [esi+0xBC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0xC4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0xB4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	jmp Block5

 Block13:
	mov eax,dword ptr [esi+0xEC]
	xor ebp,ebp
	cmp eax,ebp
	je Block31

 Block14:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x2C]
	push eax
	call CItemInfo::GetItemSlot
	mov ecx,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov dword ptr [esp+0x54],1
	call CItemInfo::IsCashItem_0
	test eax,eax
	jne Block17

 Block15:
	mov ecx,dword ptr [esp+0x2C]
	call GW_ItemSlotBase::IsCashItem
	test eax,eax
	jne Block17

 Block16:
	xor edi,edi
	jmp Block18

 Block17:
	mov edi,1

 Block18:
	mov edx,dword ptr [esi+0xEC]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x18]
	push eax
	call CItemInfo::GetItemName
	mov eax,dword ptr [esi+0xF0]
	cmp eax,1
	mov byte ptr [esp+0x50],2
	jle Block21

 Block19:
	mov dword ptr [esp+0x18],ebp
	push eax
	lea ecx,[esp+0x1C]
	push offset _S_D__2
	push ecx
	mov byte ptr [esp+0x5C],3
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],2
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	push ebp
	push offset _S_
	push ebp
	push ebp
	lea ecx,[esp+0x68]
	mov dword ptr [esp+0x68],ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	lea ecx,[esp+0x5C]
	call ZXString<char>::ReleaseBuffer
	mov bl,4
	mov byte ptr [esp+0x50],bl
	cmp edi,ebp
	je Block23

 Block22:
	lea edx,[esp+0x1C]
	push 0x161C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0x5C],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	jmp Block24

 Block23:
	lea eax,[esp+0x20]
	push 0x161D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0x5C],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]

 Block24:
	add esp,0xC
	mov byte ptr [esp+0x50],bl
	cmp eax,ebp
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x6C]
	mov dword ptr [esp+0x38],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x6C]
	add esp,0x14
	mov byte ptr [esp+0x50],2
	cmp eax,ebp
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],1
	cmp eax,ebp
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block31:
	mov ecx,dword ptr [esi+0x94]
	mov dword ptr [ecx+0x538],ebp

 Block32:
	push 2
	jmp Block36

 Block33:
	cmp ebx,2
	je Block32

 Block34:
	cmp ebx,8
	jne Block37

 Block35:
	push ebx

 Block36:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	mov ecx,esi
	call eax

 Block37:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4
}
}
// CUICancelCharacterCouponRequests::CUICancelCharacterCouponRequests
_SUB_EXCEPTION_HANDLER(56A2D0)
__SUB_CLASS_THIS(0056A2D0, __thiscall, 13431,  CUICancelCharacterCouponRequests, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56A2D0
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
	call CDialog::_ctor_default
	mov eax,dword ptr [esp+0x20]
	int 3// TODO: 	mov dword ptr [esi],offset CUICancelCharacterCouponRequests::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICancelCharacterCouponRequests::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICancelCharacterCouponRequests::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esp+0x18],0
	mov dword ptr [esi+0x98],0
	mov dword ptr [esi+0xA0],0
	mov ebx,2
	mov byte ptr [esp+0x18],bl
	test eax,eax
	jne Block2

 Block1:
	lea eax,[esp+0x20]
	push 0x12E8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x18],3
	jmp Block6

 Block2:
	cmp eax,1
	jne Block4

 Block3:
	lea ecx,[esp+0x20]
	push 0x12EB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x18],4
	jmp Block6

 Block4:
	cmp eax,ebx
	jne Block8

 Block5:
	lea edx,[esp+0x20]
	push 0x12F0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x18],5

 Block6:
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],bl
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CUtilDlg::GetComboBoxStr
__SUB_CLASS_THIS0(003B7F90, __thiscall, 12995,  CUtilDlg, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0xE4]
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	mov dword ptr [esp+8],0
	call CCtrlComboBox::GetText
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUIChannelShift::GetIdxFromPoint
__SUB_CLASS_THIS(00568A10, __thiscall, 13327,  CUIChannelShift, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov edi,ecx
	xor esi,esi
	cmp dword ptr [edi+0x98],esi
	jle Block5

 Block1:
	jmp Block3

 Block3:
	push ebp
	push ebx
	push esi
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call CUIChannelShift::GetRectFromIdx
	push eax
	call PtInRect
	test eax,eax
	jne Block6

 Block4:
	inc esi
	cmp esi,dword ptr [edi+0x98]
	jl Block3

 Block5:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 8

 Block6:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUICashGachapon::OnKey
__SUB_CLASS_THIS(00568EA0, __thiscall, 13606,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block3

 Block1:
	cmp dword ptr [esp+4],0x1B
	jne Block3

 Block2:
	mov eax,dword ptr [ecx+0x90]
	mov dword ptr [eax+0x538],0
	mov edx,dword ptr [ecx-4]
	mov eax,dword ptr [edx+0x20]
	add ecx,0xFFFFFFFC
	push 0x7D1
	call eax

 Block3:
	ret 8
}
}
// CUICashItemGachapon::OnCreate
_SUB_EXCEPTION_HANDLER(570860)
__SUB_CLASS_THIS(00570860, __thiscall, 13569,  CUICashItemGachapon, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_570860
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
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x3C],ebp
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x38],ebp
	lea eax,[esp+0x14]
	push 0x1611
	push eax
	mov dword ptr [esp+0x70],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x6C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],0
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
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x68],2
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block15

 Block6:
	add eax,8
	cmp eax,ebp
	je Block15

 Block7:
	lea esi,[eax-8]
	cmp esi,ebp
	je Block9

 Block8:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block9:
	mov eax,dword ptr [edi+0xDC]
	mov dword ptr [edi+0xDC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block11

 Block10:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [edi+0xDC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push 1
	push 0x85
	push 0x41
	push 0x7D0
	push edi
	call edx
	lea eax,[esp+0x14]
	push 0x1612
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x6C],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],0
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
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x68],4
	cmp eax,ebp
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor esi,esi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block25

 Block18:
	add eax,8
	cmp eax,ebp
	je Block25

 Block19:
	lea esi,[eax-8]
	cmp esi,ebp
	je Block21

 Block20:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block21:
	mov eax,dword ptr [edi+0xD4]
	mov dword ptr [edi+0xD4],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block23

 Block22:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [edi+0xD4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push 1
	push 8
	push 0x96
	push 0x7D1
	push edi
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block24:
	push eax
	call _com_issue_error

 Block25:
	xor esi,esi
	jmp Block21

 Block26:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x6C],5
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	push ebp
	push ebp
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,6
	push offset _S_UIUIWINDOWIMGCAS__2
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x7C],7
	cmp dword ptr [_D_G_RM],ebp
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x64]
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x70],8
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xF4]
	push eax
	mov dword ptr [esp+0x18],ecx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],bl
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,ebp
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov ebx,8
	mov byte ptr [esp+0x68],5
	cmp word ptr [esp+0x20],bx
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [esp+0x68],0
	cmp word ptr [esp+0x40],bx
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	lea ecx,[esp+0x20]
	push ecx
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x6C],9
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	push ebp
	push ebp
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0xA
	push offset _S_UIUIWINDOWIMGCAS__1
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x7C],0xB
	cmp dword ptr [_D_G_RM],ebp
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x70],0xC
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xF8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block54

 Block52:
	cmp eax,0x80004002
	je Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],bl
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,ebp
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov ebx,8
	mov byte ptr [esp+0x68],9
	cmp word ptr [esp+0x40],bx
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebp
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [esp+0x68],0
	cmp word ptr [esp+0x20],bx
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	lea edx,[esp+0x20]
	push edx
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x6C],0xD
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	push ebp
	push ebp
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0xE
	push offset _S_UIUIWINDOWIMGCAS
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x7C],0xF
	cmp dword ptr [_D_G_RM],ebp
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[esp+0x64]
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x70],0x10
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xFC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block75

 Block73:
	cmp eax,0x80004002
	je Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov esi,8
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x50],si
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov byte ptr [esp+0x68],0xD
	cmp word ptr [esp+0x40],si
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0x68],0
	cmp word ptr [esp+0x20],si
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call CWnd::GetCanvas
	mov ecx,3
	mov word ptr [esp+0x20],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x28],ecx
	mov esi,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x14]
	mov edx,dword ptr [edx]
	mov byte ptr [esp+0x68],0x12
	cmp esi,ebp
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	mov ebx,dword ptr [esp+0x20]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x34]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 0x1F
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	push 2
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebp
	jge Block91

 Block90:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block91:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],0x11
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x6C],0
	call eax
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp eax,ebp
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block97:
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
// CUIArtSpeakerSample::OnDestroy
__SUB_CLASS_THIS0(00569490, __thiscall, 13494,  CUIArtSpeakerSample, void) {
__asm {

 Block0:
	test ecx,ecx
	je Block2

 Block1:
	lea eax,[ecx+4]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::ReleaseCaptureWnd
	ret

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	push eax
	call CWndMan::ReleaseCaptureWnd
	ret
}
}
// CUtilDlg::~CUtilDlg
_SUB_EXCEPTION_HANDLER(5746D0)
__SUB_CLASS_THIS0(005746D0, __thiscall, 12981,  CUtilDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5746D0
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
	mov dword ptr [esp+0x14],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUtilDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUtilDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUtilDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [CUtilDlg::ms_lDialog+12]
	xor ebx,ebx
	mov dword ptr [esp+0x20],9
	mov dword ptr [esp+0x10],eax
	cmp eax,ebx
	je Block4

 Block1:
	mov edi,eax
	lea eax,[esp+0x10]
	push eax
	call ZList<CUtilDlg *>::GetNext
	add esp,4
	cmp esi,dword ptr [eax]
	jne Block3

 Block2:
	push edi
	mov ecx,offset CUtilDlg::ms_lDialog
	call ZList<CUtilDlg *>::RemoveAt

 Block3:
	mov eax,dword ptr [esp+0x10]
	cmp eax,ebx
	jne Block1

 Block4:
	lea ecx,[esi+0xF0]
	mov byte ptr [esp+0x20],8
	call ZArray<ZXString<char>>::RemoveAll
	lea edi,[esi+0xE8]
	mov byte ptr [esp+0x20],7
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xE0]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xD8]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xD0]
	mov byte ptr [esp+0x20],4
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x20],2
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	mov eax,dword ptr [esi+0xBC]
	mov byte ptr [esp+0x20],1
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CDialog::~CDialog
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
// CUICashItemGachapon::ClearToolTip
__SUB_CLASS_THIS0(0056A870, __thiscall, 13574,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x104
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIArtSpeakerSample::Draw
__SUB_CLASS_THIS(00568D40, __thiscall, 13499,  CUIArtSpeakerSample, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CUICashGachapon::GetRTTI
__SUB_CLASS_THIS0(0056AE30, __thiscall, 13611,  CUICashGachapon, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUICashGachapon::ms_RTTI_CUICashGachapon
	ret
}
}
// CUIPamsSong::OnCreate
_SUB_EXCEPTION_HANDLER(573BB0)
__SUB_CLASS_THIS(00573BB0, __thiscall, 13644,  CUIPamsSong, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_573BB0
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
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x14]
	push 0x1808
	push eax
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
	lea edi,[eax+8]
	cmp edi,ebx
	je Block15

 Block7:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0xB8
	push 0x3A
	push 1
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x1809
	push eax
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
	je Block26

 Block18:
	add eax,8
	cmp eax,ebx
	je Block26

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block21:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0xB8
	push 0x7F
	push 2
	push esi
	call edx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block26:
	xor edi,edi
	jmp Block21
}
}
// CUISysOpt::SetRet
__SUB_CLASS_THIS(00569980, __thiscall, 13244,  CUISysOpt, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov esi,ecx
	call CUISysOpt::GetSysOptFromCtrl
	mov ebx,dword ptr [esp+0x10]
	mov eax,ebx
	sub eax,1
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	push eax
	lea eax,[esi+0x118]
	push eax
	mov ecx,edi
	call CConfig::ApplySysOpt
	jmp Block4

 Block3:
	push 1
	lea ecx,[esi+0x150]
	push ecx
	mov ecx,edi
	call CConfig::ApplySysOpt
	mov ecx,edi
	call CConfig::SaveGlobal

 Block4:
	cmp dword ptr [esi+0x84],0
	jne Block7

 Block5:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],ebx
	mov dword ptr [esi+0x84],1
	je Block7

 Block6:
	mov ecx,esi
	call CWnd::Destroy

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUICancelCharacterCouponResults::~CUICancelCharacterCouponResults
_SUB_EXCEPTION_HANDLER(56A610)
__SUB_CLASS_THIS0(0056A610, __thiscall, 13453,  CUICancelCharacterCouponResults, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56A610
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
	int 3// TODO: 	mov dword ptr [esi],offset CUICancelCharacterCouponResults::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICancelCharacterCouponResults::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICancelCharacterCouponResults::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov dword ptr [esp+0x18],0
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
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
// CUIArtSpeakerSample::~CUIArtSpeakerSample
_SUB_EXCEPTION_HANDLER(579330)
__SUB_CLASS_THIS0(00579330, __thiscall, 13494,  CUIArtSpeakerSample, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_579330
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIArtSpeakerSample::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIArtSpeakerSample::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIArtSpeakerSample::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0x90]
	call ZArray<ZRef<CCtrlButton>>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUtilDlg::OnCreate
_SUB_EXCEPTION_HANDLER(574860)
__SUB_CLASS_THIS(00574860, __thiscall, 12983,  CUtilDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_574860
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3F0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x404]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [edi+0xB4]
	cmp eax,0x3E8
	je Block321

 Block1:
	add eax,0xFFFFFC17
	cmp eax,2
	ja Block519

 Block2:
	lea eax,[esp+0xD8]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0x78]
	push 0
	push ecx
	push eax
	mov dword ptr [esp+0x418],0x33
	mov dword ptr [esp+0x28],ecx
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0xE4]
	or esi,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x40C],esi
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x100]
	push ecx
	call ebp
	lea edx,[esp+0x100]
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
	lea eax,[esp+0x1A0]
	mov ebx,0x34
	push eax
	mov dword ptr [esp+0x410],ebx
	call ebp
	lea ecx,[esp+0x1A0]
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
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x40C],0x35
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x100]
	push eax
	mov eax,dword ptr [edi+0x28]
	lea edx,[esp+0x1A4]
	push edx
	mov edx,dword ptr [edi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov byte ptr [esp+0x40C],bl
	mov ebx,8
	cmp word ptr [esp+0x1A0],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x1A0],ax
	mov eax,dword ptr [esp+0x1A8]
	xor edi,edi
	cmp eax,edi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x1A0]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	xor edi,edi

 Block14:
	mov dword ptr [esp+0x40C],esi
	cmp word ptr [esp+0x100],bx
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x108]
	xor edx,edx
	mov word ptr [esp+0x100],dx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x100]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea ecx,[esp+0x120]
	push ecx
	call ebp
	lea edx,[esp+0x120]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea eax,[esp+0x2D0]
	push eax
	mov dword ptr [esp+0x410],0x36
	call ebp
	lea ecx,[esp+0x2D0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	push edi
	push edi
	lea edx,[esp+0x128]
	push edx
	lea eax,[esp+0x2DC]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x196F
	mov bl,0x37
	push ecx
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],0x38
	cmp dword ptr [_D_G_RM],edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x358]
	mov byte ptr [esp+0x420],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x39
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	cmp word ptr [esp+0x344],8
	mov byte ptr [esp+0x40C],0x3B
	jne Block34

 Block28:
	xor eax,eax
	mov word ptr [esp+0x344],ax
	mov eax,dword ptr [esp+0x34C]
	cmp eax,edi
	je Block30

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block30:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block31:
	mov ebx,8
	mov byte ptr [esp+0x40C],0x3C
	cmp word ptr [esp+0x2D0],bx
	jne Block35

 Block32:
	mov eax,dword ptr [esp+0x2D8]
	xor edx,edx
	mov word ptr [esp+0x2D0],dx
	cmp eax,edi
	je Block36

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block34:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x344]
	push ecx
	call esi
	jmp Block31

 Block35:
	lea eax,[esp+0x2D0]
	push eax
	call esi

 Block36:
	mov byte ptr [esp+0x40C],0x3D
	cmp word ptr [esp+0x120],bx
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x128]
	xor ecx,ecx
	mov word ptr [esp+0x120],cx
	cmp eax,edi
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x120]
	push edx
	call esi

 Block40:
	lea eax,[esp+0x140]
	push eax
	call ebp
	lea ecx,[esp+0x140]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea edx,[esp+0x270]
	push edx
	mov byte ptr [esp+0x410],0x3E
	call ebp
	lea eax,[esp+0x270]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	push edi
	push edi
	lea ecx,[esp+0x148]
	push ecx
	lea edx,[esp+0x27C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1966
	mov bl,0x3F
	push eax
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],0x40
	cmp dword ptr [_D_G_RM],edi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea ecx,[esp+0x408]
	push ecx
	mov byte ptr [esp+0x424],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x41
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block49

 Block47:
	cmp eax,0x80004002
	je Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov ebx,8
	mov byte ptr [esp+0x40C],0x43
	cmp word ptr [esp+0x3F4],bx
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x3FC]
	xor edx,edx
	mov word ptr [esp+0x3F4],dx
	cmp eax,edi
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[esp+0x3F4]
	push eax
	call esi

 Block53:
	mov byte ptr [esp+0x40C],0x44
	cmp word ptr [esp+0x270],bx
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x278]
	xor ecx,ecx
	mov word ptr [esp+0x270],cx
	cmp eax,edi
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x270]
	push edx
	call esi

 Block57:
	mov byte ptr [esp+0x40C],0x45
	cmp word ptr [esp+0x140],bx
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x140],ax
	mov eax,dword ptr [esp+0x148]
	cmp eax,edi
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x140]
	push ecx
	call esi

 Block61:
	lea edx,[esp+0x160]
	push edx
	call ebp
	lea eax,[esp+0x160]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	lea ecx,[esp+0x2B0]
	push ecx
	mov byte ptr [esp+0x410],0x46
	call ebp
	lea edx,[esp+0x2B0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	push edi
	push edi
	lea eax,[esp+0x168]
	push eax
	lea ecx,[esp+0x2BC]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x1967
	mov bl,0x47
	push edx
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],0x48
	cmp dword ptr [_D_G_RM],edi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea eax,[esp+0x378]
	mov byte ptr [esp+0x420],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x49
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block70

 Block68:
	cmp eax,0x80004002
	je Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov ebx,8
	mov byte ptr [esp+0x40C],0x4B
	cmp word ptr [esp+0x364],bx
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x36C]
	xor ecx,ecx
	mov word ptr [esp+0x364],cx
	cmp eax,edi
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[esp+0x364]
	push edx
	call esi

 Block74:
	mov byte ptr [esp+0x40C],0x4C
	cmp word ptr [esp+0x2B0],bx
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x2B0],ax
	mov eax,dword ptr [esp+0x2B8]
	cmp eax,edi
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x2B0]
	push ecx
	call esi

 Block78:
	mov byte ptr [esp+0x40C],0x4D
	cmp word ptr [esp+0x160],bx
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x168]
	xor edx,edx
	mov word ptr [esp+0x160],dx
	cmp eax,edi
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea eax,[esp+0x160]
	push eax
	call esi

 Block82:
	lea ecx,[esp+0x180]
	push ecx
	call ebp
	lea edx,[esp+0x180]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	lea eax,[esp+0x290]
	push eax
	mov byte ptr [esp+0x410],0x4E
	call ebp
	lea ecx,[esp+0x290]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	push edi
	push edi
	lea edx,[esp+0x188]
	push edx
	lea eax,[esp+0x29C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x1964
	push ecx
	mov byte ptr [esp+0x428],0x4F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],0x50
	cmp dword ptr [_D_G_RM],edi
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea edx,[esp+0x3F8]
	mov byte ptr [esp+0x420],0x4F
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x51
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block91

 Block89:
	cmp eax,0x80004002
	je Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	mov byte ptr [esp+0x40C],0x53
	cmp word ptr [esp+0x3E4],bx
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [esp+0x3E4],ax
	mov eax,dword ptr [esp+0x3EC]
	cmp eax,edi
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[esp+0x3E4]
	push ecx
	call esi

 Block95:
	mov byte ptr [esp+0x40C],0x54
	cmp word ptr [esp+0x290],bx
	jne Block98

 Block96:
	mov eax,dword ptr [esp+0x298]
	xor edx,edx
	mov word ptr [esp+0x290],dx
	cmp eax,edi
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea eax,[esp+0x290]
	push eax
	call esi

 Block99:
	mov byte ptr [esp+0x40C],0x55
	cmp word ptr [esp+0x180],bx
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x188]
	xor ecx,ecx
	mov word ptr [esp+0x180],cx
	cmp eax,edi
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[esp+0x180]
	push edx
	call esi

 Block103:
	lea eax,[esp+0xE0]
	push eax
	call ebp
	lea ecx,[esp+0xE0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	lea edx,[esp+0x230]
	push edx
	mov byte ptr [esp+0x410],0x56
	call ebp
	lea eax,[esp+0x230]
	push offset _D_VTMISSING
	push eax
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
	lea ecx,[esp+0xE8]
	push ecx
	lea edx,[esp+0x23C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x196E
	mov bl,0x57
	push eax
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],0x58
	cmp dword ptr [_D_G_RM],edi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea ecx,[esp+0x398]
	push ecx
	mov byte ptr [esp+0x424],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x59
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
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
	mov byte ptr [esp+0x40C],0x5B
	cmp word ptr [esp+0x384],bx
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x38C]
	xor edx,edx
	mov word ptr [esp+0x384],dx
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[esp+0x384]
	push eax
	call esi

 Block116:
	mov byte ptr [esp+0x40C],0x5C
	cmp word ptr [esp+0x230],bx
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x238]
	xor ecx,ecx
	mov word ptr [esp+0x230],cx
	cmp eax,edi
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x230]
	push edx
	call esi

 Block120:
	mov byte ptr [esp+0x40C],0x5D
	cmp word ptr [esp+0xE0],bx
	jne Block123

 Block121:
	xor eax,eax
	mov word ptr [esp+0xE0],ax
	mov eax,dword ptr [esp+0xE8]
	cmp eax,edi
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea ecx,[esp+0xE0]
	push ecx
	call esi

 Block124:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0xA4]
	mov edi,0x2F
	mov dword ptr [esp+0x34],edi
	mov ecx,0x3EA
	test eax,eax
	jne Block127

 Block125:
	cmp dword ptr [edx+0xA8],eax
	jne Block127

 Block126:
	cmp dword ptr [edx+0xB4],ecx
	jne Block128

 Block127:
	mov edi,0x4F
	mov dword ptr [esp+0x34],edi

 Block128:
	test eax,eax
	je Block131

 Block129:
	cmp dword ptr [edx+0xB4],ecx
	jne Block131

 Block130:
	add edi,0x16
	mov dword ptr [esp+0x34],edi

 Block131:
	lea edx,[esp+0x260]
	push edx
	call ebp
	lea eax,[esp+0x260]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block133

 Block132:
	push eax
	call _com_issue_error

 Block133:
	mov ecx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x40C],0x5E
	test ecx,ecx
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x260]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x260],8
	mov byte ptr [esp+0x40C],0x5D
	jne Block138

 Block136:
	mov eax,dword ptr [esp+0x268]
	xor ecx,ecx
	mov word ptr [esp+0x260],cx
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea edx,[esp+0x260]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x28]
	mov ebp,dword ptr [esp+0x2C]
	mov esi,0x14
	sub ecx,edi
	cmp ecx,esi
	jle Block148

 Block140:
	mov bl,0x5F
	lea ebx,[ebx]

 Block141:
	lea edx,[esp+0x1C0]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block142:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x78]
	add eax,0x78
	mov byte ptr [esp+0x40C],bl
	test ecx,ecx
	je Block9

 Block143:
	lea edx,[esp+0x1C0]
	push edx
	push ebp
	push esi
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C0],8
	mov byte ptr [esp+0x40C],0x5D
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [esp+0x1C0],ax
	mov eax,dword ptr [esp+0x1C8]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[esp+0x1C0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x28]
	add esi,0x10
	sub eax,edi
	cmp esi,eax
	jl Block141

 Block148:
	lea ecx,[esp+0x280]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x280]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block150

 Block149:
	push eax
	call _com_issue_error

 Block150:
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebx+0x78]
	mov byte ptr [esp+0x40C],0x60
	test ecx,ecx
	jne Block152

 Block151:
	push 0x80004003
	call _com_issue_error

 Block152:
	mov edx,dword ptr [esp+0x28]
	lea eax,[esp+0x280]
	push eax
	mov eax,dword ptr [ebx+0x28]
	push edx
	sub eax,edi
	push eax
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x280],8
	mov byte ptr [esp+0x40C],0x5D
	jne Block155

 Block153:
	mov eax,dword ptr [esp+0x288]
	xor ecx,ecx
	mov word ptr [esp+0x280],cx
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea edx,[esp+0x280]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov eax,dword ptr [ebx+0x28]
	mov ebp,dword ptr [esp+0x30]
	mov esi,eax
	sub esi,edi
	add esi,0x10
	add eax,0xFFFFFFF1
	cmp esi,eax
	jge Block168

 Block157:
	mov bl,0x61
	lea esp,[esp]

 Block158:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block159:
	mov edx,dword ptr [esp+0x14]
	mov edi,dword ptr [edx+0x78]
	mov byte ptr [esp+0x40C],bl
	test edi,edi
	je Block9

 Block160:
	mov edx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x64]
	push ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x6C]
	push esi
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push edi
	call eax
	test eax,eax
	jge Block162

 Block161:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block162:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x40C],0x5D
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x28]
	add esi,0x10
	sub ecx,0xF
	cmp esi,ecx
	jl Block158

 Block167:
	mov ebx,eax

 Block168:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x9C]
	push edx
	call edi
	lea eax,[esp+0x9C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block170

 Block169:
	push eax
	call _com_issue_error

 Block170:
	mov esi,dword ptr [ebx+0x78]
	mov byte ptr [esp+0x40C],0x62
	test esi,esi
	jne Block172

 Block171:
	push 0x80004003
	call _com_issue_error

 Block172:
	mov ebp,dword ptr [esp+0x9C]
	mov ecx,dword ptr [ebx+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0xB0]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0xB4]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0xB8]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x34]
	push eax
	sub ecx,0xF
	push ecx
	mov ecx,dword ptr [edx+0x80]
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block174

 Block173:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block174:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0x40C],0x5D
	jne Block177

 Block175:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block178:
	cmp dword ptr [ebx+0x94],0
	je Block213

 Block179:
	lea ecx,[esp+0x2A0]
	push ecx
	call edi
	lea edx,[esp+0x2A0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	lea eax,[esp+0x1E0]
	push eax
	mov byte ptr [esp+0x410],0x63
	call edi
	lea ecx,[esp+0x1E0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	mov edi,dword ptr [esp+0x14]
	push 0
	push 0
	lea edx,[esp+0x2A8]
	push edx
	mov edx,dword ptr [edi+0x98]
	lea eax,[esp+0x1EC]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push edx
	mov bl,0x64
	push ecx
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x420],0x65
	jne Block185

 Block184:
	push 0x80004003
	call _com_issue_error

 Block185:
	lea eax,[esp+0x3D8]
	mov byte ptr [esp+0x420],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x66
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block188

 Block186:
	cmp eax,0x80004002
	je Block188

 Block187:
	push eax
	call _com_issue_error

 Block188:
	mov esi,8
	mov byte ptr [esp+0x40C],0x68
	cmp word ptr [esp+0x3C4],si
	jne Block195

 Block189:
	mov eax,dword ptr [esp+0x3CC]
	xor ecx,ecx
	mov word ptr [esp+0x3C4],cx
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block191:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block192:
	mov byte ptr [esp+0x40C],0x69
	cmp word ptr [esp+0x1E0],si
	jne Block196

 Block193:
	xor eax,eax
	mov word ptr [esp+0x1E0],ax
	mov eax,dword ptr [esp+0x1E8]
	test eax,eax
	je Block197

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block195:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x3C4]
	push edx
	call ebp
	jmp Block192

 Block196:
	lea ecx,[esp+0x1E0]
	push ecx
	call ebp

 Block197:
	mov bl,0x6A
	mov byte ptr [esp+0x40C],bl
	cmp word ptr [esp+0x2A0],si
	jne Block200

 Block198:
	mov eax,dword ptr [esp+0x2A8]
	xor edx,edx
	mov word ptr [esp+0x2A0],dx
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea eax,[esp+0x2A0]
	push eax
	call ebp

 Block201:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block203

 Block202:
	push eax
	call _com_issue_error

 Block203:
	mov esi,dword ptr [edi+0x78]
	mov byte ptr [esp+0x40C],0x6B
	test esi,esi
	jne Block205

 Block204:
	push 0x80004003
	call _com_issue_error

 Block205:
	mov edx,dword ptr [esp+0x7C]
	mov edi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x90]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x94]
	push edi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x9C]
	push 0x13
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block207

 Block206:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block207:
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0x40C],bl
	jne Block210

 Block208:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea edx,[esp+0x7C]
	push edx
	call ebp

 Block211:
	mov byte ptr [esp+0x40C],0x5D
	test edi,edi
	je Block213

 Block212:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block213:
	mov edx,dword ptr [esp+0x14]
	cmp dword ptr [edx+0xB4],0x3EA
	jne Block248

 Block214:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C0]
	push eax
	call esi
	lea ecx,[esp+0x2C0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block216

 Block215:
	push eax
	call _com_issue_error

 Block216:
	lea edx,[esp+0x200]
	push edx
	mov byte ptr [esp+0x410],0x6C
	call esi
	lea eax,[esp+0x200]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block218

 Block217:
	push eax
	call _com_issue_error

 Block218:
	push 0
	push 0
	lea ecx,[esp+0x2C8]
	push ecx
	lea edx,[esp+0x20C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1965
	mov bl,0x6D
	push eax
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x420],0x6E
	jne Block220

 Block219:
	push 0x80004003
	call _com_issue_error

 Block220:
	lea ecx,[esp+0x3B8]
	push ecx
	mov byte ptr [esp+0x424],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x6F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block223

 Block221:
	cmp eax,0x80004002
	je Block223

 Block222:
	push eax
	call _com_issue_error

 Block223:
	mov esi,8
	mov byte ptr [esp+0x40C],0x71
	cmp word ptr [esp+0x3A4],si
	jne Block230

 Block224:
	mov eax,dword ptr [esp+0x3AC]
	xor edx,edx
	mov word ptr [esp+0x3A4],dx
	test eax,eax
	je Block226

 Block225:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block226:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block227:
	mov byte ptr [esp+0x40C],0x72
	cmp word ptr [esp+0x200],si
	jne Block231

 Block228:
	mov eax,dword ptr [esp+0x208]
	xor ecx,ecx
	mov word ptr [esp+0x200],cx
	test eax,eax
	je Block232

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block232

 Block230:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x3A4]
	push eax
	call ebp
	jmp Block227

 Block231:
	lea edx,[esp+0x200]
	push edx
	call ebp

 Block232:
	mov bl,0x73
	mov byte ptr [esp+0x40C],bl
	cmp word ptr [esp+0x2C0],si
	jne Block235

 Block233:
	xor eax,eax
	mov word ptr [esp+0x2C0],ax
	mov eax,dword ptr [esp+0x2C8]
	test eax,eax
	je Block236

 Block234:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block236

 Block235:
	lea ecx,[esp+0x2C0]
	push ecx
	call ebp

 Block236:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block238

 Block237:
	push eax
	call _com_issue_error

 Block238:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [eax+0x78]
	mov byte ptr [esp+0x40C],0x74
	test esi,esi
	jne Block240

 Block239:
	push 0x80004003
	call _com_issue_error

 Block240:
	mov ecx,dword ptr [eax+0x28]
	mov edi,dword ptr [esp+0x3C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x50]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x54]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x2C]
	mov eax,dword ptr [edx+0x80]
	push edi
	sub ecx,0x40
	push ecx
	push 0
	push esi
	call eax
	test eax,eax
	jge Block242

 Block241:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block242:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x40C],bl
	jne Block245

 Block243:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea edx,[esp+0x3C]
	push edx
	call ebp

 Block246:
	mov byte ptr [esp+0x40C],0x5D
	test edi,edi
	je Block248

 Block247:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block248:
	xor esi,esi
	mov dword ptr [esp+0xC8],esi
	mov dword ptr [esp+0xBC],1
	mov dword ptr [esp+0xC0],esi
	mov dword ptr [esp+0xC4],esi
	lea edx,[esp+0xDC]
	push 0x1963
	push edx
	mov byte ptr [esp+0x414],0x75
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0xCC]
	mov byte ptr [esp+0x410],0x76
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0xDC]
	mov byte ptr [esp+0x40C],0x75
	cmp eax,esi
	je Block250

 Block249:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block250:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x40C],0x77
	cmp eax,esi
	je Block252

 Block251:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block253

 Block252:
	xor eax,eax

 Block253:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x40C],0x75
	test eax,eax
	je Block265

 Block254:
	add eax,8
	je Block265

 Block255:
	lea esi,[eax-8]
	test esi,esi
	je Block257

 Block256:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block257:
	mov ebx,dword ptr [esp+0x14]
	mov eax,dword ptr [ebx+0xD4]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [ebx+0xD4],esi
	test eax,eax
	je Block261

 Block258:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call edi
	test eax,eax
	jne Block261

 Block259:
	lea edx,[esi+4]
	push edx
	call ebp
	test esi,esi
	je Block261

 Block260:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block261:
	mov esi,dword ptr [ebx+0x28]
	mov ecx,dword ptr [ebx+0xD4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0xBC]
	push edx
	mov edx,dword ptr [ebx+0xA4]
	neg edx
	sbb edx,edx
	and edx,3
	push 0
	sub esi,edx
	sub esi,0x1F
	push esi
	push 0x9C
	push 6
	push ebx
	call eax
	lea ecx,[esp+0xCC]
	push 0x1961
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0xCC]
	mov byte ptr [esp+0x410],0x78
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0xCC]
	mov byte ptr [esp+0x40C],0x75
	test eax,eax
	je Block263

 Block262:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block263:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x40C],0x79
	test eax,eax
	je Block266

 Block264:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block267

 Block265:
	xor esi,esi
	jmp Block257

 Block266:
	xor eax,eax

 Block267:
	mov byte ptr [esp+0x40C],0x75
	test eax,eax
	je Block278

 Block268:
	add eax,8
	je Block278

 Block269:
	lea esi,[eax-8]
	test esi,esi
	je Block271

 Block270:
	lea edx,[esi+0xC]
	push edx
	call ebp

 Block271:
	mov eax,dword ptr [ebx+0xDC]
	mov dword ptr [ebx+0xDC],esi
	test eax,eax
	je Block275

 Block272:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call edi
	test eax,eax
	jne Block275

 Block273:
	lea ecx,[esi+4]
	push ecx
	call ebp
	test esi,esi
	je Block275

 Block274:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block275:
	mov esi,dword ptr [ebx+0x28]
	mov ecx,dword ptr [ebx+0xDC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0xBC]
	push eax
	mov eax,dword ptr [ebx+0xA4]
	neg eax
	sbb eax,eax
	and eax,3
	push 0
	sub esi,eax
	sub esi,0x1F
	push esi
	push 0xC6
	push 7
	push ebx
	call edx
	cmp dword ptr [ebx+0xA4],0
	je Block289

 Block276:
	lea ecx,[esp+0x2F0]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	mov bl,0x7A
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x410],bl
	mov dword ptr [esp+0x2F4],0xFFEEEEEE
	mov dword ptr [esp+0x2F8],0xFFA5A198
	mov dword ptr [esp+0x2FC],0xFF999999
	mov dword ptr [esp+0x310],2
	mov dword ptr [esp+0x308],0xDA
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x40C],0x7B
	test eax,eax
	je Block279

 Block277:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block280

 Block278:
	xor esi,esi
	jmp Block271

 Block279:
	xor eax,eax

 Block280:
	mov byte ptr [esp+0x40C],bl
	test eax,eax
	je Block288

 Block281:
	add eax,8
	je Block288

 Block282:
	lea esi,[eax-8]
	test esi,esi
	je Block284

 Block283:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block284:
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0xE4]
	mov dword ptr [edi+0xE4],esi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block286

 Block285:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block286:
	mov esi,dword ptr [edi+0x28]
	mov ecx,dword ptr [edi+0xE4]
	mov edx,dword ptr [ecx]
	lea eax,[esp+0x2F0]
	push eax
	xor eax,eax
	cmp dword ptr [edi+0xB4],0x3EA
	mov edx,dword ptr [edx+0x28]
	setne al
	push 0x12
	push 0xDF
	dec eax
	and eax,2
	sub eax,dword ptr [esp+0x40]
	lea eax,[eax+esi+0x10]
	push eax
	push 0x15
	push 0
	push 0xBB9
	push edi
	call edx
	mov ecx,dword ptr [esp+0x33C]
	mov byte ptr [esp+0x40C],0x75
	test ecx,ecx
	je Block290

 Block287:
	call _xbstr_t::Data_t::Release
	jmp Block290

 Block288:
	xor esi,esi
	jmp Block284

 Block289:
	mov edi,dword ptr [esp+0x14]

 Block290:
	cmp dword ptr [edi+0xB4],0x3EA
	jne Block302

 Block291:
	lea ecx,[esp+0x2F0]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov eax,2
	mov dword ptr [esp+0x2F4],eax
	lea eax,[esp+0x38]
	xor ecx,ecx
	push 0x1A25
	mov bl,0x7C
	push eax
	mov byte ptr [esp+0x414],bl
	mov dword ptr [esp+0x300],ecx
	mov dword ptr [esp+0x31C],0xFFFFFFFF
	mov dword ptr [esp+0x314],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,eax
	lea ecx,[esp+0x304]
	cmp ecx,esi
	je Block296

 Block292:
	mov ecx,dword ptr [esp+0x304]
	test ecx,ecx
	je Block294

 Block293:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x304],0

 Block294:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x304],esi
	test esi,esi
	je Block296

 Block295:
	add esi,8
	push esi
	call ebp

 Block296:
	mov ecx,dword ptr [esp+0x38]
	test ecx,ecx
	je Block298

 Block297:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x38],0

 Block298:
	mov edx,dword ptr [edi+0xB8]
	lea eax,[edi+0xBC]
	push eax
	lea ecx,[esp+0x2F4]
	mov dword ptr [esp+0x324],edx
	call ZXString<char>::op_assign
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x40C],0x7D
	test eax,eax
	je Block300

 Block299:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block301

 Block300:
	xor eax,eax

 Block301:
	push eax
	lea ecx,[edi+0xC0]
	mov byte ptr [esp+0x410],bl
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x2F0]
	push eax
	mov eax,dword ptr [edi+0x28]
	push 0xF
	push 0xD8
	sub eax,0x3D
	push eax
	push 0x16
	push 0xBB8
	push edi
	call edx
	mov eax,dword ptr [edi+0xC4]
	push eax
	mov ecx,edi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x2F0]
	mov byte ptr [esp+0x40C],0x75
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM

 Block302:
	xor esi,esi
	cmp dword ptr [edi+0xA8],esi
	je Block310

 Block303:
	lea ecx,[esp+0x2F0]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov eax,0xE
	mov bl,0x7E
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x410],bl
	mov dword ptr [esp+0x2F8],esi
	mov dword ptr [esp+0x310],eax
	mov dword ptr [esp+0x314],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x40C],0x7F
	cmp eax,esi
	je Block305

 Block304:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block306

 Block305:
	xor eax,eax

 Block306:
	push eax
	lea ecx,[edi+0xE8]
	mov byte ptr [esp+0x410],bl
	call ZRef<CCtrlCheckBox>::op_assign_ptr
	mov ecx,dword ptr [edi+0xEC]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x2F0]
	push edx
	mov edx,dword ptr [edi+0x28]
	sub edx,0x40
	push edx
	push 0x12
	push 0xBBA
	push edi
	call eax
	mov ecx,dword ptr [esp+0x2FC]
	mov byte ptr [esp+0x40C],0x75
	cmp ecx,esi
	je Block308

 Block307:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x2FC],esi

 Block308:
	mov eax,dword ptr [esp+0x2F8]
	cmp eax,esi
	je Block310

 Block309:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block310:
	mov eax,dword ptr [esp+0xC8]
	mov byte ptr [esp+0x40C],0x5D
	cmp eax,esi
	je Block312

 Block311:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block312:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x40C],0x55
	cmp eax,esi
	je Block314

 Block313:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block314:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x40C],0x4D
	cmp eax,esi
	je Block316

 Block315:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block316:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x40C],0x45
	cmp eax,esi
	je Block318

 Block317:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block318:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x40C],0x3D
	cmp eax,esi
	je Block320

 Block319:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block320:
	mov eax,dword ptr [esp+0x18]
	cmp eax,esi
	jmp Block517

 Block321:
	lea eax,[esp+0xD0]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ebx,[edi+0x78]
	push 0
	push ebx
	push eax
	mov dword ptr [esp+0x418],0
	mov dword ptr [esp+0x28],ebx
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0xDC]
	or esi,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x40C],esi
	test eax,eax
	je Block323

 Block322:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block323:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2E0]
	push ecx
	call ebp
	lea edx,[esp+0x2E0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block325

 Block324:
	push eax
	call _com_issue_error

 Block325:
	lea eax,[esp+0x220]
	push eax
	mov dword ptr [esp+0x410],1
	call ebp
	lea ecx,[esp+0x220]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block327

 Block326:
	push eax
	call _com_issue_error

 Block327:
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0x40C],2
	test ecx,ecx
	jne Block329

 Block328:
	push 0x80004003
	call _com_issue_error

 Block329:
	lea edx,[esp+0x2E0]
	push edx
	mov edx,dword ptr [edi+0x28]
	lea eax,[esp+0x224]
	push eax
	mov eax,dword ptr [edi+0x24]
	push edx
	push eax
	call IWzCanvas::Create
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x40C],1
	cmp word ptr [esp+0x220],bx
	jne Block332

 Block330:
	mov eax,dword ptr [esp+0x228]
	xor ecx,ecx
	mov word ptr [esp+0x220],cx
	test eax,eax
	je Block333

 Block331:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block333

 Block332:
	lea edx,[esp+0x220]
	push edx
	call edi

 Block333:
	mov dword ptr [esp+0x40C],esi
	cmp word ptr [esp+0x2E0],bx
	jne Block336

 Block334:
	xor eax,eax
	mov word ptr [esp+0x2E0],ax
	mov eax,dword ptr [esp+0x2E8]
	test eax,eax
	je Block337

 Block335:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block337

 Block336:
	lea ecx,[esp+0x2E0]
	push ecx
	call edi

 Block337:
	lea edx,[esp+0x240]
	push edx
	call ebp
	lea eax,[esp+0x240]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block339

 Block338:
	push eax
	call _com_issue_error

 Block339:
	lea ecx,[esp+0x250]
	push ecx
	mov dword ptr [esp+0x410],3
	call ebp
	lea edx,[esp+0x250]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block341

 Block340:
	push eax
	call _com_issue_error

 Block341:
	xor esi,esi
	push esi
	push esi
	lea eax,[esp+0x248]
	push eax
	lea ecx,[esp+0x25C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x196F
	mov bl,4
	push edx
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],5
	cmp dword ptr [_D_G_RM],esi
	jne Block343

 Block342:
	push 0x80004003
	call _com_issue_error

 Block343:
	lea eax,[esp+0x368]
	mov byte ptr [esp+0x420],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block346

 Block344:
	cmp eax,0x80004002
	je Block346

 Block345:
	push eax
	call _com_issue_error

 Block346:
	mov ebx,8
	mov byte ptr [esp+0x40C],8
	cmp word ptr [esp+0x354],bx
	jne Block349

 Block347:
	mov eax,dword ptr [esp+0x35C]
	xor ecx,ecx
	mov word ptr [esp+0x354],cx
	cmp eax,esi
	je Block350

 Block348:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block350

 Block349:
	lea edx,[esp+0x354]
	push edx
	call edi

 Block350:
	mov byte ptr [esp+0x40C],9
	cmp word ptr [esp+0x250],bx
	jne Block353

 Block351:
	xor eax,eax
	mov word ptr [esp+0x250],ax
	mov eax,dword ptr [esp+0x258]
	cmp eax,esi
	je Block354

 Block352:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block354

 Block353:
	lea ecx,[esp+0x250]
	push ecx
	call edi

 Block354:
	mov byte ptr [esp+0x40C],0xA
	cmp word ptr [esp+0x240],bx
	jne Block357

 Block355:
	mov eax,dword ptr [esp+0x248]
	xor edx,edx
	mov word ptr [esp+0x240],dx
	cmp eax,esi
	je Block358

 Block356:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block358

 Block357:
	lea eax,[esp+0x240]
	push eax
	call edi

 Block358:
	lea ecx,[esp+0x110]
	push ecx
	call ebp
	lea edx,[esp+0x110]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block360

 Block359:
	push eax
	call _com_issue_error

 Block360:
	lea eax,[esp+0xF0]
	push eax
	mov byte ptr [esp+0x410],0xB
	call ebp
	lea ecx,[esp+0xF0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block362

 Block361:
	push eax
	call _com_issue_error

 Block362:
	push esi
	push esi
	lea edx,[esp+0x118]
	push edx
	lea eax,[esp+0xFC]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1966
	mov bl,0xC
	push ecx
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],0xD
	cmp dword ptr [_D_G_RM],esi
	jne Block364

 Block363:
	push 0x80004003
	call _com_issue_error

 Block364:
	lea edx,[esp+0x388]
	mov byte ptr [esp+0x420],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block367

 Block365:
	cmp eax,0x80004002
	je Block367

 Block366:
	push eax
	call _com_issue_error

 Block367:
	mov ebx,8
	mov byte ptr [esp+0x40C],0x10
	cmp word ptr [esp+0x374],bx
	jne Block370

 Block368:
	xor eax,eax
	mov word ptr [esp+0x374],ax
	mov eax,dword ptr [esp+0x37C]
	cmp eax,esi
	je Block371

 Block369:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block371

 Block370:
	lea ecx,[esp+0x374]
	push ecx
	call edi

 Block371:
	mov byte ptr [esp+0x40C],0x11
	cmp word ptr [esp+0xF0],bx
	jne Block374

 Block372:
	mov eax,dword ptr [esp+0xF8]
	xor edx,edx
	mov word ptr [esp+0xF0],dx
	cmp eax,esi
	je Block375

 Block373:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block375

 Block374:
	lea eax,[esp+0xF0]
	push eax
	call edi

 Block375:
	mov byte ptr [esp+0x40C],0x12
	cmp word ptr [esp+0x110],bx
	jne Block378

 Block376:
	mov eax,dword ptr [esp+0x118]
	xor ecx,ecx
	mov word ptr [esp+0x110],cx
	cmp eax,esi
	je Block379

 Block377:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block379

 Block378:
	lea edx,[esp+0x110]
	push edx
	call edi

 Block379:
	lea eax,[esp+0x150]
	push eax
	call ebp
	lea ecx,[esp+0x150]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block381

 Block380:
	push eax
	call _com_issue_error

 Block381:
	lea edx,[esp+0x130]
	push edx
	mov byte ptr [esp+0x410],0x13
	call ebp
	lea eax,[esp+0x130]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block383

 Block382:
	push eax
	call _com_issue_error

 Block383:
	push esi
	push esi
	lea ecx,[esp+0x158]
	push ecx
	lea edx,[esp+0x13C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1967
	push eax
	mov byte ptr [esp+0x428],0x14
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],0x15
	cmp dword ptr [_D_G_RM],esi
	jne Block385

 Block384:
	push 0x80004003
	call _com_issue_error

 Block385:
	lea ecx,[esp+0x3A8]
	push ecx
	mov byte ptr [esp+0x424],0x14
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block388

 Block386:
	cmp eax,0x80004002
	je Block388

 Block387:
	push eax
	call _com_issue_error

 Block388:
	mov byte ptr [esp+0x40C],0x18
	cmp word ptr [esp+0x394],bx
	jne Block391

 Block389:
	mov eax,dword ptr [esp+0x39C]
	xor edx,edx
	mov word ptr [esp+0x394],dx
	cmp eax,esi
	je Block392

 Block390:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block392

 Block391:
	lea eax,[esp+0x394]
	push eax
	call edi

 Block392:
	mov byte ptr [esp+0x40C],0x19
	cmp word ptr [esp+0x130],bx
	jne Block395

 Block393:
	mov eax,dword ptr [esp+0x138]
	xor ecx,ecx
	mov word ptr [esp+0x130],cx
	cmp eax,esi
	je Block396

 Block394:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block396

 Block395:
	lea edx,[esp+0x130]
	push edx
	call edi

 Block396:
	mov byte ptr [esp+0x40C],0x1A
	cmp word ptr [esp+0x150],bx
	jne Block399

 Block397:
	xor eax,eax
	mov word ptr [esp+0x150],ax
	mov eax,dword ptr [esp+0x158]
	cmp eax,esi
	je Block400

 Block398:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block400

 Block399:
	lea ecx,[esp+0x150]
	push ecx
	call edi

 Block400:
	lea edx,[esp+0x190]
	push edx
	call ebp
	lea eax,[esp+0x190]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block402

 Block401:
	push eax
	call _com_issue_error

 Block402:
	lea ecx,[esp+0x170]
	push ecx
	mov byte ptr [esp+0x410],0x1B
	call ebp
	lea edx,[esp+0x170]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block404

 Block403:
	push eax
	call _com_issue_error

 Block404:
	push esi
	push esi
	lea eax,[esp+0x198]
	push eax
	lea ecx,[esp+0x17C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1964
	mov bl,0x1C
	push edx
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],0x1D
	cmp dword ptr [_D_G_RM],esi
	jne Block406

 Block405:
	push 0x80004003
	call _com_issue_error

 Block406:
	lea eax,[esp+0x3C8]
	mov byte ptr [esp+0x420],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block409

 Block407:
	cmp eax,0x80004002
	je Block409

 Block408:
	push eax
	call _com_issue_error

 Block409:
	mov ebx,8
	mov byte ptr [esp+0x40C],0x20
	cmp word ptr [esp+0x3B4],bx
	jne Block412

 Block410:
	mov eax,dword ptr [esp+0x3BC]
	xor ecx,ecx
	mov word ptr [esp+0x3B4],cx
	cmp eax,esi
	je Block413

 Block411:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block413

 Block412:
	lea edx,[esp+0x3B4]
	push edx
	call edi

 Block413:
	mov byte ptr [esp+0x40C],0x21
	cmp word ptr [esp+0x170],bx
	jne Block416

 Block414:
	xor eax,eax
	mov word ptr [esp+0x170],ax
	mov eax,dword ptr [esp+0x178]
	cmp eax,esi
	je Block417

 Block415:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block417

 Block416:
	lea ecx,[esp+0x170]
	push ecx
	call edi

 Block417:
	mov byte ptr [esp+0x40C],0x22
	cmp word ptr [esp+0x190],bx
	jne Block420

 Block418:
	mov eax,dword ptr [esp+0x198]
	xor edx,edx
	mov word ptr [esp+0x190],dx
	cmp eax,esi
	je Block421

 Block419:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block421

 Block420:
	lea eax,[esp+0x190]
	push eax
	call edi

 Block421:
	lea ecx,[esp+0x1D0]
	push ecx
	call ebp
	lea edx,[esp+0x1D0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block423

 Block422:
	push eax
	call _com_issue_error

 Block423:
	lea eax,[esp+0x1B0]
	push eax
	mov byte ptr [esp+0x410],0x23
	call ebp
	lea ecx,[esp+0x1B0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block425

 Block424:
	push eax
	call _com_issue_error

 Block425:
	push esi
	push esi
	lea edx,[esp+0x1D8]
	push edx
	lea eax,[esp+0x1BC]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x196E
	mov bl,0x24
	push ecx
	mov byte ptr [esp+0x428],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x420],0x25
	cmp dword ptr [_D_G_RM],esi
	jne Block427

 Block426:
	push 0x80004003
	call _com_issue_error

 Block427:
	lea edx,[esp+0x3E8]
	mov byte ptr [esp+0x420],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x414],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block430

 Block428:
	cmp eax,0x80004002
	je Block430

 Block429:
	push eax
	call _com_issue_error

 Block430:
	mov ebx,8
	mov byte ptr [esp+0x40C],0x28
	cmp word ptr [esp+0x3D4],bx
	jne Block433

 Block431:
	xor eax,eax
	mov word ptr [esp+0x3D4],ax
	mov eax,dword ptr [esp+0x3DC]
	cmp eax,esi
	je Block434

 Block432:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block434

 Block433:
	lea ecx,[esp+0x3D4]
	push ecx
	call edi

 Block434:
	mov byte ptr [esp+0x40C],0x29
	cmp word ptr [esp+0x1B0],bx
	jne Block437

 Block435:
	mov eax,dword ptr [esp+0x1B8]
	xor edx,edx
	mov word ptr [esp+0x1B0],dx
	cmp eax,esi
	je Block438

 Block436:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block438

 Block437:
	lea eax,[esp+0x1B0]
	push eax
	call edi

 Block438:
	mov byte ptr [esp+0x40C],0x2A
	cmp word ptr [esp+0x1D0],bx
	jne Block441

 Block439:
	mov eax,dword ptr [esp+0x1D8]
	xor ecx,ecx
	mov word ptr [esp+0x1D0],cx
	cmp eax,esi
	je Block442

 Block440:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block442

 Block441:
	lea edx,[esp+0x1D0]
	push edx
	call edi

 Block442:
	lea eax,[esp+0x1F0]
	push eax
	call ebp
	lea ecx,[esp+0x1F0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block444

 Block443:
	push eax
	call _com_issue_error

 Block444:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x40C],0x2B
	cmp ecx,esi
	jne Block446

 Block445:
	push 0x80004003
	call _com_issue_error

 Block446:
	mov edx,dword ptr [esp+0x30]
	lea eax,[esp+0x1F0]
	push eax
	push edx
	push esi
	push esi
	call IWzCanvas::Copy
	mov byte ptr [esp+0x40C],0x2A
	cmp word ptr [esp+0x1F0],bx
	jne Block449

 Block447:
	xor eax,eax
	mov word ptr [esp+0x1F0],ax
	mov eax,dword ptr [esp+0x1F8]
	cmp eax,esi
	je Block450

 Block448:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block450

 Block449:
	lea ecx,[esp+0x1F0]
	push ecx
	call edi

 Block450:
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [ebp+0x28]
	mov ebx,dword ptr [esp+0x28]
	mov edi,0x14
	sub edx,0x2F
	cmp edx,edi
	jle Block462

 Block451:
	jmp Block453

 Block453:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block454:
	mov edx,dword ptr [esp+0x1C]
	mov esi,dword ptr [edx]
	mov byte ptr [esp+0x40C],0x2C
	test esi,esi
	je Block9

 Block455:
	mov edx,dword ptr [esp+0x6C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x80]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x84]
	push ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x8C]
	push edi
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block457

 Block456:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block457:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x40C],0x2A
	jne Block460

 Block458:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block461

 Block459:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block461

 Block460:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block461:
	mov eax,dword ptr [ebp+0x28]
	add edi,0x10
	sub eax,0x2F
	cmp edi,eax
	jl Block453

 Block462:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block464

 Block463:
	push eax
	call _com_issue_error

 Block464:
	mov eax,dword ptr [esp+0x1C]
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x40C],0x2D
	test esi,esi
	jne Block466

 Block465:
	push 0x80004003
	call _com_issue_error

 Block466:
	mov edi,dword ptr [esp+0x8C]
	mov ecx,dword ptr [ebp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0xA0]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0xA4]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0xA8]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esp+0x3C]
	push eax
	sub ecx,0x2F
	push ecx
	mov ecx,dword ptr [edx+0x80]
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block468

 Block467:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block468:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0x40C],0x2A
	jne Block471

 Block469:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	test eax,eax
	je Block472

 Block470:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block472

 Block471:
	lea eax,[esp+0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block472:
	mov eax,dword ptr [ebp+0x28]
	mov ebx,dword ptr [esp+0x18]
	lea edi,[eax-0x1F]
	add eax,0xFFFFFFF1
	cmp edi,eax
	jge Block483

 Block473:
	nop

 Block474:
	lea ecx,[esp+0xAC]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xAC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block475:
	mov eax,dword ptr [esp+0x1C]
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x40C],0x2E
	test esi,esi
	je Block9

 Block476:
	mov edx,dword ptr [esp+0xAC]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0xC0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0xC4]
	push ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0xCC]
	push edi
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block478

 Block477:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block478:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0x40C],0x2A
	jne Block481

 Block479:
	mov eax,dword ptr [esp+0xB4]
	xor ecx,ecx
	mov word ptr [esp+0xAC],cx
	test eax,eax
	je Block482

 Block480:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block482

 Block481:
	lea edx,[esp+0xAC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block482:
	mov eax,dword ptr [ebp+0x28]
	add edi,0x10
	sub eax,0xF
	cmp edi,eax
	jl Block474

 Block483:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block485

 Block484:
	push eax
	call _com_issue_error

 Block485:
	mov eax,dword ptr [esp+0x1C]
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x40C],0x2F
	test esi,esi
	jne Block487

 Block486:
	push 0x80004003
	call _com_issue_error

 Block487:
	mov edi,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+0x28]
	mov ebp,dword ptr [esp+0x24]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x70]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x74]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x78]
	push ebp
	sub ecx,0xF
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push ecx
	xor edi,edi
	push edi
	push esi
	call eax
	cmp eax,edi
	jge Block489

 Block488:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block489:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x40C],0x2A
	jne Block492

 Block490:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,edi
	je Block493

 Block491:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block493

 Block492:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block493:
	mov dword ptr [esp+0x21C],edi
	mov dword ptr [esp+0x210],1
	mov dword ptr [esp+0x214],edi
	mov dword ptr [esp+0x218],edi
	lea eax,[esp+0xD4]
	push 0x1963
	mov bl,0x30
	push eax
	mov byte ptr [esp+0x414],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x220]
	mov byte ptr [esp+0x410],0x31
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0xD4]
	mov byte ptr [esp+0x40C],bl
	cmp eax,edi
	je Block495

 Block494:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block495:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x40C],0x32
	cmp eax,edi
	je Block497

 Block496:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block498

 Block497:
	xor eax,eax

 Block498:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x40C],bl
	test eax,eax
	je Block520

 Block499:
	add eax,8
	je Block520

 Block500:
	lea esi,[eax-8]
	test esi,esi
	je Block502

 Block501:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block502:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx+0xD4]
	mov dword ptr [ecx+0xD4],esi
	test eax,eax
	je Block506

 Block503:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block506

 Block504:
	lea eax,[esi+4]
	push eax
	call edi
	test esi,esi
	je Block506

 Block505:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block506:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0xD4]
	mov edx,dword ptr [ecx]
	lea esi,[esp+0x210]
	push esi
	mov esi,dword ptr [eax+0x28]
	push 0
	sub esi,0x1F
	push esi
	push 0xC5
	push 1
	push eax
	mov eax,dword ptr [edx+0x28]
	call eax
	mov eax,dword ptr [esp+0x21C]
	mov byte ptr [esp+0x40C],0x2A
	test eax,eax
	je Block508

 Block507:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block508:
	mov byte ptr [esp+0x40C],0x22
	test ebp,ebp
	je Block510

 Block509:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block510:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x40C],0x1A
	test eax,eax
	je Block512

 Block511:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block512:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x40C],0x12
	test eax,eax
	je Block514

 Block513:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block514:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x40C],0xA
	test eax,eax
	je Block516

 Block515:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block516:
	mov eax,dword ptr [esp+0x30]
	test eax,eax

 Block517:
	mov dword ptr [esp+0x40C],0xFFFFFFFF
	je Block519

 Block518:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block519:
	mov ecx,dword ptr [esp+0x404]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3FC
	ret 4

 Block520:
	xor esi,esi
	jmp Block502
}
}
// CUIContextMenu::~CUIContextMenu
_SUB_EXCEPTION_HANDLER(56DAA0)
__SUB_CLASS_THIS0(0056DAA0, __thiscall, 13344,  CUIContextMenu, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56DAA0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIContextMenu::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIContextMenu::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIContextMenu::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xE8]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],0xB
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea edi,[esi+0xE0]
	mov byte ptr [esp+0x1C],0xA
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xD8]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xD0]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xC8]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block20:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block22

 Block21:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block22:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block24

 Block23:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block24:
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
// CUICashItemGachapon::OnKey
__SUB_CLASS_THIS(00568E60, __thiscall, 13573,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block3

 Block1:
	cmp dword ptr [esp+4],0x1B
	jne Block3

 Block2:
	mov eax,dword ptr [ecx+0x90]
	mov dword ptr [eax+0x534],0
	mov edx,dword ptr [ecx-4]
	mov eax,dword ptr [edx+0x34]
	add ecx,0xFFFFFFFC
	push 2
	call eax

 Block3:
	ret 8
}
}
// CUIPamsSong::~CUIPamsSong
_SUB_EXCEPTION_HANDLER(56B130)
__SUB_CLASS_THIS0(0056B130, __thiscall, 13643,  CUIPamsSong, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56B130
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIPamsSong::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPamsSong::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPamsSong::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0x9C],0
	lea edi,[esi+0x98]
	mov dword ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0x94],0
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x18],0
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
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
