#include "regen.hpp"
// UIQuestInfo.ipp
#include "UIQuestInfo.hpp"

// CUIQuestInfoDetail::Update
__SUB_CLASS_THIS0(00429C10, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call CWnd::Update
	call dword ptr [ZImports::_timeGetTime]
	mov edi,eax
	mov eax,dword ptr [esi+0xF4]
	add eax,0x1F4
	cmp eax,edi
	jge Block2

 Block1:
	mov ecx,esi
	call CUIQuestInfoDetail::DrawTimeText
	mov dword ptr [esi+0xF4],edi

 Block2:
	mov ecx,dword ptr [esi+0x100]
	pop edi
	pop esi
	test ecx,ecx
	je Block4

 Block3:
	jmp  CAvatar::Update

 Block4:
	ret
}
}
// CUIQuestAlarm::OnButtonClicked
_SUB_EXCEPTION_HANDLER(431D00)
__SUB_CLASS_THIS(00431D00, __thiscall, 58742,  CUIQuestAlarm, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_431D00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x30]
	cmp eax,0x7D0
	ja Block11

 Block1:
	je Block6

 Block2:
	cmp eax,0x3E8
	jne Block34

 Block3:
	lea ecx,[esi+0xB08]
	call ZArray<long>::RemoveAll
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::DeleteAllQuestAlarm
	mov ecx,dword ptr [TSingleton<CUIQuestInfoDetail>::ms_pInstance]
	test ecx,ecx
	je Block5

 Block4:
	call CUIQuestInfoDetail::ResetInfo

 Block5:
	mov ecx,esi
	call CWnd::Destroy
	mov dword ptr [esi+0xB84],0
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push 0
	call CConfig::SetQuestAlarmOpened
	jmp Block34

 Block6:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block8

 Block7:
	cmp dword ptr [eax-4],0
	jne Block10

 Block8:
	lea eax,[esp+0x10]
	push 0x18EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov dword ptr [esp+0x30],0
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block34

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block34

 Block10:
	mov dword ptr [esi+0xB0C],1
	call CWnd::Destroy
	mov ecx,esi
	call CUIQuestAlarm::Create
	jmp Block34

 Block11:
	lea ecx,[eax-0x7D1]
	cmp ecx,7
	ja Block34

 Block12:
	cmp ECX, 0
je Block13
cmp ECX, 1
je Block14
cmp ECX, 2
je Block14
cmp ECX, 3
je Block14
cmp ECX, 4
je Block14
cmp ECX, 5
je Block14
cmp ECX, 6
je Block30
cmp ECX, 7
je Block31


 Block13:
	mov ecx,esi
	mov dword ptr [esi+0xB0C],0
	call CWnd::Destroy
	mov ecx,esi
	call CUIQuestAlarm::Create
	jmp Block34

 Block14:
	lea ebp,[eax-0x7D2]
	xor eax,eax
	lea ecx,[esi+0xBA4]

 Block15:
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block19

 Block16:
	cmp eax,dword ptr [edx-4]
	jae Block19

 Block17:
	mov edi,dword ptr [ecx]
	mov edx,dword ptr [esi+0xB08]
	mov edi,dword ptr [edi+eax*4]
	cmp edi,dword ptr [edx+ebp*4]
	je Block19

 Block18:
	inc eax
	jmp Block15

 Block19:
	mov edx,dword ptr [ecx]
	test edx,edx
	je Block21

 Block20:
	cmp eax,dword ptr [edx-4]
	jb Block22

 Block21:
	mov eax,dword ptr [esi+0xB08]
	push 0xFFFFFFFF
	lea edi,[eax+ebp*4]
	call ZArray<long>::InsertBefore
	mov ecx,dword ptr [edi]
	mov dword ptr [eax],ecx

 Block22:
	mov dword ptr [esp+0x30],0
	mov edx,dword ptr [esi+0xB08]
	lea eax,[edx+ebp*4]
	movzx eax,word ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov dword ptr [esp+0x30],1
	call CQuestMan::GetQuestName
	mov edi,eax
	lea edx,[esp+0x14]
	push 0x106F
	push edx
	mov byte ptr [esp+0x30],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x28],2
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov edi,dword ptr [esp+0x30]
	je Block28

 Block27:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0
	push 0xFFFFFFFF
	push 7
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edi
	call CUIStatusBar::ChatLogAdd

 Block28:
	push ebp
	mov ecx,esi
	call CUIQuestAlarm::DeleteQuestByIndex
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test edi,edi
	je Block34

 Block29:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block34

 Block30:
	mov ecx,dword ptr [esi+0xB58]
	xor eax,eax
	cmp dword ptr [esi+0xBA8],eax
	sete al
	add ecx,4
	mov dword ptr [esi+0xBA8],eax
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ecx,dword ptr [esi+0xBA8]
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::SetQuestAlarmAutoRegister
	jmp Block34

 Block31:
	mov edx,dword ptr [esi+0xB60]
	cmp dword ptr [edx+0xAE8],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	je Block33

 Block32:
	push 6
	call CWvsContext::UI_Close
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0
	push 6
	call CWvsContext::UI_Open
	jmp Block34

 Block33:
	push 0xFFFFFFFF
	push 6
	call CWvsContext::UI_Toggle

 Block34:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	call CWndMan::SetFocus
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 4
}
}
// CUIQuestInfo::GetQuestState
__SUB_CLASS_THIS(00422270, __thiscall, 58594,  CUIQuestInfo, long, uint16_t, _FILETIME&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	push esi
	lea eax,[esp+0xC]
	push eax
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block5

 Block1:
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
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
	mov dword ptr [esp+0x14],0
	pop edi

 Block5:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	mov ecx,ebx
	call CWvsContext::GetQuestState
	mov esi,eax
	cmp esi,2
	jne Block7

 Block6:
	mov edx,dword ptr [esp+0x1C]
	push edx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[ebp+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt

 Block7:
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 8
}
}
// CUIQuestInfo::IsWorthlessQuest
__SUB_CLASS_THIS(004223B0, __thiscall, 58598,  CUIQuestInfo, int32_t, uint16_t) {
__asm {

 Block0:
	sub esp,8
	cmp word ptr [esp+0xC],0
	push ebp
	mov ebp,ecx
	jne Block2

 Block1:
	xor eax,eax
	pop ebp
	add esp,8
	ret 4

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	push esi
	push edi
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block7

 Block3:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
	mov dword ptr [esp+0x14],0

 Block7:
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	call CQuestMan::GetStartDemand
	mov edi,eax
	test edi,edi
	jne Block9

 Block8:
	pop edi
	pop esi
	pop ebx
	pop ebp
	add esp,8
	ret 4

 Block9:
	mov edx,dword ptr [ebx+0x35]
	push edx
	add ebx,0x33
	push ebx
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov ecx,dword ptr [edi+0x1C]
	movzx edx,al
	add esp,8
	add ecx,0xA
	cmp edx,ecx
	sbb esi,esi
	xor eax,eax
	inc esi
	cmp dword ptr [ebp+0xB18],eax
	push offset _D_DB_DATE_20790101
	sete al
	add edi,0x40
	push edi
	and esi,eax
	call CompareFileTime
	neg eax
	sbb eax,eax
	pop edi
	inc eax
	and eax,esi
	pop esi
	pop ebx
	pop ebp
	add esp,8
	ret 4
}
}
// CUIQuestInfo::OnCreate
_SUB_EXCEPTION_HANDLER(427600)
__SUB_CLASS_THIS(00427600, __thiscall, 58565,  CUIQuestInfo, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_427600
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x10],edi
	push 0
	push 0
	lea ecx,[edi+0xBBC]
	push edi
	call CLayoutMan::Init
	push 1
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x28],esp
	push 0x48
	push offset _S_UIUIWINDOW2IMGQU__15
	push 0
	push 0x24
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [ebp+0x70]
	push eax
	mov ecx,edi
	call CUIWnd::OnCreate_1
	lea esi,[edi+0xB84]
	mov ebx,4
	lea ecx,[ecx]

 Block1:
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov eax,dword ptr [ecx+0x9C]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	lea edx,[ebp+0x4F]
	push edx
	push eax
	lea ecx,[esi-0x10]
	call ZArray<ZRef<CCtrlButton>>::_Alloc
	mov eax,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov eax,dword ptr [eax+0x9C]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	lea ecx,[ebp+0x4F]
	push ecx
	push eax
	mov ecx,esi
	call ZArray<ZRef<CCtrlButton>>::_Alloc
	add esi,4
	sub ebx,1
	jne Block1

 Block6:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x3C]
	push edx
	call esi
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[ebp+0x2C]
	push ecx
	mov dword ptr [ebp-4],0
	call esi
	lea edx,[ebp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	push 0
	push 0
	lea eax,[ebp+0x3C]
	push eax
	lea ecx,[ebp+0x2C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x28],esp
	push 0xCC1
	push edx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],2
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[ebp+0x54]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block18

 Block13:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x50]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xB30]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x50]
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov dword ptr [edi+0xB30],ebx
	test esi,esi
	jge Block20

 Block16:
	cmp esi,0x80004002
	je Block20

 Block17:
	push esi
	call _com_issue_error

 Block18:
	mov eax,dword ptr [edi+0xB30]
	test eax,eax
	je Block20

 Block19:
	mov dword ptr [edi+0xB30],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x54],bx
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp+0x54]
	push ecx
	call esi

 Block24:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x2C],bx
	jne Block27

 Block25:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp+0x2C]
	push eax
	call esi

 Block28:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x3C],bx
	jne Block31

 Block29:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[ebp+0x3C]
	push edx
	call esi

 Block32:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x2C]
	push eax
	call esi
	lea ecx,[ebp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea edx,[ebp+0x3C]
	push edx
	mov dword ptr [ebp-4],4
	call esi
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	push 0
	push 0
	lea ecx,[ebp+0x2C]
	push ecx
	lea edx,[ebp+0x3C]
	push edx
	push ecx
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGQU__14
	mov byte ptr [ebp-4],5
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[ebp+0x54]
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block44

 Block39:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x50]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xB34]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x50]
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov dword ptr [edi+0xB34],ebx
	test esi,esi
	jge Block46

 Block42:
	cmp esi,0x80004002
	je Block46

 Block43:
	push esi
	call _com_issue_error

 Block44:
	mov eax,dword ptr [edi+0xB34]
	test eax,eax
	je Block46

 Block45:
	mov dword ptr [edi+0xB34],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],5
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov ebx,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp+0x3C],bx
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x2C],bx
	jne Block57

 Block55:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x2C]
	push eax
	call esi
	lea ecx,[ebp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea edx,[ebp+0x3C]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp+0x3C]
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
	push 0
	push 0
	lea ecx,[ebp+0x2C]
	push ecx
	lea edx,[ebp+0x3C]
	push edx
	push ecx
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGQU__13
	mov byte ptr [ebp-4],9
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xA
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea eax,[ebp+0x54]
	mov byte ptr [ebp-4],9
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block70

 Block65:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x50]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xB38]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x50]
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov dword ptr [edi+0xB38],ebx
	test esi,esi
	jge Block72

 Block68:
	cmp esi,0x80004002
	je Block72

 Block69:
	push esi
	call _com_issue_error

 Block70:
	mov eax,dword ptr [edi+0xB38]
	test eax,eax
	je Block72

 Block71:
	mov dword ptr [edi+0xB38],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],9
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov esi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x3C],si
	jne Block79

 Block77:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x2C],si
	jne Block83

 Block81:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x2C]
	push eax
	call esi
	lea ecx,[ebp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea edx,[ebp+0x3C]
	push edx
	mov dword ptr [ebp-4],0xC
	call esi
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
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
	lea ecx,[ebp+0x2C]
	push ecx
	lea edx,[ebp+0x3C]
	push edx
	push ecx
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGQU__12
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea eax,[ebp+0x54]
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block96

 Block91:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x50]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xB3C]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x50]
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov dword ptr [edi+0xB3C],ebx
	test esi,esi
	jge Block98

 Block94:
	cmp esi,0x80004002
	je Block98

 Block95:
	push esi
	call _com_issue_error

 Block96:
	mov eax,dword ptr [edi+0xB3C]
	test eax,eax
	je Block98

 Block97:
	mov dword ptr [edi+0xB3C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block98:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0xD
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov esi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x3C],si
	jne Block105

 Block103:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x2C],si
	jne Block109

 Block107:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x2C]
	push eax
	call esi
	lea ecx,[ebp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	lea edx,[ebp+0x3C]
	push edx
	mov dword ptr [ebp-4],0x10
	call esi
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	push 0
	push 0
	lea ecx,[ebp+0x2C]
	push ecx
	lea edx,[ebp+0x3C]
	push edx
	push ecx
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGQU__11
	mov byte ptr [ebp-4],0x11
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x12
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
	lea eax,[ebp+0x54]
	mov byte ptr [ebp-4],0x11
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block122

 Block117:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x50]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xB40]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x50]
	test eax,eax
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	mov dword ptr [edi+0xB40],ebx
	test esi,esi
	jge Block124

 Block120:
	cmp esi,0x80004002
	je Block124

 Block121:
	push esi
	call _com_issue_error

 Block122:
	mov eax,dword ptr [edi+0xB40]
	test eax,eax
	je Block124

 Block123:
	mov dword ptr [edi+0xB40],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block124:
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x11
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov esi,8
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x3C],si
	jne Block131

 Block129:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block132:
	or ebx,0xFFFFFFFF
	mov dword ptr [ebp-4],ebx
	cmp word ptr [ebp+0x2C],si
	jne Block135

 Block133:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-0x48],0
	mov dword ptr [ebp-0x44],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x28],eax
	mov dword ptr [ebp-4],0x14
	test eax,eax
	je Block138

 Block137:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block139

 Block138:
	xor eax,eax

 Block139:
	mov dword ptr [ebp-4],ebx
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	test eax,eax
	je Block149

 Block140:
	add eax,8
	je Block149

 Block141:
	lea esi,[eax-8]
	test esi,esi
	je Block143

 Block142:
	lea eax,[esi+0xC]
	push eax
	call ebx

 Block143:
	mov eax,dword ptr [edi+0xB0C]
	mov dword ptr [edi+0xB0C],esi
	test eax,eax
	je Block147

 Block144:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block147

 Block145:
	lea edx,[esi+4]
	push edx
	call ebx
	test esi,esi
	je Block147

 Block146:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block147:
	mov ecx,dword ptr [edi+0xB0C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp-0x48]
	push edx
	push 0x14
	push 0xEF
	push 0x19
	push 9
	push 8
	push 0x7D0
	push edi
	call eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x2C]
	push ecx
	call esi
	lea edx,[ebp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block150

 Block148:
	push eax
	call _com_issue_error

 Block149:
	xor esi,esi
	jmp Block143

 Block150:
	lea eax,[ebp+0x3C]
	push eax
	mov dword ptr [ebp-4],0x15
	call esi
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block152

 Block151:
	push eax
	call _com_issue_error

 Block152:
	push 0
	push 0
	lea edx,[ebp+0x2C]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	push ecx
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	mov bl,0x16
	push offset _S_UIUIWINDOW2IMGQU__10
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x17
	jne Block154

 Block153:
	push 0x80004003
	call _com_issue_error

 Block154:
	lea ecx,[ebp-0x58]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+4],0
	test eax,eax
	je Block158

 Block155:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x50]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x50]
	mov dword ptr [ebp+4],ecx
	test eax,eax
	jge Block158

 Block156:
	cmp eax,0x80004002
	je Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	mov edi,8
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x58],di
	jne Block161

 Block159:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x3C],di
	jne Block165

 Block163:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp+0x2C],di
	jne Block169

 Block167:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	lea edx,[ebp-0x30]
	push edx
	call esi
	lea eax,[ebp-0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],0x1D
	call esi
	lea edx,[ebp-0x40]
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
	push 0
	push 0
	lea eax,[ebp-0x30]
	push eax
	lea ecx,[ebp-0x40]
	push ecx
	push ecx
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	mov bl,0x1E
	push offset _S_UIUIWINDOW2IMGQU__9
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1F
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	lea edx,[ebp-0x68]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp],edi
	test eax,eax
	je Block180

 Block177:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x50]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x50]
	mov edi,ecx
	mov dword ptr [ebp],edi
	test eax,eax
	jge Block180

 Block178:
	cmp eax,0x80004002
	je Block180

 Block179:
	push eax
	call _com_issue_error

 Block180:
	mov esi,8
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x68],si
	jne Block183

 Block181:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea eax,[ebp-0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block184:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x40],si
	jne Block187

 Block185:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0x30],si
	jne Block191

 Block189:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	xor ebx,ebx
	mov dword ptr [ebp+0x50],ebx
	jmp Block195

 Block191:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block192:
	xor ebx,ebx
	mov dword ptr [ebp+0x50],ebx
	jmp Block195

 Block194:
	mov edi,dword ptr [ebp]

 Block195:
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov dword ptr [ebp+0xC],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push ebx
	call _itoa
	add esp,8
	mov dword ptr [ebp+8],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x25
	test edi,edi
	je Block11

 Block196:
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x24
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x18],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block201

 Block197:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x20]
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
	and ecx,dword ptr [ebp-0x20]
	mov dword ptr [ebp+8],ecx
	test eax,eax
	je Block199

 Block198:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block199:
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [esi],ecx
	test edi,edi
	jge Block201

 Block200:
	cmp edi,0x80004002
	jne Block222

 Block201:
	mov edx,dword ptr [ebp+0xC]
	push 0
	push 0
	push 0xA
	push edx
	push ebx
	mov byte ptr [ebp-4],0x27
	call _itoa
	add esp,8
	mov dword ptr [ebp+0xC],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x28
	test ecx,ecx
	je Block11

 Block202:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],0x27
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x29
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0xC],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block207

 Block203:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x28]
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
	and ebx,dword ptr [ebp+0x28]
	test eax,eax
	je Block205

 Block204:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block205:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block207

 Block206:
	cmp edi,0x80004002
	jne Block222

 Block207:
	mov esi,dword ptr [ebp+0x10]
	mov ecx,dword ptr [esi+0xB0C]
	mov byte ptr [ebp-4],0x2A
	call CCtrlTab::AddItem_Canvas
	mov edi,8
	mov byte ptr [ebp-4],0x26
	cmp word ptr [ebp+0x54],di
	jne Block210

 Block208:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block211:
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0x1C],di
	jne Block214

 Block212:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block215

 Block213:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block215

 Block214:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block215:
	mov ebx,dword ptr [ebp+0x50]
	inc ebx
	cmp ebx,4
	mov dword ptr [ebp+0x50],ebx
	jl Block194

 Block216:
	lea ecx,[ebp+0x4F]
	push ecx
	lea ebx,[esi+0xB54]
	push edi
	mov ecx,ebx
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	mov esi,edi
	lea ecx,[ecx]

 Block217:
	lea edx,[ebp+0x28]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [eax]
	push 0
	add ecx,esi
	push ecx
	push eax
	mov byte ptr [ebp-4],0x2B
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block219

 Block218:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block219:
	add esi,4
	cmp esi,0x20
	jl Block217

 Block220:
	lea edx,[ebp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block223

 Block221:
	push eax
	call _com_issue_error

 Block222:
	push edi
	call _com_issue_error

 Block223:
	lea ecx,[ebp+0x1C]
	push ecx
	push 0xFFFF0000
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	push edx
	mov byte ptr [ebp-4],0x2C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebx]
	add eax,edi
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	mov ecx,eax
	mov byte ptr [ebp-4],0x2C
	call IWzFont::Create
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp+0x1C],di
	jne Block228

 Block226:
	xor eax,eax
	mov word ptr [ebp+0x1C],ax
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea ecx,[ebp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block229:
	lea edx,[ebp+0x28]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2E
	test eax,eax
	je Block231

 Block230:
	mov edi,dword ptr [eax]
	jmp Block232

 Block231:
	xor edi,edi

 Block232:
	mov eax,8
	mov word ptr [ebp+0x54],ax
	test edi,edi
	jne Block234

 Block233:
	xor esi,esi
	jmp Block238

 Block234:
	mov eax,edi
	lea edx,[eax+2]

 Block235:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block235

 Block236:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea ecx,[ebx+ebx+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block238

 Block237:
	lea eax,[ebx+ebx]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push edi
	push esi
	call _memcpy
	add esp,0xC

 Block238:
	mov dword ptr [ebp+0x5C],esi
	test esi,esi
	jne Block241

 Block239:
	test edi,edi
	je Block241

 Block240:
	push 0x8007000E
	call _com_issue_error

 Block241:
	lea edx,[ebp+0x54]
	push edx
	push 0xFFFF0000
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	mov bl,0x2F
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x10]
	mov eax,dword ptr [edi+0xB54]
	add edi,0xB54
	add eax,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x30
	test eax,eax
	jne Block243

 Block242:
	push 0x80004003
	call _com_issue_error

 Block243:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x2E
	jne Block246

 Block244:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	test eax,eax
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block247:
	mov esi,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x24
	test esi,esi
	je Block255

 Block248:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block255

 Block249:
	test esi,esi
	je Block255

 Block250:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block252

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block252:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block254

 Block253:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block254:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block255:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block257

 Block256:
	push eax
	call _com_issue_error

 Block257:
	lea eax,[ebp+0x54]
	push eax
	push 0xFF00FF00
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	mov bl,0x31
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x10
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x32
	test eax,eax
	jne Block259

 Block258:
	push 0x80004003
	call _com_issue_error

 Block259:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x24
	jne Block262

 Block260:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	test eax,eax
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block263:
	lea ecx,[ebp+0x28]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x33
	test eax,eax
	je Block265

 Block264:
	mov edi,dword ptr [eax]
	jmp Block266

 Block265:
	xor edi,edi

 Block266:
	mov edx,8
	mov word ptr [ebp+0x54],dx
	test edi,edi
	jne Block268

 Block267:
	xor esi,esi
	jmp Block272

 Block268:
	mov eax,edi
	lea edx,[eax+2]
	lea ecx,[ecx]

 Block269:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block269

 Block270:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea eax,[ebx+ebx+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block272

 Block271:
	lea eax,[ebx+ebx]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push edi
	push esi
	call _memcpy
	add esp,0xC

 Block272:
	mov dword ptr [ebp+0x5C],esi
	test esi,esi
	jne Block275

 Block273:
	test edi,edi
	je Block275

 Block274:
	push 0x8007000E
	call _com_issue_error

 Block275:
	lea ecx,[ebp+0x54]
	push ecx
	push 0xFF00FF00
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	push edx
	mov byte ptr [ebp-4],0x34
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x10]
	mov eax,dword ptr [ebx+0xB54]
	add ebx,0xB54
	add eax,0x14
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x35
	test eax,eax
	jne Block277

 Block276:
	push 0x80004003
	call _com_issue_error

 Block277:
	mov ecx,eax
	mov byte ptr [ebp-4],0x34
	call IWzFont::Create
	mov edi,8
	mov byte ptr [ebp-4],0x33
	cmp word ptr [ebp+0x54],di
	jne Block280

 Block278:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block281

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block280:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block281:
	mov esi,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x24
	test esi,esi
	je Block289

 Block282:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block289

 Block283:
	test esi,esi
	je Block289

 Block284:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block286

 Block285:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block286:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block288

 Block287:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block288:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block289:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block291

 Block290:
	push eax
	call _com_issue_error

 Block291:
	lea edx,[ebp+0x54]
	push edx
	push 0xFF0000FF
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	push eax
	mov byte ptr [ebp-4],0x36
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebx]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x37
	test eax,eax
	jne Block293

 Block292:
	push 0x80004003
	call _com_issue_error

 Block293:
	mov ecx,eax
	mov byte ptr [ebp-4],0x36
	call IWzFont::Create
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp+0x54],di
	jne Block296

 Block294:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	test eax,eax
	je Block297

 Block295:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block297

 Block296:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block297:
	lea eax,[ebp+0x28]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x38
	test eax,eax
	je Block299

 Block298:
	mov edi,dword ptr [eax]
	jmp Block300

 Block299:
	xor edi,edi

 Block300:
	mov ecx,8
	mov word ptr [ebp+0x54],cx
	test edi,edi
	jne Block302

 Block301:
	xor esi,esi
	jmp Block306

 Block302:
	mov eax,edi
	lea edx,[eax+2]
	lea esp,[esp]

 Block303:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block303

 Block304:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea edx,[ebx+ebx+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block306

 Block305:
	lea eax,[ebx+ebx]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push edi
	push esi
	call _memcpy
	add esp,0xC

 Block306:
	mov dword ptr [ebp+0x5C],esi
	test esi,esi
	jne Block309

 Block307:
	test edi,edi
	je Block309

 Block308:
	push 0x8007000E
	call _com_issue_error

 Block309:
	lea eax,[ebp+0x54]
	push eax
	push 0xFF0000FF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	mov bl,0x39
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x10]
	mov eax,dword ptr [edi+0xB54]
	add eax,0x1C
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	jne Block311

 Block310:
	push 0x80004003
	call _com_issue_error

 Block311:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x38
	jne Block314

 Block312:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	test eax,eax
	je Block315

 Block313:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block315

 Block314:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block315:
	mov esi,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x24
	test esi,esi
	je Block323

 Block316:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block323

 Block317:
	test esi,esi
	je Block323

 Block318:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block320

 Block319:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block320:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block322

 Block321:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block322:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block323:
	lea edx,[ebp+0x28]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[edi+0xB44]
	push esi
	push eax
	mov byte ptr [ebp-4],0x3B
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block325

 Block324:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block325:
	lea eax,[ebp+0x28]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xB48]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x3C
	mov dword ptr [ebp+0xC],ecx
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block327

 Block326:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block327:
	lea ecx,[ebp+0x28]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xB4C]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x3D
	mov dword ptr [ebp+8],ecx
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block329

 Block328:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block329:
	lea edx,[ebp+0x28]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xB50]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x3E
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block331

 Block330:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block331:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block333

 Block332:
	push eax
	call _com_issue_error

 Block333:
	lea edx,[ebp+0x54]
	push edx
	push 0xFF666666
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	mov bl,0x3F
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x40
	test ecx,ecx
	jne Block335

 Block334:
	push 0x80004003
	call _com_issue_error

 Block335:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x24
	jne Block338

 Block336:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	test eax,eax
	je Block339

 Block337:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block339

 Block338:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block339:
	lea eax,[ebp+0x28]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x41
	test eax,eax
	je Block341

 Block340:
	mov edi,dword ptr [eax]
	jmp Block342

 Block341:
	xor edi,edi

 Block342:
	mov ecx,8
	mov word ptr [ebp+0x54],cx
	test edi,edi
	jne Block344

 Block343:
	xor esi,esi
	jmp Block348

 Block344:
	mov eax,edi
	lea edx,[eax+2]
	nop

 Block345:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block345

 Block346:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea edx,[ebx+ebx+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block348

 Block347:
	lea eax,[ebx+ebx]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push edi
	push esi
	call _memcpy
	add esp,0xC

 Block348:
	mov dword ptr [ebp+0x5C],esi
	test esi,esi
	jne Block351

 Block349:
	test edi,edi
	je Block351

 Block350:
	push 0x8007000E
	call _com_issue_error

 Block351:
	lea eax,[ebp+0x54]
	push eax
	push 0xFF666666
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	mov bl,0x42
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edx,dword ptr [ebp+0xC]
	mov ecx,dword ptr [edx]
	mov byte ptr [ebp-4],0x43
	test ecx,ecx
	jne Block353

 Block352:
	push 0x80004003
	call _com_issue_error

 Block353:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x41
	jne Block356

 Block354:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block357

 Block355:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block357

 Block356:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block357:
	mov esi,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x24
	test esi,esi
	je Block365

 Block358:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block365

 Block359:
	test esi,esi
	je Block365

 Block360:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block362

 Block361:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block362:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block364

 Block363:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block364:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block365:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block367

 Block366:
	push eax
	call _com_issue_error

 Block367:
	lea edx,[ebp+0x54]
	push edx
	push 0xFF333333
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	mov bl,0x44
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov ecx,dword ptr [ecx]
	mov byte ptr [ebp-4],0x45
	test ecx,ecx
	jne Block369

 Block368:
	push 0x80004003
	call _com_issue_error

 Block369:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x24
	jne Block372

 Block370:
	mov eax,dword ptr [ebp+0x5C]
	xor edx,edx
	mov word ptr [ebp+0x54],dx
	test eax,eax
	je Block373

 Block371:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block373

 Block372:
	lea eax,[ebp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block373:
	lea ecx,[ebp+0x28]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x46
	test eax,eax
	je Block375

 Block374:
	mov edi,dword ptr [eax]
	jmp Block376

 Block375:
	xor edi,edi

 Block376:
	mov edx,8
	mov word ptr [ebp+0x54],dx
	test edi,edi
	jne Block378

 Block377:
	xor esi,esi
	jmp Block382

 Block378:
	mov eax,edi
	lea edx,[eax+2]

 Block379:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block379

 Block380:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea eax,[ebx+ebx+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block382

 Block381:
	lea eax,[ebx+ebx]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push edi
	push esi
	call _memcpy
	add esp,0xC

 Block382:
	mov dword ptr [ebp+0x5C],esi
	test esi,esi
	jne Block385

 Block383:
	test edi,edi
	je Block385

 Block384:
	push 0x8007000E
	call _com_issue_error

 Block385:
	lea ecx,[ebp+0x54]
	push ecx
	push 0xFF333333
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x18],esp
	push 0x1A25
	mov bl,0x47
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x10]
	mov ecx,dword ptr [edi+0xB50]
	mov byte ptr [ebp-4],0x48
	test ecx,ecx
	jne Block387

 Block386:
	push 0x80004003
	call _com_issue_error

 Block387:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x46
	jne Block390

 Block388:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block391

 Block389:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block391

 Block390:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block391:
	mov esi,dword ptr [ebp+0x28]
	xor ebx,ebx
	mov byte ptr [ebp-4],0x24
	cmp esi,ebx
	je Block399

 Block392:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block399

 Block393:
	cmp esi,ebx
	je Block399

 Block394:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block396

 Block395:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block396:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block398

 Block397:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block398:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block399:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x18],eax
	mov byte ptr [ebp-4],0x49
	cmp eax,ebx
	je Block401

 Block400:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block402

 Block401:
	xor eax,eax

 Block402:
	mov byte ptr [ebp-4],0x24
	cmp eax,ebx
	je Block423

 Block403:
	add eax,8
	cmp eax,ebx
	je Block423

 Block404:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block406

 Block405:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block406:
	mov eax,dword ptr [edi+0xB14]
	mov dword ptr [edi+0xB14],esi
	cmp eax,ebx
	je Block410

 Block407:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block410

 Block408:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block410

 Block409:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block410:
	mov ecx,dword ptr [edi+0xB14]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push ebx
	push 0x13E
	push 0x30
	push 0xD9
	push 8
	push 1
	push 0x7D1
	push edi
	call edx
	mov eax,dword ptr [edi+0xB14]
	mov dword ptr [eax+0x34],0xCF
	mov dword ptr [ebp-0x10],ebx
	mov dword ptr [ebp-0x18],ebx
	mov dword ptr [ebp-0x14],ebx
	push ebx
	push ebx
	push ebx
	push 0x1388
	push offset _S_UIUIWINDOW2IMGQU__8
	lea eax,[ebp+0x14]
	lea esi,[edi+0xBBC]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x4A
	mov dword ptr [ebp-0x1C],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [ebp-4],0x4B
	cmp eax,ebx
	je Block424

 Block411:
	add eax,8
	cmp eax,ebx
	je Block424

 Block412:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block414

 Block413:
	lea ecx,[ebx+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block414:
	mov edi,dword ptr [ebp+0x10]
	mov eax,dword ptr [edi+0xB98]
	mov dword ptr [edi+0xB98],ebx
	mov dword ptr [ebp+0x28],eax
	test eax,eax
	je Block416

 Block415:
	push 0
	lea ecx,[ebp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block416:
	cmp dword ptr [ebp+0x18],0
	mov byte ptr [ebp-4],0x4A
	je Block418

 Block417:
	push 0
	lea ecx,[ebp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block418:
	mov ecx,dword ptr [edi+0xB98]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x24]
	add ecx,4
	push 0
	call eax
	push 0
	push 0
	push 0
	push 0x1389
	push offset _S_UIUIWINDOW2IMGQU__7
	lea ecx,[ebp+0x14]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[edi+0xB9C]
	mov byte ptr [ebp-4],0x4C
	call ZRef<CCtrlButton>::op_assign_ptr
	cmp dword ptr [ebp+0x18],0
	mov byte ptr [ebp-4],0x4A
	je Block420

 Block419:
	push 0
	lea ecx,[ebp+0x14]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [ebp+0x18],0

 Block420:
	mov eax,dword ptr [edi+0xBA0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax
	mov eax,dword ptr [edi+0xB18]
	test eax,eax
	jl Block425

 Block421:
	cmp eax,2
	jg Block425

 Block422:
	push eax
	jmp Block427

 Block423:
	xor esi,esi
	jmp Block406

 Block424:
	xor ebx,ebx
	jmp Block414

 Block425:
	mov ecx,dword ptr [edi+0xB0C]
	push 1
	call CCtrlTab::SetTab
	cmp dword ptr [edi+0xB1C],0xFFFFFFFF
	jne Block428

 Block426:
	push 0

 Block427:
	mov ecx,dword ptr [edi+0xB0C]
	call CCtrlTab::SetTab

 Block428:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],edi
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x1C
	call edx
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x78]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// ZSort_ZRef_QuestInfo__QICompareFunc_
__SUB(00429840, __cdecl, 85524,  void, ZArray<ZRef<QuestInfo> >&, __POSITION*, __POSITION*, NakedParam<QICompareFunc>) {
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
	call ZArray<ZRef<QuestInfo>>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<ZRef<QuestInfo>>::IndexOf
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
	call IntroSortLoopHelper<ZRef<QuestInfo>, int, QICompareFunc>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<ZRef<QuestInfo>, QICompareFunc>::call
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
// CUIQuestInfo::OnMouseButton
_SUB_EXCEPTION_HANDLER(431980)
__SUB_CLASS_THIS(00431980, __thiscall, 58568,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_431980
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
	mov eax,dword ptr [esi+0xB14]
	test eax,eax
	jl Block18

 Block1:
	cmp eax,4
	jge Block18

 Block2:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x30]
	push eax
	lea edi,[esi-4]
	push ecx
	mov ecx,edi
	call CUIQuestInfo::GetQuestIdxFromMousePos
	mov edx,dword ptr [esi+0xB14]
	mov ebx,eax
	lea eax,[esi+edx*4+0xB58]
	test ebx,ebx
	jl Block18

 Block3:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block18

 Block4:
	cmp ebx,dword ptr [eax-4]
	jae Block18

 Block5:
	lea eax,[eax+ebx*8]
	push eax
	lea ecx,[esp+0x14]
	call ZRef<QuestInfo>::_ctor_copy
	sub esp,8
	lea eax,[esp+0x18]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov dword ptr [esp+0x2C],0
	call ZRef<QuestInfo>::_ctor_copy
	mov ecx,edi
	call CUIQuestInfo::IsCategoryButton
	test eax,eax
	je Block11

 Block6:
	cmp dword ptr [esp+0x28],0x201
	jne Block17

 Block7:
	mov ecx,dword ptr [esp+0x14]
	movzx eax,word ptr [ecx]
	mov ecx,dword ptr [esi+0xB14]
	mov edx,dword ptr [esi+ecx*4+0xB70]
	cmp dword ptr [edx+eax*8+4],0
	je Block9

 Block8:
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x20]
	lea eax,[ecx+eax*4+0xBB8]
	push eax
	mov ecx,edi
	call edx
	jmp Block17

 Block9:
	mov edx,dword ptr [esi+ecx*4+0xB80]
	cmp dword ptr [edx+eax*8+4],0
	je Block17

 Block10:
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x20]
	lea eax,[ecx+eax*4+0xFA0]
	push eax
	mov ecx,edi
	call edx
	jmp Block17

 Block11:
	cmp dword ptr [esi+0xB18],ebx
	je Block17

 Block12:
	push ebx
	mov ecx,edi
	call CUIQuestInfo::SetSelect
	cmp dword ptr [esi+0xB20],0
	je Block15

 Block13:
	cmp dword ptr [esi+0xB24],0
	je Block16

 Block14:
	mov ecx,dword ptr [esi+0xB6C]
	call CUIQuestInfoDetail::ResetInfo
	jmp Block16

 Block15:
	push 1
	mov ecx,edi
	call CUIQuestInfo::ToggleDetail

 Block16:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect

 Block17:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<QuestInfo>::~ZRef<QuestInfo>

 Block18:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 0x10
}
}
// CCtrlButtonQuestAlarmAuto::IsKindOf
__SUB_CLASS_THIS(00423890, __thiscall, 85483,  CCtrlButtonQuestAlarmAuto, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlButtonQuestAlarmAuto::ms_RTTI_CCtrlButtonQuestAlarmAuto
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
// CUIQuestInfo::GetCategoryOf
_SUB_EXCEPTION_HANDLER(4293E0)
__SUB_CLASS_THIS(004293E0, __thiscall, 58599,  CUIQuestInfo, long, uint16_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4293E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,0x20
	call __chkstk
	mov eax,esp
	xor edi,edi
	push edi
	push edi
	push 0xA
	push eax
	movzx eax,word ptr [ebp+8]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0xB30]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x34]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],3
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [ebp-0x14]
	cmp esi,edi
	sete al
	test al,al
	je Block13

 Block10:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,edi
	je Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block12:
	xor eax,eax
	jmp Block24

 Block13:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x38],esp
	push 0x6F0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],4
	cmp esi,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[ebp-0x24]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],5
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x24],8
	mov edi,eax
	mov byte ptr [ebp-4],3
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov edx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov eax,dword ptr [edx+0x9C]
	test eax,eax
	je Block21

 Block20:
	mov eax,dword ptr [eax-4]

 Block21:
	cmp edi,eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	push esi
	jl Block23

 Block22:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	call ecx
	xor eax,eax
	jmp Block24

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	call eax
	mov eax,edi

 Block24:
	lea esp,[ebp-0x44]
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
// CUIQuestAlarm::DeleteQuestByIndex
__SUB_CLASS_THIS(00431CD0, __thiscall, 58756,  CUIQuestAlarm, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CUIQuestAlarm::RemoveQuestByIndex
	mov ecx,dword ptr [TSingleton<CUIQuestInfoDetail>::ms_pInstance]
	test ecx,ecx
	je Block2

 Block1:
	call CUIQuestInfoDetail::ResetInfo

 Block2:
	mov ecx,esi
	call CWnd::Destroy
	mov ecx,esi
	call CUIQuestAlarm::Create
	pop esi
	ret 4
}
}
// CUIQuestInfoDetail::CreateQuestGuideTip
_SUB_EXCEPTION_HANDLER(4295B0)
__SUB_CLASS_THIS0(004295B0, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4295B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],ebx
	call ZArray<ZXString<char>>::RemoveAll
	lea eax,[esp+0x14]
	push 0x19F8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],1
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0x19F9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],2
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esi+0xEC]
	push 0x17E
	push 0x82
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	lea eax,[esp+0x2C]
	push eax
	call UIHelper::MakeBalloonTip
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB80]
	add esp,0x1C
	cmp edi,eax
	je Block11

 Block7:
	mov dword ptr [esi+0xB80],eax
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	cmp edi,ebx
	je Block11

 Block10:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block11:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret
}
}
// CUIQuestInfoDetail::Draw
_SUB_EXCEPTION_HANDLER(4248C0)
__SUB_CLASS_THIS(004248C0, __thiscall, 58392,  CUIQuestInfoDetail, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4248C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [esp+0xBC]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	mov eax,dword ptr [ebp+0x8C]
	add eax,0xC
	xor esi,esi
	push eax
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0xB8],esi
	mov dword ptr [esp+0x70],esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0xEC]
	push 0x91
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xBC],1
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	lea ecx,[esp+0x74]
	push ecx
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x38]
	push edx
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea ecx,[esp+0x20]
	mov ebx,2
	push ecx
	mov byte ptr [esp+0xB8],bl
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esp+0x6C]
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [ebp+0xEC]
	lea ecx,[esp+0x24]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xC8],3
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xC4],4
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push 0x2A
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xCC],3
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0xB4],bl
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
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xB4],1
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [esp+0x70],0
	mov eax,dword ptr [ebp+0x84]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [esp+0xB4],5
	cmp dword ptr [eax+0xB18],ebx
	je Block33

 Block17:
	test ecx,ecx
	je Block33

 Block18:
	mov eax,dword ptr [ebp+0x8C]
	movzx edx,word ptr [eax]
	push edx
	call CWvsContext::IsWorthlessQuest
	test eax,eax
	je Block33

 Block19:
	lea eax,[esp+0x18]
	push 0x19F1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0xB8],6
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB4],5
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea ecx,[esp+0x20]
	push ecx
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea eax,[esp+0x38]
	mov bl,7
	push eax
	mov byte ptr [esp+0xB8],bl
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x74]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xF0]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xC8],8
	call _xbstr_t::_ctor_0
	push 0x38
	mov byte ptr [esp+0xC8],9
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xCC],8
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x38],di
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [esp+0xB4],5
	cmp word ptr [esp+0x20],di
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [ebp+0x8C]
	mov eax,dword ptr [eax+0x10]
	test eax,eax
	je Block51

 Block34:
	cmp byte ptr [eax],0
	je Block51

 Block35:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0xB8],0xA
	call edi
	lea ecx,[esp+0x38]
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
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [ebp+0xF0]
	push eax
	mov eax,dword ptr [ebp+0x8C]
	mov eax,dword ptr [eax+0x10]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0xB
	push eax
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_0
	push 0x4B
	mov byte ptr [esp+0xC8],0xC
	push 0x17
	mov ecx,esi
	mov byte ptr [esp+0xCC],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xB4],0xA
	cmp word ptr [esp+0x38],di
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov byte ptr [esp+0xB4],5
	cmp word ptr [esp+0x20],di
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov edi,dword ptr [ebp+0xF0]
	test edi,edi
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x14]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block51:
	mov ecx,ebp
	call CUIQuestInfoDetail::GetScrLogLen
	mov edi,eax
	mov edx,3
	mov ecx,1
	mov dword ptr [esp+0x98],edi
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],ecx
	mov eax,dword ptr [ebp+0x8C]
	mov byte ptr [esp+0xB4],0xD
	test eax,eax
	je Block58

 Block52:
	cmp dword ptr [eax+0x40],0
	je Block54

 Block53:
	cmp dword ptr [eax+0x40],ecx
	jne Block55

 Block54:
	mov eax,0xF
	jmp Block59

 Block55:
	test eax,eax
	je Block58

 Block56:
	cmp dword ptr [eax+0x24],0
	je Block58

 Block57:
	mov eax,0xF
	jmp Block59

 Block58:
	xor eax,eax

 Block59:
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[edi-2]
	push edx
	push 0xFD
	sub eax,0xFFFFFF80
	push eax
	push 0x12
	lea eax,[esp+0x8C]
	push eax
	mov ecx,esi
	call IWzCanvas::SetClipRect
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xB4],0xF
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov eax,dword ptr [ebp+0xC8]
	xor ebx,ebx
	mov dword ptr [esp+0x8C],eax
	add eax,edi
	mov dword ptr [esp+0x88],ebx
	mov dword ptr [esp+0x90],1
	mov dword ptr [esp+0x94],eax
	xor edi,edi

 Block64:
	mov eax,dword ptr [ebp+0x8C]
	mov ecx,dword ptr [eax+0x18]
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x48],ebx
	test ecx,ecx
	je Block94

 Block65:
	cmp edi,dword ptr [ecx-4]
	jae Block94

 Block66:
	mov eax,dword ptr [eax+0x1C]
	mov ecx,dword ptr [eax+edi*4]
	lea esi,[edi*4]
	add ecx,ebx
	push ecx
	push 1
	push ebx
	push 0
	lea edx,[esp+0xAC]
	push edx
	call SetRect
	lea eax,[esp+0x9C]
	push eax
	lea ecx,[esp+0x8C]
	push ecx
	mov edx,eax
	push edx
	call IntersectRect
	test eax,eax
	je Block93

 Block67:
	xor eax,eax
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],eax
	jmp Block69

 Block69:
	mov ecx,dword ptr [ebp+0x8C]
	mov eax,dword ptr [ecx+0x20]
	lea esi,[edi*4]
	add eax,esi
	mov eax,dword ptr [eax]
	test eax,eax
	je Block93

 Block70:
	mov edx,dword ptr [esp+0x30]
	cmp edx,dword ptr [eax-4]
	jae Block93

 Block71:
	mov eax,dword ptr [ecx+0x20]
	mov esi,dword ptr [eax+esi]
	add esi,dword ptr [esp+0x34]
	mov edi,dword ptr [esi+0x1C]
	sub edi,dword ptr [ebp+0xC8]
	lea eax,[edi+ebx]
	cmp eax,0xFFFFFFD0
	jl Block92

 Block72:
	mov ecx,dword ptr [esp+0x98]
	add ecx,0x18
	cmp eax,ecx
	jge Block92

 Block73:
	mov eax,dword ptr [esi]
	sub eax,0
	je Block80

 Block74:
	sub eax,1
	jne Block92

 Block75:
	mov edx,3
	mov ebx,0xFF
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ebx
	mov eax,dword ptr [esi+0x14]
	mov ecx,ebp
	mov byte ptr [esp+0xB4],0x13
	mov dword ptr [esp+0x14],eax
	call CUIQuestInfoDetail::GetDeliveryButtonHeight
	mov ecx,dword ptr [esp+0x48]
	mov esi,dword ptr [esi+0x18]
	mov edx,dword ptr [esp+0x1C]
	mov edx,dword ptr [edx]
	mov edx,dword ptr [edx+0x80]
	add eax,edi
	mov edi,dword ptr [esp+0x20]
	sub esp,0x10
	lea ecx,[eax+ecx+0x7F]
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esp+0x24]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x34]
	add esi,0x11
	push esi
	push ecx
	call edx
	test eax,eax
	jge Block77

 Block76:
	mov ecx,dword ptr [esp+0x1C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block77:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0xB4],0xF
	jne Block79

 Block78:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	jmp Block88

 Block79:
	lea eax,[esp+0x20]
	push eax
	jmp Block91

 Block80:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block81:
	lea eax,[esp+0x5C]
	push eax
	mov byte ptr [esp+0xB8],0x10
	call edi
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block82:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x60]
	push eax
	mov eax,dword ptr [esi+0xC]
	push eax
	mov eax,dword ptr [esi+0x10]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC8],0x11
	call _xbstr_t::_ctor_0
	mov ecx,ebp
	mov byte ptr [esp+0xC4],0x12
	call CUIQuestInfoDetail::GetDeliveryButtonHeight
	mov ecx,dword ptr [esi+0x1C]
	sub ecx,dword ptr [ebp+0xC8]
	add eax,ebx
	lea edx,[ecx+eax+0x7F]
	mov eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esp+0x2C]
	push edx
	add eax,0x11
	push eax
	mov byte ptr [esp+0xCC],0x11
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xB4],0x10
	cmp word ptr [esp+0x5C],si
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x4C],si
	jne Block90

 Block87:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]

 Block88:
	test eax,eax
	je Block92

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x30]
	add dword ptr [esp+0x34],0x44
	mov edi,dword ptr [esp+0x18]
	mov ebx,dword ptr [esp+0x48]
	jmp Block69

 Block90:
	lea ecx,[esp+0x4C]
	push ecx

 Block91:
	call dword ptr [ZImports::_VariantClear]

 Block92:
	inc dword ptr [esp+0x30]
	add dword ptr [esp+0x34],0x44
	mov edi,dword ptr [esp+0x18]
	mov ebx,dword ptr [esp+0x48]
	jmp Block69

 Block93:
	mov edx,dword ptr [ebp+0x8C]
	mov eax,dword ptr [edx+0x1C]
	add ebx,dword ptr [eax+esi]
	mov esi,dword ptr [esp+0x1C]
	inc edi
	jmp Block64

 Block94:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0xB4],5
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[esp+0x78]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov eax,dword ptr [ebp+0x8C]
	test eax,eax
	je Block102

 Block99:
	mov eax,dword ptr [eax+0x34]
	test eax,eax
	je Block102

 Block100:
	cmp dword ptr [eax-4],0
	je Block102

 Block101:
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGQU__3
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x24],esp
	push esi
	call ecx
	lea ecx,[ebp+0xB5C]
	call CLayoutMan::CopyToCanvas_1

 Block102:
	mov edx,3
	mov ebx,1
	mov word ptr [esp+0x4C],dx
	mov dword ptr [esp+0x54],ebx
	lea eax,[esp+0x4C]
	push eax
	push 0x6F
	push 0xFD
	push 0xFC
	push 0x12
	lea ecx,[esp+0x9C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xCC],0x14
	call IWzCanvas::SetClipRect
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xB4],0x16
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov eax,dword ptr [ebp+0xD4]
	xor edx,edx
	xor edi,edi
	mov dword ptr [esp+0x7C],eax
	add eax,0x71
	mov dword ptr [esp+0x78],edx
	mov dword ptr [esp+0x80],ebx
	mov dword ptr [esp+0x84],eax
	mov dword ptr [esp+0x30],edx

 Block107:
	mov eax,dword ptr [ebp+0x8C]
	mov ecx,dword ptr [eax+0x34]
	mov dword ptr [esp+0x34],edi
	test ecx,ecx
	je Block136

 Block108:
	cmp edx,dword ptr [ecx-4]
	jae Block136

 Block109:
	mov ecx,dword ptr [eax+0x38]
	lea esi,[edx*4]
	mov edx,dword ptr [ecx+esi]
	add edx,edi
	push edx
	push 1
	push edi
	push 0
	lea eax,[esp+0xAC]
	push eax
	call SetRect
	lea ecx,[esp+0x9C]
	push ecx
	lea edx,[esp+0x7C]
	push edx
	mov eax,ecx
	push eax
	call IntersectRect
	test eax,eax
	je Block135

 Block110:
	mov ebx,dword ptr [esp+0x1C]
	xor eax,eax
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x18],eax

 Block111:
	mov esi,dword ptr [esp+0x30]
	mov ecx,dword ptr [ebp+0x8C]
	mov eax,dword ptr [ecx+0x3C]
	add esi,esi
	add esi,esi
	add eax,esi
	mov eax,dword ptr [eax]
	test eax,eax
	je Block135

 Block112:
	mov edx,dword ptr [esp+0x48]
	cmp edx,dword ptr [eax-4]
	jae Block135

 Block113:
	mov eax,dword ptr [ecx+0x3C]
	mov esi,dword ptr [eax+esi]
	add esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0x1C]
	sub ecx,dword ptr [ebp+0xD4]
	lea eax,[ecx+edi]
	cmp eax,0xFFFFFFD0
	jl Block123

 Block114:
	cmp eax,0x89
	jge Block123

 Block115:
	mov ecx,dword ptr [esi]
	sub ecx,0
	je Block125

 Block116:
	sub ecx,1
	jne Block123

 Block117:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ecx
	mov edi,dword ptr [ebx]
	mov edx,dword ptr [esi+0x14]
	mov ebx,dword ptr [esp+0x20]
	mov esi,dword ptr [esi+0x18]
	sub esp,0x10
	add eax,0x101
	mov dword ptr [esp+0x24],eax
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x40]
	push edx
	add esi,0x11
	push esi
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [edi+0x80]
	push ebx
	mov byte ptr [esp+0xD4],0x1A
	call eax
	test eax,eax
	jge Block119

 Block118:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block119:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0xB4],0x16
	jne Block124

 Block120:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block122

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block122:
	mov edi,dword ptr [esp+0x34]

 Block123:
	inc dword ptr [esp+0x48]
	add dword ptr [esp+0x18],0x44
	jmp Block111

 Block124:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]
	inc dword ptr [esp+0x48]
	mov edi,dword ptr [esp+0x34]
	add dword ptr [esp+0x18],0x44
	jmp Block111

 Block125:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block126:
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0xB8],0x17
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block127:
	mov eax,dword ptr [esi+0xC]
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push eax
	mov eax,dword ptr [esi+0x10]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC8],0x18
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi+0x1C]
	sub eax,dword ptr [ebp+0xD4]
	mov edx,dword ptr [esi+0x18]
	lea ecx,[eax+edi+0x101]
	push ecx
	add edx,0x11
	mov byte ptr [esp+0xC8],0x19
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0xCC],0x18
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xB4],0x17
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xB4],0x16
	jne Block134

 Block132:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block123

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x48]
	add dword ptr [esp+0x18],0x44
	jmp Block111

 Block134:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]
	inc dword ptr [esp+0x48]
	add dword ptr [esp+0x18],0x44
	jmp Block111

 Block135:
	mov ecx,dword ptr [ebp+0x8C]
	mov edx,dword ptr [ecx+0x38]
	add edi,dword ptr [edx+esi]
	inc dword ptr [esp+0x30]
	mov esi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x30]
	jmp Block107

 Block136:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xB4],5
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov eax,dword ptr [ebp+0x8C]
	movzx edx,word ptr [eax]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	lea eax,[esp+0x78]
	push eax
	call CWvsContext::GetQuestMateName
	mov eax,dword ptr [ebp+0x8C]
	mov ecx,0x1163
	mov byte ptr [esp+0xB4],0x1B
	cmp word ptr [eax],cx
	jne Block155

 Block141:
	mov eax,dword ptr [ebp+0xEC]
	push 0x96
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block143

 Block142:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block143:
	lea ecx,[esp+0x7C]
	push ecx
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x5C]
	push edx
	call edi
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0xB8],0x1C
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	mov ebp,dword ptr [ebp+0xEC]
	mov edx,dword ptr [esp+0x74]
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push ebp
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,0x1D
	push edx
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_0
	push 0x2D
	mov byte ptr [esp+0xC8],0x1E
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xCC],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xB4],0x1C
	cmp word ptr [esp+0x4C],di
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov byte ptr [esp+0xB4],0x1B
	cmp word ptr [esp+0x5C],di
	jne Block154

 Block152:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block155:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0xB4],5
	test eax,eax
	je Block157

 Block156:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block157:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0xB4],1
	test eax,eax
	je Block159

 Block158:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block159:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xB4],0
	test eax,eax
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block161:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 4
}
}
// CUIQuestInfoDetail::SetTimer
_SUB_EXCEPTION_HANDLER(429C50)
__SUB_CLASS_THIS0(00429C50, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_429C50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x90
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA4]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x24],ebx
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call ebp
	lea ecx,[esp+0x30]
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
	mov dword ptr [esp+0xAC],edi
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xAC],1
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x18]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x44]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0xF8]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [ebx+0xF8],eax
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
	mov eax,dword ptr [esp+0x28]
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
	mov byte ptr [esp+0xAC],0
	cmp word ptr [esp+0x14],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x14]
	push edx
	call ebx

 Block15:
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block19:
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x28]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0xAC],ebx
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	cmp eax,edi
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov ecx,dword ptr [esp+0x24]
	mov esi,dword ptr [ecx+0xF8]
	mov byte ptr [esp+0xAC],3
	cmp esi,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x30]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xAC],bl
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x28]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0xAC],esi
	cmp eax,edi
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	lea ecx,[esp+0x14]
	push ecx
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[esp+0x30]
	mov ebx,4
	push eax
	mov dword ptr [esp+0xB0],ebx
	call ebp
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edx+0xF8]
	mov byte ptr [esp+0xAC],5
	cmp ecx,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x34]
	push edx
	push 0x7F
	push 0x6C
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xAC],bl
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0xAC],esi
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,edi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov ecx,dword ptr [esp+0x24]
	mov esi,dword ptr [ecx+0xF8]
	cmp esi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov edx,0xD
	mov dword ptr [esp+0xAC],ebx
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],eax
	cmp eax,edi
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block51:
	mov eax,dword ptr [esp+0x24]
	mov esi,dword ptr [eax+0xF8]
	mov byte ptr [esp+0xAC],7
	cmp esi,edi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,edi
	jge Block55

 Block54:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xAC],bl
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,edi
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	cmp eax,edi
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov ebx,dword ptr [esp+0x24]
	lea eax,[esp+0x40]
	push eax
	mov ecx,ebx
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0xAC],8
	cmp esi,edi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB0]
	lea edx,[esp+0x28]
	push edx
	push esi
	mov dword ptr [esp+0x30],edi
	call eax
	cmp eax,edi
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov esi,dword ptr [ebx+0xF8]
	cmp esi,edi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB4]
	inc edx
	push edx
	push esi
	call eax
	cmp eax,edi
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	cmp eax,edi
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov dword ptr [esp+0x2C],edi
	lea eax,[esp+0x40]
	push 0x3D0
	push eax
	mov dword ptr [esp+0xB4],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x30]
	push ecx
	push eax
	mov byte ptr [esp+0xB8],0xA
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x4C]
	add esp,0xC
	mov byte ptr [esp+0xAC],9
	cmp eax,edi
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block73:
	lea edx,[esp+0x14]
	push edx
	call ebp
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea ecx,[esp+0x30]
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0xB0],bl
	call ebp
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xAC],0xC
	cmp ecx,edi
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x34]
	push edx
	push 0x14
	push 0xA7
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0xAC],bl
	cmp word ptr [esp+0x30],si
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0xAC],9
	cmp word ptr [esp+0x14],si
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,edi
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push edi
	push eax
	mov esi,eax
	call edx
	cmp eax,edi
	jge Block91

 Block90:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block91:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push edi
	push eax
	mov esi,eax
	call edx
	cmp eax,edi
	jge Block95

 Block94:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block95:
	lea eax,[esp+0x74]
	push eax
	call ebp
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0xB0],0xD
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0xB0],0xE
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	lea eax,[esp+0x64]
	push eax
	mov byte ptr [esp+0xB0],0xF
	call ebp
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	lea edx,[esp+0x84]
	mov bl,0x10
	push edx
	mov byte ptr [esp+0xB0],bl
	call ebp
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	mov ecx,dword ptr [esp+0x24]
	mov ecx,dword ptr [ecx+0xF8]
	mov byte ptr [esp+0xAC],0x11
	cmp ecx,edi
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x58]
	push eax
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x70]
	push eax
	mov eax,dword ptr [esp+0x3C]
	lea edx,[esp+0x94]
	push edx
	push eax
	lea edx,[esp+0xAC]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov ebp,8
	cmp word ptr [esp+0x94],bp
	jne Block114

 Block108:
	xor eax,eax
	mov word ptr [esp+0x94],ax
	mov eax,dword ptr [esp+0x9C]
	cmp eax,edi
	je Block110

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block110:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [esp+0xAC],bl
	cmp word ptr [esp+0x84],bp
	jne Block115

 Block112:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	cmp eax,edi
	je Block116

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block114:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x94]
	push ecx
	call esi
	jmp Block111

 Block115:
	lea eax,[esp+0x84]
	push eax
	call esi

 Block116:
	mov byte ptr [esp+0xAC],0xF
	cmp word ptr [esp+0x64],bp
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	cmp eax,edi
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x64]
	push edx
	call esi

 Block120:
	mov byte ptr [esp+0xAC],0xE
	cmp word ptr [esp+0x44],bp
	jne Block123

 Block121:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea ecx,[esp+0x44]
	push ecx
	call esi

 Block124:
	mov byte ptr [esp+0xAC],0xD
	cmp word ptr [esp+0x54],bp
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,edi
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea eax,[esp+0x54]
	push eax
	call esi

 Block128:
	mov byte ptr [esp+0xAC],9
	cmp word ptr [esp+0x74],bp
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	cmp eax,edi
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea edx,[esp+0x74]
	push edx
	call esi

 Block132:
	mov ecx,dword ptr [esp+0x24]
	call CUIQuestInfoDetail::DrawTimeText
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	cmp eax,edi
	je Block134

 Block133:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block134:
	mov ecx,dword ptr [esp+0xA4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x9C
	ret
}
}
// CUIQuestInfo::ToggleDetail
_SUB_EXCEPTION_HANDLER(421AD0)
__SUB_CLASS_THIS(00421AD0, __thiscall, 58574,  CUIQuestInfo, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_421AD0
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
	mov ebx,ecx
	mov ecx,dword ptr [ebx+0xB70]
	test ecx,ecx
	je Block6

 Block1:
	lea eax,[esp+0x10]
	push eax
	call CWnd::GetLayer
	mov esi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov edi,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x11C]
	push edi
	push esi
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov dword ptr [ebx+0xB28],edi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ecx

 Block6:
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
// CUIQuestInfo::SetQuestViewState_ToOption
__SUB_CLASS_THIS(004210E0, __thiscall, 58587,  CUIQuestInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAFC]
	mov edx,dword ptr [esp+4]
	and eax,0xFFFFFFF
	shl edx,0x1C
	or eax,edx
	mov dword ptr [ecx+0xAFC],eax
	ret 4
}
}
// CUIQuestInfo::GetQuestInfo
__SUB_CLASS_THIS0(00422080, __thiscall, 58575,  CUIQuestInfo, ZRef<QuestInfo>) {
__asm {

 Block0:
	push ecx
	mov edx,dword ptr [ecx+0xB18]
	mov dword ptr [esp],0
	test edx,edx
	jl Block5

 Block1:
	mov eax,dword ptr [ecx+0xB1C]
	test eax,eax
	jl Block5

 Block2:
	mov ecx,dword ptr [ecx+edx*4+0xB5C]
	mov eax,dword ptr [ecx+eax*8+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block5:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax+4],0
	pop ecx
	ret 4
}
}
// CUIQuestAlarm::OnMouseButton
__SUB_CLASS_THIS(00424200, __thiscall, 58744,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x1C
	mov eax,dword ptr [esp+0x20]
	push ebx
	push ebp
	push esi
	push edi
	xor edi,edi
	mov esi,ecx
	mov dword ptr [esp+0x10],edi
	cmp eax,0x201
	jne Block12

 Block1:
	mov dword ptr [esp+0x30],edi
	lea ebx,[esi+0xBB4]

 Block2:
	mov eax,dword ptr [esi+0xBAC]
	mov dword ptr [esp+0x10],edi
	test eax,eax
	je Block39

 Block3:
	cmp edi,dword ptr [eax-4]
	jae Block39

 Block4:
	mov ecx,dword ptr [esp+0x3C]
	add eax,dword ptr [esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	push ecx
	push eax
	call PtInRect
	test eax,eax
	je Block11

 Block5:
	mov eax,dword ptr [esi+0xB04]
	add edi,edi
	add edi,edi
	add eax,edi
	push 0
	push eax
	lea ecx,[esi+0xB88]
	call ZMap<long, unsigned long, long>::GetAt
	test eax,eax
	je Block10

 Block6:
	mov dword ptr [ebx],1
	mov eax,dword ptr [esi+0xB04]
	mov ecx,dword ptr [edi+eax]
	lea edi,[esi-4]
	push 0
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x18],ecx
	lea ebp,[edi+0xB8C]
	push edx
	mov ecx,ebp
	call ZMap<long, unsigned long, long>::GetAt
	test eax,eax
	je Block8

 Block7:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call ZMap<long, unsigned long, long>::RemoveKey

 Block8:
	cmp dword ptr [edi+0x14],0
	je Block11

 Block9:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	mov edi,dword ptr [esp+0x10]
	add dword ptr [esp+0x30],0x10
	inc edi
	add ebx,4
	jmp Block2

 Block10:
	mov dword ptr [ebx],0

 Block11:
	mov edi,dword ptr [esp+0x10]
	add dword ptr [esp+0x30],0x10
	inc edi
	add ebx,4
	jmp Block2

 Block12:
	cmp eax,0x203
	jne Block39

 Block13:
	lea ecx,[esi+0xBB4]
	mov dword ptr [esp+0x30],edi
	xor ebx,ebx
	mov dword ptr [esp+0x14],ecx

 Block14:
	mov eax,dword ptr [esi+0xBAC]
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block39

 Block15:
	mov edx,dword ptr [esp+0x30]
	cmp edx,dword ptr [eax-4]
	jae Block39

 Block16:
	mov ebp,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x38]
	push ebp
	add eax,ebx
	push edi
	push eax
	call PtInRect
	test eax,eax
	jne Block18

 Block17:
	mov eax,dword ptr [esi+0xBB0]
	push ebp
	add eax,ebx
	push edi
	push eax
	call PtInRect
	test eax,eax
	je Block38

 Block18:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [eax],0
	jne Block39

 Block19:
	mov ecx,dword ptr [TSingleton<CUIQuestInfo>::ms_pInstance]
	test ecx,ecx
	je Block22

 Block20:
	lea edx,[esp+0x1C]
	push edx
	call CUIQuestInfo::GetQuestInfo
	or dword ptr [esp+0x10],1
	cmp dword ptr [eax+4],0
	je Block22

 Block21:
	mov bl,1
	jmp Block23

 Block22:
	xor bl,bl

 Block23:
	test byte ptr [esp+0x10],1
	je Block29

 Block24:
	mov edi,dword ptr [esp+0x20]
	and dword ptr [esp+0x10],0xFFFFFFFE
	test edi,edi
	je Block29

 Block25:
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block26:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block28

 Block27:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block28:
	mov dword ptr [esp+0x20],0

 Block29:
	test bl,bl
	je Block37

 Block30:
	mov ecx,dword ptr [TSingleton<CUIQuestInfo>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CUIQuestInfo::GetQuestInfo
	mov edx,dword ptr [eax+4]
	movzx eax,word ptr [edx]
	mov ecx,dword ptr [esi+0xB04]
	mov edx,dword ptr [esp+0x30]
	xor ebx,ebx
	cmp dword ptr [ecx+edx*4],eax
	mov eax,dword ptr [esp+0x28]
	sete bl
	test eax,eax
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
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block34:
	mov dword ptr [esp+0x28],0

 Block35:
	test ebx,ebx
	je Block37

 Block36:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 6
	call CWvsContext::UI_Close
	mov ebx,dword ptr [esp+0x18]
	inc dword ptr [esp+0x30]
	add ebx,0x10
	add dword ptr [esp+0x14],4
	jmp Block14

 Block37:
	mov eax,dword ptr [esi+0xB04]
	mov ecx,dword ptr [esp+0x30]
	movzx edx,word ptr [eax+ecx*4]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	push 1
	call CWvsContext::ShowQuestInfoDetail

 Block38:
	mov ebx,dword ptr [esp+0x18]
	inc dword ptr [esp+0x30]
	add ebx,0x10
	add dword ptr [esp+0x14],4
	jmp Block14

 Block39:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x10
}
}
// CUIQuestInfo::GetQuestIdxFromMousePos
__SUB_CLASS_THIS(00421980, __thiscall, 58601,  CUIQuestInfo, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push esi
	mov esi,ecx
	mov ebx,dword ptr [esi+0xB18]
	test ebx,ebx
	jl Block11

 Block1:
	cmp ebx,4
	jge Block11

 Block2:
	push edi
	mov edi,dword ptr [esp+0x24]
	cmp edi,0x28
	jl Block9

 Block3:
	mov eax,dword ptr [esi+ebx*4+0xB5C]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	mov ecx,dword ptr [esi+0xB14]
	mov ecx,dword ptr [ecx+0x38]
	sub eax,ecx
	imul eax,0x16
	add eax,0x34
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [esp+0x20]
	push edi
	push eax
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x18],0xE
	mov dword ptr [esp+0x1C],0x34
	mov dword ptr [esp+0x20],0xD8
	call PtInRect
	test eax,eax
	je Block9

 Block6:
	lea ecx,[edi-0x34]
	mov eax,0x2E8BA2E9
	imul ecx
	mov ecx,dword ptr [esi+0xB14]
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add eax,dword ptr [ecx+0x38]
	js Block9

 Block7:
	mov esi,dword ptr [esi+ebx*4+0xB5C]
	test esi,esi
	je Block9

 Block8:
	cmp eax,dword ptr [esi-4]
	jb Block10

 Block9:
	or eax,0xFFFFFFFF

 Block10:
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 8

 Block11:
	pop esi
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 8
}
}
// GetQuestSubInfo
_SUB_EXCEPTION_HANDLER(42A590)
__SUB(0042A590, __cdecl, 85525,  void, uint16_t, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42A590
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x10],ebp
	mov esi,dword ptr [esp+0x30]
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi],ebp

 Block2:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::GetStartDemand
	mov edi,eax
	cmp edi,ebp
	jne Block4

 Block3:
	lea ecx,[esp+0x30]
	push 0xCC6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x28],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebp
	jmp Block16

 Block4:
	cmp dword ptr [edi+0x1C],ebp
	je Block7

 Block5:
	lea edx,[esp+0x30]
	push 0xCC7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	push esi
	mov dword ptr [esp+0x30],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	cmp dword ptr [edi+0x20],ebp
	je Block18

 Block8:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block10

 Block9:
	cmp byte ptr [eax],0
	jne Block11

 Block10:
	mov ebp,offset _S_
	jmp Block12

 Block11:
	push offset _S___2
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call ZXString<char>::op_add_0
	mov ebp,dword ptr [eax]
	mov dword ptr [esp+0x24],2
	mov dword ptr [esp+0x10],1

 Block12:
	lea eax,[esp+0x14]
	push 0xCC8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x20]
	mov eax,dword ptr [eax]
	push ecx
	push ebp
	push eax
	push esi
	mov dword ptr [esp+0x34],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0x24],2
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	test byte ptr [esp+0x10],1
	mov dword ptr [esp+0x24],0xFFFFFFFF
	je Block18

 Block15:
	mov eax,dword ptr [esp+0x18]
	test eax,eax

 Block16:
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret
}
}
// Median_ZRef_QuestInfo__QICompareFunc_
__SUB(00422B00, __cdecl, 85512,  const ZRef<QuestInfo>&, const ZRef<QuestInfo>&, const ZRef<QuestInfo>&, const ZRef<QuestInfo>&, QICompareFunc&) {
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
	add eax,0xFFFFFFF4
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
	add eax,0xFFFFFFF4
	push eax
	call edi

 Block4:
	mov ebp,dword ptr [esp+0x34]
	mov ecx,ebp
	call QICompareFunc::operator()
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
	add eax,0xFFFFFFF4
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
	add eax,0xFFFFFFF4
	push eax
	call edi

 Block9:
	mov ecx,ebp
	call QICompareFunc::operator()
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
	add eax,0xFFFFFFF4
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
	add eax,0xFFFFFFF4
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
	add eax,0xFFFFFFF4
	push eax
	call edi

 Block18:
	mov ecx,ebp
	call QICompareFunc::operator()
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
	add eax,0xFFFFFFF4
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
	add eax,0xFFFFFFF4
	push eax
	call edi

 Block24:
	mov ecx,ebp
	call QICompareFunc::operator()
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
// ZSort_ZRef_QuestInfo__QICompareFunc_
__SUB(0042D320, __cdecl, 85527,  void, ZArray<ZRef<QuestInfo> >&, NakedParam<QICompareFunc>) {
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
	call ZSortHelper<ZRef<QuestInfo>, QICompareFunc>::call_0
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
	call ZSortHelper<ZRef<QuestInfo>, QICompareFunc>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CUIQuestAlarm::OnCreate
_SUB_EXCEPTION_HANDLER(42CAC0)
__SUB_CLASS_THIS(0042CAC0, __thiscall, 58740,  CUIQuestAlarm, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42CAC0
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
	mov esi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	lea ebx,[esi+0xBCC]
	push esi
	mov ecx,ebx
	call CLayoutMan::Init
	mov eax,dword ptr [esi+0xB08]
	cmp eax,ebp
	je Block2

 Block1:
	cmp dword ptr [eax-4],ebp
	jne Block3

 Block2:
	mov dword ptr [esi+0xB0C],ebp

 Block3:
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x60],ebp
	mov eax,offset _S_UIUIWINDOW2IMGQU__34
	cmp dword ptr [esi+0xB0C],ebp
	jne Block5

 Block4:
	mov eax,offset _S_UIUIWINDOW2IMGQU__33

 Block5:
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::AssignCStr
	push ebp
	push ecx
	mov ecx,esp
	lea eax,[esp+0x1C]
	mov dword ptr [esp+0x20],esp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString16::op_assign
	mov ecx,dword ptr [esp+0x70]
	push ecx
	mov ecx,esi
	call CUIWnd::OnCreate_1
	lea edx,[esp+0x68]
	push 0x16
	push edx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB10]
	add esp,8
	cmp edi,eax
	je Block10

 Block6:
	mov dword ptr [esi+0xB10],eax
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	cmp edi,ebp
	je Block10

 Block9:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block10:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	lea ecx,[esp+0x68]
	push 0x17
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB14]
	add esp,8
	cmp edi,eax
	je Block17

 Block13:
	mov dword ptr [esi+0xB14],eax
	cmp eax,ebp
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	cmp edi,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block17:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	lea eax,[esp+0x68]
	push 0x1F
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB18]
	add esp,8
	cmp edi,eax
	je Block24

 Block20:
	mov dword ptr [esi+0xB18],eax
	cmp eax,ebp
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block22:
	cmp edi,ebp
	je Block24

 Block23:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block24:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	lea ecx,[esp+0x68]
	push 0x22
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB1C]
	add esp,8
	cmp edi,eax
	je Block31

 Block27:
	mov dword ptr [esi+0xB1C],eax
	cmp eax,ebp
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	cmp edi,ebp
	je Block31

 Block30:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block31:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	lea eax,[esp+0x68]
	push 0x26
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB20]
	add esp,8
	cmp edi,eax
	je Block38

 Block34:
	mov dword ptr [esi+0xB20],eax
	cmp eax,ebp
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	cmp edi,ebp
	je Block38

 Block37:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block38:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	lea ecx,[esp+0x68]
	push 0x28
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB24]
	add esp,8
	cmp edi,eax
	je Block45

 Block41:
	mov dword ptr [esi+0xB24],eax
	cmp eax,ebp
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	cmp edi,ebp
	je Block45

 Block44:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block45:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	lea eax,[esp+0x68]
	push 0x2E
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB28]
	add esp,8
	cmp edi,eax
	je Block52

 Block48:
	mov dword ptr [esi+0xB28],eax
	cmp eax,ebp
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block50:
	cmp edi,ebp
	je Block52

 Block51:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block52:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block54:
	push ebp
	push ebp
	push ebp
	cmp dword ptr [esi+0xB0C],ebp
	jne Block56

 Block55:
	push 0x7D0
	push offset _S_UIUIWINDOW2IMGQU__32
	lea ecx,[esp+0x2C]
	push ecx
	jmp Block57

 Block56:
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGQU__31
	lea edx,[esp+0x2C]
	push edx

 Block57:
	mov ecx,ebx
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],ebp
	je Block59

 Block58:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block59:
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x28],1
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x30],ebp
	push offset _S_UIUIWINDOW2IMGQU__30
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x64],1
	call ZXString16::AssignCStr
	push 0xAE0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x68],edi
	mov byte ptr [esp+0x60],2
	cmp edi,ebp
	je Block61

 Block60:
	mov ecx,edi
	call CCtrlButton::_ctor_default
	int 3// TODO: 	mov dword ptr [edi],offset CCtrlButtonQuestAlarmAuto::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [edi+4],offset CCtrlButtonQuestAlarmAuto::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [edi+8],offset CCtrlButtonQuestAlarmAuto::`vftable'{for `ZRefCounted'}
	jmp Block62

 Block61:
	xor edi,edi

 Block62:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x60],1
	cmp edi,ebp
	je Block70

 Block63:
	lea eax,[edi+8]
	cmp eax,ebp
	je Block70

 Block64:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block66

 Block65:
	lea eax,[edi+0xC]
	push eax
	call ebx

 Block66:
	mov eax,dword ptr [esi+0xB58]
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block68

 Block67:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block68:
	mov ecx,dword ptr [esi+0xB58]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push ebp
	push 4
	push 0x76
	push 0x7D7
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::GetQuestAlarmAutoRegister
	mov ecx,dword ptr [esi+0xB58]
	mov dword ptr [esi+0xBA8],eax
	mov edx,dword ptr [ecx+4]
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	push offset _S_UIUIWINDOW2IMGQU__29
	lea ecx,[esp+0x38]
	call ZXString16::AssignCStr
	push 0xAF0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x68],edi
	mov byte ptr [esp+0x60],3
	cmp edi,ebp
	je Block71

 Block69:
	mov ecx,edi
	call CCtrlButton::_ctor_default
	int 3// TODO: 	mov dword ptr [edi],offset CCtrlButtonWithAniState::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [edi+4],offset CCtrlButtonWithAniState::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [edi+8],offset CCtrlButtonWithAniState::`vftable'{for `ZRefCounted'}
	mov dword ptr [edi+0xADC],ebp
	mov dword ptr [edi+0xAE0],ebp
	mov dword ptr [edi+0xAE4],ebp
	jmp Block72

 Block70:
	xor edi,edi
	jmp Block66

 Block71:
	xor edi,edi

 Block72:
	mov byte ptr [esp+0x60],1
	cmp edi,ebp
	je Block80

 Block73:
	lea eax,[edi+8]
	cmp eax,ebp
	je Block80

 Block74:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block76

 Block75:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block76:
	mov eax,dword ptr [esi+0xB60]
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block78

 Block77:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButtonWithAniState>::_ReleaseRaw

 Block78:
	mov ecx,dword ptr [esi+0xB60]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push ebp
	push 4
	push 4
	push 0x7D8
	push esi
	call edx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block81

 Block79:
	push eax
	call _com_issue_error

 Block80:
	xor edi,edi
	jmp Block76

 Block81:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x64],4
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	push ebp
	push ebp
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGQU__28
	mov byte ptr [esp+0x78],5
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x74],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x74],5
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB64]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block88

 Block86:
	cmp eax,0x80004002
	je Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x48],bx
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[esp+0x48]
	push edx
	call ebp

 Block92:
	mov byte ptr [esp+0x60],4
	cmp word ptr [esp+0x18],bx
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x18]
	push ecx
	call ebp

 Block96:
	mov byte ptr [esp+0x60],1
	cmp word ptr [esp+0x38],bx
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x38]
	push eax
	call ebp

 Block100:
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
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
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x64],8
	call edi
	lea ecx,[esp+0x38]
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
	push 0
	push 0
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x44]
	push eax
	push ecx
	mov dword ptr [esp+0x7C],esp
	mov ecx,esp
	mov bl,9
	push offset _S_UIUIWINDOW2IMGQU__27
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x74],0xA
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB68]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block109

 Block107:
	cmp eax,0x80004002
	je Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	mov edi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],di
	jne Block112

 Block110:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea eax,[esp+0x48]
	push eax
	call ebp

 Block113:
	mov byte ptr [esp+0x60],8
	cmp word ptr [esp+0x38],di
	jne Block116

 Block114:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea edx,[esp+0x38]
	push edx
	call ebp

 Block117:
	mov byte ptr [esp+0x60],1
	cmp word ptr [esp+0x18],di
	jne Block120

 Block118:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea ecx,[esp+0x18]
	push ecx
	call ebp

 Block121:
	lea edi,[esi+0xB30]
	mov ebx,5
	lea ecx,[ecx]

 Block122:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block125

 Block123:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [edi],0
	je Block125

 Block124:
	push 0
	lea ecx,[edi-4]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi],0

 Block125:
	add edi,8
	sub ebx,1
	jne Block122

 Block126:
	lea ecx,[esi+0xB6C]
	call ZMap<ZXString<char>, tagRECT, ZXString<char>>::RemoveAll
	lea ecx,[esi+0xBAC]
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0xBB0]
	call ZArray<tagRECT>::RemoveAll
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block128:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block130:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4
}
}
// CUIQuestAlarm::OnMouseMove
_SUB_EXCEPTION_HANDLER(423920)
__SUB_CLASS_THIS(00423920, __thiscall, 58743,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_423920
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [esp+0x24]
	xor edi,edi
	xor ebx,ebx
	mov edi,edi

 Block1:
	mov eax,dword ptr [esi+0xBAC]
	test eax,eax
	je Block12

 Block2:
	cmp edi,dword ptr [eax-4]
	jae Block12

 Block3:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	add eax,ebx
	push ebp
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block4:
	inc edi
	add ebx,0x10
	jmp Block1

 Block5:
	mov edx,dword ptr [esi+0xBA8]
	add edi,edi
	add edi,edi
	mov ecx,dword ptr [edx+edi]
	lea eax,[edx+edi]
	test ecx,ecx
	je Block8

 Block6:
	cmp byte ptr [ecx],0
	je Block8

 Block7:
	mov eax,ecx
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	lea eax,[eax+ebp+0x14]
	push eax
	lea ecx,[esi+0x84]
	call CUIToolTip::SetToolTip_String
	push 4
	jmp Block13

 Block8:
	mov eax,dword ptr [esi+0xB04]
	add eax,edi
	push 0
	push eax
	lea ecx,[esi+0xB88]
	call ZMap<long, unsigned long, long>::GetAt
	test eax,eax
	je Block11

 Block9:
	lea ecx,[esp+0x24]
	push 0x18A8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call eax
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	lea eax,[eax+ebp+0x14]
	push eax
	lea ecx,[esi+0x84]
	call CUIToolTip::SetToolTip_String
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push 4
	jmp Block13

 Block12:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	push 0

 Block13:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	call CInputSystem::SetCursorState
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 8
}
}
// CUIQuestAlarm::CUIQuestAlarm
_SUB_EXCEPTION_HANDLER(42C5A0)
__SUB_CLASS_THIS0(0042C5A0, __thiscall, 58737,  CUIQuestAlarm, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42C5A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
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
	push edi
	push edi
	push 1
	push 4
	push 0xA3
	push 5
	push 0xD
	call CUIWnd::_ctor_0
	lea ebp,[esi+0xB08]
	mov dword ptr [esp+0x20],edi
	cmp ebp,edi
	je Block2

 Block1:
	lea eax,[ebp-0xB08]
	mov dword ptr [TSingleton<CUIQuestAlarm>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIQuestAlarm>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestAlarm::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestAlarm::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestAlarm::`vftable'{for `ZRefCounted'}
	mov dword ptr [ebp],edi
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB20],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB28],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 5
	push 8
	lea ecx,[esi+0xB2C]
	push ecx
	mov byte ptr [esp+0x34],9
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
	lea ecx,[esi+0xB6C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, tagRECT, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, tagRECT, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0xB8C]
	mov dword ptr [esi+0xB84],edi
	mov dword ptr [esi+0xB88],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, unsigned long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, unsigned long, long>::_CalcAutoGrow
	mov dword ptr [esi+0xBA4],edi
	mov dword ptr [esi+0xBA8],1
	mov dword ptr [esi+0xBAC],edi
	mov dword ptr [esi+0xBB0],edi
	mov dword ptr [esi+0xBB4],edi
	mov dword ptr [esi+0xBCC],edi
	mov dword ptr [esi+0xBD0],edi
	mov dword ptr [esi+0xBD4],edi
	mov dword ptr [esi+0xBD8],edi
	mov dword ptr [esi+0xBDC],edi
	lea edx,[esp+0x10]
	mov dword ptr [esi+0xBB8],edi
	mov dword ptr [esi+0xBBC],edi
	mov dword ptr [esi+0xBC0],edi
	mov dword ptr [esi+0xBC4],edi
	mov dword ptr [esi+0xBC8],edi
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push edx
	mov byte ptr [esp+0x24],0x15
	call CConfig::GetQuestAlarm
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x24],0x16
	call ZArray<long>::operator=
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x20],0x15
	call ZArray<long>::RemoveAll
	mov ebp,dword ptr [ebp]
	cmp ebp,edi
	je Block5

 Block4:
	cmp dword ptr [ebp-4],edi
	jne Block6

 Block5:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::GetQueatAlarmOpened
	test eax,eax
	je Block7

 Block6:
	mov ecx,esi
	call CUIQuestAlarm::Create

 Block7:
	xor eax,eax
	cmp dword ptr [esi+0xAFC],edi
	setne al
	mov dword ptr [esi+0xB0C],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret
}
}
// CUIQuestInfoDetail::OnCreate
_SUB_EXCEPTION_HANDLER(430DD0)
__SUB_CLASS_THIS(00430DD0, __thiscall, 58389,  CUIQuestInfoDetail, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_430DD0
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
	mov esi,ecx
	push 0
	push 0
	lea ecx,[esi+0xB5C]
	push esi
	call CLayoutMan::Init
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGQU__44
	call _xbstr_t::_ctor_0
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call edi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0x64],0
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xCC1
	push eax
	mov byte ptr [esp+0x7C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x74],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x78],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xDC]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x60],1
	cmp word ptr [esp+0x44],bp
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x44]
	push eax
	call ebx

 Block13:
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x24],bp
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x24]
	push edx
	call ebx

 Block17:
	or ebp,0xFFFFFFFF
	cmp word ptr [esp+0x34],8
	mov dword ptr [esp+0x60],ebp
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
	lea edx,[esp+0x24]
	push edx
	call edi
	lea eax,[esp+0x24]
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
	lea ecx,[esp+0x34]
	push ecx
	mov dword ptr [esp+0x64],4
	call edi
	lea edx,[esp+0x34]
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
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,5
	push offset _S_UIUIWINDOW2IMGQU__43
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x74],6
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x74],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xE8]
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
	mov edi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x44],di
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x60],4
	cmp word ptr [esp+0x34],di
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [esp+0x60],ebp
	cmp word ptr [esp+0x24],di
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0xEC]
	push edi
	push eax
	mov dword ptr [esp+0x6C],8
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x60],ebp
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[esi+0xF0]
	push 0
	push ecx
	push eax
	mov dword ptr [esp+0x6C],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x60],ebp
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	lea edx,[esp+0x14]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov ebx,0xA
	mov dword ptr [esp+0x60],ebx
	test eax,eax
	je Block48

 Block47:
	mov ebp,dword ptr [eax]
	jmp Block49

 Block48:
	xor ebp,ebp

 Block49:
	mov eax,8
	push ebp
	mov word ptr [esp+0x38],ax
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	jne Block52

 Block50:
	test ebp,ebp
	je Block52

 Block51:
	push 0x8007000E
	call _com_issue_error

 Block52:
	lea ecx,[esp+0x34]
	push ecx
	push 0xFF333333
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x78],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x70],0xC
	test ecx,ecx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov byte ptr [esp+0x70],0xB
	call IWzFont::Create
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x60],bl
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test ecx,ecx
	je Block60

 Block59:
	call _xbstr_t::Data_t::Release

 Block60:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
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
	lea ecx,[esp+0x34]
	push ecx
	push 0xFF333333
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	mov ebx,0xD
	push edx
	mov dword ptr [esp+0x78],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x70],0xE
	test ecx,ecx
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov byte ptr [esp+0x70],bl
	call IWzFont::Create
	or edi,0xFFFFFFFF
	cmp word ptr [esp+0x34],8
	mov dword ptr [esp+0x60],edi
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov ecx,dword ptr [esi+0x84]
	lea edx,[esp+0x14]
	push edx
	call CUIQuestInfo::GetQuestInfo
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0x64],0xF
	call ZRef<QuestInfo>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x60],edi
	test eax,eax
	je Block72

 Block69:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block72

 Block70:
	push ebp
	call ebx
	test edi,edi
	je Block72

 Block71:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block72:
	push 0
	push 0
	push 0
	push 0x7D2
	push offset _S_UIUIWINDOW2IMGQU__42
	lea eax,[esp+0x28]
	lea ebp,[esi+0xB5C]
	push eax
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x60],0x10
	test eax,eax
	je Block133

 Block73:
	add eax,8
	je Block133

 Block74:
	lea edi,[eax-8]
	test edi,edi
	je Block76

 Block75:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block76:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block78

 Block77:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block78:
	or ebx,0xFFFFFFFF
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x60],ebx
	je Block80

 Block79:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block80:
	push 0
	push 0
	push 0
	push 0x7D4
	push offset _S_UIUIWINDOW2IMGQU__41
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x60],0x11
	test eax,eax
	je Block134

 Block81:
	add eax,8
	je Block134

 Block82:
	lea edi,[eax-8]
	test edi,edi
	je Block84

 Block83:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block84:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block86

 Block85:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block86:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x60],ebx
	je Block88

 Block87:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block88:
	push 0
	push 0
	push 0
	push 0x7D3
	push offset _S_UIUIWINDOW2IMGQU__40
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x60],0x12
	test eax,eax
	je Block135

 Block89:
	add eax,8
	je Block135

 Block90:
	lea edi,[eax-8]
	test edi,edi
	je Block92

 Block91:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block92:
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block94

 Block93:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block94:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x60],ebx
	je Block96

 Block95:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block96:
	push 0
	push 0
	push 0
	push 0x7D5
	push offset _S_UIUIWINDOW2IMGQU__39
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x60],0x13
	test eax,eax
	je Block136

 Block97:
	add eax,8
	je Block136

 Block98:
	lea edi,[eax-8]
	test edi,edi
	je Block100

 Block99:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block100:
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block102

 Block101:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block102:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x60],ebx
	je Block104

 Block103:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block104:
	lea edx,[esp+0x14]
	push 0x7FB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xAC]
	push 0
	push 1
	push eax
	mov dword ptr [esp+0x6C],0x14
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x60],ebx
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block106:
	push 0
	push 0
	push 0
	push 0x7D6
	push offset _S_UIUIWINDOW2IMGQU__38
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x60],0x15
	test eax,eax
	je Block137

 Block107:
	add eax,8
	je Block137

 Block108:
	lea edi,[eax-8]
	test edi,edi
	je Block110

 Block109:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block110:
	mov eax,dword ptr [esi+0xB7C]
	mov dword ptr [esi+0xB7C],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block112

 Block111:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block112:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x60],ebx
	je Block114

 Block113:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block114:
	lea edx,[esp+0x14]
	push 0x19F2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xB7C]
	push 0
	push 1
	push eax
	mov dword ptr [esp+0x6C],0x16
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x60],ebx
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block116:
	push 0
	push 0
	push 0
	push 0x7D7
	push offset _S_UIUIWINDOW2IMGQU__37
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x60],0x17
	test eax,eax
	je Block138

 Block117:
	add eax,8
	je Block138

 Block118:
	lea edi,[eax-8]
	test edi,edi
	je Block120

 Block119:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block120:
	mov eax,dword ptr [esi+0xB4]
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block122

 Block121:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block122:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x60],ebx
	je Block124

 Block123:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block124:
	push 0
	push 0
	push 0
	push 0x7D8
	push offset _S_UIUIWINDOW2IMGQU__36
	lea edx,[esp+0x30]
	push edx
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x60],0x18
	test eax,eax
	je Block139

 Block125:
	add eax,8
	je Block139

 Block126:
	lea edi,[eax-8]
	test edi,edi
	je Block128

 Block127:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block128:
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block130

 Block129:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block130:
	cmp dword ptr [esp+0x20],0
	mov dword ptr [esp+0x60],ebx
	je Block132

 Block131:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x20],0

 Block132:
	mov ecx,esi
	call CUIQuestInfoDetail::SetLayout
	mov ecx,esi
	call CUIQuestInfoDetail::SetNPC
	mov ecx,esi
	call CUIQuestInfoDetail::SetGauge_SeriesQuest
	mov ecx,esi
	call CUIQuestInfoDetail::SetButton
	mov ecx,esi
	call CUIQuestInfoDetail::SetScrollBar
	mov ecx,esi
	call CUIQuestInfoDetail::SetTimer
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

 Block133:
	xor edi,edi
	jmp Block76

 Block134:
	xor edi,edi
	jmp Block84

 Block135:
	xor edi,edi
	jmp Block92

 Block136:
	xor edi,edi
	jmp Block100

 Block137:
	xor edi,edi
	jmp Block110

 Block138:
	xor edi,edi
	jmp Block120

 Block139:
	xor edi,edi
	jmp Block128
}
}
// CUIQuestAlarm::OnDestroy
__SUB_CLASS_THIS0(00421160, __thiscall, 58739,  CUIQuestAlarm, void) {
__asm {

 Block0:
	mov dword ptr [ecx+0xB88],0
	jmp  CUIWnd::OnDestroy
}
}
// CUIQuestInfoDetail::SetButton
__SUB_CLASS_THIS0(004298B0, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	sub esp,0xC
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xA4]
	push edi
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0xA4]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block2:
	mov eax,dword ptr [esi+0x9C]
	test eax,eax
	je Block4

 Block3:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0x9C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block4:
	mov eax,dword ptr [esi+0xAC]
	test eax,eax
	je Block6

 Block5:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0xAC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block6:
	mov eax,dword ptr [esi+0xB7C]
	test eax,eax
	je Block8

 Block7:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx
	mov eax,dword ptr [esi+0xB7C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx

 Block8:
	mov eax,dword ptr [esi+0xB4]
	test eax,eax
	je Block13

 Block9:
	mov ecx,dword ptr [esi+0x8C]
	cmp dword ptr [ecx+0x40],0
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	jne Block11

 Block10:
	push 1
	call eax
	push 1
	jmp Block12

 Block11:
	push 0
	call eax
	push 0

 Block12:
	mov eax,dword ptr [esi+0xB4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax

 Block13:
	mov eax,dword ptr [esi+0xBC]
	test eax,eax
	je Block18

 Block14:
	mov ecx,dword ptr [esi+0x8C]
	cmp dword ptr [ecx+0x40],1
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	jne Block16

 Block15:
	push 1
	call eax
	push 1
	jmp Block17

 Block16:
	push 0
	call eax
	push 0

 Block17:
	mov eax,dword ptr [esi+0xBC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	call eax

 Block18:
	push ebp
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block23

 Block19:
	push ebx
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block22

 Block21:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block22:
	mov dword ptr [esp+0x18],0
	pop ebx

 Block23:
	mov edi,dword ptr [esi+0x8C]
	movzx ecx,word ptr [edi]
	lea edx,[esp+0xC]
	mov dword ptr [esp+0xC],ecx
	push edx
	lea ecx,[ebp+0x6F5]
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	je Block25

 Block24:
	mov edi,1
	jmp Block27

 Block25:
	push 0
	push edi
	lea ecx,[ebp+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	test eax,eax
	je Block45

 Block26:
	mov edi,2

 Block27:
	mov eax,dword ptr [esi+0x9C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	cmp edi,2
	je Block29

 Block28:
	mov eax,dword ptr [esi+0x8C]
	movzx eax,word ptr [eax]
	add eax,0xFFFFFB50
	mov ecx,0xC7
	cmp ax,cx
	ja Block30

 Block29:
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax

 Block30:
	cmp edi,1
	jne Block34

 Block31:
	mov ecx,dword ptr [esi+0x8C]
	movzx eax,word ptr [ecx]
	add eax,0xFFFFFB50
	mov edx,0xC7
	cmp ax,dx
	jbe Block34

 Block32:
	mov eax,dword ptr [esi+0xB7C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push 2
	call CConfig::GetQuestGuideOption
	cmp eax,0x3E7
	jne Block34

 Block33:
	mov ecx,esi
	call CUIQuestInfoDetail::CreateQuestGuideTip
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push 0
	push 2
	call CConfig::SetQuestGuideOption

 Block34:
	mov eax,dword ptr [esi+0xAC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	cmp edi,2
	je Block44

 Block35:
	mov eax,dword ptr [esi+0x8C]
	movzx ecx,word ptr [eax]
	add ecx,0xFFFFFB50
	mov edx,0xC7
	cmp cx,dx
	jbe Block44

 Block36:
	movzx eax,word ptr [eax]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::GetCompleteDemand
	mov edi,eax
	lea ecx,[edi+0x74]
	call ZArray<ItemInfo>::IsEmpty
	test eax,eax
	je Block40

 Block37:
	lea ecx,[edi+0x78]
	call ZArray<MobInfo>::IsEmpty
	test eax,eax
	je Block40

 Block38:
	cmp dword ptr [edi+0x34],0
	ja Block40

 Block39:
	lea ecx,[edi+0x70]
	call ZArray<QuestRecord>::IsEmpty
	test eax,eax
	jne Block44

 Block40:
	mov ecx,dword ptr [TSingleton<CUIQuestAlarm>::ms_pInstance]
	test ecx,ecx
	je Block47

 Block41:
	mov eax,dword ptr [ecx+0xB08]
	test eax,eax
	je Block43

 Block42:
	cmp dword ptr [eax-4],5
	jge Block44

 Block43:
	mov edx,dword ptr [esi+0x8C]
	movzx eax,word ptr [edx]
	push eax
	call CUIQuestAlarm::IsInQuestAlarmList
	test eax,eax
	je Block47

 Block44:
	mov eax,dword ptr [esi+0xAC]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	jmp Block46

 Block45:
	mov eax,dword ptr [esi+0xA4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1

 Block46:
	call eax

 Block47:
	cmp dword ptr [esi+0x9C],0
	pop ebp
	je Block52

 Block48:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block52

 Block49:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block52

 Block50:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x1C]
	mov ecx,edi
	call eax
	cmp eax,0x16
	jne Block52

 Block51:
	mov esi,dword ptr [esi+0x9C]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 0
	call eax

 Block52:
	pop edi
	pop esi
	add esp,0xC
	ret
}
}
// CUIQuestInfo::OnMoveWnd
__SUB_CLASS_THIS(00421A80, __thiscall, 58570,  CUIQuestInfo, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov edi,dword ptr [esi+0xB70]
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0xEB
	push eax
	mov ecx,edi
	call CWnd::MoveWnd

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CCtrlButtonQuestAlarmAuto::GetRTTI
__SUB_CLASS_THIS0(00423880, __thiscall, 85482,  CCtrlButtonQuestAlarmAuto, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlButtonQuestAlarmAuto::ms_RTTI_CCtrlButtonQuestAlarmAuto
	ret
}
}
// CUIQuestInfoDetail::MarkMobLocation_InWorldMap
_SUB_EXCEPTION_HANDLER(423340)
__SUB_CLASS_THIS0(00423340, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_423340
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB44
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB50]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block10

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block10

 Block2:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test edi,edi
	je Block10

 Block3:
	lea ecx,[esp+0x10]
	call CWorldMapDlg::_ctor_default
	lea ecx,[esi+0x16C]
	mov dword ptr [esp+0xB58],0
	call TSecType<unsigned long>::GetData
	push 1
	push 0
	push eax
	lea ecx,[esp+0x1C]
	call CWorldMapDlg::CreateWorldMapDlg
	lea ecx,[esp+0x10]
	test eax,eax
	je Block7

 Block4:
	cmp dword ptr [esp+0xB30],0
	jne Block6

 Block5:
	call CWorldMapDlg::ClearQuestGuide
	lea ecx,[esp+0x10]
	call CWnd::Destroy
	mov ecx,edi
	call CWvsContext::ResetWorldMapQuestDemand
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x19EA
	push eax
	jmp Block8

 Block6:
	call CDialog::DoModal
	jmp Block9

 Block7:
	call CWnd::Destroy
	mov ecx,edi
	call CWvsContext::ResetWorldMapQuestDemand
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x19EA
	push ecx

 Block8:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block9:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0xB58],0xFFFFFFFF
	call CWorldMapDlg::~CWorldMapDlg

 Block10:
	mov ecx,dword ptr [esp+0xB50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xB50
	ret
}
}
// CUIQuestAlarm::DeleteQuest
__SUB_CLASS_THIS(00432390, __thiscall, 58747,  CUIQuestAlarm, void, uint16_t) {
__asm {

 Block0:
	push esi
	mov si,word ptr [esp+8]
	push edi
	xor edx,edx
	lea esp,[esp]

 Block1:
	mov eax,dword ptr [ecx+0xB08]
	test eax,eax
	je Block6

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block6

 Block3:
	movzx edi,si
	cmp dword ptr [eax+edx*4],edi
	je Block5

 Block4:
	inc edx
	jmp Block1

 Block5:
	pop edi
	pop esi
	mov dword ptr [esp+4],edx
	jmp  CUIQuestAlarm::DeleteQuestByIndex

 Block6:
	pop edi
	pop esi
	ret 4
}
}
// CUIQuestInfo::OnButtonClicked
__SUB_CLASS_THIS(004345C0, __thiscall, 58571,  CUIQuestInfo, void, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	push esi
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push edi
	cmp ebx,0xBB8
	jb Block16

 Block1:
	mov eax,dword ptr [ecx+0x9C]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	lea eax,[eax*4+0xBB8]
	cmp ebx,eax
	jae Block16

 Block4:
	lea ecx,[ebx-0xBB8]
	mov eax,ecx
	cdq
	and edx,7
	add eax,edx
	mov edi,eax
	mov eax,dword ptr [ebp+0xB00]
	sar edi,3
	lea esi,[ebp+0xB00]
	and ecx,7
	inc edi
	mov dword ptr [esp+0x10],ecx
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax-4]

 Block6:
	cmp edi,eax
	jbe Block15

 Block7:
	mov eax,dword ptr [esi]
	test eax,eax
	jne Block9

 Block8:
	xor ebx,ebx
	jmp Block10

 Block9:
	mov ebx,dword ptr [eax-4]

 Block10:
	lea ecx,[esp+0x18]
	push ecx
	push 0
	push edi
	mov ecx,esi
	call ZArray<unsigned char>::_Realloc
	mov eax,ebx

 Block11:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block14

 Block12:
	cmp eax,dword ptr [ecx-4]
	jae Block14

 Block13:
	mov edx,ecx
	mov byte ptr [eax+edx],0
	inc eax
	jmp Block11

 Block14:
	mov ebx,dword ptr [esp+0x18]

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [esi]
	mov dl,1
	shl dl,cl
	lea eax,[eax+edi-1]
	or byte ptr [eax],dl
	jmp Block32

 Block16:
	cmp ebx,0xFA0
	jb Block33

 Block17:
	mov eax,dword ptr [ecx+0x9C]
	test eax,eax
	je Block19

 Block18:
	mov eax,dword ptr [eax-4]

 Block19:
	lea eax,[eax*4+0xFA0]
	cmp ebx,eax
	jae Block33

 Block20:
	lea ecx,[ebx-0xFA0]
	mov eax,ecx
	cdq
	and edx,7
	add eax,edx
	mov edi,eax
	mov eax,dword ptr [ebp+0xB00]
	sar edi,3
	lea esi,[ebp+0xB00]
	and ecx,7
	inc edi
	mov dword ptr [esp+0x10],ecx
	test eax,eax
	je Block22

 Block21:
	mov eax,dword ptr [eax-4]

 Block22:
	cmp edi,eax
	jbe Block31

 Block23:
	mov eax,dword ptr [esi]
	test eax,eax
	jne Block25

 Block24:
	xor ebx,ebx
	jmp Block26

 Block25:
	mov ebx,dword ptr [eax-4]

 Block26:
	lea ecx,[esp+0x18]
	push ecx
	push 0
	push edi
	mov ecx,esi
	call ZArray<unsigned char>::_Realloc
	mov eax,ebx
	lea ebx,[ebx]

 Block27:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block30

 Block28:
	cmp eax,dword ptr [ecx-4]
	jae Block30

 Block29:
	mov edx,ecx
	mov byte ptr [eax+edx],0
	inc eax
	jmp Block27

 Block30:
	mov ebx,dword ptr [esp+0x18]

 Block31:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [esi]
	mov dl,1
	shl dl,cl
	lea eax,[eax+edi-1]
	not dl
	and byte ptr [eax],dl

 Block32:
	push 1
	mov ecx,ebp
	call CUIQuestInfo::ResetInfo

 Block33:
	cmp ebx,0x1388
	jb Block39

 Block34:
	cmp ebx,0x1389
	ja Block39

 Block35:
	xor eax,eax
	cmp ebx,0x1388
	sete al
	mov ecx,ebp
	push eax
	call CUIQuestInfo::SetQuestViewState_ToOption
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [ebp+0xAFC]
	xor edx,edx
	and ecx,0xF0000000
	cmp ecx,0x10000000
	sete dl
	mov dword ptr [eax+0x4254],edx

 Block37:
	push 1
	mov ecx,ebp
	call CUIQuestInfo::ResetInfo
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block39

 Block38:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUIQuestDelivery::ms_RTTI_CUIQuestDelivery
	call edx
	mov esi,eax
	neg esi
	sbb esi,esi
	and esi,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	mov ecx,esi
	call CUIQuestDelivery::LoadData
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x38]
	mov ecx,esi
	call edx

 Block39:
	push ebx
	mov ecx,ebp
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// CCtrlButtonQuestAlarmAuto::OnMouseEnter
_SUB_EXCEPTION_HANDLER(423540)
__SUB_CLASS_THIS(00423540, __thiscall, 85478,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_423540
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	cmp dword ptr [ecx+0x50],0
	jne Block17

 Block1:
	cmp dword ptr [ecx+0x4C],0
	je Block7

 Block2:
	cmp dword ptr [esp+0x18],0
	je Block4

 Block3:
	push 1
	add ecx,0xFFFFFFFC
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block4:
	cmp dword ptr [ecx+0xAD8],0
	je Block6

 Block5:
	push 0
	add ecx,0xFFFFFFFC
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block6:
	push 2
	add ecx,0xFFFFFFFC
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block7:
	cmp dword ptr [esp+0x18],0
	lea esi,[ecx-4]
	je Block13

 Block8:
	cmp dword ptr [ecx+0xAD8],0
	mov ecx,esi
	je Block11

 Block9:
	push 3
	call CCtrlButton::ChangeDisplayState
	lea eax,[esp+0x18]
	push 0x5D1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x14],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block12

 Block11:
	push 2
	call CCtrlButton::ChangeDisplayState

 Block12:
	mov ecx,dword ptr [esi+0x24]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esi+0x14]
	mov edx,dword ptr [edx+0x1C]
	push 1
	push 0x65
	push eax
	call edx
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block13:
	cmp dword ptr [ecx+0xAD8],0
	mov ecx,esi
	je Block15

 Block14:
	push 0
	jmp Block16

 Block15:
	push 2

 Block16:
	call CCtrlButton::ChangeDisplayState
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esi+0x14]
	mov eax,dword ptr [eax+0x1C]
	push 0
	push 0x65
	push edx
	call eax

 Block17:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CUIQuestInfo::SetRecentQuest_ToOption
__SUB_CLASS_THIS(00421100, __thiscall, 58587,  CUIQuestInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAFC]
	xor eax,dword ptr [esp+4]
	and eax,0xFFFFFFF
	xor dword ptr [ecx+0xAFC],eax
	ret 4
}
}
// CUIQuestInfo::ToggleCategory
__SUB_CLASS_THIS(00421D50, __thiscall, 58600,  CUIQuestInfo, void, long, long, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	push ebx
	mov esi,ecx
	call CUIQuestInfo::IsMinimizedCategory
	test edi,edi
	je Block6

 Block1:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block4

 Block2:
	test eax,eax
	je Block6

 Block3:
	jmp Block5

 Block4:
	test eax,eax
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	neg ecx
	sbb ecx,ecx
	and ecx,0x3E8
	add ecx,0xBB8
	add ecx,ebx
	lea ecx,[ecx+edi*4]
	push ecx
	mov ecx,esi
	call edx

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIQuestInfo::IsKindOf
__SUB_CLASS_THIS(004273F0, __thiscall, 58609,  CUIQuestInfo, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIQuestInfo::ms_RTTI_CUIQuestInfo
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
// CUIQuestInfoDetail::GetDeliveryButtonHeight
__SUB_CLASS_THIS0(004212E0, __thiscall, 58397,  CUIQuestInfoDetail, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x8C]
	test eax,eax
	je Block6

 Block1:
	mov ecx,dword ptr [eax+0x40]
	test ecx,ecx
	je Block3

 Block2:
	cmp ecx,1
	jne Block4

 Block3:
	mov eax,0xF
	ret

 Block4:
	test eax,eax
	je Block6

 Block5:
	cmp dword ptr [eax+0x24],0
	jne Block3

 Block6:
	xor eax,eax
	ret
}
}
// InsertionSort_ZRef_QuestInfo__QICompareFunc_
_SUB_EXCEPTION_HANDLER(422900)
__SUB(00422900, __cdecl, 85510,  void, ZArray<ZRef<QuestInfo> >&, int32_t, int32_t, QICompareFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_422900
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
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	mov eax,dword ptr [esp+0x38]
	cmp eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x14],eax
	jg Block30

 Block1:
	mov edi,dword ptr [esp+0x34]
	mov eax,dword ptr [edi]
	mov ebp,dword ptr [esp+0x14]
	lea ebx,[eax+ebp*8]
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	test esi,esi
	je Block8

 Block4:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov edi,dword ptr [esp+0x34]

 Block8:
	mov ecx,dword ptr [esp+0x38]
	cmp dword ptr [esp+0x14],ecx
	mov ebx,dword ptr [ebx+4]
	mov dword ptr [esp+0x20],ebx
	jle Block22

 Block9:
	mov edx,dword ptr [edi]
	lea eax,[edx+ebp*8-8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],ebx
	test ebx,ebx
	je Block13

 Block12:
	lea eax,[ebx-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,dword ptr [esp+0x50]
	call QICompareFunc::operator()
	test eax,eax
	je Block22

 Block14:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+ebp*8-4]
	lea esi,[ecx+ebp*8]
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block21

 Block17:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block18:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block20

 Block19:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block20:
	mov ebx,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x34]
	mov dword ptr [esi+4],0

 Block21:
	mov ecx,dword ptr [esi-4]
	dec ebp
	cmp ebp,dword ptr [esp+0x38]
	mov dword ptr [esi+4],ecx
	jg Block9

 Block22:
	mov edx,dword ptr [edi]
	lea ebp,[edx+ebp*8]
	test ebx,ebx
	je Block24

 Block23:
	lea eax,[ebx-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block24:
	mov esi,dword ptr [ebp+4]
	test esi,esi
	je Block29

 Block25:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block26:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block28

 Block27:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
	mov dword ptr [ebp+4],0

 Block29:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x20]
	inc eax
	cmp eax,dword ptr [esp+0x3C]
	mov dword ptr [ebp+4],ebx
	mov dword ptr [esp+0x14],eax
	jle Block1

 Block30:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block34

 Block31:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block32:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block34

 Block33:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block34:
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
// CUIQuestInfoDetail::DrawTimeText
_SUB_EXCEPTION_HANDLER(426800)
__SUB_CLASS_THIS0(00426800, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_426800
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
	mov eax,dword ptr [esi+0x8C]
	xor ebp,ebp
	cmp dword ptr [eax+0x24],ebp
	je Block48

 Block1:
	movzx eax,word ptr [eax]
	push ebp
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetQuestTimer
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esp+0x64],ebp
	cmp ecx,ebp
	je Block46

 Block2:
	push 1
	lea edx,[esp+0x18]
	push edx
	call CUIQuestTimer::GetRemainTimeString
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x68],1
	call ebx
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
	mov ecx,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x64],2
	cmp ecx,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],4
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov esi,dword ptr [esp+0x20]
	cmp esi,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov edi,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],ebp
	call edx
	cmp eax,ebp
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x8C]
	push 0xFFFFFF
	push edi
	push ecx
	push ebp
	push ebp
	push esi
	call edx
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	lea eax,[esp+0x3C]
	push eax
	call ebx
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x3C]
	push edx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x70],5
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x20]
	push 0x26
	push ecx
	mov byte ptr [esp+0x74],6
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],7
	cmp ecx,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov byte ptr [esp+0x6C],8
	call IWzFont::CalcTextWidth
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	mov ebx,eax
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],ebp
	call ecx
	cmp eax,ebp
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov edi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x18]
	sub edi,ebx
	mov byte ptr [esp+0x64],5
	cmp eax,ebp
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],4
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push eax
	call ebx
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x68],9
	call ebx
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x24]
	push 0x26
	push eax
	mov byte ptr [esp+0x74],0xA
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xB
	push edx
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_0
	push ebp
	mov byte ptr [esp+0x78],0xC
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x7C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],0xA
	cmp eax,ebp
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov edi,8
	mov byte ptr [esp+0x64],9
	cmp word ptr [esp+0x3C],di
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [esp+0x64],4
	cmp word ptr [esp+0x4C],di
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x68],1
	call edx
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
	cmp eax,ebp
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp dword ptr [esp+0x28],ebp
	je Block48

 Block47:
	push ebp
	lea ecx,[esp+0x28]
	call ZRef<CUIQuestTimer>::_ReleaseRaw

 Block48:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret
}
}
// DownHeap_ZRef_QuestInfo__QICompareFunc_
_SUB_EXCEPTION_HANDLER(422D60)
__SUB(00422D60, __cdecl, 85516,  void, ZArray<ZRef<QuestInfo> >&, int32_t, int32_t, int32_t, QICompareFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_422D60
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
	mov ebx,dword ptr [esp+0x40]
	mov edi,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0x34]
	mov ecx,dword ptr [ebp]
	lea eax,[edi+ebx]
	mov esi,dword ptr [ecx+eax*8-4]
	lea eax,[ecx+eax*8-8]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block2

 Block1:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,dword ptr [esp+0x3C]
	cdq
	sub eax,edx
	sar eax,1
	cmp edi,eax
	mov dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x14],eax
	jg Block24

 Block3:
	mov edi,dword ptr [esp+0x38]
	add edi,edi
	cmp edi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],edi
	jge Block10

 Block4:
	mov eax,dword ptr [ebp]
	lea esi,[edi+ebx]
	add esi,esi
	add esi,esi
	add esi,esi
	add eax,esi
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov eax,dword ptr [ebp]
	sub esp,8
	lea esi,[eax+esi-8]
	mov eax,dword ptr [esi+4]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov ecx,dword ptr [esp+0x54]
	call QICompareFunc::operator()
	test eax,eax
	je Block10

 Block9:
	inc edi
	mov dword ptr [esp+0x34],edi

 Block10:
	mov ecx,dword ptr [ebp]
	lea esi,[edi+ebx]
	add esi,esi
	add esi,esi
	add esi,esi
	lea eax,[ecx+esi-8]
	mov eax,dword ptr [eax+4]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov eax,dword ptr [esp+0x28]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov ecx,dword ptr [esp+0x54]
	call QICompareFunc::operator()
	test eax,eax
	je Block23

 Block15:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [esp+0x38]
	add edx,ebx
	lea edi,[esi+eax-4]
	lea ebx,[eax+edx*8-8]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov esi,dword ptr [ebx+4]
	test esi,esi
	je Block22

 Block18:
	add esi,0xFFFFFFF0
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block21

 Block20:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block21:
	mov dword ptr [ebx+4],0

 Block22:
	mov eax,dword ptr [edi]
	mov dword ptr [ebx+4],eax
	mov eax,dword ptr [esp+0x34]
	cmp eax,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],eax
	jle Block3

 Block23:
	mov esi,dword ptr [esp+0x20]

 Block24:
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [ebp]
	lea ecx,[esp+0x1C]
	add edx,ebx
	push ecx
	lea ecx,[eax+edx*8-8]
	call ZRef<QuestInfo>::op_assign_copy
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block28

 Block25:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block26:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block28

 Block27:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
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
// CUIQuestAlarm::ToggleQuestAlarmState
__SUB_CLASS_THIS0(00422770, __thiscall, 58739,  CUIQuestAlarm, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB84]
	test ecx,ecx
	je Block3

 Block1:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block8

 Block2:
	cmp dword ptr [eax-4],0
	je Block8

 Block3:
	cmp dword ptr [esi+0xB0C],0
	je Block6

 Block4:
	test ecx,ecx
	je Block6

 Block5:
	xor eax,eax
	jmp Block7

 Block6:
	mov eax,1

 Block7:
	mov ecx,esi
	mov dword ptr [esi+0xB0C],eax
	mov dword ptr [esi+0xAFC],eax
	call CWnd::Destroy
	mov ecx,esi
	pop esi
	jmp  CUIQuestAlarm::Create

 Block8:
	pop esi
	ret
}
}
// CUIQuestInfoDetail::MarkNpcLocation_InWorldMap
_SUB_EXCEPTION_HANDLER(423240)
__SUB_CLASS_THIS0(00423240, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_423240
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB44
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB50]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block7

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block7

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test ecx,ecx
	je Block7

 Block3:
	call CWvsContext::ResetWorldMapQuestDemand
	lea ecx,[esp+0x10]
	call CWorldMapDlg::_ctor_default
	lea ecx,[esi+0x16C]
	mov dword ptr [esp+0xB58],0
	call TSecType<unsigned long>::GetData
	mov ecx,dword ptr [edi+0xD8]
	push 0
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call CWorldMapDlg::CreateWorldMapDlg
	test eax,eax
	je Block5

 Block4:
	lea ecx,[esp+0x10]
	call CDialog::DoModal
	jmp Block6

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x11B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block6:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0xB58],0xFFFFFFFF
	call CWorldMapDlg::~CWorldMapDlg

 Block7:
	mov ecx,dword ptr [esp+0xB50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xB50
	ret
}
}
// CUIQuestInfo::Draw
_SUB_EXCEPTION_HANDLER(42A780)
__SUB_CLASS_THIS(0042A780, __thiscall, 58569,  CUIQuestInfo, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42A780
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x160
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x174]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x24],edi
	mov eax,dword ptr [esp+0x184]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x18],ebx
	call CWnd::Draw
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	lea ecx,[edi+0xB58]
	mov dword ptr [esp+0x17C],ebx
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov eax,dword ptr [edi+0xB14]
	mov ebp,dword ptr [eax+0x38]
	mov ecx,ebp
	mov dword ptr [esp+0xE4],ebp
	cmp dword ptr [edi+0xB2C],ecx
	je Block8

 Block1:
	mov edx,ebp
	mov dword ptr [edi+0xB2C],edx
	xor esi,esi
	jmp Block3

 Block3:
	mov eax,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov eax,dword ptr [eax+0x9C]
	cmp eax,ebx
	jne Block5

 Block4:
	xor eax,eax
	jmp Block6

 Block5:
	mov eax,dword ptr [eax-4]

 Block6:
	cmp esi,eax
	jge Block8

 Block7:
	mov ecx,dword ptr [edi+0xB18]
	push esi
	push ecx
	mov ecx,edi
	call CUIQuestInfo::DestroyCategoryButton
	inc esi
	jmp Block3

 Block8:
	mov ecx,dword ptr [edi+0xB18]
	mov edi,dword ptr [edi+ecx*4+0xB5C]
	cmp edi,ebx
	jne Block10

 Block9:
	xor eax,eax
	jmp Block11

 Block10:
	mov eax,dword ptr [edi-4]

 Block11:
	mov esi,dword ptr [ZImports::_VariantInit]
	sub eax,ebp
	cmp eax,0xE
	mov ebp,dword ptr [esp+0x1C]
	jge Block15

 Block12:
	mov dword ptr [esp+0x54],eax
	cmp eax,ebx
	jne Block51

 Block13:
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	push ecx
	lea edx,[esp+0x24]
	push offset _S_UIUIWINDOW2IMGQU__26
	push edx
	mov byte ptr [esp+0x188],1
	call ZXString16::Format
	add esp,0xC
	lea eax,[esp+0x64]
	push eax
	call esi
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block16

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov dword ptr [esp+0x54],0xE
	jmp Block51

 Block16:
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0x180],2
	call esi
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov eax,dword ptr [esp+0x20]
	push edi
	push edi
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x80]
	push edx
	push ecx
	mov dword ptr [esp+0xA8],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x194],3
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x190],4
	cmp dword ptr [_D_G_RM],edi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea ecx,[esp+0xB0]
	push ecx
	mov byte ptr [esp+0x194],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x184],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov esi,8
	mov byte ptr [esp+0x17C],7
	cmp word ptr [esp+0x9C],si
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov byte ptr [esp+0x17C],8
	cmp word ptr [esp+0x74],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	cmp word ptr [esp+0x64],8
	mov bl,9
	mov byte ptr [esp+0x17C],bl
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov edx,3
	mov word ptr [esp+0x84],dx
	mov dword ptr [esp+0x8C],0xFF
	mov esi,dword ptr [esp+0x28]
	mov byte ptr [esp+0x17C],0xA
	test esi,esi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x34]
	push ecx
	push esi
	mov dword ptr [esp+0x3C],0
	call edx
	test eax,eax
	jge Block39

 Block38:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov edi,dword ptr [esp+0x34]
	lea ecx,[esp+0x30]
	push ecx
	push esi
	mov dword ptr [esp+0x38],0
	call edx
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	test ebp,ebp
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov edx,dword ptr [esp+0x84]
	mov ecx,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x98]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x9C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0xA0]
	mov dword ptr [eax+0xC],edx
	mov eax,0x13E
	sub eax,edi
	mov edx,0xCA
	sub edx,dword ptr [esp+0x40]
	shr eax,1
	push esi
	add eax,0x34
	push eax
	mov eax,dword ptr [ecx+0x80]
	shr edx,1
	dec edx
	push edx
	push ebp
	call eax
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block45:
	cmp word ptr [esp+0x84],8
	mov byte ptr [esp+0x17C],bl
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x84]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x180],1
	call ecx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x17C],0
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block51:
	xor edi,edi
	cmp dword ptr [esp+0x54],edi
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x34],edi
	jle Block95

 Block52:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x4C]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x50]
	mov ebp,dword ptr [eax+4]
	mov dword ptr [esp+0x28],ebp
	cmp esi,edi
	je Block57

 Block53:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block56

 Block54:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block56

 Block55:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block56:
	mov dword ptr [esp+0x50],0

 Block57:
	push 5
	mov ecx,ebp
	mov dword ptr [esp+0x24],1
	call CharacterData::GetItemSlotCount
	cmp eax,1
	jl Block94

 Block58:
	mov eax,dword ptr [esp+0x20]
	push eax
	push 5
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	call CharacterData::GetItem
	cmp dword ptr [esp+0x5C],0
	mov byte ptr [esp+0x17C],0xB
	je Block86

 Block59:
	mov ebp,dword ptr [esp+0x5C]
	add ebp,0xC
	mov ecx,ebp
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x236
	jne Block86

 Block60:
	cmp dword ptr [esp+0x40],0
	jg Block63

 Block61:
	mov ecx,ebp
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x98]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetQuestDeliveryItem
	mov eax,dword ptr [eax+4]
	or dword ptr [esp+0x14],1
	cmp dword ptr [eax+4],0
	jne Block63

 Block62:
	mov bl,1
	jmp Block64

 Block63:
	xor bl,bl

 Block64:
	test byte ptr [esp+0x14],1
	je Block70

 Block65:
	mov esi,dword ptr [esp+0x98]
	and dword ptr [esp+0x14],0xFFFFFFFE
	test esi,esi
	je Block70

 Block66:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block69

 Block67:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block69

 Block68:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block69:
	mov dword ptr [esp+0x98],0

 Block70:
	test bl,bl
	je Block72

 Block71:
	mov ecx,ebp
	call TSecType<long>::GetData
	mov dword ptr [esp+0x40],eax

 Block72:
	cmp dword ptr [esp+0x34],0
	jne Block75

 Block73:
	mov ecx,ebp
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetQuestDeliveryItem
	mov eax,dword ptr [eax+4]
	or dword ptr [esp+0x14],2
	cmp dword ptr [eax+4],1
	jne Block75

 Block74:
	mov bl,1
	jmp Block76

 Block75:
	xor bl,bl

 Block76:
	test byte ptr [esp+0x14],2
	je Block82

 Block77:
	and dword ptr [esp+0x14],0xFFFFFFFD
	cmp dword ptr [esp+0x48],0
	je Block82

 Block78:
	mov esi,dword ptr [esp+0x48]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block81

 Block79:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block81

 Block80:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block81:
	mov dword ptr [esp+0x48],0

 Block82:
	test bl,bl
	je Block84

 Block83:
	mov ecx,ebp
	call TSecType<long>::GetData
	mov dword ptr [esp+0x34],eax

 Block84:
	cmp dword ptr [esp+0x40],0
	jle Block86

 Block85:
	cmp dword ptr [esp+0x34],0
	jg Block92

 Block86:
	mov edi,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x17C],0
	test edi,edi
	je Block90

 Block87:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block89

 Block88:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block89:
	mov dword ptr [esp+0x5C],0

 Block90:
	mov esi,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x28]
	inc esi
	push 5
	mov dword ptr [esp+0x24],esi
	call CharacterData::GetItemSlotCount
	cmp esi,eax
	jle Block58

 Block91:
	jmp Block94

 Block92:
	mov esi,dword ptr [esp+0x5C]
	add esi,4
	push esi
	mov byte ptr [esp+0x180],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block94

 Block93:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x5C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block94:
	mov ebp,dword ptr [esp+0x1C]

 Block95:
	cmp dword ptr [esp+0x54],0
	mov dword ptr [esp+0x2C],0
	jle Block307

 Block96:
	mov ebp,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0xE4]
	mov esi,dword ptr [esp+0x2C]
	mov edx,dword ptr [ebp+0xB18]
	lea eax,[esi+ecx]
	mov ecx,dword ptr [ebp+edx*4+0xB5C]
	mov ebx,dword ptr [ecx+eax*8+4]
	mov dword ptr [esp+0x38],eax
	lea eax,[ecx+eax*8]
	mov dword ptr [esp+0x48],ebx
	test ebx,ebx
	je Block98

 Block97:
	lea edx,[ebx-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block98:
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov eax,dword ptr [ecx+0x9C]
	mov byte ptr [esp+0x17C],0xC
	test eax,eax
	je Block100

 Block99:
	mov eax,dword ptr [eax-4]

 Block100:
	movzx edx,word ptr [ebx]
	cmp edx,eax
	jge Block152

 Block101:
	movzx edi,word ptr [ebx]
	push edi
	lea eax,[esp+0x34]
	push eax
	mov dword ptr [esp+0x40],edi
	call CQuestMan::GetQuestCategoryName
	push 0
	lea ecx,[esp+0x3C]
	push ecx
	lea ecx,[ebp+0xBA4]
	mov byte ptr [esp+0x184],0xD
	call ZMap<long, long, long>::Insert
	mov edx,dword ptr [eax+0xC]
	mov eax,dword ptr [esp+0x30]
	push edx
	push eax
	lea ecx,[esp+0x38]
	push offset _S_SD__1
	push ecx
	call ZXString<char>::Format
	mov ebp,dword ptr [esp+0x2C]
	add esp,0x10
	test ebp,ebp
	je Block19

 Block102:
	mov edx,dword ptr [ebp]
	imul esi,0x16
	mov ecx,dword ptr [edx+0x8C]
	push 0xFF737573
	push 0x13
	push 0xCA
	lea eax,[esi+0x33]
	push eax
	push 0xB
	push ebp
	mov dword ptr [esp+0x50],esi
	call ecx
	test eax,eax
	jge Block104

 Block103:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block104:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x124]
	push edx
	call ebx
	lea eax,[esp+0x124]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block105:
	lea ecx,[esp+0xF4]
	push ecx
	mov byte ptr [esp+0x180],0xE
	call ebx
	lea edx,[esp+0xF4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block106:
	lea eax,[esp+0x124]
	push eax
	lea ecx,[esp+0xF8]
	push ecx
	lea edx,[esp+0xF4]
	push 0x16
	push edx
	mov byte ptr [esp+0x18C],0xF
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x3C]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x190],0x10
	call _xbstr_t::_ctor_0
	add esi,0x37
	push esi
	mov byte ptr [esp+0x190],0x11
	push 0x1F
	mov ecx,ebp
	mov byte ptr [esp+0x194],0x10
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0xEC]
	mov byte ptr [esp+0x17C],0xF
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	mov esi,8
	mov byte ptr [esp+0x17C],0xE
	cmp word ptr [esp+0xF4],si
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [esp+0xF4],ax
	mov eax,dword ptr [esp+0xFC]
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[esp+0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov byte ptr [esp+0x17C],0xD
	cmp word ptr [esp+0x124],si
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x12C]
	xor edx,edx
	mov word ptr [esp+0x124],dx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[esp+0x124]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov ebx,dword ptr [esp+0x24]
	mov esi,dword ptr [ebx+0xB18]
	push edi
	push esi
	mov ecx,ebx
	call CUIQuestInfo::IsMinimizedCategory
	test eax,eax
	je Block131

 Block117:
	mov ecx,dword ptr [ebx+esi*4+0xB84]
	cmp dword ptr [ecx+edi*8+4],0
	lea eax,[edi*8]
	mov dword ptr [esp+0x18],eax
	jne Block146

 Block118:
	lea ebp,[esi+edi*4+0xFA0]
	xor esi,esi
	mov dword ptr [esp+0x70],esi
	mov dword ptr [esp+0x64],1
	mov dword ptr [esp+0x68],esi
	mov dword ptr [esp+0x6C],esi
	push 0x38
	push offset _S_UIUIWINDOW2IMGQU__25
	push esi
	push 0x1C
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x18C],0x12
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x1C
	lea ecx,[esp+0x74]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x4C],eax
	mov byte ptr [esp+0x17C],0x13
	cmp eax,esi
	je Block120

 Block119:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block121

 Block120:
	xor eax,eax

 Block121:
	mov ebx,dword ptr [esp+0x24]
	mov edx,dword ptr [ebx+0xB18]
	mov esi,dword ptr [ebx+edx*4+0xB84]
	add esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x17C],0x12
	test eax,eax
	je Block130

 Block122:
	add eax,8
	je Block130

 Block123:
	lea edi,[eax-8]
	test edi,edi
	je Block125

 Block124:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block125:
	mov eax,dword ptr [esi+4]
	mov dword ptr [esi+4],edi
	test eax,eax
	je Block129

 Block126:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block129

 Block127:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block129

 Block128:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block129:
	mov eax,dword ptr [ebx+0xB18]
	mov ecx,dword ptr [ebx+eax*4+0xB84]
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ecx+edx+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x64]
	push edx
	mov edx,dword ptr [esp+0x3C]
	push 0
	add edx,0x36
	push edx
	push 0xE
	push ebp
	push ebx
	call eax
	mov eax,dword ptr [esp+0x70]
	jmp Block144

 Block130:
	xor edi,edi
	jmp Block125

 Block131:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [ecx+esi*4+0xB74]
	cmp dword ptr [edx+edi*8+4],0
	lea ebx,[edi*8]
	jne Block146

 Block132:
	xor eax,eax
	lea ebp,[esi+edi*4+0xBB8]
	mov dword ptr [esp+0x80],eax
	mov dword ptr [esp+0x74],1
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x7C],eax
	push 0x38
	push offset _S_UIUIWINDOW2IMGQU__24
	push eax
	push 0x1C
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0x18C],0x14
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x1C
	lea ecx,[esp+0x84]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x4C],eax
	mov byte ptr [esp+0x17C],0x15
	test eax,eax
	je Block134

 Block133:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block135

 Block134:
	xor eax,eax

 Block135:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [ecx+0xB18]
	mov esi,dword ptr [ecx+edx*4+0xB74]
	add esi,ebx
	mov byte ptr [esp+0x17C],0x14
	test eax,eax
	je Block151

 Block136:
	add eax,8
	je Block151

 Block137:
	lea edi,[eax-8]
	test edi,edi
	je Block139

 Block138:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block139:
	mov eax,dword ptr [esi+4]
	mov dword ptr [esi+4],edi
	test eax,eax
	je Block143

 Block140:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block143

 Block141:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block143

 Block142:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block143:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0xB18]
	mov edx,dword ptr [eax+ecx*4+0xB74]
	mov ecx,dword ptr [edx+ebx+4]
	mov edx,dword ptr [ecx]
	lea esi,[esp+0x74]
	push esi
	mov esi,dword ptr [esp+0x3C]
	push 0
	add esi,0x36
	push esi
	push 0xE
	push ebp
	push eax
	mov eax,dword ptr [edx+0x28]
	call eax
	mov eax,dword ptr [esp+0x80]

 Block144:
	mov byte ptr [esp+0x17C],0xD
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block146:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x17C],0xC
	test eax,eax
	je Block148

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block148:
	mov esi,dword ptr [esp+0x48]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x180],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block305

 Block149:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block305

 Block150:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block305

 Block151:
	xor edi,edi
	jmp Block139

 Block152:
	mov dword ptr [esp+0x18],0
	mov eax,dword ptr [ebx+4]
	mov byte ptr [esp+0x17C],0x16
	cmp eax,5
	ja Block241

 Block153:
	cmp EAX, 0
je Block191
cmp EAX, 1
je Block154
cmp EAX, 2
je Block172
cmp EAX, 3
je Block184
cmp EAX, 4
je Block190
cmp EAX, 5
je Block157


 Block154:
	movzx ecx,word ptr [ebx]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIQuestAlarm>::ms_pInstance]
	call CUIQuestAlarm::IsInQuestAlarmList
	lea ecx,[esp+0x18]
	test eax,eax
	je Block156

 Block155:
	push offset _S_UIUIWINDOW2IMGQU__23
	call ZXString16::AssignCStr
	mov dword ptr [esp+0x3C],4
	jmp Block211

 Block156:
	push offset _S_UIUIWINDOW2IMGQU__12
	call ZXString16::AssignCStr
	mov dword ptr [esp+0x3C],4
	jmp Block211

 Block157:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	jle Block168

 Block158:
	cmp dword ptr [ebx+0x40],0
	jne Block168

 Block159:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x168]
	push edx
	call CItemInfo::GetQuestDeliveryItem
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x168]
	test eax,eax
	je Block164

 Block160:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block163

 Block161:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block163

 Block162:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block163:
	mov dword ptr [esp+0x168],0

 Block164:
	test ebp,ebp
	je Block168

 Block165:
	movzx eax,word ptr [ebx]
	push eax
	mov ecx,ebp
	call CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
	test eax,eax
	je Block168

 Block166:
	push offset _S_UIUIWINDOW2IMGQU__22
	lea ecx,[esp+0x1C]
	call ZXString16::AssignCStr
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block168

 Block167:
	cmp word ptr [eax],0
	jne Block171

 Block168:
	movzx ecx,word ptr [ebx]
	push ecx
	mov ecx,dword ptr [TSingleton<CUIQuestAlarm>::ms_pInstance]
	call CUIQuestAlarm::IsInQuestAlarmList
	lea ecx,[esp+0x18]
	test eax,eax
	je Block170

 Block169:
	push offset _S_UIUIWINDOW2IMGQU__21
	call ZXString16::AssignCStr
	mov dword ptr [esp+0x3C],4
	jmp Block211

 Block170:
	push offset _S_UIUIWINDOW2IMGQU__20
	call ZXString16::AssignCStr

 Block171:
	mov dword ptr [esp+0x3C],4
	jmp Block211

 Block172:
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	jle Block183

 Block173:
	cmp dword ptr [ebx+0x40],1
	jne Block183

 Block174:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x170]
	push edx
	call CItemInfo::GetQuestDeliveryItem
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x170]
	test eax,eax
	je Block179

 Block175:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block178

 Block176:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block178

 Block177:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block178:
	mov dword ptr [esp+0x170],0

 Block179:
	test ebp,ebp
	je Block183

 Block180:
	movzx eax,word ptr [ebx]
	push eax
	mov ecx,ebp
	call CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
	test eax,eax
	je Block183

 Block181:
	push offset _S_UIUIWINDOW2IMGQU__19
	lea ecx,[esp+0x1C]
	call ZXString16::AssignCStr
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block183

 Block182:
	cmp word ptr [eax],0
	jne Block210

 Block183:
	push offset _S_UIUIWINDOW2IMGQU__18
	jmp Block209

 Block184:
	mov ecx,3
	mov word ptr [esp+0xCC],cx
	mov ecx,0xFF
	mov dword ptr [esp+0xD4],ecx
	mov ebx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x24]
	mov edx,dword ptr [edx+0xB40]
	mov byte ptr [esp+0x17C],0x17
	test ebx,ebx
	je Block19

 Block185:
	mov edi,dword ptr [esp+0xCC]
	mov esi,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	push edx
	mov edx,dword ptr [esp+0x40]
	imul edx,0x16
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0xE4]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0xEC]
	add edx,0x36
	push edx
	push 0xC
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esi+0x80]
	push ebx
	call eax
	test eax,eax
	jge Block187

 Block186:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block187:
	cmp word ptr [esp+0xCC],8
	mov byte ptr [esp+0x17C],0x16
	jne Block189

 Block188:
	mov eax,dword ptr [esp+0xD4]
	xor ecx,ecx
	mov word ptr [esp+0xCC],cx
	jmp Block238

 Block189:
	lea edx,[esp+0xCC]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block242

 Block190:
	push offset _S_UIUIWINDOW2IMGQU__17
	lea ecx,[esp+0x1C]
	call ZXString16::AssignCStr
	mov dword ptr [esp+0x3C],4
	jmp Block211

 Block191:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	jle Block202

 Block192:
	cmp dword ptr [ebx+0x40],0
	jne Block202

 Block193:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x88]
	push eax
	call CItemInfo::GetQuestDeliveryItem
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block198

 Block194:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block197

 Block195:
	push edi
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
	mov dword ptr [esp+0x88],0

 Block198:
	test ebp,ebp
	je Block202

 Block199:
	movzx ecx,word ptr [ebx]
	push ecx
	mov ecx,ebp
	call CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
	test eax,eax
	je Block202

 Block200:
	push offset _S_UIUIWINDOW2IMGQU__22
	lea ecx,[esp+0x1C]
	call ZXString16::AssignCStr
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x3C],2
	test eax,eax
	je Block202

 Block201:
	cmp word ptr [eax],0
	jne Block211

 Block202:
	movzx edx,word ptr [ebx]
	push edx
	call CUIQuestInfo::IsMarkedAsRead
	add esp,4
	test eax,eax
	je Block208

 Block203:
	mov eax,3
	mov word ptr [esp+0x154],ax
	mov dword ptr [esp+0x15C],0xFF
	mov ebx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [ecx+0xB34]
	mov byte ptr [esp+0x17C],0x18
	test ebx,ebx
	je Block19

 Block204:
	lea edx,[esp+0x154]
	push edx
	push eax
	mov eax,dword ptr [esp+0x34]
	imul eax,0x16
	add eax,0x36
	push eax
	push 0xC
	mov ecx,ebx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x154],8
	mov byte ptr [esp+0x17C],0x16
	jne Block207

 Block205:
	mov eax,dword ptr [esp+0x15C]
	xor ecx,ecx
	mov word ptr [esp+0x154],cx
	test eax,eax
	je Block212

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block207:
	lea edx,[esp+0x154]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block212

 Block208:
	push offset _S_UIUIWINDOW2IMGQU__16

 Block209:
	lea ecx,[esp+0x1C]
	call ZXString16::AssignCStr

 Block210:
	mov dword ptr [esp+0x3C],2

 Block211:
	mov ebx,dword ptr [esp+0x1C]

 Block212:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block242

 Block213:
	cmp word ptr [eax],0
	je Block242

 Block214:
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi+0xB58]
	lea ebp,[edi+0xB58]
	test eax,eax
	jne Block216

 Block215:
	xor esi,esi
	jmp Block217

 Block216:
	mov esi,dword ptr [eax-4]

 Block217:
	lea eax,[esp+0x63]
	push eax
	push 0
	lea ecx,[esi+1]
	push ecx
	mov ecx,ebp
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::_Realloc
	push 0
	push 0xFF
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x5C],esp
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x4C]
	imul eax,0x16
	lea edx,[eax+ecx+0x34]
	push edx
	push 0xC
	lea eax,[esp+0x100]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x198],0x19
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x194],0x1A
	test ecx,ecx
	je Block19

 Block218:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x74],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [esp+0x34]
	push 0
	push eax
	lea ecx,[esp+0x104]
	push ecx
	mov byte ptr [esp+0x1A4],0x1B
	call CAnimationDisplayer::LoadLayer_1
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [eax]
	lea edi,[esi*4]
	mov esi,dword ptr [ecx+edi]
	add ecx,edi
	add esp,0x28
	cmp esi,eax
	je Block223

 Block219:
	mov dword ptr [ecx],eax
	test eax,eax
	je Block221

 Block220:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block221:
	test esi,esi
	je Block223

 Block222:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block223:
	mov eax,dword ptr [esp+0xE0]
	test eax,eax
	je Block225

 Block224:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block225:
	mov eax,dword ptr [esp+0xE8]
	mov byte ptr [esp+0x17C],0x16
	test eax,eax
	je Block227

 Block226:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block227:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xAC]
	push eax
	call esi
	lea ecx,[esp+0xAC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block228:
	lea edx,[esp+0xBC]
	push edx
	mov byte ptr [esp+0x180],0x1C
	call esi
	lea eax,[esp+0xBC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block229:
	mov eax,dword ptr [ebp]
	mov esi,dword ptr [eax+edi]
	add eax,edi
	mov byte ptr [esp+0x17C],0x1D
	test esi,esi
	je Block19

 Block230:
	mov edx,dword ptr [esp+0xAC]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0xC0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0xC4]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0xC8]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0xCC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0xE0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0xE4]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0xE8]
	push 0x20
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x110]
	push esi
	call eax
	test eax,eax
	jge Block232

 Block231:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block232:
	mov esi,8
	mov byte ptr [esp+0x17C],0x1C
	cmp word ptr [esp+0xBC],si
	jne Block235

 Block233:
	mov eax,dword ptr [esp+0xC4]
	xor ecx,ecx
	mov word ptr [esp+0xBC],cx
	test eax,eax
	je Block236

 Block234:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block236

 Block235:
	lea edx,[esp+0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block236:
	mov byte ptr [esp+0x17C],0x16
	cmp word ptr [esp+0xAC],si
	jne Block240

 Block237:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]

 Block238:
	test eax,eax
	je Block242

 Block239:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block240:
	lea ecx,[esp+0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block242

 Block241:
	mov ebx,dword ptr [esp+0x1C]

 Block242:
	mov ebp,dword ptr [esp+0x48]
	lea edx,[ebp+0xC]
	xor edi,edi
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],edi
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x24]
	xor eax,eax
	cmp dword ptr [ecx+0xB1C],edx
	mov byte ptr [esp+0x17C],0x1E
	sete al
	mov esi,eax
	movzx eax,word ptr [ebp]
	push eax
	call CUIQuestInfo::IsWorthlessQuest
	test esi,esi
	je Block247

 Block243:
	test ebx,ebx
	je Block19

 Block244:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ebx]
	imul edx,0x16
	mov eax,dword ptr [ecx+0x8C]
	push 0xFF9C9A9C
	push 0x13
	push 0xB8
	add edx,0x34
	push edx
	push 0x1D
	push ebx
	call eax
	test eax,eax
	jge Block246

 Block245:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block246:
	lea ecx,[esp+0x94]
	push 0x16
	push ecx
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],4
	mov byte ptr [esp+0x17C],0x1F
	jmp Block250

 Block247:
	test eax,eax
	je Block249

 Block248:
	lea edx,[esp+0xDC]
	push 0x44
	push edx
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],8
	mov dword ptr [esp+0x17C],0x20
	jmp Block250

 Block249:
	lea eax,[esp+0xF0]
	push 0x30
	push eax
	call get_basic_font
	add esp,8
	or dword ptr [esp+0x14],0x10

 Block250:
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x58],esi
	test esi,esi
	je Block252

 Block251:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block252:
	test byte ptr [esp+0x14],0x10
	mov dword ptr [esp+0x17C],0x21
	je Block255

 Block253:
	mov eax,dword ptr [esp+0xF0]
	and dword ptr [esp+0x14],0xFFFFFFEF
	test eax,eax
	je Block255

 Block254:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block255:
	test byte ptr [esp+0x14],8
	mov byte ptr [esp+0x17C],0x22
	je Block258

 Block256:
	mov eax,dword ptr [esp+0xDC]
	and dword ptr [esp+0x14],0xFFFFFFF7
	test eax,eax
	je Block258

 Block257:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block258:
	test byte ptr [esp+0x14],4
	mov byte ptr [esp+0x17C],0x23
	je Block261

 Block259:
	mov eax,dword ptr [esp+0x94]
	and dword ptr [esp+0x14],0xFFFFFFFB
	test eax,eax
	je Block261

 Block260:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block261:
	lea eax,[esp+0x28]
	push 0x23
	push eax
	call get_basic_font
	add esp,8
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [esp+0x17C],0x24
	test eax,eax
	je Block280

 Block262:
	cmp byte ptr [eax],0
	je Block280

 Block263:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x114]
	push ecx
	call ebp
	lea edx,[esp+0x114]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block264:
	lea eax,[esp+0x104]
	push eax
	mov byte ptr [esp+0x180],0x25
	call ebp
	lea ecx,[esp+0x104]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block265:
	mov ecx,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x48]
	lea edx,[esp+0x114]
	push edx
	lea eax,[esp+0x108]
	push eax
	mov eax,dword ptr [edi+0x30]
	push ecx
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x190],0x26
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x18C],0x27
	test ebx,ebx
	je Block19

 Block266:
	mov edx,dword ptr [esp+0x3C]
	imul edx,0x16
	add edx,0x38
	push edx
	push 0x1F
	mov ecx,ebx
	mov byte ptr [esp+0x194],0x26
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x104],8
	mov byte ptr [esp+0x17C],0x25
	jne Block269

 Block267:
	xor eax,eax
	mov word ptr [esp+0x104],ax
	mov eax,dword ptr [esp+0x10C]
	test eax,eax
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea ecx,[esp+0x104]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block270:
	cmp word ptr [esp+0x114],8
	mov byte ptr [esp+0x17C],0x24
	jne Block273

 Block271:
	mov eax,dword ptr [esp+0x11C]
	xor edx,edx
	mov word ptr [esp+0x114],dx
	test eax,eax
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea eax,[esp+0x114]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block274:
	lea ecx,[esp+0x134]
	push ecx
	call ebp
	lea edx,[esp+0x134]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block275:
	lea eax,[esp+0x134]
	push eax
	mov eax,dword ptr [edi+0x30]
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x188],0x28
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x184],0x29
	test ecx,ecx
	je Block19

 Block276:
	mov byte ptr [esp+0x184],0x28
	call IWzFont::CalcTextWidth
	mov edi,eax
	add edi,3
	cmp word ptr [esp+0x134],8
	mov byte ptr [esp+0x17C],0x24
	jne Block279

 Block277:
	mov eax,dword ptr [esp+0x13C]
	xor ecx,ecx
	mov word ptr [esp+0x134],cx
	test eax,eax
	je Block281

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block279:
	lea edx,[esp+0x134]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block281

 Block280:
	mov ebp,dword ptr [ZImports::_VariantInit]

 Block281:
	mov eax,0xBC
	sub eax,edi
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block283

 Block282:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block283:
	lea eax,[esp+0x28]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x9C]
	push ecx
	call ebp
	lea edx,[esp+0x9C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block284:
	lea eax,[esp+0x144]
	push eax
	mov byte ptr [esp+0x180],0x2A
	call ebp
	lea ecx,[esp+0x144]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block14

 Block285:
	lea edx,[esp+0x9C]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0x148]
	push eax
	push esi
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x190],0x2B
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x18C],0x2C
	test ebx,ebx
	je Block19

 Block286:
	mov eax,dword ptr [esp+0x3C]
	imul eax,0x16
	add eax,0x38
	push eax
	add edi,0x1F
	push edi
	mov ecx,ebx
	mov byte ptr [esp+0x194],0x2B
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x17C],0x2A
	cmp word ptr [esp+0x144],di
	jne Block289

 Block287:
	mov eax,dword ptr [esp+0x14C]
	xor ecx,ecx
	mov word ptr [esp+0x144],cx
	test eax,eax
	je Block290

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block290

 Block289:
	lea edx,[esp+0x144]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block290:
	mov byte ptr [esp+0x17C],0x24
	cmp word ptr [esp+0x9C],di
	jne Block293

 Block291:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	test eax,eax
	je Block294

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block294

 Block293:
	lea ecx,[esp+0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block294:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x17C],0x23
	test eax,eax
	je Block296

 Block295:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block296:
	mov byte ptr [esp+0x17C],0x1E
	test esi,esi
	je Block298

 Block297:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block298:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x17C],0x16
	test eax,eax
	je Block300

 Block299:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block300:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x17C],0xC
	test eax,eax
	je Block302

 Block301:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block302:
	mov esi,dword ptr [esp+0x48]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x180],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block305

 Block303:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block305

 Block304:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block305:
	mov eax,dword ptr [esp+0x2C]
	inc eax
	cmp eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],0
	mov dword ptr [esp+0x2C],eax
	jl Block96

 Block306:
	mov ebp,dword ptr [esp+0x1C]

 Block307:
	mov dword ptr [esp+0x17C],0xFFFFFFFF
	test ebp,ebp
	je Block309

 Block308:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block309:
	mov ecx,dword ptr [esp+0x174]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x16C
	ret 4
}
}
// CUIQuestAlarm::RemoveOldQuest
__SUB_CLASS_THIS0(004323D0, __thiscall, 58746,  CUIQuestAlarm, int32_t) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	mov ebx,ecx
	push esi
	lea esi,[ebx+0xB8C]
	mov ecx,esi
	call ZMap<long, unsigned long, long>::GetHeadPosition
	mov dword ptr [esp+8],eax
	test eax,eax
	je Block7

 Block1:
	push edi
	lea ecx,[ecx]

 Block2:
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call ZMap<long, unsigned long, long>::GetNext
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x14],edi
	call timeGetTime
	sub eax,dword ptr [esp+0x10]
	cmp eax,0x927C0
	jbe Block5

 Block3:
	push edi
	call isAllConditionsSatisfied
	add esp,4
	test eax,eax
	jne Block5

 Block4:
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	call ZMap<long, unsigned long, long>::RemoveKey
	push edi
	mov ecx,ebx
	call CUIQuestAlarm::DeleteQuest

 Block5:
	cmp dword ptr [esp+0xC],0
	jne Block2

 Block6:
	pop edi

 Block7:
	pop esi
	mov eax,1
	pop ebx
	add esp,0xC
	ret
}
}
// CUIQuestInfo::IsMarkedAsRead
__SUB(00421DA0, __cdecl, 58583,  int32_t, uint16_t) {
__asm {

 Block0:
	push 0
	lea eax,[esp+8]
	push eax
	mov ecx,offset CUIQuestInfo::ms_lQuestRead
	call ZList<unsigned short>::Find
	neg eax
	sbb eax,eax
	neg eax
	ret
}
}
// CUIQuestInfo::ResetInfo
_SUB_EXCEPTION_HANDLER(4343C0)
__SUB_CLASS_THIS(004343C0, __thiscall, 58574,  CUIQuestInfo, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4343C0
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
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	cmp dword ptr [esi+0xB1C],edi
	jl Block2

 Block1:
	lea eax,[esp+0x24]
	push eax
	call CUIQuestInfo::GetQuestInfo
	lea ebx,[edi+1]
	mov edi,dword ptr [esp+0x20]
	jmp Block3

 Block2:
	mov dword ptr [esp+0x20],edi
	lea eax,[esp+0x1C]
	mov ebx,2

 Block3:
	mov ebp,dword ptr [eax+4]
	mov dword ptr [esp+0x20],ebp
	test ebp,ebp
	je Block5

 Block4:
	lea ecx,[ebp-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov dword ptr [esp+0x34],1
	test bl,2
	je Block11

 Block6:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test edi,edi
	je Block11

 Block7:
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block10

 Block9:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block10:
	mov ebp,dword ptr [esp+0x20]

 Block11:
	mov byte ptr [esp+0x34],2
	test bl,1
	je Block17

 Block12:
	mov edi,dword ptr [esp+0x28]
	test edi,edi
	je Block17

 Block13:
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block16

 Block15:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block16:
	mov ebp,dword ptr [esp+0x20]
	mov dword ptr [esp+0x28],0

 Block17:
	cmp dword ptr [esp+0x3C],0
	je Block19

 Block18:
	mov ecx,esi
	call CUIQuestInfo::LoadData

 Block19:
	or edi,0xFFFFFFFF
	test ebp,ebp
	je Block23

 Block20:
	mov ecx,dword ptr [esi+0xB18]
	lea eax,[esi+ecx*4+0xB5C]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block22

 Block21:
	mov eax,dword ptr [eax-4]

 Block22:
	cmp dword ptr [esi+0xB1C],eax
	jb Block24

 Block23:
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xB1C],edi
	call CUIQuestInfo::ToggleDetail

 Block24:
	cmp dword ptr [esi+0xB1C],0
	jl Block30

 Block25:
	cmp dword ptr [esi+0xB28],0
	je Block30

 Block26:
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	call CUIQuestInfo::GetQuestInfo
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],3
	test eax,eax
	je Block28

 Block27:
	mov ax,word ptr [eax]
	cmp ax,word ptr [ebp]
	je Block29

 Block28:
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xB1C],edi
	call CUIQuestInfo::ToggleDetail

 Block29:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x34],2
	call ZRef<QuestInfo>::~ZRef<QuestInfo>

 Block30:
	mov ecx,esi
	call CUIQuestInfo::SetScrollBar
	mov ecx,esi
	call CUIQuestInfo::SetButton
	cmp dword ptr [esi+0xB1C],0
	jl Block33

 Block31:
	cmp dword ptr [esi+0xB28],0
	je Block33

 Block32:
	mov ecx,dword ptr [TSingleton<CUIQuestInfoDetail>::ms_pInstance]
	call CUIQuestInfoDetail::ResetInfo

 Block33:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x34],edi
	test ebp,ebp
	je Block37

 Block34:
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block37

 Block35:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block37

 Block36:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block37:
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
// CUIQuestInfo::SetBackFont
__SUB_CLASS_THIS(00421DC0, __thiscall, 58574,  CUIQuestInfo, void, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB54]
	mov eax,dword ptr [esi+ebx*8+0xB44]
	push edi
	mov edi,dword ptr [ecx]
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block5:
	mov eax,dword ptr [esi+0xB54]
	mov esi,dword ptr [esi+ebx*8+0xB48]
	mov edi,dword ptr [eax+4]
	add eax,4
	cmp edi,esi
	je Block10

 Block6:
	mov dword ptr [eax],esi
	test esi,esi
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block8:
	test edi,edi
	je Block10

 Block9:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block10:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUIQuestInfoDetail::GetScrLogLen
__SUB_CLASS_THIS0(00421850, __thiscall, 58397,  CUIQuestInfoDetail, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x8C]
	mov edx,dword ptr [ecx+0x34]
	mov eax,0x78
	test edx,edx
	je Block2

 Block1:
	cmp dword ptr [edx-4],0
	jne Block3

 Block2:
	mov eax,0xEE

 Block3:
	test ecx,ecx
	je Block9

 Block4:
	mov edx,dword ptr [ecx+0x40]
	test edx,edx
	je Block6

 Block5:
	cmp edx,1
	jne Block7

 Block6:
	mov ecx,0xF
	sub eax,ecx
	ret

 Block7:
	test ecx,ecx
	je Block9

 Block8:
	cmp dword ptr [ecx+0x24],0
	jne Block6

 Block9:
	xor ecx,ecx
	sub eax,ecx
	ret
}
}
// CUIQuestAlarm::OnSetFocus
__SUB_CLASS_THIS(0042C7A0, __thiscall, 58745,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIQuestInfo::TryShowRecentlyUpdatedQuest
__SUB_CLASS_THIS0(00432020, __thiscall, 58586,  CUIQuestInfo, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	call CQuestMan::GetRecentlyUpdatedQuest
	movzx esi,ax
	test si,si
	je Block3

 Block1:
	push esi
	push 1
	mov ecx,edi
	call CUIQuestInfo::ShowQuestInfoDetail
	test eax,eax
	jne Block4

 Block2:
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push esi
	call CQuestMan::RemoveRecentlyUpdatedQuest
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	call CQuestMan::GetRecentlyUpdatedQuest
	movzx esi,ax
	test si,si
	jne Block1

 Block3:
	pop edi
	xor eax,eax
	pop esi
	ret

 Block4:
	pop edi
	mov eax,1
	pop esi
	ret
}
}
// CUIQuestInfoDetail::OnButtonClicked
_SUB_EXCEPTION_HANDLER(434C90)
__SUB_CLASS_THIS(00434C90, __thiscall, 58391,  CUIQuestInfoDetail, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_434C90
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
	mov esi,ecx
	mov eax,dword ptr [esi+0xB80]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [esi+0xB80],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esp+0x64]
	add eax,0xFFFFF82E
	cmp eax,6
	ja Block50

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block6
cmp EAX, 2
je Block5
cmp EAX, 3
je Block10
cmp EAX, 4
je Block13
cmp EAX, 5
je Block37
cmp EAX, 6
je Block42


 Block4:
	mov ecx,dword ptr [esi+0x84]
	push ebx
	call CUIQuestInfo::ToggleDetail
	jmp Block50

 Block5:
	mov ecx,esi
	call CUIQuestInfoDetail::MarkNpcLocation_InWorldMap
	jmp Block50

 Block6:
	mov ecx,dword ptr [esi+0x84]
	lea eax,[esp+0x1C]
	push eax
	call CUIQuestInfo::GetQuestInfo
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x5C],ebx
	cmp eax,ebx
	je Block48

 Block7:
	movzx edi,word ptr [eax]
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x78],esp
	push 0xCDB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block48

 Block8:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	call CWvsContext::ResignQuest
	mov edx,0x289A
	cmp di,dx
	jne Block48

 Block9:
	mov esi,dword ptr [esi+0x84]
	push ebx
	mov ecx,esi
	call CUIQuestInfo::ToggleDetail
	jmp Block48

 Block10:
	cmp dword ptr [TSingleton<CUIQuestAlarm>::ms_pInstance],ebx
	jne Block12

 Block11:
	call TSingleton<CUIQuestAlarm>::CreateInstance

 Block12:
	mov ecx,dword ptr [esi+0x84]
	lea eax,[esp+0x34]
	push eax
	call CUIQuestInfo::GetQuestInfo
	mov eax,dword ptr [eax+4]
	movzx ecx,word ptr [eax]
	push ebx
	push ecx
	mov ecx,dword ptr [TSingleton<CUIQuestAlarm>::ms_pInstance]
	mov dword ptr [esp+0x64],1
	call CUIQuestAlarm::RegisterQuest
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZRef<QuestInfo>::~ZRef<QuestInfo>
	mov ecx,esi
	call CUIQuestInfoDetail::SetButton
	jmp Block50

 Block13:
	mov ecx,dword ptr [esi+0x84]
	lea edx,[esp+0x2C]
	push edx
	call CUIQuestInfo::GetQuestInfo
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x5C],2
	cmp eax,ebx
	je Block36

 Block14:
	movzx ebp,word ptr [eax]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push ebp
	mov dword ptr [esp+0x18],ebp
	call CQuestMan::GetCompleteDemand
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebx,eax
	mov dword ptr [esp+0x64],edi
	test ebx,ebx
	je Block36

 Block15:
	test edi,edi
	je Block36

 Block16:
	lea eax,[esp+0x3C]
	push eax
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x1C],ecx
	lea ecx,[esp+0x3C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea edx,[edi+0x2148]
	mov ecx,edi
	mov dword ptr [esp+0x18],edx
	call CWvsContext::ResetWorldMapQuestDemand
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ebx+0x18]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push edx
	push ebp
	call CQuestMan::CheckCompleteDemand
	test eax,eax
	jne Block18

 Block17:
	mov eax,dword ptr [ebx+0x18]
	mov ecx,esi
	mov dword ptr [esi+0xD8],eax
	call CUIQuestInfoDetail::MarkNpcLocation_InWorldMap
	lea ecx,[esp+0x2C]
	jmp Block49

 Block18:
	xor edi,edi
	lea ebp,[ebx+0x78]

 Block19:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block22

 Block20:
	cmp edi,dword ptr [eax-4]
	jae Block22

 Block21:
	mov ecx,eax
	mov edx,dword ptr [ecx+edi*8]
	mov ecx,dword ptr [esp+0x64]
	push edx
	call CWvsContext::AddWorldMapQuestDemandMob
	inc edi
	jmp Block19

 Block22:
	add ebx,0x74
	mov ecx,ebx
	call ZArray<ItemInfo>::IsEmpty
	test eax,eax
	jne Block33

 Block23:
	mov ebp,dword ptr [esp+0x64]
	push eax
	push 0x1F4
	mov ecx,ebp
	call CWvsContext::CanSendExclRequest
	test eax,eax
	je Block36

 Block24:
	push 0xDD
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 0
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x60],3
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x14]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode2
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block26

 Block25:
	mov eax,dword ptr [eax-4]

 Block26:
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	xor edi,edi
	xor esi,esi

 Block27:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block32

 Block28:
	cmp edi,dword ptr [eax-4]
	jae Block32

 Block29:
	mov ecx,eax
	cmp dword ptr [esi+ecx+8],0
	lea eax,[esi+ecx]
	lea ecx,[esp+0x1C]
	je Block31

 Block30:
	push 0
	call COutPacket::Encode4
	inc edi
	add esi,0xC
	jmp Block27

 Block31:
	mov edx,dword ptr [eax]
	push edx
	call COutPacket::Encode4
	inc edi
	add esi,0xC
	jmp Block27

 Block32:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CClientSocket::SendPacket
	push 1
	mov ecx,ebp
	call CWvsContext::SetExclRequestSent
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x5C],2
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x2C]
	jmp Block49

 Block33:
	mov ecx,ebp
	call ZArray<MobInfo>::IsEmpty
	test eax,eax
	je Block35

 Block34:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x78],esp
	push 0x19EA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	lea ecx,[esp+0x2C]
	jmp Block49

 Block35:
	mov dx,word ptr [esp+0x14]
	mov eax,dword ptr [esp+0x64]
	mov ecx,esi
	mov word ptr [eax+0x4238],dx
	call CUIQuestInfoDetail::MarkMobLocation_InWorldMap

 Block36:
	lea ecx,[esp+0x2C]
	jmp Block49

 Block37:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x44]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esi+0x84]
	lea edx,[esp+0x1C]
	push edx
	call CUIQuestInfo::GetQuestInfo
	mov ebx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x5C],4
	test ebx,ebx
	je Block48

 Block38:
	push 0x565D60
	push 5
	mov ecx,ebp
	call CharacterData::FindCashItemSlotPosition_1
	mov esi,eax
	test esi,esi
	jg Block41

 Block39:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x78],esp
	push 0x1A08
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block48

 Block40:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [ecx+0x40CC],0x2FDFE9A
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0
	call CWvsContext::SendMigrateToShopRequest
	jmp Block48

 Block41:
	movzx eax,word ptr [ebx]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0xFFFFFFFF
	push offset _S_
	mov word ptr [edi+0x407C],ax
	call ZXString<char>::CreateFromCharStr
	push 0
	push 0x565D60
	jmp Block47

 Block42:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x4C]
	push edx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x4C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esi+0x84]
	lea eax,[esp+0x1C]
	push eax
	call CUIQuestInfo::GetQuestInfo
	mov ebx,dword ptr [esp+0x20]
	mov dword ptr [esp+0x5C],5
	test ebx,ebx
	je Block48

 Block43:
	push 0x565D61
	push 5
	mov ecx,ebp
	call CharacterData::FindCashItemSlotPosition_1
	mov esi,eax
	test esi,esi
	jg Block46

 Block44:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x78],esp
	push 0x1A08
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block48

 Block45:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [edx+0x40CC],0x2FDFE9B
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0
	call CWvsContext::SendMigrateToShopRequest
	jmp Block48

 Block46:
	movzx eax,word ptr [ebx]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push 0xFFFFFFFF
	push offset _S_
	mov word ptr [edi+0x407C],ax
	call ZXString<char>::CreateFromCharStr
	push 0
	push 0x565D61

 Block47:
	push esi
	mov ecx,edi
	call CWvsContext::SendConsumeCashItemUseRequest

 Block48:
	lea ecx,[esp+0x1C]

 Block49:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZRef<QuestInfo>::~ZRef<QuestInfo>

 Block50:
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
// CUIQuestAlarm::RemoveQuestByIndex
__SUB_CLASS_THIS(00422570, __thiscall, 58756,  CUIQuestAlarm, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0xB08]
	lea esi,[edi+0xB08]
	test eax,eax
	je Block6

 Block1:
	cmp dword ptr [eax-4],0
	je Block6

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	lea ebp,[ebx*4]
	add eax,ebp
	push eax
	lea ecx,[edi+0xB8C]
	call ZMap<long, unsigned long, long>::RemoveKey
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push ebx
	call CConfig::DeleteQuestAlarm
	mov ecx,dword ptr [esi]
	add ecx,ebp
	push ecx
	mov ecx,esi
	call ZArray<long>::RemoveAt
	mov ecx,dword ptr [edi+ebx*8+0xB30]
	test ecx,ecx
	je Block5

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [edi+ebx*8+0xB30],0
	lea edi,[edi+ebx*8+0xB2C]
	je Block5

 Block4:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block5:
	pop ebp
	pop ebx

 Block6:
	pop edi
	pop esi
	ret 4
}
}
// CUIQuestAlarm::Draw
_SUB_EXCEPTION_HANDLER(42D850)
__SUB_CLASS_THIS(0042D850, __thiscall, 58741,  CUIQuestAlarm, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42D850
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2F0
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
	mov dword ptr [ebp+0x60],esi
	mov eax,dword ptr [ebp+0x7C]
	push eax
	call CWnd::Draw
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	xor edi,edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x10],edi
	lea edx,[ebp+0xC]
	push 0xE4C
	push edx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xB08]
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	jne Block2

 Block1:
	xor ecx,ecx
	jmp Block3

 Block2:
	mov ecx,dword ptr [ecx-4]

 Block3:
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea eax,[ebp+0x10]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0xC]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x20]
	push ecx
	call ebx
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],3
	call ebx
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea edx,[ebp+0x20]
	push edx
	mov edx,dword ptr [ebp+0x10]
	lea eax,[ebp-0x1C]
	push eax
	mov eax,dword ptr [esi+0xB10]
	push eax
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	mov bl,4
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],5
	test edi,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	push 5
	push 0x13
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x1C],bx
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+0x20],bx
	jne Block18

 Block16:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp dword ptr [esi+0xB0C],0
	je Block422

 Block20:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block422

 Block21:
	cmp dword ptr [eax-4],0
	je Block422

 Block22:
	mov ebx,dword ptr [ebp+0x60]
	mov ecx,ebx
	call CUIQuestAlarm::GetHeight
	mov ecx,eax
	mov eax,0x38E38E39
	imul ecx
	sar edx,2
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	xor edi,edi
	test esi,esi
	jle Block33

 Block23:
	mov ebx,dword ptr [ebp+0x5C]
	mov dword ptr [ebp+0x68],0x19

 Block24:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block25:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax+0xB64]
	mov ebx,dword ptr [ebp+0x20]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x24]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x28]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x2C]
	push ecx
	mov ecx,dword ptr [edx+0x80]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [ebp+0x68]
	mov ebx,dword ptr [ebp+0x5C]
	push eax
	push 0
	push ebx
	mov byte ptr [ebp-4],6
	call ecx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],1
	jne Block30

 Block28:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	add dword ptr [ebp+0x68],0x12
	inc edi
	cmp edi,esi
	jl Block24

 Block32:
	mov ebx,dword ptr [ebp+0x60]

 Block33:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax]
	mov esi,dword ptr [ebp+0x20]
	mov ecx,dword ptr [ebx+0xB68]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp+0x24]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x28]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp+0x2C]
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [ebp+0x5C]
	push ecx
	lea eax,[edi+edi*8]
	lea ecx,[eax+eax+0x19]
	push ecx
	push 0
	push esi
	mov byte ptr [ebp-4],7
	call edx
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],1
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov dword ptr [ebp-0x28],eax
	mov eax,dword ptr [ebx+0xB08]
	mov dword ptr [ebp+0x14],edx
	test eax,eax
	je Block43

 Block42:
	mov eax,dword ptr [eax-4]

 Block43:
	lea edx,[ebp+0x4B]
	push edx
	lea ecx,[ebx+0xBAC]
	push eax
	call ZArray<ZXString<char>>::_Alloc
	mov eax,dword ptr [ebx+0xB08]
	test eax,eax
	je Block45

 Block44:
	mov eax,dword ptr [eax-4]

 Block45:
	lea edx,[ebp+0x4B]
	push edx
	lea ecx,[ebx+0xBB0]
	push eax
	call ZArray<tagRECT>::_Alloc
	mov eax,dword ptr [ebx+0xB08]
	test eax,eax
	je Block47

 Block46:
	mov eax,dword ptr [eax-4]

 Block47:
	mov esi,dword ptr [ebp+0x60]
	lea edx,[ebp+0x4B]
	push edx
	lea ecx,[esi+0xBB4]
	push eax
	call ZArray<tagRECT>::_Alloc
	xor ebx,ebx
	mov dword ptr [ebp+0x6C],0x19
	mov dword ptr [ebp+4],ebx
	jmp Block49

 Block49:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block419

 Block50:
	cmp ebx,dword ptr [eax-4]
	jae Block419

 Block51:
	lea edi,[ebx*4]
	movzx eax,word ptr [edi+eax]
	push eax
	lea ecx,[ebp+0x38]
	push ecx
	mov ecx,dword ptr [ebp+0x14]
	mov dword ptr [ebp+0x18],eax
	call CQuestMan::GetQuestName
	mov eax,dword ptr [esi+0xB14]
	push 0x96
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],8
	mov dword ptr [ebp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	lea ecx,[ebp+0x38]
	push ecx
	call format_string_1
	add esp,0xC
	test eax,eax
	je Block69

 Block54:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block55:
	mov eax,dword ptr [ebp+0x6C]
	mov edx,dword ptr [ebp+0x38]
	add eax,0x12
	push eax
	lea ecx,[ebp-0x5C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp+0x68],eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xB14]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	je Block10

 Block56:
	mov byte ptr [ebp-4],9
	call IWzFont::CalcTextWidth
	add eax,0xA
	push eax
	mov eax,dword ptr [ebp+0x6C]
	push eax
	push 0xA
	lea ecx,[ebp-0x2FC]
	push ecx
	call SetRect
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],8
	jne Block59

 Block57:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov ecx,dword ptr [ebp+0x18]
	push ecx
	mov ecx,dword ptr [ebp+0x14]
	lea edx,[ebp-0x34]
	push edx
	call CQuestMan::GetQuestName
	lea ecx,[ebp-0x2FC]
	push ecx
	push eax
	lea ecx,[esi+0xB6C]
	mov byte ptr [ebp-4],0xB
	call ZMap<ZXString<char>, tagRECT, ZXString<char>>::Insert
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	mov edx,dword ptr [ebp+0x18]
	mov ecx,dword ptr [ebp+0x14]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	call CQuestMan::GetQuestName
	mov ecx,dword ptr [esi+0xBAC]
	push eax
	add ecx,edi
	mov byte ptr [ebp-4],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x9C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block65:
	mov eax,dword ptr [ebp+0x68]
	mov edx,dword ptr [ebp+0x38]
	push eax
	lea ecx,[ebp-0x9C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xB14]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	je Block10

 Block66:
	mov byte ptr [ebp-4],0xD
	call IWzFont::CalcTextWidth
	mov edx,dword ptr [esi+0xBB0]
	add eax,0xA
	push eax
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,ebx
	shl ecx,4
	push eax
	add esi,0xBB0
	push 0xA
	add edx,ecx
	push edx
	mov dword ptr [ebp+0xC],ecx
	call SetRect
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],8
	jne Block68

 Block67:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	jmp Block73

 Block68:
	lea ecx,[ebp-0x9C]
	push ecx
	jmp Block76

 Block69:
	mov eax,dword ptr [ebp+0x60]
	mov esi,dword ptr [eax+0xBAC]
	push 0
	add eax,0xBAC
	push offset _S_
	push 0
	add esi,edi
	push 0
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	lea edx,[ebp-0x1BC]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1BC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block70:
	mov esi,dword ptr [ebp+0x6C]
	mov edx,dword ptr [ebp+0x38]
	lea eax,[esi+0x12]
	push eax
	lea ecx,[ebp-0x1BC]
	push ecx
	push ecx
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0xF
	mov dword ptr [ebp+0x68],eax
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [ebp+0x60]
	mov ecx,dword ptr [edi+0xB14]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	je Block10

 Block71:
	mov byte ptr [ebp-4],0xF
	call IWzFont::CalcTextWidth
	add eax,0xA
	push eax
	lea eax,[edi+0xBB0]
	mov eax,dword ptr [eax]
	mov ecx,ebx
	shl ecx,4
	push esi
	push 0xA
	add eax,ecx
	push eax
	mov dword ptr [ebp+0xC],ecx
	call SetRect
	cmp word ptr [ebp-0x1BC],8
	mov byte ptr [ebp-4],8
	jne Block75

 Block72:
	mov eax,dword ptr [ebp-0x1B4]
	xor ecx,ecx
	mov word ptr [ebp-0x1BC],cx

 Block73:
	test eax,eax
	je Block77

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block75:
	lea edx,[ebp-0x1BC]
	push edx

 Block76:
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov ecx,dword ptr [ebp+0x60]
	mov edi,dword ptr [ebp+0x6C]
	xor esi,esi
	mov eax,1
	mov dword ptr [ebp+0x34],edi
	mov dword ptr [ebp+0x30],eax
	cmp dword ptr [ecx+ebx*8+0xB30],esi
	jne Block98

 Block78:
	mov dword ptr [ebp-0x10],esi
	mov dword ptr [ebp-0x1C],eax
	mov dword ptr [ebp-0x18],esi
	mov dword ptr [ebp-0x14],esi
	push 0x48
	push offset _S_UIUIWINDOW2IMGQU__35
	push esi
	push 0x24
	lea ecx,[ebp-0x10]
	mov byte ptr [ebp-4],0x11
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x24
	lea ecx,[ebp-0x10]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x12
	cmp eax,esi
	je Block80

 Block79:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block81

 Block80:
	xor eax,eax

 Block81:
	mov byte ptr [ebp-4],0x11
	cmp eax,esi
	je Block94

 Block82:
	lea esi,[eax+8]
	test esi,esi
	je Block94

 Block83:
	add esi,0xFFFFFFF8
	test esi,esi
	je Block85

 Block84:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block85:
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[eax+ebx*8+0xB30]
	mov eax,dword ptr [ecx]
	mov dword ptr [ecx],esi
	test eax,eax
	je Block89

 Block86:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block89

 Block87:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block89

 Block88:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block89:
	lea eax,[ebp-0xBC]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0xBC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block90:
	mov edx,dword ptr [ebp+0x60]
	mov esi,dword ptr [edx+ebx*8+0xB30]
	mov edx,dword ptr [ebp+0x38]
	lea eax,[ebp-0x1C]
	push eax
	push 0
	push edi
	lea ecx,[ebp-0xBC]
	push ecx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x13
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax+0xB14]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	je Block10

 Block91:
	mov byte ptr [ebp-4],0x13
	call IWzFont::CalcTextWidth
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x28]
	add eax,0xF
	push eax
	mov eax,dword ptr [ebp+0x60]
	add ebx,0x7D2
	push ebx
	push eax
	mov ecx,esi
	call edx
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0x11
	jne Block95

 Block92:
	xor eax,eax
	mov word ptr [ebp-0xBC],ax
	mov eax,dword ptr [ebp-0xB4]
	test eax,eax
	je Block96

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block94:
	xor esi,esi
	jmp Block85

 Block95:
	lea ecx,[ebp-0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov eax,dword ptr [ebp-0x10]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	mov eax,dword ptr [ebp+0x18]
	mov edx,dword ptr [ebp+0x68]
	mov ecx,dword ptr [ebp+0x14]
	push eax
	mov dword ptr [ebp+0x6C],edx
	call CQuestMan::GetCompleteDemand
	mov ebx,eax
	mov eax,dword ptr [ebx+0x70]
	mov dword ptr [ebp+0x40],ebx
	test eax,eax
	je Block155

 Block99:
	cmp dword ptr [eax-4],0
	je Block155

 Block100:
	lea ecx,[ebp-0x2DC]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [ebp-0x2D8]
	mov edx,dword ptr [eax+4]
	mov dword ptr [ebp+0x44],edx
	test esi,esi
	je Block105

 Block101:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block104

 Block102:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block104

 Block103:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block104:
	mov dword ptr [ebp-0x2D8],0

 Block105:
	xor ecx,ecx
	mov dword ptr [ebp+0x54],ecx
	jmp Block107

 Block107:
	mov eax,dword ptr [ebx+0x70]
	test eax,eax
	je Block155

 Block108:
	cmp ecx,dword ptr [eax-4]
	jae Block155

 Block109:
	mov eax,dword ptr [ebp+0x40]
	mov edx,dword ptr [eax+0x70]
	movzx esi,word ptr [edx+ecx*8]
	mov ecx,dword ptr [ebp+0x14]
	push esi
	lea eax,[ebp]
	push eax
	call CQuestMan::GetQuestName
	mov dword ptr [ebp+0x58],0
	xor ebx,ebx
	mov dword ptr [ebp+0x68],ebx
	movzx ecx,si
	mov dword ptr [ebp+0x3C],ecx
	mov ecx,dword ptr [ebp+0x44]
	push ebx
	lea edx,[ebp+0x3C]
	push edx
	add ecx,0x5B5
	mov byte ptr [ebp-4],0x17
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	test eax,eax
	je Block115

 Block110:
	lea eax,[ebp-0x44]
	push 0x1A30
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	push ecx
	lea edx,[ebp+0x58]
	push offset _S_S__4
	push edx
	mov byte ptr [ebp-4],0x18
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x44]
	add esp,0xC
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block112:
	lea eax,[ebp-0x40]
	push 0x2E
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebx,eax
	push eax
	mov dword ptr [ebp+0x68],ebx
	call edx

 Block114:
	mov eax,dword ptr [ebp-0x40]
	jmp Block120

 Block115:
	lea eax,[ebp-0x38]
	push 0x14A8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	push ecx
	lea edx,[ebp+0x58]
	push offset _S_S__4
	push edx
	mov byte ptr [ebp-4],0x19
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x38]
	add esp,0xC
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block117:
	lea eax,[ebp-0x4C]
	push 0x22
	push eax
	call get_basic_font
	mov eax,dword ptr [eax]
	add esp,8
	test eax,eax
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebx,eax
	push eax
	mov dword ptr [ebp+0x68],ebx
	call edx

 Block119:
	mov eax,dword ptr [ebp-0x4C]

 Block120:
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	lea eax,[ebp-0x2BC]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x2BC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block123:
	mov eax,dword ptr [ebp+0x58]
	lea edx,[ebp-0x2BC]
	push edx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x1A
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x1B
	test ebx,ebx
	je Block10

 Block124:
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1A
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x2BC],8
	mov edi,eax
	mov byte ptr [ebp-4],0x17
	jne Block127

 Block125:
	mov eax,dword ptr [ebp-0x2B4]
	xor ecx,ecx
	mov word ptr [ebp-0x2BC],cx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[ebp-0x2BC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov ebx,dword ptr [ebp+0x60]
	mov eax,dword ptr [ebx+0xB10]
	mov esi,0xA0
	sub esi,edi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block130

 Block129:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block130:
	lea eax,[ebp]
	push eax
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x1DC]
	push ecx
	call edi
	lea edx,[ebp-0x1DC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block131:
	lea eax,[ebp-0xDC]
	push eax
	mov byte ptr [ebp-4],0x1C
	call edi
	lea ecx,[ebp-0xDC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block132:
	lea edx,[ebp-0x1DC]
	push edx
	mov edx,dword ptr [ebp]
	lea eax,[ebp-0xDC]
	push eax
	mov eax,dword ptr [ebx+0xB10]
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x1D
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [ebp+0x5C]
	push eax
	mov byte ptr [ebp-4],0x1E
	push 0xA
	mov byte ptr [ebp-4],0x1D
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0xDC],8
	mov byte ptr [ebp-4],0x1C
	jne Block135

 Block133:
	mov eax,dword ptr [ebp-0xD4]
	xor ecx,ecx
	mov word ptr [ebp-0xDC],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[ebp-0xDC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	cmp word ptr [ebp-0x1DC],8
	mov byte ptr [ebp-4],0x17
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [ebp-0x1DC],ax
	mov eax,dword ptr [ebp-0x1D4]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[ebp-0x1DC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	lea edx,[ebp-0x25C]
	push edx
	call edi
	lea eax,[ebp-0x25C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block141:
	lea ecx,[ebp-0xFC]
	push ecx
	mov byte ptr [ebp-4],0x1F
	call edi
	lea edx,[ebp-0xFC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block142:
	mov edi,dword ptr [ebp+0x68]
	mov ebx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x25C]
	push eax
	lea ecx,[ebp-0xFC]
	push ecx
	push edi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x20
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [ebp+0x5C]
	push edx
	add esi,0xF
	mov byte ptr [ebp-4],0x21
	push esi
	mov byte ptr [ebp-4],0x20
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0xFC],8
	mov byte ptr [ebp-4],0x1F
	jne Block145

 Block143:
	xor eax,eax
	mov word ptr [ebp-0xFC],ax
	mov eax,dword ptr [ebp-0xF4]
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea ecx,[ebp-0xFC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	cmp word ptr [ebp-0x25C],8
	mov byte ptr [ebp-4],0x17
	jne Block149

 Block147:
	mov eax,dword ptr [ebp-0x254]
	xor edx,edx
	mov word ptr [ebp-0x25C],dx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea eax,[ebp-0x25C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	add dword ptr [ebp+0x6C],0x12
	push edi
	mov byte ptr [ebp-4],0x16
	call edx
	mov byte ptr [ebp-4],0x15
	test ebx,ebx
	je Block152

 Block151:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block152:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block154

 Block153:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block154:
	inc dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebp+0x54]
	mov ebx,dword ptr [ebp+0x40]
	jmp Block107

 Block155:
	mov eax,dword ptr [ebx+0x74]
	test eax,eax
	je Block234

 Block156:
	cmp dword ptr [eax-4],0
	je Block234

 Block157:
	mov edi,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x58],0
	mov dword ptr [ebp+0x54],0

 Block158:
	mov eax,dword ptr [ebx+0x74]
	test eax,eax
	je Block234

 Block159:
	mov ecx,dword ptr [ebp+0x58]
	cmp ecx,dword ptr [eax-4]
	jae Block234

 Block160:
	mov ebx,dword ptr [ebp+0x40]
	mov eax,dword ptr [ebx+0x74]
	mov esi,dword ptr [ebp+0x54]
	add eax,esi
	push eax
	lea edx,[ebp+8]
	push edx
	mov ecx,edi
	call CUIQuestAlarm::CheckSecretItem
	mov eax,dword ptr [ebx+0x74]
	mov ecx,dword ptr [eax+esi]
	add eax,esi
	mov esi,dword ptr [eax+4]
	push ecx
	mov ecx,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x22
	mov dword ptr [ebp+0x44],esi
	call CWvsContext::GetItemCount
	cmp dword ptr [ebp+0x30],0
	mov ebx,eax
	je Block162

 Block161:
	cmp ebx,esi
	mov dword ptr [ebp+0x30],1
	jge Block163

 Block162:
	mov dword ptr [ebp+0x30],0

 Block163:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call _itoa
	add esp,0xC
	mov dword ptr [ebp+0x50],0
	test eax,eax
	je Block167

 Block164:
	mov ecx,eax
	lea esi,[ecx+1]
	lea esp,[esp]

 Block165:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block165

 Block166:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push 0
	push esi
	lea ecx,[ebp+0x50]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp+0x50]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ebp+0x44]

 Block167:
	mov dword ptr [ebp+0x68],0
	push esi
	lea edx,[ebp+0x68]
	push offset _S_D__8
	push edx
	mov byte ptr [ebp-4],0x24
	call ZXString<char>::Format
	add esp,0xC
	lea eax,[ebp-0x11C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x11C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block168:
	mov eax,dword ptr [ebp+0x50]
	lea edx,[ebp-0x11C]
	push edx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x25
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xB10]
	mov byte ptr [ebp-4],0x26
	test ecx,ecx
	je Block10

 Block169:
	mov byte ptr [ebp-4],0x25
	call IWzFont::CalcTextWidth
	mov esi,0x9B
	sub esi,eax
	cmp word ptr [ebp-0x11C],8
	mov byte ptr [ebp-4],0x24
	jne Block172

 Block170:
	mov eax,dword ptr [ebp-0x114]
	xor ecx,ecx
	mov word ptr [ebp-0x11C],cx
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea edx,[ebp-0x11C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block173:
	lea eax,[ebp-0x1FC]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x1FC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block174:
	mov eax,dword ptr [ebp+0x68]
	lea edx,[ebp-0x1FC]
	push edx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x27
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xB10]
	mov byte ptr [ebp-4],0x28
	test ecx,ecx
	je Block10

 Block175:
	mov byte ptr [ebp-4],0x27
	call IWzFont::CalcTextWidth
	sub esi,eax
	cmp word ptr [ebp-0x1FC],8
	mov byte ptr [ebp-4],0x24
	jne Block178

 Block176:
	mov eax,dword ptr [ebp-0x1F4]
	xor ecx,ecx
	mov word ptr [ebp-0x1FC],cx
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea edx,[ebp-0x1FC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	mov eax,dword ptr [edi+0xB10]
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block181

 Block180:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block181:
	lea eax,[ebp+8]
	push eax
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x29C]
	push ecx
	call esi
	lea edx,[ebp-0x29C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block182:
	lea eax,[ebp-0x13C]
	push eax
	mov byte ptr [ebp-4],0x29
	call esi
	lea ecx,[ebp-0x13C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block183:
	lea edx,[ebp-0x29C]
	push edx
	mov edx,dword ptr [ebp+8]
	lea eax,[ebp-0x13C]
	push eax
	mov eax,dword ptr [edi+0xB10]
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x2A
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [ebp+0x5C]
	push eax
	mov byte ptr [ebp-4],0x2B
	push 0xA
	mov byte ptr [ebp-4],0x2A
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x13C],8
	mov byte ptr [ebp-4],0x29
	jne Block186

 Block184:
	mov eax,dword ptr [ebp-0x134]
	xor ecx,ecx
	mov word ptr [ebp-0x13C],cx
	test eax,eax
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea edx,[ebp-0x13C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block187:
	cmp word ptr [ebp-0x29C],8
	mov byte ptr [ebp-4],0x24
	jne Block190

 Block188:
	xor eax,eax
	mov word ptr [ebp-0x29C],ax
	mov eax,dword ptr [ebp-0x294]
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea ecx,[ebp-0x29C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	lea edx,[ebp-0x15C]
	push edx
	call esi
	lea eax,[ebp-0x15C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block192:
	mov edx,dword ptr [ebp+8]
	lea ecx,[ebp-0x15C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x2C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xB10]
	mov byte ptr [ebp-4],0x2D
	test ecx,ecx
	je Block10

 Block193:
	mov byte ptr [ebp-4],0x2C
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x15C],8
	lea esi,[eax+0x14]
	mov byte ptr [ebp-4],0x24
	jne Block196

 Block194:
	xor eax,eax
	mov word ptr [ebp-0x15C],ax
	mov eax,dword ptr [ebp-0x154]
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea ecx,[ebp-0x15C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block197:
	lea edx,[ebp-0x17C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x17C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block198:
	lea ecx,[ebp-0x21C]
	push ecx
	mov byte ptr [ebp-4],0x2E
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x21C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block199:
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x2F
	test ecx,ecx
	jne Block201

 Block200:
	mov ecx,1

 Block201:
	lea eax,[ebp-0x17C]
	push eax
	mov eax,ebx
	imul eax,0x64
	lea edx,[ebp-0x21C]
	push edx
	cdq
	idiv ecx
	mov ecx,edi
	push eax
	lea eax,[ebp-0x48]
	push eax
	call CUIQuestAlarm::GetProgressFont
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebp+0x50]
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x30
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [ebp+0x5C]
	push eax
	mov byte ptr [ebp-4],0x31
	push esi
	mov byte ptr [ebp-4],0x30
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x48]
	mov byte ptr [ebp-4],0x2F
	test eax,eax
	je Block203

 Block202:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block203:
	mov ebx,8
	mov byte ptr [ebp-4],0x2E
	cmp word ptr [ebp-0x21C],bx
	jne Block206

 Block204:
	xor eax,eax
	mov word ptr [ebp-0x21C],ax
	mov eax,dword ptr [ebp-0x214]
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea ecx,[ebp-0x21C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block207:
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0x17C],bx
	jne Block210

 Block208:
	mov eax,dword ptr [ebp-0x174]
	xor edx,edx
	mov word ptr [ebp-0x17C],dx
	test eax,eax
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea eax,[ebp-0x17C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block211:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x27C]
	push ecx
	call ebx
	lea edx,[ebp-0x27C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block212:
	mov edx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x27C]
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x32
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0xB10]
	mov byte ptr [ebp-4],0x33
	test ecx,ecx
	je Block10

 Block213:
	mov byte ptr [ebp-4],0x32
	call IWzFont::CalcTextWidth
	add esi,eax
	cmp word ptr [ebp-0x27C],8
	mov byte ptr [ebp-4],0x24
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [ebp-0x27C],ax
	mov eax,dword ptr [ebp-0x274]
	test eax,eax
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[ebp-0x27C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block217:
	lea edx,[ebp-0x7C]
	push edx
	call ebx
	lea eax,[ebp-0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block218:
	lea ecx,[ebp-0x19C]
	push ecx
	mov byte ptr [ebp-4],0x34
	call ebx
	lea edx,[ebp-0x19C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block219:
	mov ebx,dword ptr [ebp+0x68]
	lea eax,[ebp-0x7C]
	push eax
	mov eax,dword ptr [edi+0xB10]
	lea ecx,[ebp-0x19C]
	push ecx
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x35
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [ebp+0x5C]
	push edx
	mov byte ptr [ebp-4],0x36
	push esi
	mov byte ptr [ebp-4],0x35
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x19C],8
	mov byte ptr [ebp-4],0x34
	jne Block222

 Block220:
	xor eax,eax
	mov word ptr [ebp-0x19C],ax
	mov eax,dword ptr [ebp-0x194]
	test eax,eax
	je Block223

 Block221:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block223

 Block222:
	lea ecx,[ebp-0x19C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block223:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x24
	jne Block226

 Block224:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block227

 Block225:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block227

 Block226:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block227:
	add dword ptr [ebp+0x6C],0x12
	mov byte ptr [ebp-4],0x23
	test ebx,ebx
	je Block229

 Block228:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block229:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x22
	test eax,eax
	je Block231

 Block230:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block231:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block233:
	inc dword ptr [ebp+0x58]
	add dword ptr [ebp+0x54],0xC
	mov ebx,dword ptr [ebp+0x40]
	jmp Block158

 Block234:
	mov eax,dword ptr [ebx+0x78]
	test eax,eax
	je Block356

 Block235:
	cmp dword ptr [eax-4],0
	je Block356

 Block236:
	mov dword ptr [ebp+0x54],0
	jmp Block238

 Block238:
	mov ecx,dword ptr [ebp+0x40]
	mov eax,dword ptr [ecx+0x78]
	test eax,eax
	je Block356

 Block239:
	mov edx,dword ptr [ebp+0x54]
	cmp edx,dword ptr [eax-4]
	jae Block356

 Block240:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x6C]
	push eax
	call esi
	lea ecx,[ebp-0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block241:
	lea edx,[ebp-0x8C]
	push edx
	mov byte ptr [ebp-4],0x37
	call esi
	lea eax,[ebp-0x8C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block242:
	push 0
	push 0
	lea ecx,[ebp-0x6C]
	push ecx
	lea edx,[ebp-0x8C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x8E6
	push eax
	mov byte ptr [ebp-4],0x38
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x39
	je Block10

 Block243:
	lea ecx,[ebp-0x2EC]
	push ecx
	mov byte ptr [ebp-4],0x38
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x3A
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x44],esi
	test eax,eax
	je Block246

 Block244:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x30]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	mov esi,ecx
	mov dword ptr [ebp+0x44],esi
	test eax,eax
	jge Block246

 Block245:
	cmp eax,0x80004002
	jne Block6

 Block246:
	mov edi,8
	mov byte ptr [ebp-4],0x3C
	cmp word ptr [ebp-0x2EC],di
	jne Block249

 Block247:
	mov eax,dword ptr [ebp-0x2E4]
	xor edx,edx
	mov word ptr [ebp-0x2EC],dx
	test eax,eax
	je Block250

 Block248:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block250

 Block249:
	lea eax,[ebp-0x2EC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block250:
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp-0x8C],di
	jne Block253

 Block251:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	test eax,eax
	je Block254

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block254

 Block253:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block254:
	mov byte ptr [ebp-4],0x3E
	cmp word ptr [ebp-0x6C],di
	jne Block257

 Block255:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block258

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block258

 Block257:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block258:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x671
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax+0x78]
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [ecx+edx*8]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block260

 Block259:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block260:
	lea eax,[ebp+0x1C]
	push eax
	call get_labeled_string_0
	add esp,0x10
	lea ecx,[ebp-0x2D4]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [ebp-4],0x3F
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x2D0]
	test eax,eax
	je Block265

 Block261:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block264

 Block262:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block264

 Block263:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block264:
	mov dword ptr [ebp-0x2D0],0

 Block265:
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	movzx ecx,word ptr [ebp+0x18]
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],ecx
	push eax
	lea ecx,[ebx+0x6F5]
	mov byte ptr [ebp-4],0x40
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	test eax,eax
	je Block350

 Block266:
	mov ecx,dword ptr [ebp+0x40]
	mov edx,dword ptr [ecx+0x78]
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebp+0x58]
	mov edi,dword ptr [edx+eax*8+4]
	xor ebx,ebx
	mov dword ptr [ebp+0x64],edi
	mov dword ptr [ebp+0x3C],esi
	cmp ecx,ebx
	je Block268

 Block267:
	mov ecx,dword ptr [ecx-4]
	jmp Block269

 Block268:
	xor ecx,ecx

 Block269:
	lea eax,[eax+eax*2+3]
	cmp ecx,eax
	jl Block272

 Block270:
	push eax
	add eax,0xFFFFFFFD
	push eax
	lea eax,[ebp-0x20]
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov esi,eax
	mov eax,dword ptr [ebp-0x20]
	add esp,4
	mov dword ptr [ebp+0x3C],esi
	cmp eax,ebx
	je Block272

 Block271:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block272:
	cmp dword ptr [ebp+0x30],ebx
	je Block274

 Block273:
	cmp esi,edi
	mov dword ptr [ebp+0x30],1
	jge Block275

 Block274:
	mov dword ptr [ebp+0x30],ebx

 Block275:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push esi
	call _itoa
	add esp,0xC
	mov dword ptr [ebp+0x50],ebx
	cmp eax,ebx
	je Block279

 Block276:
	mov ecx,eax
	lea esi,[ecx+1]
	lea ebx,[ebx]

 Block277:
	mov dl,byte ptr [ecx]
	inc ecx
	test dl,dl
	jne Block277

 Block278:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push ebx
	push esi
	lea ecx,[ebp+0x50]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp+0x50]
	call ZXString<char>::ReleaseBuffer

 Block279:
	mov dword ptr [ebp+0x68],0
	push edi
	lea ecx,[ebp+0x68]
	push offset _S_D__8
	push ecx
	mov byte ptr [ebp-4],0x42
	call ZXString<char>::Format
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[ebp-0xAC]
	push edx
	call edi
	lea eax,[ebp-0xAC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block280:
	mov edx,dword ptr [ebp+0x50]
	lea ecx,[ebp-0xAC]
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x43
	call _xbstr_t::_ctor_0
	mov ebx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [ebx+0xB10]
	mov byte ptr [ebp-4],0x44
	test ecx,ecx
	je Block10

 Block281:
	mov byte ptr [ebp-4],0x43
	call IWzFont::CalcTextWidth
	mov esi,0x9B
	sub esi,eax
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0x42
	jne Block284

 Block282:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	test eax,eax
	je Block285

 Block283:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block285

 Block284:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block285:
	lea edx,[ebp-0xCC]
	push edx
	call edi
	lea eax,[ebp-0xCC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block286:
	mov edx,dword ptr [ebp+0x68]
	lea ecx,[ebp-0xCC]
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x45
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx+0xB10]
	mov byte ptr [ebp-4],0x46
	test ecx,ecx
	je Block10

 Block287:
	mov byte ptr [ebp-4],0x45
	call IWzFont::CalcTextWidth
	sub esi,eax
	cmp word ptr [ebp-0xCC],8
	mov byte ptr [ebp-4],0x42
	jne Block290

 Block288:
	xor eax,eax
	mov word ptr [ebp-0xCC],ax
	mov eax,dword ptr [ebp-0xC4]
	test eax,eax
	je Block291

 Block289:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block291

 Block290:
	lea ecx,[ebp-0xCC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block291:
	mov eax,dword ptr [ebx+0xB10]
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block293

 Block292:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block293:
	lea ecx,[ebp+0x1C]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[ebp-0x10C]
	push edx
	call edi
	lea eax,[ebp-0x10C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block294:
	lea ecx,[ebp-0xEC]
	push ecx
	mov byte ptr [ebp-4],0x47
	call edi
	lea edx,[ebp-0xEC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block295:
	mov edx,dword ptr [ebp+0x1C]
	lea eax,[ebp-0x10C]
	push eax
	mov eax,dword ptr [ebx+0xB10]
	lea ecx,[ebp-0xEC]
	push ecx
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x48
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x6C]
	mov edi,dword ptr [ebp+0x5C]
	push eax
	mov byte ptr [ebp-4],0x49
	push 0xA
	mov ecx,edi
	mov byte ptr [ebp-4],0x48
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x47
	cmp word ptr [ebp-0xEC],si
	jne Block298

 Block296:
	mov eax,dword ptr [ebp-0xE4]
	xor ecx,ecx
	mov word ptr [ebp-0xEC],cx
	test eax,eax
	je Block299

 Block297:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block299

 Block298:
	lea edx,[ebp-0xEC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block299:
	mov byte ptr [ebp-4],0x42
	cmp word ptr [ebp-0x10C],si
	jne Block302

 Block300:
	xor eax,eax
	mov word ptr [ebp-0x10C],ax
	mov eax,dword ptr [ebp-0x104]
	test eax,eax
	je Block303

 Block301:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block303

 Block302:
	lea ecx,[ebp-0x10C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block303:
	lea edx,[ebp-0x12C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x12C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block304:
	mov edx,dword ptr [ebp+0x1C]
	lea ecx,[ebp-0x12C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x4A
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx+0xB10]
	mov byte ptr [ebp-4],0x4B
	test ecx,ecx
	je Block10

 Block305:
	mov byte ptr [ebp-4],0x4A
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x12C],8
	lea esi,[eax+0x14]
	mov byte ptr [ebp-4],0x42
	jne Block308

 Block306:
	xor eax,eax
	mov word ptr [ebp-0x12C],ax
	mov eax,dword ptr [ebp-0x124]
	test eax,eax
	je Block309

 Block307:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block309

 Block308:
	lea ecx,[ebp-0x12C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block309:
	lea edx,[ebp-0x16C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x16C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block310:
	lea ecx,[ebp-0x14C]
	push ecx
	mov byte ptr [ebp-4],0x4C
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x14C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block311:
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x4D
	test ecx,ecx
	jne Block313

 Block312:
	mov ecx,1

 Block313:
	lea eax,[ebp-0x16C]
	push eax
	mov eax,dword ptr [ebp+0x3C]
	imul eax,0x64
	lea edx,[ebp-0x14C]
	push edx
	cdq
	idiv ecx
	mov ecx,ebx
	push eax
	lea eax,[ebp-0x24]
	push eax
	call CUIQuestAlarm::GetProgressFont
	mov eax,dword ptr [eax]
	mov edx,dword ptr [ebp+0x50]
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x4E
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x6C]
	push eax
	mov byte ptr [ebp-4],0x4F
	push esi
	mov ecx,edi
	mov byte ptr [ebp-4],0x4E
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0x4D
	test eax,eax
	je Block315

 Block314:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block315:
	cmp word ptr [ebp-0x14C],8
	mov byte ptr [ebp-4],0x4C
	jne Block318

 Block316:
	xor eax,eax
	mov word ptr [ebp-0x14C],ax
	mov eax,dword ptr [ebp-0x144]
	test eax,eax
	je Block319

 Block317:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block319

 Block318:
	lea ecx,[ebp-0x14C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block319:
	cmp word ptr [ebp-0x16C],8
	mov byte ptr [ebp-4],0x42
	jne Block322

 Block320:
	mov eax,dword ptr [ebp-0x164]
	xor edx,edx
	mov word ptr [ebp-0x16C],dx
	test eax,eax
	je Block323

 Block321:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block323

 Block322:
	lea eax,[ebp-0x16C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block323:
	lea ecx,[ebp-0x18C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x18C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block324:
	mov edx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x18C]
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x50
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx+0xB10]
	mov byte ptr [ebp-4],0x51
	test ecx,ecx
	je Block10

 Block325:
	mov byte ptr [ebp-4],0x50
	call IWzFont::CalcTextWidth
	add esi,eax
	cmp word ptr [ebp-0x18C],8
	mov byte ptr [ebp-4],0x42
	jne Block328

 Block326:
	xor eax,eax
	mov word ptr [ebp-0x18C],ax
	mov eax,dword ptr [ebp-0x184]
	test eax,eax
	je Block329

 Block327:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block329

 Block328:
	lea ecx,[ebp-0x18C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block329:
	lea edx,[ebp-0x1CC]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1CC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block330:
	lea ecx,[ebp-0x1AC]
	push ecx
	mov byte ptr [ebp-4],0x52
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1AC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block331:
	mov edx,dword ptr [ebp+0x68]
	lea eax,[ebp-0x1CC]
	push eax
	mov eax,dword ptr [ebx+0xB10]
	lea ecx,[ebp-0x1AC]
	push ecx
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x53
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [ebp+0x6C]
	push eax
	mov byte ptr [ebp-4],0x54
	push esi
	mov ecx,edi
	mov byte ptr [ebp-4],0x53
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x1AC],8
	mov byte ptr [ebp-4],0x52
	jne Block334

 Block332:
	mov eax,dword ptr [ebp-0x1A4]
	xor ecx,ecx
	mov word ptr [ebp-0x1AC],cx
	test eax,eax
	je Block335

 Block333:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block335

 Block334:
	lea edx,[ebp-0x1AC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block335:
	cmp word ptr [ebp-0x1CC],8
	mov byte ptr [ebp-4],0x42
	jne Block338

 Block336:
	xor eax,eax
	mov word ptr [ebp-0x1CC],ax
	mov eax,dword ptr [ebp-0x1C4]
	test eax,eax
	je Block339

 Block337:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block339

 Block338:
	lea ecx,[ebp-0x1CC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block339:
	mov eax,dword ptr [ebp+0x68]
	add dword ptr [ebp+0x6C],0x12
	mov byte ptr [ebp-4],0x41
	test eax,eax
	je Block341

 Block340:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block341:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x40
	test eax,eax
	je Block343

 Block342:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block343:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x3F
	test eax,eax
	je Block345

 Block344:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block345:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x3E
	test eax,eax
	je Block347

 Block346:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block347:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block349

 Block348:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block349:
	mov ecx,dword ptr [ebp+0x54]
	inc ecx
	mov dword ptr [ebp+0x54],ecx
	jmp Block238

 Block350:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x3F
	cmp eax,esi
	je Block352

 Block351:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block352:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x3E
	cmp eax,esi
	je Block354

 Block353:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block354:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],8
	cmp eax,esi
	je Block356

 Block355:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block356:
	mov ecx,dword ptr [ebp+0x40]
	cmp dword ptr [ecx+0x34],0
	jbe Block393

 Block357:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp+0x28]
	push edx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block362

 Block358:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block361

 Block359:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block361

 Block360:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block361:
	mov dword ptr [ebp+0x2C],0

 Block362:
	mov edx,dword ptr [edi+0xBD]
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax+0x34]
	push edx
	add edi,0xB5
	push edi
	mov dword ptr [ebp+0x44],ecx
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [ebp+0x64],eax
	add esp,8
	lea eax,[ebp-0x20C]
	push eax
	call esi
	lea ecx,[ebp-0x20C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block363:
	lea edx,[ebp-0x1EC]
	push edx
	mov byte ptr [ebp-4],0x55
	call esi
	lea eax,[ebp-0x1EC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block364:
	mov ebx,dword ptr [ebp+0x60]
	mov eax,dword ptr [ebx+0xB10]
	lea ecx,[ebp-0x20C]
	push ecx
	lea edx,[ebp-0x1EC]
	push edx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A51
	push eax
	mov byte ptr [ebp-4],0x56
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x57
	push 0xA
	mov byte ptr [ebp-4],0x56
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [ebp-4],0x55
	cmp word ptr [ebp-0x1EC],di
	jne Block367

 Block365:
	mov eax,dword ptr [ebp-0x1E4]
	xor edx,edx
	mov word ptr [ebp-0x1EC],dx
	test eax,eax
	je Block368

 Block366:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block368

 Block367:
	lea eax,[ebp-0x1EC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block368:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x20C],di
	jne Block371

 Block369:
	mov eax,dword ptr [ebp-0x204]
	xor ecx,ecx
	mov word ptr [ebp-0x20C],cx
	test eax,eax
	je Block372

 Block370:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block372

 Block371:
	lea edx,[ebp-0x20C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block372:
	lea eax,[ebp-0x22C]
	push eax
	call esi
	lea ecx,[ebp-0x22C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block373:
	lea edx,[ebp-0x22C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A51
	push eax
	mov byte ptr [ebp-4],0x58
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebx+0xB10]
	mov byte ptr [ebp-4],0x59
	test ecx,ecx
	je Block10

 Block374:
	mov byte ptr [ebp-4],0x58
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp-0x22C],8
	lea edi,[eax+0x14]
	mov byte ptr [ebp-4],8
	jne Block377

 Block375:
	mov eax,dword ptr [ebp-0x224]
	xor ecx,ecx
	mov word ptr [ebp-0x22C],cx
	test eax,eax
	je Block378

 Block376:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block378

 Block377:
	lea edx,[ebp-0x22C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block378:
	lea eax,[ebp-0x26C]
	push eax
	call esi
	lea ecx,[ebp-0x26C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block379:
	lea edx,[ebp-0x24C]
	push edx
	mov byte ptr [ebp-4],0x5A
	call esi
	lea eax,[ebp-0x24C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block380:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x5B
	mov dword ptr [ebp+0x3C],eax
	test eax,eax
	jne Block382

 Block381:
	mov dword ptr [ebp+0x3C],1

 Block382:
	mov eax,0x20
	call __alloca_probe_8
	fild dword ptr [ebp+0x64]
	mov esi,esp
	lea ecx,[ebp-0x26C]
	fidiv dword ptr [ebp+0x3C]
	push ecx
	lea edx,[ebp-0x24C]
	push edx
	sub esp,8
	lea eax,[ebp-0x2C]
	mov ecx,ebx
	fstp qword ptr [esp]
	push eax
	call CUIQuestAlarm::GetProgressFontMeso
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x44]
	push eax
	push 0xA
	push esi
	push ecx
	mov byte ptr [ebp-4],0x5C
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [ebp+0x5C]
	push edx
	mov byte ptr [ebp-4],0x5D
	push edi
	mov byte ptr [ebp-4],0x5C
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0x5B
	test eax,eax
	je Block384

 Block383:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block384:
	mov esi,8
	mov byte ptr [ebp-4],0x5A
	cmp word ptr [ebp-0x24C],si
	jne Block387

 Block385:
	xor eax,eax
	mov word ptr [ebp-0x24C],ax
	mov eax,dword ptr [ebp-0x244]
	test eax,eax
	je Block388

 Block386:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block388

 Block387:
	lea ecx,[ebp-0x24C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block388:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x26C],si
	jne Block391

 Block389:
	mov eax,dword ptr [ebp-0x264]
	xor edx,edx
	mov word ptr [ebp-0x26C],dx
	test eax,eax
	je Block392

 Block390:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block392

 Block391:
	lea eax,[ebp-0x26C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block392:
	add dword ptr [ebp+0x6C],0x12

 Block393:
	mov ecx,dword ptr [ebp+0x6C]
	mov edi,dword ptr [ebp+0x34]
	mov esi,dword ptr [ebp+0x60]
	mov eax,dword ptr [esi+0xBB4]
	add eax,dword ptr [ebp+0xC]
	push ecx
	push 0x96
	lea edx,[edi+0x12]
	push edx
	push 0xA
	push eax
	call SetRect
	cmp dword ptr [ebp+0x30],0
	jne Block404

 Block394:
	movzx ecx,word ptr [ebp+0x18]
	push 0
	lea edx,[ebp+0x34]
	mov dword ptr [ebp+0x34],ecx
	push edx
	lea ecx,[esi+0xB8C]
	call ZMap<long, unsigned long, long>::GetAt
	test eax,eax
	je Block404

 Block395:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2AC]
	push eax
	call ebx
	lea ecx,[ebp-0x2AC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block396:
	lea edx,[ebp-0x28C]
	push edx
	mov byte ptr [ebp-4],0x5E
	call ebx
	lea eax,[ebp-0x28C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block397:
	mov eax,dword ptr [esi+0xB18]
	lea ecx,[ebp-0x2AC]
	push ecx
	lea edx,[ebp-0x28C]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x38]
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x5F
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x5C]
	push edi
	mov byte ptr [ebp-4],0x60
	push 0xA
	mov byte ptr [ebp-4],0x5F
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x5E
	cmp word ptr [ebp-0x28C],si
	jne Block400

 Block398:
	mov eax,dword ptr [ebp-0x284]
	xor ecx,ecx
	mov word ptr [ebp-0x28C],cx
	test eax,eax
	je Block401

 Block399:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block401

 Block400:
	lea edx,[ebp-0x28C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block401:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x2AC],si
	jne Block403

 Block402:
	xor eax,eax
	mov word ptr [ebp-0x2AC],ax
	mov eax,dword ptr [ebp-0x2A4]
	jmp Block412

 Block403:
	lea ecx,[ebp-0x2AC]
	push ecx
	jmp Block415

 Block404:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x23C]
	push edx
	call ebx
	lea eax,[ebp-0x23C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block405:
	lea ecx,[ebp-0x2CC]
	push ecx
	mov byte ptr [ebp-4],0x61
	call ebx
	lea edx,[ebp-0x2CC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block406:
	mov edx,dword ptr [ebp+0x38]
	lea eax,[ebp-0x23C]
	push eax
	mov eax,dword ptr [esi+0xB14]
	lea ecx,[ebp-0x2CC]
	push ecx
	push eax
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x62
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x5C]
	push edi
	mov byte ptr [ebp-4],0x63
	push 0xA
	mov byte ptr [ebp-4],0x62
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0x61
	cmp word ptr [ebp-0x2CC],si
	jne Block409

 Block407:
	xor eax,eax
	mov word ptr [ebp-0x2CC],ax
	mov eax,dword ptr [ebp-0x2C4]
	test eax,eax
	je Block410

 Block408:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block410

 Block409:
	lea ecx,[ebp-0x2CC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block410:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x23C],si
	jne Block414

 Block411:
	mov eax,dword ptr [ebp-0x234]
	xor edx,edx
	mov word ptr [ebp-0x23C],dx

 Block412:
	test eax,eax
	je Block416

 Block413:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block416

 Block414:
	lea eax,[ebp-0x23C]
	push eax

 Block415:
	call dword ptr [ZImports::_VariantClear]

 Block416:
	mov eax,dword ptr [ebp+0x38]
	add dword ptr [ebp+0x6C],0x12
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block418

 Block417:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block418:
	inc dword ptr [ebp+4]
	mov ebx,dword ptr [ebp+4]
	mov esi,dword ptr [ebp+0x60]
	jmp Block49

 Block419:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block421

 Block420:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block421:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	jmp Block425

 Block422:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block424

 Block423:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block424:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx

 Block425:
	lea esp,[ebp-0x30C]
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
// CUIQuestInfoDetail::ResetInfo
_SUB_EXCEPTION_HANDLER(431800)
__SUB_CLASS_THIS0(00431800, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_431800
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
	mov ecx,dword ptr [esi+0x84]
	lea eax,[esp+0x10]
	push eax
	call CUIQuestInfo::GetQuestInfo
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0x24],0
	call ZRef<QuestInfo>::op_assign_copy
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
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
	mov dword ptr [esp+0x14],0

 Block5:
	mov ecx,esi
	call CUIQuestInfoDetail::SetLayout
	mov eax,dword ptr [esi+0xA4]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax

 Block7:
	mov eax,dword ptr [esi+0x9C]
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax

 Block9:
	mov eax,dword ptr [esi+0xAC]
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax

 Block11:
	mov eax,dword ptr [esi+0xB7C]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax

 Block13:
	mov eax,dword ptr [esi+0xB4]
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax

 Block15:
	mov eax,dword ptr [esi+0xBC]
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 0
	call eax

 Block17:
	mov ecx,esi
	call CUIQuestInfoDetail::SetNPC
	mov ecx,esi
	call CUIQuestInfoDetail::SetGauge_SeriesQuest
	mov ecx,esi
	call CUIQuestInfoDetail::SetScrollBar
	mov ecx,esi
	call CUIQuestInfoDetail::SetButton
	mov ecx,esi
	call CUIQuestInfoDetail::SetTimer
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esi+0x8C]
	movzx edx,word ptr [ecx]
	mov ecx,dword ptr [TSingleton<CUIQuestInfo>::ms_pInstance]
	push edx
	call CUIQuestInfo::MarkQuestAsRead
	mov ecx,dword ptr [TSingleton<CUIQuestInfo>::ms_pInstance]
	push 0
	call CWnd::InvalidateRect
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
// CUIQuestInfo::ShowQuestInfoDetail
_SUB_EXCEPTION_HANDLER(431B00)
__SUB_CLASS_THIS(00431B00, __thiscall, 58573,  CUIQuestInfo, int32_t, long, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_431B00
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
	mov ebx,ecx
	mov eax,dword ptr [esp+0x38]
	test ax,ax
	je Block30

 Block1:
	push eax
	call CUIQuestInfo::GetCategoryOf
	mov edi,eax
	mov dword ptr [esp+0x14],edi
	test edi,edi
	je Block30

 Block2:
	mov eax,dword ptr [esp+0x34]
	cmp eax,dword ptr [ebx+0xB18]
	je Block4

 Block3:
	mov ecx,dword ptr [ebx+0xB0C]
	push eax
	call CCtrlTab::SetTab

 Block4:
	mov esi,dword ptr [ebx+0xB18]
	push edi
	push esi
	mov ecx,ebx
	call CUIQuestInfo::IsMinimizedCategory
	push 1
	push edi
	push esi
	mov ecx,ebx
	mov dword ptr [esp+0x40],eax
	call CUIQuestInfo::ToggleCategory
	xor ebp,ebp

 Block5:
	mov eax,dword ptr [ebx+0xB18]
	mov ecx,dword ptr [ebx+eax*4+0xB5C]
	lea eax,[ebx+eax*4+0xB5C]
	test ecx,ecx
	je Block28

 Block6:
	cmp ebp,dword ptr [ecx-4]
	jae Block28

 Block7:
	mov esi,dword ptr [ecx+ebp*8+4]
	lea eax,[ecx+ebp*8]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block9

 Block8:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],0
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block11

 Block10:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,ebx
	call CUIQuestInfo::IsCategoryButton
	test eax,eax
	je Block14

 Block12:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block20

 Block13:
	jmp Block16

 Block14:
	mov cx,word ptr [esp+0x38]
	cmp word ptr [esi],cx
	je Block21

 Block15:
	mov dword ptr [esp+0x2C],0xFFFFFFFF

 Block16:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block19:
	mov dword ptr [esp+0x20],0

 Block20:
	mov edi,dword ptr [esp+0x14]
	inc ebp
	jmp Block5

 Block21:
	push ebp
	mov ecx,ebx
	call CUIQuestInfo::SetSelect
	cmp dword ptr [ebx+0xB70],0
	je Block23

 Block22:
	mov ecx,dword ptr [TSingleton<CUIQuestInfoDetail>::ms_pInstance]
	call CUIQuestInfoDetail::ResetInfo

 Block23:
	mov ecx,ebx
	call CUIQuestInfo::SyncScrollBarWithSelected
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block26

 Block25:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block26:
	mov eax,1

 Block27:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 8

 Block28:
	cmp dword ptr [esp+0x34],0
	je Block30

 Block29:
	mov ecx,dword ptr [ebx+0xB18]
	push 0
	push edi
	push ecx
	mov ecx,ebx
	call CUIQuestInfo::ToggleCategory

 Block30:
	xor eax,eax
	jmp Block27
}
}
// CUIQuestInfo::GetQuestSummary
_SUB_EXCEPTION_HANDLER(42D570)
__SUB_CLASS_THIS(0042D570, __thiscall, 58580,  CUIQuestInfo, ZArray<ZXString<char> >, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42D570
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
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	mov esi,dword ptr [esp+0x50]
	mov eax,1
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x24],0x1ADD
	mov dword ptr [esp+0x28],0x1AAA
	mov dword ptr [esp+0x2C],0x1AD1
	mov dword ptr [esi],ebx
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x1C],ebx

 Block1:
	mov eax,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+eax*4+0x24]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edi
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0x4C],2
	cmp ecx,ebx
	je Block27

 Block2:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x50],1
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x48],3
	jne Block4

 Block3:
	mov eax,dword ptr [eax+8]
	jmp Block5

 Block4:
	mov eax,offset _S___3

 Block5:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],5
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,ebx
	je Block17

 Block10:
	cmp byte ptr [ebp],bl
	je Block17

 Block11:
	cmp edi,0x1AD1
	jne Block16

 Block12:
	push ebx
	push 1
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::GetBuffer
	mov dl,byte ptr [_S___2]
	push 1
	lea ecx,[esp+0x18]
	mov byte ptr [eax],dl
	call ZXString<char>::ReleaseBuffer
	lea eax,[esp+0x14]
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x50],6
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],5
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	push ebx
	push 9
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_WREWARD]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_WREWARD+4]
	mov dword ptr [eax+4],edx
	mov cl,byte ptr [_S_WREWARD+8]
	mov byte ptr [eax+8],cl
	push 9
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	lea edx,[esp+0x14]
	push edx
	push 0xFFFFFFFF
	mov ecx,esi
	mov byte ptr [esp+0x50],7
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],5
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	lea eax,[esp+0x18]
	push eax
	push 0xFFFFFFFF
	mov ecx,esi
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block17:
	mov byte ptr [esp+0x48],1
	cmp ebp,ebx
	je Block19

 Block18:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x1C]
	inc eax
	cmp eax,3
	mov dword ptr [esp+0x1C],eax
	jl Block1

 Block20:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block24

 Block21:
	cmp dword ptr [eax-4],ebx
	je Block24

 Block22:
	push ebx
	push 0xA
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_WSUMMARY]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_WSUMMARY+4]
	mov dword ptr [eax+4],edx
	mov cx,word ptr [_S_WSUMMARY+8]
	mov word ptr [eax+8],cx
	push 0xA
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	lea edx,[esp+0x14]
	push edx
	push ebx
	mov ecx,esi
	mov byte ptr [esp+0x50],8
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],1
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],bl
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,esi
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 8

 Block27:
	push 0x80004003
	call _com_issue_error
}
}
// CUIQuestInfo::SetSelect
__SUB_CLASS_THIS(0042C220, __thiscall, 58587,  CUIQuestInfo, void, long) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [esp+0xC]
	push ebx
	push esi
	push edi
	mov edi,ecx
	xor ecx,ecx
	mov dword ptr [esp+0xC],ecx
	cmp dword ptr [edi+0xB18],1
	mov dword ptr [edi+0xB1C],eax
	jne Block3

 Block1:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,edi
	call CUIQuestInfo::GetQuestInfo
	cmp dword ptr [eax+4],0
	mov ecx,1
	je Block3

 Block2:
	mov bl,cl
	jmp Block4

 Block3:
	xor bl,bl

 Block4:
	test cl,1
	je Block10

 Block5:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	je Block10

 Block6:
	push ebp
	add esi,0xFFFFFFF0
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	pop ebp

 Block10:
	test bl,bl
	je Block15

 Block11:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,edi
	call CUIQuestInfo::GetQuestInfo
	mov edx,dword ptr [eax+4]
	movzx eax,word ptr [edx]
	push eax
	mov ecx,edi
	call CUIQuestInfo::SetRecentQuest_ToOption
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	je Block15

 Block12:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block15

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block15:
	cmp dword ptr [edi+0xB70],0
	jne Block18

 Block16:
	cmp dword ptr [edi+0xB1C],0
	jl Block18

 Block17:
	push 1
	mov ecx,edi
	call CUIQuestInfo::ToggleDetail

 Block18:
	pop edi
	pop esi
	pop ebx
	add esp,8
	ret 4
}
}
// CUIQuestInfoDetail::OnMouseMove
_SUB_EXCEPTION_HANDLER(426BD0)
__SUB_CLASS_THIS(00426BD0, __thiscall, 58394,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_426BD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x8C]
	mov ecx,dword ptr [esp+0x88]
	push eax
	push ecx
	lea edx,[esi+0xB48]
	push edx
	call PtInRect
	test eax,eax
	je Block8

 Block1:
	mov eax,dword ptr [esi+0x88]
	push ecx
	mov ecx,esp
	add eax,0xC
	mov dword ptr [esp+0x38],esp
	xor ebp,ebp
	push eax
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CQuestMan::GetSeriesQuest
	mov eax,dword ptr [eax]
	cmp eax,ebp
	jne Block3

 Block2:
	xor ebx,ebx
	jmp Block4

 Block3:
	mov ebx,dword ptr [eax-4]

 Block4:
	lea ecx,[esp+0x30]
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [esi+0x88]
	mov edi,dword ptr [eax+0x28]
	mov dword ptr [esp+0x20],ebp
	lea ecx,[esp+0x30]
	push 0x11A1
	push ecx
	mov dword ptr [esp+0x88],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	push ebx
	push edi
	push edx
	lea eax,[esp+0x2C]
	push offset _S_SDD__1
	push eax
	mov byte ptr [esp+0x94],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	add esp,0x14
	mov byte ptr [esp+0x80],0
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov edx,dword ptr [esi]
	mov edi,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+0x30]
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
	lea ecx,[esi+0x100]
	call CUIToolTip::SetToolTip_String
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp edi,ebp
	je Block70

 Block7:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block70

 Block8:
	lea eax,[esp+0x18]
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CWnd::GetCanvas
	mov ecx,edi
	mov dword ptr [esp+0x80],2
	call CUIQuestInfoDetail::GetScrLogLen
	mov ebp,eax
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x2C],ebx
	mov ecx,3
	mov eax,1
	mov dword ptr [esp+0x30],ebx
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],eax
	mov edi,dword ptr [edi+0x8C]
	mov byte ptr [esp+0x80],4
	cmp edi,ebx
	je Block15

 Block9:
	cmp dword ptr [edi+0x40],ebx
	je Block11

 Block10:
	cmp dword ptr [edi+0x40],eax
	jne Block12

 Block11:
	mov eax,0xF
	jmp Block16

 Block12:
	cmp edi,ebx
	je Block15

 Block13:
	cmp dword ptr [edi+0x24],ebx
	je Block15

 Block14:
	mov eax,0xF
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x48]
	push edx
	lea edx,[ebp-2]
	push edx
	push 0xFD
	sub eax,0xFFFFFF80
	push eax
	push 0x12
	lea eax,[esp+0x4C]
	push eax
	call IWzCanvas::SetClipRect
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x80],6
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov eax,dword ptr [esi+0xC4]
	xor edi,edi
	mov dword ptr [esp+0x5C],eax
	add eax,ebp
	mov dword ptr [esp+0x58],edi
	mov dword ptr [esp+0x60],1
	mov dword ptr [esp+0x64],eax

 Block23:
	mov eax,dword ptr [esi+0x88]
	mov ecx,dword ptr [eax+0x18]
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x14],ebx
	test ecx,ecx
	je Block43

 Block24:
	cmp edi,dword ptr [ecx-4]
	jae Block43

 Block25:
	mov eax,dword ptr [eax+0x1C]
	mov ecx,dword ptr [eax+edi*4]
	add ecx,ebx
	push ecx
	push 1
	push ebx
	push 0
	lea edx,[esp+0x78]
	push edx
	call SetRect
	lea eax,[esp+0x68]
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	mov edx,eax
	push edx
	call IntersectRect
	test eax,eax
	je Block42

 Block26:
	xor eax,eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],eax
	mov edi,edi

 Block27:
	mov eax,dword ptr [esi+0x88]
	mov ecx,dword ptr [eax+0x20]
	lea eax,[ecx+edi*4]
	mov ecx,dword ptr [eax]
	test ecx,ecx
	je Block42

 Block28:
	mov edx,dword ptr [esp+0x1C]
	cmp edx,dword ptr [ecx-4]
	jae Block42

 Block29:
	mov edi,dword ptr [esi+0xC4]
	mov eax,ecx
	add eax,dword ptr [esp+0x20]
	mov edx,dword ptr [eax+0x1C]
	mov ecx,edx
	sub ecx,edi
	add ecx,ebx
	cmp ecx,0xFFFFFFD0
	jl Block41

 Block30:
	add ebp,0x18
	cmp ecx,ebp
	jge Block41

 Block31:
	mov ebx,dword ptr [eax+0x18]
	add ebx,0x12
	cmp ebx,dword ptr [esp+0x88]
	jge Block40

 Block32:
	mov ebp,dword ptr [eax+0x20]
	mov ebx,dword ptr [eax+0x18]
	lea ebx,[ebx+ebp+0x1A]
	cmp dword ptr [esp+0x88],ebx
	jge Block40

 Block33:
	lea ebx,[ecx+0x79]
	mov ecx,dword ptr [esp+0x8C]
	cmp ebx,ecx
	mov ebx,dword ptr [esp+0x14]
	jge Block41

 Block34:
	mov ebp,dword ptr [eax+0x24]
	sub ebp,edi
	add ebp,edx
	lea edx,[ebx+ebp+0x79]
	cmp ecx,edx
	jge Block41

 Block35:
	mov ecx,dword ptr [eax+4]
	test ecx,ecx
	jne Block38

 Block36:
	cmp dword ptr [eax],1
	jne Block41

 Block37:
	test ecx,ecx
	je Block39

 Block38:
	inc dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],0x44
	mov edi,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [esp+0x30],ecx
	jmp Block27

 Block39:
	add eax,0x10
	push eax
	lea ecx,[esp+0x30]
	call ZXString<char>::op_assign
	inc dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],0x44
	mov edi,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0x34]
	jmp Block27

 Block40:
	mov ebx,dword ptr [esp+0x14]

 Block41:
	inc dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],0x44
	mov edi,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0x34]
	jmp Block27

 Block42:
	mov eax,dword ptr [esi+0x88]
	mov ecx,dword ptr [eax+0x1C]
	add ebx,dword ptr [ecx+edi*4]
	inc edi
	jmp Block23

 Block43:
	mov edi,dword ptr [esp+0x2C]
	test edi,edi
	je Block45

 Block44:
	cmp byte ptr [edi],0
	jne Block65

 Block45:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block58

 Block46:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x28]
	push edx
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x98],7
	call eax
	mov ecx,dword ptr [esp+0xA4]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0xA4]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x100]
	call CUIToolTip::ShowItemToolTip
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x80],6
	test eax,eax
	je Block51

 Block47:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x28]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block50

 Block49:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block50:
	mov dword ptr [esp+0x28],0

 Block51:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],3
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0x80],2
	test edi,edi
	je Block57

 Block56:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call edx
	jmp Block70

 Block58:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],3
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [esp+0x80],2
	test edi,edi
	je Block64

 Block63:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call eax
	lea ecx,[esi+0x100]
	call CUIToolTip::ClearToolTip
	xor eax,eax
	jmp Block71

 Block65:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
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
	lea ecx,[esi+0x100]
	call CUIToolTip::SetToolTip_PartyQuestRankString
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x80],3
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	add edi,0xFFFFFFF4
	push edi
	mov byte ptr [esp+0x84],2
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [eax]
	add esp,4
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call eax

 Block70:
	mov eax,1

 Block71:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 8
}
}
// CUIQuestInfoDetail::SetScrollBar
__SUB_CLASS_THIS0(004218A0, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x8C]
	xor ebx,ebx
	push edi
	xor eax,eax
	nop

 Block1:
	mov edx,dword ptr [ecx+0x1C]
	test edx,edx
	je Block4

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block4

 Block3:
	add ebx,dword ptr [edx+eax*4]
	inc eax
	jmp Block1

 Block4:
	mov ecx,edx
	test ecx,ecx
	jne Block6

 Block5:
	xor edi,edi
	jmp Block7

 Block6:
	mov edi,dword ptr [ecx-4]

 Block7:
	mov ecx,esi
	call CUIQuestInfoDetail::GetScrLogLen
	lea ecx,[edi*8]
	sub ecx,edi
	add ecx,ebx
	sub ecx,eax
	mov eax,ecx
	mov ecx,dword ptr [esi+0xC4]
	cdq
	and edx,7
	add eax,edx
	sar eax,3
	inc eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov ecx,dword ptr [esi+0xC4]
	push 0
	mov dword ptr [esi+0xC8],0
	call CCtrlScrollBar::SetCurPos
	mov ecx,dword ptr [esi+0xD0]
	test ecx,ecx
	je Block16

 Block8:
	mov edx,dword ptr [esi+0x8C]
	xor edi,edi
	xor eax,eax

 Block9:
	mov ebx,dword ptr [edx+0x38]
	test ebx,ebx
	je Block12

 Block10:
	cmp eax,dword ptr [ebx-4]
	jae Block12

 Block11:
	add edi,dword ptr [ebx+eax*4]
	inc eax
	jmp Block9

 Block12:
	mov edx,ebx
	test edx,edx
	jne Block14

 Block13:
	xor eax,eax
	jmp Block15

 Block14:
	mov eax,dword ptr [edx-4]

 Block15:
	lea edx,[eax*8]
	sub edx,eax
	lea eax,[edx+edi-0x71]
	cdq
	and edx,7
	add eax,edx
	sar eax,3
	inc eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov ecx,dword ptr [esi+0xD0]
	push 0
	mov dword ptr [esi+0xD4],0
	call CCtrlScrollBar::SetCurPos

 Block16:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIQuestInfo::IsMyAddon
__SUB_CLASS_THIS(004273D0, __thiscall, 58572,  CUIQuestInfo, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIQuestInfoDetail>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	cmp eax,dword ptr [esp+4]
	jne Block3

 Block2:
	mov eax,1
	ret 4

 Block3:
	xor eax,eax
	ret 4
}
}
// CUIQuestAlarm::RegisterQuest
_SUB_EXCEPTION_HANDLER(4347C0)
__SUB_CLASS_THIS(004347C0, __thiscall, 58748,  CUIQuestAlarm, void, uint16_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4347C0
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
	mov dword ptr [esp+0x14],edi
	cmp dword ptr [esp+0x40],0
	je Block2

 Block1:
	cmp dword ptr [edi+0xBA8],0
	je Block86

 Block2:
	mov esi,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov ebp,dword ptr [esp+0x3C]
	push ebp
	mov ecx,esi
	call CQuestMan::GetQuestCategory
	cmp eax,0x33
	je Block86

 Block3:
	push ebp
	mov ecx,esi
	call CQuestMan::GetCompleteDemand
	mov esi,eax
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block86

 Block4:
	mov eax,dword ptr [esi+0x74]
	lea ebx,[esi+0x74]
	test eax,eax
	je Block6

 Block5:
	cmp dword ptr [eax-4],0
	jne Block10

 Block6:
	mov eax,dword ptr [esi+0x78]
	test eax,eax
	je Block8

 Block7:
	cmp dword ptr [eax-4],0
	jne Block10

 Block8:
	cmp dword ptr [esi+0x34],0
	ja Block10

 Block9:
	lea ecx,[esi+0x70]
	call ZArray<QuestRecord>::IsEmpty
	test eax,eax
	jne Block86

 Block10:
	cmp dword ptr [esp+0x40],0
	jne Block13

 Block11:
	cmp dword ptr [edi+0xB84],0
	jne Block14

 Block12:
	mov ecx,edi
	call CWnd::Destroy
	mov ecx,edi
	call CUIQuestAlarm::Create

 Block13:
	cmp dword ptr [edi+0xB84],0
	je Block86

 Block14:
	push ebp
	mov ecx,edi
	call CUIQuestAlarm::IsInQuestAlarmList
	test eax,eax
	jne Block86

 Block15:
	cmp dword ptr [esp+0x40],eax
	je Block22

 Block16:
	xor ecx,ecx
	jmp Block18

 Block18:
	mov eax,dword ptr [edi+0xBA4]
	test eax,eax
	je Block22

 Block19:
	cmp ecx,dword ptr [eax-4]
	jae Block22

 Block20:
	movzx edx,bp
	cmp dword ptr [eax+ecx*4],edx
	je Block86

 Block21:
	inc ecx
	jmp Block18

 Block22:
	mov eax,dword ptr [edi+0xB08]
	lea ebp,[edi+0xB08]
	test eax,eax
	je Block24

 Block23:
	cmp dword ptr [eax-4],5
	jae Block86

 Block24:
	cmp dword ptr [esp+0x40],0
	je Block71

 Block25:
	mov ecx,ebx
	call ZArray<ItemInfo>::IsEmpty
	test eax,eax
	jne Block39

 Block26:
	xor edi,edi
	xor esi,esi

 Block27:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block38

 Block28:
	cmp edi,dword ptr [eax-4]
	jae Block38

 Block29:
	add eax,esi
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+esi]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add eax,esi
	push edx
	mov dword ptr [esp+0x38],0
	call CWvsContext::GetItemCount
	test eax,eax
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	jne Block33

 Block30:
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	inc edi
	add esi,0xC
	jmp Block27

 Block33:
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFF4
	push eax

 Block35:
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov edi,dword ptr [esp+0x14]

 Block37:
	movzx esi,word ptr [esp+0x3C]
	push 0
	lea ecx,[esp+0x44]
	push ecx
	lea ecx,[edi+0xB8C]
	mov dword ptr [esp+0x48],esi
	call ZMap<long, unsigned long, long>::Insert
	mov edi,eax
	call timeGetTime
	push 0xFFFFFFFF
	mov dword ptr [edi+0xC],eax
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push esi
	call CConfig::AddQuestAlarm
	mov ecx,dword ptr [esp+0x14]
	push 0xFFFFFFFF
	add ecx,0xB08
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	jmp Block79

 Block38:
	mov edi,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x18]

 Block39:
	mov eax,dword ptr [esi+0x78]
	test eax,eax
	je Block60

 Block40:
	cmp dword ptr [eax-4],0
	je Block60

 Block41:
	xor ebp,ebp
	lea edi,[ebp+3]

 Block42:
	mov eax,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+0x78]
	test eax,eax
	je Block59

 Block43:
	cmp ebp,dword ptr [eax-4]
	jae Block59

 Block44:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov dword ptr [esp+0x40],0
	movzx edx,word ptr [esp+0x3C]
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esi+0x6F5]
	mov dword ptr [esp+0x3C],1
	mov dword ptr [esp+0x24],edx
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	test eax,eax
	je Block55

 Block45:
	mov ebx,dword ptr [esp+0x40]
	test ebx,ebx
	je Block47

 Block46:
	mov eax,dword ptr [ebx-4]
	jmp Block48

 Block47:
	xor eax,eax

 Block48:
	cmp eax,edi
	jl Block52

 Block49:
	push edi
	lea edx,[edi-3]
	push edx
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x4C]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	add esp,4
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	test esi,esi
	jne Block57

 Block52:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test ebx,ebx
	je Block54

 Block53:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block54:
	inc ebp
	add edi,3
	jmp Block42

 Block55:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block86

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block86

 Block57:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test ebx,ebx
	je Block36

 Block58:
	add ebx,0xFFFFFFF4
	push ebx
	jmp Block35

 Block59:
	mov edi,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x18]

 Block60:
	cmp dword ptr [esi+0x34],0
	jbe Block63

 Block61:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edx,dword ptr [esi+0xBD]
	push edx
	add esi,0xB5
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block37

 Block62:
	mov esi,dword ptr [esp+0x18]

 Block63:
	mov eax,dword ptr [esi+0x70]
	test eax,eax
	je Block80

 Block64:
	cmp dword ptr [eax-4],0
	je Block80

 Block65:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	xor edi,edi

 Block66:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ecx+0x70]
	test eax,eax
	je Block79

 Block67:
	cmp edi,dword ptr [eax-4]
	jae Block79

 Block68:
	mov ecx,eax
	movzx edx,word ptr [ecx+edi*8]
	lea esi,[ecx+edi*8]
	lea eax,[esp+0x40]
	push eax
	lea ecx,[ebx+0x6F5]
	mov dword ptr [esp+0x44],edx
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block36

 Block69:
	push esi
	lea ecx,[ebx+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetPos
	test eax,eax
	jne Block36

 Block70:
	inc edi
	jmp Block66

 Block71:
	xor esi,esi

 Block72:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block76

 Block73:
	cmp esi,dword ptr [eax-4]
	jae Block76

 Block74:
	mov edx,eax
	lea eax,[edx+esi*4]
	push 0
	push eax
	lea ecx,[edi+0xB8C]
	call ZMap<long, unsigned long, long>::GetAt
	test eax,eax
	jne Block76

 Block75:
	inc esi
	jmp Block72

 Block76:
	cmp esi,5
	jl Block78

 Block77:
	mov esi,4

 Block78:
	movzx edi,word ptr [esp+0x3C]
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push esi
	push edi
	call CConfig::AddQuestAlarm
	push esi
	mov ecx,ebp
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi

 Block79:
	mov edi,dword ptr [esp+0x14]

 Block80:
	mov ecx,dword ptr [TSingleton<CUIQuestInfo>::ms_pInstance]
	test ecx,ecx
	je Block82

 Block81:
	push 0
	call CUIQuestInfo::ResetInfo

 Block82:
	mov eax,dword ptr [_D_G_PSTAGE+4]
	test eax,eax
	je Block84

 Block83:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CCashShop::ms_RTTI_CCashShop
	call edx
	test eax,eax
	jne Block86

 Block84:
	mov ecx,edi
	call CWnd::Destroy
	mov ecx,edi
	call CUIQuestAlarm::Create
	cmp dword ptr [edi+0xB0C],0
	jne Block86

 Block85:
	mov ecx,edi
	call CUIQuestAlarm::ToggleQuestAlarmState

 Block86:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 8
}
}
// CUIQuestInfoDetail::MarkMapLocation_InWorldMap
_SUB_EXCEPTION_HANDLER(423480)
__SUB_CLASS_THIS(00423480, __thiscall, 58398,  CUIQuestInfoDetail, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_423480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB44
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB48]
	mov dword ptr fs:[0],eax
	lea ecx,[esp+8]
	call CWorldMapDlg::_ctor_default
	mov eax,dword ptr [esp+0xB58]
	push 0
	push 0
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0xB5C],0
	call CWorldMapDlg::CreateWorldMapDlg
	test eax,eax
	je Block2

 Block1:
	lea ecx,[esp+8]
	call CDialog::DoModal
	jmp Block3

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x11B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block3:
	lea ecx,[esp+8]
	mov dword ptr [esp+0xB50],0xFFFFFFFF
	call CWorldMapDlg::~CWorldMapDlg
	mov ecx,dword ptr [esp+0xB48]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xB50
	ret 4
}
}
// QuestInfo::~QuestInfo
_SUB_EXCEPTION_HANDLER(432450)
__SUB_CLASS_THIS0(00432450, __thiscall, 58474,  QuestInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_432450
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
	lea ecx,[esi+0x3C]
	mov dword ptr [esp+0x14],8
	call ZArray<ZArray<CT_INFO>>::RemoveAll
	lea ecx,[esi+0x38]
	mov byte ptr [esp+0x14],7
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x14],6
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0x30]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0x20]
	mov byte ptr [esp+0x14],4
	call ZArray<ZArray<CT_INFO>>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x14],3
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x18]
	mov byte ptr [esp+0x14],2
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov esi,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block8

 Block7:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIQuestInfo::GetQuestDesc
_SUB_EXCEPTION_HANDLER(42D360)
__SUB_CLASS_THIS(0042D360, __thiscall, 58579,  CUIQuestInfo, ZArray<ZXString<char> >, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42D360
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x1C],0
	mov ecx,dword ptr [ebp+8]
	mov eax,1
	mov dword ptr [ebp-4],eax
	mov dword ptr [ecx],0
	mov dword ptr [ebp-0x1C],eax
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0xC]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],2
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],3
	jne Block4

 Block3:
	mov eax,dword ptr [eax+8]
	jmp Block5

 Block4:
	mov eax,offset _S___3

 Block5:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],5
	jne Block8

 Block6:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov edi,dword ptr [ebp-0x18]
	test edi,edi
	je Block23

 Block10:
	cmp byte ptr [edi],0
	je Block23

 Block11:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x671
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],6
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],7
	jne Block15

 Block14:
	mov eax,dword ptr [eax+8]
	jmp Block16

 Block15:
	mov eax,offset _S___3

 Block16:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call ZXString<char>::AssignWideStr
	mov ecx,dword ptr [ebp+8]
	lea eax,[ebp-0x14]
	push eax
	push 0xFFFFFFFF
	mov byte ptr [ebp-4],8
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],5
	jne Block21

 Block19:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ecx,dword ptr [ebp+8]
	lea eax,[ebp-0x18]
	push eax
	push 0xFFFFFFFF
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block23:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block25

 Block24:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [ebp+8]
	lea esp,[ebp-0x44]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CUIQuestAlarm::CheckSecretItem
__SUB_CLASS_THIS(00422600, __thiscall, 58758,  CUIQuestAlarm, ZXString<char>*, ZXString<char>*, const ItemInfo&) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	cmp dword ptr [edi+8],0
	mov dword ptr [esp+8],0
	mov esi,0x39FC18
	je Block2

 Block1:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::IsExist
	test eax,eax
	je Block3

 Block2:
	mov esi,dword ptr [edi]

 Block3:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	mov esi,dword ptr [esp+0x14]
	push esi
	call CItemInfo::GetItemName
	pop edi
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CUIQuestInfoDetail::~CUIQuestInfoDetail
_SUB_EXCEPTION_HANDLER(423BF0)
__SUB_CLASS_THIS0(00423BF0, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_423BF0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestInfoDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestInfoDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestInfoDetail::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xB80]
	xor ebp,ebp
	mov dword ptr [esp+0x20],0x16
	cmp eax,ebp
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0xB7C],ebp
	lea edi,[esi+0xB78]
	je Block4

 Block3:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block4:
	lea ecx,[esi+0xB70]
	mov byte ptr [esp+0x20],0x15
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	lea ecx,[esi+0xB5C]
	mov byte ptr [esp+0x20],0x14
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0x104]
	mov byte ptr [esp+0x20],0x13
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x100]
	mov byte ptr [esp+0x20],0x12
	cmp eax,ebp
	je Block9

 Block5:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block8:
	mov dword ptr [esi+0x100],ebp

 Block9:
	mov eax,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x20],0x11
	cmp eax,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x20],0x10
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0xEC]
	mov byte ptr [esp+0x20],0xF
	cmp eax,ebp
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x20],0xE
	cmp eax,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esi+0xE4]
	mov byte ptr [esp+0x20],0xD
	cmp eax,ebp
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,dword ptr [esi+0xE0]
	mov byte ptr [esp+0x20],0xC
	cmp eax,ebp
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [esi+0xDC]
	mov byte ptr [esp+0x20],0xB
	cmp eax,ebp
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	lea edi,[esi+0xCC]
	mov byte ptr [esp+0x20],0xA
	cmp dword ptr [edi+4],ebp
	je Block25

 Block24:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block25:
	lea edi,[esi+0xC0]
	mov byte ptr [esp+0x20],9
	cmp dword ptr [edi+4],ebp
	je Block27

 Block26:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block27:
	lea edi,[esi+0xB8]
	mov byte ptr [esp+0x20],8
	cmp dword ptr [edi+4],ebp
	je Block29

 Block28:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block29:
	lea edi,[esi+0xB0]
	mov byte ptr [esp+0x20],7
	cmp dword ptr [edi+4],ebp
	je Block31

 Block30:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block31:
	lea edi,[esi+0xA8]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebp
	je Block33

 Block32:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block33:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebp
	je Block35

 Block34:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block35:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x20],4
	cmp dword ptr [edi+4],ebp
	je Block37

 Block36:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block37:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebp
	je Block39

 Block38:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block39:
	mov edi,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x20],2
	cmp edi,ebp
	je Block44

 Block40:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block43

 Block41:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block43

 Block42:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block43:
	mov dword ptr [esi+0x8C],ebp

 Block44:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x20],1
	cmp dword ptr [edi+4],ebp
	je Block46

 Block45:
	push ebp
	mov ecx,edi
	call ZRef<CUIQuestInfo>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block46:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIQuestInfoDetail>::ms_pInstance],ebp
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CWnd::~CWnd
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
// CUIQuestInfo::OnChildNotify
__SUB_CLASS_THIS(00435260, __thiscall, 58566,  CUIQuestInfo, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov eax,edi
	sub eax,0x7D0
	mov esi,ecx
	je Block8

 Block1:
	sub eax,1
	jne Block5

 Block2:
	cmp ebx,0x12C
	jb Block5

 Block3:
	cmp ebx,0x130
	ja Block5

 Block4:
	push eax
	call CWnd::InvalidateRect

 Block5:
	cmp ebx,0x64
	jne Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push edi
	mov ecx,esi
	call eax

 Block7:
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block8:
	cmp ebx,0x1F4
	jne Block5

 Block9:
	mov eax,dword ptr [esp+0x18]
	push eax
	call CUIQuestInfo::OnTabChanged
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIQuestInfo::TryShowTopQuest
_SUB_EXCEPTION_HANDLER(432240)
__SUB_CLASS_THIS0(00432240, __thiscall, 58586,  CUIQuestInfo, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_432240
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
	mov ebx,ecx
	xor ebp,ebp
	jmp Block2

 Block2:
	mov eax,dword ptr [ebx+0xB18]
	mov ecx,dword ptr [ebx+eax*4+0xB5C]
	lea eax,[ebx+eax*4+0xB5C]
	test ecx,ecx
	je Block19

 Block3:
	cmp ebp,dword ptr [ecx-4]
	jae Block19

 Block4:
	mov esi,dword ptr [ecx+ebp*8+4]
	lea eax,[ecx+ebp*8]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block6

 Block5:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x30],0
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block8

 Block7:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov ecx,ebx
	call CUIQuestInfo::IsCategoryButton
	test eax,eax
	je Block15

 Block9:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
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
	test esi,esi
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov dword ptr [esp+0x1C],0

 Block14:
	inc ebp
	jmp Block2

 Block15:
	movzx ecx,word ptr [esi]
	mov edx,dword ptr [ebx+0xB18]
	push ecx
	push edx
	mov ecx,ebx
	call CUIQuestInfo::ShowQuestInfoDetail
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov ebx,eax
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block18

 Block17:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block18:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block19:
	xor eax,eax
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
// CUIQuestInfoDetail::SetNPC
_SUB_EXCEPTION_HANDLER(42FD70)
__SUB_CLASS_THIS0(0042FD70, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42FD70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB8
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
	mov dword ptr [ebp+0x64],edi
	mov eax,dword ptr [edi+0xE0]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [edi+0xE0],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [edi+0x8C]
	movzx eax,word ptr [eax]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::GetStartDemand
	mov eax,dword ptr [eax+0x18]
	mov dword ptr [edi+0xD8],eax
	cmp eax,ebx
	jne Block4

 Block3:
	mov dword ptr [edi+0xD8],0x897B50

 Block4:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov eax,3
	mov dword ptr [ebp-4],ebx
	mov word ptr [ebp+0x50],ax
	mov dword ptr [ebp+0x58],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp+0x38]
	push edx
	lea eax,[ebp+0x50]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[ebp+0x4C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xE0]
	cmp esi,eax
	je Block13

 Block9:
	mov dword ptr [edi+0xE0],eax
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	cmp esi,ebx
	je Block13

 Block12:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block13:
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,ebx
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0
	jne Block18

 Block16:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp word ptr [ebp+0x38],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea edx,[ebp+0x4C]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [ebp-4],2
	mov word ptr [ebp+0x50],cx
	mov dword ptr [ebp+0x58],eax
	cmp eax,ebx
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	mov esi,dword ptr [edi+0xE0]
	mov byte ptr [ebp-4],3
	cmp esi,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov edx,dword ptr [ebp+0x50]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block29

 Block28:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],2
	jne Block32

 Block30:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	cmp eax,ebx
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea edx,[ebp+0x38]
	mov ebx,4
	push edx
	mov dword ptr [ebp-4],ebx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov ecx,dword ptr [edi+0xE0]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x38]
	push eax
	push 0x6E
	push 0xE7
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x38],si
	jne Block44

 Block42:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x50],si
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov esi,dword ptr [edi+0xE0]
	test esi,esi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov edx,0xD
	mov dword ptr [ebp-4],ebx
	mov word ptr [ebp+0x50],dx
	mov dword ptr [ebp+0x58],eax
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block55:
	mov esi,dword ptr [edi+0xE0]
	mov byte ptr [ebp-4],7
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov edx,dword ptr [ebp+0x50]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp+0x50],bx
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov esi,dword ptr [edi+0xE0]
	test esi,esi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov dword ptr [ebp+0x4C],0
	lea edx,[ebp+0x60]
	push 0xAB8
	push edx
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0xD8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],9
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0xA0]
	push eax
	call esi
	lea ecx,[ebp-0xA0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0xA
	call esi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov edi,dword ptr [ebp+0x4C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0xB
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0xA0]
	push ecx
	lea edx,[ebp+0x38]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xC
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea eax,[ebp-0xB0]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x14]
	mov dword ptr [ebp+0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block80

 Block78:
	cmp eax,0x80004002
	je Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	mov esi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0xB0],si
	jne Block83

 Block81:
	mov eax,dword ptr [ebp-0xA8]
	xor ecx,ecx
	mov word ptr [ebp-0xB0],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[ebp-0xB0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x38],si
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0xA0],si
	jne Block91

 Block89:
	mov eax,dword ptr [ebp-0x98]
	xor edx,edx
	mov word ptr [ebp-0xA0],dx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[ebp-0xA0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov edi,dword ptr [ebp+0x64]
	mov eax,dword ptr [edi+0x100]
	add edi,0xFC
	test eax,eax
	je Block97

 Block93:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block96

 Block94:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block96

 Block95:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block96:
	mov dword ptr [edi+4],0

 Block97:
	cmp dword ptr [ebp+0x14],0
	sete al
	test al,al
	je Block198

 Block98:
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ecx+0xD8]
	push edx
	call CNpcTemplate::GetNpcTemplate
	mov ebx,eax
	xor eax,eax
	add esp,4
	cmp dword ptr [ebx+0xE4],eax
	jbe Block104

 Block99:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xD8]
	push ecx
	mov ecx,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	call CNpcPool::FindNpcByTemplateID
	mov esi,eax
	test esi,esi
	je Block235

 Block100:
	mov ecx,edi
	call ZRef<CAvatar>::_Alloc
	mov ecx,dword ptr [ebp+0x64]
	push 0
	push 0x64
	push 0x6E
	push 0xF2
	push 0
	lea edx,[ebp+0x48]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0xC4],esp
	mov bl,0x12
	push eax
	mov byte ptr [ebp-4],bl
	call _x_com_ptr<IWzGr2DLayer>::CreateFromUnknown
	mov edi,dword ptr [ebp+0x64]
	lea eax,[ebp+0x60]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push eax
	mov byte ptr [ebp-4],0x14
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	mov eax,dword ptr [esi+0x8C]
	mov ecx,dword ptr [edi+0x100]
	push 5
	add eax,4
	push eax
	mov byte ptr [ebp-4],0x15
	call CAvatar::Init_1
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block235

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block235

 Block104:
	int 3// TODO: 	mov dword ptr [ebp-0x50],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [ebp-0x48],eax
	mov dword ptr [ebp-0x44],eax
	mov dword ptr [ebp-0x40],eax
	mov ecx,dword ptr [ebx+0x78]
	mov byte ptr [ebp-4],0x16
	cmp ecx,eax
	je Block106

 Block105:
	mov eax,dword ptr [ecx-4]

 Block106:
	mov edx,dword ptr [ebp+0x64]
	mov ecx,2
	cmp ecx,eax
	sbb esi,esi
	neg esi
	inc esi
	cmp dword ptr [edx+0xD8],0xF7508
	mov dword ptr [ebp+0x48],0x64
	jne Block116

 Block107:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp+0x58]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[ebp+0x58]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [edi+0x3D]
	push ecx
	add edi,0x39
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	push edx
	call get_job_level
	add esp,0xC
	cmp eax,7
	jl Block109

 Block108:
	mov dword ptr [ebp+0x48],0x3C
	jmp Block111

 Block109:
	cmp eax,5
	jl Block111

 Block110:
	mov dword ptr [ebp+0x48],0x46

 Block111:
	mov dword ptr [ebp+0x60],0
	mov eax,dword ptr [ebx+0x78]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block113

 Block112:
	mov eax,dword ptr [eax-4]

 Block113:
	lea ecx,[ebp+0x13]
	push ecx
	add eax,2
	push eax
	lea ecx,[ebp+0x60]
	call ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>>::_Alloc
	mov eax,dword ptr [ebp+0x60]
	lea edx,[esi+esi*4]
	lea ecx,[ebp-0x50]
	lea edi,[eax+edx*4]
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	push edi
	lea ecx,[ebp-0x50]
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::AddTail_List
	cmp dword ptr [ebp-0x48],0
	jne Block115

 Block114:
	mov edi,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push 1
	mov ecx,ebx
	call CNpcTemplate::CalcClientActionSetIdx
	push eax
	lea ecx,[ebp-0x50]
	push ecx
	push esi
	push ebx
	mov ecx,edi
	call CActionMan::LoadNpcAction

 Block115:
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0x16
	call ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>>::RemoveAll
	jmp Block117

 Block116:
	mov edi,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push 1
	mov ecx,ebx
	call CNpcTemplate::CalcClientActionSetIdx
	push eax
	lea edx,[ebp-0x50]
	push edx
	push esi
	push ebx
	mov ecx,edi
	call CActionMan::LoadNpcAction

 Block117:
	mov eax,3
	mov word ptr [ebp+0x50],ax
	mov dword ptr [ebp+0x58],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ecx+0xE0]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x60]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block121

 Block120:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block121:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x16
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov eax,dword ptr [ebp-0x44]
	mov ebx,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block188

 Block126:
	mov edi,dword ptr [ZImports::_VariantInit]

 Block127:
	lea edx,[ebp+0x60]
	push edx
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	cmp ebx,0x64
	je Block155

 Block128:
	mov eax,3
	mov word ptr [ebp-0x80],ax
	mov dword ptr [ebp-0x78],ebx
	mov ecx,eax
	mov word ptr [ebp-0x70],cx
	mov dword ptr [ebp-0x68],ebx
	lea edx,[ebp-0x60]
	push edx
	mov byte ptr [ebp-4],0x1A
	call edi
	lea eax,[ebp-0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block129:
	lea ecx,[ebp-0x90]
	push ecx
	mov byte ptr [ebp-4],0x1B
	call edi
	lea edx,[ebp-0x90]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block130:
	mov eax,dword ptr [esi+0x10]
	mov ecx,3
	mov word ptr [ebp+0x50],cx
	mov dword ptr [ebp+0x58],eax
	mov edx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [edx+0xE0]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [ebp-4],0x1D
	test ecx,ecx
	je Block7

 Block131:
	lea eax,[ebp-0x80]
	push eax
	lea edx,[ebp-0x70]
	push edx
	lea eax,[ebp-0x60]
	push eax
	lea edx,[ebp-0x90]
	push edx
	lea eax,[ebp+0x50]
	push eax
	push esi
	lea edx,[ebp-0xC0]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0xC0],8
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [ebp-0xC0],ax
	mov eax,dword ptr [ebp-0xB8]
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[ebp-0xC0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x1C
	jne Block142

 Block136:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block138

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block138:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block139:
	cmp word ptr [ebp-0x90],8
	mov byte ptr [ebp-4],0x1B
	jne Block143

 Block140:
	mov eax,dword ptr [ebp-0x88]
	xor ecx,ecx
	mov word ptr [ebp-0x90],cx
	test eax,eax
	je Block144

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block142:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp+0x50]
	push eax
	call esi
	jmp Block139

 Block143:
	lea edx,[ebp-0x90]
	push edx
	call esi

 Block144:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],0x1A
	jne Block147

 Block145:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea ecx,[ebp-0x60]
	push ecx
	call esi

 Block148:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],0x19
	jne Block151

 Block149:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea eax,[ebp-0x70]
	push eax
	call esi

 Block152:
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0x16
	jne Block154

 Block153:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	jmp Block183

 Block154:
	lea edx,[ebp-0x80]
	push edx
	jmp Block186

 Block155:
	lea eax,[ebp+0x28]
	push eax
	call edi
	lea ecx,[ebp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block156:
	lea edx,[ebp+0x18]
	push edx
	mov byte ptr [ebp-4],0x1E
	call edi
	lea eax,[ebp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block157:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x1F
	call edi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block158:
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],0x20
	call edi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block159:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [ebp-0x1C],dx
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xE0]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [ebp-4],0x22
	test ecx,ecx
	je Block7

 Block160:
	lea edx,[ebp+0x28]
	push edx
	lea eax,[ebp+0x18]
	push eax
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	push esi
	lea eax,[ebp-0x3C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x3C],8
	jne Block163

 Block161:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x21
	jne Block171

 Block165:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block167

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block167:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block168:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x20
	jne Block172

 Block169:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block173

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block171:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x1C]
	push ecx
	call esi
	jmp Block168

 Block172:
	lea eax,[ebp]
	push eax
	call esi

 Block173:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x1F
	jne Block176

 Block174:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block177:
	cmp word ptr [ebp+0x18],8
	mov byte ptr [ebp-4],0x1E
	jne Block180

 Block178:
	xor eax,eax
	mov word ptr [ebp+0x18],ax
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea ecx,[ebp+0x18]
	push ecx
	call esi

 Block181:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0x16
	jne Block185

 Block182:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx

 Block183:
	test eax,eax
	je Block187

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block185:
	lea eax,[ebp+0x28]
	push eax

 Block186:
	call esi

 Block187:
	cmp dword ptr [ebp+0x60],0
	jne Block127

 Block188:
	cmp ebx,0x3C
	jne Block193

 Block189:
	mov ecx,dword ptr [ebp+0x64]
	mov esi,dword ptr [ecx+0xE0]
	test esi,esi
	jne Block191

 Block190:
	push 0x80004003
	call _com_issue_error

 Block191:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x44]
	push 0x6E
	push 0xE2
	push esi
	call eax
	test eax,eax
	jge Block197

 Block192:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex
	jmp Block197

 Block193:
	cmp ebx,0x46
	jne Block197

 Block194:
	mov ecx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ecx+0xE0]
	test ecx,ecx
	jne Block196

 Block195:
	push 0x80004003
	call _com_issue_error

 Block196:
	push 0x50
	push 0xE2
	call IWzShape2D::Offset

 Block197:
	lea ecx,[ebp-0x50]
	mov byte ptr [ebp-4],0x11
	int 3// TODO: 	mov dword ptr [ebp-0x50],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	jmp Block235

 Block198:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push edx
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block200

 Block199:
	push eax
	call _com_issue_error

 Block200:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x23
	call esi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block202

 Block201:
	push eax
	call _com_issue_error

 Block202:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0x24
	call esi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block204

 Block203:
	push eax
	call _com_issue_error

 Block204:
	lea edx,[ebp+0x18]
	push edx
	mov byte ptr [ebp-4],0x25
	call esi
	lea eax,[ebp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block206

 Block205:
	push eax
	call _com_issue_error

 Block206:
	lea ecx,[ebp+0x28]
	mov bl,0x26
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax+0xE0]
	mov byte ptr [ebp-4],0x27
	test ecx,ecx
	jne Block210

 Block209:
	push 0x80004003
	call _com_issue_error

 Block210:
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp]
	push eax
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp+0x18]
	push eax
	mov eax,dword ptr [ebp+0x14]
	lea edx,[ebp+0x28]
	push edx
	push eax
	lea edx,[ebp-0x3C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [ebp-0x3C],di
	jne Block217

 Block211:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block213

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block213:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block214:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x28],di
	jne Block218

 Block215:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	test eax,eax
	je Block219

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block219

 Block217:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x3C]
	push ecx
	call esi
	jmp Block214

 Block218:
	lea eax,[ebp+0x28]
	push eax
	call esi

 Block219:
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp+0x18],di
	jne Block222

 Block220:
	mov eax,dword ptr [ebp+0x20]
	xor ecx,ecx
	mov word ptr [ebp+0x18],cx
	test eax,eax
	je Block223

 Block221:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block223

 Block222:
	lea edx,[ebp+0x18]
	push edx
	call esi

 Block223:
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp-0x2C],di
	jne Block226

 Block224:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block227

 Block225:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block227

 Block226:
	lea ecx,[ebp-0x2C]
	push ecx
	call esi

 Block227:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp],di
	jne Block230

 Block228:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea eax,[ebp]
	push eax
	call esi

 Block231:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x1C],di
	jne Block234

 Block232:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block235:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x18]
	push eax
	call esi
	lea ecx,[ebp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block237

 Block236:
	push eax
	call _com_issue_error

 Block237:
	lea edx,[ebp+0x28]
	mov bl,0x28
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp+0x28]
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
	mov ecx,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ecx+0xE0]
	mov byte ptr [ebp-4],0x29
	test ecx,ecx
	jne Block241

 Block240:
	push 0x80004003
	call _com_issue_error

 Block241:
	lea edx,[ebp+0x18]
	push edx
	lea eax,[ebp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x28],si
	jne Block244

 Block242:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	test eax,eax
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block245:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x18],si
	jne Block248

 Block246:
	xor eax,eax
	mov word ptr [ebp+0x18],ax
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea ecx,[ebp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block249:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block251

 Block250:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block251:
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block253

 Block252:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block253:
	lea esp,[ebp-0xD4]
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
	ret
}
}
// CUIQuestInfoDetail::SetLayout
_SUB_EXCEPTION_HANDLER(423020)
__SUB_CLASS_THIS0(00423020, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_423020
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
	mov ecx,dword ptr [esi+0xC4]
	test ecx,ecx
	je Block3

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xC4],0
	lea edi,[esi+0xC0]
	je Block3

 Block2:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block3:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block16

 Block7:
	add eax,8
	je Block16

 Block8:
	lea edi,[eax-8]
	test edi,edi
	je Block10

 Block9:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov eax,dword ptr [esi+0xC4]
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block12:
	mov eax,dword ptr [esi+0x8C]
	mov edi,dword ptr [esi+0xC4]
	test eax,eax
	je Block20

 Block13:
	cmp dword ptr [eax+0x40],0
	je Block15

 Block14:
	cmp dword ptr [eax+0x40],1
	jne Block17

 Block15:
	mov ebx,0xF
	jmp Block21

 Block16:
	xor edi,edi
	jmp Block10

 Block17:
	test eax,eax
	je Block20

 Block18:
	cmp dword ptr [eax+0x24],0
	je Block20

 Block19:
	mov ebx,0xF
	jmp Block21

 Block20:
	xor ebx,ebx

 Block21:
	push 0
	mov ecx,esi
	call CUIQuestInfoDetail::GetScrLogLen
	push eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x28]
	add ebx,0x7F
	push ebx
	push 0x113
	push 8
	push 1
	push 0x7D0
	push esi
	mov ecx,edi
	call edx
	mov eax,dword ptr [esi+0xC4]
	mov edi,0x107
	mov dword ptr [eax+0x34],edi
	mov eax,dword ptr [esi+0x8C]
	test eax,eax
	je Block29

 Block22:
	mov eax,dword ptr [eax+0x34]
	test eax,eax
	je Block29

 Block23:
	cmp dword ptr [eax-4],0
	je Block29

 Block24:
	cmp dword ptr [esi+0xD0],0
	jne Block32

 Block25:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x20],1
	test eax,eax
	je Block27

 Block26:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block28

 Block27:
	xor eax,eax

 Block28:
	push eax
	lea ecx,[esi+0xCC]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov ecx,dword ptr [esi+0xD0]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0x71
	push 0xFB
	push 0x113
	push 8
	push 1
	push 0x7D1
	push esi
	call edx
	mov eax,dword ptr [esi+0xD0]
	mov dword ptr [eax+0x34],edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block29:
	mov ecx,dword ptr [esi+0xD0]
	test ecx,ecx
	je Block32

 Block30:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	add esi,0xCC
	cmp dword ptr [esi+4],0
	je Block32

 Block31:
	push 0
	mov ecx,esi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block32:
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
// CUIQuestInfo::~CUIQuestInfo
__SUB_CLASS_THIS0(005CCC30, __thiscall, 58564,  CUIQuestInfo, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0xB0C]
	mov eax,dword ptr [ecx+0x44]
	inc eax
	cdq
	idiv dword ptr [ecx+0x50]
	push edx
	call CCtrlTab::SetTab
	ret
}
}
// CUIQuestInfo::MarkQuestAsRead
__SUB_CLASS_THIS(0042A730, __thiscall, 58581,  CUIQuestInfo, void, uint16_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0xB18],0
	jne Block3

 Block1:
	push 0
	lea eax,[esp+8]
	push eax
	mov ecx,offset CUIQuestInfo::ms_lQuestRead
	call ZList<unsigned short>::Find
	test eax,eax
	jne Block3

 Block2:
	mov ecx,offset CUIQuestInfo::ms_lQuestRead
	call ZList<unsigned short>::AddTail_
	mov cx,word ptr [esp+4]
	mov word ptr [eax],cx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+4],0
	jmp  CWvsContext::CheckNewQuestAvailable

 Block3:
	ret 4
}
}
// CUIQuestAlarm::GetProgressFont
__SUB_CLASS_THIS(00421770, __thiscall, 58752,  CUIQuestAlarm, _x_com_ptr<IWzFont>*, _x_com_ptr<IWzFont>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x21
	push esi
	mov dword ptr [esp+4],0
	jge Block3

 Block1:
	mov ecx,dword ptr [ecx+0xB1C]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],ecx
	test ecx,ecx
	je Block10

 Block2:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block3:
	cmp eax,0x42
	jge Block5

 Block4:
	mov ecx,dword ptr [ecx+0xB20]
	jmp Block8

 Block5:
	cmp eax,0x64
	jge Block7

 Block6:
	mov ecx,dword ptr [ecx+0xB24]
	jmp Block8

 Block7:
	mov ecx,dword ptr [ecx+0xB28]

 Block8:
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],ecx
	test ecx,ecx
	je Block10

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block10:
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CUIQuestInfo::OnTabChanged
__SUB_CLASS_THIS(004351D0, __thiscall, 58587,  CUIQuestInfo, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB1C],0xFFFFFFFF
	call CUIQuestInfo::LoadData
	mov ecx,esi
	call CUIQuestInfo::SetScrollBar
	mov ecx,esi
	call CUIQuestInfo::SetButton
	mov eax,edi
	sub eax,0
	je Block4

 Block1:
	sub eax,1
	jne Block6

 Block2:
	mov ecx,esi
	call CUIQuestInfo::TryShowRecentlyUpdatedQuest
	test eax,eax
	jne Block6

 Block3:
	mov ecx,esi
	call CUIQuestInfo::TryShowRecentlyViewedQuest
	jmp Block6

 Block4:
	push 1
	mov ecx,esi
	call CUIQuestInfo::TryShowSuitableLevelQuest
	test eax,eax
	jne Block6

 Block5:
	push eax
	mov ecx,esi
	call CUIQuestInfo::TryShowSuitableLevelQuest

 Block6:
	cmp dword ptr [esi+0xB1C],0xFFFFFFFF
	jne Block9

 Block7:
	mov ecx,esi
	call CUIQuestInfo::TryShowTopQuest
	test eax,eax
	jne Block9

 Block8:
	push eax
	mov ecx,esi
	call CUIQuestInfo::ToggleDetail

 Block9:
	mov ecx,esi
	call CUIQuestInfo::SyncScrollBarWithSelected
	pop edi
	pop esi
	ret 4
}
}
// CUIQuestInfo::TryShowRecentlyViewedQuest
__SUB_CLASS_THIS0(00432080, __thiscall, 58586,  CUIQuestInfo, int32_t) {
__asm {

 Block0:
	movzx eax,word ptr [ecx+0xAFC]
	push eax
	push 1
	call CUIQuestInfo::ShowQuestInfoDetail
	ret
}
}
// Partition_ZRef_QuestInfo__QICompareFunc_
__SUB(00422C40, __cdecl, 85514,  int32_t, ZArray<ZRef<QuestInfo> >&, int32_t, int32_t, const ZRef<QuestInfo>&, QICompareFunc&) {
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
	add eax,0xFFFFFFF4
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
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,dword ptr [esp+0x3C]
	call QICompareFunc::operator()
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
	add eax,0xFFFFFFF4
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
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov ecx,dword ptr [esp+0x3C]
	call QICompareFunc::operator()
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
// CUIQuestInfoDetail::OnSetFocus
__SUB_CLASS_THIS(00423ED0, __thiscall, 58393,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIQuestAlarm::GetRegisterQuestNum
__SUB_CLASS_THIS0(00422650, __thiscall, 58750,  CUIQuestAlarm, long) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0xB0C],0
	je Block24

 Block1:
	mov eax,dword ptr [ebx+0xB08]
	test eax,eax
	je Block24

 Block2:
	cmp dword ptr [eax-4],0
	je Block24

 Block3:
	push esi
	push edi
	xor esi,esi
	xor edi,edi
	mov edi,edi

 Block4:
	mov eax,dword ptr [ebx+0xB08]
	test eax,eax
	je Block23

 Block5:
	cmp edi,dword ptr [eax-4]
	jae Block23

 Block6:
	movzx eax,word ptr [eax+edi*4]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	add esi,0x12
	call CQuestMan::GetCompleteDemand
	mov ecx,dword ptr [eax+0x74]
	test ecx,ecx
	je Block12

 Block7:
	cmp dword ptr [ecx-4],0
	je Block12

 Block8:
	mov edx,dword ptr [eax+0x74]
	xor ecx,ecx
	lea esp,[esp]

 Block9:
	test edx,edx
	je Block12

 Block10:
	cmp ecx,dword ptr [edx-4]
	jae Block12

 Block11:
	add esi,0x12
	inc ecx
	jmp Block9

 Block12:
	mov ecx,dword ptr [eax+0x78]
	test ecx,ecx
	je Block18

 Block13:
	cmp dword ptr [ecx-4],0
	je Block18

 Block14:
	mov edx,dword ptr [eax+0x78]
	xor ecx,ecx

 Block15:
	test edx,edx
	je Block18

 Block16:
	cmp ecx,dword ptr [edx-4]
	jae Block18

 Block17:
	add esi,0x12
	inc ecx
	jmp Block15

 Block18:
	cmp dword ptr [eax+0x34],0
	jbe Block20

 Block19:
	add esi,0x12

 Block20:
	mov eax,dword ptr [eax+0x70]
	test eax,eax
	jne Block22

 Block21:
	lea ecx,[eax+eax*8]
	lea esi,[esi+ecx*2+0x12]
	inc edi
	jmp Block4

 Block22:
	mov eax,dword ptr [eax-4]
	lea ecx,[eax+eax*8]
	lea esi,[esi+ecx*2+0x12]
	inc edi
	jmp Block4

 Block23:
	pop edi
	lea eax,[esi-0x12]
	pop esi
	pop ebx
	ret

 Block24:
	mov eax,0xFFFFFFF6
	pop ebx
	ret
}
}
// CUIQuestAlarm::ClearHistory
__SUB_CLASS_THIS(00421820, __thiscall, 58756,  CUIQuestAlarm, void, long) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0xB8C]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZMap<long, unsigned long, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	lea ecx,[esp+8]
	push ecx
	mov ecx,esi
	call ZMap<long, unsigned long, long>::RemoveKey

 Block2:
	pop esi
	ret 4
}
}
// CUIQuestInfo::CUIQuestInfo
_SUB_EXCEPTION_HANDLER(4271E0)
__SUB_CLASS_THIS(004271E0, __thiscall, 58562,  CUIQuestInfo, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4271E0
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
	push edi
	push edi
	push 1
	push 6
	push 0xD6
	push 5
	push 6
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIQuestInfo>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIQuestInfo>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestInfo::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB30],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 4
	push 4
	lea edx,[esi+0xB34]
	push edx
	mov byte ptr [esp+0x2C],4
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push offset _x_com_ptr<IWzFont>::_ctor_default
	push 4
	push 4
	lea eax,[esi+0xB44]
	push eax
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB54],edi
	mov dword ptr [esi+0xB58],edi
	push offset ZArray<ZRef<QuestInfo>>::~ZArray<ZRef<QuestInfo>>
	push offset ZArray<ZRef<QuestInfo>>::_ctor_default
	push 4
	push 4
	lea ecx,[esi+0xB5C]
	push ecx
	mov byte ptr [esp+0x2C],8
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB70],edi
	push offset ZArray<ZRef<CCtrlButton>>::~ZArray<ZRef<CCtrlButton>>
	push offset ZArray<ZRef<CCtrlButton>>::_ctor_default
	push 4
	push 4
	lea edx,[esi+0xB74]
	push edx
	mov byte ptr [esp+0x2C],0xA
	call __eh_vector_ctor_iterator
	push offset ZArray<ZRef<CCtrlButton>>::~ZArray<ZRef<CCtrlButton>>
	push offset ZArray<ZRef<CCtrlButton>>::_ctor_default
	push 4
	push 4
	lea eax,[esi+0xB84]
	push eax
	mov byte ptr [esp+0x2C],0xB
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB98],edi
	mov dword ptr [esi+0xBA0],edi
	lea ecx,[esi+0xBA4]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	mov dword ptr [esi+0xBBC],edi
	mov dword ptr [esi+0xBC0],edi
	mov dword ptr [esi+0xBC4],edi
	mov dword ptr [esi+0xBC8],edi
	mov dword ptr [esi+0xBCC],edi
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],0x10
	push 0xA
	or eax,0xFFFFFFFF
	push 0x18C
	mov dword ptr [esi+0xB18],ecx
	push 0xEB
	mov ecx,esi
	mov dword ptr [esi+0xB1C],eax
	mov dword ptr [esi+0xB28],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB2C],eax
	call CUIWnd::CreateUIWndPosSaved
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
// CUIQuestInfo::IsMinimizedCategory
__SUB_CLASS_THIS(00421B70, __thiscall, 58595,  CUIQuestInfo, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea ecx,[ecx+eax*4]
	mov eax,ecx
	cdq
	and edx,7
	add eax,edx
	mov edx,dword ptr [esi+0xB00]
	sar eax,3
	and ecx,7
	inc eax
	push edi
	mov edi,ecx
	test edx,edx
	je Block2

 Block1:
	mov edx,dword ptr [edx-4]

 Block2:
	cmp eax,edx
	jbe Block4

 Block3:
	pop edi
	xor eax,eax
	pop esi
	ret 8

 Block4:
	mov dl,1
	shl dl,cl
	mov ecx,dword ptr [esi+0xB00]
	pop edi
	pop esi
	test byte ptr [ecx+eax-1],dl
	mov eax,0
	setne al
	ret 8
}
}
// CUIQuestInfo::GetRTTI
__SUB_CLASS_THIS0(004273B0, __thiscall, 58608,  CUIQuestInfo, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIQuestInfo::ms_RTTI_CUIQuestInfo
	ret
}
}
// CUIQuestInfo::TryShowSuitableLevelQuest
_SUB_EXCEPTION_HANDLER(432090)
__SUB_CLASS_THIS(00432090, __thiscall, 58602,  CUIQuestInfo, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_432090
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
	mov ebx,ecx
	cmp dword ptr [ebx+0xB18],0
	je Block2

 Block1:
	mov ecx,dword ptr [ebx+0xB0C]
	push 0
	call CCtrlTab::SetTab

 Block2:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	xor ecx,ecx

 Block3:
	mov eax,dword ptr [ebx+0xB5C]
	mov dword ptr [esp+0x14],ecx
	test eax,eax
	je Block26

 Block4:
	cmp ecx,dword ptr [eax-4]
	jae Block26

 Block5:
	mov esi,dword ptr [eax+ecx*8+4]
	lea eax,[eax+ecx*8]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block7

 Block6:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],0
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block9

 Block8:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov ecx,ebx
	call CUIQuestInfo::IsCategoryButton
	test eax,eax
	je Block14

 Block10:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block21

 Block11:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block20

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block20

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0
	inc ecx
	jmp Block3

 Block14:
	movzx eax,word ptr [esi]
	push eax
	mov ecx,ebx
	call CUIQuestInfo::IsWorthlessQuest
	test eax,eax
	jne Block17

 Block15:
	cmp dword ptr [esp+0x34],eax
	je Block22

 Block16:
	movzx ecx,word ptr [esi]
	push ecx
	call CUIQuestInfo::IsMarkedAsRead
	add esp,4
	test eax,eax
	je Block22

 Block17:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block20

 Block18:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block20

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block20:
	mov dword ptr [esp+0x20],0

 Block21:
	mov ecx,dword ptr [esp+0x14]
	inc ecx
	jmp Block3

 Block22:
	movzx ecx,word ptr [esi]
	push ecx
	push 0
	mov ecx,ebx
	call CUIQuestInfo::ShowQuestInfoDetail
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov ebx,eax
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block25

 Block23:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block25

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block25:
	mov eax,ebx
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
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
// CUIQuestAlarm::GetProgressFontMeso
__SUB_CLASS_THIS(004217E0, __thiscall, 58753,  CUIQuestAlarm, _x_com_ptr<IWzFont>*, _x_com_ptr<IWzFont>*, double) {
__asm {

 Block0:
	push ecx
	fld1
	push esi
	fcomp qword ptr [esp+0x10]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	fnstsw ax
	test ah,0x41
	jne Block2

 Block1:
	mov eax,dword ptr [ecx+0xB1C]
	jmp Block3

 Block2:
	mov eax,dword ptr [ecx+0xB28]

 Block3:
	mov dword ptr [esi],eax
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	mov eax,esi
	pop esi
	pop ecx
	ret 0xC
}
}
// CCtrlButtonQuestAlarmAuto::OnMouseMove
_SUB_EXCEPTION_HANDLER(4236B0)
__SUB_CLASS_THIS(004236B0, __thiscall, 85479,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4236B0
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
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [esi-4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[esi-4]
	push edx
	mov edx,dword ptr [esp+0x30]
	push edx
	call eax
	test eax,eax
	je Block13

 Block1:
	cmp dword ptr [esi+0xAD8],0
	mov eax,dword ptr [esi+0x20]
	push 0
	push 0
	push 0xC8
	push 0
	push 0
	push 0
	lea ebx,[eax+4]
	lea ebp,[eax+4]
	push ecx
	je Block7

 Block2:
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x107D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x107B
	push edx
	mov dword ptr [esp+0x4C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,dword ptr [esi+0x14]
	mov byte ptr [esp+0x44],1
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x4C]
	push ecx
	push edi
	mov dword ptr [esp+0x54],0
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x30]
	mov edi,dword ptr [esp+0x4C]
	mov ecx,ebx
	call edx
	add eax,dword ptr [esp+0x50]
	mov ecx,ebp
	push eax
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x2C]
	call edx
	jmp Block12

 Block7:
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x107C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x107A
	push ecx
	mov dword ptr [esp+0x4C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,dword ptr [esi+0x14]
	mov byte ptr [esp+0x44],3
	test edi,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x68]
	lea eax,[esp+0x34]
	push eax
	push edi
	mov dword ptr [esp+0x3C],0
	call ecx
	test eax,eax
	jge Block11

 Block10:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x30]
	mov edi,dword ptr [esp+0x34]
	mov ecx,ebx
	call eax
	add eax,dword ptr [esp+0x50]
	mov edx,dword ptr [ebp]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,ebp
	call eax

 Block12:
	add eax,dword ptr [esi+0x18]
	lea ecx,[esi+0x88]
	add eax,edi
	push eax
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String2

 Block13:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIQuestAlarm::Create
__SUB_CLASS_THIS0(00422730, __thiscall, 58739,  CUIQuestAlarm, void) {
__asm {

 Block0:
	push esi
	push 0xA
	mov esi,ecx
	call CUIQuestAlarm::GetHeight
	add eax,0x1E
	push eax
	push 0xB4
	mov ecx,esi
	call CUIWnd::CreateUIWndPosSaved
	mov eax,1
	mov dword ptr [esi+0xB84],eax
	mov dword ptr [esi+0xB88],eax
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push eax
	call CConfig::SetQuestAlarmOpened
	pop esi
	ret
}
}
// CUIQuestInfoDetail::OnMouseButton
__SUB_CLASS_THIS(00423EF0, __thiscall, 58395,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB7C]
	xor ebx,ebx
	push edi
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [esi+0xB7C],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov edi,dword ptr [esi+0xDC]
	cmp edi,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0xC]
	push ecx
	push edi
	mov dword ptr [esp+0x14],ebx
	call edx
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov edi,dword ptr [esi+0xDC]
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0xF2
	sub ecx,eax
	mov dword ptr [esp+0x10],ecx
	cmp edi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xC0]
	lea eax,[esp+0xC]
	push eax
	push edi
	mov dword ptr [esp+0x14],ebx
	call ecx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov edi,dword ptr [esi+0xDC]
	mov edx,0x64
	sub edx,dword ptr [esp+0xC]
	mov dword ptr [esp+0x14],edx
	cmp edi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0xC]
	push ecx
	push edi
	mov dword ptr [esp+0x14],ebx
	call edx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esp+0xC]
	cdq
	sub eax,edx
	sar eax,1
	add eax,0xF2
	cmp dword ptr [esp+0x24],0x203
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],0x64
	jne Block36

 Block15:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push ecx
	lea edx,[esp+0x18]
	push edx
	call PtInRect
	test eax,eax
	je Block19

 Block16:
	mov eax,dword ptr [esi+0x80]
	mov eax,dword ptr [eax+0xB18]
	cmp eax,ebx
	je Block18

 Block17:
	cmp eax,1
	jne Block19

 Block18:
	lea ecx,[esi-4]
	call CUIQuestInfoDetail::MarkNpcLocation_InWorldMap

 Block19:
	xor edi,edi
	xor edx,edx
	push ebp

 Block20:
	mov eax,dword ptr [esi+0x88]
	add eax,0x18
	mov eax,dword ptr [eax]
	xor ebx,ebx
	mov dword ptr [esp+0x10],edx
	cmp eax,ebx
	je Block35

 Block21:
	cmp edx,dword ptr [eax-4]
	jae Block35

 Block22:
	mov dword ptr [esp+0x28],ebx

 Block23:
	mov ecx,dword ptr [esi+0x88]
	mov eax,dword ptr [ecx+0x20]
	mov ecx,dword ptr [eax+edx*4]
	lea eax,[eax+edx*4]
	test ecx,ecx
	je Block34

 Block24:
	mov ebp,dword ptr [esp+0x28]
	cmp ebp,dword ptr [ecx-4]
	jae Block34

 Block25:
	mov edx,dword ptr [esp+0x30]
	mov eax,ecx
	mov ecx,dword ptr [eax+ebx+0x18]
	add eax,ebx
	lea ebp,[ecx+0x11]
	cmp ebp,edx
	jge Block33

 Block26:
	mov ebp,dword ptr [eax+0x20]
	lea ecx,[ecx+ebp+0x19]
	cmp edx,ecx
	jge Block33

 Block27:
	mov ecx,dword ptr [eax+0x1C]
	mov edx,dword ptr [esi+0xC4]
	mov ebp,ecx
	sub ebp,edx
	lea ebp,[edi+ebp+0x7F]
	cmp ebp,dword ptr [esp+0x34]
	jge Block33

 Block28:
	mov ebp,dword ptr [eax+0x24]
	sub ebp,edx
	add ebp,ecx
	lea edx,[edi+ebp+0x7F]
	cmp dword ptr [esp+0x34],edx
	jge Block33

 Block29:
	mov ecx,dword ptr [eax+0x3C]
	test ecx,ecx
	je Block31

 Block30:
	mov dword ptr [esi+0xD4],ecx
	lea ecx,[esi-4]
	call CUIQuestInfoDetail::MarkNpcLocation_InWorldMap
	inc dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x10]
	add ebx,0x44
	jmp Block23

 Block31:
	mov eax,dword ptr [eax+0x40]
	test eax,eax
	je Block33

 Block32:
	push eax
	lea ecx,[esi-4]
	call CUIQuestInfoDetail::MarkMapLocation_InWorldMap

 Block33:
	inc dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x10]
	add ebx,0x44
	jmp Block23

 Block34:
	mov eax,dword ptr [esi+0x88]
	mov ecx,dword ptr [eax+0x1C]
	add edi,dword ptr [ecx+edx*4]
	inc edx
	jmp Block20

 Block35:
	pop ebp

 Block36:
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 0x10
}
}
// CUIQuestAlarm::~CUIQuestAlarm
_SUB_EXCEPTION_HANDLER(42C7C0)
__SUB_CLASS_THIS0(0042C7C0, __thiscall, 58739,  CUIQuestAlarm, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42C7C0
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
	mov dword ptr [esp+0x18],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestAlarm::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestAlarm::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestAlarm::`vftable'{for `ZRefCounted'}
	lea ebp,[esi+0xB8C]
	mov ecx,ebp
	mov dword ptr [esp+0x28],0x15
	call ZMap<long, unsigned long, long>::GetHeadPosition
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block10

 Block1:
	mov edi,edi

 Block2:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call ZMap<long, unsigned long, long>::GetNext
	mov ebx,dword ptr [eax]
	push ebx
	call isAllConditionsSatisfied
	add esp,4
	test eax,eax
	jne Block9

 Block3:
	xor edi,edi

 Block4:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block9

 Block5:
	cmp edi,dword ptr [eax-4]
	jae Block9

 Block6:
	mov edx,eax
	cmp dword ptr [edx+edi*4],ebx
	jne Block8

 Block7:
	push edi
	mov ecx,esi
	call CUIQuestAlarm::RemoveQuestByIndex

 Block8:
	inc edi
	jmp Block4

 Block9:
	cmp dword ptr [esp+0x14],0
	jne Block2

 Block10:
	lea ecx,[esi+0xBCC]
	mov byte ptr [esp+0x28],0x14
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xBB4]
	mov byte ptr [esp+0x28],0x13
	call ZArray<tagRECT>::RemoveAll
	lea ecx,[esi+0xBB0]
	mov byte ptr [esp+0x28],0x12
	call ZArray<tagRECT>::RemoveAll
	lea ecx,[esi+0xBAC]
	mov byte ptr [esp+0x28],0x11
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0xBA4]
	mov byte ptr [esp+0x28],0x10
	call ZArray<long>::RemoveAll
	mov ecx,ebp
	mov byte ptr [esp+0x28],0xF
	int 3// TODO: 	mov dword ptr [ebp],offset ZMap<long, unsigned long, long>::`vftable'
	call ZMap<long, unsigned long, long>::RemoveAll
	lea ecx,[esi+0xB6C]
	mov byte ptr [esp+0x28],0xE
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, tagRECT, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, tagRECT, ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0xB68]
	mov byte ptr [esp+0x28],0xD
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xB64]
	mov byte ptr [esp+0x28],0xC
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xB60]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x28],0xB
	test eax,eax
	je Block23

 Block15:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block22

 Block16:
	mov eax,dword ptr [esi+0xB60]
	test eax,eax
	je Block18

 Block17:
	add eax,8
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [esi+0xB60]
	test eax,eax
	je Block22

 Block20:
	lea ecx,[eax+8]
	test ecx,ecx
	je Block22

 Block21:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block22:
	mov dword ptr [esi+0xB60],0

 Block23:
	mov eax,dword ptr [esi+0xB58]
	xor ebp,ebp
	mov byte ptr [esp+0x28],0xA
	cmp eax,ebp
	je Block32

 Block24:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block31

 Block25:
	mov eax,dword ptr [esi+0xB58]
	cmp eax,ebp
	je Block27

 Block26:
	add eax,8
	jmp Block28

 Block27:
	xor eax,eax

 Block28:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [esi+0xB58]
	cmp eax,ebp
	je Block31

 Block29:
	lea ecx,[eax+8]
	cmp ecx,ebp
	je Block31

 Block30:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block31:
	mov dword ptr [esi+0xB58],ebp

 Block32:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 5
	push 8
	lea eax,[esi+0xB2C]
	push eax
	mov byte ptr [esp+0x38],9
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xB28]
	mov byte ptr [esp+0x28],8
	cmp eax,ebp
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov eax,dword ptr [esi+0xB24]
	mov byte ptr [esp+0x28],7
	cmp eax,ebp
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov eax,dword ptr [esi+0xB20]
	mov byte ptr [esp+0x28],6
	cmp eax,ebp
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov eax,dword ptr [esi+0xB1C]
	mov byte ptr [esp+0x28],5
	cmp eax,ebp
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	mov eax,dword ptr [esi+0xB18]
	mov byte ptr [esp+0x28],4
	cmp eax,ebp
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov eax,dword ptr [esi+0xB14]
	mov byte ptr [esp+0x28],3
	cmp eax,ebp
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov eax,dword ptr [esi+0xB10]
	mov byte ptr [esp+0x28],2
	cmp eax,ebp
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	lea ecx,[esi+0xB08]
	mov byte ptr [esp+0x28],1
	call ZArray<long>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CUIQuestAlarm>::ms_pInstance],ebp
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CUIQuestAlarm::UpdateNewQuestAlarmButton
__SUB_CLASS_THIS(004213E0, __thiscall, 58749,  CUIQuestAlarm, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::GetQueatAlarmOpened
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esi+0xB60]
	push 0
	push eax
	call CCtrlButtonWithAniState::Animate

 Block2:
	pop esi
	ret 4
}
}
// CUIQuestInfoDetail::SetGauge_SeriesQuest
_SUB_EXCEPTION_HANDLER(425760)
__SUB_CLASS_THIS0(00425760, __thiscall, 58388,  CUIQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_425760
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x128
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x13C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+0xE4]
	lea ebp,[edi+0xE4]
	xor ebx,ebx
	mov dword ptr [esp+0x64],ebp
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [ebp],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	push ebx
	push ebx
	push ebx
	lea eax,[edi+0xB4C]
	push ebx
	push eax
	mov dword ptr [esp+0x28],eax
	call SetRect
	mov eax,dword ptr [edi+0x8C]
	push ecx
	mov ecx,esp
	add eax,0xC
	mov dword ptr [esp+0x4C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	lea eax,[esp+0x44]
	push eax
	call CQuestMan::GetSeriesQuest
	mov eax,dword ptr [eax]
	cmp eax,ebx
	jne Block4

 Block3:
	xor esi,esi
	mov dword ptr [esp+0x2C],esi
	jmp Block5

 Block4:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x2C],ecx
	mov esi,ecx

 Block5:
	lea ecx,[esp+0x40]
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [edi+0x8C]
	mov eax,dword ptr [eax+0x28]
	cmp eax,ebx
	mov dword ptr [esp+0x40],eax
	jl Block220

 Block6:
	cmp esi,1
	jle Block220

 Block7:
	cmp eax,esi
	jge Block220

 Block8:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,3
	mov dword ptr [esp+0x144],ebx
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x144],1
	cmp ecx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0x1C],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block18:
	mov dword ptr [esp+0x144],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x30]
	push eax
	call ebx

 Block22:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov edx,0xD
	mov dword ptr [esp+0x144],ebx
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x144],3
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x30]
	push eax
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x144],bl
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x144],0xFFFFFFFF
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea edx,[esp+0x30]
	mov ebx,4
	push edx
	mov dword ptr [esp+0x148],ebx
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x144],5
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0x69
	push 0x60
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x144],bl
	cmp word ptr [esp+0x30],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [esp+0x144],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov esi,dword ptr [ebp]
	test esi,esi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov edx,0xD
	mov dword ptr [esp+0x144],ebx
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block52:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x144],7
	test ecx,ecx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea eax,[esp+0x30]
	push eax
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x144],bl
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x144],0xFFFFFFFF
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov esi,dword ptr [ebp]
	xor edi,edi
	cmp esi,edi
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	cmp eax,edi
	jge Block64

 Block63:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block64:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x6C]
	push edx
	call esi
	lea eax,[esp+0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	lea ecx,[esp+0x30]
	mov ebp,8
	push ecx
	mov dword ptr [esp+0x148],ebp
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	push edi
	push edi
	lea eax,[esp+0x74]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	mov bl,9
	push offset _S_UIUIWINDOW2IMGQU__6
	mov byte ptr [esp+0x15C],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x158],0xA
	cmp dword ptr [_D_G_RM],edi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea edx,[esp+0x110]
	mov byte ptr [esp+0x158],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block73

 Block71:
	cmp eax,0x80004002
	je Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	mov byte ptr [esp+0x144],0xD
	cmp word ptr [esp+0xFC],bp
	jne Block80

 Block74:
	xor eax,eax
	mov word ptr [esp+0xFC],ax
	mov eax,dword ptr [esp+0x104]
	cmp eax,edi
	je Block76

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block76:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block77:
	mov ebx,8
	mov byte ptr [esp+0x144],0xE
	cmp word ptr [esp+0x30],bx
	jne Block81

 Block78:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,edi
	je Block82

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block80:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xFC]
	push ecx
	call ebp
	jmp Block77

 Block81:
	lea eax,[esp+0x30]
	push eax
	call ebp

 Block82:
	mov byte ptr [esp+0x144],0xF
	cmp word ptr [esp+0x6C],bx
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,edi
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea edx,[esp+0x6C]
	push edx
	call ebp

 Block86:
	lea eax,[esp+0xDC]
	push eax
	call esi
	lea ecx,[esp+0xDC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	lea edx,[esp+0xBC]
	push edx
	mov byte ptr [esp+0x148],0x10
	call esi
	lea eax,[esp+0xBC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	push edi
	push edi
	lea ecx,[esp+0xE4]
	push ecx
	lea edx,[esp+0xC8]
	push edx
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	mov bl,0x11
	push offset _S_UIUIWINDOW2IMGQU__5
	mov byte ptr [esp+0x15C],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x158],0x12
	cmp dword ptr [_D_G_RM],edi
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea eax,[esp+0x130]
	mov byte ptr [esp+0x158],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x60],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block95

 Block93:
	cmp eax,0x80004002
	je Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov ebx,8
	mov byte ptr [esp+0x144],0x15
	cmp word ptr [esp+0x11C],bx
	jne Block98

 Block96:
	mov eax,dword ptr [esp+0x124]
	xor ecx,ecx
	mov word ptr [esp+0x11C],cx
	cmp eax,edi
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea edx,[esp+0x11C]
	push edx
	call ebp

 Block99:
	mov byte ptr [esp+0x144],0x16
	cmp word ptr [esp+0xBC],bx
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0xBC],ax
	mov eax,dword ptr [esp+0xC4]
	cmp eax,edi
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0xBC]
	push ecx
	call ebp

 Block103:
	mov byte ptr [esp+0x144],0x17
	cmp word ptr [esp+0xDC],bx
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0xE4]
	xor edx,edx
	mov word ptr [esp+0xDC],dx
	cmp eax,edi
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea eax,[esp+0xDC]
	push eax
	call ebp

 Block107:
	lea ecx,[esp+0xCC]
	push ecx
	call esi
	lea edx,[esp+0xCC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	lea eax,[esp+0x9C]
	push eax
	mov byte ptr [esp+0x148],0x18
	call esi
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	push edi
	push edi
	lea edx,[esp+0xD4]
	push edx
	lea eax,[esp+0xA8]
	push eax
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	mov bl,0x19
	push offset _S_UIUIWINDOW2IMGQU__4
	mov byte ptr [esp+0x15C],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x158],0x1A
	cmp dword ptr [_D_G_RM],edi
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	lea ecx,[esp+0x120]
	push ecx
	mov byte ptr [esp+0x15C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block116

 Block114:
	cmp eax,0x80004002
	je Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	mov esi,8
	mov byte ptr [esp+0x144],0x1D
	cmp word ptr [esp+0x10C],si
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x114]
	xor edx,edx
	mov word ptr [esp+0x10C],dx
	cmp eax,edi
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea eax,[esp+0x10C]
	push eax
	call ebp

 Block120:
	mov byte ptr [esp+0x144],0x1E
	cmp word ptr [esp+0x9C],si
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0xA4]
	xor ecx,ecx
	mov word ptr [esp+0x9C],cx
	cmp eax,edi
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x9C]
	push edx
	call ebp

 Block124:
	mov byte ptr [esp+0x144],0x1F
	cmp word ptr [esp+0xCC],si
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [esp+0xCC],ax
	mov eax,dword ptr [esp+0xD4]
	cmp eax,edi
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[esp+0xCC]
	push ecx
	call ebp

 Block128:
	mov edi,dword ptr [esp+0x18]
	test edi,edi
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	mov ecx,edi
	call IWzCanvas::Getheight
	shr eax,1
	add eax,0x69
	push eax
	mov ecx,edi
	call IWzCanvas::Getwidth
	shr eax,1
	add eax,0x60
	push eax
	mov ecx,edi
	call IWzCanvas::Getheight
	shr eax,1
	mov edx,0x69
	sub edx,eax
	push edx
	mov ecx,edi
	call IWzCanvas::Getwidth
	mov edx,dword ptr [esp+0x20]
	shr eax,1
	mov ecx,0x60
	sub ecx,eax
	push ecx
	push edx
	call SetRect
	mov dword ptr [esp+0x44],0
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	mov byte ptr [esp+0x14C],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x48]
	push ecx
	push eax
	mov byte ptr [esp+0x150],0x21
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x144],0x20
	test eax,eax
	je Block132

 Block131:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block132:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push edx
	call esi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	lea ecx,[esp+0x1C]
	mov bl,0x22
	push ecx
	mov byte ptr [esp+0x148],bl
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block136

 Block135:
	push eax
	call _com_issue_error

 Block136:
	mov esi,dword ptr [esp+0x44]
	mov byte ptr [esp+0x144],0x23
	test esi,esi
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call IWzCanvas::Getheight
	push eax
	mov ecx,edi
	call IWzCanvas::Getwidth
	push eax
	mov ecx,esi
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x144],bl
	cmp word ptr [esp+0x1C],si
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov byte ptr [esp+0x144],0x20
	cmp word ptr [esp+0x4C],si
	jne Block145

 Block143:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov eax,3
	mov word ptr [esp+0x4C],ax
	mov dword ptr [esp+0x54],0xFF
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x144],0x24
	test ecx,ecx
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	lea edx,[esp+0x4C]
	push edx
	push edi
	push 0
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x144],0x20
	cmp word ptr [esp+0x4C],si
	jne Block151

 Block149:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov ecx,edi
	mov byte ptr [esp+0x144],0x25
	call IWzCanvas::Getwidth
	mov esi,eax
	mov eax,dword ptr [esp+0x2C]
	sub esi,0xF
	cmp eax,1
	jle Block156

 Block153:
	fild dword ptr [esp+0x2C]
	mov dword ptr [esp+0x2C],esi
	lea ebp,[eax-1]
	fstp dword ptr [esp+0x68]

 Block154:
	fild dword ptr [esp+0x2C]
	fdiv dword ptr [esp+0x68]
	fstp dword ptr [esp+0x48]
	fld dword ptr [esp+0x48]
	fadd qword ptr [__real_402e000000000000]
	call __ftol2_sse
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov edi,eax
	call ZArray<long>::InsertBefore
	add dword ptr [esp+0x2C],esi
	sub ebp,1
	mov dword ptr [eax],edi
	jne Block154

 Block155:
	mov ebp,dword ptr [esp+0x14]

 Block156:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block166

 Block157:
	mov edi,0xF
	cmp dword ptr [ebp+eax*4-4],edi
	jle Block166

 Block158:
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov edx,0xFF
	mov dword ptr [esp+0x24],edx
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x144],0x26
	test ecx,ecx
	je Block11

 Block159:
	mov ebp,dword ptr [esp+0x1C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x6C]
	push eax
	push 1
	push edi
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block161

 Block160:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block161:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x144],0x25
	jne Block164

 Block162:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block165:
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x40]
	inc edi
	cmp edi,dword ptr [ebp+ecx*4-4]
	jl Block158

 Block166:
	mov edi,dword ptr [ZImports::_VariantClear]
	xor eax,eax

 Block167:
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x40],eax
	test ebp,ebp
	je Block177

 Block168:
	cmp eax,dword ptr [ebp-4]
	jae Block177

 Block169:
	mov edx,3
	mov esi,0xFF
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],esi
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x144],0x27
	test ecx,ecx
	je Block11

 Block170:
	mov edx,dword ptr [ebp+eax*4]
	mov ebp,dword ptr [esp+0x1C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [esp+0x70]
	push eax
	push 1
	push edx
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block172

 Block171:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block172:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x144],0x25
	jne Block176

 Block173:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block175

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block175:
	mov eax,dword ptr [esp+0x40]
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,dword ptr [esp+0x14]
	inc eax
	jmp Block167

 Block176:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x1C]
	push eax
	call edi
	mov eax,dword ptr [esp+0x40]
	mov ebp,dword ptr [esp+0x14]
	inc eax
	jmp Block167

 Block177:
	lea ecx,[esp+0xAC]
	push ecx
	call esi
	lea edx,[esp+0xAC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	lea eax,[esp+0x8C]
	push eax
	mov byte ptr [esp+0x148],0x28
	call esi
	lea ecx,[esp+0x8C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	lea edx,[esp+0x7C]
	push edx
	mov byte ptr [esp+0x148],0x29
	call esi
	lea eax,[esp+0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	lea ecx,[esp+0xEC]
	push ecx
	mov byte ptr [esp+0x148],0x2A
	call esi
	lea edx,[esp+0xEC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block185

 Block184:
	push eax
	call _com_issue_error

 Block185:
	lea eax,[esp+0x4C]
	mov bl,0x2B
	push eax
	mov byte ptr [esp+0x148],bl
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	mov edx,dword ptr [esp+0x64]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x144],0x2C
	test ecx,ecx
	jne Block189

 Block188:
	push 0x80004003
	call _com_issue_error

 Block189:
	lea eax,[esp+0xAC]
	push eax
	lea edx,[esp+0x90]
	push edx
	lea eax,[esp+0x84]
	push eax
	lea edx,[esp+0xF8]
	push edx
	mov edx,dword ptr [esp+0x54]
	lea eax,[esp+0x5C]
	push eax
	push edx
	lea eax,[esp+0x144]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov esi,8
	cmp word ptr [esp+0x12C],si
	jne Block192

 Block190:
	mov eax,dword ptr [esp+0x134]
	xor ecx,ecx
	mov word ptr [esp+0x12C],cx
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea edx,[esp+0x12C]
	push edx
	call edi

 Block193:
	mov byte ptr [esp+0x144],bl
	cmp word ptr [esp+0x4C],si
	jne Block196

 Block194:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block197:
	mov byte ptr [esp+0x144],0x2A
	cmp word ptr [esp+0xEC],si
	jne Block200

 Block198:
	mov eax,dword ptr [esp+0xF4]
	xor edx,edx
	mov word ptr [esp+0xEC],dx
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea eax,[esp+0xEC]
	push eax
	call edi

 Block201:
	mov byte ptr [esp+0x144],0x29
	cmp word ptr [esp+0x7C],si
	jne Block204

 Block202:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	test eax,eax
	je Block205

 Block203:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block205

 Block204:
	lea edx,[esp+0x7C]
	push edx
	call edi

 Block205:
	mov byte ptr [esp+0x144],0x28
	cmp word ptr [esp+0x8C],si
	jne Block208

 Block206:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea ecx,[esp+0x8C]
	push ecx
	call edi

 Block209:
	mov byte ptr [esp+0x144],0x25
	cmp word ptr [esp+0xAC],si
	jne Block212

 Block210:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx
	test eax,eax
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea eax,[esp+0xAC]
	push eax
	call edi

 Block213:
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x144],0x20
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x144],0x1F
	test eax,eax
	je Block215

 Block214:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block215:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x144],0x17
	test eax,eax
	je Block217

 Block216:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block217:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x144],0xF
	test eax,eax
	je Block219

 Block218:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block219:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x148],0xFFFFFFFF
	call edx

 Block220:
	mov ecx,dword ptr [esp+0x13C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x134
	ret
}
}
// CUIQuestInfo::OnMouseMove
_SUB_EXCEPTION_HANDLER(4291B0)
__SUB_CLASS_THIS(004291B0, __thiscall, 58567,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4291B0
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
	mov eax,dword ptr [edi+0xB14]
	xor esi,esi
	cmp eax,esi
	jl Block17

 Block1:
	cmp eax,4
	jge Block17

 Block2:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x44]
	push eax
	push ecx
	lea ecx,[edi-4]
	call CUIQuestInfo::GetQuestIdxFromMousePos
	cmp eax,esi
	mov edx,dword ptr [edi+0xB14]
	lea ecx,[edi+edx*4+0xB58]
	jl Block16

 Block3:
	mov ecx,dword ptr [ecx]
	cmp ecx,esi
	je Block16

 Block4:
	cmp eax,dword ptr [ecx-4]
	jae Block16

 Block5:
	lea eax,[ecx+eax*8]
	push eax
	lea ecx,[esp+0x20]
	call ZRef<QuestInfo>::_ctor_copy
	mov ebx,dword ptr [esp+0x20]
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+0x3C],esi
	cmp eax,esi
	je Block15

 Block6:
	cmp byte ptr [eax],0
	je Block15

 Block7:
	lea ebp,[ebx+0x30]
	mov ecx,ebp
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block11

 Block8:
	push offset _D_VTMISSING
	lea ecx,[esp+0x28]
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [ebp]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov byte ptr [esp+0x48],1
	call Ztl_bstr_t::_ctor_1
	lea ecx,[esp+0x1C]
	push 0x23
	push ecx
	mov byte ptr [esp+0x4C],2
	call get_basic_font
	add esp,8
	mov byte ptr [esp+0x44],3
	mov ecx,eax
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x44],4
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	add esi,3
	mov byte ptr [esp+0x3C],1
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x3C],0
	call Ztl_variant_t::~Ztl_variant_t

 Block11:
	push offset _D_VTMISSING
	lea ecx,[esp+0x28]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebx+0xC]
	lea ecx,[esp+0x24]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	mov byte ptr [esp+0x48],5
	call Ztl_bstr_t::_ctor_1
	lea edx,[esp+0x1C]
	push 0x16
	push edx
	mov byte ptr [esp+0x4C],6
	call get_basic_font
	add esp,8
	mov byte ptr [esp+0x44],7
	mov ecx,eax
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [esp+0x44],8
	call IWzFont::CalcTextWidth
	add esi,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],5
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x3C],0
	call Ztl_variant_t::~Ztl_variant_t
	cmp esi,0xBC
	jle Block15

 Block14:
	mov ebx,dword ptr [ebx+0xC]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	push ebx
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0x84]
	call CUIToolTip::SetToolTip_String
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZRef<QuestInfo>::~ZRef<QuestInfo>
	jmp Block17

 Block15:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ZRef<QuestInfo>::~ZRef<QuestInfo>

 Block16:
	lea ecx,[edi+0x84]
	call CUIToolTip::ClearToolTip

 Block17:
	xor eax,eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 8
}
}
// CUIQuestInfo::InsertQuestInfo
_SUB_EXCEPTION_HANDLER(432690)
__SUB_CLASS_THIS(00432690, __thiscall, 58591,  CUIQuestInfo, void, long, uint16_t, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_FILETIME>, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_432690
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x30],ecx
	xor edi,edi
	mov dword ptr [ebp-0x14],edi
	lea ecx,[ebp-0x44]
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp-0x40],edi
	call ZRef<QuestInfo>::_Alloc
	mov eax,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	lea ecx,[ebp-0x50]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp-0x18],eax
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x4C]
	mov dword ptr [ebp-0x34],edx
	cmp eax,edi
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,edi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov dword ptr [ebp-0x4C],edi

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x4080]
	lea eax,[ecx+0x2148]
	mov dword ptr [ebp-0x38],eax
	mov dword ptr [ebp-0x2C],edx
	call CWvsContext::GetCurFieldID
	mov esi,dword ptr [ebp-0x40]
	mov dx,word ptr [ebp+0xC]
	mov dword ptr [ebp-0x3C],eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x2064]
	mov eax,dword ptr [ebp+0x1C]
	cmp eax,edi
	mov dword ptr [ebp-0x48],ecx
	mov word ptr [esi],dx
	jg Block9

 Block6:
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x6F0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],3
	mov dword ptr [ebp-0x14],1
	call get_int32
	add esp,8

 Block9:
	test byte ptr [ebp-0x14],1
	lea ebx,[esi+8]
	mov dword ptr [ebx],eax
	mov dword ptr [ebp-4],1
	mov edi,8
	je Block14

 Block10:
	cmp word ptr [ebp-0x28],di
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x11C2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],5
	call get_int32
	add esp,8
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x28],di
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov edi,dword ptr [ebp-0x30]
	push 0
	add edi,0xBA4
	push ebx
	mov ecx,edi
	call ZMap<long, long, long>::GetAt
	push 0
	mov ecx,edi
	test eax,eax
	je Block22

 Block21:
	lea eax,[esi+8]
	push eax
	call ZMap<long, long, long>::Insert
	mov ebx,eax
	push 0
	lea eax,[esi+8]
	push eax
	mov ecx,edi
	call ZMap<long, long, long>::Insert
	mov ecx,dword ptr [ebx+0xC]
	inc ecx
	mov dword ptr [eax+0xC],ecx
	jmp Block23

 Block22:
	push ebx
	call ZMap<long, long, long>::Insert
	mov dword ptr [eax+0xC],1

 Block23:
	mov edx,dword ptr [esi+8]
	mov ebx,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp-0x30]
	push edx
	push ebx
	call CUIQuestInfo::IsMinimizedCategory
	test eax,eax
	jne Block88

 Block24:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x671
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],6
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov edi,8
	mov byte ptr [ebp-4],7
	cmp word ptr [eax],di
	jne Block28

 Block27:
	mov eax,dword ptr [eax+8]
	jmp Block29

 Block28:
	mov eax,offset _S___3

 Block29:
	push 0xFFFFFFFF
	lea ecx,[esi+0xC]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x28],di
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov edx,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebp-0x18]
	push edx
	call CQuestMan::IsTimeLimitQuest
	test eax,eax
	je Block36

 Block34:
	cmp ebx,1
	jne Block36

 Block35:
	mov eax,ebx
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov dword ptr [esi+0x24],eax
	push offset _S_TYPE
	mov dword ptr [esi+0x28],0xFFFFFFFF
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],9
	cmp word ptr [eax],di
	jne Block41

 Block40:
	mov eax,dword ptr [eax+8]
	jmp Block42

 Block41:
	mov eax,offset _S___3

 Block42:
	push 0xFFFFFFFF
	lea ecx,[esi+0x30]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x28],di
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0xB
	cmp word ptr [eax],di
	jne Block50

 Block49:
	mov eax,dword ptr [eax+8]
	jmp Block51

 Block50:
	mov eax,offset _S___3

 Block51:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call ZXString<char>::AssignWideStr
	mov bl,0xD
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x28],di
	jne Block54

 Block52:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block58

 Block56:
	cmp byte ptr [eax],0
	je Block58

 Block57:
	lea eax,[ebp-0x14]
	push eax
	push 0xFFFFFFFF
	lea ecx,[esi+0x18]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block58:
	mov ecx,dword ptr [ebp+8]
	mov eax,ecx
	sub eax,0
	je Block70

 Block59:
	sub eax,1
	je Block64

 Block60:
	sub eax,1
	jne Block76

 Block61:
	cmp dword ptr [esi+8],0x64
	mov edi,dword ptr [ebp-0x18]
	jne Block63

 Block62:
	mov dword ptr [esi+4],3
	jmp Block78

 Block63:
	mov ecx,dword ptr [ebp-0x48]
	mov edx,dword ptr [ebp-0x3C]
	mov eax,dword ptr [ebp-0x2C]
	push 0
	push ecx
	mov ecx,dword ptr [ebp-0x38]
	push edx
	mov edx,dword ptr [ebp-0x34]
	push eax
	mov eax,dword ptr [ebp+0xC]
	push ecx
	push edx
	push eax
	mov ecx,edi
	call CQuestMan::GetStartDemand
	mov ecx,dword ptr [eax+0x18]
	mov edx,dword ptr [ebp+0xC]
	push ecx
	push edx
	mov ecx,edi
	call CQuestMan::CheckStartDemand
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFFD
	add eax,3
	mov dword ptr [esi+4],eax
	jmp Block78

 Block64:
	mov eax,dword ptr [ebp+0xC]
	mov edi,dword ptr [ebp-0x18]
	push eax
	mov ecx,edi
	call CQuestMan::IsTimeLimitQuest
	test eax,eax
	je Block66

 Block65:
	mov dword ptr [esi+4],4
	jmp Block67

 Block66:
	mov ecx,dword ptr [ebp-0x38]
	mov edx,dword ptr [ebp-0x34]
	mov eax,dword ptr [ebp+0xC]
	push ecx
	push edx
	push eax
	mov ecx,edi
	call CQuestMan::GetCompleteDemand
	mov ecx,dword ptr [eax+0x18]
	mov edx,dword ptr [ebp+0xC]
	push ecx
	push edx
	mov ecx,edi
	call CQuestMan::CheckCompleteDemand
	neg eax
	sbb eax,eax
	add eax,2
	mov dword ptr [esi+4],eax

 Block67:
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x3C],esp
	test eax,eax
	je Block69

 Block68:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block69:
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,dword ptr [ebp-0x30]
	call CUIQuestInfo::GetQuestSummary
	push eax
	lea ecx,[esi+0x34]
	mov byte ptr [ebp-4],0xE
	call ZArray<ZXString<char>>::operator=
	lea ecx,[ebp-0x2C]
	mov byte ptr [ebp-4],bl
	call ZArray<ZXString<char>>::RemoveAll
	jmp Block72

 Block70:
	mov dword ptr [esi+4],0

 Block71:
	mov edi,dword ptr [ebp-0x18]

 Block72:
	mov ecx,dword ptr [ebp+0xC]
	lea eax,[esi+0x10]
	push eax
	push ecx
	call GetQuestSubInfo
	add esp,8

 Block73:
	mov dword ptr [esi+0x40],2
	mov eax,dword ptr [esi+4]
	cmp eax,2
	jne Block80

 Block74:
	movzx edx,word ptr [esi]
	push edx
	mov ecx,edi
	call CQuestMan::IsDeliveryCompleteQuest
	test eax,eax
	je Block83

 Block75:
	mov dword ptr [esi+0x40],1
	jmp Block83

 Block76:
	cmp ecx,2
	jne Block71

 Block77:
	mov edi,dword ptr [ebp-0x18]

 Block78:
	lea edx,[ebp-0x58]
	push edx
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_FileTimeToSystemTime]
	lea ecx,[ebp-0x2C]
	push 0xCD6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	movzx edx,word ptr [ebp-0x50]
	movzx ecx,word ptr [ebp-0x52]
	mov eax,dword ptr [eax]
	push edx
	movzx edx,word ptr [ebp-0x56]
	push ecx
	movzx ecx,word ptr [ebp-0x58]
	push edx
	push ecx
	push eax
	lea edx,[esi+0x10]
	push edx
	mov byte ptr [ebp-4],0xF
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x2C]
	add esp,0x18
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block73

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block73

 Block80:
	xor ebx,ebx
	cmp eax,ebx
	jne Block83

 Block81:
	mov dword ptr [esi+4],ebx
	movzx eax,word ptr [esi]
	push eax
	mov ecx,edi
	call CQuestMan::IsDeliveryAcceptQuest
	test eax,eax
	je Block83

 Block82:
	mov dword ptr [esi+0x40],ebx

 Block83:
	movzx eax,word ptr [esi]
	add eax,0xFFFFFB50
	mov ecx,0xC7
	cmp ax,cx
	ja Block85

 Block84:
	mov ecx,dword ptr [ebp-0x30]
	lea edx,[ebp-0x44]
	push edx
	add ecx,0xB68
	jmp Block86

 Block85:
	mov ecx,dword ptr [ebp+8]
	mov edx,dword ptr [ebp-0x30]
	lea eax,[ebp-0x44]
	push eax
	lea ecx,[edx+ecx*4+0xB5C]

 Block86:
	push 0xFFFFFFFF
	call ZArray<ZRef<QuestInfo>>::InsertBefore
	mov ecx,eax
	call ZRef<QuestInfo>::op_assign_copy
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block91

 Block89:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block91

 Block90:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block91:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	lea esp,[ebp-0x68]
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
	ret 0x18
}
}
// CUIQuestInfo::IsCategoryButton
_SUB_EXCEPTION_HANDLER(422300)
__SUB_CLASS_THIS(00422300, __thiscall, 58597,  CUIQuestInfo, int32_t, NakedParam<ZRef<QuestInfo>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_422300
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
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	jne Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 8

 Block2:
	mov eax,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov eax,dword ptr [eax+0x9C]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	movzx edx,word ptr [ecx]
	lea esi,[ecx-0x10]
	xor ebx,ebx
	cmp edx,eax
	lea edi,[esi+4]
	push edi
	setl bl
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block7:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 8
}
}
// CUIQuestAlarm::ResetInfo
__SUB_CLASS_THIS(00423B90, __thiscall, 58747,  CUIQuestAlarm, void, uint16_t) {
__asm {

 Block0:
	mov ax,word ptr [esp+4]
	push ebx
	mov ebx,ecx
	test ax,ax
	je Block4

 Block1:
	push esi
	push edi
	movzx esi,ax
	push 0
	lea eax,[esp+0x14]
	lea edi,[ebx+0xB8C]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x18],esi
	call ZMap<long, unsigned long, long>::GetAt
	test eax,eax
	je Block3

 Block2:
	push 0
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x18],esi
	call ZMap<long, unsigned long, long>::Insert
	mov esi,eax
	call timeGetTime
	mov dword ptr [esi+0xC],eax

 Block3:
	pop edi
	pop esi

 Block4:
	cmp dword ptr [ebx+0x14],0
	je Block6

 Block5:
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect

 Block6:
	pop ebx
	ret 4
}
}
// QICompareFunc::operator()
_SUB_EXCEPTION_HANDLER(422110)
__SUB_CLASS_THIS(00422110, __thiscall, 85449,  QICompareFunc, int32_t, NakedParam<ZRef<QuestInfo>>, NakedParam<ZRef<QuestInfo>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_422110
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x1C],1
	test eax,eax
	je Block10

 Block1:
	test ecx,ecx
	je Block10

 Block2:
	mov edx,dword ptr [ecx+8]
	mov esi,dword ptr [eax+8]
	cmp esi,edx
	jle Block4

 Block3:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C],0
	call ZRef<QuestInfo>::~ZRef<QuestInfo>
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<QuestInfo>::~ZRef<QuestInfo>
	jmp Block19

 Block4:
	jne Block6

 Block5:
	mov edi,dword ptr [eax+0x2C]
	cmp edi,dword ptr [ecx+0x2C]
	jg Block3

 Block6:
	cmp esi,edx
	jne Block9

 Block7:
	mov edx,dword ptr [eax+0x2C]
	cmp edx,dword ptr [ecx+0x2C]
	jne Block9

 Block8:
	movzx eax,word ptr [eax]
	mov esi,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	mov ecx,esi
	call CQuestMan::GetStartDemand
	mov ecx,dword ptr [esp+0x30]
	movzx edx,word ptr [ecx]
	mov edi,dword ptr [eax+0x1C]
	push edx
	mov ecx,esi
	call CQuestMan::GetStartDemand
	cmp edi,dword ptr [eax+0x1C]
	ja Block3

 Block9:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C],0
	call ZRef<QuestInfo>::~ZRef<QuestInfo>
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<QuestInfo>::~ZRef<QuestInfo>
	mov eax,1
	jmp Block20

 Block10:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block15

 Block11:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block14

 Block12:
	push edi
	call ebx
	test esi,esi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block14:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0

 Block15:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test ecx,ecx
	je Block19

 Block16:
	lea esi,[ecx-0x10]
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block19

 Block17:
	push edi
	call ebx
	test esi,esi
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block19:
	xor eax,eax

 Block20:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x10
}
}
// CUIQuestInfo::DestroyCategoryButton
__SUB_CLASS_THIS(004224E0, __thiscall, 58570,  CUIQuestInfo, void, long, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	add ebx,ebx
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+ebp*4+0xB74]
	add ebx,ebx
	add ebx,ebx
	mov ecx,dword ptr [eax+ebx+4]
	test ecx,ecx
	je Block3

 Block1:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov esi,dword ptr [edi+ebp*4+0xB74]
	add esi,ebx
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	mov ecx,dword ptr [edi+ebp*4+0xB84]
	mov ecx,dword ptr [ecx+ebx+4]
	test ecx,ecx
	je Block6

 Block4:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov esi,dword ptr [edi+ebp*4+0xB84]
	add esi,ebx
	cmp dword ptr [esi+4],0
	je Block6

 Block5:
	push 0
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block6:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 8
}
}
// CUIQuestInfoDetail::OnChildNotify
__SUB_CLASS_THIS(00421050, __thiscall, 58390,  CUIQuestInfoDetail, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x7D0
	je Block7

 Block1:
	sub eax,1
	je Block4

 Block2:
	cmp dword ptr [esp+8],0x64
	jne Block10

 Block3:
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x20]
	call edx
	ret 0xC

 Block4:
	mov eax,dword ptr [esp+8]
	cmp eax,0x12C
	jb Block10

 Block5:
	cmp eax,0x130
	ja Block10

 Block6:
	mov eax,dword ptr [esp+0xC]
	lea edx,[eax*8]
	push 0
	mov dword ptr [ecx+0xD4],edx
	call CWnd::InvalidateRect
	ret 0xC

 Block7:
	mov eax,dword ptr [esp+8]
	cmp eax,0x12C
	jb Block10

 Block8:
	cmp eax,0x130
	ja Block10

 Block9:
	mov eax,dword ptr [esp+0xC]
	lea edx,[eax*8]
	push 0
	mov dword ptr [ecx+0xC8],edx
	call CWnd::InvalidateRect

 Block10:
	ret 0xC
}
}
// CUIQuestAlarm::IsInQuestAlarmList
__SUB_CLASS_THIS(00421730, __thiscall, 58751,  CUIQuestAlarm, int32_t, uint16_t) {
__asm {

 Block0:
	push esi
	mov si,word ptr [esp+8]
	push edi
	xor edx,edx
	lea esp,[esp]

 Block1:
	mov eax,dword ptr [ecx+0xB08]
	test eax,eax
	je Block6

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block6

 Block3:
	movzx edi,si
	cmp dword ptr [eax+edx*4],edi
	je Block5

 Block4:
	inc edx
	jmp Block1

 Block5:
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block6:
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// CUIQuestInfoDetail::CUIQuestInfoDetail
_SUB_EXCEPTION_HANDLER(424720)
__SUB_CLASS_THIS(00424720, __thiscall, 58386,  CUIQuestInfoDetail, void, NakedParam<ZRef<CUIQuestInfo>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_424720
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
	call CWnd::_ctor_default
	lea eax,[esi+0x80]
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CUIQuestInfoDetail>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIQuestInfoDetail>::ms_pInstance],edi

 Block3:
	mov ecx,dword ptr [esp+0x24]
	int 3// TODO: 	mov dword ptr [esi],offset CUIQuestInfoDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIQuestInfoDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIQuestInfoDetail::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],ecx
	cmp ecx,edi
	je Block5

 Block4:
	add ecx,0xC
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0x100],edi
	lea ecx,[esi+0x104]
	mov byte ptr [esp+0x18],0x14
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB5C],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB70],edi
	mov dword ptr [esi+0xB7C],edi
	mov dword ptr [esi+0xB80],edi
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x28]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x18C
	push 0x128
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],0x19
	call CWnd::CreateWnd
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp dword ptr [esp+0x24],edi
	je Block7

 Block6:
	push edi
	lea ecx,[esp+0x24]
	call ZRef<CUIQuestInfo>::_ReleaseRaw

 Block7:
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
// CCtrlButtonQuestAlarmAuto::SetEnable
__SUB_CLASS_THIS(00421120, __thiscall, 85478,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	call edx
	mov edi,dword ptr [esp+0xC]
	cmp eax,edi
	je Block2

 Block1:
	xor eax,eax
	mov dword ptr [esi+0x4C],eax
	mov dword ptr [esi+0x50],eax
	mov eax,edi
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFFE
	add eax,2
	push eax
	lea ecx,[esi-4]
	call CCtrlButton::ChangeDisplayState

 Block2:
	mov dword ptr [esi+0xAD8],edi
	pop edi
	pop esi
	ret 4
}
}
