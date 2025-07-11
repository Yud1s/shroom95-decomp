#include "regen.hpp"
// ITC.ipp
#include "ITC.hpp"

// CITCWnd_List::OnButtonClicked
_SUB_EXCEPTION_HANDLER(1878C0)
__SUB_CLASS_THIS(001878C0, __thiscall, 84246,  CITCWnd_List, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1878C0
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
	mov ebx,ecx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ebx+0x1B0]
	add eax,0xFFFFF830
	mov edx,eax
	shr edx,1
	and eax,1
	mov edi,eax
	cmp edx,dword ptr [ecx+0x5C]
	jae Block36

 Block1:
	cmp edi,2
	jae Block36

 Block2:
	mov eax,dword ptr [ecx+0x54]
	lea ebp,[eax+edx*8]
	mov eax,dword ptr [ebp+4]
	cmp dword ptr [eax+0x20],0
	jl Block36

 Block3:
	mov esi,dword ptr [ecx+0x68]
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	dec esi
	cmp esi,3
	ja Block36

 Block4:
	cmp ESI, 0
je Block5
cmp ESI, 1
je Block13
cmp ESI, 2
je Block17
cmp ESI, 3
je Block27


 Block5:
	mov edx,dword ptr [edx+0x2054]
	push edx
	add eax,0x34
	push eax
	call lstrcmpiA
	test eax,eax
	jne Block9

 Block6:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1298

 Block7:
	push ecx

 Block8:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block36

 Block9:
	test edi,edi
	jne Block12

 Block10:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x12D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block36

 Block11:
	mov ecx,dword ptr [ebx+0x1B0]
	push ebp
	call CITC::OnBuy
	jmp Block36

 Block12:
	mov ecx,dword ptr [ebx+0x1B0]
	push ebp
	call CITC::OnSetZzim
	jmp Block36

 Block13:
	mov edx,dword ptr [edx+0x2054]
	push edx
	add eax,0x34
	push eax
	call lstrcmpiA
	test eax,eax
	jne Block15

 Block14:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1298
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block36

 Block15:
	test edi,edi
	jne Block36

 Block16:
	mov ecx,dword ptr [ebx+0x1B0]
	push ebp
	call CITC::OnSale
	jmp Block36

 Block17:
	mov edx,dword ptr [edx+0x2054]
	push edx
	add eax,0x34
	push eax
	call lstrcmpiA
	test eax,eax
	jne Block19

 Block18:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x12DD
	jmp Block7

 Block19:
	xor eax,eax
	cmp edi,eax
	jne Block21

 Block20:
	mov ecx,dword ptr [ebx+0x1B0]
	push ebp
	call CITC::OnBid
	jmp Block36

 Block21:
	mov dword ptr [esp+0x2C],eax
	mov edi,dword ptr [ebx+0x1B0]
	mov ecx,dword ptr [edi+0x3460]
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [ebp+4]
	add ecx,0x64
	imul ecx,dword ptr [eax+0x108]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	add esi,dword ptr [edi+0x3464]
	lea edx,[esp+0x14]
	push 0x129E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x30],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block25

 Block24:
	mov ecx,dword ptr [ebx+0x1B0]
	push ebp
	call CITC::OnBuyAuctionImm

 Block25:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block36

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block36

 Block27:
	cmp dword ptr [ecx+0x6C],0
	jne Block33

 Block28:
	mov edx,dword ptr [edx+0x2054]
	push edx
	add eax,0x34
	push eax
	call lstrcmpiA
	test eax,eax
	jne Block30

 Block29:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x1298
	push eax
	jmp Block8

 Block30:
	mov ecx,dword ptr [ebx+0x1B0]
	push ebp
	test edi,edi
	jne Block32

 Block31:
	call CITC::OnBuyZzim
	jmp Block36

 Block32:
	call CITC::OnDeleteZzim
	jmp Block36

 Block33:
	push ebp
	test edi,edi
	jne Block35

 Block34:
	call CITC::OnViewWish
	jmp Block36

 Block35:
	call CITC::OnCancelWish

 Block36:
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
// CITC::OnMoveITCPurchaseItemLtoS
_SUB_EXCEPTION_HANDLER(173880)
__SUB_CLASS_THIS(00173880, __thiscall, 84015,  CITC, void, ZRef<ITCITEM>&, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173880
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 8
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 0xC
}
}
// CITC::OnChargeParamResult
_SUB_EXCEPTION_HANDLER(174A60)
__SUB_CLASS_THIS(00174A60, __thiscall, 84020,  CITC, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_174A60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [esp+0x50]
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call CInPacket::DecodeStr
	lea edi,[esi+0x3C]
	xor ebp,ebp
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x4C],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [edi]
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x18],ecx
	jmp Block5

 Block4:
	mov dword ptr [esp+0x18],ebp

 Block5:
	push 2
	push ebp
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call ZXString<char>::Mid
	lea ebp,[esi+0x40]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x4C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	cmp dword ptr [esp+0x18],2
	jle Block14

 Block8:
	push 0
	push 1
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::GetBuffer
	mov cl,byte ptr [_S___39]
	mov byte ptr [eax],cl
	push 1
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],2
	test ebx,ebx
	je Block10

 Block9:
	mov eax,dword ptr [ebx-4]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	push eax
	push ebx
	mov ecx,ebp
	call ZXString<char>::_Cat
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test ebx,ebx
	je Block13

 Block12:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ebx,dword ptr [esp+0x50]

 Block14:
	cmp dword ptr [esp+0x18],3
	jle Block24

 Block15:
	push 0xFFFFFFFF
	push 4
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call ZXString<char>::Mid
	mov edi,eax
	push 0
	push 1
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x50],3
	mov dword ptr [esp+0x58],0
	call ZXString<char>::GetBuffer
	mov cl,byte ptr [_S___39]
	mov byte ptr [eax],cl
	push 1
	lea ecx,[esp+0x54]
	call ZXString<char>::ReleaseBuffer
	push edi
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x50],4
	call ZXString<char>::op_add_1
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x48],5
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax-4]
	jmp Block18

 Block17:
	xor ecx,ecx

 Block18:
	push ecx
	push eax
	mov ecx,ebp
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],4
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],3
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0x345C],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0x3460],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0x3464],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0x3468],eax
	call CInPacket::Decode4
	mov dword ptr [esi+0x346C],eax
	lea eax,[esp+0x30]
	push eax
	call GetLocalTime
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	push 8
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x1C]
	push 1
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push edx
	push eax
	push ecx
	lea edx,[esp+0x3C]
	push edx
	mov ecx,esi
	call CITC::FileTimeAddition
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x34],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x38],edx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4
}
}
// CITCWnd_List::GetPlateRect
__SUB_CLASS_THIS(00187560, __thiscall, 84251,  CITCWnd_List, tagRECT*, tagRECT*, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	and ecx,0x8000000F
	mov eax,dword ptr [esp+4]
	mov dword ptr [eax],2
	jns Block2

 Block1:
	dec ecx
	or ecx,0xFFFFFFF0
	inc ecx

 Block2:
	lea ecx,[ecx+ecx*4]
	lea ecx,[ecx*4+1]
	mov dword ptr [eax+4],ecx
	add ecx,0x14
	mov dword ptr [eax+8],0x1F6
	mov dword ptr [eax+0xC],ecx
	ret 8
}
}
// CITCWnd_List::CITCWnd_List
_SUB_EXCEPTION_HANDLER(174600)
__SUB_CLASS_THIS0(00174600, __thiscall, 84239,  CITCWnd_List, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_174600
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
	int 3// TODO: 	mov dword ptr [esi],offset CITCWnd_List::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWnd_List::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWnd_List::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x88],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 0x24
	push 8
	lea eax,[esi+0x8C]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x1B4],edi
	mov dword ptr [esi+0x1B8],edi
	lea ecx,[esi+0x1BC]
	mov byte ptr [esp+0x18],4
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xC04],edi
	mov dword ptr [esi+0xC08],edi
	mov dword ptr [esi+0xC1C],edi
	mov dword ptr [esi+0xC20],edi
	mov dword ptr [esi+0xC24],edi
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
// CITCWnd_List::OnChildNotify
__SUB_CLASS_THIS(001874E0, __thiscall, 84245,  CITCWnd_List, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E8
	jne Block3

 Block1:
	cmp ebx,0x320
	jne Block7

 Block2:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0x1B0]
	push eax
	call CITC::OnChangedPage
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block3:
	cmp edi,0xBB8
	jne Block7

 Block4:
	cmp ebx,0x12C
	jb Block7

 Block5:
	cmp ebx,0x130
	ja Block7

 Block6:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[eax+eax*4]
	mov dword ptr [esi+0xC28],ecx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block7:
	cmp ebx,0x64
	jne Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push edi
	mov ecx,esi
	call eax

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CITCWnd_List::~CITCWnd_List
_SUB_EXCEPTION_HANDLER(1746F0)
__SUB_CLASS_THIS0(001746F0, __thiscall, 84241,  CITCWnd_List, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1746F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CITCWnd_List::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWnd_List::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWnd_List::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC24]
	mov dword ptr [esp+0x18],9
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	lea ecx,[esi+0xC20]
	mov byte ptr [esp+0x18],8
	call ZArray<CT_INFO>::RemoveAll
	cmp dword ptr [esi+0xC1C],0
	lea edi,[esi+0xC18]
	mov byte ptr [esp+0x18],7
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	lea ecx,[esi+0xC08]
	mov byte ptr [esp+0x18],6
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xC04]
	mov byte ptr [esp+0x18],5
	call ZArray<CITCWnd_List::PICTURE_PLATE>::RemoveAll
	lea ecx,[esi+0x1BC]
	mov byte ptr [esp+0x18],4
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0x1B8]
	mov byte ptr [esp+0x18],3
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0x1B4]
	mov byte ptr [esp+0x18],2
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 0x24
	push 8
	lea eax,[esi+0x8C]
	push eax
	mov byte ptr [esp+0x28],1
	call __eh_vector_dtor_iterator
	cmp dword ptr [esi+0x88],0
	lea edi,[esi+0x84]
	mov byte ptr [esp+0x18],0
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlSelector>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
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
// CITCWnd_Status::OnMouseButton
__SUB_CLASS_THIS(00184450, __thiscall, 84220,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// CITC::OnBuyAuctionImm
_SUB_EXCEPTION_HANDLER(173310)
__SUB_CLASS_THIS(00173310, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173310
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x14
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CITCWnd_Status::OnCreate
_SUB_EXCEPTION_HANDLER(185010)
__SUB_CLASS_THIS(00185010, __thiscall, 84218,  CITCWnd_Status, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_185010
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
	mov eax,dword ptr [esp+0x3C]
	xor ebx,ebx
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea ecx,[esp+0x3C]
	push 0x1291
	push ecx
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
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
	mov dword ptr [esp+0x3C],eax
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
	je Block17

 Block6:
	add eax,8
	cmp eax,ebx
	je Block17

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x84]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 0xA
	push 0xF0
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x3C]
	push 0x529
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x84]
	push 1
	push 1
	push eax
	mov byte ptr [esp+0x40],3
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	lea edx,[esp+0x3C]
	push 0x1292
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],4
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
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
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],5
	cmp eax,ebx
	je Block18

 Block16:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block19

 Block17:
	xor edi,edi
	jmp Block9

 Block18:
	xor eax,eax

 Block19:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block31

 Block20:
	add eax,8
	cmp eax,ebx
	je Block31

 Block21:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block23

 Block22:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block23:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block25

 Block24:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block25:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0xA
	push 0x12C
	push 0x3E9
	push esi
	call edx
	lea eax,[esp+0x3C]
	push 0x52A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x8C]
	push 1
	push 1
	push eax
	mov byte ptr [esp+0x40],6
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	lea ecx,[esp+0x3C]
	push 0x4F6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
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
	mov dword ptr [esp+0x3C],eax
	mov byte ptr [esp+0x34],8
	cmp eax,ebx
	je Block32

 Block30:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block33

 Block31:
	xor edi,edi
	jmp Block23

 Block32:
	xor eax,eax

 Block33:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block42

 Block34:
	add eax,8
	cmp eax,ebx
	je Block42

 Block35:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block37

 Block36:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block37:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block39

 Block38:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block39:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push 7
	push 0x179
	push 0x3EA
	push esi
	call eax
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block42:
	xor edi,edi
	jmp Block37
}
}
// CITCWnd_List::OnMouseEnter
__SUB_CLASS_THIS(001874C0, __thiscall, 84244,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x1B8]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CITC::Close
__SUB_CLASS_THIS0(00174400, __thiscall, 83987,  CITC, void) {
__asm {

 Block0:
	push esi
	push 0
	push 0x3E8
	push 0x258
	push 0
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	call CSoundMan::PlayBGM
	mov ecx,esi
	call CStage::FadeOut
	mov eax,dword ptr [esi+0x74]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0x74],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0x78]
	call CWnd::Destroy
	lea ecx,[esi+0x500]
	call CWnd::Destroy
	lea ecx,[esi+0xFE4]
	call CWnd::Destroy
	lea ecx,[esi+0x1AC0]
	call CWnd::Destroy
	lea ecx,[esi+0x25B4]
	call CWnd::Destroy
	lea ecx,[esi+0x2688]
	call CWnd::Destroy
	lea ecx,[esi+0x277C]
	call CWnd::Destroy
	lea ecx,[esi+0x33AC]
	pop esi
	jmp  CWnd::Destroy
}
}
// CITCWnd_Status::OnButtonClicked
__SUB_CLASS_THIS(00184410, __thiscall, 84219,  CITCWnd_Status, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x3E8
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov ecx,dword ptr [ecx+0x98]
	call CITC::OnStatusExit
	ret 4

 Block4:
	mov ecx,dword ptr [ecx+0x98]
	call CITC::OnStatusCheck
	ret 4

 Block5:
	mov ecx,dword ptr [ecx+0x98]
	call CITC::OnStatusCharge

 Block6:
	ret 4
}
}
// CITC::SetSearchCondition
_SUB_EXCEPTION_HANDLER(173DE0)
__SUB_CLASS_THIS(00173DE0, __thiscall, 84030,  CITC, void, int32_t, long, long, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173DE0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [esi+0x3474],ecx
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x3470],eax
	mov eax,dword ptr [esp+0x28]
	lea edi,[esi+0x3480]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x18],0
	mov dword ptr [esi+0x3478],edx
	mov dword ptr [esi+0x347C],eax
	call ZXString<char>::op_assign
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esi+0x25B4]
	call CITCWnd_Tab::SetSearchEdit
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x14
}
}
// CITCWnd_List::SetCursorToPlate
_SUB_EXCEPTION_HANDLER(189EF0)
__SUB_CLASS_THIS(00189EF0, __thiscall, 84250,  CITCWnd_List, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_189EF0
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0xA0]
	mov dword ptr [ebp+0x1AC],eax
	mov dword ptr [esp+0x14],0
	lea eax,[ebp+0x90]

 Block1:
	xor edi,edi
	mov ebx,eax

 Block2:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block12

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov ecx,dword ptr [esp+0x14]
	add ecx,edi
	mov eax,dword ptr [ebp+ecx*8+0x90]
	lea esi,[ebp+ecx*8+0x8C]
	test eax,eax
	je Block12

 Block4:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block5:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block7

 Block6:
	add eax,8
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block11

 Block9:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	mov dword ptr [esi+4],0

 Block12:
	inc edi
	add ebx,8
	cmp edi,2
	jl Block2

 Block13:
	mov ecx,dword ptr [esp+0x14]
	add ecx,2
	cmp ecx,0x24
	mov eax,ebx
	mov dword ptr [esp+0x14],ecx
	jl Block1

 Block14:
	xor edi,edi
	mov dword ptr [esp+0x7C],edi
	mov dword ptr [esp+0x70],1
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x78],edi
	cmp dword ptr [ebp+0x1AC],edi
	mov dword ptr [esp+0x98],edi
	jle Block122

 Block15:
	jmp Block17

 Block17:
	push edi
	lea ecx,[esp+0x84]
	push ecx
	mov ecx,ebp
	call CITCWnd_List::GetPlateRect
	mov eax,dword ptr [ebp+0x1B0]
	mov ecx,dword ptr [eax+0x68]
	dec ecx
	cmp ecx,3
	ja Block121

 Block18:
	cmp ECX, 0
je Block19
cmp ECX, 1
je Block44
cmp ECX, 2
je Block57
cmp ECX, 3
je Block80


 Block19:
	lea edx,[esp+0x14]
	push 0x1277
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x9C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],0
	test eax,eax
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
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x98],2
	test eax,eax
	je Block23

 Block22:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	mov ecx,edi
	shl ecx,4
	mov byte ptr [esp+0x98],0
	lea ebx,[ecx+ebp]
	test eax,eax
	je Block34

 Block25:
	add eax,8
	je Block34

 Block26:
	lea esi,[eax-8]
	test esi,esi
	je Block28

 Block27:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	mov eax,dword ptr [ebx+0x90]
	mov dword ptr [ebx+0x90],esi
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block30

 Block29:
	push 0
	lea ecx,[esp+0x3C]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esp+0x3C],0

 Block30:
	lea eax,[edi+9]
	shl eax,4
	mov ecx,dword ptr [eax+ebp]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x88]
	push 0
	push eax
	mov eax,dword ptr [esp+0x8C]
	add eax,0xD9
	push eax
	lea eax,[edi+edi+0x7D0]
	push eax
	push ebp
	call edx
	lea eax,[esp+0x18]
	push 0x1278
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x9C],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x98],4
	test eax,eax
	je Block35

 Block33:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block36

 Block34:
	xor esi,esi
	jmp Block28

 Block35:
	xor eax,eax

 Block36:
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block43

 Block37:
	add eax,8
	je Block43

 Block38:
	lea esi,[eax-8]
	test esi,esi
	je Block40

 Block39:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block40:
	mov eax,dword ptr [ebx+0x98]
	mov dword ptr [ebx+0x98],esi
	mov dword ptr [esp+0x44],eax
	test eax,eax
	je Block42

 Block41:
	push 0
	lea ecx,[esp+0x44]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esp+0x44],0

 Block42:
	mov ecx,dword ptr [ebx+0x98]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x88]
	push 0
	push eax
	mov eax,dword ptr [esp+0x8C]
	add eax,0xFC
	jmp Block119

 Block43:
	xor esi,esi
	jmp Block40

 Block44:
	lea eax,[esp+0x1C]
	push 0x1279
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x9C],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x98],6
	test eax,eax
	je Block48

 Block47:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block49

 Block48:
	xor eax,eax

 Block49:
	mov ecx,edi
	shl ecx,4
	mov byte ptr [esp+0x98],0
	lea ebx,[ecx+ebp+0x8C]
	test eax,eax
	je Block56

 Block50:
	add eax,8
	je Block56

 Block51:
	lea esi,[eax-8]
	test esi,esi
	je Block53

 Block52:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block53:
	mov eax,dword ptr [ebx+4]
	mov dword ptr [ebx+4],esi
	mov dword ptr [esp+0x4C],eax
	test eax,eax
	je Block55

 Block54:
	push 0
	lea ecx,[esp+0x4C]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esp+0x4C],0

 Block55:
	lea eax,[edi+9]
	shl eax,4
	mov ecx,dword ptr [eax+ebp]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x88]
	push 0
	push eax
	mov eax,dword ptr [esp+0x8C]
	add eax,0xD9
	push eax
	lea eax,[edi+edi+0x7D0]
	jmp Block120

 Block56:
	xor esi,esi
	jmp Block53

 Block57:
	push 0
	push 0
	push 0xFFFFFFFF
	push offset _S_UIITCIMGAUCTIONB__1
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	mov esi,eax
	shr esi,1
	push 0
	dec esi
	push esi
	lea ecx,[esp+0x84]
	call ZXString16::GetBuffer
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push offset _S_UIITCIMGAUCTIONB__1
	push 0
	push 0
	call MultiByteToWideChar
	push esi
	lea ecx,[esp+0x80]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x98],7
	test eax,eax
	je Block59

 Block58:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block60

 Block59:
	xor eax,eax

 Block60:
	mov ecx,edi
	shl ecx,4
	mov byte ptr [esp+0x98],0
	lea ebx,[ecx+ebp]
	test eax,eax
	je Block70

 Block61:
	add eax,8
	je Block70

 Block62:
	lea esi,[eax-8]
	test esi,esi
	je Block64

 Block63:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block64:
	mov eax,dword ptr [ebx+0x90]
	mov dword ptr [ebx+0x90],esi
	mov dword ptr [esp+0x54],eax
	test eax,eax
	je Block66

 Block65:
	push 0
	lea ecx,[esp+0x54]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esp+0x54],0

 Block66:
	lea eax,[edi+9]
	shl eax,4
	mov ecx,dword ptr [eax+ebp]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x88]
	push 0
	push eax
	mov eax,dword ptr [esp+0x8C]
	add eax,0xD9
	push eax
	lea eax,[edi+edi+0x7D0]
	push eax
	push ebp
	call edx
	lea eax,[esp+0x20]
	push 0x1277
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x9C],8
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block68:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x98],9
	test eax,eax
	je Block71

 Block69:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block72

 Block70:
	xor esi,esi
	jmp Block64

 Block71:
	xor eax,eax

 Block72:
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block79

 Block73:
	add eax,8
	je Block79

 Block74:
	lea esi,[eax-8]
	test esi,esi
	je Block76

 Block75:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block76:
	mov eax,dword ptr [ebx+0x98]
	mov dword ptr [ebx+0x98],esi
	mov dword ptr [esp+0x5C],eax
	test eax,eax
	je Block78

 Block77:
	push 0
	lea ecx,[esp+0x5C]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esp+0x5C],0

 Block78:
	mov ecx,dword ptr [ebx+0x98]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x88]
	push 0
	push eax
	mov eax,dword ptr [esp+0x8C]
	add eax,0xFC
	jmp Block119

 Block79:
	xor esi,esi
	jmp Block76

 Block80:
	mov eax,dword ptr [eax+0x6C]
	test eax,eax
	jne Block106

 Block81:
	lea eax,[esp+0x24]
	push 0x127A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x9C],0xA
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block83:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x98],0xB
	test eax,eax
	je Block85

 Block84:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block86

 Block85:
	xor eax,eax

 Block86:
	mov ecx,edi
	shl ecx,4
	mov byte ptr [esp+0x98],0
	lea ebx,[ecx+ebp]
	test eax,eax
	je Block96

 Block87:
	add eax,8
	je Block96

 Block88:
	lea esi,[eax-8]
	test esi,esi
	je Block90

 Block89:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block90:
	mov eax,dword ptr [ebx+0x90]
	mov dword ptr [ebx+0x90],esi
	mov dword ptr [esp+0x64],eax
	test eax,eax
	je Block92

 Block91:
	push 0
	lea ecx,[esp+0x64]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esp+0x64],0

 Block92:
	lea eax,[edi+9]
	shl eax,4
	mov ecx,dword ptr [eax+ebp]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x88]
	push 0
	push eax
	mov eax,dword ptr [esp+0x8C]
	add eax,0x1A9
	push eax
	lea eax,[edi+edi+0x7D0]
	push eax
	push ebp
	call edx
	lea eax,[esp+0x28]
	push 0x127B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x9C],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block94:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x98],0xD
	test eax,eax
	je Block97

 Block95:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block98

 Block96:
	xor esi,esi
	jmp Block90

 Block97:
	xor eax,eax

 Block98:
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block105

 Block99:
	add eax,8
	je Block105

 Block100:
	lea esi,[eax-8]
	test esi,esi
	je Block102

 Block101:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block102:
	mov eax,dword ptr [ebx+0x98]
	mov dword ptr [ebx+0x98],esi
	mov dword ptr [esp+0x6C],eax
	test eax,eax
	je Block104

 Block103:
	push 0
	lea ecx,[esp+0x6C]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esp+0x6C],0

 Block104:
	mov ecx,dword ptr [ebx+0x98]
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x88]
	push 0
	push eax
	jmp Block118

 Block105:
	xor esi,esi
	jmp Block102

 Block106:
	cmp eax,1
	jne Block121

 Block107:
	lea eax,[esp+0x2C]
	push 0x127A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x9C],0xE
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x98],0
	test eax,eax
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
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x98],0xF
	test eax,eax
	je Block111

 Block110:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block112

 Block111:
	xor eax,eax

 Block112:
	mov ecx,edi
	shl ecx,4
	lea esi,[ecx+ebp]
	push eax
	lea ecx,[esi+0x8C]
	mov byte ptr [esp+0x9C],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ebx,dword ptr [esp+0x84]
	lea edx,[edi+9]
	shl edx,4
	mov ecx,dword ptr [edx+ebp]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x84]
	push 0
	push ebx
	add edx,0x1A9
	push edx
	lea edx,[edi+edi+0x7D0]
	push edx
	push ebp
	call eax
	lea ecx,[esp+0x30]
	push 0x127C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x9C],0x10
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block114:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	mov byte ptr [esp+0x98],0x11
	test eax,eax
	je Block116

 Block115:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block117

 Block116:
	xor eax,eax

 Block117:
	push eax
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x9C],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x98]
	lea eax,[esp+0x70]
	push eax
	push 0
	push ebx

 Block118:
	mov eax,dword ptr [esp+0x8C]
	add eax,0x1CC

 Block119:
	push eax
	lea eax,[edi+edi+0x7D1]

 Block120:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push eax
	push ebp
	call edx

 Block121:
	inc edi
	cmp edi,dword ptr [ebp+0x1AC]
	jl Block17

 Block122:
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x98],0xFFFFFFFF
	test eax,eax
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block124:
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
// CITC::OnChangedCategory
_SUB_EXCEPTION_HANDLER(1744A0)
__SUB_CLASS_THIS(001744A0, __thiscall, 83996,  CITC, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1744A0
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
	mov edi,ecx
	cmp dword ptr [edi+0x18],0
	jne Block2

 Block1:
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x10],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	push 0
	push 0
	push 0
	push 0
	mov ecx,edi
	call CITC::SetSearchCondition
	push 0x134
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x30]
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	push 0
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	push 0
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	push 1
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	push 1
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	push 1
	lea ecx,[esp+0x14]
	call COutPacket::Encode4
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x34],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	lea ecx,[esp+0x14]
	call COutPacket::EncodeStr
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [edi+0x18],1
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// CITC::OnDeleteZzim
_SUB_EXCEPTION_HANDLER(173520)
__SUB_CLASS_THIS(00173520, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173520
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0xA
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CITCWnd_List::IsSameList
__SUB_CLASS_THIS0(001875A0, __thiscall, 84253,  CITCWnd_List, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1B0]
	mov edx,dword ptr [ecx+0xC0C]
	cmp edx,dword ptr [eax+0x68]
	jne Block4

 Block1:
	mov edx,dword ptr [ecx+0xC10]
	cmp edx,dword ptr [eax+0x6C]
	jne Block4

 Block2:
	mov ecx,dword ptr [ecx+0xC14]
	cmp ecx,dword ptr [eax+0x70]
	jne Block4

 Block3:
	mov eax,1
	ret

 Block4:
	xor eax,eax
	ret
}
}
// CITC::OnPacket
__SUB_CLASS_THIS(00177470, __thiscall, 84019,  CITC, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x19A
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CITC::OnNormalItemResult
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CITC::OnQueryCashResult
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CITC::OnChargeParamResult

 Block6:
	ret 8
}
}
// CITC::OnBid
_SUB_EXCEPTION_HANDLER(172C10)
__SUB_CLASS_THIS(00172C10, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172C10
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
	cmp dword ptr [edi+0x18],0
	jne Block10

 Block1:
	push 0xD4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block11

 Block2:
	mov ecx,dword ptr [esp+0x24]
	push ecx
	push edi
	mov ecx,eax
	call CITCBidAuctionDlg::_ctor_0
	test eax,eax
	je Block11

 Block3:
	add eax,8
	je Block11

 Block4:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block6

 Block5:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,esi
	mov dword ptr [esp+0x1C],1
	call CDialog::DoModal
	cmp eax,1
	jne Block8

 Block7:
	mov dword ptr [edi+0x18],eax

 Block8:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CITCBidAuctionDlg>::_ReleaseRaw

 Block10:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block6
}
}
// CITC::OnStatusExit
__SUB_CLASS_THIS0(00172E80, __thiscall, 83987,  CITC, void) {
__asm {

 Block0:
	jmp  CITC::SendTransferFieldPacket
}
}
// CITC::OnBuyZzim
_SUB_EXCEPTION_HANDLER(173450)
__SUB_CLASS_THIS(00173450, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173450
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
	cmp dword ptr [esi+0x18],0
	jne Block3

 Block1:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x12D4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block3

 Block2:
	push 0x134
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 0x11
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x20]
	push edx
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block3:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4
}
}
// CITC::OnMouseButton
__SUB_CLASS_THIS(001749F0, __thiscall, 83990,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// CITCWnd_List::GetContractHistoryCode
__SUB_CLASS_THIS(001875D0, __thiscall, 84254,  CITCWnd_List, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push esi
	mov dword ptr [esp+4],0
	cmp eax,3
	ja Block7

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6


 Block2:
	push 0x129F

 Block3:
	mov esi,dword ptr [esp+0x10]
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block4:
	push 0x12A0
	jmp Block3

 Block5:
	push 0x12A1
	jmp Block3

 Block6:
	push 0x12A2
	jmp Block3

 Block7:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 8
}
}
// CITC::~CITC
_SUB_EXCEPTION_HANDLER(174850)
__SUB_CLASS_THIS0(00174850, __thiscall, 83987,  CITC, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_174850
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
	int 3// TODO: 	mov dword ptr [esi],offset CITC::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITC::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITC::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CITC::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x3480]
	mov dword ptr [esp+0x14],0x10
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x3458]
	mov byte ptr [esp+0x14],0xF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea ecx,[esi+0x33AC]
	mov byte ptr [esp+0x14],0xE
	call CITCWnd_Status::~CITCWnd_Status
	lea ecx,[esi+0x277C]
	mov byte ptr [esp+0x14],0xD
	call CITCWnd_List::~CITCWnd_List
	lea ecx,[esi+0x2688]
	mov byte ptr [esp+0x14],0xC
	call CITCWnd_SubTab::~CITCWnd_SubTab
	lea ecx,[esi+0x25B4]
	mov byte ptr [esp+0x14],0xB
	call CITCWnd_Tab::~CITCWnd_Tab
	lea ecx,[esi+0x1AC0]
	mov byte ptr [esp+0x14],0xA
	call CITCWnd_Inventory::~CITCWnd_Inventory
	lea ecx,[esi+0xFE4]
	mov byte ptr [esp+0x14],9
	call CITCWnd_PURCHASE::~CITCWnd_PURCHASE
	lea ecx,[esi+0x500]
	mov byte ptr [esp+0x14],8
	call CITCWnd_SALE::~CITCWnd_SALE
	lea ecx,[esi+0x78]
	mov byte ptr [esp+0x14],7
	call CITCWnd_Char::~CITCWnd_Char
	mov eax,dword ptr [esi+0x74]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea ecx,[esi+0x54]
	mov byte ptr [esp+0x14],5
	call ZArray<ZRef<ITCITEM>>::RemoveAll
	lea ecx,[esi+0x50]
	mov byte ptr [esp+0x14],4
	call ZArray<ZRef<ITCITEM>>::RemoveAll
	lea ecx,[esi+0x4C]
	mov byte ptr [esp+0x14],3
	call ZArray<ZRef<ITCITEM>>::RemoveAll
	lea ecx,[esi+0x48]
	mov byte ptr [esp+0x14],2
	call ZArray<ZRef<ITCITEM>>::RemoveAll
	mov eax,dword ptr [esi+0x40]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CStage::~CStage
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CITCWnd_Status::Draw
_SUB_EXCEPTION_HANDLER(185380)
__SUB_CLASS_THIS(00185380, __thiscall, 84221,  CITCWnd_Status, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_185380
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x6C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x2C]
	xor ebx,ebx
	push edx
	mov dword ptr [esp+0x68],ebx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [esp+0x30]
	mov edi,dword ptr [eax+4]
	cmp ebp,ebx
	je Block5

 Block1:
	add ebp,0xFFFFFFF0
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block4

 Block3:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block4:
	mov dword ptr [esp+0x30],0
	xor ebx,ebx

 Block5:
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x6C],ebx
	mov eax,dword ptr [esi+0x98]
	mov ecx,dword ptr [eax+0x24]
	push 1
	push ecx
	add eax,0x1C
	push eax
	mov byte ptr [esp+0x70],3
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea edx,[esp+0x20]
	push edx
	call format_integer
	mov esi,dword ptr [esi+0x98]
	mov eax,dword ptr [esi+0x30]
	add esp,0xC
	push 1
	push eax
	add esi,0x28
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	call format_integer
	mov edx,dword ptr [edi+0xBD]
	add esp,0xC
	push 1
	push edx
	add edi,0xB5
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea eax,[esp+0x74]
	push eax
	call format_integer
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
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
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x2C]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x70],4
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x24]
	push 0x38
	push eax
	mov byte ptr [esp+0x74],5
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],6
	cmp ecx,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov byte ptr [esp+0x6C],7
	call IWzFont::CalcTextWidth
	mov ebp,eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],4
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov esi,8
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x2C],si
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	lea edx,[esp+0x2C]
	push edx
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x2C]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x70],8
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x24]
	push 0x38
	push eax
	mov byte ptr [esp+0x74],9
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xA
	cmp ecx,ebx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov byte ptr [esp+0x6C],0xB
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],8
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x2C],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	lea edx,[esp+0x2C]
	push edx
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov edx,dword ptr [esp+0x6C]
	lea ecx,[esp+0x2C]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0xC
	push edx
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x24]
	push 0x38
	push eax
	mov byte ptr [esp+0x74],0xD
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xE
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov byte ptr [esp+0x6C],0xF
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x2C],si
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov esi,dword ptr [esp+0x20]
	test esi,esi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0xFFF3F4F5
	push 0xD
	push 0x60
	push 1
	push 0x64
	push esi
	call eax
	test eax,eax
	jge Block39

 Block38:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFF3F4F5
	push 0xD
	push 0x60
	push 0x16
	push 0x64
	push esi
	call edx
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x8C]
	push 0xFFF3F4F5
	push 0xD
	push 0x60
	push 0x2B
	push 0x64
	push esi
	call ecx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block43:
	lea edx,[esp+0x4C]
	push edx
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x68],0x10
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x24]
	push 0x38
	push edx
	mov byte ptr [esp+0x74],0x11
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x12
	push eax
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_0
	mov ecx,0xBE
	sub ecx,ebp
	push 0
	push ecx
	mov byte ptr [esp+0x7C],0x13
	mov ecx,esi
	mov byte ptr [esp+0x7C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],0x11
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block49:
	mov ebx,8
	mov byte ptr [esp+0x64],0x10
	cmp word ptr [esp+0x3C],bx
	jne Block56

 Block50:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block52:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block53:
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x4C],bx
	jne Block57

 Block54:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block58

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block56:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x3C]
	push edx
	call ebp
	jmp Block53

 Block57:
	lea ecx,[esp+0x4C]
	push ecx
	call ebp

 Block58:
	lea edx,[esp+0x3C]
	push edx
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x68],0x14
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x24]
	push 0x3F
	mov ebx,0x15
	push edx
	mov byte ptr [esp+0x74],bl
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x20]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x78],0x16
	call _xbstr_t::_ctor_0
	mov ecx,0xBE
	sub ecx,dword ptr [esp+0x34]
	push ebx
	push ecx
	mov byte ptr [esp+0x7C],0x17
	mov ecx,esi
	mov byte ptr [esp+0x7C],0x16
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block64

 Block63:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block64:
	mov ebx,8
	mov byte ptr [esp+0x64],0x14
	cmp word ptr [esp+0x4C],bx
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0x4C]
	push edx
	call ebp

 Block68:
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x3C],bx
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp

 Block72:
	lea edx,[esp+0x3C]
	push edx
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x68],0x18
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x2C]
	push 0x3E
	push edx
	mov byte ptr [esp+0x74],0x19
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x78]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x1A
	push eax
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_0
	mov ecx,0xBE
	sub ecx,dword ptr [esp+0x38]
	push 0x2A
	push ecx
	mov byte ptr [esp+0x7C],0x1B
	mov ecx,esi
	mov byte ptr [esp+0x7C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],0x19
	test eax,eax
	je Block78

 Block77:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block78:
	mov edi,8
	mov byte ptr [esp+0x64],0x18
	cmp word ptr [esp+0x4C],di
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[esp+0x4C]
	push edx
	call ebp

 Block82:
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x3C],di
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp

 Block86:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],2
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],1
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call eax
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
// CITC::OnStatusCharge
_SUB_EXCEPTION_HANDLER(172A50)
__SUB_CLASS_THIS0(00172A50, __thiscall, 83987,  CITC, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172A50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0x18],0
	jne Block2

 Block1:
	mov dword ptr [ecx+0x18],1
	push 0x132
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	mov dword ptr [esp+0x20],0
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
// CITC::FileTimeAddition
__SUB_CLASS_THIS(00171E00, __thiscall, 84001,  CITC, _FILETIME, NakedParam<_FILETIME>, NakedParam<_FILETIME>, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+0x18],0
	je Block2

 Block1:
	mov edx,dword ptr [esp+0xC]
	sub edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+8]
	sub ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+4]
	mov dword ptr [eax+4],edx
	mov dword ptr [eax],ecx
	ret 0x18

 Block2:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x14]
	lea edx,[ecx+eax]
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+0x10]
	add ecx,eax
	mov eax,dword ptr [esp+4]
	mov dword ptr [eax+4],edx
	mov dword ptr [eax],ecx
	ret 0x18
}
}
// CITC::NoticeFailReason
// 575F58
static uint8_t _SUB_175DD0_LOOKUP_TABLE_0[19] = {
0, 1, 2, 11, 11, 3, 11, 4, 11, 11, 11, 11, 5, 6, 11, 7, 
8, 9, 10, 
};
__SUB_CLASS_THIS(00175DD0, __thiscall, 84021,  CITC, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFBE
	cmp eax,0x12
	ja Block13

 Block1:
	movzx eax,byte ptr [eax+_SUB_175DD0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block12
cmp EAX, 9
je Block10
cmp EAX, 10
je Block11
cmp EAX, 11
je Block13


 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x12C0
	push ecx
	jmp Block15

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1A8B
	push edx
	jmp Block15

 Block4:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x12C1
	jmp Block14

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1A8F
	push ecx
	jmp Block15

 Block6:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x12C2
	push edx
	jmp Block15

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x12B1
	jmp Block14

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x12DB
	push ecx
	jmp Block15

 Block9:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x12DF
	push edx
	jmp Block15

 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x12E1
	jmp Block14

 Block11:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x12F6
	push ecx
	jmp Block15

 Block12:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1636
	push edx
	jmp Block15

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x12D9

 Block14:
	push eax

 Block15:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	ret 4
}
}
// CITCWnd_List::ClearToolTip
__SUB_CLASS_THIS0(001746D0, __thiscall, 84249,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x1B8
	jmp  CUIToolTip::ClearToolTip
}
}
// CITC::OnKey
__SUB_CLASS_THIS(00171DF0, __thiscall, 83989,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x78]
	mov eax,dword ptr [eax]
	add ecx,0x78
	jmp eax
}
}
// CITC::OnBuy
_SUB_EXCEPTION_HANDLER(173270)
__SUB_CLASS_THIS(00173270, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173270
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x10
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CITC::Init
_SUB_EXCEPTION_HANDLER(173EE0)
__SUB_CLASS_THIS(00173EE0, __thiscall, 83988,  CITC, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173EE0
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
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::ClearFieldUI
	lea edx,[esi+0x1C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x28]
	xor ecx,ecx
	mov dword ptr [esi+0x24],eax
	call _ZtlSecureTearHelper<long>::call
	xor ebp,ebp
	mov edi,1
	mov dword ptr [esi+0x30],eax
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esi+0x6C],ebp
	mov dword ptr [esi+0x70],ebp
	mov dword ptr [esi+0x58],ebp
	mov dword ptr [esi+0x5C],ebp
	mov dword ptr [esi+0x3470],ebp
	mov dword ptr [esi+0x3474],ebp
	mov dword ptr [esi+0x3478],ebp
	mov dword ptr [esi+0x347C],ebp
	mov eax,dword ptr [esi+0x3480]
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0x3480],ebp

 Block2:
	lea eax,[esp+0x2C]
	mov dword ptr [esi+0x3484],edi
	mov dword ptr [esi+0x60],edi
	mov edi,dword ptr [ZImports::_VariantInit]
	push eax
	mov dword ptr [esi+0x64],ebp
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x78],ebp
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	push ebp
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x127E
	push eax
	mov byte ptr [esp+0x90],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x88],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0x8C],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x7C],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov ebx,8
	mov byte ptr [esp+0x74],5
	cmp word ptr [esp+0x5C],bx
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	cmp eax,ebp
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [esp+0x74],6
	cmp word ptr [esp+0x1C],bx
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x74],7
	cmp word ptr [esp+0x2C],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea edx,[esp+0x4C]
	push edx
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov eax,dword ptr [esp+0x14]
	mov ecx,0xD
	mov byte ptr [esp+0x74],bl
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],eax
	cmp eax,ebp
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x74],9
	cmp ecx,ebp
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x74]
	cmp edi,eax
	je Block34

 Block30:
	mov dword ptr [esi+0x74],eax
	cmp eax,ebp
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block32:
	cmp edi,ebp
	je Block34

 Block33:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block34:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	mov byte ptr [esp+0x74],bl
	cmp word ptr [esp+0x3C],bx
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [esp+0x74],7
	cmp word ptr [esp+0x4C],bx
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov edi,dword ptr [esi+0x74]
	cmp edi,ebp
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFF
	push edi
	call eax
	cmp eax,ebp
	jge Block48

 Block47:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block48:
	mov edi,dword ptr [esi+0x74]
	cmp edi,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	cmp eax,ebp
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block52:
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0xC8
	push 0x100
	push ebp
	push ebp
	lea ecx,[esi+0x78]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x6E
	push 0x100
	push 0xC8
	push ebp
	lea ecx,[esi+0x500]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x6C
	push 0x100
	push 0x136
	push ebp
	lea ecx,[esi+0xFE4]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0xB4
	push 0x100
	push 0x1A2
	push ebp
	lea ecx,[esi+0x1AC0]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push 0xA
	push 0x4E
	push 0x1FD
	push 0x11
	push 0x110
	lea ecx,[esi+0x25B4]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x30
	push 0x1FD
	push 0x62
	push 0x111
	lea ecx,[esi+0x2688]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x16D
	push 0x1FD
	push 0x91
	push 0x111
	lea ecx,[esi+0x277C]
	call CWnd::CreateWnd
	push ebp
	push 1
	push esi
	push 1
	push ebp
	push 0x38
	push 0x221
	push 0x213
	push 0xFF
	lea ecx,[esi+0x33AC]
	call CWnd::CreateWnd
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::LoadNPTExceptionItem
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 1
	call CInputSystem::ShowCursor
	lea eax,[esp+0x18]
	push 0x50A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push ebp
	push ebp
	push ebp
	push 1
	push eax
	mov byte ptr [esp+0x88],0xA
	call CSoundMan::PlayBGM
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x74],7
	cmp eax,ebp
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block54:
	mov ecx,esi
	call CStage::FadeIn
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp eax,ebp
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 4
}
}
// CITCWnd_Status::~CITCWnd_Status
_SUB_EXCEPTION_HANDLER(172970)
__SUB_CLASS_THIS0(00172970, __thiscall, 84217,  CITCWnd_Status, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172970
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
	int 3// TODO: 	mov dword ptr [esi],offset CITCWnd_Status::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWnd_Status::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWnd_Status::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0x90]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x88]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x80]
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
// CITC::OnChangedCategorySub
_SUB_EXCEPTION_HANDLER(1739A0)
__SUB_CLASS_THIS(001739A0, __thiscall, 83997,  CITC, void, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1739A0
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
	cmp dword ptr [esi+0x18],0
	jne Block5

 Block1:
	push 0x134
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0x68]
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov edi,dword ptr [esp+0x2C]
	push edi
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	push 0
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x30]
	push ecx
	lea ecx,[esp+0x10]
	call COutPacket::Encode1
	mov edx,dword ptr [esp+0x34]
	push edx
	lea ecx,[esp+0x10]
	call COutPacket::Encode1
	lea ecx,[esp+0xC]
	cmp dword ptr [esi+0x6C],edi
	je Block3

 Block2:
	push 1
	call COutPacket::Encode4
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x30],esp
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	jmp Block4

 Block3:
	mov eax,dword ptr [esi+0x347C]
	push eax
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea edx,[esi+0x3480]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign

 Block4:
	lea ecx,[esp+0x10]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block5:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 0xC
}
}
// CITC::OnSaleCurrentItem
_SUB_EXCEPTION_HANDLER(1731A0)
__SUB_CLASS_THIS(001731A0, __thiscall, 84013,  CITC, void, long, long, GW_ItemSlotBase*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1731A0
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x2C]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+8]
	push edx
	call GW_ItemSlotBase::Encode
	mov eax,dword ptr [esp+0x34]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 0x10
}
}
// CITC::OnChangedPage
_SUB_EXCEPTION_HANDLER(173AF0)
__SUB_CLASS_THIS(00173AF0, __thiscall, 83996,  CITC, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173AF0
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0x68]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x6C]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x28]
	push edx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	movzx eax,byte ptr [esi+0x60]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	movzx ecx,byte ptr [esi+0x64]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	mov edx,dword ptr [esi+0x347C]
	push edx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea eax,[esi+0x3480]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0xC]
	call COutPacket::EncodeStr
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0x70]
	mov ecx,dword ptr [esi+0x2804]
	push eax
	call CCtrlSelector::SetCurSel
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CITC::OnSale
_SUB_EXCEPTION_HANDLER(172CE0)
__SUB_CLASS_THIS(00172CE0, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172CE0
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
	cmp dword ptr [esi+0x18],0
	jne Block8

 Block1:
	push 0xB10
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x18],0
	test eax,eax
	je Block9

 Block2:
	mov ecx,dword ptr [esp+0x20]
	push ecx
	push esi
	mov ecx,eax
	call CITCWndItemDlg::_ctor_0
	test eax,eax
	je Block9

 Block3:
	add eax,8
	je Block9

 Block4:
	lea esi,[eax-8]
	mov dword ptr [esp+0xC],esi
	test esi,esi
	je Block6

 Block5:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,esi
	mov dword ptr [esp+0x18],1
	call CDialog::DoModal
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0xC]
	call ZRef<CITCWndItemDlg>::_ReleaseRaw

 Block8:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4

 Block9:
	xor esi,esi
	mov dword ptr [esp+0xC],esi
	jmp Block6
}
}
// CITC::GetRTTI
__SUB_CLASS_THIS0(00174A10, __thiscall, 84031,  CITC, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CITC::ms_RTTI_CITC
	ret
}
}
// CITC::IsKindOf
__SUB_CLASS_THIS(00174A20, __thiscall, 84032,  CITC, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CITC::ms_RTTI_CITC
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
// CITCWnd_List::GetAuctionHistoryCode
__SUB_CLASS_THIS(00187640, __thiscall, 84254,  CITCWnd_List, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	sub eax,1
	push esi
	mov dword ptr [esp+4],0
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 8

 Block3:
	push 0x12A4
	jmp Block5

 Block4:
	push 0x12A3

 Block5:
	mov esi,dword ptr [esp+0x10]
	push esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CITC::OnBuyWish
_SUB_EXCEPTION_HANDLER(173660)
__SUB_CLASS_THIS(00173660, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173660
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0xC
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CITC::OnCancelWish
_SUB_EXCEPTION_HANDLER(173700)
__SUB_CLASS_THIS(00173700, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173700
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0xD
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CITC::GetCorrectTime
__SUB_CLASS_THIS0(00171E50, __thiscall, 84003,  CITC, _SYSTEMTIME) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	push edi
	mov esi,ecx
	call GetLocalTime
	lea eax,[esp+8]
	push eax
	push edi
	call dword ptr [ZImports::_SystemTimeToFileTime]
	mov ecx,dword ptr [esi+0x38]
	mov edx,dword ptr [esi+0x34]
	mov eax,dword ptr [esp+0xC]
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x10]
	push edx
	push eax
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	call CITC::FileTimeAddition
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+8],ecx
	mov edx,dword ptr [eax+4]
	push edi
	lea eax,[esp+0xC]
	push eax
	mov dword ptr [esp+0x14],edx
	call dword ptr [ZImports::_FileTimeToSystemTime]
	mov eax,edi
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CITC::OnCancelSaleItem
_SUB_EXCEPTION_HANDLER(1737A0)
__SUB_CLASS_THIS(001737A0, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1737A0
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
	mov edi,ecx
	cmp dword ptr [edi+0x18],0
	jne Block4

 Block1:
	mov esi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esi+4]
	cmp word ptr [eax+0xC],0
	jne Block4

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x12BA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block4

 Block3:
	push 0x134
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 7
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [edi+0x18],1
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CITC::OnStatusCheck
__SUB_CLASS_THIS0(00172E70, __thiscall, 83987,  CITC, void) {
__asm {

 Block0:
	jmp  CITC::TrySendQueryCashRequest
}
}
// CITC::OnRegisterSaleEntry
_SUB_EXCEPTION_HANDLER(172E90)
__SUB_CLASS_THIS(00172E90, __thiscall, 84011,  CITC, int32_t, long, long, long, GW_ItemSlotBase*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172E90
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
	mov edi,ecx
	cmp dword ptr [edi+0x18],0
	jne Block21

 Block1:
	mov ebx,dword ptr [esp+0x4C]
	test ebx,ebx
	jle Block21

 Block2:
	mov esi,dword ptr [esp+0x50]
	push esi
	call IsITCTradeLimitItem
	add esp,4
	test eax,eax
	jne Block21

 Block3:
	mov ebp,dword ptr [esp+0x48]
	cmp ebp,1
	jne Block7

 Block4:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov ebx,eax
	mov eax,dword ptr [esi+0xF5]
	push eax
	lea ecx,[esi+0xED]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,dword ptr [ebx+0x260]
	je Block6

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1636
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block21

 Block6:
	mov ebx,dword ptr [esp+0x4C]

 Block7:
	push 0x134
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x44]
	sub eax,0
	mov dword ptr [esp+0x3C],0
	je Block14

 Block8:
	sub eax,1
	jne Block18

 Block9:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push edi
	push esi
	push ebp
	call CRegisterAuctionEntryDlg::Confirm
	add esp,0x24
	cmp eax,1
	jne Block20

 Block10:
	movzx eax,byte ptr [esp+0x50]
	cmp dword ptr [edi+0x3468],eax
	jg Block13

 Block11:
	cmp dword ptr [edi+0x346C],eax
	jl Block13

 Block12:
	push 0x12
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call GW_ItemSlotBase::Encode
	push ebx
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x14]
	push ecx
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x48]
	push edx
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov eax,dword ptr [esp+0x44]
	push eax
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x50]
	push ecx
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	mov edx,dword ptr [esp+0x18]
	push edx
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x1C]
	push eax
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	jmp Block17

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x12B2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,4
	jmp Block22

 Block14:
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x58]
	push eax
	push edi
	push esi
	push ebp
	call CRegisterSaleEntryDlg::Confirm
	add esp,0x1C
	cmp eax,1
	jne Block20

 Block15:
	mov ecx,dword ptr [esp+0x4C]
	add ecx,0xFFFFFF92
	cmp ecx,0x989611
	ja Block19

 Block16:
	push 2
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	call GW_ItemSlotBase::Encode
	push ebx
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov eax,dword ptr [esp+0x14]
	push eax
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x4C]
	push ecx
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x50]
	push edx
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x18]
	push eax
	lea ecx,[esp+0x28]
	call COutPacket::Encode1

 Block17:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket

 Block18:
	lea ecx,[esp+0x28]
	mov dword ptr [edi+0x18],1
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	jmp Block22

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A5C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block20:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block21:
	xor eax,eax

 Block22:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 0x10
}
}
// CITCWnd_Status::OnSetFocus
__SUB_CLASS_THIS(00172950, __thiscall, 84222,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CITCWnd_List::OnMouseMove
_SUB_EXCEPTION_HANDLER(187690)
__SUB_CLASS_THIS(00187690, __thiscall, 84243,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_187690
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
	mov eax,dword ptr [esi+0x1AC]
	cmp dword ptr [eax+0x68],5
	je Block21

 Block1:
	add eax,0x54
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],eax
	xor ebp,ebp

 Block2:
	cmp edi,ebx
	jne Block21

 Block3:
	cmp ebp,dword ptr [esi+0x1A8]
	jge Block18

 Block4:
	push ebp
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esi-4]
	call CITCWnd_List::GetPlateRect
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x20]
	add ecx,5
	add edx,5
	mov dword ptr [esp+0x28],ecx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esp+0x2C],edx
	mov edx,dword ptr [esp+0x78]
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [esp+0x74]
	push edx
	mov dword ptr [esp+0x38],ecx
	push eax
	lea ecx,[esp+0x30]
	push ecx
	call PtInRect
	test eax,eax
	je Block18

 Block5:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [_D_DB_DATE_19000101__163]
	mov edx,dword ptr [_D_DB_DATE_19000101__163+4]
	lea edi,[eax+ebp*8]
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x4C],ebx
	mov dword ptr [esp+0x50],ecx
	mov dword ptr [esp+0x54],edx
	mov dword ptr [esp+0x60],ebx
	mov eax,dword ptr [edi+4]
	mov eax,dword ptr [eax+0x24]
	push edi
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x50],eax
	call ZRef<ITCITEM>::op_assign_copy
	mov eax,dword ptr [esi+0x1AC]
	mov ecx,dword ptr [eax+0x68]
	cmp ecx,1
	je Block8

 Block6:
	cmp ecx,4
	jne Block9

 Block7:
	cmp dword ptr [eax+0x6C],3
	jge Block9

 Block8:
	mov ecx,dword ptr [edi+4]
	mov ecx,dword ptr [ecx+0xFC]
	add dword ptr [esp+0x4C],ecx

 Block9:
	mov ecx,dword ptr [eax+0x68]
	cmp ecx,4
	jne Block12

 Block10:
	cmp dword ptr [eax+0x6C],3
	jne Block12

 Block11:
	mov ecx,2
	jmp Block13

 Block12:
	xor edx,edx
	cmp ecx,3
	sete dl
	inc edx
	mov ecx,edx

 Block13:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x2C]
	mov dword ptr [esp+0x50],edx
	mov eax,dword ptr [eax+0x30]
	mov edx,dword ptr [esi]
	push ecx
	mov dword ptr [esp+0x58],eax
	mov dword ptr [esp+0x48],1
	mov eax,dword ptr [edi+4]
	push ebx
	add eax,0x98
	push ebx
	mov dword ptr [esp+0x64],eax
	mov edi,dword ptr [edi+4]
	mov edi,dword ptr [edi+0x18]
	mov eax,dword ptr [edx+0x30]
	push ebx
	lea ecx,[esp+0x48]
	push ecx
	push edi
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x90]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x90]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x1B8]
	call CUIToolTip::ShowItemToolTip
	mov eax,dword ptr [esp+0x60]
	mov edi,1
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x60]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x60]
	cmp ecx,ebx
	je Block17

 Block16:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push edi
	call eax

 Block17:
	mov dword ptr [esp+0x60],ebx

 Block18:
	inc ebp
	cmp ebp,0x10
	jl Block2

 Block19:
	cmp edi,ebx
	jne Block21

 Block20:
	lea ecx,[esi+0x1B8]
	call CUIToolTip::ClearToolTip

 Block21:
	xor eax,eax
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
// CITC::IsSaleCategory
_SUB_EXCEPTION_HANDLER(172AD0)
__SUB_CLASS_THIS0(00172AD0, __thiscall, 84007,  CITC, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172AD0
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
	cmp dword ptr [esi+0x18],0
	je Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret

 Block2:
	push 0x133
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0x24],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CITC::OnRegisterWishEntry
_SUB_EXCEPTION_HANDLER(173C10)
__SUB_CLASS_THIS(00173C10, __thiscall, 84009,  CITC, int32_t, long, long, long, unsigned char, unsigned char, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_173C10
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
	cmp dword ptr [esi+0x18],0
	mov dword ptr [esp+0x24],0
	jne Block6

 Block1:
	mov eax,dword ptr [esp+0x30]
	lea ecx,[eax-0x6E]
	cmp ecx,0x989611
	ja Block5

 Block2:
	mov edx,dword ptr [esp+0x2C]
	mov cl,byte ptr [esp+0x38]
	mov dword ptr [esi+0x344C],eax
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esi+0x3450],eax
	mov dword ptr [esi+0x3448],edx
	mov dl,byte ptr [esp+0x3C]
	lea eax,[esp+0x40]
	mov byte ptr [esi+0x3454],cl
	lea edi,[esi+0x3458]
	push eax
	mov ecx,edi
	mov byte ptr [esi+0x3455],dl
	call ZXString<char>::op_assign
	push 0x134
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x28],1
	call COutPacket::Encode1
	mov ecx,dword ptr [esi+0x3448]
	push ecx
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0x344C]
	push edx
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0x3450]
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	movzx ecx,byte ptr [esi+0x3455]
	push ecx
	lea ecx,[esp+0x10]
	call COutPacket::Encode1
	movzx edx,byte ptr [esi+0x3454]
	push edx
	lea ecx,[esp+0x10]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push edi
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x10]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esi+0x18],1
	mov byte ptr [esp+0x24],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,1
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 0x18

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1A5C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block6:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 0x18
}
}
// CITC::OnSetZzim
_SUB_EXCEPTION_HANDLER(1733B0)
__SUB_CLASS_THIS(001733B0, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1733B0
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 9
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CITCWnd_List::Draw
_SUB_EXCEPTION_HANDLER(187BC0)
__SUB_CLASS_THIS(00187BC0, __thiscall, 84247,  CITCWnd_List, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_187BC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x21C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x230]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x4C],edi
	mov eax,dword ptr [esp+0x240]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	xor ebp,ebp
	mov dword ptr [esp+0x238],ebp
	mov dword ptr [esp+0x50],ebp
	mov eax,dword ptr [edi+0x1B0]
	mov ecx,dword ptr [eax+0x68]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x238],1
	cmp ecx,4
	jne Block42

 Block1:
	cmp dword ptr [eax+0x6C],2
	jl Block22

 Block2:
	lea edx,[esp+0x2C]
	push edx
	call esi
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
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x23C],2
	call esi
	lea edx,[esp+0x3C]
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
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x125E
	push edx
	mov byte ptr [esp+0x254],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x24C],4
	cmp dword ptr [_D_G_RM],ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x24C],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x240],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x238],3
	cmp word ptr [esp+0x58],bx
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x58]
	push edx
	call esi

 Block15:
	mov byte ptr [esp+0x238],2
	cmp word ptr [esp+0x3C],bx
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x3C]
	push ecx
	call esi

 Block19:
	mov byte ptr [esp+0x238],1
	cmp word ptr [esp+0x2C],bx
	jne Block21

 Block20:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	jmp Block83

 Block21:
	lea eax,[esp+0x2C]
	push eax
	call esi
	jmp Block88

 Block22:
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	lea eax,[esp+0x2C]
	mov bl,6
	push eax
	mov byte ptr [esp+0x23C],bl
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	push ebp
	push ebp
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0x1275
	push ecx
	mov byte ptr [esp+0x254],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x24C],8
	cmp dword ptr [_D_G_RM],ebp
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x24C],7
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x240],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
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
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x238],7
	cmp word ptr [esp+0x58],si
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x58]
	push ecx
	call ebp

 Block35:
	mov byte ptr [esp+0x238],bl
	cmp word ptr [esp+0x2C],si
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[esp+0x2C]
	push eax
	call ebp

 Block39:
	mov byte ptr [esp+0x238],1
	cmp word ptr [esp+0x3C],si
	jne Block41

 Block40:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	jmp Block84

 Block41:
	lea edx,[esp+0x3C]
	push edx
	call ebp
	jmp Block88

 Block42:
	cmp ecx,5
	jne Block63

 Block43:
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x23C],0xA
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	push ebp
	push ebp
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	push 0x1290
	mov bl,0xB
	push eax
	mov byte ptr [esp+0x254],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x24C],0xC
	cmp dword ptr [_D_G_RM],ebp
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x250],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x240],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block52

 Block50:
	cmp eax,0x80004002
	je Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov esi,8
	mov byte ptr [esp+0x238],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x58],si
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebp
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0x58]
	push eax
	call ebx

 Block56:
	mov byte ptr [esp+0x238],0xA
	cmp word ptr [esp+0x2C],si
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[esp+0x2C]
	push edx
	call ebx

 Block60:
	mov byte ptr [esp+0x238],1
	cmp word ptr [esp+0x3C],si
	jne Block62

 Block61:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	jmp Block82

 Block62:
	lea ecx,[esp+0x3C]
	push ecx
	jmp Block87

 Block63:
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x23C],0xE
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
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
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x68],esp
	push 0x1276
	mov bl,0xF
	push edx
	mov byte ptr [esp+0x254],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x24C],0x10
	cmp dword ptr [_D_G_RM],ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x24C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x240],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
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
	mov esi,8
	mov byte ptr [esp+0x238],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x58],si
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0x58]
	push edx
	call ebx

 Block76:
	mov byte ptr [esp+0x238],0xE
	cmp word ptr [esp+0x2C],si
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x2C]
	push ecx
	call ebx

 Block80:
	mov byte ptr [esp+0x238],1
	cmp word ptr [esp+0x3C],si
	jne Block86

 Block81:
	xor edx,edx
	mov word ptr [esp+0x3C],dx

 Block82:
	mov eax,dword ptr [esp+0x44]

 Block83:
	cmp eax,ebp

 Block84:
	je Block88

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block86:
	lea eax,[esp+0x3C]
	push eax

 Block87:
	call ebx

 Block88:
	mov ecx,edi
	call CITCWnd_List::IsSameList
	test eax,eax
	jne Block90

 Block89:
	lea ecx,[edi+0x1B4]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[edi+0x1B8]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll

 Block90:
	mov ebp,dword ptr [esp+0x28]
	test ebp,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	mov eax,dword ptr [edi+0x24]
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x19A
	push eax
	push 0
	push 0
	push ebp
	call edx
	test eax,eax
	jge Block94

 Block93:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block94:
	mov eax,dword ptr [edi+0x1B0]
	cmp dword ptr [eax+0x68],5
	jne Block128

 Block95:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	mov esi,dword ptr [esp+0x50]
	lea eax,[esp+0x2C]
	push eax
	push esi
	push 0
	push 4
	mov ecx,ebp
	mov byte ptr [esp+0x248],0x12
	call IWzCanvas::Copy
	mov ebx,8
	mov byte ptr [esp+0x238],1
	cmp word ptr [esp+0x2C],bx
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
	mov eax,3
	mov word ptr [esp+0x2C],ax
	mov dword ptr [esp+0x34],1
	lea ecx,[esp+0x2C]
	push ecx
	push 0x13E
	push 0x1D4
	push 7
	push 0xA
	lea edx,[esp+0x90]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x250],0x13
	call IWzCanvas::SetClipRect
	mov byte ptr [esp+0x238],0x15
	cmp word ptr [esp+0x2C],bx
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	mov bl,0x17

 Block106:
	mov eax,dword ptr [edi+0xC20]
	test eax,eax
	je Block121

 Block107:
	mov edx,dword ptr [esp+0x20]
	cmp edx,dword ptr [eax-4]
	jae Block121

 Block108:
	mov ecx,dword ptr [esp+0x4C]
	mov edi,dword ptr [ecx+0xC20]
	mov eax,dword ptr [edi+ebp+8]
	mov esi,dword ptr [edi+ebp+0x1C]
	add edi,ebp
	lea eax,[eax+eax*4]
	sub esi,eax
	mov eax,esi
	sub eax,dword ptr [ecx+0xC28]
	cmp eax,0xFFFFFFD0
	jl Block120

 Block109:
	cmp eax,0x158
	jge Block120

 Block110:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block111:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x23C],0x16
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block112:
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [edi+0xC]
	push eax
	mov eax,dword ptr [edi+0x10]
	push ecx
	mov dword ptr [esp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x24C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	sub esi,dword ptr [ecx+0xC28]
	mov edx,dword ptr [edi+0x18]
	mov ecx,dword ptr [esp+0x38]
	add esi,7
	push esi
	add edx,0xA
	mov byte ptr [esp+0x24C],0x18
	push edx
	mov byte ptr [esp+0x250],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x238],0x16
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x238],0x15
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x4C]
	mov esi,dword ptr [esp+0x50]
	add ebp,0x44
	jmp Block106

 Block119:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block120:
	inc dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x4C]
	mov esi,dword ptr [esp+0x50]
	add ebp,0x44
	jmp Block106

 Block121:
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0x238],1
	jne Block124

 Block122:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[esp+0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov byte ptr [esp+0x238],0
	test esi,esi
	je Block127

 Block126:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block127:
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	call eax
	jmp Block373

 Block128:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x68]
	push ecx
	call ebx
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	mov ecx,dword ptr [esp+0x50]
	lea eax,[esp+0x68]
	push eax
	push ecx
	push esi
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0x248],0x19
	call IWzCanvas::Copy
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x238],1
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,esi
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block134:
	cmp dword ptr [edi+0x1AC],esi
	jne Block165

 Block135:
	mov eax,dword ptr [edi+0xC04]
	cmp eax,esi
	je Block165

 Block136:
	cmp dword ptr [eax-4],esi
	jbe Block165

 Block137:
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x24],esi
	jmp Block139

 Block139:
	mov eax,dword ptr [edi+0xC04]
	test eax,eax
	je Block165

 Block140:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,dword ptr [eax-4]
	jae Block165

 Block141:
	lea edx,[esp+0x2C]
	mov esi,eax
	add esi,dword ptr [esp+0x24]
	push edx
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block142:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0x23C],0x1A
	call ebx
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block143:
	push 0
	push 0
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [esi+8]
	lea ecx,[esp+0x74]
	push ecx
	push ecx
	mov dword ptr [esp+0x68],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x250],0x1B
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x24C],0x1C
	je Block7

 Block144:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x24C],0x1B
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x240],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block146

 Block145:
	cmp eax,0x80004002
	jne Block3

 Block146:
	mov edi,8
	mov byte ptr [esp+0x238],0x1F
	cmp word ptr [esp+0x58],di
	jne Block149

 Block147:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov byte ptr [esp+0x238],0x20
	cmp word ptr [esp+0x68],di
	jne Block153

 Block151:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov byte ptr [esp+0x238],0x21
	cmp word ptr [esp+0x2C],di
	jne Block157

 Block155:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],0xFF
	mov edi,dword ptr [esp+0x18]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edi
	push edx
	push eax
	mov byte ptr [esp+0x248],0x22
	call IWzCanvas::Copy
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x238],0x21
	jne Block161

 Block159:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov byte ptr [esp+0x238],1
	test edi,edi
	je Block164

 Block163:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block164:
	inc dword ptr [esp+0x20]
	add dword ptr [esp+0x24],0xC
	mov edi,dword ptr [esp+0x4C]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov ebp,dword ptr [esp+0x28]
	jmp Block139

 Block165:
	mov esi,dword ptr [edi+0x1B0]
	lea edx,[esp+0x1C]
	push 0
	add esi,0x54
	push edx
	mov dword ptr [esp+0x98],esi
	call get_basic_font
	add esp,8
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	xor edx,edx
	cmp dword ptr [edi+0x1AC],edx
	mov byte ptr [esp+0x238],0x24
	mov dword ptr [esp+0x78],edx
	jle Block366

 Block166:
	jmp Block169

 Block168:
	mov esi,dword ptr [esp+0x90]

 Block169:
	mov ebx,dword ptr [esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov ecx,ebx
	call CITCWnd_List::GetPlateRect
	mov ecx,dword ptr [esi]
	mov edi,dword ptr [esp+0x40]
	mov eax,dword ptr [ebx+0x1B0]
	add edi,3
	cmp dword ptr [eax+0x68],4
	lea ebp,[ecx+edx*8]
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x24],edi
	jne Block269

 Block170:
	mov eax,dword ptr [eax+0x6C]
	mov edi,dword ptr [esp+0x3C]
	cmp eax,2
	jne Block182

 Block171:
	mov eax,dword ptr [ebp+4]
	movsx edx,word ptr [eax+0x1C]
	push edx
	lea eax,[esp+0xAC]
	push eax
	mov ecx,ebx
	call CITCWnd_List::GetContractHistoryCode
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x23C],0x25
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xA8]
	mov byte ptr [esp+0x238],0x24
	test eax,eax
	je Block173

 Block172:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block173:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block174:
	lea eax,[esp+0x68]
	push eax
	mov byte ptr [esp+0x23C],0x26
	call esi
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block175:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x6C]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x24C],0x27
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x38]
	push eax
	add edi,5
	mov byte ptr [esp+0x24C],0x28
	push edi
	mov byte ptr [esp+0x250],0x27
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x238],0x26
	cmp word ptr [esp+0x68],si
	jne Block178

 Block176:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0x2C],si
	jne Block181

 Block180:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	jmp Block193

 Block181:
	lea ecx,[esp+0x2C]
	jmp Block196

 Block182:
	cmp eax,3
	jne Block197

 Block183:
	mov eax,dword ptr [ebp+4]
	movsx edx,word ptr [eax+0x1C]
	push edx
	lea eax,[esp+0x90]
	push eax
	mov ecx,ebx
	call CITCWnd_List::GetAuctionHistoryCode
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x23C],0x29
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x238],0x24
	test eax,eax
	je Block185

 Block184:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block185:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xB0]
	push ecx
	call esi
	lea edx,[esp+0xB0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block186:
	lea eax,[esp+0x1A0]
	push eax
	mov byte ptr [esp+0x23C],0x2A
	call esi
	lea ecx,[esp+0x1A0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block187:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0xB0]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x1A4]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x24C],0x2B
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x38]
	push eax
	add edi,5
	mov byte ptr [esp+0x24C],0x2C
	push edi
	mov byte ptr [esp+0x250],0x2B
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x238],0x2A
	cmp word ptr [esp+0x1A0],si
	jne Block190

 Block188:
	mov eax,dword ptr [esp+0x1A8]
	xor ecx,ecx
	mov word ptr [esp+0x1A0],cx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea edx,[esp+0x1A0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0xB0],si
	jne Block195

 Block192:
	xor eax,eax
	mov word ptr [esp+0xB0],ax
	mov eax,dword ptr [esp+0xB8]

 Block193:
	test eax,eax
	je Block197

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block195:
	lea ecx,[esp+0xB0]

 Block196:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block197:
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x98]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x23C],0x2D
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0x238],0x24
	test eax,eax
	je Block199

 Block198:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block199:
	push 0x70
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block201

 Block200:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block201:
	lea ecx,[esp+0x1C]
	push ecx
	call format_string_1
	mov edx,dword ptr [ebx+0x1B0]
	mov eax,dword ptr [edx+0x6C]
	add esp,0xC
	cmp eax,2
	jne Block204

 Block202:
	lea edi,[eax+0x45]
	mov eax,dword ptr [ebp+4]
	cmp word ptr [eax+0x1C],0
	jne Block207

 Block203:
	mov esi,dword ptr [eax+0x24]
	jmp Block208

 Block204:
	cmp eax,3
	mov eax,dword ptr [ebp+4]
	jne Block206

 Block205:
	mov esi,dword ptr [eax+0xFC]
	add esi,dword ptr [eax+0x10]
	mov edi,0x47
	jmp Block208

 Block206:
	mov edi,0xA

 Block207:
	mov esi,dword ptr [eax+0xFC]
	add esi,dword ptr [eax+0x24]

 Block208:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xD0]
	push eax
	call ebp
	lea ecx,[esp+0xD0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block209:
	lea edx,[esp+0x1E0]
	push edx
	mov byte ptr [esp+0x23C],0x2E
	call ebp
	lea eax,[esp+0x1E0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block210:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0xD0]
	push ecx
	lea edx,[esp+0x1E4]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x24C],0x2F
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x4C]
	mov ebx,dword ptr [esp+0x38]
	add edi,ecx
	push eax
	mov byte ptr [esp+0x24C],0x30
	push edi
	mov ecx,ebx
	mov byte ptr [esp+0x250],0x2F
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x1E0],8
	mov byte ptr [esp+0x238],0x2E
	jne Block213

 Block211:
	mov eax,dword ptr [esp+0x1E8]
	xor edx,edx
	mov word ptr [esp+0x1E0],dx
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea eax,[esp+0x1E0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block214:
	cmp word ptr [esp+0xD0],8
	mov byte ptr [esp+0x238],0x24
	jne Block217

 Block215:
	mov eax,dword ptr [esp+0xD8]
	xor ecx,ecx
	mov word ptr [esp+0xD0],cx
	test eax,eax
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea edx,[esp+0xD0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block218:
	push 1
	lea eax,[esp+0x18]
	push esi
	push eax
	call format_integer
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [ecx+4]
	mov ecx,dword ptr [eax+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	add esp,0xC
	call eax
	cmp eax,1
	jle Block226

 Block219:
	mov dword ptr [esp+0x18],0
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [eax+0x18]
	lea edx,[esp+0x9C]
	push 0x1264
	push edx
	mov byte ptr [esp+0x240],0x31
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,esi
	mov byte ptr [esp+0x238],0x32
	call edx
	push eax
	lea eax,[esp+0x1C]
	push edi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xA8]
	add esp,0xC
	mov byte ptr [esp+0x238],0x31
	test eax,eax
	je Block221

 Block220:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block221:
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block223

 Block222:
	mov eax,dword ptr [esi-4]
	jmp Block224

 Block223:
	xor eax,eax

 Block224:
	push eax
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x238],0x24
	test esi,esi
	je Block226

 Block225:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block226:
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [ecx+0x1B0]
	cmp dword ptr [edx+0x6C],2
	jge Block236

 Block227:
	lea eax,[esp+0xF0]
	push eax
	call ebp
	lea ecx,[esp+0xF0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block228:
	lea edx,[esp+0x1D0]
	push edx
	mov byte ptr [esp+0x23C],0x33
	call ebp
	lea eax,[esp+0x1D0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block229:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0xF0]
	push ecx
	lea edx,[esp+0x1D4]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x24C],0x34
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x34]
	mov esi,dword ptr [esp+0x4C]
	push eax
	lea ecx,[esi+0x126]
	push ecx
	mov byte ptr [esp+0x250],0x35
	mov ecx,ebx
	mov byte ptr [esp+0x250],0x34
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x238],0x33
	cmp word ptr [esp+0x1D0],di
	jne Block232

 Block230:
	mov eax,dword ptr [esp+0x1D8]
	xor edx,edx
	mov word ptr [esp+0x1D0],dx
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea eax,[esp+0x1D0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block233:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0xF0],di
	jne Block235

 Block234:
	mov eax,dword ptr [esp+0xF8]
	xor ecx,ecx
	mov word ptr [esp+0xF0],cx
	jmp Block244

 Block235:
	lea edx,[esp+0xF0]
	jmp Block247

 Block236:
	lea eax,[esp+0x110]
	push eax
	call ebp
	lea ecx,[esp+0x110]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block237:
	lea edx,[esp+0x190]
	push edx
	mov byte ptr [esp+0x23C],0x36
	call ebp
	lea eax,[esp+0x190]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block238:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x110]
	push ecx
	lea edx,[esp+0x194]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x24C],0x37
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x34]
	mov esi,dword ptr [esp+0x4C]
	push eax
	lea ecx,[esi+0x17C]
	push ecx
	mov byte ptr [esp+0x250],0x38
	mov ecx,ebx
	mov byte ptr [esp+0x250],0x37
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x238],0x36
	cmp word ptr [esp+0x190],di
	jne Block241

 Block239:
	mov eax,dword ptr [esp+0x198]
	xor edx,edx
	mov word ptr [esp+0x190],dx
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea eax,[esp+0x190]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block242:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0x110],di
	jne Block246

 Block243:
	mov eax,dword ptr [esp+0x118]
	xor ecx,ecx
	mov word ptr [esp+0x110],cx

 Block244:
	test eax,eax
	je Block248

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block248

 Block246:
	lea edx,[esp+0x110]

 Block247:
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block248:
	mov eax,dword ptr [esp+0x20]
	mov eax,dword ptr [eax+4]
	lea ecx,[esp+0x210]
	push ecx
	add eax,0x2C
	push eax
	call FileTimeToSystemTime
	lea edx,[esp+0xA4]
	push 0x127D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	movzx eax,word ptr [esp+0x210]
	cdq
	mov edi,0x64
	idiv edi
	movzx eax,word ptr [esp+0x216]
	mov byte ptr [esp+0x238],0x39
	push edx
	movzx edx,word ptr [esp+0x216]
	push eax
	push edx
	push ecx
	lea eax,[esp+0x24]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xB8]
	add esp,0x14
	mov byte ptr [esp+0x238],0x24
	test eax,eax
	je Block250

 Block249:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block250:
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [ecx+0x1B0]
	cmp dword ptr [edx+0x6C],2
	jge Block260

 Block251:
	lea eax,[esp+0x130]
	push eax
	call ebp
	lea ecx,[esp+0x130]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block252:
	lea edx,[esp+0x200]
	push edx
	mov byte ptr [esp+0x23C],0x3A
	call ebp
	lea eax,[esp+0x200]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block253:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x130]
	push ecx
	lea edx,[esp+0x204]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x24C],0x3B
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x34]
	push eax
	add esi,0x165
	mov byte ptr [esp+0x24C],0x3C
	push esi
	mov ecx,ebx
	mov byte ptr [esp+0x250],0x3B
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x238],0x3A
	cmp word ptr [esp+0x200],si
	jne Block256

 Block254:
	mov eax,dword ptr [esp+0x208]
	xor ecx,ecx
	mov word ptr [esp+0x200],cx
	test eax,eax
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea edx,[esp+0x200]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0x130],si
	jne Block259

 Block258:
	xor eax,eax
	mov word ptr [esp+0x130],ax
	mov eax,dword ptr [esp+0x138]
	test eax,eax
	jmp Block359

 Block259:
	lea ecx,[esp+0x130]
	push ecx
	jmp Block363

 Block260:
	lea edx,[esp+0x150]
	push edx
	call ebp
	lea eax,[esp+0x150]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block261:
	lea ecx,[esp+0x1B0]
	push ecx
	mov byte ptr [esp+0x23C],0x3D
	call ebp
	lea edx,[esp+0x1B0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block262:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x150]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x1B4]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x24C],0x3E
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	push ecx
	add esi,0x1BC
	mov byte ptr [esp+0x24C],0x3F
	push esi
	mov ecx,ebx
	mov byte ptr [esp+0x250],0x3E
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x238],0x3D
	cmp word ptr [esp+0x1B0],si
	jne Block265

 Block263:
	mov eax,dword ptr [esp+0x1B8]
	xor edx,edx
	mov word ptr [esp+0x1B0],dx
	test eax,eax
	je Block266

 Block264:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block266

 Block265:
	lea eax,[esp+0x1B0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block266:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0x150],si
	jne Block268

 Block267:
	mov eax,dword ptr [esp+0x158]
	xor ecx,ecx
	mov word ptr [esp+0x150],cx
	test eax,eax
	jmp Block359

 Block268:
	lea edx,[esp+0x150]
	jmp Block362

 Block269:
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0xB0]
	push eax
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x23C],0x40
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xAC]
	mov byte ptr [esp+0x238],0x24
	test eax,eax
	je Block271

 Block270:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block271:
	push 0xBE
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block273

 Block272:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block273:
	lea ecx,[esp+0x1C]
	push ecx
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x170]
	push edx
	call esi
	lea eax,[esp+0x170]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block274:
	lea ecx,[esp+0x1F0]
	push ecx
	mov byte ptr [esp+0x23C],0x41
	call esi
	lea edx,[esp+0x1F0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block275:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x170]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x1F4]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x24C],0x42
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x4C]
	add ecx,0xB
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x250],0x43
	mov byte ptr [esp+0x250],0x42
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x238],0x41
	cmp word ptr [esp+0x1F0],si
	jne Block278

 Block276:
	mov eax,dword ptr [esp+0x1F8]
	xor edx,edx
	mov word ptr [esp+0x1F0],dx
	test eax,eax
	je Block279

 Block277:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block279

 Block278:
	lea eax,[esp+0x1F0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block279:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0x170],si
	jne Block282

 Block280:
	mov eax,dword ptr [esp+0x178]
	xor ecx,ecx
	mov word ptr [esp+0x170],cx
	test eax,eax
	je Block283

 Block281:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block283

 Block282:
	lea edx,[esp+0x170]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block283:
	mov eax,dword ptr [ebx+0x1B0]
	mov eax,dword ptr [eax+0x68]
	push 1
	cmp eax,1
	jne Block285

 Block284:
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [eax+0xFC]
	add ecx,dword ptr [eax+0x24]
	lea edx,[esp+0x18]
	push ecx
	push edx
	jmp Block288

 Block285:
	cmp eax,3
	mov eax,dword ptr [ebp+4]
	jne Block287

 Block286:
	mov ecx,dword ptr [eax+0xFC]
	add ecx,dword ptr [eax+0x10]
	lea edx,[esp+0x18]
	push ecx
	push edx
	jmp Block288

 Block287:
	mov eax,dword ptr [eax+0x24]
	push eax
	lea ecx,[esp+0x1C]
	push ecx

 Block288:
	call format_integer
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [eax+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	add esp,0xC
	call eax
	xor ebx,ebx
	cmp eax,1
	jle Block296

 Block289:
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [ebp+4]
	mov esi,dword ptr [eax+0x18]
	lea ecx,[esp+0xA0]
	push 0x1264
	push ecx
	mov byte ptr [esp+0x240],0x44
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi]
	mov edi,dword ptr [eax]
	mov eax,dword ptr [edx+0x20]
	mov ecx,esi
	mov byte ptr [esp+0x238],0x45
	call eax
	push eax
	lea ecx,[esp+0x1C]
	push edi
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0xAC]
	add esp,0xC
	mov byte ptr [esp+0x238],0x44
	cmp eax,ebx
	je Block291

 Block290:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block291:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	je Block293

 Block292:
	mov eax,dword ptr [esi-4]
	jmp Block294

 Block293:
	xor eax,eax

 Block294:
	push eax
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x238],0x24
	cmp esi,ebx
	je Block296

 Block295:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block296:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xE0]
	push edx
	call edi
	lea eax,[esp+0xE0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block297:
	lea ecx,[esp+0xC0]
	push ecx
	mov byte ptr [esp+0x23C],0x46
	call edi
	lea edx,[esp+0xC0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block298:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0xE0]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0xC4]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x24C],0x47
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x4C]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	add edx,0x17A
	mov byte ptr [esp+0x24C],0x48
	push edx
	mov byte ptr [esp+0x250],0x47
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x238],0x46
	cmp word ptr [esp+0xC0],si
	jne Block301

 Block299:
	xor eax,eax
	mov word ptr [esp+0xC0],ax
	mov eax,dword ptr [esp+0xC8]
	cmp eax,ebx
	je Block302

 Block300:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block302

 Block301:
	lea ecx,[esp+0xC0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block302:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0xE0],si
	jne Block305

 Block303:
	mov eax,dword ptr [esp+0xE8]
	xor edx,edx
	mov word ptr [esp+0xE0],dx
	cmp eax,ebx
	je Block306

 Block304:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block306

 Block305:
	lea eax,[esp+0xE0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block306:
	mov eax,dword ptr [ebp+4]
	lea ecx,[eax+0x66]
	cmp ecx,ebx
	jne Block309

 Block307:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block312

 Block308:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esp+0x14],ebx
	jmp Block312

 Block309:
	mov eax,ecx
	lea esi,[eax+1]
	lea esp,[esp]

 Block310:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block310

 Block311:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block312:
	lea ecx,[esp+0x100]
	push ecx
	call edi
	lea edx,[esp+0x100]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block313:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x100]
	push eax
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x244],0x49
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x240],0x4A
	cmp ecx,ebx
	je Block7

 Block314:
	mov byte ptr [esp+0x240],0x49
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x100],8
	mov esi,eax
	mov byte ptr [esp+0x238],0x24
	jne Block317

 Block315:
	xor eax,eax
	mov word ptr [esp+0x100],ax
	mov eax,dword ptr [esp+0x108]
	cmp eax,ebx
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea ecx,[esp+0x100]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block318:
	cmp esi,0x50
	jle Block339

 Block319:
	mov dword ptr [esp+0x20],ebx
	lea edx,[esp+0x98]
	push 0x5AF
	push edx
	mov byte ptr [esp+0x240],0x4B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x24]
	push ecx
	push eax
	mov byte ptr [esp+0x244],0x4C
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0xA4]
	add esp,0xC
	mov byte ptr [esp+0x238],0x4B
	cmp eax,ebx
	je Block321

 Block320:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block321:
	lea edx,[esp+0x120]
	push edx
	call edi
	lea eax,[esp+0x120]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block322:
	lea ecx,[esp+0x120]
	push ecx
	push 0xFFFFFFFF
	mov esi,8
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x250],0x4D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x248],0x4E
	cmp ecx,ebx
	je Block7

 Block323:
	mov byte ptr [esp+0x248],0x4D
	call IWzFont::Create
	mov byte ptr [esp+0x238],0x4B
	cmp word ptr [esp+0x120],si
	jne Block326

 Block324:
	xor eax,eax
	mov word ptr [esp+0x120],ax
	mov eax,dword ptr [esp+0x128]
	cmp eax,ebx
	je Block327

 Block325:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block327

 Block326:
	lea ecx,[esp+0x120]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block327:
	lea edx,[esp+0x160]
	push edx
	call edi
	lea eax,[esp+0x160]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block328:
	lea ecx,[esp+0x140]
	push ecx
	mov byte ptr [esp+0x23C],0x4F
	call edi
	lea edx,[esp+0x140]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block329:
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x160]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0x144]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x24C],0x50
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x4C]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	add edx,0x123
	mov byte ptr [esp+0x24C],0x51
	push edx
	mov byte ptr [esp+0x250],0x50
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x238],0x4F
	cmp word ptr [esp+0x140],si
	jne Block332

 Block330:
	xor eax,eax
	mov word ptr [esp+0x140],ax
	mov eax,dword ptr [esp+0x148]
	cmp eax,ebx
	je Block333

 Block331:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block333

 Block332:
	lea ecx,[esp+0x140]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block333:
	mov byte ptr [esp+0x238],0x4B
	cmp word ptr [esp+0x160],si
	jne Block336

 Block334:
	mov eax,dword ptr [esp+0x168]
	xor edx,edx
	mov word ptr [esp+0x160],dx
	cmp eax,ebx
	je Block337

 Block335:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block337

 Block336:
	lea eax,[esp+0x160]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block337:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x238],0x24
	cmp eax,ebx
	je Block349

 Block338:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block349

 Block339:
	lea eax,[esp+0x7C]
	push eax
	call edi
	lea ecx,[esp+0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block340:
	lea edx,[esp+0x180]
	push edx
	mov byte ptr [esp+0x23C],0x52
	call edi
	lea eax,[esp+0x180]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block341:
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x7C]
	push ecx
	lea edx,[esp+0x184]
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x24C],0x53
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x4C]
	add ecx,0x125
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x250],0x54
	mov byte ptr [esp+0x250],0x53
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x238],0x52
	cmp word ptr [esp+0x180],si
	jne Block344

 Block342:
	mov eax,dword ptr [esp+0x188]
	xor edx,edx
	mov word ptr [esp+0x180],dx
	cmp eax,ebx
	je Block345

 Block343:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block345

 Block344:
	lea eax,[esp+0x180]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block345:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0x7C],si
	jne Block348

 Block346:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	cmp eax,ebx
	je Block349

 Block347:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block349

 Block348:
	lea edx,[esp+0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block349:
	mov eax,dword ptr [ebp+4]
	lea ecx,[esp+0x220]
	push ecx
	add eax,0x2C
	push eax
	call FileTimeToSystemTime
	lea edx,[esp+0x54]
	push 0x127D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	movzx eax,word ptr [esp+0x220]
	cdq
	mov esi,0x64
	idiv esi
	movzx eax,word ptr [esp+0x226]
	mov byte ptr [esp+0x238],0x55
	push edx
	movzx edx,word ptr [esp+0x226]
	push eax
	push edx
	push ecx
	lea eax,[esp+0x24]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x68]
	add esp,0x14
	mov byte ptr [esp+0x238],0x24
	cmp eax,ebx
	je Block351

 Block350:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block351:
	lea ecx,[esp+0x58]
	push ecx
	call edi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block352:
	lea eax,[esp+0x1C0]
	push eax
	mov byte ptr [esp+0x23C],0x56
	call edi
	lea ecx,[esp+0x1C0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block3

 Block353:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x58]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x1C4]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x24C],0x57
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x4C]
	add ecx,0x1BB
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x250],0x58
	mov byte ptr [esp+0x250],0x57
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x238],0x56
	cmp word ptr [esp+0x1C0],si
	jne Block356

 Block354:
	mov eax,dword ptr [esp+0x1C8]
	xor edx,edx
	mov word ptr [esp+0x1C0],dx
	cmp eax,ebx
	je Block357

 Block355:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block357

 Block356:
	lea eax,[esp+0x1C0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block357:
	mov byte ptr [esp+0x238],0x24
	cmp word ptr [esp+0x58],si
	jne Block361

 Block358:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebx

 Block359:
	je Block364

 Block360:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block364

 Block361:
	lea edx,[esp+0x58]

 Block362:
	push edx

 Block363:
	call dword ptr [ZImports::_VariantClear]

 Block364:
	mov edx,dword ptr [esp+0x78]
	mov eax,dword ptr [esp+0x4C]
	inc edx
	cmp edx,dword ptr [eax+0x1AC]
	mov dword ptr [esp+0x78],edx
	jl Block168

 Block365:
	mov ecx,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x28]
	mov edi,eax

 Block366:
	mov eax,dword ptr [edi+0x1B0]
	mov edx,dword ptr [eax+0x68]
	mov dword ptr [edi+0xC0C],edx
	mov edx,dword ptr [eax+0x6C]
	mov dword ptr [edi+0xC10],edx
	mov eax,dword ptr [eax+0x70]
	mov dword ptr [edi+0xC14],eax
	mov byte ptr [esp+0x238],0x23
	test ecx,ecx
	je Block368

 Block367:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	add esp,4

 Block368:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x238],1
	test eax,eax
	je Block370

 Block369:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block370:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x238],0
	test eax,eax
	je Block372

 Block371:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block372:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	call ecx

 Block373:
	mov ecx,dword ptr [esp+0x230]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x228
	ret 4
}
}
// CITCWnd_List::OnCreate
_SUB_EXCEPTION_HANDLER(18AAC0)
__SUB_CLASS_THIS(0018AAC0, __thiscall, 84242,  CITCWnd_List, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18AAC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x20],edi
	mov eax,dword ptr [esp+0x94]
	push 0x68
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [edi+0x1B0],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x34],eax
	xor ebx,ebx
	mov dword ptr [esp+0x8C],ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlSelector::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x8C],ebp
	cmp eax,ebx
	je Block11

 Block4:
	add eax,8
	cmp eax,ebx
	je Block11

 Block5:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [edi+0x88]
	mov dword ptr [edi+0x88],esi
	mov dword ptr [esp+0x38],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x38]
	call ZRef<CCtrlSelector>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [edi+0x88]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x196
	push 0x147
	push 4
	push 0x3E8
	push edi
	call eax
	mov ecx,dword ptr [edi+0x88]
	push 0xFF000000
	push ebp
	push 0xFF3A67AA
	call CCtrlSelector::SetSelectorAttr
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [edi+0x1AC],ebx
	mov dword ptr [edi+0xC0C],ebx
	mov dword ptr [edi+0xC10],ebp
	mov dword ptr [edi+0xC14],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block12

 Block10:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],0x15E
	mov dword ptr [eax+0xC],7
	jmp Block13

 Block11:
	xor esi,esi
	jmp Block7

 Block12:
	xor eax,eax

 Block13:
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x40],eax
	cmp eax,ebx
	je Block15

 Block14:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov dword ptr [esp+0x8C],1
	mov dword ptr [esp+0x28],ebx
	lea ecx,[esp+0x17]
	mov dword ptr [edi+0xC2C],ebp
	push ecx
	lea ebp,[edi+0xC24]
	push 0xA
	mov ecx,ebp
	mov byte ptr [esp+0x94],2
	mov dword ptr [edi+0xC28],ebx
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor esi,esi
	mov bl,3
	jmp Block17

 Block17:
	lea edx,[esp+0x2C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [eax]
	push 0
	add ecx,esi
	push ecx
	push eax
	mov byte ptr [esp+0x98],bl
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x8C],2
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	add esi,4
	cmp esi,0x28
	jl Block17

 Block20:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea ecx,[esp+0x44]
	push ecx
	push 0xFF000000
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0xA4],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x9C],5
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov byte ptr [esp+0x9C],4
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],2
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	lea edx,[esp+0x2C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov bl,6
	mov byte ptr [esp+0x8C],bl
	test eax,eax
	je Block30

 Block29:
	mov ebp,dword ptr [eax]
	jmp Block31

 Block30:
	xor ebp,ebp

 Block31:
	mov eax,8
	mov word ptr [esp+0x44],ax
	test ebp,ebp
	jne Block33

 Block32:
	xor esi,esi
	jmp Block39

 Block33:
	mov eax,ebp
	lea edx,[eax+2]
	jmp Block35

 Block35:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block35

 Block36:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block38

 Block37:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block38:
	mov edi,dword ptr [esp+0x20]

 Block39:
	mov dword ptr [esp+0x4C],esi
	test esi,esi
	jne Block42

 Block40:
	test ebp,ebp
	je Block42

 Block41:
	push 0x8007000E
	call _com_issue_error

 Block42:
	lea edx,[esp+0x44]
	push edx
	push 0xFF000000
	push 0xD
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x1A25
	push eax
	mov byte ptr [esp+0xA4],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi+0xC24]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],8
	test eax,eax
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov ecx,eax
	mov byte ptr [esp+0x9C],7
	call IWzFont::Create
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x8C],bl
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x8C],2
	test eax,eax
	je Block56

 Block49:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block56

 Block50:
	test esi,esi
	je Block56

 Block51:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block53:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block55

 Block54:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block55:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block56:
	mov ecx,dword ptr [edi+0xC24]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+8]
	cmp esi,eax
	je Block61

 Block57:
	mov dword ptr [ecx+8],eax
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block59:
	test esi,esi
	je Block61

 Block60:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block61:
	mov ecx,dword ptr [edi+0xC24]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0xC]
	cmp esi,eax
	je Block66

 Block62:
	mov dword ptr [ecx+0xC],eax
	test eax,eax
	je Block64

 Block63:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block64:
	test esi,esi
	je Block66

 Block65:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block66:
	mov ecx,dword ptr [edi+0xC24]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x10]
	cmp esi,eax
	je Block71

 Block67:
	mov dword ptr [ecx+0x10],eax
	test eax,eax
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block69:
	test esi,esi
	je Block71

 Block70:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block71:
	mov ecx,dword ptr [edi+0xC24]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x14]
	cmp esi,eax
	je Block76

 Block72:
	mov dword ptr [ecx+0x14],eax
	test eax,eax
	je Block74

 Block73:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block74:
	test esi,esi
	je Block76

 Block75:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block76:
	mov ecx,dword ptr [edi+0xC24]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x18]
	cmp esi,eax
	je Block81

 Block77:
	mov dword ptr [ecx+0x18],eax
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block79:
	test esi,esi
	je Block81

 Block80:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block81:
	mov ecx,dword ptr [edi+0xC24]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x1C]
	cmp esi,eax
	je Block86

 Block82:
	mov dword ptr [ecx+0x1C],eax
	test eax,eax
	je Block84

 Block83:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block84:
	test esi,esi
	je Block86

 Block85:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block86:
	mov ecx,dword ptr [edi+0xC24]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x20]
	cmp esi,eax
	je Block91

 Block87:
	mov dword ptr [ecx+0x20],eax
	test eax,eax
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block89:
	test esi,esi
	je Block91

 Block90:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block91:
	mov ecx,dword ptr [edi+0xC24]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x24]
	cmp esi,eax
	je Block96

 Block92:
	mov dword ptr [ecx+0x24],eax
	test eax,eax
	je Block94

 Block93:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block94:
	test esi,esi
	je Block96

 Block95:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block96:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push eax
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x90],9
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	push 0
	push 0
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x1265
	push eax
	mov byte ptr [esp+0xA8],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xA0],0xB
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0xA4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x94],0xC
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x30],ebp
	test eax,eax
	je Block106

 Block103:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x2C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x2C]
	mov ebp,ecx
	mov dword ptr [esp+0x30],ebp
	test eax,eax
	jge Block106

 Block104:
	cmp eax,0x80004002
	je Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	mov esi,8
	mov byte ptr [esp+0x8C],0xE
	cmp word ptr [esp+0x64],si
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov byte ptr [esp+0x8C],0xF
	cmp word ptr [esp+0x44],si
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov byte ptr [esp+0x8C],0x10
	cmp word ptr [esp+0x54],si
	jne Block117

 Block115:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov dword ptr [esp+0x1C],0
	test ebp,ebp
	je Block23

 Block119:
	mov esi,dword ptr [esp+0x1C]

 Block120:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x20]
	mov ebx,dword ptr [esp+0x24]
	lea eax,[esp+0x18]
	push eax
	push ebp
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block122

 Block121:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebp
	push eax
	call _com_issue_errorex

 Block122:
	cmp esi,dword ptr [esp+0x18]
	jae Block142

 Block123:
	lea edx,[esp+0x34]
	push 0x1A64
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x2C],0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x98],0x12
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0x94],0x13
	mov ecx,ebp
	mov byte ptr [esp+0x94],0x12
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x8C],0x14
	jne Block125

 Block124:
	mov edi,dword ptr [eax+8]
	jmp Block126

 Block125:
	mov edi,offset _S___3

 Block126:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	test edi,edi
	je Block128

 Block127:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push edi
	push esi
	push esi
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x18]

 Block128:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0x8C],0x16
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x8C],0x17
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block134:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x8C],0x18
	test eax,eax
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block136:
	test esi,esi
	je Block138

 Block137:
	mov eax,dword ptr [esi-4]
	jmp Block139

 Block138:
	xor eax,eax

 Block139:
	push eax
	push esi
	lea ecx,[esp+0x30]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0x8C],0x10
	test esi,esi
	je Block141

 Block140:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block141:
	mov esi,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x20]
	inc esi
	mov dword ptr [esp+0x1C],esi
	jmp Block120

 Block142:
	push 0
	push 0
	push 0
	lea eax,[edi+0xC24]
	push eax
	lea ecx,[edi+0xC20]
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebx
	call CTextAnalyzer::AnalyzeText
	lea ecx,[eax-0x140]
	mov eax,0x92492493
	imul ecx
	add edx,ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	lea ecx,[edx+eax-0xF]
	mov dword ptr [edi+0xC2C],ecx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x8C],0x19
	test eax,eax
	je Block144

 Block143:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block145

 Block144:
	xor eax,eax

 Block145:
	mov byte ptr [esp+0x8C],0x10
	test eax,eax
	je Block159

 Block146:
	add eax,8
	je Block159

 Block147:
	lea esi,[eax-8]
	test esi,esi
	je Block149

 Block148:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block149:
	mov eax,dword ptr [edi+0xC1C]
	mov dword ptr [edi+0xC1C],esi
	test eax,eax
	je Block153

 Block150:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block153

 Block151:
	lea ecx,[esi+4]
	push ecx
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
	mov ecx,dword ptr [edi+0xC1C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x151
	push 0
	push 0x1E3
	push 4
	push 1
	push 0xBB8
	push edi
	call eax
	mov eax,dword ptr [edi+0xC2C]
	mov ecx,dword ptr [edi+0xC1C]
	xor edx,edx
	cmp eax,1
	setl dl
	inc edx
	add edx,eax
	push edx
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [edi+0xC1C]
	mov dword ptr [eax+0x34],0x140
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea eax,[edi+0xC08]
	push eax
	call CItemInfo::GetSetItemArray
	mov ecx,edi
	call CITCWnd_List::ChangeCategorySub
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x90],2
	call edx
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x8C],1
	test eax,eax
	je Block155

 Block154:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block155:
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	test ebx,ebx
	je Block158

 Block156:
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block158

 Block157:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block158:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret 4

 Block159:
	xor esi,esi
	jmp Block149
}
}
// CITC::OnSetFocus
__SUB_CLASS_THIS(00174A00, __thiscall, 83991,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret 4
}
}
// CITCWnd_List::OnSetFocus
__SUB_CLASS_THIS(001746C0, __thiscall, 84248,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CITC::CITC
_SUB_EXCEPTION_HANDLER(174D00)
__SUB_CLASS_THIS(00174D00, __thiscall, 83985,  CITC, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_174D00
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
	int 3// TODO: 	mov dword ptr [esi+4],offset IUIMsgHandler::`vftable'
	int 3// TODO: 	mov dword ptr [esi+8],offset INetMsgHandler::`vftable'
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi+0xC],offset ZRefCounted::`vftable'
	mov dword ptr [esi+0x10],eax
	xor ebx,ebx
	mov dword ptr [esi+0x14],eax
	int 3// TODO: 	mov dword ptr [esi],offset CITC::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITC::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITC::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CITC::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esi+0x3C],ebx
	mov dword ptr [esi+0x40],ebx
	mov dword ptr [esi+0x48],ebx
	mov dword ptr [esi+0x4C],ebx
	mov dword ptr [esi+0x50],ebx
	mov dword ptr [esi+0x54],ebx
	mov dword ptr [esi+0x74],ebx
	lea ecx,[esi+0x78]
	mov byte ptr [esp+0x1C],7
	call CITCWnd_Char::_ctor_default
	lea ecx,[esi+0x500]
	mov byte ptr [esp+0x1C],8
	call CITCWnd_SALE::_ctor_default
	lea ecx,[esi+0xFE4]
	mov byte ptr [esp+0x1C],9
	call CITCWnd_PURCHASE::_ctor_default
	lea ecx,[esi+0x1AC0]
	mov byte ptr [esp+0x1C],0xA
	call CITCWnd_Inventory::_ctor_default
	lea ecx,[esi+0x25B4]
	mov byte ptr [esp+0x1C],0xB
	call CITCWnd_Tab::_ctor_default
	lea ecx,[esi+0x2688]
	mov byte ptr [esp+0x1C],0xC
	call CITCWnd_SubTab::_ctor_default
	lea ecx,[esi+0x277C]
	mov byte ptr [esp+0x1C],0xD
	call CITCWnd_List::_ctor_default
	lea edi,[esi+0x33AC]
	mov ecx,edi
	mov byte ptr [esp+0x1C],0xE
	call CWnd::_ctor_default
	int 3// TODO: 	mov dword ptr [edi],offset CITCWnd_Status::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [edi+4],offset CITCWnd_Status::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [edi+8],offset CITCWnd_Status::`vftable'{for `ZRefCounted'}
	mov dword ptr [edi+0x84],ebx
	mov dword ptr [edi+0x8C],ebx
	mov dword ptr [edi+0x94],ebx
	mov dword ptr [esi+0x3458],ebx
	mov dword ptr [esi+0x3480],ebx
	mov eax,dword ptr [esp+0x24]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x20],0x11
	call CITC::LoadData
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CITC::SendTransferFieldPacket
_SUB_EXCEPTION_HANDLER(172B70)
__SUB_CLASS_THIS0(00172B70, __thiscall, 83987,  CITC, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172B70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	push 0x29
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0x24],0
	call CClientSocket::SendPacket
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CInterStage::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push 0
	push eax
	mov byte ptr [esp+0x28],0
	call set_stage
	add esp,8
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x20
	ret
}
}
// CITC::OnViewWish
_SUB_EXCEPTION_HANDLER(1735C0)
__SUB_CLASS_THIS(001735C0, __thiscall, 83999,  CITC, void, ZRef<ITCITEM>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1735C0
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
	cmp dword ptr [esi+0x18],0
	jne Block2

 Block1:
	push 0x134
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0xB
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x28]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x20]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x18],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
