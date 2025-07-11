#include "regen.hpp"
// OmokDlg.ipp
#include "OmokDlg.hpp"

// COmokDlg::Update
_SUB_EXCEPTION_HANDLER(284AB0)
__SUB_CLASS_THIS0(00284AB0, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_284AB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call get_update_time
	mov ecx,dword ptr [esi+0xE8]
	xor ebp,ebp
	cmp ecx,ebp
	je Block6

 Block1:
	mov ecx,dword ptr [esi+0x1044]
	cmp ecx,ebp
	je Block6

 Block2:
	cmp ecx,1
	jne Block18

 Block3:
	mov edx,eax
	sub edx,dword ptr [esi+0x1060]
	test edx,edx
	jle Block18

 Block4:
	push ebp

 Block5:
	mov ecx,esi
	call COmokDlg::AnimateRoundEffect

 Block6:
	cmp dword ptr [esi+0x1034],1
	jne Block26

 Block7:
	mov edi,dword ptr [esi+0x1050]
	add dword ptr [esi+0x104C],0xFFFFFFE2
	mov eax,dword ptr [esi+0x104C]
	mov dword ptr [esp+0x10],edi
	fild dword ptr [esp+0x10]
	add eax,0x3E7
	mov dword ptr [esp+0x10],eax
	fstp qword ptr [esp+0x14]
	sub esp,8
	fild dword ptr [esp+0x18]
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp]
	call _floor
	fld qword ptr [esp+0x1C]
	fucompp
	add esp,8
	fnstsw ax
	test ah,0x44
	jnp Block16

 Block8:
	cmp dword ptr [esi+0x1030],ebp
	je Block13

 Block9:
	cmp edi,9
	jg Block13

 Block10:
	cmp edi,ebp
	jle Block13

 Block11:
	lea eax,[esp+0x10]
	push 0x648
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x34],ebp
	call play_minigame_sound
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esi+0x104C]
	add ecx,0x3E7
	mov dword ptr [esp+0x10],ecx
	fild dword ptr [esp+0x10]
	sub esp,8
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp]
	call _floor
	add esp,8
	call __ftol2_sse
	cmp eax,ebp
	mov dword ptr [esi+0x1050],eax
	jg Block15

 Block14:
	push 0x90
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 0x3F
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov dword ptr [esi+0x1050],ebp
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block15:
	push ebp
	mov ecx,esi
	call CWnd::InvalidateRect

 Block16:
	push ebp
	cmp dword ptr [esi+0xDC],ebp
	jne Block24

 Block17:
	mov eax,dword ptr [esi+0x1D8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov eax,dword ptr [esi+0x1C0]
	push ebp
	jmp Block25

 Block18:
	cmp ecx,2
	jne Block21

 Block19:
	mov edx,eax
	sub edx,dword ptr [esi+0x1060]
	test edx,edx
	jle Block21

 Block20:
	push 1
	jmp Block5

 Block21:
	cmp ecx,3
	jne Block6

 Block22:
	sub eax,dword ptr [esi+0x1060]
	test eax,eax
	jle Block6

 Block23:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 8
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret

 Block24:
	mov eax,dword ptr [esi+0x1C8]

 Block25:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov eax,dword ptr [esi+0x1B8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0x1E0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0x1B0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	jmp Block33

 Block26:
	push 1
	cmp dword ptr [esi+0xDC],ebp
	jne Block30

 Block27:
	mov eax,dword ptr [esi+0x1D8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	cmp dword ptr [esi+0xE4],1
	mov eax,dword ptr [esi+0x1C0]
	lea ecx,[eax+4]
	jle Block29

 Block28:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esi+0x103C]
	mov eax,dword ptr [eax+0x1C]
	push edx
	jmp Block32

 Block29:
	push ebp
	jmp Block31

 Block30:
	mov eax,dword ptr [esi+0x1C8]
	lea ecx,[eax+4]

 Block31:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]

 Block32:
	call eax
	mov eax,dword ptr [esi+0x1B8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	mov eax,dword ptr [esi+0x1E0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	mov eax,dword ptr [esi+0x1B0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax

 Block33:
	cmp dword ptr [esi+0x1034],ebp
	jne Block41

 Block34:
	mov eax,dword ptr [esi+0x220]
	cmp eax,ebp
	je Block36

 Block35:
	mov dword ptr [esi+0x220],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov eax,dword ptr [esi+0x220]
	mov edi,dword ptr [esi+0x21C]
	cmp edi,eax
	je Block41

 Block37:
	mov dword ptr [esi+0x21C],eax
	cmp eax,ebp
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block39:
	cmp edi,ebp
	je Block41

 Block40:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block41:
	cmp dword ptr [esi+0xE4],1
	jg Block44

 Block42:
	mov eax,dword ptr [esi+0x218]
	cmp eax,ebp
	je Block44

 Block43:
	mov dword ptr [esi+0x218],ebp
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block44:
	mov ecx,esi
	call COmokDlg::DrawReadyOrNot
	mov ecx,esi
	call CWnd::Update
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x20
	ret
}
}
// COmokDlg::DecodeMiniGameRecord
__SUB_CLASS_THIS(00281720, __thiscall, 134584,  COmokDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	lea ecx,[esi+edi*8+0x164]
	call ZRef<GW_MiniGameRecord>::_Alloc
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi+edi*8+0x168]
	push eax
	call GW_MiniGameRecord::Decode
	pop edi
	pop esi
	ret 8
}
}
// COmokDlg::InsertStoneAnimateLayer
_SUB_EXCEPTION_HANDLER(284180)
__SUB_CLASS_THIS(00284180, __thiscall, 134595,  COmokDlg, void, NakedParam<_x_com_ptr<IWzProperty>>, STONELAYER&, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_284180
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [ebp+0x64],edi
	mov ebx,2
	mov dword ptr [ebp-4],edi
	cmp dword ptr [ebp+0x7C],ebx
	jne Block2

 Block1:
	lea eax,[ebp+0x40]
	push 0xC43
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ebx,[edi+1]
	jmp Block3

 Block2:
	lea ecx,[ebp+0x4C]
	push 0xC44
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR

 Block3:
	mov eax,dword ptr [eax]
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],ebx
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [ebp+0x74]
	mov dword ptr [ebp-4],3
	cmp ecx,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],6
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,edi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	test bl,2
	je Block17

 Block15:
	mov ecx,dword ptr [ebp+0x4C]
	and ebx,0xFFFFFFFD
	cmp ecx,edi
	je Block17

 Block16:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x4C],edi

 Block17:
	mov byte ptr [ebp-4],8
	test bl,1
	je Block20

 Block18:
	mov ecx,dword ptr [ebp+0x40]
	cmp ecx,edi
	je Block20

 Block19:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x40],edi

 Block20:
	mov dword ptr [ebp+0x64],edi
	mov edi,edi

 Block21:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x64]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],9
	cmp ebx,edi
	je Block6

 Block22:
	lea eax,[ebp+0x50]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x50],di
	je Block67

 Block23:
	lea ecx,[ebp+0x50]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block27

 Block26:
	cmp eax,0x80004002
	jne Block9

 Block27:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0xD
	cmp eax,edi
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov esi,dword ptr [ebp+0x60]
	cmp esi,edi
	sete al
	test al,al
	jne Block68

 Block30:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call ebx
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block9

 Block31:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],0xE
	call ebx
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block9

 Block32:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0xF
	call ebx
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block9

 Block33:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x10
	call ebx
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block9

 Block34:
	mov edx,3
	mov word ptr [ebp+0x30],dx
	mov dword ptr [ebp+0x38],0xB4
	mov eax,dword ptr [ebp+0x78]
	mov ecx,dword ptr [eax+0xC]
	mov byte ptr [ebp-4],0x12
	cmp ecx,edi
	je Block6

 Block35:
	lea edx,[ebp]
	push edx
	lea eax,[ebp+0x20]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x10]
	push eax
	lea edx,[ebp+0x30]
	push edx
	push esi
	lea eax,[ebp-0x2C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x2C],8
	jne Block42

 Block36:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
	je Block38

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block38:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block39:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x11
	jne Block43

 Block40:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block44

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block42:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x2C]
	push edx
	call ebx
	jmp Block39

 Block43:
	lea ecx,[ebp+0x30]
	push ecx
	call ebx

 Block44:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x10
	jne Block47

 Block45:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[ebp+0x10]
	push eax
	call ebx

 Block48:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xF
	jne Block51

 Block49:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[ebp-0x1C]
	push edx
	call ebx

 Block52:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0xE
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,edi
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[ebp+0x20]
	push ecx
	call ebx

 Block56:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xD
	jne Block59

 Block57:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp]
	push eax
	call ebx

 Block60:
	mov byte ptr [ebp-4],0xA
	cmp esi,edi
	je Block62

 Block61:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block62:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],8
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	cmp eax,edi
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x64]
	jmp Block21

 Block65:
	lea ecx,[ebp+0x50]
	push ecx
	call ebx

 Block66:
	inc dword ptr [ebp+0x64]
	jmp Block21

 Block67:
	lea edx,[ebp+0x50]
	push edx
	jmp Block74

 Block68:
	mov byte ptr [ebp-4],0xA
	cmp esi,edi
	je Block70

 Block69:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block70:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],8
	jne Block73

 Block71:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	cmp eax,edi
	je Block75

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block73:
	lea eax,[ebp+0x50]
	push eax

 Block74:
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	lea esp,[ebp-0x50]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// COmokDlg::PutStoneChecker
_SUB_EXCEPTION_HANDLER(2801E0)
__SUB_CLASS_THIS(002801E0, __thiscall, 134586,  COmokDlg, void, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2801E0
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
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x40
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	push 8
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::EncodeBuffer
	movzx ecx,byte ptr [esi+0x1028]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 8
}
}
// COmokDlg::OnPutStoneCheckerErr
__SUB_CLASS_THIS(00280360, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	push 6
	push ecx
	mov dword ptr [esp+0x10],esp
	cmp eax,0x43
	jne Block2

 Block1:
	mov eax,esp
	push 0x1E8
	push eax
	jmp Block3

 Block2:
	mov ecx,esp
	push 0x1E9
	push ecx

 Block3:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	pop esi
	ret 4
}
}
// COmokDlg::SendClaimGiveUp
_SUB_EXCEPTION_HANDLER(280860)
__SUB_CLASS_THIS0(00280860, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_280860
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xC8C],0
	jne Block4

 Block1:
	push 0
	push 0
	lea eax,[esi+0x88]
	push eax
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1D7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block4

 Block2:
	cmp dword ptr [esi+0x1034],1
	jne Block4

 Block3:
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x34
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esi+0xC8C],1
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// COmokDlg::SendRetreatRequest
_SUB_EXCEPTION_HANDLER(280A10)
__SUB_CLASS_THIS0(00280A10, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_280A10
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
	mov esi,ecx
	mov edi,1
	cmp dword ptr [esi+0x106C],edi
	jl Block8

 Block1:
	cmp dword ptr [esi+0xC98],0
	jne Block6

 Block2:
	cmp dword ptr [esi+0xC9C],0
	jne Block6

 Block3:
	cmp dword ptr [esi+0xCA0],0
	jne Block6

 Block4:
	push 0
	push 0
	lea eax,[esi+0x88]
	push eax
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1DE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block6

 Block5:
	push 0x90
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 0x36
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x10]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [esi+0xC98],edi
	mov dword ptr [esi+0xC9C],edi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block6:
	cmp dword ptr [esi+0xCA0],edi
	jne Block8

 Block7:
	push 3
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push 0x1DC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText

 Block8:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret
}
}
// COmokDlg::OnLeave
_SUB_EXCEPTION_HANDLER(281480)
__SUB_CLASS_THIS(00281480, __thiscall, 134584,  COmokDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_281480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0xC],ebx
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],1
	cmp eax,ecx
	je Block12

 Block1:
	push eax
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CMiniRoomBaseDlg::GetUserID
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x20],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push 4
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CMiniRoomBaseDlg::MakeGameMessage
	mov eax,dword ptr [esp+0xC]
	push 6
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xFFFFFFFF
	push eax
	mov dword ptr [ecx],ebx
	call ZXString16::AssignCharStr
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	mov eax,dword ptr [esi+0x1D8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	cmp dword ptr [esi+0x20C],ebx
	je Block6

 Block4:
	mov eax,dword ptr [esi+0x20C]
	cmp eax,ebx
	je Block6

 Block5:
	mov dword ptr [esi+0x20C],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp dword ptr [esi+0x218],ebx
	je Block9

 Block7:
	mov eax,dword ptr [esi+0x218]
	cmp eax,ebx
	je Block9

 Block8:
	mov dword ptr [esi+0x218],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0x103C],ebx
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	jmp Block25

 Block12:
	mov ecx,dword ptr [esp+0x28]
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	je Block20

 Block13:
	cmp eax,4
	je Block20

 Block14:
	cmp eax,5
	jne Block16

 Block15:
	lea eax,[esp+0x24]
	push 0x1C9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],4
	jmp Block21

 Block16:
	cmp eax,3
	jne Block18

 Block17:
	lea ecx,[esp+0x24]
	push 0x1D3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],5
	jmp Block21

 Block18:
	cmp eax,2
	jne Block23

 Block19:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x67
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	mov dword ptr [eax],ebx
	call CMiniRoomBaseDlg::MakeGameMessage
	mov eax,dword ptr [esp+0xC]
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0xFFFFFFFF
	push eax
	call ZXString16::CreateFromCharStr
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	mov dword ptr [esi+0x1044],3
	call get_update_time
	add eax,0x2710
	mov dword ptr [esi+0x1060],eax
	jmp Block24

 Block20:
	lea ecx,[esp+0x24]
	push 0x1CC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x1C],3

 Block21:
	push eax
	lea ecx,[esp+0x10]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 8
	mov ecx,esi
	call eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14

 Block24:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],bl

 Block25:
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// COmokDlg::DrawGameResult
_SUB_EXCEPTION_HANDLER(284E20)
__SUB_CLASS_THIS(00284E20, __thiscall, 134587,  COmokDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_284E20
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
	mov ebp,ecx
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	cmp dword ptr [ebp+0x1034],2
	mov dword ptr [esp+0x6C],edi
	jne Block37

 Block1:
	cmp dword ptr [ebp+0x1058],1
	je Block37

 Block2:
	mov eax,dword ptr [ebp+0x238]
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block37

 Block3:
	mov ebx,dword ptr [esp+0x78]

 Block4:
	lea eax,[esp+0x18]
	push eax
	call ZList<STONELAYER>::GetNext
	mov esi,dword ptr [eax+0xC]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov edi,dword ptr [eax+8]
	add esp,4
	mov dword ptr [esp+0x54],ecx
	mov dword ptr [esp+0x58],edx
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x60],esi
	test esi,esi
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block6:
	cmp edi,ebx
	jne Block33

 Block7:
	mov edx,3
	mov word ptr [esp+0x44],dx
	mov dword ptr [esp+0x4C],0xFFFFFFFE
	mov byte ptr [esp+0x6C],2
	test esi,esi
	je Block42

 Block8:
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x7C]
	push ecx
	mov ecx,esi
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x6C],1
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov esi,5
	jmp Block17

 Block13:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov esi,5
	jmp Block17

 Block16:
	mov edi,dword ptr [esp+0x5C]

 Block17:
	push edi
	lea eax,[esp+0x58]
	push eax
	mov eax,dword ptr [ebp+0x1F4]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block19:
	mov ecx,ebp
	call COmokDlg::InsertStoneAnimateLayer
	sub esi,1
	jne Block16

 Block20:
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
	jl Block40

 Block21:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x70],3
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block40

 Block22:
	mov esi,dword ptr [esp+0x60]
	mov byte ptr [esp+0x6C],4
	test esi,esi
	je Block42

 Block23:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x34]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x110]
	push esi
	call eax
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	mov edi,8
	mov byte ptr [esp+0x6C],3
	cmp word ptr [esp+0x24],di
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [esp+0x6C],1
	cmp word ptr [esp+0x34],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x6C],0
	test esi,esi
	je Block35

 Block34:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block35:
	cmp dword ptr [esp+0x18],0
	jne Block4

 Block36:
	xor edi,edi

 Block37:
	mov eax,dword ptr [ebp+0xE4]
	cmp eax,1
	jle Block122

 Block38:
	cmp dword ptr [ebp+0x1058],1
	je Block122

 Block39:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	mov eax,3
	mov word ptr [esp+0x54],ax
	mov dword ptr [esp+0x5C],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x6C],6
	cmp ecx,edi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x58]
	push eax
	push 5
	push edi
	push edi
	push edi
	push edi
	lea edx,[esp+0x94]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x20C]
	cmp esi,eax
	je Block48

 Block44:
	mov dword ptr [ebp+0x20C],eax
	cmp eax,edi
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block46:
	cmp esi,edi
	je Block48

 Block47:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block48:
	mov eax,dword ptr [esp+0x78]
	cmp eax,edi
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block50:
	mov esi,8
	mov byte ptr [esp+0x6C],5
	cmp word ptr [esp+0x54],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x44],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	lea edx,[esp+0x78]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,7
	mov ecx,0xD
	mov byte ptr [esp+0x6C],bl
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	cmp eax,edi
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block60:
	mov esi,dword ptr [ebp+0x20C]
	mov byte ptr [esp+0x6C],8
	cmp esi,edi
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block64

 Block63:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block64:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],bl
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,edi
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x6C],0
	cmp eax,edi
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	lea eax,[esp+0x78]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,9
	mov ecx,0xD
	mov byte ptr [esp+0x6C],bl
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	cmp eax,edi
	je Block72

 Block71:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block72:
	mov esi,dword ptr [ebp+0x20C]
	mov byte ptr [esp+0x6C],0xA
	cmp esi,edi
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,edi
	jge Block76

 Block75:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],bl
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x6C],0
	cmp eax,edi
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	mov esi,dword ptr [ebp+0x20C]
	cmp esi,edi
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block86

 Block85:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block86:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push edx
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	lea ecx,[esp+0x54]
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0x70],bl
	call esi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	mov ecx,dword ptr [ebp+0x20C]
	mov eax,dword ptr [ebp+0xDC]
	mov byte ptr [esp+0x6C],0xC
	cmp ecx,edi
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	neg eax
	lea edx,[esp+0x44]
	push edx
	sbb eax,eax
	lea edx,[esp+0x58]
	push edx
	and eax,0xFFFFFFAA
	push 0x71
	add eax,0x1F0
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x54],si
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,edi
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x44],si
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,edi
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov ecx,ebp
	call COmokDlg::IsWinnerLastTime
	test eax,eax
	je Block102

 Block101:
	lea ecx,[esp+0x1C]
	push 0x657
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],1
	jmp Block103

 Block102:
	lea edx,[esp+0x78]
	push 0x658
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],2

 Block103:
	mov eax,dword ptr [eax]
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block105

 Block104:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block105:
	mov ecx,dword ptr [ebp+0x1F8]
	mov dword ptr [esp+0x78],0xF
	cmp ecx,edi
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	lea eax,[esp+0x60]
	mov bl,0xE
	push eax
	mov byte ptr [esp+0x7C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x74],0x10
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block110

 Block108:
	cmp eax,0x80004002
	je Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	mov eax,dword ptr [ebp+0x20C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block112:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x54],si
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov ebx,dword ptr [esp+0x14]
	test bl,2
	je Block119

 Block117:
	mov ecx,dword ptr [esp+0x78]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp ecx,edi
	je Block119

 Block118:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x78],edi

 Block119:
	mov dword ptr [esp+0x6C],edi
	test bl,1
	je Block122

 Block120:
	mov ecx,dword ptr [esp+0x1C]
	and dword ptr [esp+0x14],0xFFFFFFFE
	cmp ecx,edi
	je Block122

 Block121:
	call _xbstr_t::Data_t::Release

 Block122:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push edx
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	mov ecx,3
	mov word ptr [esp+0x54],cx
	mov dword ptr [esp+0x5C],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x6C],0x12
	test ecx,ecx
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x58]
	push eax
	push 6
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x94]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x214]
	cmp esi,eax
	je Block131

 Block127:
	mov dword ptr [ebp+0x214],eax
	test eax,eax
	je Block129

 Block128:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block129:
	test esi,esi
	je Block131

 Block130:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block131:
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block133

 Block132:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block133:
	mov esi,8
	mov byte ptr [esp+0x6C],0x11
	cmp word ptr [esp+0x54],si
	jne Block136

 Block134:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block137:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x44],si
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	lea edx,[esp+0x78]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x13
	mov ecx,0xD
	mov byte ptr [esp+0x6C],bl
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block143

 Block142:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block143:
	mov esi,dword ptr [ebp+0x214]
	mov byte ptr [esp+0x6C],0x14
	test esi,esi
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block147:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],bl
	jne Block150

 Block148:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x6C],0
	test eax,eax
	je Block153

 Block152:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block153:
	lea eax,[esp+0x78]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x15
	mov ecx,0xD
	mov byte ptr [esp+0x6C],bl
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block155

 Block154:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block155:
	mov esi,dword ptr [ebp+0x214]
	mov byte ptr [esp+0x6C],0x16
	test esi,esi
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block159

 Block158:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block159:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],bl
	jne Block162

 Block160:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x6C],0
	test eax,eax
	je Block165

 Block164:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block165:
	mov esi,dword ptr [ebp+0x214]
	test esi,esi
	jne Block167

 Block166:
	push 0x80004003
	call _com_issue_error

 Block167:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block169

 Block168:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block169:
	lea edx,[esp+0x44]
	push edx
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block171

 Block170:
	push eax
	call _com_issue_error

 Block171:
	lea ecx,[esp+0x54]
	mov bl,0x17
	push ecx
	mov byte ptr [esp+0x70],bl
	call edi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block173

 Block172:
	push eax
	call _com_issue_error

 Block173:
	mov ecx,dword ptr [ebp+0x214]
	mov byte ptr [esp+0x6C],0x18
	cmp ecx,esi
	jne Block175

 Block174:
	push 0x80004003
	call _com_issue_error

 Block175:
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x58]
	push edx
	push 0x97
	push 0x57
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x6C],bl
	jne Block178

 Block176:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,esi
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x6C],0
	jne Block182

 Block180:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,esi
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block183:
	lea ecx,[esp+0x44]
	push ecx
	call edi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block185

 Block184:
	push eax
	call _com_issue_error

 Block185:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0x70],0x19
	call edi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	mov ecx,dword ptr [ebp+0x214]
	mov bl,0x1A
	mov byte ptr [esp+0x6C],bl
	cmp ecx,esi
	jne Block189

 Block188:
	push 0x80004003
	call _com_issue_error

 Block189:
	lea edx,[esp+0x78]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0x1B
	cmp ecx,esi
	jne Block191

 Block190:
	push 0x80004003
	call _com_issue_error

 Block191:
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x58]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x6C],bl
	cmp eax,esi
	je Block193

 Block192:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block193:
	mov edi,8
	mov byte ptr [esp+0x6C],0x19
	cmp word ptr [esp+0x54],di
	jne Block196

 Block194:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,esi
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block197:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x44],di
	jne Block200

 Block198:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,esi
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block201:
	cmp dword ptr [ebp+0x1058],1
	jne Block203

 Block202:
	lea ecx,[esp+0x1C]
	push 0x65A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or dword ptr [esp+0x14],4
	jmp Block206

 Block203:
	mov ecx,ebp
	call COmokDlg::IsWinnerLastTime
	test eax,eax
	je Block205

 Block204:
	lea edx,[esp+0x18]
	push 0x659
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or dword ptr [esp+0x14],edi
	jmp Block206

 Block205:
	lea eax,[esp+0x78]
	push 0x65B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or dword ptr [esp+0x14],0x10

 Block206:
	mov eax,dword ptr [eax]
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block208

 Block207:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block208:
	mov ecx,dword ptr [ebp+0x1F8]
	mov dword ptr [esp+0x78],0x1F
	cmp ecx,esi
	jne Block210

 Block209:
	push 0x80004003
	call _com_issue_error

 Block210:
	lea edx,[esp+0x60]
	mov bl,0x1E
	push edx
	mov byte ptr [esp+0x7C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x74],0x20
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block213

 Block211:
	cmp eax,0x80004002
	je Block213

 Block212:
	push eax
	call _com_issue_error

 Block213:
	mov eax,dword ptr [ebp+0x214]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block215

 Block214:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block215:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x54],di
	jne Block218

 Block216:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,esi
	je Block219

 Block217:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block219

 Block218:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block219:
	mov ebx,dword ptr [esp+0x14]
	test bl,0x10
	je Block222

 Block220:
	mov ecx,dword ptr [esp+0x78]
	and ebx,0xFFFFFFEF
	cmp ecx,esi
	je Block222

 Block221:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x78],esi

 Block222:
	test bl,8
	je Block225

 Block223:
	mov ecx,dword ptr [esp+0x18]
	and ebx,0xFFFFFFF7
	cmp ecx,esi
	je Block225

 Block224:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],esi

 Block225:
	test bl,4
	je Block228

 Block226:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,esi
	je Block228

 Block227:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],esi

 Block228:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [ebp+0x1034],esi
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp eax,esi
	je Block230

 Block229:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block230:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 8
}
}
// COmokDlg::OnPacket
__SUB_CLASS_THIS(00288B70, __thiscall, 134584,  COmokDlg, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFCE
	cmp eax,0xF
	ja Block13

 Block1:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block13
cmp EAX, 3
je Block13
cmp EAX, 4
je Block5
cmp EAX, 5
je Block6
cmp EAX, 6
je Block13
cmp EAX, 7
je Block13
cmp EAX, 8
je Block8
cmp EAX, 9
je Block9
cmp EAX, 10
je Block13
cmp EAX, 11
je Block10
cmp EAX, 12
je Block7
cmp EAX, 13
je Block12
cmp EAX, 14
je Block2
cmp EAX, 15
je Block11


 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	call COmokDlg::OnPutStoneChecker
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	call COmokDlg::OnTieRequest
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	call COmokDlg::OnTieResult
	ret 8

 Block5:
	mov edx,dword ptr [esp+8]
	push edx
	call COmokDlg::OnRetreatRequest
	ret 8

 Block6:
	mov eax,dword ptr [esp+8]
	push eax
	call COmokDlg::OnRetreatResult
	ret 8

 Block7:
	mov edx,dword ptr [esp+8]
	push edx
	call COmokDlg::OnGameResult
	ret 8

 Block8:
	mov eax,dword ptr [esp+8]
	push eax
	call COmokDlg::OnUserReady
	ret 8

 Block9:
	mov edx,dword ptr [esp+8]
	push edx
	call COmokDlg::OnUserCancelReady
	ret 8

 Block10:
	mov eax,dword ptr [esp+8]
	push eax
	call COmokDlg::OnUserStart
	ret 8

 Block11:
	mov edx,dword ptr [esp+8]
	push edx
	call COmokDlg::OnPutStoneCheckerErr
	ret 8

 Block12:
	mov eax,dword ptr [esp+8]
	push eax
	call COmokDlg::OnTimeOver

 Block13:
	ret 8
}
}
// STONELAYER::~STONELAYER
__SUB_CLASS_THIS0(0027FAB0, __thiscall, 134610,  STONELAYER, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// COmokDlg::COmokDlg
_SUB_EXCEPTION_HANDLER(281950)
__SUB_CLASS_THIS0(00281950, __thiscall, 134573,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_281950
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
	call CMiniRoomBaseDlg::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset COmokDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset COmokDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset COmokDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x54],edi
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1D0],edi
	mov dword ptr [esi+0x1D8],edi
	mov dword ptr [esi+0x1E0],edi
	mov dword ptr [esi+0x1E8],edi
	mov dword ptr [esi+0x1F0],edi
	mov dword ptr [esi+0x1F4],edi
	mov dword ptr [esi+0x1F8],edi
	lea ebx,[esi+0x1FC]
	mov dword ptr [ebx],edi
	mov dword ptr [esi+0x200],edi
	mov dword ptr [esi+0x204],edi
	mov dword ptr [esi+0x208],edi
	mov dword ptr [esi+0x20C],edi
	mov dword ptr [esi+0x210],edi
	mov dword ptr [esi+0x214],edi
	mov dword ptr [esi+0x218],edi
	mov dword ptr [esi+0x21C],edi
	mov dword ptr [esi+0x220],edi
	mov dword ptr [esi+0x224],edi
	mov dword ptr [esi+0x228],edi
	int 3// TODO: 	mov dword ptr [esi+0x22C],offset ZList<STONELAYER>::`vftable'
	mov dword ptr [esi+0x234],edi
	mov dword ptr [esi+0x238],edi
	mov dword ptr [esi+0x23C],edi
	mov dword ptr [esi+0x240],edi
	lea ecx,[esi+0x244]
	mov byte ptr [esp+0x54],0x1A
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0x1034],edi
	mov dword ptr [esi+0x1044],edi
	mov dword ptr [esi+0x1048],edi
	mov byte ptr [esp+0x54],0x1C
	call get_update_time
	mov dword ptr [esi+0x1060],eax
	lea eax,[esp+0x14]
	push 0x62C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x64],0x1D
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],0x1C
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x58],0x1E
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	push edi
	push edi
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x62E
	push ecx
	mov byte ptr [esp+0x70],0x1F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x68],0x20
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x68],0x1F
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x21
	call Ztl_variant_t::GetUnknown
	lea ebp,[esi+0x1F8]
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0x1F
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x54],0x1E
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],0x1C
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x63E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x60],0x22
	cmp ecx,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x64],0x1C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0x1C
	jne Block34

 Block29:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block31

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block31:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block32:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x63F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x60],0x24
	cmp ecx,edi
	jne Block35

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x3C]
	push ecx
	call ebx
	jmp Block32

 Block35:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x64],0x1C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x208]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0x1C
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x3C]
	push edx
	call ebx

 Block42:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x640
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x60],0x26
	cmp ecx,edi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x64],0x1C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x27
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x200]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block47

 Block45:
	cmp eax,0x80004002
	je Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0x1C
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x3C]
	push ecx
	call ebx

 Block51:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x641
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x60],0x28
	cmp ecx,edi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x64],0x1C
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x29
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x204]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block56

 Block54:
	cmp eax,0x80004002
	je Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0x1C
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,edi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[esp+0x3C]
	push edx
	call ebx

 Block60:
	lea ecx,[esi+0x22C]
	call ZList<STONELAYER>::RemoveAll
	mov ecx,esi
	call COmokDlg::ResetMiniGameData
	mov eax,esi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// COmokDlg::SendTieRequest
_SUB_EXCEPTION_HANDLER(280930)
__SUB_CLASS_THIS0(00280930, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_280930
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xC94],0
	jne Block4

 Block1:
	cmp dword ptr [esi+0xC90],0
	jne Block4

 Block2:
	push 0
	push 0
	lea eax,[esi+0x88]
	push eax
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1DA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block4

 Block3:
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x32
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	mov eax,1
	lea ecx,[esp+0x10]
	mov dword ptr [esi+0xC90],eax
	mov dword ptr [esi+0xC94],eax
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// COmokDlg::OnMouseButton
__SUB_CLASS_THIS(00280750, __thiscall, 134579,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0xC
	cmp dword ptr [esp+0x10],0x202
	push ebp
	mov ebp,ecx
	jne Block23

 Block1:
	cmp dword ptr [ebp+0x102C],0
	je Block23

 Block2:
	cmp dword ptr [ebp+0x1030],1
	jne Block23

 Block3:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x1C]
	push eax
	push edx
	lea eax,[esp+0x10]
	lea ecx,[ebp-4]
	push eax
	mov dword ptr [esp+0x10],ecx
	call COmokDlg::GetStoneCheckerPositionFromPoint
	cmp dword ptr [esp+8],0
	jl Block23

 Block4:
	cmp dword ptr [esp+0xC],0
	jl Block23

 Block5:
	mov eax,dword ptr [ebp+0x234]
	push esi
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block19

 Block6:
	push ebx
	push edi
	jmp Block8

 Block8:
	lea ecx,[esp+0x2C]
	push ecx
	call ZList<STONELAYER>::GetNext
	mov esi,dword ptr [eax+0xC]
	mov edi,dword ptr [eax]
	mov ebx,dword ptr [eax+4]
	add esp,4
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block10:
	cmp edi,dword ptr [esp+0x14]
	jne Block12

 Block11:
	cmp ebx,dword ptr [esp+0x18]
	je Block16

 Block12:
	test esi,esi
	je Block14

 Block13:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block14:
	inc dword ptr [esp+0x20]
	cmp dword ptr [esp+0x2C],0
	jne Block8

 Block15:
	jmp Block18

 Block16:
	test esi,esi
	je Block18

 Block17:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block18:
	pop edi
	pop ebx

 Block19:
	mov eax,dword ptr [ebp+0x230]
	test eax,eax
	je Block21

 Block20:
	cmp dword ptr [esp+0x18],eax
	jb Block22

 Block21:
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0xC]
	mov esi,dword ptr [esp+8]
	push edx
	push eax
	mov ecx,esi
	call COmokDlg::PutStoneChecker
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block22:
	pop esi

 Block23:
	pop ebp
	add esp,0xC
	ret 0x10
}
}
// COmokDlg::OnUserReady
_SUB_EXCEPTION_HANDLER(284930)
__SUB_CLASS_THIS(00284930, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_284930
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
	lea eax,[esp+8]
	push eax
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xDC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x1C0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax

 Block2:
	mov ecx,esi
	mov dword ptr [esi+0x103C],1
	call COmokDlg::DrawReadyOrNot
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// COmokDlg::OnCreate
_SUB_EXCEPTION_HANDLER(281EC0)
__SUB_CLASS_THIS(00281EC0, __thiscall, 134576,  COmokDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_281EC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x70],ebx
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov byte ptr [esp+0x78],1
	mov dword ptr [esp+0x58],0xFFE9EFF4
	mov dword ptr [esp+0x50],0xFF000000
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,eax
	lea ecx,[esp+0x40]
	cmp ecx,edi
	je Block5

 Block1:
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,ebx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x40],ebx

 Block3:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x40],edi
	cmp edi,ebx
	je Block5

 Block4:
	add edi,8
	push edi
	call ebp

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	mov eax,2
	xor ecx,ecx
	mov edx,eax
	mov edi,eax
	mov dword ptr [esp+0x34],ecx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x3C],edx
	mov dword ptr [esp+0x40],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],2
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block20

 Block11:
	add eax,8
	cmp eax,ebx
	je Block20

 Block12:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block14

 Block13:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block14:
	mov eax,dword ptr [esi+0x1F0]
	mov dword ptr [esi+0x1F0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esi+0x1F0]
	lea edx,[esp+0x2C]
	push edx
	push 0xF
	push 0xD2
	push 0x176
	push 0x198
	mov dword ptr [esp+0x70],0x100
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	push 0x3ED
	push esi
	call eax
	mov eax,dword ptr [esi+0x1F0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x14]
	push 0x515
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],4
	cmp eax,ebx
	je Block21

 Block19:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block22

 Block20:
	xor edi,edi
	jmp Block14

 Block21:
	xor eax,eax

 Block22:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block32

 Block23:
	add eax,8
	cmp eax,ebx
	je Block32

 Block24:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block26

 Block25:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block26:
	mov eax,dword ptr [esi+0x1E8]
	mov dword ptr [esi+0x1E8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block28

 Block27:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block28:
	mov ecx,dword ptr [esi+0x1E8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x173
	push 0x2C1
	push 0x3EE
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x64E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],6
	cmp eax,ebx
	je Block33

 Block31:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block34

 Block32:
	xor edi,edi
	jmp Block26

 Block33:
	xor eax,eax

 Block34:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block44

 Block35:
	add eax,8
	cmp eax,ebx
	je Block44

 Block36:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block38

 Block37:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block38:
	mov eax,dword ptr [esi+0x1C0]
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block40

 Block39:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block40:
	mov ecx,dword ptr [esi+0x1C0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xF3
	push 0x271
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x64F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],8
	cmp eax,ebx
	je Block45

 Block43:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block46

 Block44:
	xor edi,edi
	jmp Block38

 Block45:
	xor eax,eax

 Block46:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block56

 Block47:
	add eax,8
	cmp eax,ebx
	je Block56

 Block48:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block50

 Block49:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block50:
	mov eax,dword ptr [esi+0x1C8]
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block52

 Block51:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block52:
	mov ecx,dword ptr [esi+0x1C8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xF3
	push 0x271
	push 0x3EF
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x650
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block54:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0xA
	cmp eax,ebx
	je Block57

 Block55:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block58

 Block56:
	xor edi,edi
	jmp Block50

 Block57:
	xor eax,eax

 Block58:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block68

 Block59:
	add eax,8
	cmp eax,ebx
	je Block68

 Block60:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block62

 Block61:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block62:
	mov eax,dword ptr [esi+0x1B0]
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block64

 Block63:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block64:
	mov ecx,dword ptr [esi+0x1B0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x193
	push 0x1CA
	push 0x3EA
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x651
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block66:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0xC
	cmp eax,ebx
	je Block69

 Block67:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block70

 Block68:
	xor edi,edi
	jmp Block62

 Block69:
	xor eax,eax

 Block70:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block80

 Block71:
	add eax,8
	cmp eax,ebx
	je Block80

 Block72:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block74

 Block73:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block74:
	mov eax,dword ptr [esi+0x1B8]
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block76

 Block75:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block76:
	mov ecx,dword ptr [esi+0x1B8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x193
	push 0x19A
	push 0x3EB
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x652
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],0xD
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block78:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0xE
	cmp eax,ebx
	je Block81

 Block79:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block82

 Block80:
	xor edi,edi
	jmp Block74

 Block81:
	xor eax,eax

 Block82:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block92

 Block83:
	add eax,8
	cmp eax,ebx
	je Block92

 Block84:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block86

 Block85:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block86:
	mov eax,dword ptr [esi+0x1D8]
	mov dword ptr [esi+0x1D8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block88

 Block87:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block88:
	mov ecx,dword ptr [esi+0x1D8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x3F
	push 0x227
	push 0x3F0
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x654
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block90:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0x10
	cmp eax,ebx
	je Block93

 Block91:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block94

 Block92:
	xor edi,edi
	jmp Block86

 Block93:
	xor eax,eax

 Block94:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block104

 Block95:
	add eax,8
	cmp eax,ebx
	je Block104

 Block96:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block98

 Block97:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block98:
	mov eax,dword ptr [esi+0x1E0]
	mov dword ptr [esi+0x1E0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block100

 Block99:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block100:
	mov ecx,dword ptr [esi+0x1E0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x193
	push 0x1FA
	push 0x3F1
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x653
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x74],0x11
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block102

 Block101:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block102:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0x12
	cmp eax,ebx
	je Block105

 Block103:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block106

 Block104:
	xor edi,edi
	jmp Block98

 Block105:
	xor eax,eax

 Block106:
	mov byte ptr [esp+0x70],1
	cmp eax,ebx
	je Block122

 Block107:
	add eax,8
	cmp eax,ebx
	je Block122

 Block108:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block110

 Block109:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block110:
	mov eax,dword ptr [esi+0x1D0]
	mov dword ptr [esi+0x1D0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block112

 Block111:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block112:
	mov ecx,dword ptr [esi+0x1D0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0x193
	push 0x2A7
	push 0x3EC
	push esi
	call eax
	push 1
	push 0x4C
	push 0x13E
	push 0x11F
	push 0x197
	mov ecx,esi
	call CMiniRoomBaseDlg::EnableChat
	lea ecx,[esp+0x14]
	push 1
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x240]
	add esp,8
	cmp edi,eax
	je Block117

 Block113:
	mov dword ptr [esi+0x240],eax
	cmp eax,ebx
	je Block115

 Block114:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block115:
	cmp edi,ebx
	je Block117

 Block116:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block117:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	mov esi,dword ptr [esi+0x1D8]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x24]
	lea ecx,[esi+4]
	push ebx
	call edx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x70],bl
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block121:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block122:
	xor edi,edi
	jmp Block110
}
}
// COmokDlg::OnRetreatResult
_SUB_EXCEPTION_HANDLER(284620)
__SUB_CLASS_THIS(00284620, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_284620
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
	mov ebp,dword ptr [esp+0x58]
	mov ecx,ebp
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	je Block43

 Block1:
	mov ecx,ebp
	call CInPacket::Decode1
	mov ecx,ebp
	movzx edi,al
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esp+0x14],eax
	test edi,edi
	jle Block11

 Block2:
	lea ebx,[esi+0x22C]
	mov dword ptr [esp+0x58],edi

 Block3:
	cmp dword ptr [esi+0x234],0
	je Block10

 Block4:
	mov eax,dword ptr [esi+0x23C]
	mov edi,dword ptr [eax+0xC]
	mov ebp,dword ptr [eax+8]
	test edi,edi
	je Block6

 Block5:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block6:
	cmp ebp,dword ptr [esi+0x1028]
	jne Block8

 Block7:
	dec dword ptr [esi+0x106C]

 Block8:
	test edi,edi
	je Block10

 Block9:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block10:
	mov eax,dword ptr [ebx+0x10]
	push eax
	mov ecx,ebx
	call ZList<STONELAYER>::RemoveAt
	sub dword ptr [esp+0x58],1
	jne Block3

 Block11:
	cmp dword ptr [esi+0x234],0
	je Block39

 Block12:
	mov eax,dword ptr [esi+0x23C]
	mov edi,dword ptr [eax+0xC]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [eax+4]
	mov ebx,dword ptr [eax+8]
	mov dword ptr [esp+0x38],edx
	mov dword ptr [esp+0x3C],ecx
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x44],edi
	test edi,edi
	je Block14

 Block13:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block14:
	mov ecx,3
	mov dword ptr [esp+0x50],0
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],0xFFFFFFFE
	mov byte ptr [esp+0x50],1
	test edi,edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x5C]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov ebp,8
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x18],bp
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
	mov eax,dword ptr [esi+0x1F4]
	push ebx
	lea edx,[esp+0x3C]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	mov ecx,esi
	call COmokDlg::InsertStoneAnimateLayer
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[esp+0x18]
	mov bl,2
	push edx
	mov byte ptr [esp+0x54],bl
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov edi,dword ptr [esp+0x44]
	mov byte ptr [esp+0x50],3
	test edi,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	push 0x20
	mov ecx,edi
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x18],bp
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x28],bp
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call edx

 Block39:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [esi+0xDC],eax
	jne Block41

 Block40:
	mov eax,1
	mov dword ptr [esi+0x1030],eax
	mov dword ptr [esi+0xCA0],eax
	jmp Block42

 Block41:
	mov dword ptr [esi+0x1030],0

 Block42:
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x104C],0x7530
	call CWnd::InvalidateRect
	jmp Block44

 Block43:
	push 6
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x60],esp
	push 0x1DF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText

 Block44:
	mov dword ptr [esi+0xC98],0
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
// COmokDlg::OnUserStart
__SUB_CLASS_THIS(00284A00, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	xor edi,edi
	cmp dword ptr [esi+0x234],edi
	je Block2

 Block1:
	lea ecx,[esi+0x22C]
	call ZList<STONELAYER>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::Decode1
	movzx eax,al
	xor ecx,ecx
	cmp eax,dword ptr [esi+0xDC]
	setne cl
	mov eax,ecx
	mov dword ptr [esi+0x1030],eax
	neg eax
	sbb eax,eax
	add eax,2
	mov dword ptr [esi+0x1028],eax
	mov eax,dword ptr [esi+0x20C]
	cmp eax,edi
	je Block4

 Block3:
	mov dword ptr [esi+0x20C],edi
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block4:
	mov eax,dword ptr [esi+0x214]
	cmp eax,edi
	je Block6

 Block5:
	mov dword ptr [esi+0x214],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov ecx,esi
	mov dword ptr [esi+0x104C],0x7530
	mov dword ptr [esi+0x106C],edi
	mov dword ptr [esi+0x103C],edi
	call COmokDlg::DrawStoneColor
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	mov dword ptr [esi+0x1034],1
	pop esi
	ret 4
}
}
// COmokDlg::OnEnter
_SUB_EXCEPTION_HANDLER(2812E0)
__SUB_CLASS_THIS(002812E0, __thiscall, 134584,  COmokDlg, void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2812E0
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
	mov edi,dword ptr [esp+0x24]
	lea ecx,[esi+edi*8+0x164]
	call ZRef<GW_MiniGameRecord>::_Alloc
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi+edi*8+0x168]
	push eax
	call GW_MiniGameRecord::Decode
	mov eax,dword ptr [esi+0xE8]
	xor ebx,ebx
	mov dword ptr [esi+0x103C],ebx
	cmp eax,ebx
	jne Block2

 Block1:
	mov ecx,dword ptr [esi+0x1D8]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x24]
	add ecx,4
	push 1
	call eax

 Block2:
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x24],ebx
	push 1
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x24],ebx
	call CMiniRoomBaseDlg::GetUserID
	mov edi,eax
	lea edx,[esp+0x28]
	push 0x1C4
	push edx
	mov byte ptr [esp+0x24],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x28],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov edi,dword ptr [esp+0x24]
	push 6
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0xFFFFFFFF
	push edi
	mov dword ptr [ecx],ebx
	call ZXString16::AssignCharStr
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	lea eax,[esp+0x28]
	push 0x642
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x24],3
	call play_minigame_sound
	mov eax,dword ptr [esp+0x30]
	add esp,8
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov dword ptr [esi+0x1044],1
	call get_update_time
	add eax,0xBB8
	mov dword ptr [esi+0x1060],eax
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp edi,ebx
	je Block10

 Block9:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// COmokDlg::OnClickEndButton
_SUB_EXCEPTION_HANDLER(280CD0)
__SUB_CLASS_THIS0(00280CD0, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_280CD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x1034],1
	push 0
	push 0
	lea eax,[esi+0x88]
	push eax
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	jne Block6

 Block1:
	cmp dword ptr [esi+0x1038],0
	jne Block4

 Block2:
	push 0x1E0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block9

 Block3:
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x38
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x38],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	mov dword ptr [esi+0x1038],1
	lea ecx,[esp+0x10]
	jmp Block8

 Block4:
	push 0x1E1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block9

 Block5:
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x39
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x38],1
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	mov dword ptr [esi+0x1038],0
	lea ecx,[esp+0x10]
	jmp Block8

 Block6:
	push 0x1E4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block9

 Block7:
	push 0x90
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 0xA
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x38],2
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	lea ecx,[esp+0x20]

 Block8:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block9:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x30
	ret
}
}
// COmokDlg::OnClickBanButton
_SUB_EXCEPTION_HANDLER(280C20)
__SUB_CLASS_THIS0(00280C20, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_280C20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0
	push 0
	add ecx,0x88
	push ecx
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x1D8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block2

 Block1:
	push 0x90
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x3C
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret
}
}
// COmokDlg::OnClickReadyButton
_SUB_EXCEPTION_HANDLER(280B30)
__SUB_CLASS_THIS0(00280B30, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_280B30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0x103C],0
	push 0x90
	lea ecx,[esp+0xC]
	jne Block2

 Block1:
	call COutPacket::_ctor_1
	push 0x3A
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	lea eax,[esp+8]
	push eax
	jmp Block3

 Block2:
	call COutPacket::_ctor_1
	push 0x3B
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],1
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx

 Block3:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	lea edx,[esp+4]
	push 0x649
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x28],2
	call play_minigame_sound
	mov eax,dword ptr [esp+0xC]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret
}
}
// COmokDlg::HitTest
__SUB_CLASS_THIS(0027F850, __thiscall, 134577,  COmokDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push esi
	mov esi,dword ptr [esp+0x24]
	push edi
	mov edi,dword ptr [esp+0x24]
	push esi
	push edi
	push ebx
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
	push 0x185
	push 0x182
	push 0x13
	push 0xB
	lea eax,[esp+0x1C]
	push eax
	call SetRect
	push edi
	push ebx
	lea ecx,[esp+0x14]
	push ecx
	call PtInRect
	neg eax
	sbb eax,eax
	neg eax
	inc eax

 Block4:
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// COmokDlg::OnTieRequest
_SUB_EXCEPTION_HANDLER(2803B0)
__SUB_CLASS_THIS(002803B0, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2803B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x33
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	push 0
	push 0
	add esi,0x88
	push esi
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1D9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	lea ecx,[esp+0xC]
	cmp eax,6
	jne Block2

 Block1:
	push 1
	jmp Block3

 Block2:
	push 0

 Block3:
	call COutPacket::Encode1
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4
}
}
// COmokDlg::GetActionPosition
__SUB_CLASS_THIS(0027F820, __thiscall, 134583,  COmokDlg, void, long, long&, tagPOINT&) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax+4],0x8D
	jne Block2

 Block1:
	mov dword ptr [eax],0x1B6
	ret 0xC

 Block2:
	mov dword ptr [eax],0x216
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],5
	ret 0xC
}
}
// COmokDlg::OnKey
_SUB_EXCEPTION_HANDLER(281800)
__SUB_CLASS_THIS(00281800, __thiscall, 134578,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_281800
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
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	xor edx,edx
	mov dword ptr [esp+0xC],edx
	test eax,eax
	js Block16

 Block1:
	cmp ecx,0xD
	jne Block16

 Block2:
	mov ecx,dword ptr [esi+0x1EC]
	test ecx,ecx
	je Block6

 Block3:
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov edx,1
	test eax,eax
	je Block6

 Block4:
	cmp byte ptr [eax],0
	je Block6

 Block5:
	xor bl,bl
	jmp Block7

 Block6:
	mov bl,1

 Block7:
	test dl,1
	je Block10

 Block8:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	test bl,bl
	jne Block18

 Block11:
	mov ecx,dword ptr [esi+0x1EC]
	lea edx,[esp+0x24]
	push edx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0x1EC]
	push 0
	mov dword ptr [esp+0x1C],0
	call CCtrlEdit::SetText
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esi-4]
	call CMiniRoomBaseDlg::CheckAndSendChat
	mov esi,dword ptr [esi+0x1EC]
	test esi,esi
	je Block13

 Block12:
	lea eax,[esi+4]
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block18

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8

 Block16:
	cmp ecx,0x1B
	je Block18

 Block17:
	push eax
	push ecx
	mov ecx,esi
	call CDialog::OnKey

 Block18:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// COmokDlg::OnButtonClicked
__SUB_CLASS_THIS(00281750, __thiscall, 134580,  COmokDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0x3E9]
	cmp edx,8
	ja Block10

 Block1:
	cmp EDX, 0
je Block6
cmp EDX, 1
je Block2
cmp EDX, 2
je Block5
cmp EDX, 3
je Block8
cmp EDX, 4
je Block10
cmp EDX, 5
je Block10
cmp EDX, 6
je Block7
cmp EDX, 7
je Block9
cmp EDX, 8
je Block4


 Block2:
	call COmokDlg::SendTieRequest

 Block3:
	ret 4

 Block4:
	call COmokDlg::SendRetreatRequest
	ret 4

 Block5:
	call COmokDlg::SendClaimGiveUp
	ret 4

 Block6:
	call COmokDlg::OnClickStartButton
	ret 4

 Block7:
	call COmokDlg::OnClickReadyButton
	ret 4

 Block8:
	call COmokDlg::OnClickEndButton
	ret 4

 Block9:
	call COmokDlg::OnClickBanButton
	ret 4

 Block10:
	cmp eax,1
	jne Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block12:
	cmp eax,2
	jne Block14

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block14:
	cmp eax,8
	jne Block3

 Block15:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx
}
}
// COmokDlg::OnRetreatRequest
_SUB_EXCEPTION_HANDLER(2804B0)
__SUB_CLASS_THIS(002804B0, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2804B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x90
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x37
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	push 0
	push 0
	add esi,0x88
	push esi
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1DD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	lea ecx,[esp+0xC]
	cmp eax,6
	jne Block2

 Block1:
	push 1
	jmp Block3

 Block2:
	push 0

 Block3:
	call COutPacket::Encode1
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4
}
}
// COmokDlg::ResetMiniGameData
__SUB_CLASS_THIS0(0027F980, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	xor edi,edi
	cmp dword ptr [esi+0xDC],edi
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x1C0]
	push edi
	jmp Block3

 Block2:
	mov eax,dword ptr [esi+0x1C8]
	push 1

 Block3:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	call edx
	mov dword ptr [esi+0x103C],edi
	mov dword ptr [esi+0x1038],edi
	mov dword ptr [esi+0x1030],edi
	mov dword ptr [esi+0xC94],edi
	mov dword ptr [esi+0xC90],edi
	mov dword ptr [esi+0xCA0],edi
	mov dword ptr [esi+0xC8C],edi
	mov dword ptr [esi+0xC9C],edi
	mov dword ptr [esi+0xC98],edi
	pop edi
	pop esi
	ret
}
}
// COmokDlg::DrawReadyOrNot
_SUB_EXCEPTION_HANDLER(282790)
__SUB_CLASS_THIS0(00282790, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_282790
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [edi+0xE4]
	cmp eax,2
	jl Block93

 Block1:
	lea ebx,[ebp+3]
	cmp dword ptr [edi+0x218],ebp
	je Block10

 Block2:
	mov eax,ebx
	mov word ptr [esp+0x24],ax
	mov dword ptr [esp+0x2C],0xFFFFFFFE
	mov ecx,dword ptr [edi+0x218]
	mov dword ptr [esp+0x5C],ebp
	cmp ecx,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
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
	mov ecx,ebx
	mov dword ptr [esp+0x5C],1
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x5C],2
	cmp ecx,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 6
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x218]
	cmp esi,eax
	je Block19

 Block15:
	mov dword ptr [edi+0x218],eax
	cmp eax,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	cmp esi,ebp
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block19:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block21:
	mov esi,8
	mov byte ptr [esp+0x5C],1
	cmp word ptr [esp+0x24],si
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x5C],ebx
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block31:
	mov esi,dword ptr [edi+0x218]
	mov byte ptr [esp+0x5C],4
	cmp esi,ebp
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
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
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block35

 Block34:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],bl
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,ebp
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,5
	mov ecx,0xD
	mov dword ptr [esp+0x5C],ebx
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	mov esi,dword ptr [edi+0x218]
	mov byte ptr [esp+0x5C],6
	cmp esi,ebp
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
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
	cmp eax,ebp
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x5C],bl
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,ebp
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov esi,dword ptr [edi+0x218]
	cmp esi,ebp
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push edx
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea ecx,[esp+0x34]
	mov ebx,7
	push ecx
	mov dword ptr [esp+0x60],ebx
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov ecx,dword ptr [edi+0x218]
	mov byte ptr [esp+0x5C],8
	cmp ecx,ebp
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x38]
	push edx
	push 0x3F
	push 0x1EF
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,ebp
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	cmp dword ptr [edi+0x103C],ebp
	je Block73

 Block72:
	lea ecx,[esp+0x20]
	push 0x65C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],1
	jmp Block74

 Block73:
	lea edx,[esp+0x18]
	push 0x65D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],2

 Block74:
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block76

 Block75:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block76:
	mov ecx,dword ptr [edi+0x1F8]
	mov dword ptr [esp+0x68],0xB
	cmp ecx,ebp
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea eax,[esp+0x50]
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x6C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x64],0xC
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block81

 Block79:
	cmp eax,0x80004002
	je Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	mov eax,dword ptr [edi+0x218]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block83:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x44],si
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov ebx,dword ptr [esp+0x14]
	test bl,2
	je Block90

 Block88:
	mov ecx,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	cmp ecx,ebp
	je Block90

 Block89:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebp

 Block90:
	test bl,1
	je Block93

 Block91:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,ebp
	je Block93

 Block92:
	call _xbstr_t::Data_t::Release

 Block93:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret
}
}
// COmokDlg::AnimateRoundEffect
_SUB_EXCEPTION_HANDLER(283840)
// 684158
static uint8_t _SUB_283840_LOOKUP_TABLE_0[31] = {
0, 3, 1, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 
};
__SUB_CLASS_THIS(00283840, __thiscall, 134591,  COmokDlg, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_283840
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
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
	xor edi,edi
	mov dword ptr [ebp+0x64],edi
	xor ecx,ecx
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x68],ecx
	mov eax,dword ptr [ebp+0x7C]
	sub eax,edi
	mov byte ptr [ebp-4],1
	je Block66

 Block1:
	sub eax,1
	jne Block127

 Block2:
	lea eax,[ebp+0x30]
	push eax
	mov dword ptr [esi+0x1044],edi
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov edi,dword ptr [esi+0x228]
	mov bl,0xE
	mov byte ptr [ebp-4],bl
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[ebp+0x6C]
	push eax
	push edi
	mov dword ptr [ebp+0x6C],0
	call ecx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [ebp+0x6C]
	add eax,0x1F4
	mov edx,3
	mov word ptr [ebp+0x10],dx
	mov dword ptr [ebp+0x18],eax
	mov ecx,dword ptr [esi+0x228]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[ebp+0x30]
	push eax
	lea edx,[ebp+0x10]
	push edx
	push 0x14
	push 0x1F4
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [ebp-4],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [ebp+0x10],di
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp+0x10]
	push ecx
	call ebx

 Block14:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x30],di
	jne Block17

 Block15:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[ebp+0x30]
	push eax
	call ebx

 Block18:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
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
	mov edi,dword ptr [esi+0x228]
	mov byte ptr [ebp-4],0x10
	test edi,edi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[ebp+0x6C]
	push ecx
	push edi
	mov dword ptr [ebp+0x6C],0
	call edx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [ebp+0x6C]
	add eax,0x190
	mov ecx,3
	mov word ptr [ebp-0x6C],cx
	mov dword ptr [ebp-0x64],eax
	mov ecx,dword ptr [esi+0x228]
	mov bl,0x11
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[ebp+0x40]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x12
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea eax,[ebp-0x1C]
	push eax
	lea edx,[ebp-0x6C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov edi,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x6C],di
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x1C],di
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov edi,dword ptr [esi+0x228]
	mov bl,0x13
	mov byte ptr [ebp-4],bl
	test edi,edi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[ebp+0x6C]
	push ecx
	push edi
	mov dword ptr [ebp+0x6C],0
	call edx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	mov eax,dword ptr [ebp+0x6C]
	add eax,0x1F4
	mov ecx,3
	mov word ptr [ebp-0x5C],cx
	mov dword ptr [ebp-0x54],eax
	mov ecx,dword ptr [esi+0x228]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[ebp+0x4C]
	push edx
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea eax,[ebp-0x3C]
	push eax
	lea edx,[ebp-0x5C]
	push edx
	push 0x1E
	push 0x32
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x5C],di
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x3C],di
	jne Block57

 Block55:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov eax,dword ptr [esi+0x1070]
	add eax,0xFFFFFFFE
	cmp eax,0x1E
	ja Block65

 Block59:
	movzx ecx,byte ptr [eax+_SUB_283840_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block62
cmp ECX, 1
je Block61
cmp ECX, 2
je Block60
cmp ECX, 3
je Block65


 Block60:
	lea edx,[ebp+0x54]
	push 0x9E9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x1070]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x16
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esi+0x1048]
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	jmp Block63

 Block61:
	lea eax,[ebp+0x44]
	push 0x9EA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0x1048]
	mov byte ptr [ebp-4],0x17
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x44]
	jmp Block63

 Block62:
	lea ecx,[ebp+0x5C]
	push 0x9EB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esi+0x1048]
	mov byte ptr [ebp-4],0x18
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x5C]

 Block63:
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block126

 Block66:
	mov ebx,2
	mov dword ptr [esi+0x1044],ebx
	call get_update_time
	lea edx,[ebp+0x58]
	add eax,0x1770
	push 0x1A15
	push edx
	mov dword ptr [esi+0x1060],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x1070]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],bl
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push eax
	call edi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],3
	call edi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	push 0
	push 0
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x9E8
	mov bl,4
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block77

 Block75:
	cmp eax,0x80004002
	je Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x7C],bx
	jne Block80

 Block78:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[ebp-0x7C]
	push eax
	call edi

 Block81:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x20],bx
	jne Block84

 Block82:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[ebp+0x20]
	push edx
	call edi

 Block85:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp],bx
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[ebp]
	push ecx
	call edi

 Block89:
	mov edx,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp+0x64]
	mov edi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	lea edx,[ebp-0x8C]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block94

 Block92:
	cmp eax,0x80004002
	je Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],1
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	push 0
	push 0xFF
	push 3
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x6C],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	push 0xC8
	push 0xC8
	lea eax,[ebp+0x48]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push eax
	mov byte ptr [ebp-4],0xA
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x68]
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block100

 Block99:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block100:
	lea ecx,[ebp+0x50]
	push ecx
	mov byte ptr [ebp-4],0xB
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x228]
	add esp,0x28
	cmp edi,eax
	je Block105

 Block101:
	mov dword ptr [esi+0x228],eax
	test eax,eax
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block103:
	test edi,edi
	je Block105

 Block104:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block105:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block107

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block107:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x4C]
	push eax
	call edi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	lea edx,[ebp-0x2C]
	mov bl,0xC
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	mov ecx,dword ptr [esi+0x228]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x2C],di
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x4C],di
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [eax],0
	mov esi,dword ptr [esi+0x228]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block125

 Block124:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block125:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation

 Block126:
	mov ecx,dword ptr [ebp+0x68]

 Block127:
	mov byte ptr [ebp-4],0
	test ecx,ecx
	je Block129

 Block128:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block129:
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block131:
	lea esp,[ebp-0x9C]
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
}
}
// COmokDlg::~COmokDlg
_SUB_EXCEPTION_HANDLER(27FEC0)
__SUB_CLASS_THIS0(0027FEC0, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27FEC0
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
	int 3// TODO: 	mov dword ptr [esi],offset COmokDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset COmokDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset COmokDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x1048]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],0x1B
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0x244]
	mov byte ptr [esp+0x1C],0x1A
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x240]
	mov byte ptr [esp+0x1C],0x19
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0x22C]
	mov byte ptr [esp+0x1C],0x18
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<STONELAYER>::`vftable'
	call ZList<STONELAYER>::RemoveAll
	mov eax,dword ptr [esi+0x228]
	mov byte ptr [esp+0x1C],0x17
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x224]
	mov byte ptr [esp+0x1C],0x16
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x220]
	mov byte ptr [esp+0x1C],0x15
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x21C]
	mov byte ptr [esp+0x1C],0x14
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x218]
	mov byte ptr [esp+0x1C],0x13
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0x214]
	mov byte ptr [esp+0x1C],0x12
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x210]
	mov byte ptr [esp+0x1C],0x11
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0x20C]
	mov byte ptr [esp+0x1C],0x10
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,dword ptr [esi+0x208]
	mov byte ptr [esp+0x1C],0xF
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esi+0x204]
	mov byte ptr [esp+0x1C],0xE
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esi+0x200]
	mov byte ptr [esp+0x1C],0xD
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esi+0x1FC]
	mov byte ptr [esp+0x1C],0xC
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov eax,dword ptr [esi+0x1F8]
	mov byte ptr [esp+0x1C],0xB
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov eax,dword ptr [esi+0x1F4]
	mov byte ptr [esp+0x1C],0xA
	cmp eax,ebx
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	lea edi,[esi+0x1EC]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block34

 Block33:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block34:
	lea edi,[esi+0x1E4]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block36

 Block35:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block36:
	lea edi,[esi+0x1DC]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block38

 Block37:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block38:
	lea edi,[esi+0x1D4]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block40

 Block39:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block40:
	lea edi,[esi+0x1CC]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block42

 Block41:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block42:
	lea edi,[esi+0x1C4]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block44

 Block43:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block44:
	lea edi,[esi+0x1BC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block46

 Block45:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block46:
	lea edi,[esi+0x1B4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block48

 Block47:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block48:
	lea edi,[esi+0x1AC]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block50

 Block49:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block50:
	lea edi,[esi+0x1A4]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block52

 Block51:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block52:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CMiniRoomBaseDlg::~CMiniRoomBaseDlg
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
// COmokDlg::Draw
_SUB_EXCEPTION_HANDLER(2867F0)
__SUB_CLASS_THIS(002867F0, __thiscall, 134581,  COmokDlg, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2867F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [ebp+0x78]
	push eax
	call CMiniRoomBaseDlg::Draw
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,3
	mov ecx,0xFF
	mov dword ptr [ebp-4],0
	mov word ptr [ebp+0x38],dx
	mov dword ptr [ebp+0x40],ecx
	mov ebx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],1
	test ebx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edi,dword ptr [ebp+0x38]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x1FC]
	push eax
	push 0x95
	push 0x194
	push ebx
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp+0x38],dx
	mov dword ptr [ebp+0x40],ecx
	mov edi,dword ptr [ebp+0x38]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x1FC]
	push eax
	push 0x95
	push 0x1EA
	push ebx
	mov byte ptr [ebp-4],2
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block10:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp+0x38],dx
	mov dword ptr [ebp+0x40],ecx
	mov edi,dword ptr [ebp+0x38]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x200]
	push eax
	push 0xA7
	mov byte ptr [ebp-4],dl
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x80]
	push 0x194
	push ebx
	call edx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block16:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp+0x38],dx
	mov dword ptr [ebp+0x40],ecx
	mov edi,dword ptr [ebp+0x38]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x208]
	push eax
	push 0x3F
	push 0x1CC
	push ebx
	mov byte ptr [ebp-4],4
	call edx
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block22:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x48]
	push edx
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[ebp+0x38]
	push ecx
	mov byte ptr [ebp-4],5
	call edi
	lea edx,[ebp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[ebp+0x48]
	push eax
	mov eax,dword ptr [esi+0x240]
	lea ecx,[ebp+0x38]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x1048]
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],6
	call _xbstr_t::_ctor_0
	push 0x16
	mov byte ptr [ebp-4],7
	push 0x1FB
	mov ecx,ebx
	mov byte ptr [ebp-4],6
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],5
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	xor eax,eax
	mov dword ptr [ebp+0x18],eax
	mov dword ptr [ebp+0x1C],eax
	push eax
	lea eax,[ebp+0x68]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call CMiniRoomBaseDlg::GetUserID
	push eax
	lea ecx,[ebp+0x18]
	mov byte ptr [ebp-4],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[ebp+0x48]
	push ecx
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov eax,dword ptr [ebp+0x18]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0xB
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x18]
	mov edi,esp
	lea ecx,[ebp+0x48]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov byte ptr [ebp-4],0xB
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x48],8
	lea edi,[eax+5]
	mov dword ptr [ebp+0x34],edi
	mov byte ptr [ebp-4],9
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	cmp edi,0x49
	jle Block59

 Block49:
	mov eax,dword ptr [esi+0x240]
	push 0x49
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block51:
	lea ecx,[ebp+0x18]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov ecx,dword ptr [ebp+0x18]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0xD
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp+0x18]
	mov edi,esp
	lea edx,[ebp+0x48]
	push edx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov byte ptr [ebp-4],0xD
	call IWzFont::CalcTextWidth
	add eax,5
	cmp word ptr [ebp+0x48],8
	mov dword ptr [ebp+0x34],eax
	mov byte ptr [ebp-4],9
	jne Block58

 Block56:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov edi,dword ptr [esi+0x240]
	test edi,edi
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[ebp+0x68]
	push ecx
	push edi
	mov dword ptr [ebp+0x68],0
	call edx
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block63:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x38]
	push eax
	call edi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0xF
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov ecx,dword ptr [ebp+0x18]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0x10
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x18]
	mov edi,esp
	lea edx,[ebp+0x38]
	push edx
	lea eax,[ebp+0x48]
	push eax
	mov eax,dword ptr [esi+0x240]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp+0x34]
	cdq
	sub eax,edx
	sar eax,1
	mov edx,0x1BC
	push 0x98
	sub edx,eax
	mov byte ptr [ebp-4],0x11
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x10
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0xF
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	xor edi,edi
	cmp eax,edi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	xor edi,edi

 Block71:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],9
	jne Block74

 Block72:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	cmp eax,edi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov dword ptr [ebp+0x2C],edi
	mov dword ptr [ebp+0x20],edi
	mov dword ptr [ebp+0x28],edi
	mov dword ptr [ebp+0x24],edi
	mov eax,dword ptr [esi+0x168]
	mov ecx,dword ptr [eax+0x10]
	push edi
	push ecx
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x15
	call format_integer
	mov eax,dword ptr [esi+0x168]
	mov eax,dword ptr [eax+4]
	push edi
	push eax
	lea ecx,[ebp+0x2C]
	push ecx
	call format_integer
	mov eax,dword ptr [esi+0x168]
	mov edx,dword ptr [eax+0xC]
	push edi
	push edx
	lea eax,[ebp+0x28]
	push eax
	call format_integer
	mov eax,dword ptr [esi+0x168]
	mov ecx,dword ptr [eax+8]
	push edi
	push ecx
	lea edx,[ebp+0x20]
	push edx
	call format_integer
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0x30
	lea eax,[ebp+0x58]
	push eax
	call edi
	lea ecx,[ebp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x16
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov ecx,dword ptr [ebp+0x24]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0x17
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea edx,[ebp+0x48]
	mov dword ptr [ebp+0x34],esp
	push edx
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	mov ecx,dword ptr [ebp+0x24]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0x18
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x34]
	mov edi,esp
	lea edx,[ebp+0x58]
	push edx
	mov edx,dword ptr [ebp+0x24]
	lea eax,[ebp+0x38]
	push eax
	mov eax,dword ptr [esi+0x240]
	push eax
	push 0x3FFFFFFF
	push ecx
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	mov eax,dword ptr [ebp+0x34]
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x24]
	push 0xA8
	lea ecx,[ebp+0x48]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],0x19
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	mov byte ptr [ebp-4],0x19
	call IWzFont::CalcTextWidth
	mov ecx,0x1C2
	sub ecx,eax
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x18
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x48],di
	jne Block86

 Block84:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp+0x38],di
	jne Block90

 Block88:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x58],di
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x1B
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	mov eax,dword ptr [ebp+0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x1C
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov eax,dword ptr [ebp+0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x1D
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x240]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x2C]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x2C]
	push 0xBA
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x1E
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x1F
	test ecx,ecx
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x1CC
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x1D
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp+0x58],di
	jne Block106

 Block104:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x48],di
	jne Block110

 Block108:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x20
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block119

 Block118:
	push eax
	call _com_issue_error

 Block119:
	mov eax,dword ptr [ebp+0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x21
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block121

 Block120:
	push eax
	call _com_issue_error

 Block121:
	mov eax,dword ptr [ebp+0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x22
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x240]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x28]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x28]
	push 0xC8
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x23
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x24
	test ecx,ecx
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x1CC
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x22
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp+0x58],di
	jne Block126

 Block124:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x48],di
	jne Block130

 Block128:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x25
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	mov eax,dword ptr [ebp+0x20]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x26
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	mov eax,dword ptr [ebp+0x20]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x27
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x240]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x20]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x20]
	push 0xD6
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x28
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x29
	test ecx,ecx
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov edi,dword ptr [ebp+0x30]
	mov ecx,0x1CC
	sub ecx,eax
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x27
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp+0x58],bx
	jne Block146

 Block144:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp+0x48],bx
	jne Block150

 Block148:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],bx
	jne Block154

 Block152:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	cmp dword ptr [esi+0xE4],1
	mov dword ptr [ebp+0x60],0xFF
	jle Block404

 Block156:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov eax,dword ptr [esi+0x200]
	lea ecx,[ebp+0x58]
	push ecx
	push eax
	push 0xA7
	push 0x1EA
	mov ecx,edi
	mov byte ptr [ebp-4],0x2A
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x58],bx
	jne Block159

 Block157:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block160:
	push 1
	lea ecx,[ebp+0x68]
	push ecx
	mov ecx,esi
	call CMiniRoomBaseDlg::GetUserID
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0x2B
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block162

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block162:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block164

 Block163:
	push eax
	call _com_issue_error

 Block164:
	mov ecx,dword ptr [ebp+0x1C]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	mov bl,0x2C
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp+0x1C]
	mov edi,esp
	lea edx,[ebp+0x58]
	push edx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x2D
	test ecx,ecx
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x58],8
	lea ebx,[eax+5]
	mov byte ptr [ebp-4],0x15
	jne Block169

 Block167:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	cmp ebx,0x49
	jle Block181

 Block171:
	mov eax,dword ptr [esi+0x240]
	push 0x49
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block173

 Block172:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block173:
	lea eax,[ebp+0x1C]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block175

 Block174:
	push eax
	call _com_issue_error

 Block175:
	mov eax,dword ptr [ebp+0x1C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	mov bl,0x2E
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x1C]
	mov edi,esp
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x2F
	test ecx,ecx
	jne Block177

 Block176:
	push 0x80004003
	call _com_issue_error

 Block177:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x58],8
	lea ebx,[eax+5]
	mov byte ptr [ebp-4],0x15
	jne Block180

 Block178:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block181:
	mov edi,dword ptr [esi+0x240]
	test edi,edi
	jne Block183

 Block182:
	push 0x80004003
	call _com_issue_error

 Block183:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x14]
	lea eax,[ebp+0x68]
	push eax
	push edi
	mov dword ptr [ebp+0x68],0
	call ecx
	test eax,eax
	jge Block185

 Block184:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block185:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x48]
	push edx
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],0x30
	call edi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	mov eax,dword ptr [ebp+0x1C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x31
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x240]
	mov edi,esp
	lea ecx,[ebp+0x48]
	push ecx
	lea edx,[ebp+0x58]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x1C]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov eax,ebx
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0x212
	sub ecx,eax
	push 0x98
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x32
	mov byte ptr [ebp-4],0x31
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x30
	jne Block192

 Block190:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block193:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x15
	jne Block196

 Block194:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block197:
	mov eax,dword ptr [esi+0x170]
	mov eax,dword ptr [eax+0x10]
	push 0
	push eax
	lea ecx,[ebp+0x24]
	push ecx
	call format_integer
	mov eax,dword ptr [esi+0x170]
	mov edx,dword ptr [eax+4]
	push 0
	push edx
	lea eax,[ebp+0x2C]
	push eax
	call format_integer
	mov eax,dword ptr [esi+0x170]
	mov ecx,dword ptr [eax+0xC]
	push 0
	push ecx
	lea edx,[ebp+0x28]
	push edx
	call format_integer
	mov eax,dword ptr [esi+0x170]
	mov eax,dword ptr [eax+8]
	push 0
	push eax
	lea ecx,[ebp+0x20]
	push ecx
	call format_integer
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0x30
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block199

 Block198:
	push eax
	call _com_issue_error

 Block199:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x33
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block201

 Block200:
	push eax
	call _com_issue_error

 Block201:
	mov eax,dword ptr [ebp+0x24]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x34
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
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
	mov eax,dword ptr [ebp+0x24]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x35
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x240]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x24]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x24]
	push 0xA8
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x36
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x37
	test ecx,ecx
	jne Block205

 Block204:
	push 0x80004003
	call _com_issue_error

 Block205:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x218
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x35
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp+0x58],di
	jne Block208

 Block206:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov byte ptr [ebp-4],0x33
	cmp word ptr [ebp+0x48],di
	jne Block212

 Block210:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block213:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block217:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block219

 Block218:
	push eax
	call _com_issue_error

 Block219:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x38
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block221

 Block220:
	push eax
	call _com_issue_error

 Block221:
	mov eax,dword ptr [ebp+0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x39
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call edi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block223

 Block222:
	push eax
	call _com_issue_error

 Block223:
	mov eax,dword ptr [ebp+0x2C]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x3A
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x240]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x2C]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x2C]
	push 0xBA
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x3B
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x3C
	test ecx,ecx
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x222
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x3A
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x39
	cmp word ptr [ebp+0x58],di
	jne Block228

 Block226:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block229:
	mov byte ptr [ebp-4],0x38
	cmp word ptr [ebp+0x48],di
	jne Block232

 Block230:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block233:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block236

 Block234:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block237

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block237

 Block236:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block237:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block239

 Block238:
	push eax
	call _com_issue_error

 Block239:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x3D
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block241

 Block240:
	push eax
	call _com_issue_error

 Block241:
	mov eax,dword ptr [ebp+0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x3E
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block243

 Block242:
	push eax
	call _com_issue_error

 Block243:
	mov eax,dword ptr [ebp+0x28]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x3F
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x240]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x28]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x28]
	push 0xC8
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x40
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x41
	test ecx,ecx
	jne Block245

 Block244:
	push 0x80004003
	call _com_issue_error

 Block245:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x222
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x3F
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x3E
	cmp word ptr [ebp+0x58],di
	jne Block248

 Block246:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block249:
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp+0x48],di
	jne Block252

 Block250:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block253:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block256

 Block254:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call edi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block259

 Block258:
	push eax
	call _com_issue_error

 Block259:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x42
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block261

 Block260:
	push eax
	call _com_issue_error

 Block261:
	mov eax,dword ptr [ebp+0x20]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x43
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	lea ecx,[ebp+0x58]
	mov ebx,esp
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block263

 Block262:
	push eax
	call _com_issue_error

 Block263:
	mov eax,dword ptr [ebp+0x20]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x44
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [esi+0x240]
	mov edi,esp
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x20]
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x20]
	push 0xD6
	lea ecx,[ebp+0x58]
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push edx
	push 0
	mov bl,0x45
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x240]
	mov byte ptr [ebp-4],0x46
	test ecx,ecx
	jne Block265

 Block264:
	push 0x80004003
	call _com_issue_error

 Block265:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	mov ecx,0x222
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x44
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x43
	cmp word ptr [ebp+0x58],di
	jne Block268

 Block266:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block269

 Block267:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block269

 Block268:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block269:
	mov byte ptr [ebp-4],0x42
	cmp word ptr [ebp+0x48],di
	jne Block272

 Block270:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block273

 Block271:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block273

 Block272:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block273:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x38],di
	jne Block276

 Block274:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block277

 Block275:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block277

 Block276:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block277:
	cmp dword ptr [esi+0x1034],1
	jne Block408

 Block278:
	xor ebx,ebx
	mov dword ptr [ebp+0x14],ebx
	mov dword ptr [ebp+0x10],ebx
	lea edx,[ebp+0x68]
	push 0x1E3
	push edx
	mov byte ptr [ebp-4],0x48
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x18]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x49
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0xC
	mov byte ptr [ebp-4],0x48
	cmp eax,ebx
	je Block280

 Block279:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block280:
	lea eax,[ebp+0x68]
	push 0x1E3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],0x4A
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0xC
	mov byte ptr [ebp-4],0x48
	cmp eax,ebx
	je Block282

 Block281:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block282:
	mov dword ptr [ebp+0x34],ebx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push eax
	mov byte ptr [ebp-4],0x4B
	call edi
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block284

 Block283:
	push eax
	call _com_issue_error

 Block284:
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],0x4C
	call edi
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block286

 Block285:
	push eax
	call _com_issue_error

 Block286:
	mov byte ptr [ebp-4],0x4D
	cmp dword ptr [esi+0x1030],ebx
	je Block289

 Block287:
	lea eax,[ebp+0x14]
	cmp dword ptr [esi+0xDC],ebx
	je Block291

 Block288:
	lea eax,[ebp+0x10]
	jmp Block291

 Block289:
	lea eax,[ebp+0x10]
	cmp dword ptr [esi+0xDC],ebx
	je Block291

 Block290:
	lea eax,[ebp+0x14]

 Block291:
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	cmp dword ptr [esi+0x1030],ebx
	je Block294

 Block292:
	lea ecx,[ebp+0x14]
	cmp dword ptr [esi+0xDC],ebx
	je Block296

 Block293:
	lea ecx,[ebp+0x10]
	jmp Block296

 Block294:
	lea ecx,[ebp+0x10]
	cmp dword ptr [esi+0xDC],ebx
	je Block296

 Block295:
	lea ecx,[ebp+0x14]

 Block296:
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp+0x58]
	push eax
	mov eax,dword ptr [esi+0x240]
	push eax
	mov eax,dword ptr [ecx]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp+0x30]
	push 0x196
	mov byte ptr [ebp-4],0x4E
	push 0xD
	mov ecx,ebx
	mov byte ptr [ebp-4],0x4D
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x4C
	jne Block299

 Block297:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block300:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x4B
	jne Block303

 Block301:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block304

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block303:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block304:
	lea edx,[ebp+0x68]
	push 0x1E2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x1050]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0x4F
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0xC
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block306

 Block305:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block306:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push eax
	call edi
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block308

 Block307:
	push eax
	call _com_issue_error

 Block308:
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],0x50
	call edi
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block310

 Block309:
	push eax
	call _com_issue_error

 Block310:
	mov ecx,dword ptr [ebp+0x34]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	mov byte ptr [ebp-4],0x51
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x34]
	mov edi,esp
	lea edx,[ebp+0x48]
	push edx
	lea eax,[ebp+0x58]
	push eax
	mov eax,dword ptr [esi+0x240]
	push eax
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	push 0x196
	mov byte ptr [ebp-4],0x52
	push 0x12C
	mov ecx,ebx
	mov byte ptr [ebp-4],0x51
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x50
	jne Block313

 Block311:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block314:
	mov ebx,8
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp+0x48],bx
	jne Block317

 Block315:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block318:
	cmp dword ptr [esi+0x224],0
	lea edi,[esi+0x224]
	sete al
	test al,al
	je Block381

 Block319:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block321

 Block320:
	push eax
	call _com_issue_error

 Block321:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov dword ptr [ebp+0x60],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x54
	test ecx,ecx
	jne Block323

 Block322:
	push 0x80004003
	call _com_issue_error

 Block323:
	lea eax,[ebp+0x48]
	push eax
	lea edx,[ebp+0x58]
	push edx
	push 5
	push 0
	push 0
	push 0
	push 0
	lea eax,[ebp+0x68]
	push eax
	call IWzGr2D::CreateLayer
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block325

 Block324:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block325:
	mov byte ptr [ebp-4],0x53
	cmp word ptr [ebp+0x58],bx
	jne Block328

 Block326:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block329

 Block327:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block329

 Block328:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block329:
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp+0x48],bx
	jne Block332

 Block330:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block333

 Block331:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block333

 Block332:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block333:
	lea ecx,[ebp+0x68]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x55
	mov edx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x58],dx
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block335

 Block334:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block335:
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x56
	test ecx,ecx
	jne Block337

 Block336:
	push 0x80004003
	call _com_issue_error

 Block337:
	lea eax,[ebp+0x58]
	push eax
	call IWzVector2D::Putorigin
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],bl
	jne Block340

 Block338:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block341

 Block339:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block341

 Block340:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block341:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block343

 Block342:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block343:
	lea eax,[ebp+0x68]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x57
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x58],cx
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block345

 Block344:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block345:
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x58
	test ecx,ecx
	jne Block347

 Block346:
	push 0x80004003
	call _com_issue_error

 Block347:
	lea edx,[ebp+0x58]
	push edx
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],bl
	jne Block350

 Block348:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block351

 Block349:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block351

 Block350:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block351:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block353

 Block352:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block353:
	mov edi,dword ptr [edi]
	test edi,edi
	jne Block355

 Block354:
	push 0x80004003
	call _com_issue_error

 Block355:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block357

 Block356:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block357:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call edi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block359

 Block358:
	push eax
	call _com_issue_error

 Block359:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],0x59
	call edi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block361

 Block360:
	push eax
	call _com_issue_error

 Block361:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x5A
	call edi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block363

 Block362:
	push eax
	call _com_issue_error

 Block363:
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],0x5B
	call edi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block365

 Block364:
	push eax
	call _com_issue_error

 Block365:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x5C
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block367

 Block366:
	push eax
	call _com_issue_error

 Block367:
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x655
	mov bl,0x5D
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x1F8]
	mov byte ptr [ebp-4],0x5E
	test ecx,ecx
	jne Block369

 Block368:
	push 0x80004003
	call _com_issue_error

 Block369:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov bl,0x5F
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block372

 Block370:
	cmp eax,0x80004002
	je Block372

 Block371:
	push eax
	call _com_issue_error

 Block372:
	mov ecx,dword ptr [esi+0x224]
	mov byte ptr [ebp-4],0x60
	test ecx,ecx
	jne Block374

 Block373:
	push 0x80004003
	call _com_issue_error

 Block374:
	mov edi,dword ptr [ebp+0x68]
	push edi
	lea eax,[ebp+0x58]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp+0x58],8
	jne Block377

 Block375:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block378

 Block376:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block378

 Block377:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block378:
	mov byte ptr [ebp-4],bl
	test edi,edi
	je Block380

 Block379:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block380:
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x4B
	call Ztl_variant_t::~Ztl_variant_t

 Block381:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x48]
	push edx
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block383

 Block382:
	push eax
	call _com_issue_error

 Block383:
	lea ecx,[ebp+0x58]
	mov bl,0x61
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block385

 Block384:
	push eax
	call _com_issue_error

 Block385:
	cmp dword ptr [esi+0x1030],0
	mov eax,dword ptr [esi+0xDC]
	mov byte ptr [ebp-4],0x62
	je Block387

 Block386:
	neg eax
	sbb eax,eax
	and eax,0x56
	add eax,0x192
	jmp Block388

 Block387:
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFAA
	add eax,0x1E8

 Block388:
	mov ecx,dword ptr [esi+0x224]
	test ecx,ecx
	jne Block390

 Block389:
	push 0x80004003
	call _com_issue_error

 Block390:
	lea edx,[ebp+0x48]
	push edx
	lea edx,[ebp+0x58]
	push edx
	push 0x37
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x58],di
	jne Block393

 Block391:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block394

 Block392:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block394

 Block393:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block394:
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp+0x48],di
	jne Block397

 Block395:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block398

 Block396:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block398

 Block397:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block398:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x48
	test eax,eax
	je Block400

 Block399:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block400:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x47
	test eax,eax
	je Block402

 Block401:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block402:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block408

 Block403:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block408

 Block404:
	mov ecx,3
	mov word ptr [ebp+0x58],cx
	mov eax,dword ptr [esi+0x204]
	lea edx,[ebp+0x58]
	push edx
	push eax
	push 0xAA
	push 0x1EA
	mov ecx,edi
	mov byte ptr [ebp-4],0x63
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x58],bx
	jne Block407

 Block405:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block408

 Block406:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block408

 Block407:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block408:
	cmp dword ptr [esi+0x1034],2
	mov edi,dword ptr [ebp+0x30]
	jne Block410

 Block409:
	mov edx,dword ptr [esi+0x102C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp+0x68],esp
	push edi
	call ecx
	mov ecx,esi
	call COmokDlg::DrawGameResult

 Block410:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block412

 Block411:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block412:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block414

 Block413:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block414:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block416

 Block415:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block416:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block418

 Block417:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block418:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block420

 Block419:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block420:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block422

 Block421:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block422:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	lea esp,[ebp-0x4C]
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
// COmokDlg::OnGameResult
_SUB_EXCEPTION_HANDLER(280570)
__SUB_CLASS_THIS(00280570, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_280570
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
	mov edi,dword ptr [esp+0x20]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0x1058],eax
	cmp eax,1
	jne Block2

 Block1:
	push 6
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	lea ecx,[esp+0x20]
	push 0x645
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x20],0
	call play_minigame_sound
	mov eax,dword ptr [esp+0x28]
	jmp Block8

 Block2:
	mov ecx,edi
	call CInPacket::Decode1
	mov edx,dword ptr [esi+0xDC]
	movzx eax,al
	mov dword ptr [esi+0x1054],eax
	cmp eax,edx
	jne Block4

 Block3:
	mov ecx,dword ptr [esi+0x1028]
	jmp Block5

 Block4:
	mov ecx,3
	sub ecx,dword ptr [esi+0x1028]

 Block5:
	push 6
	push ecx
	mov dword ptr [esi+0x102C],ecx
	mov dword ptr [esp+0x28],esp
	cmp eax,edx
	jne Block7

 Block6:
	mov edx,esp
	push 0x1D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	lea eax,[esp+0x20]
	push 0x646
	push eax
	mov dword ptr [esi+0x1028],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x20],1
	call play_minigame_sound
	mov eax,dword ptr [esp+0x28]
	jmp Block8

 Block7:
	mov ecx,esp
	push 0x1D6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	lea edx,[esp+0xC]
	push 0x647
	push edx
	mov dword ptr [esi+0x1028],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x20],2
	call play_minigame_sound
	mov eax,dword ptr [esp+0x14]

 Block8:
	add esp,8
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esi+0x168]
	push edi
	call GW_MiniGameRecord::Decode
	mov ecx,dword ptr [esi+0x170]
	push edi
	call GW_MiniGameRecord::Decode
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x1034],2
	mov dword ptr [esi+0x103C],0
	call CWnd::InvalidateRect
	mov ecx,esi
	call COmokDlg::ResetMiniGameData
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// COmokDlg::GetStoneCheckerPositionFromPoint
__SUB_CLASS_THIS(0027F8B0, __thiscall, 134588,  COmokDlg, tagPOINT*, tagPOINT*, long, long) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [esp+0x18]
	push ebx
	push ebp
	push esi
	push edi
	mov dword ptr [eax],0xFFFFFFFF
	mov dword ptr [eax+4],0xFFFFFFFF
	mov dword ptr [esp+0x10],0
	mov edi,0x19

 Block1:
	xor ebx,ebx
	lea ebp,[edi+0xE]
	mov esi,0x20
	nop

 Block2:
	lea eax,[esi+0xE]
	push eax
	push ebp
	push esi
	push edi
	lea ecx,[esp+0x24]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x30]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call PtInRect
	test eax,eax
	jne Block6

 Block3:
	add esi,0x18
	inc ebx
	cmp esi,0x188
	jl Block2

 Block4:
	inc dword ptr [esp+0x10]
	add edi,0x18
	cmp edi,0x181
	jl Block1

 Block5:
	mov eax,dword ptr [esp+0x28]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC

 Block6:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x10]
	pop edi
	pop esi
	pop ebp
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax],ecx
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// COmokDlg::OnTimeOver
__SUB_CLASS_THIS(0027FAC0, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push edi
	mov edi,dword ptr [esi+0xDC]
	call CInPacket::Decode1
	movzx eax,al
	xor ecx,ecx
	cmp edi,eax
	sete cl
	push 0
	mov dword ptr [esi+0x104C],0x7530
	mov dword ptr [esi+0x1030],ecx
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 4
}
}
// COmokDlg::OnTieResult
__SUB_CLASS_THIS(00280470, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push esi
	push 6
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xC],esp
	mov esi,ecx
	push 0x1DB
	push eax
	mov dword ptr [esi+0xC90],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CMiniRoomBaseDlg::AddChatText
	pop esi
	pop ecx
	ret 4
}
}
// COmokDlg::OnClickStartButton
_SUB_EXCEPTION_HANDLER(280280)
__SUB_CLASS_THIS0(00280280, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_280280
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0xE4],1
	jl Block2

 Block1:
	push 0x90
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	push 0x3D
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret
}
}
// COmokDlg::DrawStoneColor
_SUB_EXCEPTION_HANDLER(282D80)
__SUB_CLASS_THIS0(00282D80, __thiscall, 134575,  COmokDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_282D80
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [edi+0x21C]
	cmp eax,ebp
	je Block2

 Block1:
	mov dword ptr [edi+0x21C],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [edi+0x220]
	cmp eax,ebp
	je Block4

 Block3:
	mov dword ptr [edi+0x220],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov edx,3
	mov dword ptr [esp+0x60],ebp
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x60],1
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push 6
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x21C]
	cmp esi,eax
	je Block13

 Block9:
	mov dword ptr [edi+0x21C],eax
	cmp eax,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	cmp esi,ebp
	je Block13

 Block12:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block13:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],0
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	or ebx,0xFFFFFFFF
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x60],ebx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x60],2
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	mov esi,dword ptr [edi+0x21C]
	mov byte ptr [esp+0x60],3
	cmp esi,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block29

 Block28:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],2
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x60],ebx
	cmp eax,ebp
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x60],4
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block37:
	mov esi,dword ptr [edi+0x21C]
	mov byte ptr [esp+0x60],5
	cmp esi,ebp
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block41

 Block40:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],4
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x60],ebx
	cmp eax,ebp
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov esi,dword ptr [edi+0x21C]
	cmp esi,ebp
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push ebx
	push esi
	call ecx
	cmp eax,ebp
	jge Block51

 Block50:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea ecx,[esp+0x38]
	push ecx
	mov dword ptr [esp+0x64],6
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [edi+0x21C]
	mov eax,dword ptr [edi+0xDC]
	mov byte ptr [esp+0x60],7
	cmp ecx,ebp
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	neg eax
	lea edx,[esp+0x28]
	push edx
	sbb eax,eax
	lea edx,[esp+0x3C]
	push edx
	and eax,0x56
	push 0xCF
	add eax,0x19B
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x60],6
	cmp word ptr [esp+0x38],si
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov dword ptr [esp+0x60],ebx
	cmp word ptr [esp+0x28],si
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov esi,2
	cmp dword ptr [edi+0x1028],esi
	jne Block67

 Block66:
	lea ecx,[esp+0x20]
	push 0x6BB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],1
	jmp Block68

 Block67:
	lea edx,[esp+0x18]
	push 0x6BE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],esi

 Block68:
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block70

 Block69:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block70:
	mov ecx,dword ptr [edi+0x1F4]
	mov dword ptr [esp+0x6C],0xA
	cmp ecx,ebp
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea eax,[esp+0x44]
	mov bl,9
	push eax
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x68],0xB
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],ebp
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
	mov eax,dword ptr [edi+0x21C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block77:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],bl
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov ebx,dword ptr [esp+0x14]
	test bl,2
	je Block84

 Block82:
	mov ecx,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp ecx,ebp
	je Block84

 Block83:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebp

 Block84:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test bl,1
	je Block87

 Block85:
	mov ecx,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp ecx,ebp
	je Block87

 Block86:
	call _xbstr_t::Data_t::Release

 Block87:
	cmp dword ptr [edi+0xE4],1
	jle Block171

 Block88:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	mov ebx,0xC
	mov ecx,3
	mov dword ptr [esp+0x60],ebx
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x60],0xD
	cmp ecx,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 6
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x3C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x220]
	cmp esi,eax
	je Block97

 Block93:
	mov dword ptr [edi+0x220],eax
	cmp eax,ebp
	je Block95

 Block94:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block95:
	cmp esi,ebp
	je Block97

 Block96:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block97:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block99

 Block98:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block99:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],bl
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x60],0xFFFFFFFF
	jne Block106

 Block104:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,0xE
	mov ecx,0xD
	mov dword ptr [esp+0x60],ebx
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block109

 Block108:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block109:
	mov esi,dword ptr [edi+0x220]
	mov byte ptr [esp+0x60],0xF
	cmp esi,ebp
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block113

 Block112:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block113:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],bl
	jne Block116

 Block114:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp eax,ebp
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,0x10
	mov ecx,0xD
	mov dword ptr [esp+0x60],ebx
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block121

 Block120:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block121:
	mov esi,dword ptr [edi+0x220]
	mov byte ptr [esp+0x60],0x11
	cmp esi,ebp
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block125

 Block124:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block125:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],bl
	jne Block128

 Block126:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp eax,ebp
	je Block131

 Block130:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block131:
	mov esi,dword ptr [edi+0x220]
	cmp esi,ebp
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block135

 Block134:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block135:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	lea ecx,[esp+0x38]
	mov ebx,0x12
	push ecx
	mov dword ptr [esp+0x64],ebx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	mov ecx,dword ptr [edi+0x220]
	mov eax,dword ptr [edi+0xDC]
	mov byte ptr [esp+0x60],0x13
	cmp ecx,ebp
	jne Block141

 Block140:
	push 0x80004003
	call _com_issue_error

 Block141:
	neg eax
	lea edx,[esp+0x28]
	push edx
	sbb eax,eax
	lea edx,[esp+0x3C]
	push edx
	and eax,0xFFFFFFAA
	push 0xCF
	add eax,0x1F1
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x38],si
	jne Block144

 Block142:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block148

 Block146:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block149:
	cmp dword ptr [edi+0x1028],2
	jne Block151

 Block150:
	lea ecx,[esp+0x24]
	push 0x6BE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or dword ptr [esp+0x14],4
	jmp Block152

 Block151:
	lea edx,[esp+0x1C]
	push 0x6BB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or dword ptr [esp+0x14],esi

 Block152:
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block154

 Block153:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block154:
	mov ecx,dword ptr [edi+0x1F4]
	mov dword ptr [esp+0x6C],0x16
	cmp ecx,ebp
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	lea eax,[esp+0x54]
	mov bl,0x15
	push eax
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x68],0x17
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block159

 Block157:
	cmp eax,0x80004002
	je Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	mov eax,dword ptr [edi+0x220]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block161

 Block160:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block161:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],si
	jne Block164

 Block162:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block165:
	mov ebx,dword ptr [esp+0x14]
	test bl,8
	je Block168

 Block166:
	mov ecx,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFF7
	cmp ecx,ebp
	je Block168

 Block167:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],ebp

 Block168:
	test bl,4
	je Block171

 Block169:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebp
	je Block171

 Block170:
	call _xbstr_t::Data_t::Release

 Block171:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret
}
}
// COmokDlg::OnEnterResult
_SUB_EXCEPTION_HANDLER(280E70)
__SUB_CLASS_THIS(00280E70, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_280E70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
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
	mov eax,dword ptr [esi+0xDC]
	xor ebx,ebx
	cmp eax,ebx
	jne Block4

 Block1:
	mov ecx,dword ptr [esi+0x1C8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0x1C8],ebx
	lea edi,[esi+0x1C4]
	je Block3

 Block2:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block3:
	mov eax,dword ptr [esi+0x1C0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	push 0x90
	lea ecx,[ebp-0x4C]
	call COutPacket::_ctor_1
	push 0xB
	lea ecx,[ebp-0x4C]
	mov dword ptr [ebp-4],ebx
	call COutPacket::Encode1
	push 1
	lea ecx,[ebp-0x4C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[ebp-0x4C]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[ebp-0x48]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	jmp Block7

 Block4:
	mov ecx,dword ptr [esi+0x1C0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [esi+0x1C0],ebx
	lea edi,[esi+0x1BC]
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov ecx,dword ptr [esi+0x1D8]
	mov dword ptr [esi+0x103C],ebx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov dword ptr [esi+0x1044],1
	call get_update_time
	add eax,0xBB8
	mov dword ptr [esi+0x1060],eax

 Block7:
	mov ebx,dword ptr [ebp+8]
	mov ecx,ebx
	call CInPacket::Decode1
	movsx edi,al
	test edi,edi
	jl Block14

 Block8:
	mov eax,dword ptr [esi+edi*8+0x168]
	test eax,eax
	je Block13

 Block9:
	add eax,0xFFFFFFF0
	mov dword ptr [ebp-0x14],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x14]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	je Block12

 Block11:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block12:
	mov dword ptr [esi+edi*8+0x168],0

 Block13:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<GW_MiniGameRecord>>::call
	mov dword ptr [eax+4],1
	add eax,0x10
	mov dword ptr [esi+edi*8+0x168],eax
	add esp,4
	mov edi,eax
	push ebx
	mov ecx,edi
	call GW_MiniGameRecord::Decode
	mov ecx,ebx
	call CInPacket::Decode1
	movsx edi,al
	test edi,edi
	jge Block8

 Block14:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,ebx
	call CInPacket::DecodeStr
	lea ecx,[esi+0x1048]
	push eax
	mov dword ptr [ebp-4],1
	mov dword ptr [ebp-0x1C],ecx
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,ebx
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,ebx
	mov dword ptr [esi+0x105C],edx
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0xE8],eax
	test eax,eax
	je Block21

 Block17:
	mov ecx,ebx
	call CInPacket::Decode1
	cmp dword ptr [esi+0xDC],0
	movzx eax,al
	mov dword ptr [esi+0x1070],eax
	push 0
	jne Block19

 Block18:
	mov eax,dword ptr [esi+0x1C0]
	jmp Block20

 Block19:
	mov eax,dword ptr [esi+0x1C8]

 Block20:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	mov eax,dword ptr [esi+0x1D0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax

 Block21:
	mov dword ptr [ebp-0x14],0
	lea ecx,[ebp-0x18]
	push 0x631
	push ecx
	mov dword ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x105C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],3
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x3C]
	push ecx
	call ebx
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],4
	call ebx
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov edi,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],5
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ebx,esp
	push 0
	push 0
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x1F4]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x5C],bx
	jne Block35

 Block33:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x2C],bx
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x3C],bx
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov esi,dword ptr [esi+0x240]
	push 0xD7
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block46

 Block45:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block46:
	mov ecx,dword ptr [ebp-0x1C]
	push ecx
	call format_string_1
	add esp,0xC
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block48

 Block47:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block48:
	lea esp,[ebp-0x6C]
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
// COmokDlg::OnPutStoneChecker
_SUB_EXCEPTION_HANDLER(2866A0)
__SUB_CLASS_THIS(002866A0, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2866A0
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
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov edi,dword ptr [esp+0x2C]
	push 8
	lea ebx,[esi+0x1064]
	push ebx
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,dword ptr [ebx]
	movzx edi,al
	mov eax,dword ptr [esi+0x1068]
	push edi
	push eax
	push ecx
	mov ecx,esi
	call COmokDlg::InsertStoneCheckerLayer
	cmp dword ptr [esi+0x1028],edi
	jne Block2

 Block1:
	inc dword ptr [esi+0x106C]
	mov dword ptr [esi+0x1030],ebp
	jmp Block3

 Block2:
	mov dword ptr [esi+0x1030],1

 Block3:
	push ebp
	mov ecx,esi
	mov dword ptr [esi+0xC94],ebp
	mov dword ptr [esi+0xC9C],ebp
	mov dword ptr [esi+0x104C],0x7530
	call CWnd::InvalidateRect
	mov ebx,1
	cmp edi,ebx
	jne Block5

 Block4:
	lea edx,[esp+0x18]
	push 0x64B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x24],ebp
	jmp Block6

 Block5:
	lea eax,[esp+0x2C]
	push 0x64C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x24],ebx
	mov ebx,2

 Block6:
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x1C],ebx
	call play_minigame_sound
	add esp,8
	mov dword ptr [esp+0x24],ebp
	test bl,2
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x2C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test bl,1
	je Block12

 Block10:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
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
// COmokDlg::IsUserTurn
__SUB_CLASS_THIS0(0027F950, __thiscall, 134589,  COmokDlg, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1054]
	xor edx,edx
	cmp eax,dword ptr [ecx+0xDC]
	sete dl
	mov eax,edx
	ret
}
}
// COmokDlg::InsertStoneCheckerLayer
_SUB_EXCEPTION_HANDLER(285C70)
__SUB_CLASS_THIS(00285C70, __thiscall, 134590,  COmokDlg, void, int32_t, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_285C70
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
	mov dword ptr [esp+0x48],ecx
	xor ebp,ebp
	xor edi,edi
	mov dword ptr [esp+0x4C],ebp
	mov dword ptr [esp+0x94],edi
	mov dword ptr [esp+0xC0],ebp
	mov dword ptr [esp+0x64],ebp
	mov eax,dword ptr [ecx+0x234]
	mov byte ptr [esp+0xC0],1
	cmp eax,ebp
	jbe Block68

 Block1:
	mov eax,ecx
	mov eax,dword ptr [eax+0x23C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov esi,dword ptr [eax+8]
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [esp+0x88],ecx
	mov dword ptr [esp+0x8C],edx
	mov dword ptr [esp+0x90],esi
	cmp eax,ebp
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x98],edi
	call edx

 Block3:
	mov eax,3
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],0xFFFFFFFE
	mov byte ptr [esp+0xC0],2
	cmp edi,ebp
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xC0],1
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call ebx
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xC4],3
	call ebx
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea eax,[esp+0x78]
	push eax
	mov byte ptr [esp+0xC4],4
	call ebx
	lea ecx,[esp+0x78]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea edx,[esp+0x68]
	push edx
	mov byte ptr [esp+0xC4],5
	call ebx
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xC4],6
	call ebx
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov byte ptr [esp+0xC0],7
	cmp esi,2
	jne Block23

 Block22:
	lea eax,[esp+0x14]
	push 0x6BB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x4C],1
	jmp Block24

 Block23:
	lea ecx,[esp+0x54]
	push 0x6BE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x4C],2

 Block24:
	mov eax,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x80]
	push edx
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block26

 Block25:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block26:
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [eax+0x1F4]
	mov dword ptr [esp+0xE0],0xA
	cmp ecx,ebp
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0xC8]
	push edx
	mov byte ptr [esp+0xE4],9
	call IWzProperty::Getitem
	mov ebx,0xB
	mov ecx,eax
	mov dword ptr [esp+0xDC],ebx
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x68]
	mov dword ptr [esp+0x68],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block31

 Block29:
	cmp eax,0x80004002
	je Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	mov esi,dword ptr [esp+0x64]
	push esi
	lea eax,[esp+0xB0]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xDC],0xC
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x98],8
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0xA0]
	xor ecx,ecx
	mov word ptr [esp+0x98],cx
	cmp eax,ebp
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x98]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [esp+0xC0],bl
	cmp esi,ebp
	je Block37

 Block36:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block37:
	mov edi,8
	mov byte ptr [esp+0xC0],9
	cmp word ptr [esp+0xA8],di
	jne Block50

 Block38:
	mov eax,dword ptr [esp+0xB0]
	xor edx,edx
	mov word ptr [esp+0xA8],dx
	cmp eax,ebp
	je Block40

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block40:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block41:
	mov ebx,dword ptr [esp+0x4C]
	test bl,2
	je Block44

 Block42:
	mov ecx,dword ptr [esp+0x54]
	and ebx,0xFFFFFFFD
	cmp ecx,ebp
	je Block44

 Block43:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x54],ebp

 Block44:
	mov dword ptr [esp+0xC0],7
	test bl,1
	je Block47

 Block45:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block47

 Block46:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],ebp

 Block47:
	mov byte ptr [esp+0xC0],6
	cmp word ptr [esp+0x18],di
	jne Block51

 Block48:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block52

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block50:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0xA8]
	push eax
	call esi
	jmp Block41

 Block51:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block52:
	mov byte ptr [esp+0xC0],5
	cmp word ptr [esp+0x68],di
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x68]
	push ecx
	call esi

 Block56:
	mov byte ptr [esp+0xC0],4
	cmp word ptr [esp+0x78],di
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	cmp eax,ebp
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x78]
	push eax
	call esi

 Block60:
	mov byte ptr [esp+0xC0],3
	cmp word ptr [esp+0x38],di
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x38]
	push edx
	call esi

 Block64:
	mov byte ptr [esp+0xC0],1
	cmp word ptr [esp+0x28],di
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block68:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xC0],0xE
	cmp ecx,ebp
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 4
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [esp+0x68],esi
	call edx
	jmp Block75

 Block74:
	mov esi,dword ptr [esp+0x64]

 Block75:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	mov edi,8
	mov byte ptr [esp+0xC0],0xD
	cmp word ptr [esp+0x28],di
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov byte ptr [esp+0xC0],1
	cmp word ptr [esp+0x38],di
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov edi,dword ptr [esp+0x48]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xF
	mov edx,0xD
	mov byte ptr [esp+0xC0],bl
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block87:
	mov byte ptr [esp+0xC0],0x10
	cmp esi,ebp
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
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
	cmp eax,ebp
	jge Block91

 Block90:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block91:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xC0],bl
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],1
	cmp eax,ebp
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x11
	mov ecx,0xD
	mov byte ptr [esp+0xC0],bl
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block99

 Block98:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block99:
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
	mov byte ptr [esp+0xD4],0x12
	call eax
	cmp eax,ebp
	jge Block101

 Block100:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block101:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xC0],bl
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],1
	cmp eax,ebp
	je Block107

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block107:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block109

 Block108:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block109:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	lea ecx,[esp+0x28]
	mov bl,0x13
	push ecx
	mov byte ptr [esp+0xC4],bl
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0xD0]
	lea edx,[eax+eax*2]
	lea ecx,[esp+0x2C]
	push ecx
	lea eax,[edx*8+0x1C]
	push eax
	mov eax,dword ptr [esp+0xD4]
	lea ecx,[eax+eax*2]
	lea edx,[ecx*8+0x15]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xD0],0x14
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0xC0],bl
	cmp word ptr [esp+0x28],si
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov byte ptr [esp+0xC0],1
	cmp word ptr [esp+0x38],si
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov edi,dword ptr [esp+0xD0]
	mov esi,dword ptr [esp+0x48]
	mov eax,dword ptr [esi+0x1F4]
	lea ecx,[esp+0x58]
	push edi
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block123

 Block122:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block123:
	mov ecx,esi
	call COmokDlg::InsertStoneAnimateLayer
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	lea eax,[esp+0x28]
	mov bl,0x15
	push eax
	mov byte ptr [esp+0xC4],bl
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	mov esi,dword ptr [esp+0x64]
	mov byte ptr [esp+0xC0],0x16
	cmp esi,ebp
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xC0],bl
	jne Block132

 Block130:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xC0],1
	jne Block136

 Block134:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block137:
	mov ecx,dword ptr [esp+0x48]
	add ecx,0x22C
	mov dword ptr [esp+0x60],edi
	call ZList<STONELAYER>::AddTail_
	mov edx,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [eax+0xC]
	cmp edi,esi
	je Block140

 Block138:
	mov dword ptr [eax+0xC],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax
	cmp edi,ebp
	je Block140

 Block139:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block140:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xC4],0
	call ecx
	mov eax,dword ptr [esp+0x94]
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	cmp eax,ebp
	je Block142

 Block141:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block142:
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB0
	ret 0xC
}
}
// COmokDlg::OnUserCancelReady
__SUB_CLASS_THIS(002849C0, __thiscall, 134585,  COmokDlg, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xDC],0
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x1C0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block2:
	mov ecx,esi
	mov dword ptr [esi+0x103C],0
	call COmokDlg::DrawReadyOrNot
	pop esi
	ret 4
}
}
