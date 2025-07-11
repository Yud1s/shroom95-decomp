#include "regen.hpp"
// UIBattleRecord.ipp
#include "UIBattleRecord.hpp"

// CUIBattleRecord::OnChildNotify
_SUB_EXCEPTION_HANDLER(375CB0)
__SUB_CLASS_THIS(00375CB0, __thiscall, 71484,  CUIBattleRecord, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_375CB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x34]
	cmp eax,0x7D0
	jne Block3

 Block1:
	cmp ecx,0x1F4
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0x38]
	push eax
	mov ecx,esi
	call CUIBattleRecord::OnTabChanged
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block3:
	cmp ecx,0x65
	jne Block31

 Block4:
	add eax,0xFFFFF82F
	cmp eax,7
	ja Block35

 Block5:
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block10
cmp EAX, 2
je Block13
cmp EAX, 3
je Block35
cmp EAX, 4
je Block35
cmp EAX, 5
je Block22
cmp EAX, 6
je Block25
cmp EAX, 7
je Block16


 Block6:
	cmp dword ptr [esp+0x38],0
	jne Block8

 Block7:
	push 0
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov ecx,esi
	mov dword ptr [eax+4],0
	call CUIBattleRecord::SetBtToolTip
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block8:
	lea ecx,[esp+0x38]
	push 0x18FF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0xB18]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x38],0
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIBattleRecord::SetBtToolTip
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block35

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block10:
	cmp dword ptr [esp+0x38],0
	je Block7

 Block11:
	lea eax,[esp+0x30]
	push 0x188C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0xB20]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x38],1
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIBattleRecord::SetBtToolTip
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block35

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block13:
	cmp dword ptr [esp+0x38],0
	je Block7

 Block14:
	lea eax,[esp+0x34]
	push 0x18BF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0xB28]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x38],2
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIBattleRecord::SetBtToolTip
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block35

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block16:
	cmp dword ptr [esp+0x38],0
	je Block7

 Block17:
	cmp dword ptr [esi+0x15C0],0
	jne Block20

 Block18:
	lea eax,[esp+8]
	push 0x18D9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0xB58]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x38],3
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIBattleRecord::SetBtToolTip
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block35

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block20:
	lea eax,[esp+0xC]
	push 0x1888
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0xB58]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x38],4
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIBattleRecord::SetBtToolTip
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block35

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block22:
	cmp dword ptr [esp+0x38],0
	je Block7

 Block23:
	lea eax,[esp+0x10]
	push 0x18C6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0xB48]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x38],5
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIBattleRecord::SetBtToolTip
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block35

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block25:
	cmp dword ptr [esp+0x38],0
	je Block7

 Block26:
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	call CBattleRecordMan::GetOnCalc
	test eax,eax
	je Block29

 Block27:
	lea eax,[esp+0x14]
	push 0x18AE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0xB50]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x38],6
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIBattleRecord::SetBtToolTip
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block35

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block29:
	lea eax,[esp+0x18]
	push 0x18AD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0xB50]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x38],7
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIBattleRecord::SetBtToolTip
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block35

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block31:
	cmp ecx,0xC8
	jne Block33

 Block32:
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	add eax,0xFFFFF82C
	push eax
	mov eax,dword ptr [esp+0x3C]
	push eax
	call CBattleRecordMan::SetAdditionDamageInclude
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC

 Block33:
	cmp ecx,0x64
	jne Block35

 Block34:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x20]
	mov ecx,esi
	call eax

 Block35:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x24
	ret 0xC
}
}
// CUIBattleRecord::GetRTTI
__SUB_CLASS_THIS0(003734C0, __thiscall, 71490,  CUIBattleRecord, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIBattleRecord::ms_RTTI_CUIBattleRecord
	ret
}
}
// CUIBattleRecord::CInputDlg::~CInputDlg
_SUB_EXCEPTION_HANDLER(3737A0)
__SUB_CLASS_THIS0(003737A0, __thiscall, 71506,  CUIBattleRecord::CInputDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3737A0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIBattleRecord::CInputDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIBattleRecord::CInputDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIBattleRecord::CInputDlg::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xA0],0
	lea edi,[esi+0x9C]
	mov dword ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

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
// CUIBattleRecord::CInputDlg::OnKey
_SUB_EXCEPTION_HANDLER(373C00)
__SUB_CLASS_THIS(00373C00, __thiscall, 71508,  CUIBattleRecord::CInputDlg, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_373C00
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x18]
	test eax,eax
	js Block8

 Block1:
	cmp ecx,0xD
	jne Block8

 Block2:
	cmp dword ptr [esi+0x94],0
	mov ecx,dword ptr [esi+0x9C]
	je Block4

 Block3:
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov dword ptr [esi+0x8C],eax
	mov eax,dword ptr [esp+0x20]
	add esp,4
	jmp Block5

 Block4:
	lea edx,[esp+0x18]
	push edx
	call CCtrlEdit::GetText
	push eax
	lea ecx,[esi+0x90]
	mov dword ptr [esp+0x14],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF

 Block5:
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esi-4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi-4]
	push 1
	call edx
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8

 Block8:
	push eax
	push ecx
	mov ecx,esi
	call CDialog::OnKey
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIBattleRecord::OnTabChanged
__SUB_CLASS_THIS(00373060, __thiscall, 71488,  CUIBattleRecord, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov dword ptr [esi+0xAFC],eax
	cmp eax,2
	mov eax,dword ptr [esi+0xB64]
	je Block3

 Block1:
	test eax,eax
	je Block6

 Block2:
	push 0
	jmp Block5

 Block3:
	test eax,eax
	je Block6

 Block4:
	push 1

 Block5:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	call edx

 Block6:
	mov ecx,dword ptr [esi+0xAFC]
	cmp ecx,2
	je Block10

 Block7:
	mov eax,dword ptr [esi+0xB6C]
	test eax,eax
	je Block9

 Block8:
	push 0
	jmp Block12

 Block9:
	cmp ecx,2
	jne Block13

 Block10:
	mov eax,dword ptr [esi+0xB6C]
	test eax,eax
	je Block13

 Block11:
	push 1

 Block12:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	call edx

 Block13:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CUIBattleRecord::OnButtonClicked
_SUB_EXCEPTION_HANDLER(373860)
__SUB_CLASS_THIS(00373860, __thiscall, 71486,  CUIBattleRecord, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_373860
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
	lea ecx,[esi+0xB70]
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esp+0x3C]
	add eax,0xFFFFF82F
	cmp eax,7
	ja Block34

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block6
cmp EAX, 2
je Block8
cmp EAX, 3
je Block34
cmp EAX, 4
je Block34
cmp EAX, 5
je Block28
cmp EAX, 6
je Block29
cmp EAX, 7
je Block25


 Block2:
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1900
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block34

 Block3:
	mov ecx,dword ptr [esi+0xAFC]
	push ecx

 Block4:
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	call CBattleRecordMan::ClearInfo
	mov ecx,dword ptr [esi+0xB2C]
	add ecx,4
	mov dword ptr [esi+0x15BC],ebx
	mov dword ptr [esi+0x15C0],ebx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov ecx,dword ptr [esi+0xB5C]

 Block5:
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push ebx
	call eax
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block34

 Block6:
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x188B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block34

 Block7:
	push 3
	jmp Block4

 Block8:
	push 0xA4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebp,eax
	mov dword ptr [esp+0x18],ebp
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebx
	cmp ebp,ebx
	je Block24

 Block9:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	push 1
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	add eax,0xD2
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	add eax,0x94
	push eax
	mov ecx,ebp
	call CUIBattleRecord::CInputDlg::_ctor_0
	cmp eax,ebx
	je Block24

 Block10:
	add eax,8
	cmp eax,ebx
	je Block24

 Block11:
	lea edi,[eax-8]
	mov dword ptr [esp+0x28],edi
	cmp edi,ebx
	je Block13

 Block12:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,edi
	mov dword ptr [esp+0x34],1
	call CDialog::DoModal
	cmp eax,1
	jne Block23

 Block14:
	mov edi,dword ptr [edi+0x90]
	cmp edi,ebx
	je Block23

 Block15:
	mov eax,dword ptr [esi+0xB2C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	mov eax,dword ptr [esi+0xB5C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	lea ecx,[esp+0x1C]
	push 0x186B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x40],3
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],5
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x34],6
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	lea eax,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block21

 Block20:
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	push 3
	call CBattleRecordMan::ClearInfo

 Block21:
	call timeGetTime
	imul edi,0x3E8
	add eax,edi
	mov dword ptr [esi+0x15BC],eax
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	push 1
	call CBattleRecordMan::RequestOnCalc
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<CUIBattleRecord::CInputDlg>::~ZRef<CUIBattleRecord::CInputDlg>
	jmp Block34

 Block24:
	xor edi,edi
	mov dword ptr [esp+0x28],edi
	jmp Block13

 Block25:
	call timeGetTime
	mov ecx,dword ptr [esi+0x15C0]
	xor ebx,ebx
	cmp ecx,ebx
	jne Block27

 Block26:
	mov ecx,dword ptr [esi+0x15BC]
	sub ecx,eax
	mov dword ptr [esi+0x15C0],ecx
	mov dword ptr [esi+0x15BC],ebx
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	push ebx
	call CBattleRecordMan::RequestOnCalc
	mov ecx,dword ptr [esi+0xB54]
	jmp Block5

 Block27:
	add ecx,eax
	mov dword ptr [esi+0x15BC],ecx
	mov dword ptr [esi+0x15C0],ebx
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	push 1
	call CBattleRecordMan::RequestOnCalc
	mov eax,dword ptr [esi+0xB54]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	jmp Block34

 Block28:
	mov ecx,esi
	call CUIBattleRecord::Toggle
	jmp Block34

 Block29:
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	xor ebx,ebx
	cmp dword ptr [ecx+8],ebx
	je Block32

 Block30:
	cmp dword ptr [ecx+0xC],ebx
	je Block32

 Block31:
	push ebx
	jmp Block33

 Block32:
	push 1

 Block33:
	call CBattleRecordMan::RequestOnCalc

 Block34:
	mov ecx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,esi
	call CUIWnd::OnButtonClicked
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
// CUIBattleRecord::IsKindOf
__SUB_CLASS_THIS(003734E0, __thiscall, 71491,  CUIBattleRecord, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIBattleRecord::ms_RTTI_CUIBattleRecord
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
// CUIBattleRecord::~CUIBattleRecord
_SUB_EXCEPTION_HANDLER(373510)
__SUB_CLASS_THIS0(00373510, __thiscall, 71482,  CUIBattleRecord, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_373510
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIBattleRecord::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIBattleRecord::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIBattleRecord::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB70]
	mov dword ptr [esp+0x1C],0xD
	call CUIToolTip::~CUIToolTip
	lea ebx,[esi+0xB68]
	xor edi,edi
	mov byte ptr [esp+0x1C],0xC
	cmp dword ptr [ebx+4],edi
	je Block2

 Block1:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block2:
	lea ebx,[esi+0xB60]
	mov byte ptr [esp+0x1C],0xB
	cmp dword ptr [ebx+4],edi
	je Block4

 Block3:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block4:
	lea ebx,[esi+0xB58]
	mov byte ptr [esp+0x1C],0xA
	cmp dword ptr [ebx+4],edi
	je Block6

 Block5:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block6:
	lea ebx,[esi+0xB50]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [ebx+4],edi
	je Block8

 Block7:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block8:
	lea ebx,[esi+0xB48]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [ebx+4],edi
	je Block10

 Block9:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block10:
	lea ebx,[esi+0xB40]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [ebx+4],edi
	je Block12

 Block11:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block12:
	lea ebx,[esi+0xB38]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [ebx+4],edi
	je Block14

 Block13:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block14:
	lea ebx,[esi+0xB30]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [ebx+4],edi
	je Block16

 Block15:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block16:
	lea ebx,[esi+0xB28]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [ebx+4],edi
	je Block18

 Block17:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block18:
	lea ebx,[esi+0xB20]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [ebx+4],edi
	je Block20

 Block19:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block20:
	lea ebx,[esi+0xB18]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [ebx+4],edi
	je Block22

 Block21:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block22:
	lea ebx,[esi+0xB10]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [ebx+4],edi
	je Block24

 Block23:
	push edi
	mov ecx,ebx
	call ZRef<CCtrlTab>::_ReleaseRaw
	mov dword ptr [ebx+4],edi

 Block24:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIBattleRecord>::ms_pInstance],edi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CUIBattleRecord::OnCreate
_SUB_EXCEPTION_HANDLER(373CF0)
__SUB_CLASS_THIS(00373CF0, __thiscall, 71483,  CUIBattleRecord, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_373CF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor esi,esi
	mov dword ptr [ebp+0x60],esi
	cmp dword ptr [edi+0xB0C],esi
	je Block2

 Block1:
	lea eax,[ebp+0x58]
	push 0x197F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],esi
	lea ebx,[esi+1]
	jmp Block3

 Block2:
	lea ecx,[ebp+0x4C]
	push 0x197E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],1
	mov ebx,2

 Block3:
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push eax
	mov dword ptr [ebp+0x60],ebx
	mov dword ptr [ecx],esi
	call ZXString16::op_assign
	mov edx,dword ptr [ebp+0x74]
	push edx
	mov ecx,edi
	call CUIWnd::OnCreate_1
	mov dword ptr [ebp-4],esi
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [ebp+0x4C]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp+0x60],ebx
	cmp eax,esi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	or esi,0xFFFFFFFF
	mov dword ptr [ebp-4],esi
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov dword ptr [ebp-4],2
	test eax,eax
	je Block11

 Block10:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	mov dword ptr [ebp-4],esi
	test eax,eax
	je Block20

 Block13:
	add eax,8
	je Block20

 Block14:
	lea ebx,[eax-8]
	xor esi,esi
	cmp ebx,esi
	je Block16

 Block15:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov eax,dword ptr [edi+0xB14]
	mov dword ptr [edi+0xB14],ebx
	mov dword ptr [ebp+0x54],eax
	cmp eax,esi
	je Block18

 Block17:
	push esi
	lea ecx,[ebp+0x50]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block18:
	mov ecx,dword ptr [edi+0xB14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push esi
	push esi
	push 0x78
	push 0x17
	push 3
	push 7
	push 0x7D0
	push edi
	call eax
	mov eax,dword ptr [edi+0xB14]
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp]
	push ecx
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],esi
	call ebx
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block21

 Block19:
	push eax
	call _com_issue_error

 Block20:
	xor ebx,ebx
	xor esi,esi
	jmp Block16

 Block21:
	lea eax,[ebp+0x10]
	push eax
	mov dword ptr [ebp-4],3
	call ebx
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	push esi
	push esi
	lea edx,[ebp]
	push edx
	lea eax,[ebp+0x10]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1760
	push ecx
	mov byte ptr [ebp-4],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],5
	cmp dword ptr [_D_G_RM],esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],8
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,esi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],9
	jne Block35

 Block33:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,esi
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block36:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xA
	jne Block39

 Block37:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,esi
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	lea eax,[ebp-0x1C]
	push eax
	call ebx
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],0xB
	call ebx
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	push esi
	push esi
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1761
	mov bl,0xC
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xD
	cmp dword ptr [_D_G_RM],esi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block49

 Block47:
	cmp eax,0x80004002
	je Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov ebx,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x5C],bx
	jne Block52

 Block50:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	cmp eax,esi
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x20],bx
	jne Block56

 Block54:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	cmp eax,esi
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x1C],bx
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov dword ptr [ebp+0x38],esi

 Block62:
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov ebx,esp
	call __chkstk
	mov esi,dword ptr [ebp+0x38]
	mov eax,0x55555556
	imul esi
	mov dword ptr [ebp+0x5C],esp
	push 1
	mov eax,edx
	push 0
	shr eax,0x1F
	push 0
	add eax,edx
	lea edx,[eax+eax*2]
	push 0xA
	sub esi,edx
	push ebx
	push esi
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	cmp dword ptr [ebp+0x60],0
	mov byte ptr [ebp-4],0x13
	je Block24

 Block63:
	mov ecx,dword ptr [ebp+0x60]
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ebx,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ebx],0
	test eax,eax
	je Block68

 Block64:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x30]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	mov dword ptr [ebp+0x4C],eax
	mov eax,dword ptr [ebx]
	dec ecx
	and ecx,dword ptr [ebp+0x30]
	mov dword ptr [ebp+0x34],ecx
	test eax,eax
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [ebp+0x34]
	mov dword ptr [ebx],ecx
	test eax,eax
	jge Block68

 Block67:
	cmp eax,0x80004002
	jne Block87

 Block68:
	mov edx,dword ptr [ebp+0x5C]
	push 0
	push 0
	push 0xA
	push edx
	push esi
	mov byte ptr [ebp-4],0x15
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x16
	test ecx,ecx
	je Block24

 Block69:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block74

 Block70:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov ebx,eax
	mov eax,dword ptr [esi]
	test ebx,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x5C],ecx
	test eax,eax
	je Block72

 Block71:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block72:
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [esi],ecx
	test ebx,ebx
	jge Block74

 Block73:
	cmp ebx,0x80004002
	jne Block88

 Block74:
	mov ecx,dword ptr [edi+0xB14]
	mov byte ptr [ebp-4],0x18
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x3C],si
	jne Block77

 Block75:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x4C],si
	jne Block81

 Block79:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov eax,dword ptr [ebp+0x38]
	inc eax
	cmp eax,4
	mov dword ptr [ebp+0x38],eax
	jl Block62

 Block83:
	mov edx,dword ptr [edi+0xAFC]
	mov ecx,dword ptr [edi+0xB14]
	push edx
	call CCtrlTab::SetTab
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],edi
	xor ebx,ebx
	mov dword ptr [ebp+0x48],ebx
	mov dword ptr [ebp+0x3C],1
	mov dword ptr [ebp+0x40],ebx
	mov dword ptr [ebp+0x44],ebx
	lea eax,[ebp+0x64]
	push 0x1980
	push eax
	mov byte ptr [ebp-4],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x1A
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x19
	cmp eax,ebx
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block85:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x1B
	cmp eax,ebx
	je Block89

 Block86:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block90

 Block87:
	mov eax,dword ptr [ebp+0x4C]
	push eax
	call _com_issue_error

 Block88:
	push ebx
	call _com_issue_error

 Block89:
	xor eax,eax

 Block90:
	mov byte ptr [ebp-4],0x19
	cmp eax,ebx
	je Block94

 Block91:
	add eax,8
	cmp eax,ebx
	je Block94

 Block92:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block95

 Block93:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[esi+0xC]
	push ecx
	call ebx
	jmp Block96

 Block94:
	xor esi,esi

 Block95:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block96:
	mov eax,dword ptr [edi+0xB1C]
	mov dword ptr [edi+0xB1C],esi
	test eax,eax
	je Block100

 Block97:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block100

 Block98:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block100

 Block99:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block100:
	mov ecx,dword ptr [edi+0xB1C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x3C]
	push eax
	push 0
	push 0xE9
	push 0xA
	push 0x7D1
	push edi
	call edx
	lea eax,[ebp+0x64]
	push 0x1981
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x1C
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x19
	test eax,eax
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
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block104

 Block103:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block105

 Block104:
	xor eax,eax

 Block105:
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block117

 Block106:
	add eax,8
	je Block117

 Block107:
	lea esi,[eax-8]
	test esi,esi
	je Block109

 Block108:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block109:
	mov eax,dword ptr [edi+0xB24]
	mov dword ptr [edi+0xB24],esi
	test eax,eax
	je Block113

 Block110:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block113

 Block111:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block113

 Block112:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block113:
	mov ecx,dword ptr [edi+0xB24]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x3C]
	push eax
	push 0
	push 0xE9
	push 0x1E
	push 0x7D2
	push edi
	call edx
	lea eax,[ebp+0x64]
	push 0x1982
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x1E
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block115:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block118

 Block116:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block119

 Block117:
	xor esi,esi
	jmp Block109

 Block118:
	xor eax,eax

 Block119:
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block131

 Block120:
	add eax,8
	je Block131

 Block121:
	lea esi,[eax-8]
	test esi,esi
	je Block123

 Block122:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block123:
	mov eax,dword ptr [edi+0xB2C]
	mov dword ptr [edi+0xB2C],esi
	test eax,eax
	je Block127

 Block124:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block127

 Block125:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block127

 Block126:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block127:
	mov ecx,dword ptr [edi+0xB2C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x3C]
	push eax
	push 0
	push 0xD2
	push 0xAA
	push 0x7D3
	push edi
	call edx
	lea eax,[ebp+0x64]
	push 0x1980
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x20
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block129

 Block128:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block129:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block132

 Block130:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block133

 Block131:
	xor esi,esi
	jmp Block123

 Block132:
	xor eax,eax

 Block133:
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block145

 Block134:
	add eax,8
	je Block145

 Block135:
	lea esi,[eax-8]
	test esi,esi
	je Block137

 Block136:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block137:
	mov eax,dword ptr [edi+0xB4C]
	mov dword ptr [edi+0xB4C],esi
	test eax,eax
	je Block141

 Block138:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block141

 Block139:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block141

 Block140:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block141:
	mov ecx,dword ptr [edi+0xB4C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x3C]
	push eax
	push 0
	push 6
	push 0x9B
	push 0x7D6
	push edi
	call edx
	lea eax,[ebp+0x64]
	push 0x1981
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x22
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block143:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block146

 Block144:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block147

 Block145:
	xor esi,esi
	jmp Block137

 Block146:
	xor eax,eax

 Block147:
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block159

 Block148:
	add eax,8
	je Block159

 Block149:
	lea esi,[eax-8]
	test esi,esi
	je Block151

 Block150:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block151:
	mov eax,dword ptr [edi+0xB54]
	mov dword ptr [edi+0xB54],esi
	test eax,eax
	je Block155

 Block152:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block155

 Block153:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block155

 Block154:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block155:
	mov ecx,dword ptr [edi+0xB54]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x3C]
	push eax
	push 0
	push 6
	push 0x8C
	push 0x7D7
	push edi
	call edx
	lea eax,[ebp+0x64]
	push 0x1981
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x24
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block157

 Block156:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block157:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block160

 Block158:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block161

 Block159:
	xor esi,esi
	jmp Block151

 Block160:
	xor eax,eax

 Block161:
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block173

 Block162:
	add eax,8
	je Block173

 Block163:
	lea esi,[eax-8]
	test esi,esi
	je Block165

 Block164:
	lea ecx,[esi+0xC]
	push ecx
	call ebx

 Block165:
	mov eax,dword ptr [edi+0xB5C]
	mov dword ptr [edi+0xB5C],esi
	test eax,eax
	je Block169

 Block166:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block169

 Block167:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block169

 Block168:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block169:
	mov ecx,dword ptr [edi+0xB5C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x3C]
	push eax
	push 0
	push 0xD2
	push 0x9B
	push 0x7D8
	push edi
	call edx
	mov eax,dword ptr [edi+0xB5C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	lea ecx,[ebp-0x90]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	lea eax,[ebp+0x64]
	push 0x18F5
	mov bl,0x26
	push eax
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp-0x8C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp-0x88]
	mov byte ptr [ebp-4],0x27
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block171

 Block170:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block171:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block174

 Block172:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block175

 Block173:
	xor esi,esi
	jmp Block165

 Block174:
	xor eax,eax

 Block175:
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block187

 Block176:
	add eax,8
	je Block187

 Block177:
	lea esi,[eax-8]
	test esi,esi
	je Block179

 Block178:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block179:
	mov eax,dword ptr [edi+0xB64]
	mov dword ptr [edi+0xB64],esi
	test eax,eax
	je Block183

 Block180:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block183

 Block181:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block183

 Block182:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block183:
	mov ecx,dword ptr [edi+0xB64]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x90]
	push eax
	push 0x28
	push 0xA
	push 0x7D4
	push edi
	call edx
	lea eax,[ebp+0x64]
	push 0x18F4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp-0x88]
	mov byte ptr [ebp-4],0x29
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block185

 Block184:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block185:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x2A
	test eax,eax
	je Block188

 Block186:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block189

 Block187:
	xor esi,esi
	jmp Block179

 Block188:
	xor eax,eax

 Block189:
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block199

 Block190:
	add eax,8
	je Block199

 Block191:
	lea esi,[eax-8]
	test esi,esi
	je Block193

 Block192:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block193:
	mov eax,dword ptr [edi+0xB6C]
	mov dword ptr [edi+0xB6C],esi
	test eax,eax
	je Block197

 Block194:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block197

 Block195:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block197

 Block196:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block197:
	mov ecx,dword ptr [edi+0xB6C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x90]
	push eax
	push 0x37
	push 0xA
	push 0x7D5
	push edi
	call edx
	cmp dword ptr [edi+0xAFC],2
	mov eax,dword ptr [edi+0xB64]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	je Block200

 Block198:
	push 0
	call edx
	push 0
	jmp Block201

 Block199:
	xor esi,esi
	jmp Block193

 Block200:
	push 1
	call edx
	push 1

 Block201:
	mov eax,dword ptr [edi+0xB6C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	call edx
	mov ecx,dword ptr [edi+0xB64]
	push 1
	call CCtrlCheckBox::SetChecked
	mov edi,dword ptr [edi+0xB6C]
	push 1
	mov ecx,edi
	call CCtrlCheckBox::SetChecked
	mov eax,dword ptr [ebp-0x84]
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block210

 Block202:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block209

 Block203:
	test esi,esi
	je Block209

 Block204:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block206

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block206:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block208

 Block207:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block208:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block209:
	mov dword ptr [ebp-0x84],0

 Block210:
	mov eax,dword ptr [ebp-0x88]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block212

 Block211:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block212:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block214

 Block213:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block214:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xA
	call edx
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xA0]
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
	ret 4
}
}
// CUIBattleRecord::Toggle
__SUB_CLASS_THIS0(00373170, __thiscall, 71482,  CUIBattleRecord, void) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	xor eax,eax
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xB0C],eax
	mov ecx,dword ptr [esi+0xB64]
	mov edx,dword ptr [esi+0xB6C]
	sete al
	push edi
	mov edi,dword ptr [esi+0x15C0]
	mov dword ptr [esi+0xB0C],eax
	mov ebx,dword ptr [ecx+0x48]
	mov eax,dword ptr [esi+0x15BC]
	mov ebp,dword ptr [edx+0x48]
	mov ecx,esi
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esi+0x15C4],1
	call CWnd::Destroy
	mov ecx,dword ptr [esi+0xB0C]
	neg ecx
	sbb ecx,ecx
	push 0xA
	and ecx,0xFA
	add ecx,0xC8
	push 0xFA
	push ecx
	mov ecx,esi
	mov dword ptr [esi+0x15C4],0
	call CUIWnd::CreateUIWndPosSaved
	mov ecx,dword ptr [esi+0xB64]
	push ebx
	call CCtrlCheckBox::SetChecked
	mov ecx,dword ptr [esi+0xB6C]
	push ebp
	call CCtrlCheckBox::SetChecked
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [esi+0x15BC],edx
	mov dword ptr [esi+0x15C0],edi
	test edi,edi
	je Block2

 Block1:
	mov eax,dword ptr [esi+0xB54]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0xB2C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0xB5C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block2:
	cmp dword ptr [esi+0x15BC],0
	je Block4

 Block3:
	mov ecx,dword ptr [esi+0xB2C]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	mov esi,dword ptr [esi+0xB5C]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push 1
	call edx

 Block4:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// CUIBattleRecord::CInputDlg::CInputDlg
_SUB_EXCEPTION_HANDLER(3736F0)
__SUB_CLASS_THIS(003736F0, __thiscall, 71504,  CUIBattleRecord::CInputDlg, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3736F0
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
	call CDialog::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CUIBattleRecord::CInputDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIBattleRecord::CInputDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIBattleRecord::CInputDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x94],eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esi+0x98],ecx
	mov dword ptr [esi+0xA0],eax
	mov edx,dword ptr [esp+0x20]
	push eax
	push eax
	mov eax,dword ptr [esp+0x24]
	push 1
	push 0xA
	push 0xF
	push 0x2D
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x34],2
	call CDialog::CreateDlg_0
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CUIBattleRecord::Draw
_SUB_EXCEPTION_HANDLER(374B80)
__SUB_CLASS_THIS(00374B80, __thiscall, 71485,  CUIBattleRecord, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_374B80
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
	mov dword ptr [esp+0x20],edi
	mov eax,dword ptr [esp+0x64]
	push eax
	call CWnd::Draw
	mov esi,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x28],esi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [esp+0x5C],ebx
	mov dword ptr [esp+0x64],ebx
	mov eax,dword ptr [edi+0xAFC]
	mov byte ptr [esp+0x5C],1
	cmp eax,ebx
	jne Block2

 Block1:
	push offset _S_DAMAGERECORD
	jmp Block8

 Block2:
	cmp eax,1
	jne Block4

 Block3:
	push offset _S_RECOVERYRECORD
	jmp Block8

 Block4:
	cmp eax,2
	jne Block6

 Block5:
	push offset _S_RECORDINGOPTION
	jmp Block8

 Block6:
	cmp eax,3
	jne Block9

 Block7:
	push offset _S_EMPTYTAB

 Block8:
	lea ecx,[esp+0x68]
	call ZXString<char>::AssignCStr

 Block9:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push edx
	call ebp
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0x60],2
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x30]
	push 0x16
	push edx
	mov byte ptr [esp+0x6C],3
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x70]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,4
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x6C],5
	test edi,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	push 0xA
	push 0xA
	mov ecx,edi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],3
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	cmp word ptr [esp+0x34],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x5C],2
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block21:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x5C],1
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x44]
	push eax
	call ebx

 Block25:
	mov dword ptr [esp+0x18],0
	cmp dword ptr [esi+8],0
	mov byte ptr [esp+0x5C],6
	je Block50

 Block26:
	cmp dword ptr [esi+0xC],0
	je Block50

 Block27:
	push offset _S_ON
	lea ecx,[esp+0x1C]
	call ZXString<char>::AssignCStr
	lea ecx,[esp+0x44]
	push ecx
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ebp,dword ptr [esp+0x18]
	lea eax,[esp+0x44]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,7
	push ebp
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x30]
	push 6
	push ecx
	mov byte ptr [esp+0x6C],8
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],9
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov byte ptr [esp+0x64],0xA
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],bl
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block33:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x5C],6
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call ebx
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x60],0xB
	call ebx
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x30]
	push 0x10
	push eax
	mov byte ptr [esp+0x6C],0xC
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0xD
	push ebp
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	mov ecx,0x87
	sub ecx,esi
	push 5
	push ecx
	mov byte ptr [esp+0x74],0xE
	mov ecx,edi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0xC
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block43:
	mov esi,8
	mov byte ptr [esp+0x5C],0xB
	cmp word ptr [esp+0x44],si
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov byte ptr [esp+0x5C],6
	cmp word ptr [esp+0x34],si
	jne Block49

 Block48:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	jmp Block72

 Block49:
	lea ecx,[esp+0x34]
	push ecx
	jmp Block75

 Block50:
	push offset _S_OFF
	lea ecx,[esp+0x1C]
	call ZXString<char>::AssignCStr
	lea edx,[esp+0x44]
	push edx
	call ebp
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov ebp,dword ptr [esp+0x18]
	lea ecx,[esp+0x44]
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x68],0xF
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x30]
	push 0x11
	push edx
	mov byte ptr [esp+0x6C],0x10
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],0x11
	test ecx,ecx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov byte ptr [esp+0x64],0x12
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0xF
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x5C],6
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push edx
	call ebx
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x60],0x13
	call ebx
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x30]
	push 0x11
	push edx
	mov byte ptr [esp+0x6C],0x14
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x15
	push ebp
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	mov eax,0x87
	push 5
	sub eax,esi
	mov byte ptr [esp+0x70],0x16
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0x14
	test eax,eax
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	mov esi,8
	mov byte ptr [esp+0x5C],0x13
	cmp word ptr [esp+0x44],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [esp+0x5C],6
	cmp word ptr [esp+0x34],si
	jne Block74

 Block71:
	xor edx,edx
	mov word ptr [esp+0x34],dx

 Block72:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block76

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block74:
	lea eax,[esp+0x34]
	push eax

 Block75:
	call dword ptr [ZImports::_VariantClear]

 Block76:
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov ebx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x5C],0x17
	cmp dword ptr [ebx+0x15BC],ebp
	je Block88

 Block77:
	call timeGetTime
	lea ecx,[esp+0x2C]
	push 0x18BE
	push ecx
	mov esi,eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,eax
	mov dword ptr [esp+0x28],ebp
	mov edx,dword ptr [ebx+0x15BC]
	sub edx,esi
	mov ecx,dword ptr [ecx]
	mov eax,0x10624DD3
	mul edx
	xor eax,eax
	shr edx,6
	cmp edx,ebp
	setl al
	mov byte ptr [esp+0x5C],0x19
	dec eax
	and eax,edx
	push eax
	push ecx
	lea eax,[esp+0x30]
	push eax
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0x18
	cmp eax,ebp
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x5C],0x17
	cmp eax,ebp
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x60],0x1A
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x34]
	push 0x38
	push ecx
	mov byte ptr [esp+0x6C],0x1B
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x1C
	push edx
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	push 0xC3
	mov byte ptr [esp+0x70],0x1D
	push 0xA
	mov ecx,edi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x5C],0x1B
	cmp eax,ebp
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	mov byte ptr [esp+0x5C],0x1A
	jmp Block109

 Block88:
	cmp dword ptr [ebx+0x15C0],ebp
	je Block100

 Block89:
	lea ecx,[esp+0x2C]
	push 0x18BE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x28],ebp
	mov ecx,dword ptr [eax]
	mov eax,0x10624DD3
	mul dword ptr [ebx+0x15C0]
	shr edx,6
	push edx
	push ecx
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x68],0x1F
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0x1E
	cmp eax,ebp
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x5C],0x17
	cmp eax,ebp
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x60],0x20
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x34]
	push 0x38
	push eax
	mov byte ptr [esp+0x6C],0x21
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x22
	push edx
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	push 0xC3
	mov byte ptr [esp+0x70],0x23
	push 0xA
	mov ecx,edi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x5C],0x21
	cmp eax,ebp
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov byte ptr [esp+0x5C],0x20
	jmp Block109

 Block100:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call esi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x60],0x24
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x30]
	push 0x38
	push ecx
	mov byte ptr [esp+0x6C],0x25
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x38]
	push 0x18B1
	push edx
	mov byte ptr [esp+0x70],0x26
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,0x27
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	push 0xC3
	mov byte ptr [esp+0x70],0x28
	push 0xA
	mov ecx,edi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x5C],0x26
	cmp eax,ebp
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block106:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0x25
	cmp eax,ebp
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	mov byte ptr [esp+0x5C],0x24

 Block109:
	mov esi,8
	cmp word ptr [esp+0x44],si
	jne Block112

 Block110:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov byte ptr [esp+0x5C],0x17
	cmp word ptr [esp+0x34],si
	jne Block116

 Block114:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,ebp
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [ecx+0xAFC]
	mov esi,0x28
	mov ebp,esi
	test eax,eax
	jne Block153

 Block118:
	xor edi,edi
	mov bl,0x2C
	jmp Block120

 Block120:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block121:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x60],0x29
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block122:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x30]
	push 0x38
	push edx
	mov byte ptr [esp+0x6C],0x2A
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push edi
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x70],0x2B
	call CBattleRecordMan::GetDamageInfoView
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x2C]
	push esi
	mov byte ptr [esp+0x70],0x2D
	push 0xA
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x5C],0x2B
	test eax,eax
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block124:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0x2A
	test eax,eax
	je Block126

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block126:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x5C],0x29
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],0x17
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block134:
	inc edi
	add esi,0xF
	cmp edi,9
	jl Block120

 Block135:
	mov ecx,dword ptr [esp+0x20]
	cmp dword ptr [ecx+0xB0C],0
	je Block170

 Block136:
	mov edi,dword ptr [esp+0x1C]
	mov esi,0xA
	mov bl,0x31
	lea esp,[esp]

 Block137:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block138:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x60],0x2E
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block139:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x30]
	push 0x38
	push edx
	mov byte ptr [esp+0x6C],0x2F
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push esi
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x70],0x30
	call CBattleRecordMan::GetDamageInfoView
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	push ebp
	mov byte ptr [esp+0x70],0x32
	push 0xDC
	mov ecx,edi
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x5C],0x30
	test eax,eax
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block141:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0x2F
	test eax,eax
	je Block143

 Block142:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block143:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x5C],0x2E
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],0x17
	jne Block150

 Block148:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block151:
	inc esi
	add ebp,0xF
	cmp esi,0xE
	jl Block137

 Block152:
	jmp Block170

 Block153:
	cmp eax,1
	jne Block170

 Block154:
	mov ebp,dword ptr [esp+0x1C]
	xor edi,edi
	mov bl,0x36

 Block155:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block156:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x60],0x33
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block157:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x30]
	push 0x38
	push ecx
	mov byte ptr [esp+0x6C],0x34
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push edi
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x70],0x35
	call CBattleRecordMan::GetRecoveryInfoView
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_0
	push esi
	mov byte ptr [esp+0x70],0x37
	push 0xA
	mov ecx,ebp
	mov byte ptr [esp+0x74],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x5C],0x35
	test eax,eax
	je Block159

 Block158:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block159:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x5C],0x34
	test eax,eax
	je Block161

 Block160:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block161:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x5C],0x33
	jne Block164

 Block162:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block165:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x5C],0x17
	jne Block168

 Block166:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block169:
	inc edi
	add esi,0xF
	cmp edi,0xA
	jl Block155

 Block170:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x5C],6
	test eax,eax
	je Block172

 Block171:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block172:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],1
	test eax,eax
	je Block174

 Block173:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block174:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],0
	test eax,eax
	je Block176

 Block175:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block176:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CUIBattleRecord::Update
__SUB_CLASS_THIS0(003730E0, __thiscall, 71482,  CUIBattleRecord, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call timeGetTime
	mov edi,eax
	mov eax,dword ptr [esi+0x15BC]
	test eax,eax
	je Block3

 Block1:
	cmp eax,edi
	ja Block3

 Block2:
	mov dword ptr [esi+0x15BC],0
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	push 0
	call CBattleRecordMan::RequestOnCalc
	mov eax,dword ptr [esi+0xB2C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov eax,dword ptr [esi+0xB5C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block3:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block6

 Block4:
	cmp edi,eax
	jb Block6

 Block5:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	call timeGetTime
	add eax,0x3E8
	mov dword ptr [esi+0xB08],eax

 Block6:
	pop edi
	mov ecx,esi
	pop esi
	jmp  CWnd::Update
}
}
// CUIBattleRecord::CUIBattleRecord
_SUB_EXCEPTION_HANDLER(373370)
__SUB_CLASS_THIS0(00373370, __thiscall, 71480,  CUIBattleRecord, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_373370
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
	xor edi,edi
	push edi
	push edi
	push 1
	push 6
	push 0xAA
	push 3
	push 0x23
	call CUIWnd::_ctor_0
	lea ebx,[esi+0xB08]
	mov dword ptr [esp+0x1C],edi
	cmp ebx,edi
	je Block2

 Block1:
	lea eax,[ebx-0xB08]
	mov dword ptr [TSingleton<CUIBattleRecord>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIBattleRecord>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x1C],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIBattleRecord::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIBattleRecord::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIBattleRecord::`vftable'{for `ZRefCounted'}
	call timeGetTime
	mov dword ptr [ebx],eax
	mov dword ptr [esi+0xB0C],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB3C],edi
	mov dword ptr [esi+0xB44],edi
	mov dword ptr [esi+0xB4C],edi
	mov dword ptr [esi+0xB54],edi
	mov dword ptr [esi+0xB5C],edi
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB6C],edi
	lea ecx,[esi+0xB70]
	mov byte ptr [esp+0x1C],0xD
	call CUIToolTip::_ctor_default
	push 0xA
	push 0xFA
	push 0xC8
	mov ecx,esi
	mov byte ptr [esp+0x28],0xE
	mov dword ptr [esi+0x15B8],0xFFFFFFFF
	mov dword ptr [esi+0x15BC],edi
	mov dword ptr [esi+0x15C0],edi
	mov dword ptr [esi+0x15C4],edi
	call CUIWnd::CreateUIWndPosSaved
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	push 1
	call CBattleRecordMan::RequestOnCalc
	mov eax,esi
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
// CUIBattleRecord::SetBtToolTip
_SUB_EXCEPTION_HANDLER(3759E0)
__SUB_CLASS_THIS(003759E0, __thiscall, 71487,  CUIBattleRecord, void, NakedParam<ZRef<CCtrlButton>>, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3759E0
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
	mov dword ptr [esp+0x18],edi
	cmp dword ptr [esp+0x44],0
	mov dword ptr [esp+0x38],0
	je Block13

 Block1:
	mov esi,dword ptr [esp+0x48]
	test esi,esi
	je Block13

 Block2:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
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
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0x44],1
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x1C]
	push 0
	push eax
	mov byte ptr [esp+0x48],2
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],3
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov byte ptr [esp+0x40],4
	call IWzFont::CalcTextWidth
	mov edx,dword ptr [edi+4]
	mov ebx,dword ptr [esp+0x44]
	add edi,4
	mov esi,eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov ebp,eax
	shr esi,1
	mov ecx,ebx
	sub ebp,esi
	call CCtrlWnd::GetX
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	add esi,ebp
	mov byte ptr [esp+0x38],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],0
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ebx,dword ptr [esp+0x44]
	mov ecx,edi
	call eax
	mov ecx,ebx
	mov edi,eax
	call CCtrlWnd::GetY
	mov ecx,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	lea eax,[edi+eax+0x1E]
	push eax
	push esi
	add ecx,0xB70
	call CUIToolTip::SetToolTip_String
	jmp Block14

 Block13:
	lea ecx,[edi+0xB70]
	call CUIToolTip::ClearToolTip

 Block14:
	cmp dword ptr [esp+0x44],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x44]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 0xC
}
}
// CUIBattleRecord::CInputDlg::OnCreate
_SUB_EXCEPTION_HANDLER(375B80)
__SUB_CLASS_THIS(00375B80, __thiscall, 71507,  CUIBattleRecord::CInputDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_375B80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esp+0x14]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x5C],0
	mov dword ptr [esp+0x3C],0xFF000000
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov byte ptr [esp+0x58],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block10

 Block4:
	add eax,8
	je Block10

 Block5:
	lea edi,[eax-8]
	test edi,edi
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x98]
	mov eax,2
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],eax
	lea eax,[esp+0x14]
	push eax
	push 0xF
	push 0x2D
	push 0
	mov dword ptr [esp+0x58],ecx
	mov ecx,dword ptr [esi+0xA0]
	push 0
	mov dword ptr [esp+0x58],0x32
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	push 0xBB8
	push esi
	call edx
	mov eax,dword ptr [esi+0xA0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x50
	ret 4

 Block10:
	xor edi,edi
	jmp Block7
}
}
// CUIBattleRecord::OnDestroy
__SUB_CLASS_THIS0(003732F0, __thiscall, 71482,  CUIBattleRecord, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CUIWnd::OnDestroy
	cmp dword ptr [esi+0x15C4],0
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	push 0
	call CBattleRecordMan::RequestOnCalc

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	pop esi
	ret
}
}
