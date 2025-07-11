#include "regen.hpp"
// RPSGameDlg.ipp
#include "RPSGameDlg.hpp"

// CRPSGameDlg::SetUserAvatar
_SUB_EXCEPTION_HANDLER(2D6FF0)
__SUB_CLASS_THIS0(002D6FF0, __thiscall, 133695,  CRPSGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D6FF0
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
	mov esi,ecx
	lea ecx,[esi+0x100]
	call ZRef<CAvatar>::_Alloc
	push 0
	push 0x64
	push 0x105
	push 0x34
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x3C],0
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x40],1
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,edi
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
	mov ecx,dword ptr [esi+0x104]
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push 4
	add edx,0x8C
	push edx
	mov byte ptr [esp+0x44],2
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret
}
}
// CRPSGameDlg::SendSelection
_SUB_EXCEPTION_HANDLER(2D6AE0)
__SUB_CLASS_THIS(002D6AE0, __thiscall, 133701,  CRPSGameDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D6AE0
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
	push 0xA0
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov edi,dword ptr [esp+0x2C]
	push edi
	lea ecx,[esp+0x10]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CClientSocket::SendPacket
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xB4],0
	add esi,0xE4
	mov edi,3

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	add esi,8
	sub edi,1
	jne Block1

 Block2:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CRPSGameDlg::CRPSGameDlg
_SUB_EXCEPTION_HANDLER(2D6BA0)
__SUB_CLASS_THIS(002D6BA0, __thiscall, 133693,  CRPSGameDlg, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D6BA0
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
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CRPSGameDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRPSGameDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRPSGameDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA4],0xFFFFFFFF
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xDC],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 3
	push 8
	lea ecx,[esi+0xE0]
	push ecx
	mov byte ptr [esp+0x2C],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x108],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 6
	push 4
	lea edx,[esi+0x10C]
	push edx
	mov byte ptr [esp+0x2C],6
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x124],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 4
	push 4
	lea eax,[esi+0x128]
	push eax
	mov byte ptr [esp+0x2C],8
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x138],edi
	lea ecx,[esp+0x20]
	push 0xE71
	push ecx
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
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],0xA
	cmp eax,edi
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
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CRPSGameDlg::GetRTTI
__SUB_CLASS_THIS0(002D6D30, __thiscall, 133706,  CRPSGameDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CRPSGameDlg::ms_RTTI_CRPSGameDlg
	ret
}
}
// CRPSGameDlg::OnButtonClicked
__SUB_CLASS_THIS(002D6F40, __thiscall, 133699,  CRPSGameDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x94],0
	push edi
	mov edi,dword ptr [esp+0xC]
	jne Block6

 Block1:
	cmp edi,0xBB8
	ja Block9

 Block2:
	je Block8

 Block3:
	cmp edi,0x7D0
	jb Block6

 Block4:
	cmp edi,0x7D2
	ja Block6

 Block5:
	lea eax,[edi-0x7D0]
	push eax
	call CRPSGameDlg::SendSelection

 Block6:
	cmp edi,1
	jne Block15

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	pop edi
	pop esi
	ret 4

 Block8:
	call CRPSGameDlg::OnBtStart
	pop edi
	pop esi
	ret 4

 Block9:
	mov eax,edi
	sub eax,0xBB9
	je Block14

 Block10:
	sub eax,1
	je Block13

 Block11:
	sub eax,1
	jne Block6

 Block12:
	call CRPSGameDlg::OnBtExit
	pop edi
	pop esi
	ret 4

 Block13:
	call CRPSGameDlg::OnBtRetry
	pop edi
	pop esi
	ret 4

 Block14:
	call CRPSGameDlg::OnBtContinue
	pop edi
	pop esi
	ret 4

 Block15:
	cmp edi,2
	jne Block17

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax
	pop edi
	pop esi
	ret 4

 Block17:
	cmp edi,8
	jne Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push edi
	mov ecx,esi
	call eax

 Block19:
	pop edi
	pop esi
	ret 4
}
}
// CRPSGameDlg::Update
_SUB_EXCEPTION_HANDLER(2D8E80)
__SUB_CLASS_THIS0(002D8E80, __thiscall, 133695,  CRPSGameDlg, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D8E80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
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
	call CWnd::Update
	call get_update_time
	mov ecx,dword ptr [esi+0x104]
	mov edi,eax
	mov dword ptr [ebp-0x1C],edi
	test ecx,ecx
	je Block2

 Block1:
	call CAvatar::Update

 Block2:
	mov eax,dword ptr [esi+0xB0]
	test eax,eax
	je Block12

 Block3:
	mov ecx,edi
	sub ecx,dword ptr [esi+0xAC]
	cmp ecx,eax
	jle Block12

 Block4:
	mov eax,dword ptr [esi+0xA8]
	inc eax
	cdq
	mov ecx,3
	idiv ecx
	mov eax,edi
	mov dword ptr [esi+0xA8],edx
	mov dword ptr [esi+0xAC],edi
	test edi,edi
	jne Block6

 Block5:
	mov eax,1

 Block6:
	mov dword ptr [esi+0xAC],eax
	mov ebx,dword ptr [esi+0xA4]
	test ebx,ebx
	jl Block10

 Block7:
	fild dword ptr [esi+0xB0]
	fmul qword ptr [__real_3ff3333333333333]
	call __ftol2_sse
	cmp eax,0x2D0
	mov dword ptr [esi+0xB0],eax
	jl Block10

 Block8:
	cmp dword ptr [esi+0xA8],ebx
	jne Block10

 Block9:
	mov ecx,esi
	mov dword ptr [esi+0xB0],0
	call CRPSGameDlg::ShowResult

 Block10:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	lea edx,[ebp-0x14]
	push 0x64D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],0
	call play_minigame_sound
	mov eax,dword ptr [ebp-0x14]
	add esp,8
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esi+0xB4]
	test eax,eax
	je Block22

 Block13:
	mov ecx,edi
	sub ecx,eax
	test ecx,ecx
	jle Block17

 Block14:
	push 0xA0
	lea ecx,[ebp-0x6C]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[ebp-0x6C]
	mov dword ptr [ebp-4],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[ebp-0x6C]
	push edx
	call CClientSocket::SendPacket
	mov dword ptr [esi+0xB4],0
	lea edi,[esi+0xE4]
	mov ebx,3
	lea ebx,[ebx]

 Block15:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	add edi,8
	sub ebx,1
	jne Block15

 Block16:
	lea ecx,[ebp-0x68]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov edi,dword ptr [ebp-0x1C]
	jmp Block22

 Block17:
	mov ecx,eax
	sub ecx,edi
	mov eax,ecx
	cdq
	mov ebx,0x3E8
	idiv ebx
	cmp edx,0x1E
	jge Block22

 Block18:
	cmp ecx,0x2710
	jge Block21

 Block19:
	lea eax,[ebp-0x14]
	push 0x648
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [ebp-4],2
	call play_minigame_sound
	mov eax,dword ptr [ebp-0x14]
	add esp,8
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block22:
	mov eax,dword ptr [esi+0xC0]
	mov ebx,dword ptr [ZImports::_VariantInit]
	test eax,eax
	je Block51

 Block23:
	mov ecx,edi
	sub ecx,eax
	test ecx,ecx
	jle Block51

 Block24:
	lea edx,[ebp-0x2C]
	push edx
	call ebx
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea ecx,[ebp-0x3C]
	push ecx
	mov dword ptr [ebp-4],3
	call ebx
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [esi+0x124]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[ebp-0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov edi,8
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x3C],di
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp-0x2C],di
	jne Block41

 Block39:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [ebp-0x1C],0
	cmp dword ptr [esi+0xB8],0
	mov ebx,6
	mov dword ptr [ebp-4],ebx
	jge Block44

 Block43:
	lea ecx,[ebp-0x14]
	push 0x647
	push ecx
	lea edi,[ebx-2]
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],7
	jmp Block47

 Block44:
	mov edx,dword ptr [esi+0xA0]
	cmp edx,dword ptr [esi+0xA4]
	jne Block46

 Block45:
	lea eax,[ebp-0x14]
	push 0x645
	push eax
	mov edi,3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],8
	jmp Block47

 Block46:
	lea ecx,[ebp-0x14]
	push 0x646
	push ecx
	mov edi,2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],9

 Block47:
	push eax
	lea ecx,[ebp-0x1C]
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	mov ecx,dword ptr [esi+0x104]
	push 0xFFFFFFFF
	push edi
	call CAvatar::SetEmotion
	mov edi,dword ptr [ebp-0x1C]
	push 0x64
	push edi
	call play_minigame_sound
	add esp,8
	mov dword ptr [esi+0xC0],0
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block73

 Block50:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4
	jmp Block73

 Block51:
	mov eax,dword ptr [esi+0xC4]
	test eax,eax
	je Block73

 Block52:
	sub edi,eax
	test edi,edi
	jle Block73

 Block53:
	mov edx,3
	mov dword ptr [esi+0xC4],0
	mov word ptr [ebp-0x2C],dx
	mov dword ptr [ebp-0x24],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x124]
	mov dword ptr [ebp-4],0xA
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea eax,[ebp-0x2C]
	push eax
	lea edx,[ebp-0x14]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	or edi,0xFFFFFFFF
	cmp word ptr [ebp-0x2C],8
	mov dword ptr [ebp-4],edi
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov ecx,dword ptr [esi+0x104]
	push edi
	push 0
	call CAvatar::SetEmotion
	mov edx,dword ptr [esi+0xA0]
	cmp edx,dword ptr [esi+0xA4]
	jne Block69

 Block62:
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xB0],0x78
	call get_update_time
	mov dword ptr [esi+0xAC],eax
	test eax,eax
	jne Block64

 Block63:
	mov eax,1

 Block64:
	mov dword ptr [esi+0xAC],eax
	call get_update_time
	add eax,0x7530
	mov dword ptr [esi+0xB4],eax
	jne Block66

 Block65:
	mov eax,1

 Block66:
	mov dword ptr [esi+0xB4],eax
	lea edi,[esi+0xE4]
	mov ebx,3
	lea ebx,[ebx]

 Block67:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 1
	call edx
	add edi,8
	sub ebx,1
	jne Block67

 Block68:
	jmp Block73

 Block69:
	mov eax,dword ptr [esi+0xB8]
	test eax,eax
	jle Block71

 Block70:
	cmp eax,0xA
	mov eax,0xBB9
	jl Block72

 Block71:
	mov eax,0xBBA

 Block72:
	push eax
	mov ecx,esi
	call CRPSGameDlg::SetMainButton
	mov eax,dword ptr [esi+0xFC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block73:
	mov eax,dword ptr [esi+0xDC]
	mov ebx,dword ptr [eax+0x14]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	mov ecx,eax
	shl ecx,0x1F
	or ecx,ebx
	mov dword ptr [ebp-0x14],eax
	mov dword ptr [ebp-0x1C],ecx
	cmp dword ptr [esi+0xC8],ecx
	jne Block80

 Block74:
	cmp ebx,0xBB8
	je Block76

 Block75:
	cmp ebx,0xBB9
	jne Block77

 Block76:
	test eax,eax
	je Block80

 Block77:
	mov eax,dword ptr [esi+0xCC]
	cmp eax,0x10E
	jle Block209

 Block78:
	dec dword ptr [esi+0xD0]
	mov ecx,dword ptr [esi+0xD0]
	add ecx,eax
	jns Block118

 Block79:
	mov dword ptr [esi+0xD0],0x10E
	jmp Block118

 Block80:
	push 0
	push offset _S_
	push 0
	lea edi,[esi+0xD4]
	push 0
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	cmp ebx,0xBB8
	jne Block86

 Block81:
	cmp dword ptr [ebp-0x14],0
	je Block83

 Block82:
	lea eax,[ebp-0x14]
	push 0xE84
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,edi
	mov dword ptr [ebp-4],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	jmp Block103

 Block83:
	cmp dword ptr [esi+0xB4],0
	je Block105

 Block84:
	lea ecx,[ebp-0x18]
	push 0xE85
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],0xC
	mov dword ptr [ebp-0x14],0
	mov ebx,dword ptr [eax]
	mov byte ptr [ebp-4],0xD
	call get_update_time
	mov ecx,dword ptr [esi+0xB4]
	sub ecx,eax
	add ecx,0x3E7
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push eax
	lea ecx,[ebp-0x14]
	push ebx
	push ecx
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block102

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block102

 Block86:
	cmp ebx,0xBB9
	jne Block93

 Block87:
	cmp dword ptr [ebp-0x14],0
	je Block90

 Block88:
	lea edx,[ebp-0x18]
	push 0xE86
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,0xE
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x14],0
	mov ecx,dword ptr [esi+0xB8]
	mov eax,dword ptr [eax]
	inc ecx
	push ecx
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],0xF
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block102

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block102

 Block90:
	cmp dword ptr [esi+0xB4],0
	je Block105

 Block91:
	lea eax,[ebp-0x18]
	push 0xE85
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],0x10
	mov dword ptr [ebp-0x14],0
	mov ebx,dword ptr [eax]
	mov byte ptr [ebp-4],0x11
	call get_update_time
	mov ecx,dword ptr [esi+0xB4]
	sub ecx,eax
	add ecx,0x3E7
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	push ecx
	lea edx,[ebp-0x14]
	push ebx
	push edx
	call ZXString<char>::Format
	add esp,0xC
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block102

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block102

 Block93:
	cmp ebx,0xBBA
	jne Block105

 Block94:
	cmp dword ptr [esi+0xB8],0xA
	jl Block96

 Block95:
	lea eax,[ebp-0x18]
	push 0xE87
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],0x12
	jmp Block101

 Block96:
	cmp dword ptr [esi+0xA4],0
	jge Block98

 Block97:
	lea ecx,[ebp-0x18]
	push 0xE88
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],0x13
	jmp Block101

 Block98:
	cmp dword ptr [esi+0xBC],0
	je Block100

 Block99:
	lea edx,[ebp-0x18]
	push 0xE89
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],0x14
	jmp Block101

 Block100:
	lea eax,[ebp-0x18]
	push 0xE8A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],0x15

 Block101:
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign

 Block102:
	mov eax,dword ptr [ebp-0x18]

 Block103:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block105:
	mov ecx,dword ptr [ebp-0x1C]
	lea edx,[ebp-0x2C]
	push edx
	mov dword ptr [esi+0xC8],ecx
	mov dword ptr [esi+0xD0],0
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	mov edi,dword ptr [edi]
	lea ecx,[ebp-0x2C]
	push ecx
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov ebx,0x16
	push edi
	mov dword ptr [ebp-4],ebx
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x18]
	push 1
	push edx
	mov byte ptr [ebp-4],0x17
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov byte ptr [ebp-4],0x19
	call IWzFont::CalcTextWidth
	mov dword ptr [esi+0xCC],eax
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block111

 Block110:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block111:
	cmp word ptr [ebp-0x2C],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov ecx,dword ptr [esi+0xCC]
	cmp ecx,0x10E
	jle Block117

 Block116:
	mov dword ptr [esi+0xD0],0x87
	jmp Block118

 Block117:
	mov eax,0x10E
	sub eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi+0xD0],eax

 Block118:
	mov edx,3
	mov word ptr [ebp-0x2C],dx
	mov dword ptr [ebp-0x24],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x138]
	mov dword ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea eax,[ebp-0x2C]
	push eax
	lea edx,[ebp-0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	cmp word ptr [ebp-0x2C],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	mov dword ptr [ebp-0x1C],0
	lea edx,[ebp-0x18]
	push 0x3D0
	push edx
	mov dword ptr [ebp-4],0x1B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp-0x1C]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x1C
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block128:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x3C]
	push edx
	call edi
	lea eax,[ebp-0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	lea ecx,[ebp-0x2C]
	mov bl,0x1D
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov ecx,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0x1E
	test ecx,ecx
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	lea eax,[ebp-0x3C]
	push eax
	lea edx,[ebp-0x2C]
	push edx
	push 0xF
	push 0x10E
	call IWzCanvas::Create
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],bl
	jne Block137

 Block135:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x1B
	jne Block141

 Block139:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block142:
	lea ecx,[ebp-0x3C]
	push ecx
	call edi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	mov eax,3
	mov word ptr [ebp-0x2C],ax
	mov dword ptr [ebp-0x24],0xFF
	mov eax,dword ptr [esi+0xD4]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x20
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x18]
	push 1
	push eax
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0xD4]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,0x21
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0x22
	test ecx,ecx
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	mov edx,dword ptr [esi+0xD0]
	push 0
	push edx
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	mov edi,8
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x2C],di
	jne Block151

 Block149:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x3C],di
	jne Block155

 Block153:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x5C]
	push ecx
	call edi
	lea edx,[ebp-0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],0x23
	call edi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	lea edx,[ebp-0x7C]
	push edx
	mov byte ptr [ebp-4],0x24
	call edi
	lea eax,[ebp-0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x25
	call edi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block164

 Block163:
	push eax
	call _com_issue_error

 Block164:
	lea eax,[ebp-0x2C]
	mov bl,0x26
	push eax
	mov byte ptr [ebp-4],bl
	call edi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	mov ecx,dword ptr [esi+0x138]
	mov byte ptr [ebp-4],0x27
	test ecx,ecx
	jne Block168

 Block167:
	push 0x80004003
	call _com_issue_error

 Block168:
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x4C]
	push eax
	lea edx,[ebp-0x7C]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	mov eax,dword ptr [ebp-0x1C]
	lea edx,[ebp-0x2C]
	push edx
	push eax
	lea edx,[ebp-0x6C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x6C],8
	jne Block171

 Block169:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block172:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],bl
	jne Block175

 Block173:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block176:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x25
	jne Block183

 Block177:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block179:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block180:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x24
	jne Block184

 Block181:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	test eax,eax
	je Block185

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block183:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x3C]
	push edx
	call ebx
	jmp Block180

 Block184:
	lea ecx,[ebp-0x7C]
	push ecx
	call ebx

 Block185:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x23
	jne Block188

 Block186:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea eax,[ebp-0x4C]
	push eax
	call ebx

 Block189:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x1B
	jne Block192

 Block190:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea edx,[ebp-0x5C]
	push edx
	call ebx

 Block193:
	lea eax,[ebp-0x4C]
	push eax
	call edi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block195

 Block194:
	push eax
	call _com_issue_error

 Block195:
	lea edx,[ebp-0x5C]
	mov bl,0x28
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block197

 Block196:
	push eax
	call _com_issue_error

 Block197:
	mov esi,dword ptr [esi+0x138]
	mov byte ptr [ebp-4],0x29
	test esi,esi
	jne Block199

 Block198:
	push 0x80004003
	call _com_issue_error

 Block199:
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	push 0x126
	push 0x14
	mov ecx,esi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x5C],si
	jne Block202

 Block200:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block203:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x4C],si
	jne Block206

 Block204:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block207:
	mov eax,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block209

 Block208:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block209:
	lea esp,[ebp-0x8C]
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
// CRPSGameDlg::OnKey
__SUB_CLASS_THIS(002D6D20, __thiscall, 133700,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CRPSGameDlg::OnBtStart
_SUB_EXCEPTION_HANDLER(2D6860)
__SUB_CLASS_THIS0(002D6860, __thiscall, 133695,  CRPSGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D6860
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
	push 0xA0
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0xDC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov esi,dword ptr [esi+0xFC]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax
	lea ecx,[esp+0xC]
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
// CRPSGameDlg::IsKindOf
__SUB_CLASS_THIS(002D6D50, __thiscall, 133707,  CRPSGameDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CRPSGameDlg::ms_RTTI_CRPSGameDlg
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
// CRPSGameDlg::OnCreate
_SUB_EXCEPTION_HANDLER(2D7480)
__SUB_CLASS_THIS(002D7480, __thiscall, 133696,  CRPSGameDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D7480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor edi,edi
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x24],edi
	lea eax,[esp+0x14]
	push 0xE72
	push eax
	mov dword ptr [esp+0x6C],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x68],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x64],2
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x64],0
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
	call ebx

 Block9:
	mov eax,dword ptr [ebp+0xDC]
	mov dword ptr [ebp+0xDC],esi
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block11

 Block10:
	push edi
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [ebp+0xDC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push edi
	push 0xCA
	push 0x6C
	push 0xBB8
	push ebp
	call edx
	lea eax,[esp+0x14]
	push 0xE75
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x68],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x64],4
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
	mov byte ptr [esp+0x64],0
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
	call ebx

 Block21:
	mov eax,dword ptr [ebp+0xFC]
	mov dword ptr [ebp+0xFC],esi
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block23

 Block22:
	push edi
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [ebp+0xFC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push edi
	push 0x14F
	push 0xF2
	push 0xBBB
	push ebp
	call edx
	lea eax,[esp+0x14]
	push 0xE76
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x68],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x64],6
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
	mov byte ptr [esp+0x64],0
	cmp eax,edi
	je Block39

 Block30:
	add eax,8
	cmp eax,edi
	je Block39

 Block31:
	lea esi,[eax-8]
	cmp esi,edi
	je Block33

 Block32:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block33:
	mov eax,dword ptr [ebp+0xE4]
	mov dword ptr [ebp+0xE4],esi
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block35

 Block34:
	push edi
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [ebp+0xE4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push edi
	push 0x68
	push 0x13
	push 0x7D0
	push ebp
	call edx
	lea eax,[esp+0x14]
	push 0xE77
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x68],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
	cmp eax,edi
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
	mov byte ptr [esp+0x64],8
	cmp eax,edi
	je Block40

 Block38:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block41

 Block39:
	xor esi,esi
	jmp Block33

 Block40:
	xor eax,eax

 Block41:
	mov byte ptr [esp+0x64],0
	cmp eax,edi
	je Block51

 Block42:
	add eax,8
	cmp eax,edi
	je Block51

 Block43:
	lea edi,[eax-8]
	test edi,edi
	je Block45

 Block44:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block45:
	mov eax,dword ptr [ebp+0xEC]
	mov dword ptr [ebp+0xEC],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block47

 Block46:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block47:
	mov ecx,dword ptr [ebp+0xEC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 0
	push 0x68
	push 0x3C
	push 0x7D1
	push ebp
	call edx
	lea eax,[esp+0x14]
	push 0xE78
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x68],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x64],0xA
	test eax,eax
	je Block52

 Block50:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block53

 Block51:
	xor edi,edi
	jmp Block45

 Block52:
	xor eax,eax

 Block53:
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block61

 Block54:
	add eax,8
	je Block61

 Block55:
	lea edi,[eax-8]
	test edi,edi
	je Block57

 Block56:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block57:
	mov eax,dword ptr [ebp+0xF4]
	mov dword ptr [ebp+0xF4],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block59

 Block58:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block59:
	mov ecx,dword ptr [ebp+0xF4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 0
	push 0x68
	push 0x65
	push 0x7D2
	push ebp
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block60:
	push eax
	call _com_issue_error

 Block61:
	xor edi,edi
	jmp Block57

 Block62:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x64],0xC
	test ecx,ecx
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x30]
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
	mov edi,dword ptr [ebp+0x124]
	cmp edi,eax
	je Block69

 Block65:
	mov dword ptr [ebp+0x124],eax
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block67:
	test edi,edi
	je Block69

 Block68:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block69:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block71

 Block70:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block71:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x64],0xB
	cmp word ptr [esp+0x2C],di
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[esp+0x2C]
	push edx
	call ebx

 Block75:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x3C],di
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block79:
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x64],0xD
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block81

 Block80:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block81:
	mov edi,dword ptr [ebp+0x124]
	mov byte ptr [esp+0x64],0xE
	test edi,edi
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block85

 Block84:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block85:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],0xD
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0x2C]
	push edx
	call ebx

 Block89:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xF
	mov ecx,0xD
	mov byte ptr [esp+0x64],bl
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block93

 Block92:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block93:
	mov edi,dword ptr [ebp+0x124]
	mov byte ptr [esp+0x64],0x10
	test edi,edi
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block97

 Block96:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block97:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],bl
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block103

 Block102:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block103:
	mov edi,dword ptr [ebp+0x124]
	test edi,edi
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xB4]
	push 2
	push edi
	call ecx
	test eax,eax
	jge Block107

 Block106:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block107:
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	lea ecx,[esp+0x3C]
	mov bl,0x11
	push ecx
	mov byte ptr [esp+0x68],bl
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	mov ecx,dword ptr [ebp+0x124]
	mov byte ptr [esp+0x64],0x12
	test ecx,ecx
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x40]
	push edx
	push 0x5B
	push 0x1F
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x3C],di
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],di
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block121:
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x64],0x14
	test ecx,ecx
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebp+0x138]
	cmp edi,eax
	je Block130

 Block126:
	mov dword ptr [ebp+0x138],eax
	test eax,eax
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block128:
	test edi,edi
	je Block130

 Block129:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block130:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block132

 Block131:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block132:
	mov edi,8
	mov byte ptr [esp+0x64],0x13
	cmp word ptr [esp+0x3C],di
	jne Block135

 Block133:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],di
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x15
	mov ecx,0xD
	mov byte ptr [esp+0x64],bl
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block142

 Block141:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block142:
	mov edi,dword ptr [ebp+0x138]
	mov byte ptr [esp+0x64],0x16
	test edi,edi
	jne Block144

 Block143:
	push 0x80004003
	call _com_issue_error

 Block144:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block146

 Block145:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block146:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],bl
	jne Block149

 Block147:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block152

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block152:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x17
	mov ecx,0xD
	mov byte ptr [esp+0x64],bl
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block154

 Block153:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block154:
	mov edi,dword ptr [ebp+0x138]
	mov byte ptr [esp+0x64],0x18
	test edi,edi
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block158

 Block157:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block158:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],bl
	jne Block161

 Block159:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	mov edi,dword ptr [ebp+0x138]
	test edi,edi
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push edi
	call ecx
	test eax,eax
	jge Block168

 Block167:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block168:
	mov edi,dword ptr [ebp+0x138]
	test edi,edi
	jne Block170

 Block169:
	push 0x80004003
	call _com_issue_error

 Block170:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	test eax,eax
	jge Block172

 Block171:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block172:
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block174

 Block173:
	push eax
	call _com_issue_error

 Block174:
	lea eax,[esp+0x3C]
	mov bl,0x19
	push eax
	mov byte ptr [esp+0x68],bl
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block176

 Block175:
	push eax
	call _com_issue_error

 Block176:
	mov ecx,dword ptr [ebp+0x138]
	mov byte ptr [esp+0x64],0x1A
	test ecx,ecx
	jne Block178

 Block177:
	push 0x80004003
	call _com_issue_error

 Block178:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0x126
	push 0x14
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],bl
	jne Block185

 Block179:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block181

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block181:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block182:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],0
	jne Block186

 Block183:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block187

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block185:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x3C]
	push edx
	call edi
	jmp Block182

 Block186:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block187:
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x68],0x1B
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block191

 Block190:
	push eax
	call _com_issue_error

 Block191:
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xE79
	mov bl,0x1C
	push edx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x1D
	jne Block193

 Block192:
	push 0x80004003
	call _com_issue_error

 Block193:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x1E
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x128]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block196

 Block194:
	cmp eax,0x80004002
	je Block196

 Block195:
	push eax
	call _com_issue_error

 Block196:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block199

 Block197:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block200:
	mov ebx,8
	mov byte ptr [esp+0x64],0x1B
	cmp word ptr [esp+0x3C],bx
	jne Block203

 Block201:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block204

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block204

 Block203:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block204:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],bx
	jne Block207

 Block205:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block208:
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block210

 Block209:
	push eax
	call _com_issue_error

 Block210:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x68],0x1F
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block212

 Block211:
	push eax
	call _com_issue_error

 Block212:
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xE7A
	mov bl,0x20
	push ecx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x21
	jne Block214

 Block213:
	push 0x80004003
	call _com_issue_error

 Block214:
	lea edx,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x22
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x12C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block217

 Block215:
	cmp eax,0x80004002
	je Block217

 Block216:
	push eax
	call _com_issue_error

 Block217:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block220

 Block218:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block221:
	mov ebx,8
	mov byte ptr [esp+0x64],0x1F
	cmp word ptr [esp+0x3C],bx
	jne Block224

 Block222:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block225

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block224:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block225:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],bx
	jne Block228

 Block226:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block229:
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block231

 Block230:
	push eax
	call _com_issue_error

 Block231:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x68],0x23
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block233

 Block232:
	push eax
	call _com_issue_error

 Block233:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xE7B
	mov bl,0x24
	push eax
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x25
	jne Block235

 Block234:
	push 0x80004003
	call _com_issue_error

 Block235:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x26
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x130]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block238

 Block236:
	cmp eax,0x80004002
	je Block238

 Block237:
	push eax
	call _com_issue_error

 Block238:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block241

 Block239:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block242:
	mov ebx,8
	mov byte ptr [esp+0x64],0x23
	cmp word ptr [esp+0x3C],bx
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
	call edi

 Block246:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],bx
	jne Block249

 Block247:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block250

 Block248:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block250

 Block249:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block250:
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block252

 Block251:
	push eax
	call _com_issue_error

 Block252:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x68],0x27
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block254

 Block253:
	push eax
	call _com_issue_error

 Block254:
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xE7C
	mov bl,0x28
	push edx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x29
	jne Block256

 Block255:
	push 0x80004003
	call _com_issue_error

 Block256:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x2A
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x134]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block259

 Block257:
	cmp eax,0x80004002
	je Block259

 Block258:
	push eax
	call _com_issue_error

 Block259:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block262

 Block260:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block263:
	mov ebx,8
	mov byte ptr [esp+0x64],0x27
	cmp word ptr [esp+0x3C],bx
	jne Block266

 Block264:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block267

 Block265:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block267

 Block266:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block267:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],bx
	jne Block270

 Block268:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block271

 Block269:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block271

 Block270:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block271:
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block273

 Block272:
	push eax
	call _com_issue_error

 Block273:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x68],0x2B
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block275

 Block274:
	push eax
	call _com_issue_error

 Block275:
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xE7D
	mov bl,0x2C
	push ecx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x2D
	jne Block277

 Block276:
	push 0x80004003
	call _com_issue_error

 Block277:
	lea edx,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x2E
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x10C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block280

 Block278:
	cmp eax,0x80004002
	je Block280

 Block279:
	push eax
	call _com_issue_error

 Block280:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block283

 Block281:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block284

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block284

 Block283:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block284:
	mov ebx,8
	mov byte ptr [esp+0x64],0x2B
	cmp word ptr [esp+0x3C],bx
	jne Block287

 Block285:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block288

 Block286:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block288

 Block287:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block288:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],bx
	jne Block291

 Block289:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block292

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block292

 Block291:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block292:
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block294

 Block293:
	push eax
	call _com_issue_error

 Block294:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x68],0x2F
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block296

 Block295:
	push eax
	call _com_issue_error

 Block296:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xE7E
	mov bl,0x30
	push eax
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x31
	jne Block298

 Block297:
	push 0x80004003
	call _com_issue_error

 Block298:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x32
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x110]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block301

 Block299:
	cmp eax,0x80004002
	je Block301

 Block300:
	push eax
	call _com_issue_error

 Block301:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block304

 Block302:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block305

 Block303:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block305

 Block304:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block305:
	mov ebx,8
	mov byte ptr [esp+0x64],0x2F
	cmp word ptr [esp+0x3C],bx
	jne Block308

 Block306:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block309

 Block307:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block309

 Block308:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block309:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],bx
	jne Block312

 Block310:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block313

 Block311:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block313

 Block312:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block313:
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block315

 Block314:
	push eax
	call _com_issue_error

 Block315:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x68],0x33
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block317

 Block316:
	push eax
	call _com_issue_error

 Block317:
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xE7F
	mov bl,0x34
	push edx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x35
	jne Block319

 Block318:
	push 0x80004003
	call _com_issue_error

 Block319:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x36
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x114]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block322

 Block320:
	cmp eax,0x80004002
	je Block322

 Block321:
	push eax
	call _com_issue_error

 Block322:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block325

 Block323:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block326

 Block324:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block326

 Block325:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block326:
	mov ebx,8
	mov byte ptr [esp+0x64],0x33
	cmp word ptr [esp+0x3C],bx
	jne Block329

 Block327:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block330

 Block328:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block330

 Block329:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block330:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],bx
	jne Block333

 Block331:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block334

 Block332:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block334

 Block333:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block334:
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block336

 Block335:
	push eax
	call _com_issue_error

 Block336:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x68],0x37
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block338

 Block337:
	push eax
	call _com_issue_error

 Block338:
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xE80
	mov bl,0x38
	push ecx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x39
	jne Block340

 Block339:
	push 0x80004003
	call _com_issue_error

 Block340:
	lea edx,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x3A
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x118]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block343

 Block341:
	cmp eax,0x80004002
	je Block343

 Block342:
	push eax
	call _com_issue_error

 Block343:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block346

 Block344:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block347

 Block345:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block347

 Block346:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block347:
	mov ebx,8
	mov byte ptr [esp+0x64],0x37
	cmp word ptr [esp+0x3C],bx
	jne Block350

 Block348:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block351

 Block349:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block351

 Block350:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block351:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],bx
	jne Block354

 Block352:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block355

 Block353:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block355

 Block354:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block355:
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block357

 Block356:
	push eax
	call _com_issue_error

 Block357:
	lea edx,[esp+0x3C]
	mov bl,0x3B
	push edx
	mov byte ptr [esp+0x68],bl
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block359

 Block358:
	push eax
	call _com_issue_error

 Block359:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xE81
	push eax
	mov byte ptr [esp+0x80],0x3C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x3D
	jne Block361

 Block360:
	push 0x80004003
	call _com_issue_error

 Block361:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x7C],0x3C
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x3E
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x11C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block364

 Block362:
	cmp eax,0x80004002
	je Block364

 Block363:
	push eax
	call _com_issue_error

 Block364:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],0x3C
	jne Block367

 Block365:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block368

 Block366:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block368

 Block367:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block368:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],bl
	jne Block371

 Block369:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block372

 Block370:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block372

 Block371:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block372:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],0
	jne Block375

 Block373:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block376

 Block374:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block376

 Block375:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block376:
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block378

 Block377:
	push eax
	call _com_issue_error

 Block378:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x68],0x3F
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block380

 Block379:
	push eax
	call _com_issue_error

 Block380:
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xE82
	mov bl,0x40
	push edx
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x41
	jne Block382

 Block381:
	push 0x80004003
	call _com_issue_error

 Block382:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x42
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x120]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block385

 Block383:
	cmp eax,0x80004002
	je Block385

 Block384:
	push eax
	call _com_issue_error

 Block385:
	mov esi,8
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block388

 Block386:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block389

 Block387:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block389

 Block388:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block389:
	mov byte ptr [esp+0x64],0x3F
	cmp word ptr [esp+0x3C],si
	jne Block392

 Block390:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block393

 Block391:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block393

 Block392:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block393:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],si
	jne Block396

 Block394:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block397

 Block395:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block397

 Block396:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block397:
	mov dword ptr [ebp+0x94],0
	lea esi,[ebp+0xE4]
	mov edi,3

 Block398:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	add esi,8
	sub edi,1
	jne Block398

 Block399:
	mov ecx,ebp
	call CRPSGameDlg::SetUserAvatar
	mov ecx,ebp
	call CRPSGameDlg::SetNpc
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block401

 Block400:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block401:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4
}
}
// CRPSGameDlg::SetNpc
_SUB_EXCEPTION_HANDLER(2D5FB0)
__SUB_CLASS_THIS0(002D5FB0, __thiscall, 133695,  CRPSGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D5FB0
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
	mov esi,dword ptr [ebp+0x108]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [ebp+0x108],eax
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
	mov esi,dword ptr [ebp+0x108]
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
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,4
	mov ecx,0xD
	mov dword ptr [esp+0x94],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov esi,dword ptr [ebp+0x108]
	mov byte ptr [esp+0x94],5
	cmp esi,edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
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
	jge Block37

 Block36:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],bl
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,edi
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov esi,dword ptr [ebp+0x108]
	cmp esi,edi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	mov esi,dword ptr [ebp+0x108]
	cmp esi,edi
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 1
	push esi
	call eax
	cmp eax,edi
	jge Block51

 Block50:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	mov ebx,6
	push eax
	mov dword ptr [esp+0x98],ebx
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [ebp+0x108]
	mov byte ptr [esp+0x94],7
	cmp ecx,edi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0x105
	push 0x100
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x94],bl
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov ebx,8
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp word ptr [esp+0x18],bx
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov edx,dword ptr [ebp+0x98]
	push edx
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	int 3// TODO: 	mov dword ptr [esp+0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x80],edi
	mov dword ptr [esp+0x84],edi
	mov dword ptr [esp+0x88],edi
	push 0xFFFFFFFE
	lea ecx,[esp+0x7C]
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push 1
	push eax
	mov dword ptr [esp+0xA4],ebx
	call CActionMan::LoadNpcAction
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x108]
	mov byte ptr [esp+0x94],9
	cmp ecx,edi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x28],bx
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x14],eax
	cmp eax,edi
	je Block107

 Block74:
	mov ebx,dword ptr [ZImports::_VariantInit]

 Block75:
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

 Block76:
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

 Block77:
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

 Block78:
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

 Block79:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	mov ecx,dword ptr [ebp+0x108]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x94],0xE
	cmp ecx,edi
	je Block3

 Block80:
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
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,edi
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x94],0xD
	jne Block91

 Block85:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block87

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block87:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block88:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],0xC
	jne Block92

 Block89:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block93

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block91:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x28]
	push eax
	call esi
	jmp Block88

 Block92:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block93:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x94],0xB
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block97:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x94],0xA
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,edi
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0x48]
	push eax
	call esi

 Block101:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x94],8
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,edi
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[esp+0x58]
	push edx
	call esi

 Block105:
	cmp dword ptr [esp+0x14],edi
	jne Block75

 Block106:
	mov esi,dword ptr [ZImports::_VariantInit]

 Block107:
	lea eax,[esp+0x48]
	push eax
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	lea edx,[esp+0x58]
	mov bl,0xF
	push edx
	mov byte ptr [esp+0x98],bl
	call esi
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	mov ecx,dword ptr [ebp+0x108]
	mov byte ptr [esp+0x94],0x10
	cmp ecx,edi
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x58],si
	jne Block116

 Block114:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,edi
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x48],si
	jne Block120

 Block118:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,edi
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block121:
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
// CRPSGameDlg::ShowResult
_SUB_EXCEPTION_HANDLER(2D5350)
__SUB_CLASS_THIS0(002D5350, __thiscall, 133695,  CRPSGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D5350
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x78],edi
	cmp dword ptr [edi+0xB8],0
	mov esi,dword ptr [ZImports::_VariantInit]
	jge Block68

 Block1:
	cmp dword ptr [edi+0xA4],0
	jge Block37

 Block2:
	lea eax,[esp+0x54]
	push eax
	call esi
	lea ecx,[esp+0x54]
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
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0xA8],0
	call esi
	lea eax,[esp+0x24]
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
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xA8],1
	call esi
	lea edx,[esp+0x14]
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
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0xA8],2
	call esi
	lea ecx,[esp+0x34]
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
	lea edx,[esp+0x44]
	mov bl,3
	push edx
	mov byte ptr [esp+0xA8],bl
	call esi
	lea eax,[esp+0x44]
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
	mov ecx,dword ptr [edi+0x124]
	mov eax,dword ptr [edi+0x134]
	mov byte ptr [esp+0xA4],4
	test ecx,ecx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x54]
	push edx
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x1C]
	push edx
	lea edx,[esp+0x40]
	push edx
	lea edx,[esp+0x54]
	push edx
	push eax
	lea eax,[esp+0x7C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	cmp word ptr [esp+0x64],bp
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x64]
	push edx
	call edi

 Block18:
	mov byte ptr [esp+0xA4],bl
	cmp word ptr [esp+0x44],bp
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x44]
	push ecx
	call edi

 Block22:
	mov byte ptr [esp+0xA4],2
	cmp word ptr [esp+0x34],bp
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x34]
	push eax
	call edi

 Block26:
	mov byte ptr [esp+0xA4],1
	cmp word ptr [esp+0x14],bp
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block30:
	mov byte ptr [esp+0xA4],0
	cmp word ptr [esp+0x24],bp
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x24]
	push ecx
	call edi

 Block34:
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0xA4],edi
	cmp word ptr [esp+0x54],bp
	jne Block36

 Block35:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	jmp Block134

 Block36:
	lea eax,[esp+0x54]
	jmp Block137

 Block37:
	lea ecx,[esp+0x44]
	push ecx
	call esi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	lea eax,[esp+0x34]
	push eax
	mov dword ptr [esp+0xA8],5
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0xA8],6
	call esi
	lea eax,[esp+0x14]
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
	lea ecx,[esp+0x24]
	mov bl,7
	push ecx
	mov byte ptr [esp+0xA8],bl
	call esi
	lea edx,[esp+0x24]
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
	lea eax,[esp+0x54]
	push eax
	mov ebp,8
	mov byte ptr [esp+0xA8],8
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov ecx,dword ptr [edi+0x124]
	mov eax,dword ptr [edi+0x130]
	mov byte ptr [esp+0xA4],9
	test ecx,ecx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea edx,[esp+0x44]
	push edx
	lea edx,[esp+0x38]
	push edx
	lea edx,[esp+0x1C]
	push edx
	lea edx,[esp+0x30]
	push edx
	lea edx,[esp+0x64]
	push edx
	push eax
	lea eax,[esp+0x7C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x64],bp
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x64]
	push edx
	call edi

 Block53:
	mov byte ptr [esp+0xA4],8
	cmp word ptr [esp+0x54],bp
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0x54]
	push ecx
	call edi

 Block57:
	mov byte ptr [esp+0xA4],bl
	cmp word ptr [esp+0x24],bp
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x24]
	push eax
	call edi

 Block61:
	mov byte ptr [esp+0xA4],6
	cmp word ptr [esp+0x14],bp
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block65:
	mov byte ptr [esp+0xA4],5
	cmp word ptr [esp+0x34],bp
	jne Block131

 Block66:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block132

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block68:
	mov ecx,dword ptr [edi+0xA0]
	cmp ecx,dword ptr [edi+0xA4]
	jne Block100

 Block69:
	lea edx,[esp+0x44]
	push edx
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea ecx,[esp+0x34]
	push ecx
	mov dword ptr [esp+0xA8],0xA
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0xA8],0xB
	call esi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0xA8],0xC
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	lea ecx,[esp+0x54]
	mov bl,0xD
	push ecx
	mov byte ptr [esp+0xA8],bl
	call esi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov ecx,dword ptr [edi+0x124]
	mov eax,dword ptr [edi+0x128]
	mov byte ptr [esp+0xA4],0xE
	test ecx,ecx
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea edx,[esp+0x44]
	push edx
	lea edx,[esp+0x38]
	push edx
	lea edx,[esp+0x1C]
	push edx
	lea edx,[esp+0x30]
	push edx
	lea edx,[esp+0x64]
	push edx
	push eax
	lea eax,[esp+0x7C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	cmp word ptr [esp+0x64],bp
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x64]
	push edx
	call edi

 Block85:
	mov byte ptr [esp+0xA4],bl
	cmp word ptr [esp+0x54],bp
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x54]
	push ecx
	call edi

 Block89:
	mov byte ptr [esp+0xA4],0xC
	cmp word ptr [esp+0x24],bp
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea eax,[esp+0x24]
	push eax
	call edi

 Block93:
	mov byte ptr [esp+0xA4],0xB
	cmp word ptr [esp+0x14],bp
	jne Block96

 Block94:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block97:
	mov byte ptr [esp+0xA4],0xA
	cmp word ptr [esp+0x34],bp
	jne Block131

 Block98:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block132

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block100:
	lea ecx,[esp+0x44]
	push ecx
	call esi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	lea eax,[esp+0x34]
	push eax
	mov dword ptr [esp+0xA8],0xF
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0xA8],0x10
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0xA8],0x11
	call esi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	lea eax,[esp+0x54]
	mov bl,0x12
	push eax
	mov byte ptr [esp+0xA8],bl
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	mov ecx,dword ptr [edi+0x124]
	mov eax,dword ptr [edi+0x12C]
	mov byte ptr [esp+0xA4],0x13
	test ecx,ecx
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	lea edx,[esp+0x44]
	push edx
	lea edx,[esp+0x38]
	push edx
	lea edx,[esp+0x1C]
	push edx
	lea edx,[esp+0x30]
	push edx
	lea edx,[esp+0x64]
	push edx
	push eax
	lea eax,[esp+0x7C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	cmp word ptr [esp+0x64],bp
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[esp+0x64]
	push edx
	call edi

 Block116:
	mov byte ptr [esp+0xA4],bl
	cmp word ptr [esp+0x54],bp
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[esp+0x54]
	push ecx
	call edi

 Block120:
	mov byte ptr [esp+0xA4],0x11
	cmp word ptr [esp+0x24],bp
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[esp+0x24]
	push eax
	call edi

 Block124:
	mov byte ptr [esp+0xA4],0x10
	cmp word ptr [esp+0x14],bp
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block128:
	mov byte ptr [esp+0xA4],0xF
	cmp word ptr [esp+0x34],bp
	jne Block131

 Block129:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea ecx,[esp+0x34]
	push ecx
	call edi

 Block132:
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0xA4],edi
	cmp word ptr [esp+0x44],bp
	jne Block136

 Block133:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx

 Block134:
	test eax,eax
	je Block138

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block136:
	lea eax,[esp+0x44]

 Block137:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block138:
	lea ecx,[esp+0x7C]
	push ecx
	call esi
	lea edx,[esp+0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block140

 Block139:
	push eax
	call _com_issue_error

 Block140:
	lea eax,[esp+0x8C]
	push eax
	mov dword ptr [esp+0xA8],0x14
	call esi
	lea ecx,[esp+0x8C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block142

 Block141:
	push eax
	call _com_issue_error

 Block142:
	mov esi,dword ptr [esp+0x78]
	mov ecx,dword ptr [esi+0x124]
	mov bl,0x15
	mov byte ptr [esp+0xA4],bl
	test ecx,ecx
	jne Block144

 Block143:
	push 0x80004003
	call _com_issue_error

 Block144:
	lea edx,[esp+0x74]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xA4],0x16
	test ecx,ecx
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	lea eax,[esp+0x7C]
	push eax
	lea edx,[esp+0x90]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0xA4],bl
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	mov byte ptr [esp+0xA4],0x14
	cmp word ptr [esp+0x8C],bp
	jne Block151

 Block149:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	mov dword ptr [esp+0xA4],edi
	cmp word ptr [esp+0x7C],bp
	jne Block155

 Block153:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block156:
	call get_update_time
	add eax,0x3E8
	mov dword ptr [esi+0xC0],eax
	jne Block158

 Block157:
	mov eax,1

 Block158:
	mov dword ptr [esi+0xC0],eax
	call get_update_time
	add eax,0xBB8
	mov dword ptr [esi+0xC4],eax
	jne Block160

 Block159:
	mov eax,1

 Block160:
	mov dword ptr [esi+0xC4],eax
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret
}
}
// CRPSGameDlg::OnBtContinue
_SUB_EXCEPTION_HANDLER(2D6900)
__SUB_CLASS_THIS0(002D6900, __thiscall, 133695,  CRPSGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D6900
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
	push 0xA0
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0xDC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov esi,dword ptr [esi+0xFC]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax
	lea ecx,[esp+0xC]
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
// CRPSGameDlg::OnBtRetry
_SUB_EXCEPTION_HANDLER(2D69A0)
__SUB_CLASS_THIS0(002D69A0, __thiscall, 133695,  CRPSGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D69A0
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
	push 0xA0
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0xDC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov esi,dword ptr [esi+0xFC]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax
	lea ecx,[esp+0xC]
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
// CRPSGameDlg::OnBtExit
_SUB_EXCEPTION_HANDLER(2D6A40)
__SUB_CLASS_THIS0(002D6A40, __thiscall, 133695,  CRPSGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D6A40
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
	push 0xA0
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0xDC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov esi,dword ptr [esi+0xFC]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax
	lea ecx,[esp+0xC]
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
// CRPSGameDlg::Draw
_SUB_EXCEPTION_HANDLER(2D5E00)
__SUB_CLASS_THIS(002D5E00, __thiscall, 133698,  CRPSGameDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D5E00
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x34]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,3
	mov ecx,0xFF
	mov dword ptr [esp+0x2C],0
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],ecx
	mov edi,dword ptr [esp+0x34]
	mov eax,dword ptr [esi+0xA0]
	mov edx,dword ptr [esi+eax*4+0x10C]
	mov byte ptr [esp+0x2C],1
	test edi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebp,dword ptr [esp+0x14]
	mov ebx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0x14
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x38]
	push 0x26
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	xor ebx,ebx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],bl
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],ecx
	mov eax,dword ptr [esi+0xA8]
	mov esi,dword ptr [esi+eax*4+0x118]
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	push esi
	push 0x14
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x38]
	push 0xBE
	push edi
	mov byte ptr [esp+0x4C],2
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],bl
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
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
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call eax
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
// CRPSGameDlg::~CRPSGameDlg
_SUB_EXCEPTION_HANDLER(2D6D80)
__SUB_CLASS_THIS0(002D6D80, __thiscall, 133695,  CRPSGameDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D6D80
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
	int 3// TODO: 	mov dword ptr [esi],offset CRPSGameDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CRPSGameDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CRPSGameDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x138]
	xor ebx,ebx
	mov dword ptr [esp+0x20],8
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 4
	push 4
	lea eax,[esi+0x128]
	push eax
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x124]
	mov byte ptr [esp+0x20],7
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 6
	push 4
	lea eax,[esi+0x10C]
	push eax
	mov byte ptr [esp+0x30],6
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x108]
	mov byte ptr [esp+0x20],5
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x104]
	mov byte ptr [esp+0x20],4
	cmp eax,ebx
	je Block11

 Block7:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block10

 Block9:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block10:
	mov dword ptr [esi+0x104],ebx

 Block11:
	lea edi,[esi+0xF8]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebx
	je Block13

 Block12:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block13:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 3
	push 8
	lea eax,[esi+0xE0]
	push eax
	mov byte ptr [esp+0x30],2
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xD8]
	mov byte ptr [esp+0x20],1
	cmp dword ptr [edi+4],ebx
	je Block15

 Block14:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block15:
	mov eax,dword ptr [esi+0xD4]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
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
// CRPSGameDlg::OnPacket
_SUB_EXCEPTION_HANDLER(2D9E00)
// 6DA0B8
static uint8_t _SUB_2D9E00_LOOKUP_TABLE_0[9] = {
0, 0, 1, 0, 0, 0, 0, 2, 0, 
};
__SUB(002D9E00, __cdecl, 133704,  void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D9E00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x4C]
	mov ecx,esi
	call CInPacket::Decode1
	movzx edi,al
	lea eax,[edi-6]
	cmp eax,8
	ja Block26

 Block1:
	movzx eax,byte ptr [eax+_SUB_2D9E00_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block20
cmp EAX, 1
je Block2
cmp EAX, 2
je Block14


 Block2:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block4

 Block3:
	push 0x21000003
	lea ecx,[esp+0x14]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x10]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x1C],ecx
	call _CxxThrowException

 Block4:
	mov ecx,esi
	call CInPacket::Decode4
	mov edi,eax
	lea eax,[esp+0xC]
	push 0xE83
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x48],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x44],1
	test eax,eax
	je Block13

 Block5:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block13

 Block6:
	add eax,8
	je Block13

 Block7:
	lea esi,[eax-8]
	mov dword ptr [esp+0x38],esi
	test esi,esi
	je Block9

 Block8:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x3C],esp
	push edx
	mov byte ptr [esp+0x54],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push edi
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	push 0x13C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x44],3
	test eax,eax
	je Block11

 Block10:
	push edi
	mov ecx,eax
	call CRPSGameDlg::_ctor_0

 Block11:
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x44],0
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block26

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x3C
	ret

 Block13:
	xor esi,esi
	mov dword ptr [esp+0x38],esi
	jmp Block9

 Block14:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block26

 Block15:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CRPSGameDlg::ms_RTTI_CRPSGameDlg
	call edx
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test ecx,ecx
	jne Block18

 Block17:
	push 0x21000003
	lea ecx,[esp+0x1C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x18]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esp+0x24],eax
	call _CxxThrowException

 Block18:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block26

 Block19:
	mov edx,dword ptr [eax+8]
	lea ecx,[eax+8]
	mov eax,dword ptr [edx]
	push 1
	call eax
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x3C
	ret

 Block20:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	jne Block22

 Block21:
	push 0x21000003
	lea ecx,[esp+0x24]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x20]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x2C],ecx
	call _CxxThrowException

 Block22:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CRPSGameDlg::ms_RTTI_CRPSGameDlg
	call edx
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test ecx,ecx
	jne Block25

 Block24:
	push 0x21000003
	lea ecx,[esp+0x2C]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x28]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x30]
	push ecx
	mov dword ptr [esp+0x34],eax
	call _CxxThrowException

 Block25:
	push esi
	push edi
	call CRPSGameDlg::ProcessPacket

 Block26:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x3C
	ret
}
}
// CRPSGameDlg::SetMainButton
_SUB_EXCEPTION_HANDLER(2D70E0)
__SUB_CLASS_THIS(002D70E0, __thiscall, 133701,  CRPSGameDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2D70E0
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
	mov edi,ecx
	mov ecx,dword ptr [edi+0xDC]
	xor ebx,ebx
	cmp ecx,ebx
	je Block3

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [edi+0xDC],ebx
	lea esi,[edi+0xD8]
	je Block3

 Block2:
	push ebx
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],ebx

 Block3:
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	mov ebp,dword ptr [esp+0x40]
	mov eax,ebp
	sub eax,0xBB8
	mov dword ptr [esp+0x38],ebx
	je Block8

 Block4:
	sub eax,1
	je Block7

 Block5:
	sub eax,1
	jne Block11

 Block6:
	lea eax,[esp+0x40]
	push 0xE74
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x3C],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x40]
	jmp Block9

 Block7:
	lea ecx,[esp+0x14]
	push 0xE73
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x3C],2
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	jmp Block9

 Block8:
	lea edx,[esp+0x18]
	push 0xE72
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x3C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]

 Block9:
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x40],eax
	mov byte ptr [esp+0x38],4
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block23

 Block15:
	add eax,8
	cmp eax,ebx
	je Block23

 Block16:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block18

 Block17:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov eax,dword ptr [edi+0xDC]
	mov dword ptr [edi+0xDC],esi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block20

 Block19:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block20:
	mov ecx,dword ptr [edi+0xDC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0xCA
	push 0x6C
	push ebp
	push edi
	call edx
	push ebx
	mov ecx,edi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block23:
	xor esi,esi
	jmp Block18
}
}
// CRPSGameDlg::ProcessPacket
__SUB_CLASS_THIS(002D72D0, __thiscall, 133702,  CRPSGameDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	lea eax,[ebx-6]
	push edi
	mov esi,ecx
	cmp eax,8
	ja Block19

 Block1:
	cmp EAX, 0
je Block14
cmp EAX, 1
je Block14
cmp EAX, 2
je Block19
cmp EAX, 3
je Block2
cmp EAX, 4
je Block13
cmp EAX, 5
je Block9
cmp EAX, 6
je Block2
cmp EAX, 7
je Block19
cmp EAX, 8
je Block14


 Block2:
	mov dword ptr [esi+0xA4],0xFFFFFFFF
	mov dword ptr [esi+0xB0],0x78
	call get_update_time
	xor edi,edi
	mov dword ptr [esi+0xAC],eax
	cmp eax,edi
	jne Block4

 Block3:
	mov eax,1

 Block4:
	mov dword ptr [esi+0xAC],eax
	call get_update_time
	add eax,0x7530
	mov dword ptr [esi+0xB4],eax
	cmp eax,edi
	jne Block6

 Block5:
	mov eax,1

 Block6:
	mov dword ptr [esi+0xB4],eax
	add esi,0xE4
	mov edi,3

 Block7:
	mov eax,dword ptr [esi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	add esi,8
	sub edi,1
	jne Block7

 Block8:
	pop edi
	pop esi
	pop ebx
	ret 8

 Block9:
	mov edi,dword ptr [esp+0x14]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,edi
	mov dword ptr [esi+0xA4],eax
	call CInPacket::Decode1
	movsx eax,al
	xor edi,edi
	cmp eax,edi
	jge Block12

 Block10:
	cmp dword ptr [esi+0xB8],edi
	jne Block12

 Block11:
	mov edi,1

 Block12:
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xB8],eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block13:
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0xB0],0
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xB8],eax
	call CRPSGameDlg::ShowResult
	pop edi
	pop esi
	pop ebx
	ret 8

 Block14:
	xor edi,edi
	push 0xBB8
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	call CRPSGameDlg::SetMainButton
	mov esi,dword ptr [esi+0xFC]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 1
	call eax
	cmp ebx,7
	jne Block16

 Block15:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xE8B
	push ecx
	jmp Block18

 Block16:
	cmp ebx,6
	jne Block19

 Block17:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0xE8C
	push edx

 Block18:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block19:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CRPSGameDlg::HitTest
__SUB_CLASS_THIS(002D5310, __thiscall, 133697,  CRPSGameDlg, int32_t, long, long, CCtrlWnd**) {
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
