#include "regen.hpp"
// ParcelDlg.ipp
#include "ParcelDlg.hpp"

// CTabReceive::AddNewParcel
_SUB_EXCEPTION_HANDLER(28F360)
__SUB_CLASS_THIS(0028F360, __thiscall, 134257,  CTabReceive, void, NakedParam<ZRef<PARCEL>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28F360
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
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block6

 Block1:
	cmp dword ptr [eax-4],0xA
	jb Block6

 Block2:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block12

 Block3:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block4:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8

 Block6:
	lea eax,[esp+0x1C]
	push eax
	or edi,0xFFFFFFFF
	push edi
	mov ecx,esi
	call ZArray<ZRef<PARCEL>>::InsertBefore
	mov ecx,eax
	call ZRef<PARCEL>::op_assign_copy
	mov eax,dword ptr [esi]
	mov dword ptr [esi+4],edi
	test eax,eax
	je Block8

 Block7:
	mov eax,dword ptr [eax-4]

 Block8:
	mov ecx,dword ptr [esi+8]
	push ecx
	mov ecx,dword ptr [esi+0xC]
	push eax
	call CParcelDlg::SetScrollBar
	mov ecx,dword ptr [esi+0xC]
	push 0
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],edi
	test eax,eax
	je Block12

 Block9:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block12:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// CParcelDlg::HitTest
__SUB_CLASS_THIS(0028D920, __thiscall, 134279,  CParcelDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	push edi
	push ebp
	push eax
	mov esi,ecx
	call CWnd::HitTest
	mov ebx,eax
	test ebx,ebx
	jne Block2

 Block1:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0xC

 Block2:
	test edi,edi
	je Block6

 Block3:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block6

 Block4:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x28]
	call eax
	test eax,eax
	mov eax,ebx
	jne Block12

 Block5:
	mov dword ptr [edi],0
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC

 Block6:
	mov eax,dword ptr [esi+0xA0]
	sub eax,0
	je Block11

 Block7:
	sub eax,1
	je Block10

 Block8:
	sub eax,1
	jne Block1

 Block9:
	mov ecx,dword ptr [esp+0x14]
	push ebp
	push ecx
	mov ecx,dword ptr [esi+0x120]
	call CTabQuickSend::HitTest
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC

 Block10:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x11C]
	push ebp
	push edx
	call CTabSend::HitTest
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC

 Block11:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x118]
	push ebp
	push eax
	call CTabReceive::HitTest

 Block12:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CParcelDlg::DrawMainBg
_SUB_EXCEPTION_HANDLER(28E350)
__SUB_CLASS_THIS(0028E350, __thiscall, 134301,  CParcelDlg, void, const wchar_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28E350
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
	mov ecx,dword ptr [esp+0x1C]
	push 0
	push 0
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x28],0
	call CWnd::GetCanvas
	lea ecx,[esi+0x130]
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CParcelDlg::RemoveParcel
__SUB_CLASS_THIS(0028F6E0, __thiscall, 134281,  CParcelDlg, void, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x118]
	jmp  CTabReceive::RemoveParcel
}
}
// CParcelDlg::OnPacket
_SUB_EXCEPTION_HANDLER(292970)
// 692F24
static uint8_t _SUB_292970_LOOKUP_TABLE_0[20] = {
0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 
2, 3, 4, 5, 
};
__SUB(00292970, __cdecl, 134295,  void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_292970
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
	mov esi,dword ptr [esp+0x5C]
	xor ebp,ebp
	mov ecx,esi
	mov dword ptr [esp+0x14],ebp
	call CInPacket::Decode1
	movzx edi,al
	lea eax,[edi-8]
	cmp eax,0x13
	ja Block48

 Block1:
	movzx eax,byte ptr [eax+_SUB_292970_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block12
cmp EAX, 2
je Block26
cmp EAX, 3
je Block30
cmp EAX, 4
je Block2
cmp EAX, 5
je Block40
cmp EAX, 6
je Block48


 Block2:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebp
	je Block4

 Block3:
	push 0x21000003
	lea ecx,[esp+0x20]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x1C]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0x28],ecx
	call _CxxThrowException

 Block4:
	push 0x158
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x54],ebp
	cmp eax,ebp
	je Block57

 Block5:
	push 1
	mov ecx,eax
	call CParcelDlg::_ctor_0
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block6:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebp
	je Block8

 Block7:
	push 0x21000003
	lea ecx,[esp+0x28]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x24]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x30],eax
	call _CxxThrowException

 Block8:
	mov ecx,esi
	call CInPacket::Decode1
	xor edx,edx
	test al,al
	setne dl
	push 0x158
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov edi,edx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x54],1
	cmp eax,ebp
	je Block10

 Block9:
	neg edi
	sbb edi,edi
	and edi,2
	push edi
	mov ecx,eax
	call CParcelDlg::_ctor_0
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	push esi
	mov ecx,eax
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call CParcelDlg::SetParcelDlg
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block12:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode1
	movzx esi,al
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp eax,ebp
	je Block15

 Block13:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CParcelDlg::ms_RTTI_CParcelDlg
	call edx
	test eax,eax
	je Block15

 Block14:
	mov ebp,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test ebp,ebp
	jne Block16

 Block15:
	push 0x21000003
	lea ecx,[esp+0x30]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x2C]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x34]
	push ecx
	mov dword ptr [esp+0x38],eax
	call _CxxThrowException

 Block16:
	push edi
	mov ecx,ebp
	call CParcelDlg::RemoveParcel
	cmp esi,3
	jne Block18

 Block17:
	lea edx,[esp+0x38]
	push 0xF64
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x54],2
	lea ebx,[esi-2]
	jmp Block19

 Block18:
	lea eax,[esp+0x34]
	push 0xF65
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x54],3
	mov ebx,2

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	add esp,0x14
	mov dword ptr [esp+0x54],2
	test bl,2
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x34]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test bl,1
	je Block25

 Block23:
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	push 1
	mov ecx,ebp
	call CParcelDlg::SetCtrlEnabled
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block26:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp eax,ebp
	je Block57

 Block27:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CParcelDlg::ms_RTTI_CParcelDlg
	call eax
	test eax,eax
	je Block57

 Block28:
	mov edi,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp edi,ebp
	je Block57

 Block29:
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x48],ebp
	call ZRef<PARCEL>::_Alloc
	mov ecx,dword ptr [esp+0x48]
	push esi
	mov dword ptr [esp+0x58],4
	call PARCEL::Decode
	sub esp,8
	lea edx,[esp+0x4C]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call ZRef<PARCEL>::_ctor_copy
	mov ecx,edi
	call CParcelDlg::AddNewParcel
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xF67
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call ZRef<PARCEL>::~ZRef<PARCEL>
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block30:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ebx,5
	mov ecx,esi
	mov dword ptr [esp+0x54],ebx
	call CInPacket::Decode1
	xor edx,edx
	test al,al
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	setne dl
	mov edi,edx
	cmp eax,ebp
	je Block34

 Block31:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CParcelDlg::ms_RTTI_CParcelDlg
	call edx
	test eax,eax
	je Block34

 Block32:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp ecx,ebp
	je Block34

 Block33:
	push ebp
	call CWnd::InvalidateRect
	jmp Block38

 Block34:
	push 0x144
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x54],6
	cmp eax,ebp
	je Block36

 Block35:
	mov ecx,eax
	call CUIFadeYesNo::_ctor_default
	mov esi,eax
	jmp Block37

 Block36:
	xor esi,esi

 Block37:
	push edi
	push ecx
	mov ecx,esp
	lea eax,[esp+0x20]
	mov dword ptr [esp+0x1C],esp
	push eax
	mov byte ptr [esp+0x60],bl
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUIFadeYesNo::CreateParcelAlarm
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::SetNewFadeWnd

 Block38:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block57

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block40:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp eax,ebp
	je Block44

 Block41:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CParcelDlg::ms_RTTI_CParcelDlg
	call eax
	test eax,eax
	je Block44

 Block42:
	mov ecx,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp ecx,ebp
	je Block44

 Block43:
	push ebp
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block44:
	mov ecx,esi
	call CInPacket::Decode1
	xor ecx,ecx
	test al,al
	setne cl
	push 0x144
	mov esi,ecx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x54],7
	cmp eax,ebp
	je Block46

 Block45:
	mov ecx,eax
	call CUIFadeYesNo::_ctor_default
	mov edi,eax
	jmp Block47

 Block46:
	xor edi,edi

 Block47:
	push esi
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x1C],esp
	push ebp
	push offset _S_
	push ebp
	push ebp
	mov ecx,esi
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	mov dword ptr [esi],ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov ecx,edi
	call CUIFadeYesNo::CreateParcelAlarm
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	call CWvsContext::SetNewFadeWnd
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block48:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp eax,ebp
	je Block51

 Block49:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CParcelDlg::ms_RTTI_CParcelDlg
	call eax
	test eax,eax
	je Block51

 Block50:
	mov esi,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp esi,ebp
	jne Block52

 Block51:
	push 0x21000003
	lea ecx,[esp+0x40]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x3C]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x48],ecx
	call _CxxThrowException

 Block52:
	push edi
	call CParcelDlg::NoticeResult
	add esp,4
	push 1
	mov ecx,esi
	call CParcelDlg::SetCtrlEnabled
	cmp edi,0x12
	jne Block57

 Block53:
	mov eax,dword ptr [esi+0x94]
	sub eax,ebp
	je Block56

 Block54:
	sub eax,1
	jne Block57

 Block55:
	mov ecx,esi
	call CParcelDlg::CloseParcelDlg
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block56:
	mov ecx,esi
	call CParcelDlg::ResetSendInfo

 Block57:
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
// CTabQuickSend::CTabQuickSend
_SUB_EXCEPTION_HANDLER(291170)
__SUB_CLASS_THIS(00291170, __thiscall, 134422,  CTabQuickSend, void, CParcelDlg*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_291170
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
	mov dword ptr [esp+0x14],esi
	xor edi,edi
	mov dword ptr [esi+4],edi
	mov eax,dword ptr [esp+0x58]
	lea ecx,[esi+0x28]
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x1C],edi
	mov dword ptr [esi+0x20],1
	mov dword ptr [esi+0x24],eax
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xA70],edi
	lea ebp,[esi+0xA74]
	mov dword ptr [ebp],edi
	mov dword ptr [esi+0xA78],edi
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x54],4
	call ebx
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x54],5
	call ebx
	lea ecx,[esp+0x18]
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
	push edi
	push edi
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push 0x50E
	mov bl,6
	push ecx
	mov byte ptr [esp+0x6C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x64],7
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x4C]
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],8
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x50],bl
	mov ebx,8
	cmp word ptr [esp+0x38],bx
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x38]
	push ecx
	call ebp

 Block13:
	mov byte ptr [esp+0x50],5
	cmp word ptr [esp+0x18],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x18]
	push eax
	call ebp

 Block17:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x28]
	push edx
	call ebp

 Block21:
	mov eax,esi
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
// CParcelDlg::~CParcelDlg
_SUB_EXCEPTION_HANDLER(2909E0)
__SUB_CLASS_THIS0(002909E0, __thiscall, 134271,  CParcelDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2909E0
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
	int 3// TODO: 	mov dword ptr [esi],offset CParcelDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CParcelDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CParcelDlg::`vftable'{for `ZRefCounted'}
	mov edi,dword ptr [esi+0x118]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],0xD
	cmp edi,ebx
	je Block2

 Block1:
	mov ecx,edi
	call CTabReceive::~CTabReceive
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block2:
	mov edi,dword ptr [esi+0x11C]
	cmp edi,ebx
	je Block4

 Block3:
	mov ecx,edi
	call CTabSend::~CTabSend
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block4:
	mov edi,dword ptr [esi+0x120]
	cmp edi,ebx
	je Block6

 Block5:
	mov ecx,edi
	call CTabQuickSend::~CTabQuickSend
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block6:
	lea ecx,[esi+0x144]
	mov byte ptr [esp+0x1C],0xC
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x130]
	mov byte ptr [esp+0x1C],0xB
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0x12C]
	mov byte ptr [esp+0x1C],0xA
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x128]
	mov byte ptr [esp+0x1C],9
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x124]
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea edi,[esi+0x10C]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0x104]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlMLEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0xFC]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 4
	push 8
	lea eax,[esi+0xDC]
	push eax
	mov byte ptr [esp+0x2C],4
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 4
	push 8
	lea ecx,[esi+0xBC]
	push ecx
	mov byte ptr [esp+0x2C],3
	call __eh_vector_dtor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push 2
	push 8
	lea edx,[esi+0xAC]
	push edx
	mov byte ptr [esp+0x2C],2
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xA4]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block20:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block22

 Block21:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block22:
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
// CTabReceive::SetParcel
_SUB_EXCEPTION_HANDLER(292560)
__SUB_CLASS_THIS(00292560, __thiscall, 134253,  CTabReceive, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_292560
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov ecx,dword ptr [esp+0x58]
	call CInPacket::Decode1
	movzx eax,al
	xor ebp,ebp
	cmp eax,ebp
	mov dword ptr [esp+0x24],eax
	jle Block16

 Block1:
	mov dword ptr [esp+0x18],eax

 Block2:
	push ebp
	call ZRefCounted_AllocHelper<ZRefCountedDummy<PARCEL>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x3C],esi
	mov eax,dword ptr [esp+0x58]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x54],ebp
	call PARCEL::Decode
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<ZRef<PARCEL>>::InsertBefore
	mov ebx,eax
	cmp esi,ebp
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [ebx+4]
	cmp eax,ebp
	je Block9

 Block5:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block8

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block8:
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [ebx+4],0
	xor ebp,ebp

 Block9:
	mov dword ptr [ebx+4],esi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp esi,ebp
	je Block14

 Block10:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x3C],ebp

 Block14:
	sub dword ptr [esp+0x18],1
	jne Block2

 Block15:
	mov eax,dword ptr [esp+0x24]

 Block16:
	mov esi,dword ptr [edi+0xC]
	cmp dword ptr [esi+0x94],2
	je Block19

 Block17:
	cmp eax,ebp
	jne Block19

 Block18:
	mov ebx,1
	jmp Block20

 Block19:
	xor ebx,ebx

 Block20:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,ebp
	je Block23

 Block21:
	lea ecx,[eax+0x2038]
	call TSecType<unsigned char>::GetData
	test al,0x20
	je Block23

 Block22:
	mov dword ptr [esi+0xA0],ebx
	push ebx
	jmp Block24

 Block23:
	mov dword ptr [esi+0xA0],ebp
	push ebp

 Block24:
	mov ecx,dword ptr [esi+0x9C]
	call CCtrlTab::SetTab
	mov eax,dword ptr [edi]
	cmp eax,ebp
	jne Block26

 Block25:
	xor eax,eax
	jmp Block27

 Block26:
	mov eax,dword ptr [eax-4]

 Block27:
	mov ecx,dword ptr [edi+8]
	push ecx
	mov ecx,dword ptr [edi+0xC]
	push eax
	call CParcelDlg::SetScrollBar
	mov ecx,dword ptr [esp+0x58]
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebp
	jle Block57

 Block28:
	mov dword ptr [esp+0x24],eax
	mov bl,9

 Block29:
	push ebp
	call ZRefCounted_AllocHelper<ZRefCountedDummy<PARCEL>>::call
	mov ecx,1
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],ecx
	mov dword ptr [esp+0x44],esi
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [esp+0x50],ecx
	push edx
	mov ecx,esi
	call PARCEL::Decode
	lea eax,[esp+0x28]
	push 0xF50
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [eax]
	lea ecx,[esi+4]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x5C],3
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],5
	cmp eax,ebp
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x50],6
	cmp eax,ebp
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	cmp dword ptr [esi+0x11],ebp
	je Block41

 Block34:
	lea eax,[esp+0x2C]
	push 0xF51
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebp
	mov ecx,dword ptr [esi+0x11]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x5C],8
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	cmp eax,ebp
	je Block36

 Block35:
	mov ecx,dword ptr [eax-4]
	jmp Block37

 Block36:
	xor ecx,ecx

 Block37:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],7
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x50],6
	cmp eax,ebp
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	cmp dword ptr [esi+0xEE],ebp
	je Block51

 Block42:
	mov eax,dword ptr [esi+0xEE]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x38]
	push eax
	call CItemInfo::GetItemName
	mov edi,eax
	lea ecx,[esp+0x30]
	push 0xF52
	push ecx
	mov byte ptr [esp+0x58],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x20],ebp
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x5C],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	cmp eax,ebp
	je Block44

 Block43:
	mov ecx,dword ptr [eax-4]
	jmp Block45

 Block44:
	xor ecx,ecx

 Block45:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],0xA
	cmp eax,ebp
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x50],bl
	cmp eax,ebp
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x50],6
	cmp eax,ebp
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x4C],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x50],1
	cmp eax,ebp
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block56

 Block54:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block56

 Block55:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block56:
	sub dword ptr [esp+0x24],1
	mov dword ptr [esp+0x44],ebp
	jne Block29

 Block57:
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
// CParcelDlg::OnChildNotify
__SUB_CLASS_THIS(0028E2B0, __thiscall, 134274,  CParcelDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x7D3
	jne Block4

 Block1:
	cmp ebx,0x384
	jne Block11

 Block2:
	cmp dword ptr [esi+0xA0],2
	jne Block13

 Block3:
	mov eax,dword ptr [esi+0x120]
	push 0
	mov dword ptr [eax+0x1C],1
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block4:
	cmp edi,0x7D1
	jne Block7

 Block5:
	cmp ebx,0x1F4
	jne Block11

 Block6:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	mov ecx,esi
	call CParcelDlg::OnTabChanged
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block7:
	cmp edi,0x7D4
	jne Block11

 Block8:
	cmp ebx,0x12C
	jb Block11

 Block9:
	cmp ebx,0x130
	ja Block11

 Block10:
	push 0
	call CWnd::InvalidateRect

 Block11:
	cmp ebx,0x64
	jne Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push edi
	mov ecx,esi
	call eax

 Block13:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CParcelDlg::OnTabChanged
__SUB_CLASS_THIS(0028E240, __thiscall, 134281,  CParcelDlg, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x94]
	sub eax,0
	mov ecx,dword ptr [esp+8]
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov dword ptr [esi+0xA0],eax
	jmp Block6

 Block4:
	mov dword ptr [esi+0xA0],2
	jmp Block6

 Block5:
	mov dword ptr [esi+0xA0],ecx

 Block6:
	cmp ecx,2
	je Block8

 Block7:
	test ecx,ecx
	jne Block9

 Block8:
	mov ecx,dword ptr [esi+0x108]
	push offset _S_
	call CCtrlMLEdit::SetText

 Block9:
	mov ecx,esi
	call CParcelDlg::SetCtrl
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CTabQuickSend::Draw
_SUB_EXCEPTION_HANDLER(294190)
__SUB_CLASS_THIS(00294190, __thiscall, 134425,  CTabQuickSend, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_294190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov ecx,dword ptr [ebp+0x24]
	push offset _S_UIUIWINDOW2IMGDE__19
	mov dword ptr [esp+0x4C],0
	call CParcelDlg::DrawMainBg
	cmp dword ptr [ebp+0x20],0
	je Block2

 Block1:
	mov ecx,dword ptr [ebp+0x24]
	push offset _S_UIUIWINDOW2IMGDE__18
	call CParcelDlg::DrawSubBg

 Block2:
	mov eax,dword ptr [ebp+0xA78]
	mov ebx,2
	test eax,eax
	je Block16

 Block3:
	cmp byte ptr [eax],0
	je Block16

 Block4:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
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
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],0xFF
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [ebp+0xA70]
	lea ecx,[esp+0x24]
	push ecx
	push eax
	mov eax,dword ptr [ebp+0xA78]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x5C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],3
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push 0xD2
	push 0x88
	mov byte ptr [esp+0x60],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],si
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],si
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block73

 Block17:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push ebx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x105
	mov esi,eax
	push 0x77
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x48],esp
	test eax,eax
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block19:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [ebp+4]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_treat_singly_0
	add esp,4
	test eax,eax
	jne Block25

 Block20:
	push eax
	mov eax,dword ptr [ebp+0xA74]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [ebp+0x14]
	push eax
	push 0xF9
	push 0x77
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x34],esp
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block24:
	call draw_number_by_image
	add esp,0x18

 Block25:
	push esi
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push 0x72
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x18
	push edx
	mov byte ptr [esp+0x58],4
	call get_basic_font
	lea eax,[esp+0x28]
	add esp,8
	push eax
	call format_string_1
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x20]
	push ecx
	call ebx
	lea edx,[esp+0x20]
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
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],5
	call ebx
	lea ecx,[esp+0x30]
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
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x1C]
	push 0x18
	push ecx
	mov byte ptr [esp+0x58],6
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,7
	push edx
	mov byte ptr [esp+0x5C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],8
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	push 0xE8
	push 0xA2
	mov byte ptr [esp+0x60],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],6
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov ebx,8
	mov byte ptr [esp+0x48],5
	cmp word ptr [esp+0x30],bx
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov byte ptr [esp+0x48],4
	cmp word ptr [esp+0x20],bx
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov dword ptr [esp+0x14],0
	lea ecx,[esp+0x10]
	push 6
	push ecx
	mov byte ptr [esp+0x50],9
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	mov byte ptr [esp+0x4C],0xA
	call CItemInfo::GetRequiredLEV
	mov esi,eax
	test esi,esi
	je Block44

 Block42:
	lea edx,[esp+0x1C]
	push 0xF55
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x54],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x48],0xA
	test eax,eax
	je Block53

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block53

 Block44:
	lea ecx,[esp+0x1C]
	push 0xF56
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x4C],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],0xA
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	lea edx,[esp+0x1C]
	push 0x18
	push edx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x18]
	add esp,8
	cmp ecx,eax
	je Block51

 Block47:
	mov esi,ecx
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block49:
	test esi,esi
	je Block51

 Block50:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block51:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block53:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],0xD
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov ecx,dword ptr [esp+0x10]
	mov esi,dword ptr [esp+0x14]
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0xE
	push esi
	mov byte ptr [esp+0x5C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],0xF
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	push 0xFB
	push 0xA2
	mov byte ptr [esp+0x60],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x48],0xD
	cmp word ptr [esp+0x30],bx
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0x48],0xA
	cmp word ptr [esp+0x20],bx
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x48],9
	test eax,eax
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	mov byte ptr [esp+0x48],4
	test esi,esi
	je Block71

 Block70:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	cmp dword ptr [ebp+0x1C],0
	jne Block75

 Block74:
	mov ecx,dword ptr [ebp+0x24]
	push offset _S_UIUIWINDOW2IMGDE__17
	call CParcelDlg::DrawMainBg

 Block75:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 4
}
}
// CParcelDlg::SetMemo
_SUB_EXCEPTION_HANDLER(28F170)
__SUB_CLASS_THIS(0028F170, __thiscall, 134285,  CParcelDlg, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28F170
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
	mov ecx,dword ptr [esi+0x108]
	push eax
	mov dword ptr [esp+0x14],0
	call CCtrlMLEdit::SetText
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CTabReceive::RemoveParcel
__SUB_CLASS_THIS(0028F2E0, __thiscall, 134254,  CTabReceive, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	xor esi,esi
	call ZArray<ZRef<PARCEL>>::GetCount
	test eax,eax
	jbe Block5

 Block1:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esp+0xC]
	add ecx,4
	push ebx
	lea esp,[esp]

 Block2:
	mov ebx,dword ptr [ecx]
	cmp dword ptr [ebx],edx
	je Block4

 Block3:
	inc esi
	add ecx,8
	cmp esi,eax
	jb Block2

 Block4:
	pop ebx

 Block5:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block10

 Block6:
	cmp esi,dword ptr [eax-4]
	jae Block10

 Block7:
	lea eax,[eax+esi*8]
	push eax
	mov ecx,edi
	call ZArray<ZRef<PARCEL>>::RemoveAt
	mov eax,dword ptr [edi]
	mov dword ptr [edi+4],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]

 Block9:
	mov ecx,dword ptr [edi+8]
	push ecx
	mov ecx,dword ptr [edi+0xC]
	push eax
	call CParcelDlg::SetScrollBar
	mov ecx,dword ptr [edi+0xC]
	push 0
	call CWnd::InvalidateRect

 Block10:
	pop edi
	pop esi
	ret 4
}
}
// CTabReceive::OnMouseMove
__SUB_CLASS_THIS(0028E0D0, __thiscall, 134252,  CTabReceive, void, long, long) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	lea eax,[ebp-0x30]
	push esi
	mov esi,ecx
	cmp eax,0x22
	ja Block10

 Block1:
	mov ebx,dword ptr [esp+0x14]
	lea ecx,[ebx-0x160]
	cmp ecx,0x22
	ja Block10

 Block2:
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	jl Block10

 Block3:
	cmp ecx,0xA
	jge Block10

 Block4:
	mov eax,dword ptr [esi]
	test eax,eax
	jne Block6

 Block5:
	xor edx,edx
	jmp Block7

 Block6:
	mov edx,dword ptr [eax-4]

 Block7:
	cmp ecx,edx
	jae Block10

 Block8:
	mov edx,dword ptr [eax+ecx*8+4]
	mov edx,dword ptr [edx+0xEE]
	test edx,edx
	je Block10

 Block9:
	mov eax,dword ptr [esi+0xC]
	push edi
	push 0
	push 0
	push 0
	push 0
	lea ecx,[eax+4]
	lea edi,[eax+4]
	mov eax,dword ptr [ecx]
	push 0
	push edx
	mov edx,dword ptr [eax+0x30]
	call edx
	mov edx,dword ptr [edi]
	lea eax,[eax+ebx+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x10]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block10:
	lea ecx,[esi+0x10]
	call CUIToolTip::ClearToolTip
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CParcelDlg::GetRTTI
__SUB_CLASS_THIS0(00290990, __thiscall, 134298,  CParcelDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CParcelDlg::ms_RTTI_CParcelDlg
	ret
}
}
// CParcelDlg::OnKey
__SUB_CLASS_THIS(00290D60, __thiscall, 134278,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x110],0
	jne Block5

 Block1:
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [esp+4]
	test edx,edx
	js Block10

 Block2:
	cmp eax,0xD
	je Block6

 Block3:
	cmp eax,0x1B
	jne Block10

 Block4:
	add ecx,0xFFFFFFFC
	call CParcelDlg::CloseParcelDlg

 Block5:
	ret 8

 Block6:
	mov eax,dword ptr [ecx+0x9C]
	sub eax,0
	je Block9

 Block7:
	sub eax,1
	jne Block5

 Block8:
	mov ecx,dword ptr [ecx+0x118]
	call CTabSend::SendParcel
	ret 8

 Block9:
	mov ecx,dword ptr [ecx+0x114]
	call CTabReceive::ReceiveParcel
	ret 8

 Block10:
	mov dword ptr [esp+8],edx
	mov dword ptr [esp+4],eax
	jmp  CDialog::OnKey
}
}
// CParcelDlg::OnMouseButton
__SUB_CLASS_THIS(002924F0, __thiscall, 134276,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	jne Block7

 Block1:
	mov eax,dword ptr [ecx+0x9C]
	sub eax,0
	je Block6

 Block2:
	sub eax,1
	je Block5

 Block3:
	sub eax,1
	jne Block7

 Block4:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [ecx+0x11C]
	push eax
	push edx
	call CTabQuickSend::OnMouseLButtonClk
	ret 0x10

 Block5:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [ecx+0x118]
	push eax
	push edx
	call CTabSend::OnMouseLButtonClk
	ret 0x10

 Block6:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [ecx+0x114]
	push eax
	push edx
	call CTabReceive::OnMouseLButtonClk

 Block7:
	ret 0x10
}
}
// CTabSend::Draw
_SUB_EXCEPTION_HANDLER(2947B0)
__SUB_CLASS_THIS(002947B0, __thiscall, 134407,  CTabSend, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2947B0
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
	mov esi,ecx
	mov ecx,dword ptr [esi+0x1C]
	push offset _S_UIUIWINDOW2IMGDE__21
	mov dword ptr [esp+0x4C],0
	call CParcelDlg::DrawMainBg
	cmp dword ptr [esi+0x18],0
	je Block2

 Block1:
	mov ecx,dword ptr [esi+0x1C]
	push offset _S_UIUIWINDOW2IMGDE__20
	call CParcelDlg::DrawSubBg

 Block2:
	mov eax,dword ptr [esi+0xA70]
	mov ebx,2
	test eax,eax
	je Block16

 Block3:
	cmp byte ptr [eax],0
	je Block16

 Block4:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
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
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],0xFF
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [esi+0xA68]
	lea ecx,[esp+0x24]
	push ecx
	push eax
	mov eax,dword ptr [esi+0xA70]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x5C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],3
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push 0xD2
	push 0x88
	mov byte ptr [esp+0x60],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],di
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],di
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block73

 Block17:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push ebx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x105
	mov edi,eax
	push 0x77
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x48],esp
	test eax,eax
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block19:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [esi+4]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_treat_singly_0
	add esp,4
	test eax,eax
	jne Block25

 Block20:
	push eax
	mov eax,dword ptr [esi+0xA6C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esi+0x10]
	push eax
	push 0xF9
	push 0x77
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x34],esp
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block24:
	call draw_number_by_image
	add esp,0x18

 Block25:
	push edi
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push 0x72
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x18
	push edx
	mov byte ptr [esp+0x58],4
	call get_basic_font
	lea eax,[esp+0x28]
	add esp,8
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x20]
	push ecx
	call esi
	lea edx,[esp+0x20]
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
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],5
	call esi
	lea ecx,[esp+0x30]
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
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x1C]
	push 0x18
	push ecx
	mov byte ptr [esp+0x58],6
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,7
	push edx
	mov byte ptr [esp+0x5C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],8
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	push 0xE8
	push 0xA2
	mov byte ptr [esp+0x60],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],6
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov esi,8
	mov byte ptr [esp+0x48],5
	cmp word ptr [esp+0x30],si
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov byte ptr [esp+0x48],4
	cmp word ptr [esp+0x20],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov dword ptr [esp+0x14],0
	lea ecx,[esp+0x10]
	push 6
	push ecx
	mov byte ptr [esp+0x50],9
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	mov byte ptr [esp+0x4C],0xA
	call CItemInfo::GetRequiredLEV
	mov esi,eax
	test esi,esi
	je Block44

 Block42:
	lea edx,[esp+0x1C]
	push 0xF55
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x54],0xB
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x48],0xA
	test eax,eax
	je Block53

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block53

 Block44:
	lea ecx,[esp+0x1C]
	push 0xF56
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x4C],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],0xA
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	lea edx,[esp+0x1C]
	push 0x18
	push edx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x18]
	add esp,8
	cmp ecx,eax
	je Block51

 Block47:
	mov esi,ecx
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block49:
	test esi,esi
	je Block51

 Block50:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block51:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block53:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],0xD
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov ecx,dword ptr [esp+0x10]
	mov esi,dword ptr [esp+0x14]
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0xE
	push esi
	mov byte ptr [esp+0x5C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],0xF
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	push 0xFB
	push 0xA2
	mov byte ptr [esp+0x60],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x48],0xD
	cmp word ptr [esp+0x30],di
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0x48],0xA
	cmp word ptr [esp+0x20],di
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x48],9
	test eax,eax
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	mov byte ptr [esp+0x48],4
	test esi,esi
	je Block71

 Block70:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block73:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 4
}
}
// CParcelDlg::AddNewParcel
_SUB_EXCEPTION_HANDLER(28F720)
__SUB_CLASS_THIS(0028F720, __thiscall, 134287,  CParcelDlg, void, NakedParam<ZRef<PARCEL>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28F720
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
	mov ecx,dword ptr [esp+0x28]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x18],esp
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ebx

 Block2:
	mov ecx,dword ptr [esi+0x118]
	call CTabReceive::AddNewParcel
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block6

 Block3:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push edi
	call ebx
	test esi,esi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
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
// CParcelDlg::CloseParcelDlg
_SUB_EXCEPTION_HANDLER(28EF40)
__SUB_CLASS_THIS0(0028EF40, __thiscall, 134271,  CParcelDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28EF40
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
	push 0x46
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 7
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 2
	mov ecx,esi
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
// CTabQuickSend::ToggleTaxInfo
__SUB_CLASS_THIS0(0028E170, __thiscall, 134424,  CTabQuickSend, void) {
__asm {

 Block0:
	xor eax,eax
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x20],eax
	mov ecx,dword ptr [esi+0x24]
	sete al
	mov dword ptr [esi+0x20],eax
	call CParcelDlg::SetCtrl
	mov ecx,dword ptr [esi+0x24]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CParcelDlg::SetParcelDlg
__SUB_CLASS_THIS(00292960, __thiscall, 134280,  CParcelDlg, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x118]
	jmp  CTabReceive::SetParcel
}
}
// CTabQuickSend::HitTest
__SUB_CLASS_THIS(0028D840, __thiscall, 134426,  CTabQuickSend, int32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x20],0
	mov eax,dword ptr [esp+8]
	jne Block3

 Block1:
	cmp eax,0x15E
	jle Block3

 Block2:
	xor eax,eax
	ret 8

 Block3:
	mov ecx,dword ptr [esp+4]
	lea edx,[ecx-0x79]
	cmp edx,0x22
	ja Block6

 Block4:
	cmp eax,0xFC
	jl Block6

 Block5:
	cmp eax,0x11E
	jle Block11

 Block6:
	lea edx,[ecx-0x5F]
	cmp edx,0xA9
	ja Block9

 Block7:
	cmp eax,0x73
	jl Block9

 Block8:
	cmp eax,0xB7
	jle Block11

 Block9:
	add ecx,0xFFFFFF77
	cmp ecx,0x90
	ja Block12

 Block10:
	add eax,0xFFFFFF18
	cmp eax,0xF
	ja Block12

 Block11:
	mov eax,2
	ret 8

 Block12:
	mov eax,1
	ret 8
}
}
// CParcelDlg::DrawSubBg
_SUB_EXCEPTION_HANDLER(292F40)
__SUB_CLASS_THIS(00292F40, __thiscall, 134301,  CParcelDlg, void, const wchar_t*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_292F40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov edi,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],0
	test edi,edi
	je Block4

 Block1:
	mov eax,edi
	lea edx,[eax+2]

 Block2:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block2

 Block3:
	sub eax,edx
	sar eax,1
	mov esi,eax
	lea eax,[esi+esi]
	push eax
	push edi
	push 0
	push esi
	lea ecx,[ebp-0x14]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp-0x14]
	call ZXString16::ReleaseBuffer

 Block4:
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,ebx
	mov dword ptr [ebp-4],0
	call CWnd::GetCanvas
	mov esi,dword ptr [ebp-0x20]
	push 0
	push 0
	push edi
	push ecx
	mov eax,esp
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block6:
	add ebx,0x144
	mov ecx,ebx
	mov dword ptr [ebp-0x1C],ebx
	call CLayoutMan::CopyToCanvas_1
	test eax,eax
	je Block15

 Block7:
	mov edi,2
	jmp Block9

 Block8:
	mov ebx,dword ptr [ebp-0x1C]

 Block9:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,0xC
	push eax
	lea ecx,[ebp-0x18]
	push ecx
	lea ecx,[ebp-0x14]
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov eax,esp
	mov byte ptr [ebp-4],2
	mov dword ptr [ebp-0x24],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block11:
	mov ecx,ebx
	call CLayoutMan::CopyToCanvas_1
	test eax,eax
	mov eax,dword ptr [ebp-0x18]
	sete bl
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	test bl,bl
	jne Block20

 Block14:
	inc edi
	cmp edi,5
	jl Block8

 Block15:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block17

 Block16:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block17:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	lea esp,[ebp-0x34]
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

 Block20:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block17

 Block21:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block17
}
}
// CTabSend::CTabSend
_SUB_EXCEPTION_HANDLER(28FF50)
__SUB_CLASS_THIS(0028FF50, __thiscall, 134404,  CTabSend, void, CParcelDlg*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28FF50
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
	mov dword ptr [esp+0x14],esi
	xor edi,edi
	mov dword ptr [esi+4],edi
	mov eax,dword ptr [esp+0x58]
	lea ecx,[esi+0x20]
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x18],1
	mov dword ptr [esi+0x1C],eax
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xA68],edi
	lea ebp,[esi+0xA6C]
	mov dword ptr [ebp],edi
	mov dword ptr [esi+0xA70],edi
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x54],4
	call ebx
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x54],5
	call ebx
	lea ecx,[esp+0x18]
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
	push edi
	push edi
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push 0x50E
	mov bl,6
	push ecx
	mov byte ptr [esp+0x6C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x64],7
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x4C]
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],8
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x50],bl
	mov ebx,8
	cmp word ptr [esp+0x38],bx
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x38]
	push ecx
	call ebp

 Block13:
	mov byte ptr [esp+0x50],5
	cmp word ptr [esp+0x18],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x18]
	push eax
	call ebp

 Block17:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x28],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x28]
	push edx
	call ebp

 Block21:
	mov eax,esi
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
// CTabSend::~CTabSend
_SUB_EXCEPTION_HANDLER(28E860)
__SUB_CLASS_THIS0(0028E860, __thiscall, 134406,  CTabSend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28E860
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
	mov eax,dword ptr [esi+0xA70]
	mov dword ptr [esp+0x14],3
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xA6C]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xA68]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea ecx,[esi+0x20]
	mov byte ptr [esp+0x14],0
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block11

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block10

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block10:
	mov dword ptr [esi+4],0

 Block11:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTabSend::ResetSendInfo
__SUB_CLASS_THIS0(0028EE50, __thiscall, 134406,  CTabSend, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push edi
	xor edi,edi
	cmp eax,edi
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	cmp ecx,edi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esi+4],edi

 Block5:
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+8],edi
	mov eax,dword ptr [esi+0xA70]
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0xA70],edi

 Block7:
	mov ecx,dword ptr [esi+0x1C]
	mov ecx,dword ptr [ecx+0x100]
	push edi
	call CCtrlEdit::SetText
	pop edi
	pop esi
	ret
}
}
// CParcelDlg::Draw
_SUB_EXCEPTION_HANDLER(294DB0)
__SUB_CLASS_THIS(00294DB0, __thiscall, 134272,  CParcelDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_294DB0
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
	mov edi,ecx
	lea eax,[esp+0xC]
	push eax
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+0x18],0
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x21D
	push 0x122
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x20]
	push eax
	mov ecx,edi
	call CWnd::Draw
	mov eax,dword ptr [edi+0xA0]
	sub eax,0
	je Block9

 Block5:
	sub eax,1
	je Block8

 Block6:
	sub eax,1
	jne Block10

 Block7:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x24],esp
	push esi
	call edx
	mov ecx,dword ptr [edi+0x120]
	call CTabQuickSend::Draw
	jmp Block10

 Block8:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x24],esp
	push esi
	call ecx
	mov ecx,dword ptr [edi+0x11C]
	call CTabSend::Draw
	jmp Block10

 Block9:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x24],esp
	push esi
	call eax
	mov ecx,dword ptr [edi+0x118]
	call CTabReceive::Draw

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CTabSend::OnMouseLButtonClk
__SUB_CLASS_THIS(00291400, __thiscall, 134408,  CTabSend, int32_t, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push edi
	mov edi,dword ptr [esp+0x10]
	test eax,eax
	je Block5

 Block1:
	lea eax,[edi-0x76]
	cmp eax,0x22
	ja Block5

 Block2:
	lea ecx,[ebp-0xE4]
	cmp ecx,0x22
	ja Block5

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xF5D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block8

 Block4:
	push 0
	mov ecx,esi
	call ZRef<GW_ItemSlotBase>::op_assign_zero
	mov ecx,dword ptr [esi+0x1C]
	push 0
	mov dword ptr [esi+8],0
	mov dword ptr [esi+0xC],0
	call CWnd::InvalidateRect

 Block5:
	add edi,0xFFFFFF79
	cmp edi,0x8E
	ja Block8

 Block6:
	add ebp,0xFFFFFF30
	cmp ebp,0xD
	ja Block8

 Block7:
	mov ecx,esi
	call CTabSend::SetMoney

 Block8:
	pop edi
	pop esi
	xor eax,eax
	pop ebp
	ret 8
}
}
// CTabSend::OnMouseMove
__SUB_CLASS_THIS(0028DA70, __thiscall, 134409,  CTabSend, void, long, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	cmp dword ptr [esi+4],0
	je Block4

 Block1:
	mov ebp,dword ptr [esp+0x10]
	lea eax,[ebp-0x76]
	cmp eax,0x22
	ja Block4

 Block2:
	mov ebx,dword ptr [esp+0x14]
	lea ecx,[ebx-0xE4]
	cmp ecx,0x22
	ja Block4

 Block3:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push edi
	push 5
	call CInputSystem::SetCursorState
	mov ecx,dword ptr [esi+0x1C]
	mov edx,dword ptr [esi+0x1C]
	mov eax,dword ptr [esi+4]
	push 0
	push 0
	push 0
	push 0
	add ecx,4
	lea edi,[edx+4]
	mov edx,dword ptr [ecx]
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	call eax
	mov edx,dword ptr [edi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,edi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x20]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block4:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0
	call CInputSystem::SetCursorState
	lea ecx,[esi+0x20]
	call CUIToolTip::ClearToolTip
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CParcelDlg::SetScrollBar
__SUB_CLASS_THIS(0028DE90, __thiscall, 134284,  CParcelDlg, void, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x110]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	push edi
	call edx
	mov ecx,dword ptr [esi+0x110]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0x4E
	push 0xBB
	push 0x10C
	push 8
	push 1
	push 0x7D4
	push esi
	call edx
	mov edi,dword ptr [esp+0xC]
	cmp edi,3
	mov eax,dword ptr [esi+0x110]
	mov dword ptr [eax+0x34],0xFA
	jg Block2

 Block1:
	push 0
	jmp Block3

 Block2:
	lea ecx,[edi-2]
	push ecx

 Block3:
	mov ecx,dword ptr [esi+0x110]
	call CCtrlScrollBar::SetScrollRange
	mov ecx,dword ptr [esp+0x10]
	lea eax,[edi-1]
	cmp ecx,eax
	jge Block5

 Block4:
	mov eax,ecx

 Block5:
	mov ecx,dword ptr [esi+0x110]
	push eax
	call CCtrlScrollBar::SetCurPos
	pop edi
	pop esi
	ret 8
}
}
// CTabQuickSend::~CTabQuickSend
_SUB_EXCEPTION_HANDLER(28E940)
__SUB_CLASS_THIS0(0028E940, __thiscall, 134424,  CTabQuickSend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28E940
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
	mov eax,dword ptr [esi+0xA78]
	mov dword ptr [esp+0x14],3
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xA74]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xA70]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea ecx,[esi+0x28]
	mov byte ptr [esp+0x14],0
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block11

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block10

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block10:
	mov dword ptr [esi+4],0

 Block11:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTabQuickSend::SendQuickDelivery
_SUB_EXCEPTION_HANDLER(28F7D0)
__SUB_CLASS_THIS0(0028F7D0, __thiscall, 134424,  CTabQuickSend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28F7D0
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
	xor ebx,ebx
	cmp dword ptr [esi+0x10],ebx
	jne Block3

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0x515450
	call CWvsContext::IsExist
	mov dword ptr [esi+0x10],eax
	cmp eax,ebx
	jne Block3

 Block2:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0xF5E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block3:
	cmp dword ptr [esi+4],ebx
	jne Block6

 Block4:
	cmp dword ptr [esi+0x18],ebx
	jne Block6

 Block5:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0xF5F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block6:
	mov edx,dword ptr [esi+0x24]
	mov ecx,dword ptr [edx+0x100]
	lea eax,[esp+0x20]
	push eax
	call CCtrlEdit::GetText
	mov ebp,dword ptr [esp+0x20]
	mov dword ptr [esp+0x44],ebx
	cmp ebp,ebx
	je Block8

 Block7:
	cmp byte ptr [ebp],bl
	jne Block10

 Block8:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0xF60
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp ebp,ebx
	je Block24

 Block9:
	jmp Block23

 Block10:
	mov edx,dword ptr [esi+0x24]
	mov ecx,dword ptr [edx+0x108]
	lea eax,[esp+0x14]
	push eax
	call CCtrlMLEdit::GetText
	push ebx
	push ebx
	push 1
	push 0x400
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x54],1
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	cmp edi,ebx
	jne Block12

 Block11:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x11D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block20

 Block12:
	lea edx,[esp+0x24]
	push 0xF61
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x1C],ebx
	mov edi,dword ptr [eax]
	mov eax,dword ptr [esi+0x18]
	push eax
	mov byte ptr [esp+0x48],3
	call GetParcelTax
	push eax
	lea ecx,[esp+0x24]
	push edi
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x44],5
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x44],6
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x2C]
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block18

 Block17:
	push 0x46
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x48],7
	call COutPacket::Encode1
	movzx eax,byte ptr [esi+8]
	push eax
	lea ecx,[esp+0x30]
	call COutPacket::Encode1
	movzx ecx,word ptr [esi+0xC]
	push ecx
	lea ecx,[esp+0x30]
	call COutPacket::Encode2
	movzx edx,word ptr [esi+0x14]
	push edx
	lea ecx,[esp+0x30]
	call COutPacket::Encode2
	mov eax,dword ptr [esi+0x18]
	push eax
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x30]
	call COutPacket::EncodeStr
	push 1
	lea ecx,[esp+0x30]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x30]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [esi+0x10]
	push ecx
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esi+0x24]
	push ebx
	call CParcelDlg::SetCtrlEnabled
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x44],6
	call ZArray<unsigned char>::RemoveAll

 Block18:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],1
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov dword ptr [esp+0x44],0xFFFFFFFF

 Block23:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
// CTabQuickSend::OnMouseLButtonClk
__SUB_CLASS_THIS(00291360, __thiscall, 134426,  CTabQuickSend, int32_t, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push edi
	mov edi,dword ptr [esp+0x10]
	test eax,eax
	je Block5

 Block1:
	lea eax,[edi-0x76]
	cmp eax,0x22
	ja Block5

 Block2:
	lea ecx,[ebp-0xE4]
	cmp ecx,0x22
	ja Block5

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0xF5D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block8

 Block4:
	push 0
	mov ecx,esi
	call ZRef<GW_ItemSlotBase>::op_assign_zero
	mov ecx,dword ptr [esi+0x24]
	push 0
	mov dword ptr [esi+8],0
	mov dword ptr [esi+0xC],0
	call CWnd::InvalidateRect

 Block5:
	add edi,0xFFFFFF79
	cmp edi,0x8E
	ja Block8

 Block6:
	add ebp,0xFFFFFF30
	cmp ebp,0xD
	ja Block8

 Block7:
	mov ecx,esi
	call CTabQuickSend::SetMoney

 Block8:
	pop edi
	pop esi
	xor eax,eax
	pop ebp
	ret 8
}
}
// CTabSend::HitTest
__SUB_CLASS_THIS(0028D8B0, __thiscall, 134408,  CTabSend, int32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x18],0
	mov eax,dword ptr [esp+8]
	jne Block3

 Block1:
	cmp eax,0x15E
	jle Block3

 Block2:
	xor eax,eax
	ret 8

 Block3:
	mov ecx,dword ptr [esp+4]
	lea edx,[ecx-0x79]
	cmp edx,0x22
	ja Block6

 Block4:
	cmp eax,0xFC
	jl Block6

 Block5:
	cmp eax,0x11E
	jle Block8

 Block6:
	add ecx,0xFFFFFF77
	cmp ecx,0x90
	ja Block9

 Block7:
	add eax,0xFFFFFF18
	cmp eax,0xF
	ja Block9

 Block8:
	mov eax,2
	ret 8

 Block9:
	mov eax,1
	ret 8
}
}
// CTabReceive::~CTabReceive
_SUB_EXCEPTION_HANDLER(28F240)
__SUB_CLASS_THIS0(0028F240, __thiscall, 134249,  CTabReceive, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28F240
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
	mov eax,dword ptr [esi+0xA5C]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xA58]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0x10]
	call CUIToolTip::~CUIToolTip
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<ZRef<PARCEL>>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTabQuickSend::SetMoney
_SUB_EXCEPTION_HANDLER(28FB30)
__SUB_CLASS_THIS0(0028FB30, __thiscall, 134424,  CTabQuickSend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28FB30
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
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x20],0

 Block5:
	mov ecx,dword ptr [ebx+0xBD]
	push ecx
	lea edx,[ebx+0xB5]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,eax
	mov dword ptr [esp+0x1C],ebp
	fild dword ptr [esp+0x1C]
	fld qword ptr [__real_3ff0a3d70a3d70a4]
	add esp,8
	fdivr st,st(1)
	fld qword ptr [__real_416312d000000000]
	fcom
	fnstsw ax
	test ah,0x41
	jp Block7

 Block6:
	fstp st(2)
	fstp st(1)
	call __ftol2_sse
	mov ebp,eax
	jmp Block20

 Block7:
	fstp st(1)
	fld st(1)
	fdiv qword ptr [__real_3ff07ae147ae147b]
	fcom
	fnstsw ax
	fstp st(1)
	fld qword ptr [__real_415312d000000000]
	test ah,5
	jp Block10

 Block8:
	fcom
	fnstsw ax
	test ah,0x41
	jp Block10

 Block9:
	fstp st(2)
	fstp st(1)
	call __ftol2_sse
	mov ebp,eax
	jmp Block20

 Block10:
	fstp st(1)
	fld st(1)
	fdiv qword ptr [__real_3ff051eb851eb852]
	fcom
	fnstsw ax
	fstp st(1)
	fld qword ptr [__real_412e848000000000]
	test ah,5
	jp Block13

 Block11:
	fcom
	fnstsw ax
	test ah,0x41
	jp Block13

 Block12:
	fstp st(2)
	fstp st(1)
	call __ftol2_sse
	mov ebp,eax
	jmp Block20

 Block13:
	fstp st(1)
	fld st(1)
	fdiv qword ptr [__real_3ff028f5c28f5c29]
	fcom
	fnstsw ax
	fstp st(1)
	fld qword ptr [__real_40f86a0000000000]
	test ah,5
	jp Block16

 Block14:
	fcom
	fnstsw ax
	test ah,0x41
	jp Block16

 Block15:
	fstp st(2)
	fstp st(1)
	call __ftol2_sse
	mov ebp,eax
	jmp Block20

 Block16:
	fstp st(1)
	fxch
	fdiv qword ptr [__real_3ff0147ae147ae14]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block19

 Block17:
	fld qword ptr [__real_40e86a0000000000]
	fcomp
	fnstsw ax
	test ah,0x41
	jp Block19

 Block18:
	call __ftol2_sse
	mov ebp,eax
	jmp Block20

 Block19:
	fstp st(0)

 Block20:
	cmp ebp,0x5F5E100
	jl Block22

 Block21:
	mov ebp,0x5F5E100

 Block22:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	xor esi,esi
	mov dword ptr [esp+0x34],esi
	cmp eax,esi
	je Block30

 Block23:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,esi
	je Block30

 Block24:
	add eax,8
	cmp eax,esi
	je Block30

 Block25:
	lea esi,[eax-8]
	mov dword ptr [esp+0x28],esi
	test esi,esi
	je Block27

 Block26:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	push 0
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1AB
	push ecx
	mov dword ptr [esp+0x48],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0xA
	push 0
	push ebp
	push 0
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	je Block31

 Block28:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test esi,esi
	je Block63

 Block29:
	push 0
	jmp Block62

 Block30:
	mov dword ptr [esp+0x28],esi
	jmp Block27

 Block31:
	mov esi,dword ptr [esi+0xF4]
	mov dword ptr [edi+0x18],esi
	mov edx,dword ptr [ebx+0x35]
	push edx
	add ebx,0x33
	push ebx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xF
	ja Block34

 Block32:
	cmp dword ptr [edi+0x18],0xF4240
	jle Block34

 Block33:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0xFB2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov dword ptr [edi+0x18],0
	push 0
	jmp Block61

 Block34:
	mov eax,dword ptr [edi+0x18]
	cmp eax,0x186A0
	jge Block40

 Block35:
	lea ecx,[esp+0x14]
	push 0x52
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xA70]
	add esp,8
	cmp esi,eax
	je Block50

 Block36:
	mov dword ptr [edi+0xA70],eax
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	test esi,esi
	je Block50

 Block39:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block50

 Block40:
	cmp eax,0xF4240
	jge Block42

 Block41:
	push 0x53
	jmp Block49

 Block42:
	cmp eax,0x989680
	jge Block44

 Block43:
	push 0x54
	jmp Block49

 Block44:
	cmp eax,0x5F5E100
	jge Block46

 Block45:
	push 0x55
	jmp Block49

 Block46:
	cmp eax,0x3B9ACA00
	jge Block48

 Block47:
	push 0x56
	jmp Block49

 Block48:
	push 0x57

 Block49:
	lea eax,[esp+0x18]
	push eax
	call get_basic_font
	add esp,8
	push eax
	lea ecx,[edi+0xA70]
	call _x_com_ptr<IWzFont>::op_assign_copy

 Block50:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov eax,dword ptr [edi+0x18]
	xor esi,esi
	cmp eax,esi
	jne Block55

 Block53:
	mov eax,dword ptr [edi+0xA78]
	cmp eax,esi
	je Block60

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov dword ptr [edi+0xA78],esi
	jmp Block59

 Block55:
	mov dword ptr [esp+0x14],esi
	push 1
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x40],2
	call format_integer
	add esp,0xC
	lea ecx,[esp+0x18]
	push 0x1AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[edi+0xA78]
	push eax
	mov byte ptr [esp+0x40],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x34],2
	cmp eax,esi
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	cmp eax,esi
	je Block60

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release

 Block59:
	add esp,4

 Block60:
	mov ecx,dword ptr [edi+0x24]
	push esi
	call CWnd::InvalidateRect
	push esi

 Block61:
	mov dword ptr [esp+0x38],0xFFFFFFFF

 Block62:
	lea ecx,[esp+0x28]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block63:
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
// CParcelDlg::PutItem
__SUB_CLASS_THIS(0028EED0, __thiscall, 134283,  CParcelDlg, int32_t, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA0]
	cmp eax,1
	je Block4

 Block1:
	cmp eax,2
	je Block3

 Block2:
	xor eax,eax
	ret 0xC

 Block3:
	cmp eax,1
	jne Block5

 Block4:
	mov eax,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+8]
	mov ecx,dword ptr [ecx+0x11C]
	push eax
	mov eax,dword ptr [esp+8]
	push edx
	push eax
	call CTabSend::PutItem
	mov eax,1
	ret 0xC

 Block5:
	cmp eax,2
	jne Block7

 Block6:
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [ecx+0x120]
	push edx
	mov edx,dword ptr [esp+8]
	push eax
	push edx
	call CTabQuickSend::PutItem

 Block7:
	mov eax,1
	ret 0xC
}
}
// CTabQuickSend::OnMouseMove
__SUB_CLASS_THIS(0028D9E0, __thiscall, 134427,  CTabQuickSend, void, long, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	cmp dword ptr [esi+4],0
	je Block4

 Block1:
	mov ebp,dword ptr [esp+0x10]
	lea eax,[ebp-0x76]
	cmp eax,0x22
	ja Block4

 Block2:
	mov ebx,dword ptr [esp+0x14]
	lea ecx,[ebx-0xE4]
	cmp ecx,0x22
	ja Block4

 Block3:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push edi
	push 5
	call CInputSystem::SetCursorState
	mov ecx,dword ptr [esi+0x24]
	mov edx,dword ptr [esi+0x24]
	mov eax,dword ptr [esi+4]
	push 0
	push 0
	push 0
	push 0
	add ecx,4
	lea edi,[edx+4]
	mov edx,dword ptr [ecx]
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	call eax
	mov edx,dword ptr [edi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,edi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x28]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8

 Block4:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0
	call CInputSystem::SetCursorState
	lea ecx,[esi+0x28]
	call CUIToolTip::ClearToolTip
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CTabReceive::Draw
_SUB_EXCEPTION_HANDLER(2930E0)
__SUB_CLASS_THIS(002930E0, __thiscall, 134250,  CTabReceive, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2930E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xBC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x4C],ebx
	mov ecx,dword ptr [ebx+0xC]
	xor ebp,ebp
	push offset _S_UIUIWINDOW2IMGDE__16
	mov dword ptr [esp+0xC8],ebp
	call CParcelDlg::DrawMainBg
	mov esi,dword ptr [_D_G_PSTAGE+4]
	cmp esi,ebp
	je Block3

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block3

 Block2:
	mov ecx,esi
	jmp Block4

 Block3:
	xor ecx,ecx

 Block4:
	lea eax,[esp+0xAC]
	push eax
	call CField::GetCorrectTime
	lea ecx,[esp+0xA4]
	push ecx
	lea edx,[esp+0xB0]
	push edx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	mov ecx,dword ptr [ebx+0xC]
	mov eax,dword ptr [ecx+0x110]
	mov eax,dword ptr [eax+0x38]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [ebx+8],eax
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	je Block73

 Block5:
	cmp dword ptr [eax-4],ebp
	je Block73

 Block6:
	push offset _S_UIUIWINDOW2IMGDE__15
	call CParcelDlg::DrawMainBg
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x28],0xD0

 Block7:
	lea eax,[esp+0x14]
	push 1
	push eax
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [ebx+8]
	add ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xC4],1
	cmp ecx,dword ptr [ebx+4]
	jne Block18

 Block8:
	lea edx,[esp+0x50]
	push ebp
	push edx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x1C]
	add esp,8
	cmp ecx,eax
	je Block13

 Block9:
	mov esi,ecx
	mov dword ptr [esp+0x14],eax
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
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	mov eax,dword ptr [esp+0xCC]
	cmp eax,ebp
	je Block85

 Block16:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax]
	push 0xFF244768
	push 0x12
	push 0xFE
	add edx,0xFFFFFFFD
	push edx
	push 0xC
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	call eax
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov ecx,ebx
	call ZArray<ZRef<PARCEL>>::GetCount
	mov ecx,dword ptr [ebx+8]
	add ecx,dword ptr [esp+0x24]
	cmp ecx,eax
	jae Block70

 Block19:
	lea edx,[esp+0x94]
	push edx
	call edi
	lea eax,[esp+0x94]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block81

 Block20:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0xC8],2
	call edi
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block81

 Block21:
	mov esi,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x94]
	push eax
	mov eax,dword ptr [ebx+8]
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,dword ptr [ebx]
	add eax,esi
	lea eax,[ecx+eax*8]
	mov eax,dword ptr [eax+4]
	push edx
	push ecx
	add eax,4
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xDC]
	mov byte ptr [esp+0xD4],4
	cmp ecx,ebp
	je Block85

 Block22:
	mov edx,dword ptr [esp+0x38]
	push edx
	push 0x10
	mov byte ptr [esp+0xDC],3
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xC4],2
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	cmp word ptr [esp+0x94],8
	mov byte ptr [esp+0xC4],1
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ecx,dword ptr [ebx+8]
	mov edx,dword ptr [ebx]
	add ecx,esi
	mov eax,dword ptr [edx+ecx*8+4]
	cmp dword ptr [eax+0x1D],ebp
	je Block42

 Block31:
	lea eax,[esp+0x74]
	push eax
	call edi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block81

 Block32:
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0xC8],5
	call edi
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block81

 Block33:
	mov eax,dword ptr [esp+0x14]
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x88]
	push edx
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x18F1
	push ecx
	mov byte ptr [esp+0xDC],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xDC]
	mov byte ptr [esp+0xD4],7
	cmp ecx,ebp
	je Block85

 Block34:
	mov edx,dword ptr [esp+0x38]
	push edx
	push 0x74
	mov byte ptr [esp+0xDC],6
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xC4],5
	cmp word ptr [esp+0x84],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	cmp eax,ebp
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0xC4],1
	cmp word ptr [esp+0x74],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov ecx,dword ptr [ebx+8]
	add ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+ecx*8+4]
	mov ecx,dword ptr [eax+0x15]
	sub ecx,dword ptr [esp+0xA4]
	mov edx,dword ptr [eax+0x19]
	sbb edx,dword ptr [esp+0xA8]
	push 0xC9
	push 0x2A69C000
	push edx
	push ecx
	call __aulldiv
	mov esi,eax
	mov dword ptr [esp+0x1C],ebp
	cmp esi,0x1E
	mov byte ptr [esp+0xC4],8
	jl Block45

 Block43:
	lea eax,[esp+0x60]
	push 0xF53
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xC8],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xC4],8
	cmp eax,ebp
	je Block57

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block57

 Block45:
	cmp esi,1
	jl Block48

 Block46:
	lea ecx,[esp+0x54]
	push 0x1A17
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0xD0],0xA
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x60]
	add esp,0xC
	mov byte ptr [esp+0xC4],8
	cmp eax,ebp
	je Block57

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block57

 Block48:
	lea eax,[esp+0x58]
	push 0xF54
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xC8],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xC4],8
	cmp eax,ebp
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	lea ecx,[esp+0x18]
	push 6
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x1C]
	add esp,8
	cmp ecx,eax
	je Block55

 Block51:
	mov esi,ecx
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	cmp esi,ebp
	je Block55

 Block54:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block55:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block81

 Block58:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xC8],0xC
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block81

 Block59:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x1C]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xD8],0xD
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xDC]
	mov byte ptr [esp+0xD4],0xE
	cmp ecx,ebp
	je Block85

 Block60:
	mov edx,dword ptr [esp+0x38]
	push edx
	push 0xBF
	mov byte ptr [esp+0xDC],0xD
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xC4],0xC
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xC4],8
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov byte ptr [esp+0xC4],1
	cmp esi,ebp
	je Block70

 Block69:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block70:
	mov eax,dword ptr [esp+0x14]
	add dword ptr [esp+0x28],0x12
	mov byte ptr [esp+0xC4],0
	cmp eax,ebp
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov eax,dword ptr [esp+0x24]
	inc eax
	cmp eax,3
	mov dword ptr [esp+0x24],eax
	jl Block7

 Block73:
	mov ecx,dword ptr [ebx+4]
	cmp ecx,ebp
	jl Block196

 Block74:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	jne Block76

 Block75:
	xor eax,eax
	jmp Block77

 Block76:
	mov eax,dword ptr [eax-4]

 Block77:
	cmp ecx,eax
	jae Block196

 Block78:
	lea eax,[esp+0x28]
	push 0x18
	push eax
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [ebx+4]
	mov edx,dword ptr [ebx]
	mov edi,dword ptr [edx+ecx*8+4]
	lea eax,[edx+ecx*8]
	mov dword ptr [esp+0x5C],edi
	cmp edi,ebp
	je Block80

 Block79:
	lea eax,[edi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block80:
	mov ecx,dword ptr [ebx+0xC]
	push offset _S_UIUIWINDOW2IMGDE__14
	mov byte ptr [esp+0xC8],0x10
	call CParcelDlg::DrawSubBg
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	lea eax,[esp+0x2C]
	mov bl,0x11
	push eax
	mov byte ptr [esp+0xC8],bl
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	push ecx
	lea edx,[edi+4]
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xD8],0x12
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xDC]
	mov byte ptr [esp+0xD4],0x13
	cmp ecx,ebp
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	push 0x143
	push 0x86
	mov byte ptr [esp+0xDC],0x12
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xC4],bl
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xC4],0x10
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block94:
	cmp dword ptr [edi+0x11],ebp
	je Block111

 Block95:
	mov dword ptr [esp+0x1C],ebp
	mov ecx,dword ptr [edi+0x11]
	push 1
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0xD0],0x14
	call format_integer
	add esp,0xC
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xC8],0x15
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	mov eax,dword ptr [esp+0x28]
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x24]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x16
	push edx
	mov byte ptr [esp+0xD8],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xDC]
	mov byte ptr [esp+0xD4],0x17
	cmp ecx,ebp
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	push 0x155
	push 0x86
	mov byte ptr [esp+0xDC],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xC4],0x15
	cmp word ptr [esp+0x2C],si
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
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
	mov byte ptr [esp+0xC4],0x14
	cmp word ptr [esp+0x3C],si
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xC4],0x10
	cmp eax,ebp
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	cmp dword ptr [edi+0xEE],ebp
	je Block177

 Block112:
	mov eax,dword ptr [edi+0xEE]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x190
	mov ebp,eax
	push 0x31
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0xF8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xF8]
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block114

 Block113:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block114:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [edi+0xEE]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	call is_treat_singly_0
	add esp,4
	test eax,eax
	jne Block120

 Block115:
	mov edx,dword ptr [esp+0x4C]
	mov esi,dword ptr [edi+0xEE]
	push eax
	mov eax,dword ptr [edx+0xA5C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block117

 Block116:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block117:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,esi
	mov byte ptr [esp+0xCC],0x18
	call edx
	push eax
	push 0x184
	push 0x31
	push ecx
	mov ecx,dword ptr [esp+0xE4]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xE4]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block119

 Block118:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block119:
	mov byte ptr [esp+0xDC],0x10
	call draw_number_by_image
	add esp,0x18

 Block120:
	lea ecx,[esp+0x14]
	push 0x18
	push ecx
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebp
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xCC],0x19
	call CItemInfo::GetItemName
	push 0x8C
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xCC],0x1A
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block122

 Block121:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block122:
	lea ecx,[esp+0x2C]
	push ecx
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
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
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0xC8],0x1B
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block126

 Block125:
	push eax
	call _com_issue_error

 Block126:
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x20]
	push 0x18
	push edx
	mov byte ptr [esp+0xD4],0x1C
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x30]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x1D
	push eax
	mov byte ptr [esp+0xD8],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xDC]
	mov byte ptr [esp+0xD4],0x1E
	test ecx,ecx
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	push 0x173
	push 0x86
	mov byte ptr [esp+0xDC],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC4],0x1C
	test eax,eax
	je Block130

 Block129:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block130:
	mov esi,8
	mov byte ptr [esp+0xC4],0x1B
	cmp word ptr [esp+0x2C],si
	jne Block133

 Block131:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov byte ptr [esp+0xC4],0x1A
	cmp word ptr [esp+0x3C],si
	jne Block137

 Block135:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov dword ptr [esp+0x1C],0
	lea ecx,[esp+0x18]
	push 6
	push ecx
	mov byte ptr [esp+0xCC],0x1F
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x1C]
	add esp,8
	cmp ecx,eax
	je Block143

 Block139:
	mov esi,ecx
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block141

 Block140:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block141:
	test esi,esi
	je Block143

 Block142:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block143:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block145:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebp
	call CItemInfo::GetRequiredLEV
	mov esi,eax
	test esi,esi
	je Block148

 Block146:
	lea eax,[esp+0x18]
	push 0xF55
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0xD0],0x20
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0xC4],0x1F
	test eax,eax
	je Block157

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block157

 Block148:
	lea edx,[esp+0x18]
	push 0xF56
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xC8],0x21
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC4],0x1F
	test eax,eax
	je Block150

 Block149:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block150:
	lea eax,[esp+0x18]
	push 0x18
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x1C]
	add esp,8
	cmp ecx,eax
	je Block155

 Block151:
	mov esi,ecx
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block153

 Block152:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block153:
	test esi,esi
	je Block155

 Block154:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block155:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block157

 Block156:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block157:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xC8],0x22
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block161

 Block160:
	push eax
	call _com_issue_error

 Block161:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x23
	push esi
	mov byte ptr [esp+0xD8],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0xDC]
	mov byte ptr [esp+0xD4],0x24
	test ecx,ecx
	jne Block163

 Block162:
	push 0x80004003
	call _com_issue_error

 Block163:
	push 0x186
	push 0x86
	mov byte ptr [esp+0xDC],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0xC4],0x22
	cmp word ptr [esp+0x2C],bx
	jne Block166

 Block164:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block167:
	mov byte ptr [esp+0xC4],0x1F
	cmp word ptr [esp+0x3C],bx
	jne Block170

 Block168:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	mov byte ptr [esp+0xC4],0x1A
	test esi,esi
	je Block173

 Block172:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block173:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xC4],0x19
	test eax,eax
	je Block175

 Block174:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block175:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC4],0x10
	test eax,eax
	je Block177

 Block176:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block177:
	cmp dword ptr [edi+0x1D],0
	je Block190

 Block178:
	lea ebp,[edi+0x21]
	mov eax,ebp
	lea edx,[eax+1]
	mov edi,edi

 Block179:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block179

 Block180:
	sub eax,edx
	jne Block185

 Block181:
	lea eax,[esp+0x18]
	push 0xF57
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov edx,ebp

 Block182:
	mov al,byte ptr [ecx]
	mov byte ptr [edx],al
	inc ecx
	inc edx
	test al,al
	jne Block182

 Block183:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block185

 Block184:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block185:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [edi],0
	test ebp,ebp
	je Block189

 Block186:
	mov eax,ebp
	lea edx,[eax+1]
	lea esp,[esp]

 Block187:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block187

 Block188:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block189:
	mov ecx,dword ptr [esp+0x50]
	mov ecx,dword ptr [ecx+0xC]
	call CParcelDlg::SetMemo
	jmp Block191

 Block190:
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x24],esp
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
	mov esi,dword ptr [esp+0x50]
	mov ecx,dword ptr [esi+0xC]
	call CParcelDlg::SetMemo
	mov ecx,dword ptr [esi+0xC]
	push offset _S_UIUIWINDOW2IMGDE__13
	call CParcelDlg::DrawMainBg

 Block191:
	mov esi,dword ptr [esp+0x5C]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0xC8],0xF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block194

 Block192:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block194

 Block193:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block194:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xC4],0
	test eax,eax
	je Block197

 Block195:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block197

 Block196:
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x24],esp
	push ebp
	push offset _S_
	push ebp
	push ebp
	mov ecx,esi
	mov dword ptr [esi],ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov ecx,dword ptr [ebx+0xC]
	call CParcelDlg::SetMemo
	mov ecx,dword ptr [ebx+0xC]
	push offset _S_UIUIWINDOW2IMGDE__13
	call CParcelDlg::DrawMainBg

 Block197:
	mov eax,dword ptr [esp+0xCC]
	mov dword ptr [esp+0xC4],0xFFFFFFFF
	test eax,eax
	je Block199

 Block198:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block199:
	mov ecx,dword ptr [esp+0xBC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB4
	ret 4
}
}
// CTabReceive::ReceiveParcel
_SUB_EXCEPTION_HANDLER(28F470)
__SUB_CLASS_THIS0(0028F470, __thiscall, 134249,  CTabReceive, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28F470
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi]
	test eax,eax
	je Block10

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	je Block10

 Block2:
	mov eax,dword ptr [esi+4]
	test eax,eax
	jl Block8

 Block3:
	cmp eax,0xA
	jge Block8

 Block4:
	cmp eax,ecx
	jae Block8

 Block5:
	lea eax,[esp+0x24]
	push eax
	call get_field
	mov ecx,eax
	call CField::GetCorrectTime
	lea ecx,[esp+0xC]
	push ecx
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edx,dword ptr [eax+0x15]
	sub edx,dword ptr [esp+0xC]
	mov eax,dword ptr [eax+0x19]
	sbb eax,dword ptr [esp+0x10]
	push 0xC9
	push 0x2A69C000
	push eax
	push edx
	call __aulldiv
	cmp eax,0x1E
	jl Block7

 Block6:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xF59
	push ecx
	jmp Block9

 Block7:
	push 0x46
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x40],0
	call COutPacket::Encode1
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+edx*8+4]
	mov ecx,dword ptr [eax]
	push ecx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esi+0xC]
	push 0
	call CParcelDlg::SetCtrlEnabled
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x38
	ret

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0xF58
	push eax

 Block9:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block10:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x38
	ret
}
}
// CTabReceive::DiscardParcel
_SUB_EXCEPTION_HANDLER(28F5E0)
__SUB_CLASS_THIS0(0028F5E0, __thiscall, 134249,  CTabReceive, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28F5E0
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
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	jl Block7

 Block1:
	cmp ecx,0xA
	jge Block7

 Block2:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	cmp ecx,eax
	jae Block7

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0xF5A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block7

 Block6:
	push 0x46
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov ecx,dword ptr [esi+4]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+ecx*8+4]
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov edx,dword ptr [esi+0xC]
	mov dword ptr [edx+0x114],1
	mov ecx,dword ptr [esi+0xC]
	push 0
	call CParcelDlg::SetCtrlEnabled
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block7:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// CTabSend::PutItem
_SUB_EXCEPTION_HANDLER(28EC80)
__SUB_CLASS_THIS(0028EC80, __thiscall, 134410,  CTabSend, void, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28EC80
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
	mov edi,dword ptr [esp+0x2C]
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block3

 Block1:
	cmp eax,3
	je Block3

 Block2:
	cmp eax,4
	jne Block15

 Block3:
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block15

 Block4:
	cmp eax,0xE9
	je Block15

 Block5:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	cmp eax,esi
	je Block13

 Block6:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,esi
	je Block13

 Block7:
	add eax,8
	cmp eax,esi
	je Block13

 Block8:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block10

 Block9:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block10:
	push 0
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0xF63
	push ecx
	mov dword ptr [esp+0x38],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	push 0
	push 0xA
	push 0
	mov ecx,edi
	call eax
	push eax
	push 1
	push 1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,1
	je Block14

 Block11:
	test esi,esi
	je Block22

 Block12:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	jmp Block22

 Block13:
	mov dword ptr [esp+0x18],esi
	jmp Block10

 Block14:
	mov esi,dword ptr [esi+0xF4]
	push 0
	lea ecx,[esp+0x18]
	mov dword ptr [ebx+0x10],esi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	jmp Block16

 Block15:
	mov dword ptr [ebx+0x10],1

 Block16:
	test edi,edi
	je Block18

 Block17:
	lea ecx,[edi+4]
	push ecx
	call ebp

 Block18:
	mov esi,dword ptr [ebx+4]
	mov dword ptr [ebx+4],edi
	test esi,esi
	je Block21

 Block19:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block20:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block21:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [ebx+8],ecx
	mov ecx,dword ptr [ebx+0x1C]
	push 0
	mov dword ptr [ebx+0xC],edx
	call CWnd::InvalidateRect

 Block22:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CTabSend::SetMoney
_SUB_EXCEPTION_HANDLER(2903A0)
__SUB_CLASS_THIS0(002903A0, __thiscall, 134406,  CTabSend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2903A0
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
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x2C],0

 Block5:
	mov ecx,dword ptr [ebx+0xBD]
	push ecx
	lea esi,[ebx+0xB5]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x1388
	jg Block7

 Block6:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A8B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block7:
	mov eax,dword ptr [ebx+0xBD]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,eax
	sub ebp,0x1388
	mov dword ptr [esp+0x1C],ebp
	fild dword ptr [esp+0x1C]
	fld qword ptr [__real_3ff0a3d70a3d70a4]
	add esp,8
	fdivr st,st(1)
	fld qword ptr [__real_416312d000000000]
	fcom
	fnstsw ax
	test ah,0x41
	jp Block9

 Block8:
	fstp st(2)
	fstp st(1)
	call __ftol2_sse
	mov ebp,eax
	jmp Block22

 Block9:
	fstp st(1)
	fld st(1)
	fdiv qword ptr [__real_3ff07ae147ae147b]
	fcom
	fnstsw ax
	fstp st(1)
	fld qword ptr [__real_415312d000000000]
	test ah,5
	jp Block12

 Block10:
	fcom
	fnstsw ax
	test ah,0x41
	jp Block12

 Block11:
	fstp st(2)
	fstp st(1)
	call __ftol2_sse
	mov ebp,eax
	jmp Block22

 Block12:
	fstp st(1)
	fld st(1)
	fdiv qword ptr [__real_3ff051eb851eb852]
	fcom
	fnstsw ax
	fstp st(1)
	fld qword ptr [__real_412e848000000000]
	test ah,5
	jp Block15

 Block13:
	fcom
	fnstsw ax
	test ah,0x41
	jp Block15

 Block14:
	fstp st(2)
	fstp st(1)
	call __ftol2_sse
	mov ebp,eax
	jmp Block22

 Block15:
	fstp st(1)
	fld st(1)
	fdiv qword ptr [__real_3ff028f5c28f5c29]
	fcom
	fnstsw ax
	fstp st(1)
	fld qword ptr [__real_40f86a0000000000]
	test ah,5
	jp Block18

 Block16:
	fcom
	fnstsw ax
	test ah,0x41
	jp Block18

 Block17:
	fstp st(2)
	fstp st(1)
	call __ftol2_sse
	mov ebp,eax
	jmp Block22

 Block18:
	fstp st(1)
	fxch
	fdiv qword ptr [__real_3ff0147ae147ae14]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,5
	jp Block21

 Block19:
	fld qword ptr [__real_40e86a0000000000]
	fcomp
	fnstsw ax
	test ah,0x41
	jp Block21

 Block20:
	call __ftol2_sse
	mov ebp,eax
	jmp Block22

 Block21:
	fstp st(0)

 Block22:
	cmp ebp,0x5F5E100
	jl Block24

 Block23:
	mov ebp,0x5F5E100

 Block24:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	xor esi,esi
	mov dword ptr [esp+0x38],esi
	cmp eax,esi
	je Block32

 Block25:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,esi
	je Block32

 Block26:
	add eax,8
	cmp eax,esi
	je Block32

 Block27:
	lea esi,[eax-8]
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block29

 Block28:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	push 0
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1AB
	push edx
	mov dword ptr [esp+0x4C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0xA
	push 0
	push ebp
	push 0
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	je Block33

 Block30:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block61

 Block31:
	push 0
	jmp Block60

 Block32:
	mov dword ptr [esp+0x24],esi
	jmp Block29

 Block33:
	mov esi,dword ptr [esi+0xF4]
	mov dword ptr [edi+0x14],esi
	mov eax,dword ptr [ebx+0x35]
	push eax
	add ebx,0x33
	push ebx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0xF
	ja Block36

 Block34:
	cmp dword ptr [edi+0x14],0xF4240
	jle Block36

 Block35:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0xFB2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov dword ptr [edi+0x14],0
	push 0
	jmp Block59

 Block36:
	mov eax,dword ptr [edi+0x14]
	cmp eax,0x186A0
	jge Block38

 Block37:
	push 0x52
	lea edx,[esp+0x18]
	push edx
	jmp Block48

 Block38:
	cmp eax,0xF4240
	jge Block40

 Block39:
	push 0x53
	jmp Block47

 Block40:
	cmp eax,0x989680
	jge Block42

 Block41:
	push 0x54
	jmp Block47

 Block42:
	cmp eax,0x5F5E100
	jge Block44

 Block43:
	push 0x55
	jmp Block47

 Block44:
	cmp eax,0x3B9ACA00
	jge Block46

 Block45:
	push 0x56
	jmp Block47

 Block46:
	push 0x57

 Block47:
	lea eax,[esp+0x18]
	push eax

 Block48:
	call get_basic_font
	add esp,8
	push eax
	lea ecx,[edi+0xA68]
	call _x_com_ptr<IWzFont>::op_assign_copy
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	mov eax,dword ptr [edi+0x14]
	xor esi,esi
	cmp eax,esi
	jne Block53

 Block51:
	mov eax,dword ptr [edi+0xA70]
	cmp eax,esi
	je Block58

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov dword ptr [edi+0xA70],esi
	jmp Block57

 Block53:
	mov dword ptr [esp+0x14],esi
	push 1
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x44],2
	call format_integer
	add esp,0xC
	lea ecx,[esp+0x18]
	push 0x1AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[edi+0xA70]
	push eax
	mov byte ptr [esp+0x44],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x38],2
	cmp eax,esi
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],1
	cmp eax,esi
	je Block58

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release

 Block57:
	add esp,4

 Block58:
	mov ecx,dword ptr [edi+0x1C]
	push esi
	call CWnd::InvalidateRect
	push esi

 Block59:
	mov dword ptr [esp+0x3C],0xFFFFFFFF

 Block60:
	lea ecx,[esp+0x24]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block61:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CParcelDlg::SetCtrlEnabled
__SUB_CLASS_THIS(0028DDC0, __thiscall, 134286,  CParcelDlg, void, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x10]
	mov ebx,ecx
	push edi
	lea edi,[ebx+0xB0]
	mov ebp,2

 Block1:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push esi
	call edx
	add edi,8
	sub ebp,1
	jne Block1

 Block2:
	lea edi,[ebx+0xC0]
	mov ebp,4

 Block3:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push esi
	call edx
	add edi,8
	sub ebp,1
	jne Block3

 Block4:
	lea edi,[ebx+0xE0]
	mov ebp,4

 Block5:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push esi
	call edx
	add edi,8
	sub ebp,1
	jne Block5

 Block6:
	mov eax,dword ptr [ebx+0x100]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push esi
	call edx
	mov eax,dword ptr [ebx+0x9C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push esi
	call edx
	mov eax,dword ptr [ebx+0xA8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push esi
	call edx
	test esi,esi
	je Block8

 Block7:
	mov ecx,dword ptr [ebx+0x108]
	push offset _S_
	call CCtrlMLEdit::SetText

 Block8:
	xor eax,eax
	test esi,esi
	sete al
	pop edi
	pop esi
	pop ebp
	mov dword ptr [ebx+0x114],eax
	pop ebx
	ret 4
}
}
// CTabReceive::HitTest
__SUB_CLASS_THIS(0028D800, __thiscall, 134251,  CTabReceive, int32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+4],0
	mov eax,dword ptr [esp+8]
	jge Block3

 Block1:
	cmp eax,0x14E
	jle Block3

 Block2:
	xor eax,eax
	ret 8

 Block3:
	cmp eax,0x1BA
	jg Block2

 Block4:
	add eax,0xFFFFFF2E
	mov ecx,0x50
	cmp ecx,eax
	sbb eax,eax
	add eax,2
	ret 8
}
}
// CParcelDlg::OnCreate
_SUB_EXCEPTION_HANDLER(2914C0)
__SUB_CLASS_THIS(002914C0, __thiscall, 134273,  CParcelDlg, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2914C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC4
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
	mov dword ptr [ebp+0x5C],esi
	push 0
	push 0
	lea edi,[esi+0x130]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	push 0x136
	push 0
	push esi
	lea ecx,[esi+0x144]
	call CLayoutMan::Init
	push 0xA60
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],0
	test eax,eax
	je Block2

 Block1:
	push esi
	mov ecx,eax
	call CTabReceive::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	or ebx,0xFFFFFFFF
	push 0xA74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-4],ebx
	mov dword ptr [esi+0x118],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],1
	test eax,eax
	je Block5

 Block4:
	push esi
	mov ecx,eax
	call CTabSend::_ctor_0
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push 0xA7C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-4],ebx
	mov dword ptr [esi+0x11C],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],2
	test eax,eax
	je Block8

 Block7:
	push esi
	mov ecx,eax
	call CTabQuickSend::_ctor_0
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	mov ebx,dword ptr [ebp+0x5C]
	mov dword ptr [ebx+0x120],eax
	xor eax,eax
	mov dword ptr [ebp-0x88],eax
	mov dword ptr [ebp-0x90],eax
	mov dword ptr [ebp-0x8C],eax
	push eax
	push 6
	push 0x10B
	push 0x7D0
	mov dword ptr [ebp-0x94],eax
	push offset _S_UIBASICIMGBTCLOS__1
	lea eax,[ebp+0x64]
	push eax
	mov ecx,edi
	mov dword ptr [ebp-4],3
	call CLayoutMan::AddButton
	mov esi,eax
	mov eax,dword ptr [esi+4]
	add ebx,0xA4
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block11

 Block10:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	cmp dword ptr [ebx+4],0
	je Block13

 Block12:
	push 0
	mov ecx,ebx
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block13:
	cmp dword ptr [ebp+0x68],0
	mov ecx,dword ptr [esi+4]
	mov dword ptr [ebx+4],ecx
	mov byte ptr [ebp-4],3
	je Block15

 Block14:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block15:
	push 0
	push 0
	push 0
	push 0x7DA
	push offset _S_UIUIWINDOW2IMGDE__12
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [ebp+0x6C],eax
	mov eax,dword ptr [eax+4]
	mov ebx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],5
	lea esi,[ebx+0xAC]
	test eax,eax
	je Block17

 Block16:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	cmp dword ptr [esi+4],0
	je Block19

 Block18:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block19:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],3
	je Block21

 Block20:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block21:
	push 0
	push 0
	push 0
	push 0x7DB
	push offset _S_UIUIWINDOW2IMGDE__11
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [ebp+0x6C],eax
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],6
	lea esi,[ebx+0xB4]
	test eax,eax
	je Block23

 Block22:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	cmp dword ptr [esi+4],0
	je Block25

 Block24:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block25:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],3
	je Block27

 Block26:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block27:
	push 0
	push 0
	push 0
	push 0x7E5
	push offset _S_UIUIWINDOW2IMGDE__10
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [ebp+0x6C],eax
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],7
	lea esi,[ebx+0xBC]
	test eax,eax
	je Block29

 Block28:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	cmp dword ptr [esi+4],0
	je Block31

 Block30:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block31:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],3
	je Block33

 Block32:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block33:
	push 0
	push 0
	push 0
	push 0x7E4
	push offset _S_UIUIWINDOW2IMGDE__9
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [ebp+0x6C],eax
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],8
	lea esi,[ebx+0xC4]
	test eax,eax
	je Block35

 Block34:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block35:
	cmp dword ptr [esi+4],0
	je Block37

 Block36:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block37:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],3
	je Block39

 Block38:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block39:
	push 0
	push 0
	push 0
	push 0x7E6
	push offset _S_UIUIWINDOW2IMGDE__8
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [ebp+0x6C],eax
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],9
	lea esi,[ebx+0xCC]
	test eax,eax
	je Block41

 Block40:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	cmp dword ptr [esi+4],0
	je Block43

 Block42:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block43:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],3
	je Block45

 Block44:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block45:
	push 0
	push 0
	push 0
	push 0x7E7
	push offset _S_UIUIWINDOW2IMGDE__7
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [ebp+0x6C],eax
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],0xA
	lea esi,[ebx+0xD4]
	test eax,eax
	je Block47

 Block46:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block47:
	cmp dword ptr [esi+4],0
	je Block49

 Block48:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block49:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],3
	je Block51

 Block50:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block51:
	push 0
	push 0
	push 0
	push 0x7EF
	push offset _S_UIUIWINDOW2IMGDE__6
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [ebp+0x6C],eax
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],0xB
	lea esi,[ebx+0xDC]
	test eax,eax
	je Block53

 Block52:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block53:
	cmp dword ptr [esi+4],0
	je Block55

 Block54:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block55:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],3
	je Block57

 Block56:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block57:
	push 0
	push 0
	push 0
	push 0x7EE
	push offset _S_UIUIWINDOW2IMGDE__5
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [ebp+0x6C],eax
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],0xC
	lea esi,[ebx+0xE4]
	test eax,eax
	je Block59

 Block58:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block59:
	cmp dword ptr [esi+4],0
	je Block61

 Block60:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block61:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],3
	je Block63

 Block62:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block63:
	push 0
	push 0
	push 0
	push 0x7F0
	push offset _S_UIUIWINDOW2IMGDE__4
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov dword ptr [ebp+0x6C],eax
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],0xD
	lea esi,[ebx+0xEC]
	test eax,eax
	je Block65

 Block64:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block65:
	cmp dword ptr [esi+4],0
	je Block67

 Block66:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block67:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],3
	je Block69

 Block68:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block69:
	push 0
	push 0
	push 0
	push 0x7F1
	push offset _S_UIUIWINDOW2IMGDE__3
	lea edx,[ebp+0x64]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov byte ptr [ebp-4],0xE
	lea edi,[ebx+0xF4]
	test eax,eax
	je Block71

 Block70:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block71:
	cmp dword ptr [edi+4],0
	je Block73

 Block72:
	push 0
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block73:
	cmp dword ptr [ebp+0x68],0
	mov eax,dword ptr [esi+4]
	mov dword ptr [edi+4],eax
	mov byte ptr [ebp-4],3
	je Block75

 Block74:
	push 0
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block75:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp],0
	mov dword ptr [ebp+4],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	xor edi,edi
	mov byte ptr [ebp-4],0xF
	cmp eax,edi
	je Block77

 Block76:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block78

 Block77:
	xor eax,eax

 Block78:
	mov byte ptr [ebp-4],3
	cmp eax,edi
	je Block86

 Block79:
	add eax,8
	cmp eax,edi
	je Block86

 Block80:
	lea esi,[eax-8]
	cmp esi,edi
	je Block82

 Block81:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block82:
	mov eax,dword ptr [ebx+0x9C]
	mov dword ptr [ebx+0x9C],esi
	mov dword ptr [ebp+0x68],eax
	cmp eax,edi
	je Block84

 Block83:
	push edi
	lea ecx,[ebp+0x64]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block84:
	mov ecx,dword ptr [ebx+0x9C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp]
	push eax
	push 0x13
	push 0xAA
	push 0x19
	push 9
	push 8
	push 0x7D1
	push ebx
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x18]
	push eax
	call esi
	lea ecx,[ebp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block87

 Block85:
	push eax
	call _com_issue_error

 Block86:
	xor esi,esi
	jmp Block82

 Block87:
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x10
	call esi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	push edi
	push edi
	lea ecx,[ebp+0x18]
	push ecx
	lea edx,[ebp+0x38]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	mov bl,0x11
	push offset _S_UIUIWINDOW2IMGDE__2
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x12
	cmp dword ptr [_D_G_RM],edi
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	lea eax,[ebp-0x74]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block94

 Block92:
	cmp eax,0x80004002
	je Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	cmp word ptr [ebp-0x74],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],0x15
	jne Block97

 Block95:
	mov eax,dword ptr [ebp-0x6C]
	xor ecx,ecx
	mov word ptr [ebp-0x74],cx
	cmp eax,edi
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[ebp-0x74]
	push edx
	call ebx

 Block98:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],0x16
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	cmp eax,edi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp+0x38]
	push ecx
	call ebx

 Block102:
	cmp word ptr [ebp+0x18],8
	mov byte ptr [ebp-4],0x17
	jne Block105

 Block103:
	mov eax,dword ptr [ebp+0x20]
	xor edx,edx
	mov word ptr [ebp+0x18],dx
	cmp eax,edi
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[ebp+0x18]
	push eax
	call ebx

 Block106:
	lea ecx,[ebp+8]
	push ecx
	call esi
	lea edx,[ebp+8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	lea eax,[ebp+0x28]
	push eax
	mov byte ptr [ebp-4],0x18
	call esi
	lea ecx,[ebp+0x28]
	push offset _D_VTMISSING
	push ecx
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
	lea edx,[ebp+8]
	push edx
	lea eax,[ebp+0x28]
	push eax
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGDE__1
	mov byte ptr [ebp-4],0x19
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x1A
	cmp dword ptr [_D_G_RM],edi
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	lea ecx,[ebp-0x54]
	push ecx
	mov byte ptr [ebp-4],0x19
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block115

 Block113:
	cmp eax,0x80004002
	je Block115

 Block114:
	push eax
	call _com_issue_error

 Block115:
	mov esi,8
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp-0x54],si
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	cmp eax,edi
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea eax,[ebp-0x54]
	push eax
	call ebx

 Block119:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp+0x28],si
	jne Block122

 Block120:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	cmp eax,edi
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea edx,[ebp+0x28]
	push edx
	call ebx

 Block123:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp+8],si
	jne Block126

 Block124:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	cmp eax,edi
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea ecx,[ebp+8]
	push ecx
	call ebx

 Block127:
	xor ebx,ebx
	mov dword ptr [ebp+0x58],ebx

 Block128:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx+0x94]
	sub eax,0
	je Block132

 Block129:
	sub eax,1
	je Block134

 Block130:
	sub eax,1
	jne Block136

 Block131:
	test ebx,ebx
	jmp Block135

 Block132:
	test ebx,ebx
	je Block136

 Block133:
	cmp ebx,1
	je Block136

 Block134:
	cmp ebx,2

 Block135:
	jne Block157

 Block136:
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov dword ptr [ebp+0x50],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push ebx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	je Block90

 Block137:
	lea eax,[ebp-0x64]
	push eax
	mov byte ptr [ebp-4],0x1F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block142

 Block138:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x4C],ecx
	test eax,eax
	je Block140

 Block139:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block140:
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [esi],ecx
	test edi,edi
	jge Block142

 Block141:
	cmp edi,0x80004002
	jne Block161

 Block142:
	mov edx,dword ptr [ebp+0x50]
	push 0
	push 0
	push 0xA
	push edx
	push ebx
	mov byte ptr [ebp-4],0x22
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x23
	test ecx,ecx
	je Block90

 Block143:
	lea eax,[ebp-0x84]
	push eax
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block148

 Block144:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x60]
	test eax,eax
	je Block146

 Block145:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block146:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block148

 Block147:
	cmp edi,0x80004002
	jne Block161

 Block148:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax+0x9C]
	mov byte ptr [ebp-4],0x25
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp-0x84],si
	jne Block151

 Block149:
	mov eax,dword ptr [ebp-0x7C]
	xor ecx,ecx
	mov word ptr [ebp-0x84],cx
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea edx,[ebp-0x84]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x64],si
	jne Block155

 Block153:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov ebx,dword ptr [ebp+0x58]

 Block157:
	inc ebx
	cmp ebx,3
	mov dword ptr [ebp+0x58],ebx
	jl Block128

 Block158:
	lea ecx,[ebp-0xD0]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov eax,1
	mov ecx,eax
	mov dword ptr [ebp-0xCC],eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [ebp-4],0x26
	mov dword ptr [ebp-0xC8],ecx
	mov dword ptr [ebp-0xAC],0xFFFFFFFF
	mov dword ptr [ebp-0xB4],0xFF000000
	test eax,eax
	je Block162

 Block159:
	lea ecx,[eax+0x2038]
	call TSecType<unsigned char>::GetData
	test al,0x20
	je Block162

 Block160:
	push 1
	jmp Block163

 Block161:
	push edi
	call _com_issue_error

 Block162:
	push 0

 Block163:
	mov ebx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebx+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block165

 Block164:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block166

 Block165:
	xor eax,eax

 Block166:
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block196

 Block167:
	add eax,8
	je Block196

 Block168:
	lea esi,[eax-8]
	test esi,esi
	je Block170

 Block169:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block170:
	mov eax,dword ptr [ebx+0x100]
	mov dword ptr [ebx+0x100],esi
	test eax,eax
	je Block174

 Block171:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block174

 Block172:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block174

 Block173:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block174:
	lea ecx,[ebp+0x60]
	push 0x1A25
	push ecx
	mov dword ptr [ebp-0xA0],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[ebp-0xBC]
	cmp edx,edi
	je Block186

 Block175:
	mov esi,dword ptr [ebp-0xBC]
	test esi,esi
	je Block184

 Block176:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block183

 Block177:
	test esi,esi
	je Block183

 Block178:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block180

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block180:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block182

 Block181:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block182:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block183:
	mov dword ptr [ebp-0xBC],0

 Block184:
	mov eax,dword ptr [edi]
	mov dword ptr [ebp-0xBC],eax
	test eax,eax
	je Block186

 Block185:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block186:
	mov esi,dword ptr [ebp+0x60]
	test esi,esi
	je Block194

 Block187:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block194

 Block188:
	test esi,esi
	je Block194

 Block189:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block191:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block193

 Block192:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block193:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block194:
	mov ecx,dword ptr [ebx+0x100]
	lea eax,[ebp-0xD0]
	push eax
	push 0xD
	push 0x9A
	push 0xBD
	push 0x77
	mov dword ptr [ebp-0xB4],0xFF555555
	mov dword ptr [ebp-0xB8],0xB
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	push 0x7D2
	push ebx
	call edx
	lea ecx,[ebp-0x44]
	call CCtrlMLEdit::CREATEPARAM::_ctor_default
	push 0xCC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [ebp-4],0x28
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x29
	test eax,eax
	je Block197

 Block195:
	mov ecx,eax
	call CCtrlMLEdit::_ctor_default
	jmp Block198

 Block196:
	xor esi,esi
	jmp Block170

 Block197:
	xor eax,eax

 Block198:
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block228

 Block199:
	add eax,8
	je Block228

 Block200:
	lea esi,[eax-8]
	test esi,esi
	je Block202

 Block201:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block202:
	mov edi,dword ptr [ebx+0x108]
	mov dword ptr [ebx+0x108],esi
	test edi,edi
	je Block206

 Block203:
	add edi,8
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block206

 Block204:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block206

 Block205:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block206:
	mov eax,1
	mov dword ptr [ebp-0x40],eax
	mov dword ptr [ebp-0x3C],eax
	lea eax,[ebp+0x60]
	push 0x1A25
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[ebp-0x38]
	cmp ecx,edi
	je Block218

 Block207:
	mov esi,dword ptr [ebp-0x38]
	test esi,esi
	je Block216

 Block208:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block215

 Block209:
	test esi,esi
	je Block215

 Block210:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block212

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block212:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block214

 Block213:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block214:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block215:
	mov dword ptr [ebp-0x38],0

 Block216:
	mov eax,dword ptr [edi]
	mov dword ptr [ebp-0x38],eax
	test eax,eax
	je Block218

 Block217:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block218:
	mov esi,dword ptr [ebp+0x60]
	test esi,esi
	je Block226

 Block219:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block226

 Block220:
	test esi,esi
	je Block226

 Block221:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block223

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block223:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block225

 Block224:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block225:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block226:
	push 0
	push offset _S_
	push 0
	push 0
	lea ecx,[ebp-0x44]
	mov dword ptr [ebp-0x30],0xFF555555
	mov dword ptr [ebp-0x34],0xB
	mov dword ptr [ebp-0x1C],0x64
	mov dword ptr [ebp-0x18],0xA5
	mov dword ptr [ebp-0x14],4
	mov dword ptr [ebp-0x20],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	lea ecx,[ebp-0x44]
	call ZXString<char>::ReleaseBuffer
	mov ecx,dword ptr [ebx+0x108]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[ebp-0x44]
	push eax
	push 0x44
	push 0xA5
	push 0x6F
	push 0x5F
	push 0x7D3
	push ebx
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x68],eax
	mov byte ptr [ebp-4],0x2A
	test eax,eax
	je Block229

 Block227:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block230

 Block228:
	xor esi,esi
	jmp Block202

 Block229:
	xor eax,eax

 Block230:
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block254

 Block231:
	add eax,8
	je Block254

 Block232:
	lea esi,[eax-8]
	test esi,esi
	je Block234

 Block233:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block234:
	mov eax,dword ptr [ebx+0x110]
	mov dword ptr [ebx+0x110],esi
	test eax,eax
	je Block238

 Block235:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block238

 Block236:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block238

 Block237:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block238:
	mov ecx,dword ptr [ebx+0x110]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0x4E
	push 0xBB
	push 0x10C
	push 8
	push 1
	push 0x7D4
	push ebx
	call edx
	mov eax,dword ptr [ebx+0x110]
	mov dword ptr [eax+0x34],0xFA
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block247

 Block239:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block246

 Block240:
	test esi,esi
	je Block246

 Block241:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block243

 Block242:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block243:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block245

 Block244:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block245:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block246:
	mov dword ptr [ebp-0x38],0

 Block247:
	mov eax,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block249

 Block248:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block249:
	lea ecx,[ebp-0xD0]
	mov byte ptr [ebp-4],0x1F
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block251

 Block250:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block251:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block253

 Block252:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block253:
	lea esp,[ebp-0xE0]
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

 Block254:
	xor esi,esi
	jmp Block234
}
}
// CTabReceive::CTabReceive
_SUB_EXCEPTION_HANDLER(290E30)
__SUB_CLASS_THIS(00290E30, __thiscall, 134247,  CTabReceive, void, CParcelDlg*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_290E30
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
	mov dword ptr [esp+0x14],esi
	xor ebx,ebx
	mov dword ptr [esi],ebx
	mov eax,dword ptr [esp+0x58]
	lea ecx,[esi+0x10]
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esi+4],0xFFFFFFFF
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],eax
	call CUIToolTip::_ctor_default
	lea edi,[esi+0xA58]
	mov dword ptr [edi],ebx
	mov dword ptr [esi+0xA5C],ebx
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x54],3
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x54],4
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	mov bl,5
	push offset _S_UIUIWINDOWIMGDEL
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x64],6
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],7
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x50],4
	cmp word ptr [esp+0x18],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[esp+0x18]
	push edx
	call ebp
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x54],8
	call ebp
	lea edx,[esp+0x28]
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
	push 0
	push 0
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x6C],esp
	push 0x50E
	mov bl,9
	push edx
	mov byte ptr [esp+0x6C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x64],0xA
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x4C]
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0xA5C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],di
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x50],8
	cmp word ptr [esp+0x28],di
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x18],di
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov eax,esi
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
// CParcelDlg::OnButtonClicked
// 690D34
static uint8_t _SUB_290C30_LOOKUP_TABLE_0[34] = {
0, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1, 2, 9, 9, 9, 9, 
9, 9, 9, 9, 3, 4, 5, 5, 9, 9, 9, 9, 9, 9, 6, 7, 
8, 8, 
};
__SUB_CLASS_THIS(00290C30, __thiscall, 134275,  CParcelDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0x7D0]
	cmp edx,0x21
	ja Block12

 Block1:
	movzx edx,byte ptr [edx+_SUB_290C30_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block2
cmp EDX, 1
je Block4
cmp EDX, 2
je Block5
cmp EDX, 3
je Block7
cmp EDX, 4
je Block6
cmp EDX, 5
je Block8
cmp EDX, 6
je Block10
cmp EDX, 7
je Block9
cmp EDX, 8
je Block11
cmp EDX, 9
je Block12


 Block2:
	call CParcelDlg::CloseParcelDlg

 Block3:
	ret 4

 Block4:
	mov ecx,dword ptr [ecx+0x118]
	call CTabReceive::ReceiveParcel
	ret 4

 Block5:
	mov ecx,dword ptr [ecx+0x118]
	call CTabReceive::DiscardParcel
	ret 4

 Block6:
	mov ecx,dword ptr [ecx+0x11C]
	call CTabSend::SendParcel
	ret 4

 Block7:
	mov ecx,dword ptr [ecx+0x11C]
	call CTabSend::SetMoney
	ret 4

 Block8:
	mov ecx,dword ptr [ecx+0x11C]
	call CTabSend::ToggleTaxInfo
	ret 4

 Block9:
	mov ecx,dword ptr [ecx+0x120]
	call CTabQuickSend::SendQuickDelivery
	ret 4

 Block10:
	mov ecx,dword ptr [ecx+0x120]
	call CTabQuickSend::SetMoney
	ret 4

 Block11:
	mov ecx,dword ptr [ecx+0x120]
	call CTabQuickSend::ToggleTaxInfo
	ret 4

 Block12:
	cmp eax,1
	jne Block14

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block14:
	cmp eax,2
	jne Block16

 Block15:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block16:
	cmp eax,8
	jne Block3

 Block17:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx
}
}
// CParcelDlg::IsKindOf
__SUB_CLASS_THIS(002909B0, __thiscall, 134299,  CParcelDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CParcelDlg::ms_RTTI_CParcelDlg
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
// CParcelDlg::SetCtrl
__SUB_CLASS_THIS0(0028DB00, __thiscall, 134271,  CParcelDlg, void) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	lea ebx,[esi+0xB0]
	mov edi,2

 Block1:
	mov eax,dword ptr [ebx]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	add ebx,8
	sub edi,1
	jne Block1

 Block2:
	lea ebx,[esi+0xC0]
	mov edi,4

 Block3:
	mov eax,dword ptr [ebx]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	add ebx,8
	sub edi,1
	jne Block3

 Block4:
	lea ebp,[esi+0xE0]
	mov ebx,ebp
	mov edi,4

 Block5:
	mov eax,dword ptr [ebx]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	add ebx,8
	sub edi,1
	jne Block5

 Block6:
	mov eax,dword ptr [esi+0x100]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov eax,dword ptr [esi+0x108]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov eax,dword ptr [esi+0x110]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov eax,dword ptr [esi+0xA0]
	sub eax,edi
	je Block19

 Block7:
	sub eax,1
	je Block14

 Block8:
	sub eax,1
	jne Block22

 Block9:
	mov edi,ebp
	lea ebx,[eax+4]

 Block10:
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push 0
	call edx
	add edi,8
	sub ebx,1
	jne Block10

 Block11:
	mov eax,dword ptr [esi+0x100]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov ecx,dword ptr [esi+0x100]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push ebx
	call edx
	mov eax,dword ptr [esi+0x108]
	mov dword ptr [eax+0x88],ebx
	mov eax,dword ptr [esi+0x108]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov ecx,dword ptr [esi+0x108]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push ebx
	call edx
	mov eax,dword ptr [esi+0x120]
	push ebx
	cmp dword ptr [eax+0x20],ebx
	je Block13

 Block12:
	mov eax,dword ptr [esi+0xF8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	mov ecx,dword ptr [esi+0xF0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push ebx
	call eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block13:
	mov eax,dword ptr [esi+0xF0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	mov ecx,dword ptr [esi+0xF8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block14:
	lea edi,[esi+0xC0]
	mov ebx,4

 Block15:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	add edi,8
	sub ebx,1
	jne Block15

 Block16:
	mov eax,dword ptr [esi+0x100]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	mov ecx,dword ptr [esi+0x100]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push ebx
	call eax
	mov ecx,dword ptr [esi+0x11C]
	push ebx
	cmp dword ptr [ecx+0x18],ebx
	je Block18

 Block17:
	mov eax,dword ptr [esi+0xD8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	mov ecx,dword ptr [esi+0xD0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push ebx
	call eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block18:
	mov eax,dword ptr [esi+0xD0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	call eax
	mov ecx,dword ptr [esi+0xD8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret

 Block19:
	lea edi,[esi+0xB0]
	mov ebx,2

 Block20:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push 0
	call eax
	add edi,8
	sub ebx,1
	jne Block20

 Block21:
	mov eax,dword ptr [esi+0x110]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	mov edi,1
	push edi
	call eax
	mov ecx,dword ptr [esi+0x110]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push ebx
	call eax
	mov eax,dword ptr [esi+0x108]
	mov dword ptr [eax+0x88],edi
	mov dword ptr [eax+0xB8],edi
	mov dword ptr [eax+0xB4],edi
	mov eax,dword ptr [esi+0x108]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
	mov ecx,dword ptr [esi+0x108]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	push ebx
	call eax

 Block22:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// CParcelDlg::Update
__SUB_CLASS_THIS0(0028D910, __thiscall, 134271,  CParcelDlg, void) {
__asm {

 Block0:
	jmp  CWnd::Update
}
}
// CTabQuickSend::PutItem
_SUB_EXCEPTION_HANDLER(28EA20)
__SUB_CLASS_THIS(0028EA20, __thiscall, 134428,  CTabQuickSend, void, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28EA20
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
	mov edi,dword ptr [esp+0x2C]
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block3

 Block1:
	cmp eax,3
	je Block3

 Block2:
	cmp eax,4
	jne Block15

 Block3:
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xCF
	je Block15

 Block4:
	cmp eax,0xE9
	je Block15

 Block5:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	cmp eax,esi
	je Block13

 Block6:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,esi
	je Block13

 Block7:
	add eax,8
	cmp eax,esi
	je Block13

 Block8:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block10

 Block9:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block10:
	push 0
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0xF63
	push ecx
	mov dword ptr [esp+0x38],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 2
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	push 0
	push 0xA
	push 0
	mov ecx,edi
	call eax
	push eax
	push 1
	push 1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_NO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,1
	je Block14

 Block11:
	test esi,esi
	je Block22

 Block12:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	jmp Block22

 Block13:
	mov dword ptr [esp+0x18],esi
	jmp Block10

 Block14:
	mov esi,dword ptr [esi+0xF4]
	push 0
	lea ecx,[esp+0x18]
	mov dword ptr [ebx+0x14],esi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	jmp Block16

 Block15:
	mov dword ptr [ebx+0x14],1

 Block16:
	test edi,edi
	je Block18

 Block17:
	lea ecx,[edi+4]
	push ecx
	call ebp

 Block18:
	mov esi,dword ptr [ebx+4]
	mov dword ptr [ebx+4],edi
	test esi,esi
	je Block21

 Block19:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block20:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block21:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [ebx+8],ecx
	mov ecx,dword ptr [ebx+0x24]
	push 0
	mov dword ptr [ebx+0xC],edx
	call CWnd::InvalidateRect

 Block22:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CParcelDlg::ResetSendInfo
__SUB_CLASS_THIS0(0028F2C0, __thiscall, 134271,  CParcelDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x11C]
	call CTabSend::ResetSendInfo
	mov ecx,dword ptr [esi+0x120]
	pop esi
	jmp  CTabQuickSend::ResetSendInfo
}
}
// CTabReceive::OnMouseLButtonClk
__SUB_CLASS_THIS(0028E060, __thiscall, 134251,  CTabReceive, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push esi
	add eax,0xFFFFFFF3
	mov esi,ecx
	mov ebx,dword ptr [esi+4]
	push edi
	cmp eax,0xF6
	ja Block4

 Block1:
	mov eax,dword ptr [esp+0x14]
	lea ecx,[eax-0xD1]
	cmp ecx,0x36
	ja Block4

 Block2:
	lea ecx,[eax-0xCE]
	mov eax,0x38E38E39
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esi+8]
	mov ecx,esi
	lea edi,[edx+eax]
	call ZArray<ZRef<PARCEL>>::GetCount
	cmp edi,eax
	jae Block4

 Block3:
	mov dword ptr [esi+4],edi
	jmp Block5

 Block4:
	mov dword ptr [esi+4],0xFFFFFFFF

 Block5:
	cmp ebx,dword ptr [esi+4]
	je Block7

 Block6:
	mov ecx,dword ptr [esi+0xC]
	push 0
	call CWnd::InvalidateRect

 Block7:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8
}
}
// CTabSend::SendParcel
_SUB_EXCEPTION_HANDLER(290140)
__SUB_CLASS_THIS0(00290140, __thiscall, 134406,  CTabSend, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_290140
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
	xor ebx,ebx
	cmp dword ptr [esi+4],ebx
	jne Block3

 Block1:
	cmp dword ptr [esi+0x14],ebx
	jne Block3

 Block2:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0xF5F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret

 Block3:
	mov ecx,dword ptr [esi+0x1C]
	mov ecx,dword ptr [ecx+0x100]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlEdit::GetText
	mov ebp,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x40],ebx
	cmp ebp,ebx
	je Block5

 Block4:
	cmp byte ptr [ebp],bl
	jne Block7

 Block5:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0xF60
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp ebp,ebx
	je Block17

 Block6:
	jmp Block16

 Block7:
	lea ecx,[esp+0x20]
	push 0xF62
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x18],ebx
	mov edx,dword ptr [esi+0x14]
	mov edi,dword ptr [eax]
	push edx
	mov byte ptr [esp+0x44],2
	call GetParcelTax
	add eax,0x1388
	push eax
	lea eax,[esp+0x20]
	push edi
	push eax
	call ZXString<char>::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x40],4
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x40],5
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block13

 Block12:
	push 0x46
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x44],6
	call COutPacket::Encode1
	movzx eax,byte ptr [esi+8]
	push eax
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	movzx ecx,word ptr [esi+0xC]
	push ecx
	lea ecx,[esp+0x2C]
	call COutPacket::Encode2
	movzx edx,word ptr [esi+0x10]
	push edx
	lea ecx,[esp+0x2C]
	call COutPacket::Encode2
	mov eax,dword ptr [esi+0x14]
	push eax
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x2C]
	call COutPacket::EncodeStr
	push ebx
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x28]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esi+0x1C]
	push ebx
	call CParcelDlg::SetCtrlEnabled
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x40],5
	call ZArray<unsigned char>::RemoveAll

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x40],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov dword ptr [esp+0x40],0xFFFFFFFF

 Block16:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret
}
}
// CTabQuickSend::ResetSendInfo
__SUB_CLASS_THIS0(0028EBF0, __thiscall, 134424,  CTabQuickSend, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	push edi
	xor edi,edi
	cmp eax,edi
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	cmp ecx,edi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esi+4],edi

 Block5:
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x1C],edi
	mov eax,dword ptr [esi+0xA78]
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0xA78],edi

 Block7:
	mov ecx,dword ptr [esi+0x24]
	mov ecx,dword ptr [ecx+0x100]
	push edi
	call CCtrlEdit::SetText
	mov edx,dword ptr [esi+0x24]
	mov ecx,dword ptr [edx+0x108]
	push edi
	call CCtrlMLEdit::SetText
	pop edi
	pop esi
	ret
}
}
// CParcelDlg::CParcelDlg
_SUB_EXCEPTION_HANDLER(2907F0)
__SUB_CLASS_THIS(002907F0, __thiscall, 134269,  CParcelDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2907F0
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
	mov dword ptr [esp+0xC],esi
	call CUniqueModeless::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CParcelDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CParcelDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CParcelDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA8],edi
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 2
	push 8
	lea eax,[esi+0xAC]
	push eax
	mov byte ptr [esp+0x30],2
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 4
	push 8
	lea ecx,[esi+0xBC]
	push ecx
	mov byte ptr [esp+0x30],3
	call __eh_vector_ctor_iterator
	push offset ZRef<CCtrlOriginButton>::~ZRef<CCtrlOriginButton>
	push offset ZRef<CCtrlOriginButton>::_ctor_default
	push 4
	push 8
	lea edx,[esi+0xDC]
	push edx
	mov byte ptr [esp+0x30],4
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x124],edi
	mov dword ptr [esi+0x128],edi
	mov dword ptr [esi+0x12C],edi
	mov dword ptr [esi+0x130],edi
	mov dword ptr [esi+0x134],edi
	mov dword ptr [esi+0x138],edi
	mov dword ptr [esi+0x13C],edi
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esi+0x144],edi
	mov dword ptr [esi+0x148],edi
	mov dword ptr [esi+0x14C],edi
	mov dword ptr [esi+0x150],edi
	mov dword ptr [esi+0x154],edi
	push edi
	push edi
	push 1
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGDE
	mov byte ptr [esp+0x38],0xD
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esi+0x94],eax
	cmp eax,1
	jne Block2

 Block1:
	mov dword ptr [esi+0xA0],2

 Block2:
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x1F6
	push 0x121
	push 0x31
	push 0xFF
	mov ecx,esi
	call CWnd::CreateWnd
	mov ecx,esi
	call CParcelDlg::SetCtrl
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CTabSend::ToggleTaxInfo
__SUB_CLASS_THIS0(0028E1A0, __thiscall, 134406,  CTabSend, void) {
__asm {

 Block0:
	xor eax,eax
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x18],eax
	mov ecx,dword ptr [esi+0x1C]
	sete al
	mov dword ptr [esi+0x18],eax
	call CParcelDlg::SetCtrl
	mov ecx,dword ptr [esi+0x1C]
	push 0
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CParcelDlg::OnMouseMove
__SUB_CLASS_THIS(0028E1D0, __thiscall, 134277,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x9C]
	sub eax,0
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0x11C]
	push eax
	push edx
	call CTabQuickSend::OnMouseMove
	xor eax,eax
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0x118]
	push eax
	push edx
	call CTabSend::OnMouseMove
	xor eax,eax
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0x114]
	push eax
	push edx
	call CTabReceive::OnMouseMove

 Block6:
	xor eax,eax
	ret 8
}
}
// CParcelDlg::NoticeResult
__SUB(0028EFD0, __cdecl, 134296,  void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFF6
	cmp eax,0x12
	ja Block16

 Block1:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block7
cmp EAX, 5
je Block8
cmp EAX, 6
je Block9
cmp EAX, 7
je Block2
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11
cmp EAX, 10
je Block16
cmp EAX, 11
je Block12
cmp EAX, 12
je Block13
cmp EAX, 13
je Block16
cmp EAX, 14
je Block16
cmp EAX, 15
je Block16
cmp EAX, 16
je Block16
cmp EAX, 17
je Block16
cmp EAX, 18
je Block11


 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xFB2
	push eax
	jmp Block15

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1A8B
	push ecx
	jmp Block15

 Block4:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0xF68
	jmp Block14

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xF69
	push eax
	jmp Block15

 Block6:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xF6A
	push ecx
	jmp Block15

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0xF6B
	jmp Block14

 Block8:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xF6C
	push eax
	jmp Block15

 Block9:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xF6D
	push ecx
	jmp Block15

 Block10:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0xF66
	jmp Block14

 Block11:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xF6E
	push eax
	jmp Block15

 Block12:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0xF6F
	push ecx
	jmp Block15

 Block13:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0xF70

 Block14:
	push edx

 Block15:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block16:
	ret
}
}
