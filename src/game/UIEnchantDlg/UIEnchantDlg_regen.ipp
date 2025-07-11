#include "regen.hpp"
// UIEnchantDlg.ipp
#include "UIEnchantDlg.hpp"

// CUIEnchantDlg::ShowEffect
__SUB_CLASS_THIS0(003A0900, __thiscall, 68472,  CUIEnchantDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB10]
	lea ecx,[eax+4]
	mov dword ptr [esi+0xAF4],1
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov esi,dword ptr [esi+0xB18]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push 0
	call edx
	pop esi
	ret
}
}
// CUIEnchantDlg::Draw
_SUB_EXCEPTION_HANDLER(3A0980)
__SUB_CLASS_THIS(003A0980, __thiscall, 68475,  CUIEnchantDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A0980
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x38]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	cmp dword ptr [edi+0xA0],0
	mov esi,dword ptr [esp+0x38]
	push 0
	mov dword ptr [esp+0x34],0
	push 0
	je Block3

 Block1:
	push offset _S_UIUIWINDOW2IMGEN__1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block5

 Block2:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax
	jmp Block5

 Block3:
	push offset _S_UIUIWINDOW2IMGEN
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block5

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block5:
	lea ecx,[edi+0xB2C]
	call CLayoutMan::CopyToCanvas_1
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],ecx
	mov edx,dword ptr [edi+0xB28]
	mov byte ptr [esp+0x30],1
	test esi,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ebp,dword ptr [esp+0x18]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0x9E
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x3C]
	push 0x1E
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],0
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	push 0x9E
	push 0x1E
	push offset _S_UIUIWINDOWIMGENC
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x24],esp
	push esi
	call eax
	lea ecx,[edi+0xB2C]
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [edi+0xA0]
	test eax,eax
	je Block15

 Block14:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x86
	push 0x48
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call eax
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
// CUIEnchantDlg::ShowResult
_SUB_EXCEPTION_HANDLER(3A1610)
__SUB_CLASS_THIS0(003A1610, __thiscall, 68472,  CUIEnchantDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A1610
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
	mov esi,ecx
	xor ebx,ebx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x30],ebp
	cmp dword ptr [esi+0xAFC],ebp
	je Block9

 Block1:
	call CUIEnchantDlg::GetWhiteScrollCheck
	mov ebx,2
	cmp eax,ebx
	jne Block3

 Block2:
	lea eax,[esp+0x20]
	push 0xFA7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x30],1
	lea ebx,[ebp+1]
	jmp Block4

 Block3:
	lea ecx,[esp+0x1C]
	push 0x192
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x30],ebx

 Block4:
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x30],1
	test bl,2
	je Block7

 Block5:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov dword ptr [esp+0x30],ebp
	test bl,1
	je Block22

 Block8:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFE
	jmp Block19

 Block9:
	cmp dword ptr [esi+0xB00],ebp
	je Block11

 Block10:
	lea edx,[esp+0x20]
	push 0x194
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x30],0
	jmp Block20

 Block11:
	mov ecx,esi
	call CUIEnchantDlg::GetWhiteScrollCheck
	cmp eax,2
	jne Block13

 Block12:
	lea eax,[esp+0x1C]
	push 0xFA6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x30],4
	mov ebx,4
	jmp Block14

 Block13:
	lea ecx,[esp+0x20]
	push 0x193
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x30],5
	mov ebx,8

 Block14:
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x30],4
	test bl,8
	je Block17

 Block15:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov dword ptr [esp+0x30],ebp
	test bl,4
	je Block22

 Block18:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFB

 Block19:
	mov dword ptr [esp+0x14],ebx

 Block20:
	cmp eax,ebp
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	test byte ptr [esi+0xB04],2
	je Block37

 Block23:
	mov edi,7
	cmp dword ptr [esi+0xAFC],ebp
	je Block25

 Block24:
	lea edx,[esp+0x24]
	push 0x17F4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x30],6
	or ebx,0x10
	jmp Block28

 Block25:
	cmp dword ptr [esi+0xB00],ebp
	je Block27

 Block26:
	lea eax,[esp+0x1C]
	push 0x17F6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x30],edi
	or ebx,0x20
	jmp Block28

 Block27:
	lea ecx,[esp+0x20]
	push 0x17F5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x30],8
	or ebx,0x40

 Block28:
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x30],edi
	test bl,0x40
	je Block31

 Block29:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFBF
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov dword ptr [esp+0x30],6
	test bl,0x20
	je Block34

 Block32:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov dword ptr [esp+0x30],ebp
	test bl,0x10
	je Block37

 Block35:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],ebp
	je Block39

 Block38:
	mov edx,dword ptr [esp+0x18]
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push ebp
	push 0xFFFFFFFF
	push 0xC
	mov dword ptr [eax+4],ebp
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edx
	call CUIStatusBar::ChatLogAdd

 Block39:
	cmp dword ptr [esi+0xAFC],ebp
	je Block41

 Block40:
	lea eax,[esp+0x20]
	push 0x507
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x30],9
	or ebx,0x80
	jmp Block42

 Block41:
	lea ecx,[esp+0x24]
	push 0x508
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x30],0xA
	or ebx,0x100

 Block42:
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x1C],ebx
	call play_game_sound
	add esp,8
	mov dword ptr [esp+0x30],9
	test ebx,0x100
	je Block45

 Block43:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFEFF
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	mov dword ptr [esp+0x30],ebp
	test bl,bl
	jns Block48

 Block46:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	mov edx,dword ptr [esi+0xAFC]
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push ebp
	push edx
	push ecx
	mov eax,esp
	lea ebx,[edi+0x88]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov ecx,ebx
	call CAvatar::GetLayerUnderFace
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x44],0xB
	call CUser::GetVecCtrl_0
	lea edx,[esp+0x34]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x44],0xC
	call CAvatar::GetLayerUnderFace
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x40],0xD
	cmp edi,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x24]
	push ecx
	push edi
	mov dword ptr [esp+0x2C],ebp
	call edx
	cmp eax,ebp
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block52:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x40],0xE
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_ItemUpgrade
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],0
	cmp eax,ebp
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	cmp dword ptr [esi+0xB00],ebp
	je Block59

 Block55:
	cmp dword ptr [esi+0xAFC],ebp
	jne Block59

 Block56:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp ecx,ebp
	je Block64

 Block57:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp eax,ebp
	je Block64

 Block58:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx
	jmp Block64

 Block59:
	mov eax,dword ptr [esi+0xB24]
	cmp eax,ebp
	je Block61

 Block60:
	mov dword ptr [esi+0xB24],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,dword ptr [esi+0xB10]
	lea ecx,[eax+4]
	mov dword ptr [esi+0xAF8],ebp
	mov dword ptr [esi+0xAF4],ebp
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0xB18]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov ecx,esi
	call CUIEnchantDlg::RefreshToolTip
	cmp dword ptr [esi+0xAFC],ebp
	jne Block64

 Block62:
	cmp dword ptr [esi+0xB08],ebp
	je Block64

 Block63:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::AskWhetherUsePamsSong

 Block64:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
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
// CUIEnchantDlg::OnMouseMove
__SUB_CLASS_THIS(003A0860, __thiscall, 68478,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x9C]
	push edi
	test eax,eax
	je Block4

 Block1:
	mov ebx,dword ptr [esp+0x10]
	lea ecx,[ebx-0x49]
	cmp ecx,0x1B
	ja Block4

 Block2:
	mov edi,dword ptr [esp+0x14]
	lea edx,[edi-0x6C]
	cmp edx,0x1B
	ja Block4

 Block3:
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+edi+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0xA8]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8

 Block4:
	lea ecx,[esi+0xA8]
	call CUIToolTip::ClearToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8
}
}
// CUIEnchantDlg::CUIEnchantDlg
_SUB_EXCEPTION_HANDLER(3A1B30)
__SUB_CLASS_THIS0(003A1B30, __thiscall, 68470,  CUIEnchantDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A1B30
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIEnchantDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIEnchantDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIEnchantDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x18],2
	mov dword ptr [esi+0xA8],edi
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAF4],edi
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB20],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB28],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB30],edi
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB38],edi
	mov dword ptr [esi+0xB3C],edi
	push 1
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGEN__3
	mov ecx,esi
	mov byte ptr [esp+0x28],9
	call CDialog::CreateDlg_2
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
// CUIEnchantDlg::SetResult
_SUB_EXCEPTION_HANDLER(3A1340)
__SUB_CLASS_THIS(003A1340, __thiscall, 68481,  CUIEnchantDlg, void, int32_t, int32_t, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A1340
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
	or ebp,0xFFFFFFFF
	xor ebx,ebx
	push ebx
	cmp dword ptr [esp+0x5C],ebp
	jne Block4

 Block1:
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x6C],esp
	push 0x18E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esi+0xB24]
	add esp,0x14
	cmp eax,ebx
	je Block3

 Block2:
	mov dword ptr [esi+0xB24],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [esi+0xB10]
	lea ecx,[eax+4]
	mov dword ptr [esi+0xAF8],ebx
	mov dword ptr [esi+0xAF4],ebx
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov esi,dword ptr [esi+0xB18]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push 1
	call edx
	jmp Block36

 Block4:
	push 0xFF
	push 1
	lea eax,[esp+0x28]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	mov dword ptr [esp+0x64],ebx
	mov dword ptr [ecx],ebx
	call _x_com_ptr<IWzGr2DLayer>::_QueryUnknown
	cmp eax,ebx
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	push ebx
	push ebx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x6C],1
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push eax
	mov byte ptr [esp+0x70],2
	mov dword ptr [ecx],ebx
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebx
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	push ebx
	lea edx,[esp+0x34]
	push offset _S_UIUIWINDOW2IMGEN__2
	push edx
	mov byte ptr [esp+0x78],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB24]
	add esp,0x28
	cmp edi,eax
	je Block15

 Block11:
	mov dword ptr [esi+0xB24],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	cmp edi,ebx
	je Block15

 Block14:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block15:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x50],ebp
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x54],4
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [esi+0xB24]
	mov byte ptr [esp+0x50],5
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ebx
	call IWzGr2DLayer::Animate
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],di
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x28]
	push edx
	call ebp

 Block31:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x38],di
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x38]
	push ecx
	call ebp

 Block35:
	push offset _S_ENCHANT
	call play_ui_sound
	mov edx,dword ptr [esp+0x5C]
	mov eax,dword ptr [esp+0x60]
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [esi+0xAFC],edx
	mov edx,dword ptr [esp+0x68]
	add esp,4
	mov dword ptr [esi+0xB00],eax
	mov dword ptr [esi+0xB04],ecx
	mov dword ptr [esi+0xB08],edx
	mov dword ptr [esi+0xAF8],1

 Block36:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 0x10
}
}
// CUIEnchantDlg::~CUIEnchantDlg
_SUB_EXCEPTION_HANDLER(3A1C70)
__SUB_CLASS_THIS0(003A1C70, __thiscall, 68472,  CUIEnchantDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A1C70
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIEnchantDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIEnchantDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIEnchantDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB2C]
	mov dword ptr [esp+0x20],8
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xB28]
	xor ebx,ebx
	mov byte ptr [esp+0x20],7
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xB24]
	mov byte ptr [esp+0x20],6
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0xB1C]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB14]
	mov byte ptr [esp+0x20],4
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xB0C]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x20],2
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xA0]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x20],1
	cmp eax,ebx
	je Block15

 Block11:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block14

 Block12:
	mov eax,dword ptr [esi+0xA0]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xA0]
	cmp ecx,ebx
	je Block14

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block14:
	mov dword ptr [esi+0xA0],ebx

 Block15:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block20

 Block16:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block19

 Block17:
	mov eax,dword ptr [esi+0x98]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0x98]
	cmp ecx,ebx
	je Block19

 Block18:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block19:
	mov dword ptr [esi+0x98],ebx

 Block20:
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
// CUIEnchantDlg::Update
__SUB_CLASS_THIS0(003A1E40, __thiscall, 68472,  CUIEnchantDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::Update
	mov ecx,esi
	call CUIEnchantDlg::IsOKToShowResult
	test eax,eax
	je Block2

 Block1:
	mov ecx,esi
	pop esi
	jmp  CUIEnchantDlg::ShowResult

 Block2:
	pop esi
	ret
}
}
// CUIEnchantDlg::OnKey
__SUB_CLASS_THIS(003A1C10, __thiscall, 68477,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CUIEnchantDlg::GetRTTI
__SUB_CLASS_THIS0(003A1C20, __thiscall, 68488,  CUIEnchantDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIEnchantDlg::ms_RTTI_CUIEnchantDlg
	ret
}
}
// CUIEnchantDlg::PutItem
_SUB_EXCEPTION_HANDLER(3A1200)
__SUB_CLASS_THIS(003A1200, __thiscall, 68479,  CUIEnchantDlg, int32_t, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A1200
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
	cmp dword ptr [esi+0xAF4],0
	jne Block6

 Block1:
	mov edi,dword ptr [esp+0x28]
	test edi,edi
	je Block6

 Block2:
	lea ebx,[edi+0xC]
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block4

 Block3:
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xB4
	jne Block5

 Block4:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],edi
	mov dword ptr [esp+0x30],esp
	add edi,4
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CUIEnchantDlg::MakeClone
	push eax
	lea ecx,[esi+0x9C]
	mov dword ptr [esp+0x24],0
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x30]
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xA4],edx
	mov dword ptr [esi+0xA8],eax
	call CWnd::InvalidateRect
	mov eax,1
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 0xC

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x108B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block6:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CUIEnchantDlg::IsRequestSent
__SUB_CLASS_THIS0(003A07F0, __thiscall, 68483,  CUIEnchantDlg, int32_t) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0xAF8],0
	push esi
	je Block8

 Block1:
	cmp dword ptr [ecx+0xB24],0
	je Block8

 Block2:
	mov esi,dword ptr [ecx+0xB24]
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[esp+4]
	push ecx
	push esi
	mov dword ptr [esp+0xC],0
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	cmp dword ptr [esp+4],0
	jne Block8

 Block7:
	mov eax,1
	pop esi
	pop ecx
	ret

 Block8:
	xor eax,eax
	pop esi
	pop ecx
	ret
}
}
// CUIEnchantDlg::EnableWhiteScrollCheck
__SUB_CLASS_THIS(003A0940, __thiscall, 68484,  CUIEnchantDlg, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	call edx
	mov ecx,dword ptr [esi+0xB20]
	xor eax,eax
	test edi,edi
	setne al
	push eax
	call CCtrlCheckBox::SetChecked
	pop edi
	pop esi
	ret 4
}
}
// CUIEnchantDlg::GetSlotPosition
__SUB_CLASS_THIS0(003A08E0, __thiscall, 68482,  CUIEnchantDlg, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB20]
	xor ecx,ecx
	cmp dword ptr [eax+0x48],ecx
	setne cl
	inc ecx
	mov eax,ecx
	ret
}
}
// CUIEnchantDlg::HitTest
__SUB_CLASS_THIS(003A0760, __thiscall, 68474,  CUIEnchantDlg, int32_t, long, long, CCtrlWnd**) {
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
	cmp edi,0xF
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIEnchantDlg::OnButtonClicked
__SUB_CLASS_THIS(003A07A0, __thiscall, 68476,  CUIEnchantDlg, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0xAF4],0
	jne Block7

 Block1:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	jne Block3

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block3:
	cmp eax,2
	jne Block5

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block5:
	cmp eax,8
	jne Block7

 Block6:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block7:
	ret 4
}
}
// CUIEnchantDlg::IsKindOf
__SUB_CLASS_THIS(003A1C40, __thiscall, 68489,  CUIEnchantDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIEnchantDlg::ms_RTTI_CUIEnchantDlg
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
// CUIEnchantDlg::RefreshToolTip
_SUB_EXCEPTION_HANDLER(3A1060)
__SUB_CLASS_THIS0(003A1060, __thiscall, 68472,  CUIEnchantDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A1060
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
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x18],0

 Block5:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [esi+0xA4]
	push ecx
	push edx
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [esp+0x28]
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [esp+0x3C],0
	mov dword ptr [eax+4],edi
	test edi,edi
	je Block7

 Block6:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CUIEnchantDlg::MakeClone
	push eax
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x38],1
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block11

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x18]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	cmp dword ptr [esi+0xB8],0
	je Block13

 Block12:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	call CInputSystem::GetCursorPos
	lea ebp,[esi+0xAC]
	mov ecx,ebp
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [esp+0x20]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esp+0x34]
	add edx,0x14
	push edx
	push eax
	mov ecx,ebp
	call CUIToolTip::ShowItemToolTip

 Block13:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test edi,edi
	je Block16

 Block14:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block15:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block16:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// CUIEnchantDlg::OnCreate
_SUB_EXCEPTION_HANDLER(3A1E60)
__SUB_CLASS_THIS(003A1E60, __thiscall, 68473,  CUIEnchantDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A1E60
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
	xor ebp,ebp
	push ebp
	push ebp
	lea edi,[esi+0xB2C]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push ebp
	push ebp
	push 0x37
	push 2
	push offset _S_UIUIWINDOW2IMGEN__4
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x98],ebp
	cmp eax,ebp
	je Block12

 Block1:
	add eax,8
	cmp eax,ebp
	je Block12

 Block2:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block4

 Block3:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [esi+0xB10]
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block6

 Block5:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp dword ptr [esp+0x18],ebp
	je Block8

 Block7:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	mov eax,1
	mov dword ptr [esp+0x48],ebp
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x44],ebp
	lea edx,[esp+0x14]
	push 0x1962
	push edx
	mov dword ptr [esp+0xA0],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x9C],2
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],1
	cmp eax,ebp
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x98],3
	cmp eax,ebp
	je Block13

 Block11:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block14

 Block12:
	xor edi,edi
	jmp Block4

 Block13:
	xor eax,eax

 Block14:
	mov byte ptr [esp+0x98],1
	cmp eax,ebp
	je Block22

 Block15:
	add eax,8
	cmp eax,ebp
	je Block22

 Block16:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block18

 Block17:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov eax,dword ptr [esi+0xB18]
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block20

 Block19:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block20:
	mov ecx,dword ptr [esi+0xB18]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	push ebp
	push 6
	push 0x98
	push 2
	push esi
	call edx
	lea ecx,[esp+0x5C]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	push offset _S_
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0x9C],4
	mov dword ptr [esp+0x64],ebp
	mov dword ptr [esp+0x7C],0x64
	mov dword ptr [esp+0x80],0xF
	call ZXString<char>::AssignCStr
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x98],5
	cmp eax,ebp
	je Block23

 Block21:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block24

 Block22:
	xor edi,edi
	jmp Block18

 Block23:
	xor eax,eax

 Block24:
	mov byte ptr [esp+0x98],4
	cmp eax,ebp
	je Block37

 Block25:
	add eax,8
	cmp eax,ebp
	je Block37

 Block26:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block28

 Block27:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	mov eax,dword ptr [esi+0xB20]
	mov dword ptr [esi+0xB20],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block30

 Block29:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block30:
	mov ecx,dword ptr [esi+0xB20]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x5C]
	push eax
	push 0x9E
	push 0xA
	push 0x1388
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block35

 Block31:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block32:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block34

 Block33:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block34:
	mov dword ptr [esp+0x18],0
	xor ebp,ebp

 Block35:
	push 0x23B4A0
	push 2
	mov ecx,ebx
	call CharacterData::GetItemCount
	neg eax
	sbb eax,eax
	neg eax
	push eax
	mov ecx,esi
	call CUIEnchantDlg::EnableWhiteScrollCheck
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
	jge Block38

 Block36:
	push eax
	call _com_issue_error

 Block37:
	xor edi,edi
	jmp Block28

 Block38:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x9C],6
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	push ebp
	push ebp
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,7
	push offset _S_UIUIWINDOWIMGENC
	mov byte ptr [esp+0xB0],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xAC],8
	cmp dword ptr [_D_G_RM],ebp
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xB0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],9
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB28]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block45

 Block43:
	cmp eax,0x80004002
	je Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x4C],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block49:
	mov byte ptr [esp+0x98],6
	cmp word ptr [esp+0x1C],si
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block53:
	mov byte ptr [esp+0x98],4
	cmp word ptr [esp+0x2C],si
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block57:
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x98],1
	cmp ecx,ebp
	je Block59

 Block58:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x68],ebp

 Block59:
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebp
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block61:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp eax,ebp
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
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
// CUIEnchantDlg::MakeClone
_SUB_EXCEPTION_HANDLER(3A0B50)
__SUB_CLASS_THIS(003A0B50, __thiscall, 68486,  CUIEnchantDlg, ZRef<GW_ItemSlotBase>*, ZRef<GW_ItemSlotBase>*, NakedParam<ZRef<GW_ItemSlotBase>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A0B50
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
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [esp+0x28],1
	cmp ebp,ecx
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ecx
	jmp Block16

 Block2:
	lea eax,[esp+0x18]
	push 1
	push eax
	call GW_ItemSlotBase::CreateItem
	add esp,8
	mov ebx,dword ptr [esp+0x1C]
	lea ecx,[ebp+0xC]
	mov byte ptr [esp+0x28],2
	lea esi,[ebx+0xC]
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call TSecType<long>::SetData
	mov ecx,dword ptr [ebp+0x4B]
	lea esi,[ebp+0x49]
	push ecx
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	lea edi,[ebx+0x49]
	add esp,8
	mov edx,edi
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [edi+2],eax
	mov edx,dword ptr [esi+8]
	push edx
	lea eax,[esi+6]
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea edx,[edi+6]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [edi+8],eax
	mov ecx,dword ptr [esi+0x10]
	push ecx
	lea edx,[esi+0xC]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0xC]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x10],eax
	mov eax,dword ptr [esi+0x18]
	push eax
	lea ecx,[esi+0x14]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x14]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x18],eax
	mov edx,dword ptr [esi+0x20]
	push edx
	lea eax,[esi+0x1C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x1C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x20],eax
	mov ecx,dword ptr [esi+0x28]
	push ecx
	lea edx,[esi+0x24]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x24]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x28],eax
	mov eax,dword ptr [esi+0x30]
	push eax
	lea ecx,[esi+0x2C]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movzx ecx,ax
	lea edx,[edi+0x2C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x30],eax
	mov edx,dword ptr [esi+0x38]
	push edx
	lea eax,[esi+0x34]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x34]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x38],eax
	mov ecx,dword ptr [esi+0x40]
	push ecx
	lea edx,[esi+0x3C]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x3C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x40],eax
	mov eax,dword ptr [esi+0x48]
	push eax
	lea ecx,[esi+0x44]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x44]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x48],eax
	mov edx,dword ptr [esi+0x50]
	push edx
	lea eax,[esi+0x4C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x4C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x50],eax
	mov ecx,dword ptr [esi+0x58]
	push ecx
	lea edx,[esi+0x54]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x54]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x58],eax
	mov eax,dword ptr [esi+0x60]
	push eax
	lea ecx,[esi+0x5C]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x5C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x60],eax
	mov edx,dword ptr [esi+0x68]
	push edx
	lea eax,[esi+0x64]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x64]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x68],eax
	mov ecx,dword ptr [esi+0x70]
	push ecx
	lea edx,[esi+0x6C]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movzx ecx,ax
	lea edx,[edi+0x6C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x70],eax
	mov eax,dword ptr [esi+0x78]
	push eax
	lea ecx,[esi+0x74]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x74]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x78],eax
	mov edx,dword ptr [esi+0x80]
	push edx
	lea eax,[esi+0x7C]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x7C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x80],eax
	mov ecx,dword ptr [esi+0x88]
	push ecx
	lea edx,[esi+0x84]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x84]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x88],eax
	mov eax,dword ptr [esi+0x8E]
	push eax
	lea ecx,[esi+0x8C]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea edx,[edi+0x8C]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [edi+0x8E],eax
	mov edx,dword ptr [esi+0x94]
	push edx
	lea eax,[esi+0x92]
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea edx,[edi+0x92]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [edi+0x94],eax
	mov ecx,dword ptr [esi+0xA0]
	push ecx
	lea edx,[esi+0x98]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[edi+0x98]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xA0],eax
	mov eax,dword ptr [esi+0xAC]
	push eax
	lea ecx,[esi+0xA4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[edi+0xA4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xAC],eax
	mov edx,dword ptr [esi+0xB8]
	push edx
	add esi,0xB0
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[edi+0xB0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	lea esi,[ebp+0x105]
	mov dword ptr [edi+0xB8],eax
	mov eax,dword ptr [esi+2]
	push eax
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	lea edi,[ebx+0x105]
	add esp,8
	mov edx,edi
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [edi+2],eax
	mov ecx,dword ptr [esi+8]
	push ecx
	lea edx,[esi+6]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	lea edx,[edi+6]
	mov cl,al
	call _ZtlSecureTearHelper<unsigned char>::call
	mov dword ptr [edi+8],eax
	mov eax,dword ptr [esi+0x10]
	push eax
	lea ecx,[esi+0xC]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0xC]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x10],eax
	mov edx,dword ptr [esi+0x18]
	push edx
	lea eax,[esi+0x14]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x14]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x18],eax
	mov ecx,dword ptr [esi+0x20]
	push ecx
	lea edx,[esi+0x1C]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x1C]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x20],eax
	mov eax,dword ptr [esi+0x28]
	push eax
	lea ecx,[esi+0x24]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x24]
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [edi+0x28],eax
	mov edx,dword ptr [esi+0x30]
	push edx
	add esi,0x2C
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movzx ecx,ax
	add esp,8
	lea edx,[edi+0x2C]
	call _ZtlSecureTearHelper<short>::call
	add ebp,0x30
	add ebx,0x30
	mov dword ptr [edi+0x30],eax
	sub ebx,ebp
	nop

 Block3:
	mov al,byte ptr [ebp]
	mov byte ptr [ebx+ebp],al
	inc ebp
	test al,al
	jne Block3

 Block4:
	mov eax,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x30]
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [ebx+4],eax
	test eax,eax
	je Block6

 Block5:
	add eax,4
	push eax
	call esi
	mov eax,dword ptr [esp+0x1C]

 Block6:
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block11

 Block7:
	add eax,4
	push eax
	call edi
	test eax,eax
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x1C]
	add eax,4
	push eax
	call esi
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block10

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block10:
	mov dword ptr [esp+0x1C],0

 Block11:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block15

 Block12:
	add eax,4
	push eax
	call edi
	test eax,eax
	jne Block15

 Block13:
	mov ecx,dword ptr [esp+0x38]
	add ecx,4
	push ecx
	call esi
	mov ecx,dword ptr [esp+0x38]
	test ecx,ecx
	je Block15

 Block14:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block15:
	mov eax,ebx

 Block16:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0xC
}
}
