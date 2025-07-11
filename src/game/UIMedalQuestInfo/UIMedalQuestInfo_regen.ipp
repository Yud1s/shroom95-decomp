#include "regen.hpp"
// UIMedalQuestInfo.ipp
#include "UIMedalQuestInfo.hpp"

// CUIMedalQuestInfoDetail::OnMouseButton
__SUB_CLASS_THIS(003E1020, __thiscall, 58998,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0xB0]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [edi+0xB0]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [edi+0xB0]
	test esi,esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	pop edi
	pop esi
	pop ecx
	ret 0x10
}
}
// CUIMedalQuestInfo::InsertQuestInfo
_SUB_EXCEPTION_HANDLER(3EA520)
__SUB_CLASS_THIS(003EA520, __thiscall, 59089,  CUIMedalQuestInfo, void, long, uint16_t, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_FILETIME>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EA520
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x28],ecx
	xor ebx,ebx
	lea ecx,[ebp-0x38]
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x34],ebx
	call ZRef<MedalQuestInfo>::_Alloc
	mov eax,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	lea ecx,[ebp-0x30]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp-0x14],eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,ebx
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCurFieldID
	mov cx,word ptr [ebp+0xC]
	mov esi,dword ptr [ebp-0x34]
	push ebx
	mov word ptr [esi],cx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x2C],esp
	push 0x6F0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],2
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],3
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block12

 Block7:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block9:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block10:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x2C],esp
	push 0x1405
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block13

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x24]
	push edx
	call ebx
	jmp Block10

 Block13:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],5
	call get_int32
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x24]
	push ecx
	call ebx

 Block17:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x2C],esp
	push 0x11C2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],6
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],7
	call get_int32
	add esp,8
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp-0x24]
	push edx
	call ebx

 Block23:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x2C],esp
	push 0x1404
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	mov dword ptr [esi+0x30],eax
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[ebp-0x24]
	push ecx
	call ebx

 Block29:
	mov edx,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp-0x28]
	push edx
	mov dword ptr [esi+0x34],0
	lea edi,[esi+0xC]
	call CUIMedalQuestInfo::GetMedalState
	lea ebx,[ecx+0xBA4]
	push 0
	push edi
	mov ecx,ebx
	mov dword ptr [edi],eax
	call ZMap<long, long, long>::GetAt
	push 0
	mov ecx,ebx
	push edi
	test eax,eax
	je Block31

 Block30:
	call ZMap<long, long, long>::Insert
	push 0
	push edi
	mov ecx,ebx
	mov dword ptr [ebp-0x2C],eax
	call ZMap<long, long, long>::Insert
	mov ecx,dword ptr [ebp-0x2C]
	mov edx,dword ptr [ecx+0xC]
	inc edx
	mov dword ptr [eax+0xC],edx
	jmp Block32

 Block31:
	call ZMap<long, long, long>::Insert
	mov dword ptr [eax+0xC],1

 Block32:
	mov ebx,dword ptr [ebp+8]
	cmp ebx,2
	je Block36

 Block33:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esi+8]
	push eax
	push ecx
	mov ecx,dword ptr [ebp-0x28]
	call CUIMedalQuestInfo::IsMinimizedState
	test eax,eax
	je Block36

 Block34:
	lea ecx,[ebp-0x38]
	mov byte ptr [ebp-4],0
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block75

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block75

 Block36:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x2C],esp
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov edi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [eax],di
	jne Block40

 Block39:
	mov eax,dword ptr [eax+8]
	jmp Block41

 Block40:
	mov eax,offset _S___3

 Block41:
	push 0xFFFFFFFF
	lea ecx,[esi+0x10]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],di
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov edx,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ebp-0x14]
	push edx
	call CQuestMan::IsTimeLimitQuest
	test eax,eax
	je Block48

 Block46:
	cmp ebx,1
	jne Block48

 Block47:
	mov eax,ebx
	jmp Block49

 Block48:
	xor eax,eax

 Block49:
	mov dword ptr [esi+0x24],eax
	mov eax,0x20
	mov dword ptr [esi+0x28],0xFFFFFFFF
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
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0xD
	cmp word ptr [eax],di
	jne Block53

 Block52:
	mov eax,dword ptr [eax+8]
	jmp Block54

 Block53:
	mov eax,offset _S___3

 Block54:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-0x2C],0
	call ZXString<char>::AssignWideStr
	mov bl,0xF
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x24],di
	jne Block57

 Block55:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov edi,dword ptr [ebp-0x2C]
	test edi,edi
	je Block61

 Block59:
	cmp byte ptr [edi],0
	je Block61

 Block60:
	lea eax,[ebp-0x2C]
	push eax
	push 0xFFFFFFFF
	lea ecx,[esi+0x18]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block61:
	mov eax,dword ptr [ebp+8]
	cmp eax,1
	jne Block76

 Block62:
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block64

 Block63:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block64:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [ebp-0x28]
	call CUIMedalQuestInfo::GetQuestSummary
	push eax
	lea ecx,[esi+0x44]
	mov byte ptr [ebp-4],0x10
	call ZArray<ZXString<char>>::operator=
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],bl
	call ZArray<ZXString<char>>::RemoveAll
	mov edx,dword ptr [ebp+0x10]
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block66:
	mov ecx,dword ptr [ebp-0x28]
	lea eax,[ebp-0x14]
	push eax
	call CUIMedalQuestInfo::GetResignedTogetherQuests
	push eax
	lea ecx,[esi+0x40]
	mov byte ptr [ebp-4],0x11
	call ZArray<long>::operator=
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],bl
	call ZArray<long>::RemoveAll

 Block67:
	mov ecx,dword ptr [ebp+0xC]
	lea eax,[esi+0x14]
	push eax
	push ecx
	call GetQuestSubInfo
	mov eax,dword ptr [esi+8]
	mov ecx,dword ptr [ebp-0x28]
	add esp,8
	lea ecx,[ecx+eax*4+0xB68]

 Block68:
	lea edx,[ebp-0x38]
	push edx
	push 0xFFFFFFFF
	call ZArray<ZRef<MedalQuestInfo>>::InsertBefore
	mov ecx,eax
	call ZRef<MedalQuestInfo>::op_assign_copy
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block70

 Block69:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block70:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block73

 Block71:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block73

 Block72:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block73:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	lea esp,[ebp-0x58]
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
	ret 0x14

 Block76:
	cmp eax,2
	jne Block67

 Block77:
	lea ecx,[ebp-0x48]
	push ecx
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_FileTimeToSystemTime]
	lea eax,[ebp-0x14]
	push 0xCD6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	movzx ecx,word ptr [ebp-0x40]
	movzx edx,word ptr [ebp-0x42]
	mov eax,dword ptr [eax]
	push ecx
	movzx ecx,word ptr [ebp-0x46]
	push edx
	movzx edx,word ptr [ebp-0x48]
	push ecx
	push edx
	push eax
	lea eax,[esi+0x14]
	push eax
	mov byte ptr [ebp-4],0x12
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0x18
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov ecx,dword ptr [ebp+0x14]
	mov dword ptr [esi+0x38],ecx
	mov edx,dword ptr [ebp+0x18]
	mov ecx,dword ptr [ebp-0x28]
	mov dword ptr [esi+0x3C],edx
	add ecx,0xB78
	jmp Block68
}
}
// InsertionSort_ZRef_MedalQuestInfo__QIBaseCompareFunc_
_SUB_EXCEPTION_HANDLER(3E23D0)
__SUB(003E23D0, __cdecl, 86637,  void, ZArray<ZRef<MedalQuestInfo> >&, int32_t, int32_t, QIBaseCompareFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E23D0
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
	call QIBaseCompareFunc::operator()
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
// Median_ZRef_MedalQuestInfo__QIBaseCompareFunc_
__SUB(003E2830, __cdecl, 86643,  const ZRef<MedalQuestInfo>&, const ZRef<MedalQuestInfo>&, const ZRef<MedalQuestInfo>&, const ZRef<MedalQuestInfo>&, QIBaseCompareFunc&) {
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
	call QIBaseCompareFunc::operator()
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
	call QIBaseCompareFunc::operator()
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
	call QIBaseCompareFunc::operator()
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
	call QIBaseCompareFunc::operator()
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
// CUIMedalQuestInfoDetail::SetLayout
_SUB_EXCEPTION_HANDLER(3E2F50)
__SUB_CLASS_THIS0(003E2F50, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E2F50
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
	mov ecx,dword ptr [esi+0xA4]
	test ecx,ecx
	je Block3

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xA4],0
	lea edi,[esi+0xA0]
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
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block13

 Block7:
	add eax,8
	je Block13

 Block8:
	lea edi,[eax-8]
	test edi,edi
	je Block10

 Block9:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block12:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xD5
	push 0x80
	push 0x11C
	push 8
	push 1
	push 0x7D0
	push esi
	call eax
	mov ecx,dword ptr [esi+0xA4]
	mov dword ptr [ecx+0x34],0x111
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret

 Block13:
	xor edi,edi
	jmp Block10
}
}
// CUIMedalQuestInfo::TryShowRecentlyUpdatedQuest
_SUB_EXCEPTION_HANDLER(3EA150)
__SUB_CLASS_THIS0(003EA150, __thiscall, 59097,  CUIMedalQuestInfo, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EA150
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
	mov eax,dword ptr [ebx+0xB1C]
	mov ecx,dword ptr [ebx+eax*4+0xB68]
	lea eax,[ebx+eax*4+0xB68]
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
	call CUIMedalQuestInfo::IsStateButton
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
	mov edx,dword ptr [ebx+0xB1C]
	push ecx
	push edx
	mov ecx,ebx
	call CUIMedalQuestInfo::ShowQuestInfoDetail
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
// CUIMedalQuestInfo::IsKindOf
__SUB_CLASS_THIS(003E6710, __thiscall, 59104,  CUIMedalQuestInfo, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIMedalQuestInfo::ms_RTTI_CUIMedalQuestInfo
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
// CUIMedalQuestInfo::OnTabChanged
__SUB_CLASS_THIS(003EE2D0, __thiscall, 59087,  CUIMedalQuestInfo, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB1C]
	mov dword ptr [esi+0xB18],eax
	test eax,eax
	je Block2

 Block1:
	dec eax
	jmp Block3

 Block2:
	mov eax,0x64

 Block3:
	mov dword ptr [esi+0xB1C],eax
	cmp ecx,eax
	je Block5

 Block4:
	mov dword ptr [esi+0xB20],0xFFFFFFFF

 Block5:
	push 1
	mov ecx,esi
	call CUIMedalQuestInfo::ResetInfo
	cmp dword ptr [esi+0xB1C],3
	ja Block7

 Block6:
	mov ecx,esi
	call CUIMedalQuestInfo::TryShowTopQuest

 Block7:
	pop esi
	ret 4
}
}
// CUIMedalQuestInfo::GetSelect
_SUB_EXCEPTION_HANDLER(3E3280)
__SUB_CLASS_THIS(003E3280, __thiscall, 59091,  CUIMedalQuestInfo, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E3280
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
	mov eax,dword ptr [ebx+0xB1C]
	lea eax,[ebx+eax*4+0xB68]
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block2

 Block1:
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x14],ecx

 Block3:
	mov eax,dword ptr [ebx+0xB14]
	mov ebp,dword ptr [eax+0x38]
	cmp ebp,dword ptr [esp+0x14]
	jge Block14

 Block4:
	mov edx,dword ptr [ebx+0xB1C]
	mov eax,dword ptr [ebx+edx*4+0xB68]
	mov esi,dword ptr [eax+ebp*8+4]
	lea eax,[eax+ebp*8]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block6

 Block5:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],0
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block8

 Block7:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov ecx,ebx
	call CUIMedalQuestInfo::IsStateButton
	mov ecx,dword ptr [esi+0x34]
	mov edx,dword ptr [esp+0x34]
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFE4
	add eax,0x2E
	cmp ecx,edx
	jge Block10

 Block9:
	add ecx,eax
	cmp edx,ecx
	jl Block16

 Block10:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block13

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block13:
	inc ebp
	cmp ebp,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0
	jl Block4

 Block14:
	or eax,0xFFFFFFFF

 Block15:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4

 Block16:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block19:
	mov eax,ebp
	jmp Block15
}
}
// CUIMedalQuestInfo::SetBackFont
__SUB_CLASS_THIS(003E1490, __thiscall, 59080,  CUIMedalQuestInfo, void, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB4C]
	mov eax,dword ptr [esi+ebx*8+0xB3C]
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
	mov eax,dword ptr [esi+0xB4C]
	mov esi,dword ptr [esi+ebx*8+0xB40]
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
// CUIMedalQuestInfoDetail::OnSetFocus
__SUB_CLASS_THIS(003E1950, __thiscall, 58996,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIMedalQuestInfoDetail::OnButtonClicked
__SUB_CLASS_THIS(003E84D0, __thiscall, 58994,  CUIMedalQuestInfoDetail, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,0x10
	sub eax,0x7D2
	push esi
	push edi
	je Block7

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	jne Block8

 Block3:
	mov ecx,dword ptr [ecx+0x84]
	lea eax,[esp+8]
	push eax
	call CUIMedalQuestInfo::GetQuestInfo
	mov eax,dword ptr [eax+4]
	movzx esi,word ptr [eax]
	lea ecx,[esp+8]
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0xCDB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block8

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::ResignQuest
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block5:
	mov edi,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	test edi,edi
	je Block8

 Block6:
	mov ecx,dword ptr [ecx+0x84]
	lea edx,[esp+0x10]
	push edx
	call CUIMedalQuestInfo::GetQuestInfo
	mov eax,dword ptr [eax+4]
	movzx esi,word ptr [eax]
	lea ecx,[esp+0x10]
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	push esi
	mov ecx,edi
	call CQuestMan::GetStartDemand
	mov eax,dword ptr [eax+0x18]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 1
	push eax
	push esi
	call CWvsContext::StartQuest
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block7:
	mov ecx,dword ptr [ecx+0x84]
	push 0
	call CUIMedalQuestInfo::ToggleDetail

 Block8:
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIMedalQuestInfoDetail::OnMouseMove
_SUB_EXCEPTION_HANDLER(3E6380)
__SUB_CLASS_THIS(003E6380, __thiscall, 58997,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E6380
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
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push eax
	push ecx
	lea edx,[esi+0xB1C]
	push edx
	call PtInRect
	test eax,eax
	je Block9

 Block1:
	mov eax,dword ptr [esi+0x88]
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	add eax,0x10
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CQuestMan::GetSeriesQuest
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block3

 Block2:
	xor ebp,ebp
	jmp Block4

 Block3:
	mov ebp,dword ptr [eax-4]

 Block4:
	lea ecx,[esp+0x10]
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [esi+0x88]
	mov edi,dword ptr [eax+0x28]
	mov dword ptr [esp+0x10],0
	lea ecx,[esp+0x14]
	push 0x11A1
	push ecx
	mov dword ptr [esp+0x28],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [eax]
	push ebp
	push edi
	push edx
	lea eax,[esp+0x1C]
	push offset _S_SDD__1
	push eax
	mov byte ptr [esp+0x34],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov edx,dword ptr [esi]
	mov edi,dword ptr [esp+0x10]
	mov eax,dword ptr [edx+0x30]
	push edi
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x30]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x30]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0xD4]
	call CUIToolTip::SetToolTip_String
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block8

 Block7:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,1
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 8

 Block9:
	lea ecx,[esi+0xD4]
	call CUIToolTip::ClearToolTip
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 8
}
}
// ZSort_ZRef_MedalQuestInfo__QICategoryCompareFunc_
__SUB(003E8F40, __cdecl, 86657,  void, ZArray<ZRef<MedalQuestInfo> >&, NakedParam<QICategoryCompareFunc>) {
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
	call ZSortHelper<ZRef<MedalQuestInfo>, QICategoryCompareFunc>::call_0
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
	call ZSortHelper<ZRef<MedalQuestInfo>, QICategoryCompareFunc>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// QICategoryCompareFunc::operator()
_SUB_EXCEPTION_HANDLER(3E1A80)
__SUB_CLASS_THIS(003E1A80, __thiscall, 86627,  QICategoryCompareFunc, int32_t, NakedParam<ZRef<MedalQuestInfo>>, NakedParam<ZRef<MedalQuestInfo>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E1A80
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
	je Block7

 Block1:
	test ecx,ecx
	je Block7

 Block2:
	mov ecx,dword ptr [ecx+0xC]
	mov edx,dword ptr [eax+0xC]
	cmp edx,ecx
	jle Block4

 Block3:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C],0
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	jmp Block16

 Block4:
	jne Block6

 Block5:
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

 Block6:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x1C],0
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	mov eax,1
	jmp Block17

 Block7:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block12

 Block8:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block11

 Block9:
	push edi
	call ebx
	test esi,esi
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block11:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0

 Block12:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test ecx,ecx
	je Block16

 Block13:
	lea esi,[ecx-0x10]
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block16

 Block14:
	push edi
	call ebx
	test esi,esi
	je Block16

 Block15:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block16:
	xor eax,eax

 Block17:
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
// CUIMedalQuestInfo::GetRTTI
__SUB_CLASS_THIS0(003E66D0, __thiscall, 59103,  CUIMedalQuestInfo, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIMedalQuestInfo::ms_RTTI_CUIMedalQuestInfo
	ret
}
}
// CUIMedalQuestInfo::GetMedalState
__SUB_CLASS_THIS(003E0F80, __thiscall, 59091,  CUIMedalQuestInfo, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0
	je Block6

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	je Block4

 Block3:
	or eax,0xFFFFFFFF
	ret 4

 Block4:
	mov eax,3
	ret 4

 Block5:
	xor eax,eax
	ret 4

 Block6:
	mov eax,1
	ret 4
}
}
// CUIMedalQuestInfoDetail::Update
__SUB_CLASS_THIS0(003E85C0, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call CWnd::Update
	call dword ptr [ZImports::_timeGetTime]
	mov edi,eax
	mov eax,dword ptr [esi+0xC8]
	add eax,0x1F4
	cmp eax,edi
	jge Block2

 Block1:
	mov ecx,esi
	call CUIMedalQuestInfoDetail::DrawTimeText
	mov dword ptr [esi+0xC8],edi

 Block2:
	mov ecx,dword ptr [esi+0xD4]
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
// CUIMedalQuestInfo::GetQuestDesc
_SUB_EXCEPTION_HANDLER(3E9AC0)
__SUB_CLASS_THIS(003E9AC0, __thiscall, 59082,  CUIMedalQuestInfo, ZArray<ZXString<char> >, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E9AC0
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
// CUIMedalQuestInfoDetail::ResetInfo
_SUB_EXCEPTION_HANDLER(3E9830)
__SUB_CLASS_THIS0(003E9830, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E9830
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
	call CUIMedalQuestInfo::GetQuestInfo
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0x24],0
	call ZRef<MedalQuestInfo>::op_assign_copy
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
	call CUIMedalQuestInfoDetail::SetLayout
	mov ecx,dword ptr [esi+0x94]
	test ecx,ecx
	je Block7

 Block6:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax

 Block7:
	mov ecx,dword ptr [esi+0x9C]
	test ecx,ecx
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax

 Block9:
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetNPC
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetGauge_SeriesQuest
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetScrollBar
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetButton
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetTimer
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [TSingleton<CUIMedalQuestInfo>::ms_pInstance]
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
// Partition_ZRef_MedalQuestInfo__QIBaseCompareFunc_
__SUB(003E2970, __cdecl, 86645,  int32_t, ZArray<ZRef<MedalQuestInfo> >&, int32_t, int32_t, const ZRef<MedalQuestInfo>&, QIBaseCompareFunc&) {
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
	call QIBaseCompareFunc::operator()
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
	call QIBaseCompareFunc::operator()
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
// CUIMedalQuestInfoDetail::OnChildNotify
__SUB_CLASS_THIS(003E0F30, __thiscall, 58993,  CUIMedalQuestInfoDetail, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x7D0
	je Block3

 Block1:
	cmp dword ptr [esp+8],0x64
	jne Block6

 Block2:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax
	ret 0xC

 Block3:
	mov eax,dword ptr [esp+8]
	cmp eax,0x12C
	jb Block6

 Block4:
	cmp eax,0x130
	ja Block6

 Block5:
	mov edx,dword ptr [esp+0xC]
	lea eax,[edx*8]
	push 0
	mov dword ptr [ecx+0xA8],eax
	call CWnd::InvalidateRect

 Block6:
	ret 0xC
}
}
// CUIMedalQuestInfo::ToggleState
__SUB_CLASS_THIS(003E1440, __thiscall, 59095,  CUIMedalQuestInfo, void, long, long, int32_t) {
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
	call CUIMedalQuestInfo::IsMinimizedState
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block3

 Block1:
	test eax,eax
	je Block5

 Block2:
	jmp Block4

 Block3:
	test eax,eax
	jne Block5

 Block4:
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

 Block5:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// Median_ZRef_MedalQuestInfo__QICategoryCompareFunc_
__SUB(003E25D0, __cdecl, 86639,  const ZRef<MedalQuestInfo>&, const ZRef<MedalQuestInfo>&, const ZRef<MedalQuestInfo>&, const ZRef<MedalQuestInfo>&, QICategoryCompareFunc&) {
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
	call QICategoryCompareFunc::operator()
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
	call QICategoryCompareFunc::operator()
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
	call QICategoryCompareFunc::operator()
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
	call QICategoryCompareFunc::operator()
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
// CUIMedalQuestInfo::ShowQuestInfoDetail
_SUB_EXCEPTION_HANDLER(3E9F90)
__SUB_CLASS_THIS(003E9F90, __thiscall, 59079,  CUIMedalQuestInfo, int32_t, long, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E9F90
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
	mov esi,dword ptr [esp+0x3C]
	test si,si
	je Block26

 Block1:
	mov ebp,dword ptr [esp+0x38]
	cmp ebp,dword ptr [edi+0xB1C]
	je Block3

 Block2:
	mov ecx,dword ptr [edi+0xB0C]
	lea eax,[ebp+1]
	push eax
	call CCtrlTab::SetTab

 Block3:
	lea ecx,[esp+0x20]
	push ecx
	push esi
	mov ecx,edi
	call CUIMedalQuestInfo::GetQuestState
	push eax
	mov ecx,edi
	call CUIMedalQuestInfo::GetMedalState
	mov esi,eax
	push esi
	push ebp
	mov dword ptr [esp+0x1C],esi
	call CUIMedalQuestInfo::IsMinimizedState
	push 1
	push esi
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x24],eax
	call CUIMedalQuestInfo::ToggleState
	xor ebx,ebx

 Block4:
	mov eax,dword ptr [edi+ebp*4+0xB68]
	mov dword ptr [esp+0x38],ebx
	test eax,eax
	je Block24

 Block5:
	cmp ebx,dword ptr [eax-4]
	jae Block24

 Block6:
	cmp ebp,4
	ja Block19

 Block7:
	mov edx,eax
	mov esi,dword ptr [edx+ebx*8+4]
	lea eax,[edx+ebx*8]
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block9

 Block8:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x38],0
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block11

 Block10:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,edi
	call CUIMedalQuestInfo::IsStateButton
	test eax,eax
	je Block17

 Block12:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test esi,esi
	je Block19

 Block13:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block16

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block16:
	mov ebx,dword ptr [esp+0x38]
	mov esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0
	inc ebx
	jmp Block4

 Block17:
	mov cx,word ptr [esp+0x3C]
	cmp word ptr [esi],cx
	je Block20

 Block18:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>

 Block19:
	mov esi,dword ptr [esp+0x14]
	inc ebx
	jmp Block4

 Block20:
	push ebx
	mov ecx,edi
	call CUIMedalQuestInfo::SetSelect
	cmp dword ptr [edi+0xB80],0
	je Block22

 Block21:
	mov ecx,dword ptr [TSingleton<CUIMedalQuestInfoDetail>::ms_pInstance]
	call CUIMedalQuestInfoDetail::ResetInfo

 Block22:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	mov eax,1

 Block23:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8

 Block24:
	cmp dword ptr [esp+0x18],0
	je Block26

 Block25:
	push 0
	push esi
	push ebp
	mov ecx,edi
	call CUIMedalQuestInfo::ToggleState

 Block26:
	xor eax,eax
	jmp Block23
}
}
// DownHeap_ZRef_MedalQuestInfo__QIBaseCompareFunc_
_SUB_EXCEPTION_HANDLER(3E2CA0)
__SUB(003E2CA0, __cdecl, 86649,  void, ZArray<ZRef<MedalQuestInfo> >&, int32_t, int32_t, int32_t, QIBaseCompareFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E2CA0
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
	call QIBaseCompareFunc::operator()
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
	call QIBaseCompareFunc::operator()
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
	call ZRef<MedalQuestInfo>::op_assign_copy
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
// CUIMedalQuestInfo::~CUIMedalQuestInfo
__SUB_CLASS_THIS0(005CCC50, __thiscall, 59071,  CUIMedalQuestInfo, void) {
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
// CUIMedalQuestInfo::OnCreate
_SUB_EXCEPTION_HANDLER(3EC630)
__SUB_CLASS_THIS(003EC630, __thiscall, 59072,  CUIMedalQuestInfo, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EC630
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x18],ebx
	push 1
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x60],esp
	push 0x48
	push offset _S_UIUIWINDOW2IMGTI__12
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
	mov ecx,ebx
	call CUIWnd::OnCreate_1
	lea esi,[ebx+0xB94]
	mov edi,4
	lea ecx,[ecx]

 Block1:
	lea ecx,[ebp+0x4B]
	push ecx
	push 2
	lea ecx,[esi-0x10]
	call ZArray<ZRef<CCtrlButton>>::_Alloc
	lea edx,[ebp+0x4B]
	push edx
	push 2
	mov ecx,esi
	call ZArray<ZRef<CCtrlButton>>::_Alloc
	add esi,4
	sub edi,1
	jne Block1

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push eax
	call esi
	lea ecx,[ebp+0x24]
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
	lea edx,[ebp+0x34]
	push edx
	mov dword ptr [ebp-4],0
	call esi
	lea eax,[ebp+0x34]
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
	push 0
	push 0
	lea ecx,[ebp+0x24]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0xCC1
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],2
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[ebp+8]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block14

 Block9:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x44]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [ebp+0x44]
	mov edi,eax
	mov eax,dword ptr [ebx+0xB34]
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov dword ptr [ebx+0xB34],edi
	test esi,esi
	jge Block16

 Block12:
	cmp esi,0x80004002
	je Block16

 Block13:
	push esi
	call _com_issue_error

 Block14:
	mov eax,dword ptr [ebx+0xB34]
	test eax,eax
	je Block16

 Block15:
	mov dword ptr [ebx+0xB34],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp+8],di
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[ebp+8]
	push ecx
	call esi

 Block20:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x34],di
	jne Block23

 Block21:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[ebp+0x34]
	push eax
	call esi

 Block24:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x24],di
	jne Block27

 Block25:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[ebp+0x24]
	push edx
	call esi

 Block28:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x34]
	push eax
	call esi
	lea ecx,[ebp+0x34]
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
	lea edx,[ebp+0x24]
	push edx
	mov dword ptr [ebp-4],4
	call esi
	lea eax,[ebp+0x24]
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
	push 0
	push 0
	lea ecx,[ebp+0x34]
	push ecx
	lea edx,[ebp+0x24]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGTI__11
	mov byte ptr [ebp-4],5
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[ebp+8]
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block40

 Block35:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx+0xB38]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov edi,ecx
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	mov dword ptr [ebx+0xB38],edi
	test esi,esi
	jge Block42

 Block38:
	cmp esi,0x80004002
	je Block42

 Block39:
	push esi
	call _com_issue_error

 Block40:
	mov eax,dword ptr [ebx+0xB38]
	test eax,eax
	je Block42

 Block41:
	mov dword ptr [ebx+0xB38],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	cmp word ptr [ebp+8],8
	mov byte ptr [ebp-4],5
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov edi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp+0x24],di
	jne Block49

 Block47:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x34],di
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x34]
	push eax
	call esi
	lea ecx,[ebp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea edx,[ebp+0x24]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	push 0
	push 0
	lea ecx,[ebp+0x34]
	push ecx
	lea edx,[ebp+0x24]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGTI__10
	mov byte ptr [ebp-4],9
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xA
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea eax,[ebp+8]
	mov byte ptr [ebp-4],9
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block66

 Block61:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx+0xB54]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov edi,ecx
	test eax,eax
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block63:
	mov dword ptr [ebx+0xB54],edi
	test esi,esi
	jge Block68

 Block64:
	cmp esi,0x80004002
	je Block68

 Block65:
	push esi
	call _com_issue_error

 Block66:
	mov eax,dword ptr [ebx+0xB54]
	test eax,eax
	je Block68

 Block67:
	mov dword ptr [ebx+0xB54],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	cmp word ptr [ebp+8],8
	mov byte ptr [ebp-4],9
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov esi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x24],si
	jne Block75

 Block73:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x34],si
	jne Block79

 Block77:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x34]
	push eax
	call esi
	lea ecx,[ebp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	lea edx,[ebp+0x24]
	push edx
	mov dword ptr [ebp-4],0xC
	call esi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	push 0
	push 0
	lea ecx,[ebp+0x34]
	push ecx
	lea edx,[ebp+0x24]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGTI__9
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea eax,[ebp+8]
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block92

 Block87:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx+0xB58]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov edi,ecx
	test eax,eax
	je Block89

 Block88:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block89:
	mov dword ptr [ebx+0xB58],edi
	test esi,esi
	jge Block94

 Block90:
	cmp esi,0x80004002
	je Block94

 Block91:
	push esi
	call _com_issue_error

 Block92:
	mov eax,dword ptr [ebx+0xB58]
	test eax,eax
	je Block94

 Block93:
	mov dword ptr [ebx+0xB58],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	cmp word ptr [ebp+8],8
	mov byte ptr [ebp-4],0xD
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov edi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x24],di
	jne Block101

 Block99:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	or esi,0xFFFFFFFF
	mov dword ptr [ebp-4],esi
	cmp word ptr [ebp+0x34],di
	jne Block105

 Block103:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	xor edi,edi
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-0x20],edi
	mov dword ptr [ebp-0x24],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],0x10
	cmp eax,edi
	je Block108

 Block107:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block109

 Block108:
	xor eax,eax

 Block109:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [ebp-4],esi
	test eax,eax
	je Block119

 Block110:
	lea esi,[eax+8]
	test esi,esi
	je Block119

 Block111:
	add esi,0xFFFFFFF8
	test esi,esi
	je Block113

 Block112:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block113:
	mov eax,dword ptr [ebx+0xB0C]
	mov dword ptr [ebx+0xB0C],esi
	test eax,eax
	je Block117

 Block114:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block117

 Block115:
	lea edx,[esi+4]
	push edx
	call edi
	test esi,esi
	je Block117

 Block116:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block117:
	mov ecx,dword ptr [ebx+0xB0C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp-0x24]
	push edx
	push 0
	push 0x12C
	push 0x1A
	push 9
	push 1
	push 0x7D0
	push ebx
	call eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x34]
	push ecx
	call esi
	lea edx,[ebp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block120

 Block118:
	push eax
	call _com_issue_error

 Block119:
	xor esi,esi
	jmp Block113

 Block120:
	lea eax,[ebp+0x24]
	push eax
	mov dword ptr [ebp-4],0x11
	call esi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block122

 Block121:
	push eax
	call _com_issue_error

 Block122:
	push 0
	push 0
	lea edx,[ebp+0x34]
	push edx
	lea eax,[ebp+0x24]
	push eax
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	mov bl,0x12
	push offset _S_UIUIWINDOW2IMGTI__8
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x13
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	lea ecx,[ebp-0x34]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x44],0
	test eax,eax
	je Block128

 Block125:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+4]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+4]
	mov dword ptr [ebp+0x44],ecx
	test eax,eax
	jge Block128

 Block126:
	cmp eax,0x80004002
	je Block128

 Block127:
	push eax
	call _com_issue_error

 Block128:
	mov edi,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x34],di
	jne Block131

 Block129:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x24],di
	jne Block135

 Block133:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x34],di
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	lea edx,[ebp+8]
	push edx
	call esi
	lea eax,[ebp+8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block142

 Block141:
	push eax
	call _com_issue_error

 Block142:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x19
	call esi
	lea edx,[ebp-0x1C]
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
	push 0
	push 0
	lea eax,[ebp+8]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGTI__7
	mov byte ptr [ebp-4],0x1A
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1B
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	lea edx,[ebp-0x44]
	mov byte ptr [ebp-4],0x1A
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+4],edi
	test eax,eax
	je Block150

 Block147:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x1C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x1C]
	mov edi,ecx
	mov dword ptr [ebp+4],edi
	test eax,eax
	jge Block150

 Block148:
	cmp eax,0x80004002
	je Block150

 Block149:
	push eax
	call _com_issue_error

 Block150:
	mov esi,8
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x44],si
	jne Block153

 Block151:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x1C],si
	jne Block157

 Block155:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+8],si
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [ebp+0x1C],0
	jmp Block166

 Block161:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov dword ptr [ebp+0x1C],0
	jmp Block166

 Block165:
	mov edi,dword ptr [ebp+4]

 Block166:
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edx,dword ptr [ebp+0x1C]
	mov dword ptr [ebp+0x20],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push edx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x21
	test edi,edi
	je Block7

 Block167:
	lea eax,[ebp-0x54]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x20
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x22
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x4C],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block172

 Block168:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
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
	and ebx,dword ptr [ebp]
	test eax,eax
	je Block170

 Block169:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block170:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block172

 Block171:
	cmp edi,0x80004002
	jne Block193

 Block172:
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [ebp+0x1C]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x23
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x24
	test ecx,ecx
	je Block7

 Block173:
	lea edx,[ebp+0x50]
	push edx
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x25
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x20],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block178

 Block174:
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
	je Block176

 Block175:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block176:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block178

 Block177:
	cmp edi,0x80004002
	jne Block193

 Block178:
	mov edi,dword ptr [ebp+0x18]
	mov ecx,dword ptr [edi+0xB0C]
	mov byte ptr [ebp-4],0x26
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0x50],si
	jne Block181

 Block179:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block182:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x54],si
	jne Block185

 Block183:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	test eax,eax
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block186:
	mov eax,dword ptr [ebp+0x1C]
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x1C],eax
	jl Block165

 Block187:
	mov eax,dword ptr [edi+0xB0C]
	lea ecx,[ebp+0x4B]
	push ecx
	add edi,0xB4C
	push esi
	mov ecx,edi
	mov dword ptr [eax+0x34],1
	mov dword ptr [eax+0x38],0x31
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	mov bl,0x27

 Block188:
	lea edx,[ebp+0x60]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push 0
	add ecx,esi
	push ecx
	push eax
	mov byte ptr [ebp-4],bl
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block190

 Block189:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block190:
	add esi,4
	cmp esi,0x20
	jl Block188

 Block191:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block194

 Block192:
	push eax
	call _com_issue_error

 Block193:
	push edi
	call _com_issue_error

 Block194:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFFFF0000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x28
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,8
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x29
	test eax,eax
	jne Block196

 Block195:
	push 0x80004003
	call _com_issue_error

 Block196:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x20
	jne Block199

 Block197:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	lea edx,[ebp+0x60]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2A
	test eax,eax
	je Block202

 Block201:
	mov ebx,dword ptr [eax]
	jmp Block203

 Block202:
	xor ebx,ebx

 Block203:
	mov eax,8
	mov word ptr [ebp+0x50],ax
	test ebx,ebx
	jne Block205

 Block204:
	xor esi,esi
	jmp Block209

 Block205:
	mov eax,ebx
	lea edx,[eax+2]
	lea esp,[esp]

 Block206:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block206

 Block207:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block209

 Block208:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block209:
	mov dword ptr [ebp+0x58],esi
	test esi,esi
	jne Block212

 Block210:
	test ebx,ebx
	je Block212

 Block211:
	push 0x8007000E
	call _com_issue_error

 Block212:
	lea edx,[ebp+0x50]
	push edx
	push 0xFFFF0000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x2B
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x18]
	mov eax,dword ptr [edi+0xB4C]
	add edi,0xB4C
	add eax,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	jne Block214

 Block213:
	push 0x80004003
	call _com_issue_error

 Block214:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x2A
	jne Block217

 Block215:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block218:
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x20
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
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block228

 Block227:
	push eax
	call _com_issue_error

 Block228:
	lea eax,[ebp+0x50]
	push eax
	push 0xFF00FF00
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x2D
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x10
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2E
	test eax,eax
	jne Block230

 Block229:
	push 0x80004003
	call _com_issue_error

 Block230:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x20
	jne Block233

 Block231:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block234:
	lea ecx,[ebp+0x60]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x2F
	test eax,eax
	je Block236

 Block235:
	mov ebx,dword ptr [eax]
	jmp Block237

 Block236:
	xor ebx,ebx

 Block237:
	mov edx,8
	mov word ptr [ebp+0x50],dx
	test ebx,ebx
	jne Block239

 Block238:
	xor esi,esi
	jmp Block243

 Block239:
	mov eax,ebx
	lea edx,[eax+2]

 Block240:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block240

 Block241:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block243

 Block242:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block243:
	mov dword ptr [ebp+0x58],esi
	test esi,esi
	jne Block246

 Block244:
	test ebx,ebx
	je Block246

 Block245:
	push 0x8007000E
	call _com_issue_error

 Block246:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFF00FF00
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x30
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x18]
	mov eax,dword ptr [edi+0xB4C]
	add edi,0xB4C
	add eax,0x14
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x31
	test eax,eax
	jne Block248

 Block247:
	push 0x80004003
	call _com_issue_error

 Block248:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov ebx,8
	mov byte ptr [ebp-4],0x2F
	cmp word ptr [ebp+0x50],bx
	jne Block251

 Block249:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block252

 Block250:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block252

 Block251:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block252:
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x20
	test esi,esi
	je Block260

 Block253:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block260

 Block254:
	test esi,esi
	je Block260

 Block255:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block257

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block257:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block259

 Block258:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block259:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block260:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block262

 Block261:
	push eax
	call _com_issue_error

 Block262:
	lea edx,[ebp+0x50]
	push edx
	push 0xFF0000FF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	push eax
	mov byte ptr [ebp-4],0x32
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x33
	test eax,eax
	jne Block264

 Block263:
	push 0x80004003
	call _com_issue_error

 Block264:
	mov ecx,eax
	mov byte ptr [ebp-4],0x32
	call IWzFont::Create
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x50],bx
	jne Block267

 Block265:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block268

 Block266:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block268

 Block267:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block268:
	lea eax,[ebp+0x60]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x34
	test eax,eax
	je Block270

 Block269:
	mov ebx,dword ptr [eax]
	jmp Block271

 Block270:
	xor ebx,ebx

 Block271:
	mov ecx,8
	mov word ptr [ebp+0x50],cx
	test ebx,ebx
	jne Block273

 Block272:
	xor esi,esi
	jmp Block277

 Block273:
	mov eax,ebx
	lea edx,[eax+2]
	nop

 Block274:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block274

 Block275:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block277

 Block276:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block277:
	mov dword ptr [ebp+0x58],esi
	test esi,esi
	jne Block280

 Block278:
	test ebx,ebx
	je Block280

 Block279:
	push 0x8007000E
	call _com_issue_error

 Block280:
	lea eax,[ebp+0x50]
	push eax
	push 0xFF0000FF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x35
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x18]
	mov eax,dword ptr [edi+0xB4C]
	add eax,0x1C
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x36
	test eax,eax
	jne Block282

 Block281:
	push 0x80004003
	call _com_issue_error

 Block282:
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x34
	jne Block285

 Block283:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block286

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block286

 Block285:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block286:
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x20
	test esi,esi
	je Block294

 Block287:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block294

 Block288:
	test esi,esi
	je Block294

 Block289:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block291

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block291:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block293

 Block292:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block293:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block294:
	lea edx,[ebp+0x60]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[edi+0xB3C]
	push esi
	push eax
	mov byte ptr [ebp-4],0x37
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block296

 Block295:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block296:
	lea eax,[ebp+0x60]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xB40]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x38
	mov dword ptr [ebp+0x20],ecx
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block298

 Block297:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block298:
	lea ecx,[ebp+0x60]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xB44]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x39
	mov dword ptr [ebp],ecx
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block300

 Block299:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block300:
	lea edx,[ebp+0x60]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xB48]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x3A
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block302

 Block301:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block302:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block304

 Block303:
	push eax
	call _com_issue_error

 Block304:
	lea edx,[ebp+0x50]
	push edx
	push 0xFF666666
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x3B
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x3C
	test ecx,ecx
	jne Block306

 Block305:
	push 0x80004003
	call _com_issue_error

 Block306:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x20
	jne Block309

 Block307:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block310

 Block308:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block310

 Block309:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block310:
	lea eax,[ebp+0x60]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x3D
	test eax,eax
	je Block312

 Block311:
	mov ebx,dword ptr [eax]
	jmp Block313

 Block312:
	xor ebx,ebx

 Block313:
	mov ecx,8
	mov word ptr [ebp+0x50],cx
	test ebx,ebx
	jne Block315

 Block314:
	xor esi,esi
	jmp Block319

 Block315:
	mov eax,ebx
	lea edx,[eax+2]
	nop

 Block316:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block316

 Block317:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block319

 Block318:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block319:
	mov dword ptr [ebp+0x58],esi
	test esi,esi
	jne Block322

 Block320:
	test ebx,ebx
	je Block322

 Block321:
	push 0x8007000E
	call _com_issue_error

 Block322:
	lea eax,[ebp+0x50]
	push eax
	push 0xFF666666
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x3E
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edx,dword ptr [ebp+0x20]
	mov ecx,dword ptr [edx]
	mov byte ptr [ebp-4],0x3F
	test ecx,ecx
	jne Block324

 Block323:
	push 0x80004003
	call _com_issue_error

 Block324:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov edi,8
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp+0x50],di
	jne Block327

 Block325:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block328

 Block326:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block328

 Block327:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block328:
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x20
	test esi,esi
	je Block336

 Block329:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block336

 Block330:
	test esi,esi
	je Block336

 Block331:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block333

 Block332:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block333:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block335

 Block334:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block335:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block336:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x50]
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
	lea edx,[ebp+0x50]
	push edx
	push 0xFF000000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x40
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov ecx,dword ptr [ecx]
	mov byte ptr [ebp-4],0x41
	test ecx,ecx
	jne Block340

 Block339:
	push 0x80004003
	call _com_issue_error

 Block340:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x50],di
	jne Block343

 Block341:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block344

 Block342:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block344

 Block343:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block344:
	lea ecx,[ebp+0x60]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x42
	test eax,eax
	je Block346

 Block345:
	mov ebx,dword ptr [eax]
	jmp Block347

 Block346:
	xor ebx,ebx

 Block347:
	mov edx,8
	mov word ptr [ebp+0x50],dx
	test ebx,ebx
	jne Block349

 Block348:
	xor esi,esi
	jmp Block353

 Block349:
	mov eax,ebx
	lea edx,[eax+2]

 Block350:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block350

 Block351:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block353

 Block352:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block353:
	mov dword ptr [ebp+0x58],esi
	test esi,esi
	jne Block356

 Block354:
	test ebx,ebx
	je Block356

 Block355:
	push 0x8007000E
	call _com_issue_error

 Block356:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFF000000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x43
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x18]
	mov ecx,dword ptr [edi+0xB48]
	mov byte ptr [ebp-4],0x44
	test ecx,ecx
	jne Block358

 Block357:
	push 0x80004003
	call _com_issue_error

 Block358:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x42
	jne Block361

 Block359:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block362

 Block360:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block362

 Block361:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block362:
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x20
	test esi,esi
	je Block370

 Block363:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block370

 Block364:
	test esi,esi
	je Block370

 Block365:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block367

 Block366:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block367:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block369

 Block368:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block369:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block370:
	lea eax,[ebp+0x60]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xB5C]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x45
	mov dword ptr [ebp+0x20],ecx
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block372

 Block371:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block372:
	lea ecx,[ebp+0x60]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xB60]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x46
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block374

 Block373:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block374:
	lea edx,[ebp+0x60]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xB64]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x47
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block376

 Block375:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block376:
	lea eax,[ebp+0x60]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x48
	test eax,eax
	je Block378

 Block377:
	mov ebx,dword ptr [eax]
	jmp Block379

 Block378:
	xor ebx,ebx

 Block379:
	mov ecx,8
	mov word ptr [ebp+0x50],cx
	test ebx,ebx
	jne Block381

 Block380:
	xor esi,esi
	jmp Block385

 Block381:
	mov eax,ebx
	lea edx,[eax+2]
	mov edi,edi

 Block382:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block382

 Block383:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block385

 Block384:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block385:
	mov dword ptr [ebp+0x58],esi
	test esi,esi
	jne Block388

 Block386:
	test ebx,ebx
	je Block388

 Block387:
	push 0x8007000E
	call _com_issue_error

 Block388:
	lea eax,[ebp+0x50]
	push eax
	push 0xFF333333
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x49
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edx,dword ptr [ebp+0x20]
	mov ecx,dword ptr [edx]
	mov byte ptr [ebp-4],0x4A
	test ecx,ecx
	jne Block390

 Block389:
	push 0x80004003
	call _com_issue_error

 Block390:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x48
	jne Block393

 Block391:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block394

 Block392:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block394

 Block393:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block394:
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x20
	test esi,esi
	je Block402

 Block395:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block402

 Block396:
	test esi,esi
	je Block402

 Block397:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block399

 Block398:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block399:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block401

 Block400:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block401:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block402:
	lea eax,[ebp+0x60]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block404

 Block403:
	mov ebx,dword ptr [eax]
	jmp Block405

 Block404:
	xor ebx,ebx

 Block405:
	mov ecx,8
	mov word ptr [ebp+0x50],cx
	test ebx,ebx
	jne Block407

 Block406:
	xor esi,esi
	jmp Block411

 Block407:
	mov eax,ebx
	lea edx,[eax+2]

 Block408:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block408

 Block409:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block411

 Block410:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC

 Block411:
	mov dword ptr [ebp+0x58],esi
	test esi,esi
	jne Block414

 Block412:
	test ebx,ebx
	je Block414

 Block413:
	push 0x8007000E
	call _com_issue_error

 Block414:
	lea eax,[ebp+0x50]
	push eax
	push 0xFF346E80
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1A25
	mov bl,0x4C
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x18]
	mov ecx,dword ptr [edi+0xB60]
	mov byte ptr [ebp-4],0x4D
	test ecx,ecx
	jne Block416

 Block415:
	push 0x80004003
	call _com_issue_error

 Block416:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x4B
	jne Block419

 Block417:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block420

 Block418:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block420

 Block419:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block420:
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x20
	test esi,esi
	je Block428

 Block421:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block428

 Block422:
	test esi,esi
	je Block428

 Block423:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block425

 Block424:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block425:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block427

 Block426:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block427:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block428:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block430

 Block429:
	push eax
	call _com_issue_error

 Block430:
	lea ecx,[ebp+0x50]
	push ecx
	push 0xFF999999
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x6A8
	mov bl,0x4E
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0xB64]
	mov byte ptr [ebp-4],0x4F
	test ecx,ecx
	jne Block432

 Block431:
	push 0x80004003
	call _com_issue_error

 Block432:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x20
	jne Block435

 Block433:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block436

 Block434:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block436

 Block435:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block436:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x50
	test eax,eax
	je Block438

 Block437:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block439

 Block438:
	xor eax,eax

 Block439:
	push eax
	lea ecx,[edi+0xB10]
	mov byte ptr [ebp-4],0x20
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov ecx,dword ptr [edi+0xB14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xC
	push 0x32
	push 0xF1
	push 8
	push 1
	push 0x7D1
	push edi
	call eax
	mov eax,dword ptr [edi+0xB14]
	mov dword ptr [eax+0x34],0xEA
	mov eax,dword ptr [edi+0xB18]
	test eax,eax
	jl Block442

 Block440:
	cmp eax,4
	jg Block442

 Block441:
	push eax
	jmp Block443

 Block442:
	push 0x64

 Block443:
	mov ecx,dword ptr [edi+0xB0C]
	call CCtrlTab::SetTab
	mov ecx,edi
	call CUIMedalQuestInfo::LoadData
	mov ecx,edi
	call CUIMedalQuestInfo::SetScrollBar
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],edi
	mov eax,dword ptr [ebp+4]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x18
	call edx
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x64]
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
// InsertionSort_ZRef_MedalQuestInfo__QICategoryCompareFunc_
_SUB_EXCEPTION_HANDLER(3E21D0)
__SUB(003E21D0, __cdecl, 86634,  void, ZArray<ZRef<MedalQuestInfo> >&, int32_t, int32_t, QICategoryCompareFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E21D0
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
	call QICategoryCompareFunc::operator()
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
// CUIMedalQuestInfo::OnMouseMove
_SUB_EXCEPTION_HANDLER(3E3060)
__SUB_CLASS_THIS(003E3060, __thiscall, 59076,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E3060
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
	mov ebp,ecx
	mov eax,dword ptr [ebp+0xB18]
	cmp eax,0x64
	jne Block4

 Block1:
	mov eax,dword ptr [ebp+0xB74]
	test eax,eax
	jne Block3

 Block2:
	mov dword ptr [esp+0x14],eax
	jmp Block7

 Block3:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x14],eax
	jmp Block7

 Block4:
	mov eax,dword ptr [ebp+eax*4+0xB64]
	test eax,eax
	jne Block6

 Block5:
	mov dword ptr [esp+0x14],eax
	jmp Block7

 Block6:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x14],ecx

 Block7:
	mov eax,dword ptr [ebp+0xB10]
	mov edi,dword ptr [eax+0x38]
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x18],edi
	jge Block31

 Block8:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [ebp+0xB18]
	mov dword ptr [esp+0x34],0
	cmp eax,0x64
	jne Block13

 Block10:
	mov edx,dword ptr [ebp+0xB74]
	mov eax,dword ptr [edx+edi*8+4]
	lea esi,[edx+edi*8]
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ebx

 Block12:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x28],esi
	jmp Block21

 Block13:
	mov eax,dword ptr [ebp+eax*4+0xB64]
	lea esi,[eax+edi*8]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ebx

 Block15:
	mov esi,dword ptr [esi+4]
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block17

 Block16:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block17:
	lea ecx,[ebp-4]
	call CUIMedalQuestInfo::IsStateButton
	test eax,eax
	je Block20

 Block18:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test esi,esi
	je Block30

 Block19:
	jmp Block26

 Block20:
	cmp dword ptr [esi+0xC],1
	je Block25

 Block21:
	mov eax,dword ptr [esi+0x34]
	mov edi,dword ptr [esp+0x40]
	add eax,5
	cmp eax,edi
	jge Block25

 Block22:
	add eax,0x20
	cmp edi,eax
	jge Block25

 Block23:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0xFFFFFFF3
	cmp ecx,0x1E
	ja Block25

 Block24:
	mov eax,dword ptr [esi+0x30]
	test eax,eax
	jne Block33

 Block25:
	mov dword ptr [esp+0x34],0xFFFFFFFF

 Block26:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	push edi
	call ebx
	test esi,esi
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block29:
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],0

 Block30:
	inc edi
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x18],edi
	jl Block9

 Block31:
	lea ecx,[ebp+0xBB8]
	call CUIToolTip::ClearToolTip
	xor eax,eax

 Block32:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 8

 Block33:
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemSlot
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [ebp]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edx
	mov edx,dword ptr [eax+0x30]
	mov ecx,ebp
	mov byte ptr [esp+0x4C],1
	call edx
	mov edx,dword ptr [ebp]
	lea eax,[eax+edi+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,ebp
	call eax
	mov ecx,dword ptr [esp+0x58]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[ebp+0xBB8]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],0
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	mov eax,1
	jmp Block32
}
}
// CUIMedalQuestInfoDetail::~CUIMedalQuestInfoDetail
_SUB_EXCEPTION_HANDLER(3E1740)
__SUB_CLASS_THIS0(003E1740, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E1740
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIMedalQuestInfoDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMedalQuestInfoDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMedalQuestInfoDetail::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB30]
	mov dword ptr [esp+0x20],0xF
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0x20],0xE
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xD4]
	xor ebp,ebp
	mov byte ptr [esp+0x20],0xD
	cmp eax,ebp
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
	cmp edi,ebp
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	mov dword ptr [esi+0xD4],ebp

 Block5:
	mov eax,dword ptr [esi+0xCC]
	mov byte ptr [esp+0x20],0xC
	cmp eax,ebp
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0xC4]
	mov byte ptr [esp+0x20],0xB
	cmp eax,ebp
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0xC0]
	mov byte ptr [esp+0x20],0xA
	cmp eax,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0xBC]
	mov byte ptr [esp+0x20],9
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0xB8]
	mov byte ptr [esp+0x20],8
	cmp eax,ebp
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esi+0xB4]
	mov byte ptr [esp+0x20],7
	cmp eax,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x20],6
	cmp eax,ebp
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebp
	je Block21

 Block20:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block21:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x20],4
	cmp dword ptr [edi+4],ebp
	je Block23

 Block22:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block23:
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x20],3
	cmp dword ptr [edi+4],ebp
	je Block25

 Block24:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block25:
	mov edi,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x20],2
	cmp edi,ebp
	je Block30

 Block26:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block29

 Block28:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block29:
	mov dword ptr [esi+0x8C],ebp

 Block30:
	lea edi,[esi+0x80]
	mov byte ptr [esp+0x20],1
	cmp dword ptr [edi+4],ebp
	je Block32

 Block31:
	push ebp
	mov ecx,edi
	call ZRef<CUIMedalQuestInfo>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block32:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIMedalQuestInfoDetail>::ms_pInstance],ebp
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
// CUIMedalQuestInfoDetail::Draw
_SUB_EXCEPTION_HANDLER(3E3BA0)
__SUB_CLASS_THIS(003E3BA0, __thiscall, 58995,  CUIMedalQuestInfoDetail, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E3BA0
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
	mov edi,ecx
	mov dword ptr [esp+0x48],edi
	mov eax,dword ptr [esp+0xB4]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov eax,dword ptr [edi+0x8C]
	add eax,0x10
	xor esi,esi
	push eax
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0xB0],esi
	mov dword ptr [esp+0x44],esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0xC0]
	push 0x96
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xB4],1
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
	lea ecx,[esp+0x48]
	push ecx
	call format_string_1
	mov ebp,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x2C]
	push edx
	call ebp
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x1C]
	mov bl,2
	push ecx
	mov byte ptr [esp+0xB0],bl
	call ebp
	lea edx,[esp+0x1C]
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
	mov edx,dword ptr [esp+0x40]
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [edi+0xC0]
	lea ecx,[esp+0x20]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xC0],3
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x28]
	mov byte ptr [esp+0xBC],4
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push 0x2B
	push 0x23
	mov ecx,esi
	mov byte ptr [esp+0xC4],3
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xAC],bl
	mov ebx,8
	cmp word ptr [esp+0x1C],bx
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0xAC],1
	cmp word ptr [esp+0x2C],bx
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,dword ptr [edi+0x8C]
	mov eax,dword ptr [eax+0x14]
	test eax,eax
	je Block35

 Block17:
	cmp byte ptr [eax],0
	je Block35

 Block18:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
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
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xB0],5
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [edi+0xC4]
	push eax
	mov eax,dword ptr [edi+0x8C]
	mov eax,dword ptr [eax+0x14]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,6
	push eax
	mov byte ptr [esp+0xC0],bl
	call _xbstr_t::_ctor_0
	push 0x4B
	mov byte ptr [esp+0xC0],7
	push 0x17
	mov ecx,esi
	mov byte ptr [esp+0xC4],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xAC],5
	cmp word ptr [esp+0x2C],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov byte ptr [esp+0xAC],1
	cmp word ptr [esp+0x1C],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov esi,dword ptr [edi+0xC4]
	test esi,esi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x14]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov esi,dword ptr [esp+0x18]

 Block35:
	mov edx,3
	mov ebx,1
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],ebx
	lea eax,[esp+0x2C]
	push eax
	push 0xD3
	push 0x107
	push 0x81
	push 0x12
	lea ecx,[esp+0x84]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xC4],8
	call IWzCanvas::SetClipRect
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xAC],0xA
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
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [edi+0xA8]
	xor ebp,ebp
	mov dword ptr [esp+0x84],eax
	add eax,0xD5
	mov dword ptr [esp+0x88],ebx
	mov dword ptr [esp+0x80],ebp
	mov dword ptr [esp+0x8C],eax
	xor ebx,ebx

 Block40:
	mov eax,dword ptr [edi+0x8C]
	mov ecx,dword ptr [eax+0x18]
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x3C],ebp
	test ecx,ecx
	je Block69

 Block41:
	cmp ebx,dword ptr [ecx-4]
	jae Block69

 Block42:
	mov ecx,dword ptr [eax+0x1C]
	mov edx,dword ptr [ecx+ebx*4]
	lea esi,[ebx*4]
	add edx,ebp
	push edx
	push 1
	push ebp
	push 0
	lea eax,[esp+0xA4]
	push eax
	call SetRect
	lea ecx,[esp+0x94]
	push ecx
	lea edx,[esp+0x84]
	push edx
	mov eax,ecx
	push eax
	call IntersectRect
	test eax,eax
	je Block68

 Block43:
	xor eax,eax
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x44],eax
	lea ebx,[ebx]

 Block44:
	mov ecx,dword ptr [edi+0x8C]
	mov eax,dword ptr [ecx+0x20]
	lea esi,[ebx*4]
	add eax,esi
	mov eax,dword ptr [eax]
	test eax,eax
	je Block68

 Block45:
	mov edx,dword ptr [esp+0x4C]
	cmp edx,dword ptr [eax-4]
	jae Block68

 Block46:
	mov eax,dword ptr [ecx+0x20]
	mov esi,dword ptr [eax+esi]
	add esi,dword ptr [esp+0x44]
	mov ecx,dword ptr [esi+0x1C]
	sub ecx,dword ptr [edi+0xA8]
	lea eax,[ecx+ebp]
	cmp eax,0xFFFFFFD0
	jl Block56

 Block47:
	cmp eax,0xED
	jge Block56

 Block48:
	mov ecx,dword ptr [esi]
	sub ecx,0
	je Block58

 Block49:
	sub ecx,1
	jne Block56

 Block50:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],ecx
	mov edx,dword ptr [esi+0x14]
	mov ebp,dword ptr [esp+0x1C]
	mov esi,dword ptr [esi+0x18]
	lea edi,[eax+0x80]
	mov eax,dword ptr [esp+0x18]
	mov ebx,dword ptr [eax]
	sub esp,0x10
	mov eax,esp
	push edx
	mov edx,dword ptr [ebx+0x80]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	push edi
	add esi,0x11
	mov dword ptr [eax+4],ebp
	push esi
	mov esi,dword ptr [esp+0x34]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	push esi
	mov byte ptr [esp+0xCC],0xE
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xAC],0xA
	jne Block57

 Block53:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block55:
	mov ebp,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x48]

 Block56:
	inc dword ptr [esp+0x4C]
	add dword ptr [esp+0x44],0x44
	mov ebx,dword ptr [esp+0x14]
	jmp Block44

 Block57:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block55

 Block58:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push edx
	call ebx
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block59:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xB0],0xB
	call ebx
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block60:
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [esi+0xC]
	lea ecx,[esp+0x64]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x10]
	push ecx
	mov dword ptr [esp+0xA0],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC0],0xC
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esi+0x1C]
	sub edx,dword ptr [edi+0xA8]
	mov ecx,dword ptr [esi+0x18]
	lea eax,[edx+ebp+0x80]
	add ecx,0x11
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0xC4],0xD
	mov byte ptr [esp+0xC4],0xC
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xAC],0xB
	cmp word ptr [esp+0x60],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0xAC],0xA
	cmp word ptr [esp+0x50],si
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block56

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x4C]
	add dword ptr [esp+0x44],0x44
	mov ebx,dword ptr [esp+0x14]
	jmp Block44

 Block67:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]
	inc dword ptr [esp+0x4C]
	add dword ptr [esp+0x44],0x44
	mov ebx,dword ptr [esp+0x14]
	jmp Block44

 Block68:
	mov eax,dword ptr [edi+0x8C]
	mov ecx,dword ptr [eax+0x1C]
	add ebp,dword ptr [ecx+esi]
	mov esi,dword ptr [esp+0x18]
	inc ebx
	jmp Block40

 Block69:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xAC],1
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[esp+0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xAC],0
	test eax,eax
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block75:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0xA4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x9C
	ret 4
}
}
// ZSort_ZRef_MedalQuestInfo__QIBaseCompareFunc_
__SUB(003E8F80, __cdecl, 86659,  void, ZArray<ZRef<MedalQuestInfo> >&, NakedParam<QIBaseCompareFunc>) {
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
	call ZSortHelper<ZRef<MedalQuestInfo>, QIBaseCompareFunc>::call_0
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
	call ZSortHelper<ZRef<MedalQuestInfo>, QIBaseCompareFunc>::call_0
	add esp,0x10
	pop esi
	ret
}
}
// CUIMedalQuestInfo::GetQuestInfo
__SUB_CLASS_THIS0(003E16E0, __thiscall, 59081,  CUIMedalQuestInfo, ZRef<MedalQuestInfo>) {
__asm {

 Block0:
	push ecx
	mov edx,dword ptr [ecx+0xB1C]
	mov dword ptr [esp],0
	test edx,edx
	jl Block6

 Block1:
	cmp edx,4
	jge Block6

 Block2:
	mov eax,dword ptr [ecx+0xB20]
	test eax,eax
	jl Block6

 Block3:
	mov ecx,dword ptr [ecx+edx*4+0xB68]
	mov eax,dword ptr [ecx+eax*8+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,esi
	pop esi
	pop ecx
	ret 4

 Block6:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax+4],0
	pop ecx
	ret 4
}
}
// CUIMedalQuestInfo::Draw
_SUB_EXCEPTION_HANDLER(3E6B50)
__SUB_CLASS_THIS(003E6B50, __thiscall, 59077,  CUIMedalQuestInfo, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E6B50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1D4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1E8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x1F8]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	lea ecx,[esi+0xB50]
	mov dword ptr [esp+0x1F0],0
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov eax,dword ptr [esi+0xB14]
	mov edx,dword ptr [eax+0x38]
	mov ecx,edx
	mov dword ptr [esp+0x2C],edx
	cmp dword ptr [esi+0xB2C],ecx
	je Block3

 Block1:
	mov eax,ecx
	mov dword ptr [esi+0xB2C],eax
	xor edi,edi
	nop

 Block2:
	mov ecx,dword ptr [esi+0xB1C]
	push edi
	push ecx
	mov ecx,esi
	call CUIMedalQuestInfo::DestroyButton
	inc edi
	cmp edi,2
	jl Block2

 Block3:
	lea edx,[esp+0x64]
	push 1
	push edx
	call get_basic_font
	lea eax,[esp+0x84]
	push 0x43
	push eax
	mov byte ptr [esp+0x200],1
	call get_basic_font
	add esp,0x10
	mov eax,dword ptr [esi+0xB1C]
	test eax,eax
	jl Block225

 Block4:
	cmp eax,3
	jle Block115

 Block5:
	cmp eax,0x64
	jne Block225

 Block6:
	mov eax,dword ptr [esi+0xB78]
	xor ebp,ebp
	cmp eax,ebp
	jne Block8

 Block7:
	mov dword ptr [esp+0x30],ebp
	jmp Block9

 Block8:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x30],ecx

 Block9:
	mov edx,3
	mov word ptr [esp+0x1B4],dx
	mov dword ptr [esp+0x1BC],0xFF
	mov ebx,dword ptr [esi+0xB54]
	mov edi,ebx
	mov byte ptr [esp+0x1F0],dl
	cmp edi,ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x28]
	push ecx
	push edi
	mov dword ptr [esp+0x30],ebp
	call edx
	cmp eax,ebp
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block13:
	mov ebp,dword ptr [esi+0xB54]
	mov edi,dword ptr [esp+0x28]
	test ebp,ebp
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x14]
	push ecx
	push ebp
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block17:
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x1B4]
	push eax
	push ebx
	neg edi
	push edi
	neg edx
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1B4],8
	mov byte ptr [esp+0x1F0],2
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x1B4],ax
	mov eax,dword ptr [esp+0x1BC]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x1B4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov dword ptr [esp+0x28],0
	lea edx,[esp+0x68]
	push 0x14C8
	push edx
	mov byte ptr [esp+0x1F8],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x1FC],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x74]
	add esp,0xC
	mov byte ptr [esp+0x1F0],4
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x154]
	push eax
	call edi
	lea ecx,[esp+0x154]
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
	lea edx,[esp+0xB4]
	push edx
	mov byte ptr [esp+0x1F4],6
	call edi
	lea eax,[esp+0xB4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov eax,dword ptr [esi+0xB5C]
	lea ecx,[esp+0x154]
	push ecx
	lea edx,[esp+0xB8]
	push edx
	push eax
	mov eax,dword ptr [esp+0x34]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,7
	push eax
	mov byte ptr [esp+0x204],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	push 0x3C
	mov byte ptr [esp+0x204],8
	push 0x37
	mov byte ptr [esp+0x208],bl
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x1F0],6
	cmp word ptr [esp+0xB4],di
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0xBC]
	xor ecx,ecx
	mov word ptr [esp+0xB4],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x1F0],4
	cmp word ptr [esp+0x154],di
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x154],ax
	mov eax,dword ptr [esp+0x15C]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x154]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x14],0x65

 Block38:
	cmp eax,dword ptr [esp+0x30]
	jge Block113

 Block39:
	mov edx,dword ptr [esi+0xB78]
	lea eax,[edx+eax*8]
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x54],ax
	mov dword ptr [esp+0x5C],ecx
	mov ebx,dword ptr [esp+0x54]
	mov edx,dword ptr [esi+0xB58]
	mov edi,dword ptr [esp+0x24]
	mov ebp,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x68]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x24]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x70]
	push edx
	mov edx,dword ptr [ebp+0x80]
	mov dword ptr [eax+0xC],ecx
	lea eax,[ebx-5]
	push eax
	push 0xA
	push edi
	mov byte ptr [esp+0x210],0xA
	call edx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	mov ebp,8
	mov byte ptr [esp+0x1F0],9
	cmp word ptr [esp+0x54],bp
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [edx+0x30]
	test eax,eax
	je Block49

 Block48:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea ecx,[ebx+0x22]
	push ecx
	push 0x12
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x58],esp
	push edi
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	jmp Block53

 Block49:
	mov ecx,3
	mov word ptr [esp+0xD4],cx
	mov dword ptr [esp+0xDC],0xFF
	mov eax,dword ptr [esi+0xB38]
	lea edx,[esp+0xD4]
	push edx
	push eax
	push ebx
	push 0x10
	mov ecx,edi
	mov byte ptr [esp+0x200],0xB
	call IWzCanvas::Copy
	mov byte ptr [esp+0x1F0],9
	cmp word ptr [esp+0xD4],bp
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0xD4],ax
	mov eax,dword ptr [esp+0xDC]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0xD4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [edx+0x30]
	test eax,eax
	je Block81

 Block54:
	cmp eax,dword ptr [esi+0xB30]
	jne Block81

 Block55:
	mov eax,dword ptr [esi+0xB50]
	lea ebp,[esi+0xB50]
	test eax,eax
	jne Block57

 Block56:
	xor edi,edi
	jmp Block58

 Block57:
	mov edi,dword ptr [eax-4]

 Block58:
	mov dword ptr [esp+0x2C],0
	push offset _S_UIUIWINDOW2IMGTI__4
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x1F4],0xC
	call ZXString16::AssignCStr
	lea eax,[esp+0x43]
	push eax
	push 0
	lea ecx,[edi+1]
	push ecx
	mov ecx,ebp
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::_Realloc
	push 0
	push 0xFF
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1F4],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	push ebx
	push 0x10
	lea eax,[esp+0x98]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x20C],0xD
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x208],0xE
	test ecx,ecx
	je Block10

 Block59:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov ebx,dword ptr [esp+0x48]
	push 0
	lea eax,[esp+0x90]
	push ebx
	push eax
	mov byte ptr [esp+0x218],0xF
	call CAnimationDisplayer::LoadLayer_1
	mov ecx,dword ptr [esi+0xB50]
	mov eax,dword ptr [eax]
	lea ebp,[edi*4]
	mov edi,dword ptr [ecx+ebp]
	add ecx,ebp
	add esp,0x28
	cmp edi,eax
	je Block64

 Block60:
	mov dword ptr [ecx],eax
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block62:
	test edi,edi
	je Block64

 Block63:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block64:
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x1F0],0xC
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x84]
	push eax
	call edi
	lea ecx,[esp+0x84]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block69:
	lea edx,[esp+0x194]
	push edx
	mov byte ptr [esp+0x1F4],0x10
	call edi
	lea eax,[esp+0x194]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block70:
	mov eax,dword ptr [esi+0xB50]
	add eax,ebp
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1F0],0x11
	test eax,eax
	je Block10

 Block71:
	lea ecx,[esp+0x84]
	push ecx
	lea edx,[esp+0x198]
	push edx
	push 0x20
	mov ecx,eax
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x1F0],0x10
	cmp word ptr [esp+0x194],di
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x194],ax
	mov eax,dword ptr [esp+0x19C]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x194]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [esp+0x1F0],0xC
	cmp word ptr [esp+0x84],di
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[esp+0x84]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov byte ptr [esp+0x1F0],9
	test ebx,ebx
	je Block81

 Block80:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block81:
	mov ecx,dword ptr [esp+0x38]
	add ecx,0x10
	push ecx
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xB60]
	push 0xAA
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x1F8],0x12
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block83

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block83:
	lea ecx,[esp+0x24]
	push ecx
	call format_string_1
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x104]
	push edx
	call edi
	lea eax,[esp+0x104]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block84:
	lea ecx,[esp+0xF4]
	push ecx
	mov byte ptr [esp+0x1F4],0x13
	call edi
	lea edx,[esp+0xF4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block85:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x104]
	push eax
	mov eax,dword ptr [esi+0xB60]
	lea ecx,[esp+0xF8]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x14
	push edx
	mov byte ptr [esp+0x204],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0x34]
	lea eax,[edi+3]
	push eax
	mov byte ptr [esp+0x204],0x15
	push 0x3A
	mov ecx,ebp
	mov byte ptr [esp+0x208],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0xF4],8
	mov byte ptr [esp+0x1F0],0x13
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0xFC]
	xor ecx,ecx
	mov word ptr [esp+0xF4],cx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0xF4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	cmp word ptr [esp+0x104],8
	mov byte ptr [esp+0x1F0],0x12
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x104],ax
	mov eax,dword ptr [esp+0x10C]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0x104]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov edx,dword ptr [esp+0x38]
	add edx,0x14
	push edx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xB64]
	push 0xAA
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x1F8],0x16
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block95

 Block94:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block95:
	lea eax,[esp+0x28]
	push eax
	call format_string_1
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x134]
	push ecx
	call ebx
	lea edx,[esp+0x134]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block96:
	lea eax,[esp+0x174]
	push eax
	mov byte ptr [esp+0x1F4],0x17
	call ebx
	lea ecx,[esp+0x174]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block97:
	lea edx,[esp+0x134]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0x178]
	push eax
	mov eax,dword ptr [esi+0xB64]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0x18
	push edx
	mov byte ptr [esp+0x204],bl
	call _xbstr_t::_ctor_0
	lea eax,[edi+0x16]
	push eax
	mov byte ptr [esp+0x204],0x19
	push 0x3A
	mov ecx,ebp
	mov byte ptr [esp+0x208],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x174],8
	mov byte ptr [esp+0x1F0],0x17
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x17C]
	xor ecx,ecx
	mov word ptr [esp+0x174],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x174]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	cmp word ptr [esp+0x134],8
	mov byte ptr [esp+0x1F0],0x16
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x134],ax
	mov eax,dword ptr [esp+0x13C]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x134]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov edx,dword ptr [esp+0x38]
	lea eax,[edi-5]
	mov dword ptr [edx+0x34],eax
	mov eax,dword ptr [esp+0x20]
	add edi,0x31
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0x1F0],0x12
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block107:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x1F0],9
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block109:
	mov edi,dword ptr [esp+0x38]
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	mov byte ptr [esp+0x1F4],4
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block112

 Block110:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block112

 Block111:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block112:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x14]
	inc eax
	add ecx,0xFFFFFFFB
	cmp ecx,0x152
	mov dword ptr [esp+0x38],0
	mov dword ptr [esp+0x3C],eax
	jl Block38

 Block113:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1F0],2
	test eax,eax
	je Block225

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block225

 Block115:
	mov eax,dword ptr [esi+eax*4+0xB68]
	test eax,eax
	jne Block117

 Block116:
	mov dword ptr [esp+0x2C],eax
	jmp Block118

 Block117:
	mov edx,dword ptr [eax-4]
	mov dword ptr [esp+0x2C],edx

 Block118:
	mov eax,dword ptr [esi+0xB14]
	mov eax,dword ptr [eax+0x38]
	mov ecx,3
	mov dword ptr [esp+0x28],eax
	mov word ptr [esp+0x94],cx
	mov dword ptr [esp+0x9C],1
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1F0],0x1A
	test ecx,ecx
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea edx,[esp+0x94]
	push edx
	push 0x123
	push 0xE5
	push 0x34
	push 0xA
	lea eax,[esp+0x1E8]
	push eax
	call IWzCanvas::SetClipRect
	cmp word ptr [esp+0x94],8
	mov byte ptr [esp+0x1F0],0x1C
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x94]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov eax,dword ptr [esp+0x28]
	mov ebx,0x34
	mov dword ptr [esp+0x3C],eax
	jmp Block126

 Block126:
	mov ebp,dword ptr [esp+0x3C]
	cmp ebp,dword ptr [esp+0x2C]
	jge Block221

 Block127:
	mov ecx,dword ptr [esi+0xB1C]
	mov edx,dword ptr [esi+ecx*4+0xB68]
	mov edi,dword ptr [edx+ebp*8+4]
	lea eax,[edx+ebp*8]
	mov dword ptr [esp+0x38],edi
	test edi,edi
	je Block129

 Block128:
	lea eax,[edi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block129:
	sub esp,8
	mov eax,esp
	mov byte ptr [esp+0x1F8],0x1D
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax+4],edi
	test edi,edi
	je Block131

 Block130:
	lea ecx,[edi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block131:
	mov ecx,esi
	call CUIMedalQuestInfo::IsStateButton
	test eax,eax
	je Block169

 Block132:
	movzx eax,word ptr [edi]
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],0
	mov byte ptr [esp+0x1F0],0x1E
	test eax,eax
	jne Block134

 Block133:
	lea edx,[esp+0x74]
	push 0x14CA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	push 0
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esi+0xBA4]
	mov byte ptr [esp+0x1F8],0x1F
	call ZMap<long, long, long>::Insert
	mov ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [edi]
	push ecx
	push edx
	lea eax,[esp+0x28]
	push offset _S_SD__1
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x84]
	jmp Block136

 Block134:
	cmp eax,1
	jne Block138

 Block135:
	lea ecx,[esp+0x78]
	push 0x14C9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	push 0
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esi+0xBA4]
	mov byte ptr [esp+0x1F8],0x20
	call ZMap<long, long, long>::Insert
	mov eax,dword ptr [eax+0xC]
	mov ecx,dword ptr [edi]
	push eax
	push ecx
	lea edx,[esp+0x28]
	push offset _S_SD__1
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x88]

 Block136:
	add esp,0x10
	mov byte ptr [esp+0x1F0],0x1E
	test eax,eax
	je Block138

 Block137:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block138:
	cmp ebp,dword ptr [esp+0x28]
	je Block140

 Block139:
	add ebx,2

 Block140:
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x8C]
	push 0xFF777777
	push 0x12
	push 0xE5
	push ebx
	push 0xA
	push edi
	call ecx
	test eax,eax
	jge Block142

 Block141:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block142:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC4]
	push edx
	call ebp
	lea eax,[esp+0xC4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block143:
	lea ecx,[esp+0xA4]
	push ecx
	mov byte ptr [esp+0x1F4],0x21
	call ebp
	lea edx,[esp+0xA4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block144:
	lea eax,[esp+0xC4]
	push eax
	lea ecx,[esp+0xA8]
	push ecx
	lea edx,[esp+0x74]
	push 0x16
	push edx
	mov byte ptr [esp+0x200],0x22
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x204],0x23
	call _xbstr_t::_ctor_0
	lea ecx,[ebx+4]
	push ecx
	mov byte ptr [esp+0x204],0x24
	push 0x20
	mov ecx,edi
	mov byte ptr [esp+0x208],0x23
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x1F0],0x22
	test eax,eax
	je Block146

 Block145:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block146:
	mov edi,8
	mov byte ptr [esp+0x1F0],0x21
	cmp word ptr [esp+0xA4],di
	jne Block149

 Block147:
	mov eax,dword ptr [esp+0xAC]
	xor ecx,ecx
	mov word ptr [esp+0xA4],cx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea edx,[esp+0xA4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov byte ptr [esp+0x1F0],0x1E
	cmp word ptr [esp+0xC4],di
	jne Block153

 Block151:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea ecx,[esp+0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov edx,dword ptr [esp+0x1C]
	mov edi,dword ptr [esi+0xB1C]
	push edx
	push edi
	mov ecx,esi
	call CUIMedalQuestInfo::IsMinimizedState
	mov ebp,dword ptr [esp+0x1C]
	add ebp,ebp
	add ebp,ebp
	add ebp,ebp
	test eax,eax
	je Block160

 Block155:
	mov eax,dword ptr [esi+edi*4+0xB94]
	cmp dword ptr [eax+ebp+4],0
	jne Block167

 Block156:
	mov ecx,dword ptr [esp+0x1C]
	xor eax,eax
	lea edi,[edi+ecx*4+0xFA0]
	mov dword ptr [esp+0xF0],eax
	mov dword ptr [esp+0xE4],1
	mov dword ptr [esp+0xE8],eax
	mov dword ptr [esp+0xEC],eax
	push offset _S_UIUIWINDOW2IMGTI__3
	lea ecx,[esp+0xF4]
	mov byte ptr [esp+0x1F4],0x25
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x1F0],0x26
	test eax,eax
	je Block158

 Block157:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block159

 Block158:
	xor eax,eax

 Block159:
	mov edx,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [esi+edx*4+0xB94]
	push eax
	add ecx,ebp
	mov byte ptr [esp+0x1F4],0x25
	call ZRef<CCtrlButton>::op_assign_ptr
	mov eax,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [esi+eax*4+0xB94]
	mov ecx,dword ptr [ecx+ebp+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0xE4]
	push eax
	push 0
	lea eax,[ebx+3]
	push eax
	push 0xD
	push edi
	push esi
	call edx
	mov eax,dword ptr [esp+0xF0]
	jmp Block165

 Block160:
	mov eax,dword ptr [esi+edi*4+0xB84]
	cmp dword ptr [eax+ebp+4],0
	jne Block167

 Block161:
	mov ecx,dword ptr [esp+0x1C]
	xor eax,eax
	lea edi,[edi+ecx*4+0xBB8]
	mov dword ptr [esp+0x130],eax
	mov dword ptr [esp+0x124],1
	mov dword ptr [esp+0x128],eax
	mov dword ptr [esp+0x12C],eax
	push offset _S_UIUIWINDOW2IMGTI__2
	lea ecx,[esp+0x134]
	mov byte ptr [esp+0x1F4],0x27
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x1F0],0x28
	test eax,eax
	je Block163

 Block162:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block164

 Block163:
	xor eax,eax

 Block164:
	mov edx,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [esi+edx*4+0xB84]
	push eax
	add ecx,ebp
	mov byte ptr [esp+0x1F4],0x27
	call ZRef<CCtrlButton>::op_assign_ptr
	mov eax,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [esi+eax*4+0xB84]
	mov ecx,dword ptr [ecx+ebp+4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x124]
	push eax
	push 0
	lea eax,[ebx+3]
	push eax
	push 0xD
	push edi
	push esi
	call edx
	mov eax,dword ptr [esp+0x130]

 Block165:
	mov byte ptr [esp+0x1F0],0x1E
	test eax,eax
	je Block167

 Block166:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block167:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [eax+0x34],ebx
	add ebx,0x17
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0x1F0],0x1D
	je Block217

 Block168:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0xFFFFFFF4
	push ecx
	jmp Block216

 Block169:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x44],dx
	mov dword ptr [esp+0x4C],ecx
	mov eax,dword ptr [esp+0x24]
	mov ebp,dword ptr [eax]
	mov edx,dword ptr [esi+0xB58]
	mov edi,dword ptr [esp+0x44]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x58]
	push edx
	mov edx,dword ptr [ebp+0x80]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x38]
	push ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x68]
	push 0xA
	push edi
	mov byte ptr [esp+0x210],0x29
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block171

 Block170:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block171:
	mov ebp,8
	mov byte ptr [esp+0x1F0],0x1D
	cmp word ptr [esp+0x44],bp
	jne Block174

 Block172:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [ecx+0x30]
	test eax,eax
	je Block181

 Block176:
	cmp dword ptr [ecx+0xC],1
	jne Block180

 Block177:
	mov edx,3
	mov word ptr [esp+0x144],dx
	mov dword ptr [esp+0x14C],0xFF
	mov eax,dword ptr [esi+0xB38]
	lea ecx,[esp+0x144]
	push ecx
	push eax
	lea edx,[ebx+5]
	push edx
	push 0x10
	mov ecx,edi
	mov byte ptr [esp+0x200],0x2A
	call IWzCanvas::Copy
	mov byte ptr [esp+0x1F0],0x1D
	cmp word ptr [esp+0x144],bp
	jne Block179

 Block178:
	xor eax,eax
	mov word ptr [esp+0x144],ax
	mov eax,dword ptr [esp+0x14C]
	jmp Block184

 Block179:
	lea ecx,[esp+0x144]
	jmp Block187

 Block180:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebx+0x27]
	push edx
	push 0x12
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x44],esp
	push edi
	call ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	jmp Block188

 Block181:
	cmp dword ptr [ecx+0xC],1
	jne Block188

 Block182:
	mov edx,3
	mov word ptr [esp+0x164],dx
	mov dword ptr [esp+0x16C],0xFF
	mov eax,dword ptr [esi+0xB38]
	lea ecx,[esp+0x164]
	push ecx
	push eax
	lea edx,[ebx+5]
	push edx
	push 0x10
	mov ecx,edi
	mov byte ptr [esp+0x200],0x2B
	call IWzCanvas::Copy
	mov byte ptr [esp+0x1F0],0x1D
	cmp word ptr [esp+0x164],bp
	jne Block186

 Block183:
	xor eax,eax
	mov word ptr [esp+0x164],ax
	mov eax,dword ptr [esp+0x16C]

 Block184:
	test eax,eax
	je Block188

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block186:
	lea ecx,[esp+0x164]

 Block187:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov edx,dword ptr [esp+0x38]
	add edx,0x10
	push edx
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xB60]
	push 0xAA
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x1F8],0x2C
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block190

 Block189:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block190:
	lea eax,[esp+0x38]
	push eax
	call format_string_1
	mov ebp,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[esp+0x1A4]
	push ecx
	call ebp
	lea edx,[esp+0x1A4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block191:
	lea eax,[esp+0x184]
	push eax
	mov byte ptr [esp+0x1F4],0x2D
	call ebp
	lea ecx,[esp+0x184]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block192:
	lea edx,[esp+0x1A4]
	push edx
	mov edx,dword ptr [esp+0x34]
	lea eax,[esp+0x188]
	push eax
	mov eax,dword ptr [esi+0xB60]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x204],0x2E
	call _xbstr_t::_ctor_0
	lea eax,[ebx+8]
	push eax
	mov byte ptr [esp+0x204],0x2F
	push 0x3A
	mov ecx,edi
	mov byte ptr [esp+0x208],0x2E
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x184],8
	mov byte ptr [esp+0x1F0],0x2D
	jne Block195

 Block193:
	mov eax,dword ptr [esp+0x18C]
	xor ecx,ecx
	mov word ptr [esp+0x184],cx
	test eax,eax
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea edx,[esp+0x184]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block196:
	cmp word ptr [esp+0x1A4],8
	mov byte ptr [esp+0x1F0],0x2C
	jne Block199

 Block197:
	xor eax,eax
	mov word ptr [esp+0x1A4],ax
	mov eax,dword ptr [esp+0x1AC]
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea ecx,[esp+0x1A4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	mov edx,dword ptr [esp+0x38]
	add edx,0x14
	push edx
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xB64]
	push 0xAA
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x1F8],0x30
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block202

 Block201:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block202:
	lea eax,[esp+0x1C]
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x114]
	push ecx
	call ebp
	lea edx,[esp+0x114]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block203:
	lea eax,[esp+0x1C4]
	push eax
	mov byte ptr [esp+0x1F4],0x31
	call ebp
	lea ecx,[esp+0x1C4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block26

 Block204:
	lea edx,[esp+0x114]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x1C8]
	push eax
	mov eax,dword ptr [esi+0xB64]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x204],0x32
	call _xbstr_t::_ctor_0
	lea eax,[ebx+0x1B]
	push eax
	mov byte ptr [esp+0x204],0x33
	push 0x3A
	mov ecx,edi
	mov byte ptr [esp+0x208],0x32
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x1F0],0x31
	cmp word ptr [esp+0x1C4],di
	jne Block207

 Block205:
	mov eax,dword ptr [esp+0x1CC]
	xor ecx,ecx
	mov word ptr [esp+0x1C4],cx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[esp+0x1C4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov byte ptr [esp+0x1F0],0x30
	cmp word ptr [esp+0x114],di
	jne Block211

 Block209:
	xor eax,eax
	mov word ptr [esp+0x114],ax
	mov eax,dword ptr [esp+0x11C]
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea ecx,[esp+0x114]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [edx+0x34],ebx
	mov eax,dword ptr [esp+0x14]
	add ebx,0x31
	mov byte ptr [esp+0x1F0],0x2C
	test eax,eax
	je Block214

 Block213:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block214:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x1F0],0x1D
	test eax,eax
	je Block217

 Block215:
	add eax,0xFFFFFFF4
	push eax

 Block216:
	call ZXString<char>::_Release
	add esp,4

 Block217:
	mov edi,dword ptr [esp+0x38]
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	mov byte ptr [esp+0x1F4],0x1C
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block220

 Block218:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block220

 Block219:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block220:
	inc dword ptr [esp+0x3C]
	cmp ebx,0x153
	mov dword ptr [esp+0x38],0
	jl Block126

 Block221:
	cmp word ptr [esp+0x1D4],8
	mov byte ptr [esp+0x1F0],2
	jne Block224

 Block222:
	xor eax,eax
	mov word ptr [esp+0x1D4],ax
	mov eax,dword ptr [esp+0x1DC]
	test eax,eax
	je Block225

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block224:
	lea ecx,[esp+0x1D4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block225:
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x1F0],1
	test eax,eax
	je Block227

 Block226:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block227:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x1F0],0
	test eax,eax
	je Block229

 Block228:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block229:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1F0],0xFFFFFFFF
	test eax,eax
	je Block231

 Block230:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block231:
	mov ecx,dword ptr [esp+0x1E8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1E0
	ret 4
}
}
// ZSort_ZRef_MedalQuestInfo__QICategoryCompareFunc_
__SUB(003E83F0, __cdecl, 86653,  void, ZArray<ZRef<MedalQuestInfo> >&, __POSITION*, __POSITION*, NakedParam<QICategoryCompareFunc>) {
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
	call ZArray<ZRef<MedalQuestInfo>>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<ZRef<MedalQuestInfo>>::IndexOf
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
	call IntroSortLoopHelper<ZRef<MedalQuestInfo>, int, QICategoryCompareFunc>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<ZRef<MedalQuestInfo>, QICategoryCompareFunc>::call
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
// CUIMedalQuestInfoDetail::OnCreate
_SUB_EXCEPTION_HANDLER(3E8FC0)
__SUB_CLASS_THIS(003E8FC0, __thiscall, 58992,  CUIMedalQuestInfoDetail, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E8FC0
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
	push 0
	push 0
	lea ecx,[esi+0xB30]
	push esi
	call CLayoutMan::Init
	mov ecx,dword ptr [esi+0x84]
	or ebp,0xFFFFFFFF
	test ecx,ecx
	je Block17

 Block1:
	lea eax,[esp+0x18]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x54],0
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block3

 Block2:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block3:
	mov ecx,dword ptr [esi+0x18]
	mov byte ptr [esp+0x54],1
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getlt
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x54],2
	test edi,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
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
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],1
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],0
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
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
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x54],ebp
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGTI__6
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
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
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x58],3
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	push 0
	push 0
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x38]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0xCC1
	mov bl,4
	push ecx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],5
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],6
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xB0]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],bl
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ebx,8
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x2C],bx
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov dword ptr [esp+0x54],ebp
	cmp word ptr [esp+0x18],bx
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	lea eax,[esp+0x18]
	push eax
	call edi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea edx,[esp+0x2C]
	mov ebx,7
	push edx
	mov dword ptr [esp+0x58],ebx
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	push 0
	push 0
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x790
	push eax
	mov byte ptr [esp+0x70],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x68],9
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x6C],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0xA
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block47

 Block45:
	cmp eax,0x80004002
	je Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov edi,8
	mov byte ptr [esp+0x54],8
	cmp word ptr [esp+0x3C],di
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov dword ptr [esp+0x54],ebp
	cmp word ptr [esp+0x18],di
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	lea edx,[esp+0x18]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0xC0]
	push edi
	push eax
	mov dword ptr [esp+0x60],0xB
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov dword ptr [esp+0x54],ebp
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block61:
	lea eax,[esp+0x18]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebx,[esi+0xC4]
	push ebx
	push eax
	mov dword ptr [esp+0x60],0xC
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov dword ptr [esp+0x54],ebp
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	lea ecx,[esp+0x18]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x54],0xD
	test eax,eax
	je Block65

 Block64:
	mov ebp,dword ptr [eax]
	jmp Block66

 Block65:
	xor ebp,ebp

 Block66:
	mov edx,8
	push ebp
	mov word ptr [esp+0x30],dx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x34],eax
	test eax,eax
	jne Block69

 Block67:
	test ebp,ebp
	je Block69

 Block68:
	push 0x8007000E
	call _com_issue_error

 Block69:
	lea eax,[esp+0x2C]
	push eax
	or ebp,0xFFFFFFFF
	push ebp
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x6C],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x64],0xF
	test ecx,ecx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov byte ptr [esp+0x64],0xE
	call IWzFont::Create
	mov edi,8
	mov byte ptr [esp+0x54],0xD
	cmp word ptr [esp+0x2C],di
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x54],ebp
	test ecx,ecx
	je Block77

 Block76:
	call _xbstr_t::Data_t::Release

 Block77:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
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
	lea eax,[esp+0x2C]
	push eax
	push ebp
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1A25
	push ecx
	mov dword ptr [esp+0x6C],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0x64],0x11
	test ecx,ecx
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov byte ptr [esp+0x64],0x10
	call IWzFont::Create
	mov dword ptr [esp+0x54],ebp
	cmp word ptr [esp+0x2C],di
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block85:
	push 0
	push 0
	push 0
	push 0x7D2
	push offset _S_UIUIWINDOW2IMGTI__5
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esi+0xB30]
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],0
	je Block87

 Block86:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block87:
	mov ecx,dword ptr [esi+0x84]
	lea edx,[esp+0x18]
	push edx
	call CUIMedalQuestInfo::GetQuestInfo
	push eax
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0x58],0x12
	call ZRef<MedalQuestInfo>::op_assign_copy
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x54],ebp
	test eax,eax
	je Block91

 Block88:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block91

 Block89:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block91

 Block90:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block91:
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetLayout
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetNPC
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetGauge_SeriesQuest
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetButton
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetScrollBar
	mov ecx,dword ptr [TSingleton<CUIMedalQuestInfo>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x54],0x13
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
	lea ecx,[esp+0x18]
	push ecx
	mov bl,0x14
	mov ecx,esi
	mov byte ptr [esp+0x58],bl
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x54],0x15
	test edi,edi
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block97

 Block96:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block97:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],bl
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],0x13
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov eax,dword ptr [esp+0x14]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x54],ebx
	test eax,eax
	je Block105

 Block104:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block105:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x54],0x16
	test edi,edi
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push ebx
	push edi
	call eax
	test eax,eax
	jge Block109

 Block108:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block109:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x54],ebx
	test eax,eax
	je Block111

 Block110:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block111:
	mov ecx,esi
	call CUIMedalQuestInfoDetail::SetTimer
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 4
}
}
// CUIMedalQuestInfoDetail::SetButton
_SUB_EXCEPTION_HANDLER(3E35C0)
__SUB_CLASS_THIS0(003E35C0, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E35C0
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
	mov ecx,dword ptr [esi+0x94]
	xor ebx,ebx
	cmp ecx,ebx
	je Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block2:
	mov ecx,dword ptr [esi+0x9C]
	cmp ecx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block4:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [esp+0x20]
	mov ebp,dword ptr [eax+4]
	cmp edi,ebx
	je Block9

 Block5:
	add edi,0xFFFFFFF0
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block8

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block8:
	mov dword ptr [esp+0x20],ebx

 Block9:
	mov edi,dword ptr [esi+0x8C]
	movzx ecx,word ptr [edi]
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x14],ecx
	push edx
	lea ecx,[ebp+0x6F5]
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	je Block11

 Block10:
	mov edi,1
	jmp Block12

 Block11:
	push ebx
	push edi
	lea ecx,[ebp+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	mov edi,eax
	neg edi
	sbb edi,edi
	and edi,2

 Block12:
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x2C],ebx
	mov eax,dword ptr [esi+0x8C]
	cmp dword ptr [eax+8],2
	mov dword ptr [esp+0x3C],ebx
	jne Block22

 Block13:
	push ebx
	push ebx
	push ebx
	push 0x7D3
	push offset _S_UIUIWINDOW2IMGTI__1
	lea eax,[esp+0x30]
	lea ebp,[esi+0xB30]
	push eax
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x40],1
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0x3C],bl
	cmp dword ptr [esp+0x20],ebx
	je Block15

 Block14:
	push ebx
	lea ecx,[esp+0x20]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block15:
	push ebx
	push ebx
	push ebx
	push 0x7D4
	push offset _S_UIUIWINDOW2IMGTI
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x40],2
	call ZRef<CCtrlButton>::op_assign_ptr
	mov byte ptr [esp+0x3C],bl
	cmp dword ptr [esp+0x18],ebx
	je Block17

 Block16:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block17:
	mov eax,dword ptr [esi+0x94]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	mov eax,dword ptr [esi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax
	sub edi,ebx
	je Block20

 Block18:
	sub edi,1
	jne Block22

 Block19:
	mov esi,dword ptr [esi+0x9C]
	jmp Block21

 Block20:
	mov esi,dword ptr [esi+0x94]

 Block21:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push 1
	call eax

 Block22:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// Partition_ZRef_MedalQuestInfo__QICategoryCompareFunc_
__SUB(003E2710, __cdecl, 86641,  int32_t, ZArray<ZRef<MedalQuestInfo> >&, int32_t, int32_t, const ZRef<MedalQuestInfo>&, QICategoryCompareFunc&) {
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
	call QICategoryCompareFunc::operator()
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
	call QICategoryCompareFunc::operator()
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
// DownHeap_ZRef_MedalQuestInfo__QICategoryCompareFunc_
_SUB_EXCEPTION_HANDLER(3E2A90)
__SUB(003E2A90, __cdecl, 86647,  void, ZArray<ZRef<MedalQuestInfo> >&, int32_t, int32_t, int32_t, QICategoryCompareFunc&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E2A90
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
	call QICategoryCompareFunc::operator()
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
	call QICategoryCompareFunc::operator()
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
	call ZRef<MedalQuestInfo>::op_assign_copy
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
// CUIMedalQuestInfo::GetQuestSummary
_SUB_EXCEPTION_HANDLER(3E9CD0)
__SUB_CLASS_THIS(003E9CD0, __thiscall, 59083,  CUIMedalQuestInfo, ZArray<ZXString<char> >, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E9CD0
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
// CUIMedalQuestInfoDetail::SetGauge_SeriesQuest
_SUB_EXCEPTION_HANDLER(3E4FF0)
__SUB_CLASS_THIS0(003E4FF0, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E4FF0
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
	mov eax,dword ptr [edi+0xB8]
	lea ebp,[edi+0xB8]
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
	lea eax,[edi+0xB20]
	push ebx
	push eax
	mov dword ptr [esp+0x28],eax
	call SetRect
	mov eax,dword ptr [edi+0x8C]
	push ecx
	mov ecx,esp
	add eax,0x10
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
	push 0x64
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
	push offset _S_UIUIWINDOWIMGQUE__4
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
	push offset _S_UIUIWINDOWIMGQUE__3
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
	push offset _S_UIUIWINDOWIMGQUE__2
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
	add eax,0x64
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
	mov ecx,0x64
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
// CUIMedalQuestInfo::CUIMedalQuestInfo
_SUB_EXCEPTION_HANDLER(3E6500)
__SUB_CLASS_THIS(003E6500, __thiscall, 59069,  CUIMedalQuestInfo, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E6500
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
	push 0xF2
	push 5
	push 0x1E
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIMedalQuestInfo>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIMedalQuestInfo>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIMedalQuestInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMedalQuestInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMedalQuestInfo::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB38],edi
	push offset _x_com_ptr<IWzFont>::~_x_com_ptr<IWzFont>
	push offset _x_com_ptr<IWzFont>::_ctor_default
	push 4
	push 4
	lea edx,[esi+0xB3C]
	push edx
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB4C],edi
	mov dword ptr [esi+0xB50],edi
	mov dword ptr [esi+0xB54],edi
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esi+0xB5C],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB64],edi
	push offset ZArray<ZRef<MedalQuestInfo>>::~ZArray<ZRef<MedalQuestInfo>>
	push offset ZArray<ZRef<MedalQuestInfo>>::_ctor_default
	push 4
	push 4
	lea eax,[esi+0xB68]
	push eax
	mov byte ptr [esp+0x2C],0xD
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB78],edi
	mov dword ptr [esi+0xB80],edi
	push offset ZArray<ZRef<CCtrlButton>>::~ZArray<ZRef<CCtrlButton>>
	push offset ZArray<ZRef<CCtrlButton>>::_ctor_default
	push 4
	push 4
	lea ecx,[esi+0xB84]
	push ecx
	mov byte ptr [esp+0x2C],0x10
	call __eh_vector_ctor_iterator
	push offset ZArray<ZRef<CCtrlButton>>::~ZArray<ZRef<CCtrlButton>>
	push offset ZArray<ZRef<CCtrlButton>>::_ctor_default
	push 4
	push 4
	lea edx,[esi+0xB94]
	push edx
	mov byte ptr [esp+0x2C],0x11
	call __eh_vector_ctor_iterator
	lea ecx,[esi+0xBA4]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	lea ecx,[esi+0xBBC]
	mov byte ptr [esp+0x18],0x13
	call CUIToolTip::_ctor_default
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x18],0x14
	mov dword ptr [esi+0xB18],eax
	push 0xA
	or eax,0xFFFFFFFF
	push 0x176
	push 0x106
	mov ecx,esi
	mov dword ptr [esi+0xB20],eax
	mov dword ptr [esi+0xB28],edi
	mov dword ptr [esi+0xB2C],eax
	mov dword ptr [esi+0xB1C],0x64
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
// CUIMedalQuestInfo::OnChildNotify
__SUB_CLASS_THIS(003EE320, __thiscall, 59073,  CUIMedalQuestInfo, void, uint32_t, uint32_t, uint32_t) {
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
	call CUIMedalQuestInfo::OnTabChanged
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIMedalQuestInfo::IsMyAddon
__SUB_CLASS_THIS(003E66F0, __thiscall, 59078,  CUIMedalQuestInfo, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUIMedalQuestInfoDetail>::ms_pInstance]
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
// CUIMedalQuestInfo::DestroyButton
__SUB_CLASS_THIS(003E1F10, __thiscall, 59096,  CUIMedalQuestInfo, void, long, long) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	mov ebx,ecx
	cmp ebp,3
	ja Block8

 Block1:
	mov eax,dword ptr [ebx+ebp*4+0xB84]
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	add edi,edi
	add edi,edi
	add edi,edi
	mov ecx,dword ptr [edi+eax+4]
	test ecx,ecx
	je Block4

 Block2:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov esi,dword ptr [ebx+ebp*4+0xB84]
	add esi,edi
	cmp dword ptr [esi+4],0
	je Block4

 Block3:
	push 0
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block4:
	mov ecx,dword ptr [ebx+ebp*4+0xB94]
	mov ecx,dword ptr [edi+ecx+4]
	test ecx,ecx
	je Block7

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	mov esi,dword ptr [ebx+ebp*4+0xB94]
	add esi,edi
	cmp dword ptr [esi+4],0
	je Block7

 Block6:
	push 0
	mov ecx,esi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block7:
	pop edi
	pop esi

 Block8:
	pop ebp
	pop ebx
	ret 8
}
}
// CUIMedalQuestInfoDetail::SetTimer
_SUB_EXCEPTION_HANDLER(3E8600)
__SUB_CLASS_THIS0(003E8600, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E8600
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
	mov esi,dword ptr [ebx+0xCC]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [ebx+0xCC],eax
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
	mov esi,dword ptr [ecx+0xCC]
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
	mov ecx,dword ptr [edx+0xCC]
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
	push 0x15F
	push 0x11
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
	mov esi,dword ptr [ecx+0xCC]
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
	mov esi,dword ptr [eax+0xCC]
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
	mov esi,dword ptr [ebx+0xCC]
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
	push 0x96
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
	mov ecx,dword ptr [ecx+0xCC]
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
	call CUIMedalQuestInfoDetail::DrawTimeText
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
// CUIMedalQuestInfo::ResetInfo
_SUB_EXCEPTION_HANDLER(3EC270)
__SUB_CLASS_THIS(003EC270, __thiscall, 59080,  CUIMedalQuestInfo, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EC270
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
	mov ebp,ecx
	mov dword ptr [esp+0x1C],0
	cmp dword ptr [ebp+0xB20],0
	jl Block2

 Block1:
	lea eax,[esp+0x28]
	push eax
	call CUIMedalQuestInfo::GetQuestInfo
	mov esi,dword ptr [esp+0x24]
	mov ebx,1
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	lea eax,[esp+0x20]
	lea ebx,[esi+2]

 Block3:
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov dword ptr [esp+0x38],1
	test bl,2
	je Block10

 Block6:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x1C],ebx
	test esi,esi
	je Block10

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov byte ptr [esp+0x38],2
	test bl,1
	je Block16

 Block11:
	mov esi,dword ptr [esp+0x2C]
	test esi,esi
	je Block16

 Block12:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	push edi
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
	mov dword ptr [esp+0x2C],0

 Block16:
	xor ebx,ebx
	cmp dword ptr [esp+0x40],ebx
	je Block18

 Block17:
	mov ecx,ebp
	call CUIMedalQuestInfo::LoadData

 Block18:
	cmp dword ptr [esp+0x24],ebx
	je Block40

 Block19:
	cmp dword ptr [ebp+0xB28],ebx
	je Block40

 Block20:
	mov eax,dword ptr [ebp+0xB1C]
	cmp eax,0x64
	je Block40

 Block21:
	mov eax,dword ptr [ebp+eax*4+0xB68]
	cmp eax,ebx
	jne Block23

 Block22:
	mov dword ptr [esp+0x40],ebx
	jmp Block24

 Block23:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [esp+0x40],ecx

 Block24:
	cmp ebx,dword ptr [esp+0x40]
	jge Block37

 Block25:
	mov edx,dword ptr [ebp+0xB1C]
	mov eax,dword ptr [ebp+edx*4+0xB68]
	mov esi,dword ptr [eax+ebx*8+4]
	lea eax,[eax+ebx*8]
	test esi,esi
	je Block27

 Block26:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	mov dx,word ptr [esi]
	mov eax,dword ptr [esp+0x24]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	mov byte ptr [esp+0x38],2
	push edi
	cmp dx,word ptr [eax]
	je Block33

 Block28:
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block31

 Block29:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block31

 Block30:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block31:
	inc ebx
	cmp ebx,dword ptr [esp+0x40]
	jl Block25

 Block32:
	jmp Block36

 Block33:
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block34:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block36

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block36:
	cmp ebx,dword ptr [esp+0x40]

 Block37:
	je Block39

 Block38:
	mov dword ptr [ebp+0xB20],ebx
	jmp Block40

 Block39:
	mov dword ptr [ebp+0xB20],0xFFFFFFFF

 Block40:
	cmp dword ptr [ebp+0xB28],0
	je Block43

 Block41:
	cmp dword ptr [ebp+0xB20],0xFFFFFFFF
	jne Block43

 Block42:
	push 0
	mov ecx,ebp
	call CUIMedalQuestInfo::ToggleDetail

 Block43:
	mov ecx,ebp
	call CUIMedalQuestInfo::SetScrollBar
	cmp dword ptr [ebp+0xB20],0
	jl Block46

 Block44:
	cmp dword ptr [ebp+0xB28],0
	je Block46

 Block45:
	mov ecx,dword ptr [TSingleton<CUIMedalQuestInfoDetail>::ms_pInstance]
	call CUIMedalQuestInfoDetail::ResetInfo

 Block46:
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov esi,dword ptr [esp+0x24]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block50

 Block47:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block50

 Block48:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block50

 Block49:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block50:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
// CUIMedalQuestInfo::ToggleDetail
_SUB_EXCEPTION_HANDLER(3E8250)
__SUB_CLASS_THIS(003E8250, __thiscall, 59080,  CUIMedalQuestInfo, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E8250
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
	mov eax,dword ptr [esi+0xB1C]
	test eax,eax
	jl Block17

 Block1:
	cmp eax,4
	jge Block17

 Block2:
	mov ecx,dword ptr [esi+0xB20]
	test ecx,ecx
	jl Block17

 Block3:
	mov eax,dword ptr [esi+eax*4+0xB68]
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	cmp ecx,eax
	jae Block17

 Block6:
	cmp dword ptr [esp+0x20],0
	je Block17

 Block7:
	cmp dword ptr [esi+0xB80],0
	jne Block21

 Block8:
	push 0xB44
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x18],0
	test edi,edi
	je Block15

 Block9:
	push 0
	push 0x106
	sub esp,8
	lea eax,[esi+8]
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF8
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block14

 Block13:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov ecx,edi
	call CUIMedalQuestInfoDetail::_ctor_0
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	push eax
	lea ecx,[esi+0xB7C]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<CUIMedalQuestInfoDetail>::op_assign_ptr
	mov dword ptr [esi+0xB28],1
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block17:
	mov ecx,dword ptr [esi+0xB80]
	test ecx,ecx
	je Block20

 Block18:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB80],0
	lea edi,[esi+0xB7C]
	je Block20

 Block19:
	push 0
	mov ecx,edi
	call ZRef<CUIMedalQuestInfoDetail>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block20:
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xB28],0
	mov dword ptr [esi+0xB20],0xFFFFFFFF
	call CWnd::InvalidateRect

 Block21:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIMedalQuestInfoDetail::DrawTimeText
_SUB_EXCEPTION_HANDLER(3E6090)
__SUB_CLASS_THIS0(003E6090, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E6090
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x8C]
	cmp dword ptr [eax+0x24],0
	je Block36

 Block1:
	movzx eax,word ptr [eax]
	push 0
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetQuestTimer
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esp+0x60],0
	test ecx,ecx
	je Block34

 Block2:
	push 0
	lea edx,[esp+0x1C]
	push edx
	call CUIQuestTimer::GetRemainTimeString
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x64],1
	call ebx
	lea ecx,[esp+0x28]
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
	mov ecx,dword ptr [esi+0xCC]
	mov byte ptr [esp+0x60],2
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],4
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov esi,dword ptr [esp+0x1C]
	test esi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x10]
	push ecx
	push esi
	mov dword ptr [esp+0x18],0
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	mov edi,dword ptr [esp+0x10]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x8C]
	push 0xFFFFFF
	push edi
	push ecx
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	lea eax,[esp+0x48]
	push eax
	call ebx
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x64],5
	call ebx
	lea eax,[esp+0x38]
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
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x1C]
	push 0xA
	push eax
	mov byte ptr [esp+0x70],6
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	mov bl,7
	push edx
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_0
	push 0
	mov byte ptr [esp+0x74],8
	push 0
	mov ecx,esi
	mov byte ptr [esp+0x78],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],6
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov edi,8
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x38],di
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x60],4
	cmp word ptr [esp+0x48],di
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x64],1
	call edx
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	cmp dword ptr [esp+0x24],0
	mov dword ptr [esp+0x60],0xFFFFFFFF
	je Block36

 Block35:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CUIQuestTimer>::_ReleaseRaw

 Block36:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x54
	ret
}
}
// CUIMedalQuestInfo::IsStateButton
_SUB_EXCEPTION_HANDLER(3E1CD0)
__SUB_CLASS_THIS(003E1CD0, __thiscall, 59094,  CUIMedalQuestInfo, int32_t, NakedParam<ZRef<MedalQuestInfo>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E1CD0
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
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block2

 Block1:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 8

 Block2:
	cmp word ptr [eax],2
	lea esi,[eax-0x10]
	sbb edi,edi
	lea ebx,[esi+4]
	push ebx
	neg edi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block5:
	mov eax,edi
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
// CUIMedalQuestInfoDetail::SetNPC
_SUB_EXCEPTION_HANDLER(3E42D0)
__SUB_CLASS_THIS0(003E42D0, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E42D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x5C],edi
	mov eax,dword ptr [edi+0xB4]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [edi+0xB4],ebx
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
	mov dword ptr [edi+0xAC],eax
	cmp eax,ebx
	jne Block4

 Block3:
	mov dword ptr [edi+0xAC],0x897B50

 Block4:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x4C]
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
	mov word ptr [ebp+0x60],ax
	mov dword ptr [ebp+0x68],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp+0x60]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[ebp+0x70]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xB4]
	cmp esi,eax
	je Block13

 Block9:
	mov dword ptr [edi+0xB4],eax
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
	mov eax,dword ptr [ebp+0x70]
	cmp eax,ebx
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0
	jne Block18

 Block16:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp word ptr [ebp+0x4C],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea edx,[ebp+0x70]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [ebp-4],2
	mov word ptr [ebp+0x60],cx
	mov dword ptr [ebp+0x68],eax
	cmp eax,ebx
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	mov esi,dword ptr [edi+0xB4]
	mov byte ptr [ebp-4],3
	cmp esi,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x6C]
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
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],2
	jne Block32

 Block30:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	cmp eax,ebx
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x60]
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
	lea edx,[ebp+0x4C]
	mov ebx,4
	push edx
	mov dword ptr [ebp-4],ebx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x4C]
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
	mov ecx,dword ptr [edi+0xB4]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x4C]
	push eax
	push 0x6E
	push 0xF2
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x4C],si
	jne Block44

 Block42:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp word ptr [ebp+0x60],si
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov esi,dword ptr [edi+0xB4]
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
	lea ecx,[ebp+0x70]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov edx,0xD
	mov dword ptr [ebp-4],ebx
	mov word ptr [ebp+0x60],dx
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block55:
	mov esi,dword ptr [edi+0xB4]
	mov byte ptr [ebp-4],7
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x6C]
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
	cmp word ptr [ebp+0x60],bx
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov esi,dword ptr [edi+0xB4]
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
	mov dword ptr [ebp+0x10],0
	lea edx,[ebp+0x70]
	push 0xAB8
	push edx
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0xAC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],9
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x70]
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
	lea eax,[ebp+0x60]
	push eax
	call esi
	lea ecx,[ebp+0x60]
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
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0xA
	call esi
	lea eax,[ebp+0x4C]
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
	mov edi,dword ptr [ebp+0x10]
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
	lea ecx,[ebp+0x60]
	push ecx
	lea edx,[ebp+0x4C]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x14],esp
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
	lea eax,[ebp-0x50]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	push eax
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x18],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block80

 Block78:
	cmp eax,0x80004002
	je Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	mov edi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x50],di
	jne Block83

 Block81:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	cmp eax,esi
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x4C],di
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	cmp eax,esi
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x60],di
	jne Block91

 Block89:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	cmp eax,esi
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[ebp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov ebx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebx+0xD4]
	lea edi,[ebx+0xD0]
	cmp eax,esi
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
	mov ebx,dword ptr [ebp+0x5C]
	mov dword ptr [edi+4],0
	xor esi,esi

 Block97:
	cmp dword ptr [ebp+0x18],esi
	sete al
	test al,al
	je Block149

 Block98:
	mov ecx,dword ptr [ebx+0xAC]
	push ecx
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	cmp dword ptr [eax+0xE4],esi
	jbe Block104

 Block99:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx+0xAC]
	mov ecx,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	push eax
	call CNpcPool::FindNpcByTemplateID
	mov esi,eax
	test esi,esi
	je Block186

 Block100:
	mov ecx,edi
	call ZRef<CAvatar>::_Alloc
	push 0
	push 0x64
	push 0x6E
	push 0xF2
	push 0
	lea ecx,[ebp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x58],esp
	mov bl,0x12
	push eax
	mov byte ptr [ebp-4],bl
	call _x_com_ptr<IWzGr2DLayer>::CreateFromUnknown
	mov edi,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x70]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x54],esp
	push eax
	mov byte ptr [ebp-4],0x14
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	mov eax,dword ptr [esi+0x8C]
	mov ecx,dword ptr [edi+0xD4]
	push 5
	add eax,4
	push eax
	mov byte ptr [ebp-4],0x15
	call CAvatar::Init_1
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block186

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block186

 Block104:
	int 3// TODO: 	mov dword ptr [ebp-0x40],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [ebp-0x38],esi
	mov dword ptr [ebp-0x34],esi
	mov dword ptr [ebp-0x30],esi
	mov ecx,dword ptr [eax+0x78]
	mov byte ptr [ebp-4],0x16
	cmp ecx,esi
	jne Block106

 Block105:
	xor ecx,ecx
	jmp Block107

 Block106:
	mov ecx,dword ptr [ecx-4]

 Block107:
	mov edx,2
	cmp edx,ecx
	sbb ecx,ecx
	push 0xFFFFFFFE
	neg ecx
	lea edx,[ebp-0x40]
	inc ecx
	push edx
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push eax
	call CActionMan::LoadNpcAction
	mov eax,3
	mov word ptr [ebp+0x1C],ax
	mov dword ptr [ebp+0x24],0xFFFFFFFE
	mov ecx,dword ptr [ebx+0xB4]
	mov byte ptr [ebp-4],0x17
	cmp ecx,esi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea edx,[ebp+0x1C]
	push edx
	lea eax,[ebp+0x14]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp+0x14]
	cmp eax,esi
	je Block111

 Block110:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block111:
	cmp word ptr [ebp+0x1C],8
	mov byte ptr [ebp-4],0x16
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [ebp+0x1C],ax
	mov eax,dword ptr [ebp+0x24]
	cmp eax,esi
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[ebp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov eax,dword ptr [ebp-0x34]
	mov dword ptr [ebp+0x70],eax
	cmp eax,esi
	je Block148

 Block116:
	mov edi,dword ptr [ZImports::_VariantInit]
	mov ebx,8

 Block117:
	lea edx,[ebp+0x70]
	push edx
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea eax,[ebp+0x3C]
	push eax
	call edi
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block118:
	lea edx,[ebp+0x2C]
	push edx
	mov byte ptr [ebp-4],0x18
	call edi
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block119:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x19
	call edi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block120:
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],0x1A
	call edi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block121:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [ebp+0x1C],dx
	mov dword ptr [ebp+0x24],eax
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax+0xB4]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	je Block7

 Block122:
	lea edx,[ebp+0x3C]
	push edx
	lea eax,[ebp+0x2C]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp]
	push eax
	lea edx,[ebp+0x1C]
	push edx
	push esi
	lea eax,[ebp-0x2C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x2C],bx
	jne Block125

 Block123:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x1C],bx
	jne Block133

 Block127:
	xor eax,eax
	mov word ptr [ebp+0x1C],ax
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block129

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block129:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block130:
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp],bx
	jne Block134

 Block131:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block135

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block133:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp+0x1C]
	push ecx
	call esi
	jmp Block130

 Block134:
	lea eax,[ebp]
	push eax
	call esi

 Block135:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x1C],bx
	jne Block138

 Block136:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block139:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x2C],bx
	jne Block142

 Block140:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea ecx,[ebp+0x2C]
	push ecx
	call esi

 Block143:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp+0x3C],bx
	jne Block146

 Block144:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea eax,[ebp+0x3C]
	push eax
	call esi

 Block147:
	cmp dword ptr [ebp+0x70],0
	jne Block117

 Block148:
	lea ecx,[ebp-0x40]
	mov byte ptr [ebp-4],0x11
	int 3// TODO: 	mov dword ptr [ebp-0x40],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	jmp Block186

 Block149:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x1C]
	push ecx
	call esi
	lea edx,[ebp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],0x1D
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x1E
	call esi
	lea eax,[ebp-0x1C]
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
	lea ecx,[ebp+0x2C]
	push ecx
	mov byte ptr [ebp-4],0x1F
	call esi
	lea edx,[ebp+0x2C]
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
	lea eax,[ebp+0x3C]
	push eax
	mov byte ptr [ebp-4],0x20
	call esi
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	mov ecx,dword ptr [ebx+0xB4]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	jne Block161

 Block160:
	push 0x80004003
	call _com_issue_error

 Block161:
	lea edx,[ebp+0x1C]
	push edx
	lea eax,[ebp]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x2C]
	push eax
	mov eax,dword ptr [ebp+0x18]
	lea edx,[ebp+0x3C]
	push edx
	push eax
	lea edx,[ebp-0x2C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [ebp-0x2C],di
	jne Block168

 Block162:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block164

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block164:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block165:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x3C],di
	jne Block169

 Block166:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block170

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block168:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x2C]
	push ecx
	call esi
	jmp Block165

 Block169:
	lea eax,[ebp+0x3C]
	push eax
	call esi

 Block170:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp+0x2C],di
	jne Block173

 Block171:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea edx,[ebp+0x2C]
	push edx
	call esi

 Block174:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x1C],di
	jne Block177

 Block175:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea ecx,[ebp-0x1C]
	push ecx
	call esi

 Block178:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp],di
	jne Block181

 Block179:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea eax,[ebp]
	push eax
	call esi

 Block182:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x1C],di
	jne Block185

 Block183:
	mov eax,dword ptr [ebp+0x24]
	xor ecx,ecx
	mov word ptr [ebp+0x1C],cx
	test eax,eax
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea edx,[ebp+0x1C]
	push edx
	call esi

 Block186:
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
	jge Block188

 Block187:
	push eax
	call _com_issue_error

 Block188:
	lea edx,[ebp+0x3C]
	mov bl,0x22
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block190

 Block189:
	push eax
	call _com_issue_error

 Block190:
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0xB4]
	mov byte ptr [ebp-4],0x23
	test ecx,ecx
	jne Block192

 Block191:
	push 0x80004003
	call _com_issue_error

 Block192:
	lea edx,[ebp+0x2C]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x3C],si
	jne Block195

 Block193:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block196:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x2C],si
	jne Block199

 Block197:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block202

 Block201:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block202:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block204

 Block203:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block204:
	lea esp,[ebp-0x68]
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
// ZSort_ZRef_MedalQuestInfo__QIBaseCompareFunc_
__SUB(003E8460, __cdecl, 86655,  void, ZArray<ZRef<MedalQuestInfo> >&, __POSITION*, __POSITION*, NakedParam<QIBaseCompareFunc>) {
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
	call ZArray<ZRef<MedalQuestInfo>>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<ZRef<MedalQuestInfo>>::IndexOf
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
	call IntroSortLoopHelper<ZRef<MedalQuestInfo>, int, QIBaseCompareFunc>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<ZRef<MedalQuestInfo>, QIBaseCompareFunc>::call
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
// CUIMedalQuestInfo::IsMinimizedState
__SUB_CLASS_THIS(003E13B0, __thiscall, 59092,  CUIMedalQuestInfo, int32_t, long, long) {
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
// CUIMedalQuestInfo::OnMouseButton
_SUB_EXCEPTION_HANDLER(3E9930)
__SUB_CLASS_THIS(003E9930, __thiscall, 59075,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E9930
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
	mov ecx,dword ptr [esp+0x38]
	cmp ecx,0x28
	jl Block18

 Block1:
	mov eax,dword ptr [esi+0xB18]
	test eax,eax
	jl Block18

 Block2:
	cmp eax,4
	jge Block18

 Block3:
	lea edi,[esi-4]
	push ecx
	mov ecx,edi
	call CUIMedalQuestInfo::GetSelect
	mov ebx,eax
	or ebp,0xFFFFFFFF
	cmp ebx,ebp
	jne Block6

 Block4:
	cmp dword ptr [esi+0xB1C],0
	jl Block18

 Block5:
	push 0
	mov ecx,edi
	mov dword ptr [esi+0xB1C],ebp
	call CUIMedalQuestInfo::ToggleDetail
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	jmp Block18

 Block6:
	mov eax,dword ptr [esi+0xB18]
	mov ecx,dword ptr [esi+eax*4+0xB64]
	lea eax,[ecx+ebx*8]
	push eax
	lea ecx,[esp+0x18]
	call ZRef<MedalQuestInfo>::_ctor_copy
	sub esp,8
	lea edx,[esp+0x1C]
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push edx
	mov dword ptr [esp+0x30],0
	call ZRef<MedalQuestInfo>::_ctor_copy
	mov ecx,edi
	call CUIMedalQuestInfo::IsStateButton
	test eax,eax
	je Block12

 Block7:
	cmp dword ptr [esp+0x2C],0x201
	jne Block17

 Block8:
	mov eax,dword ptr [esp+0x18]
	movzx eax,word ptr [eax]
	mov ecx,dword ptr [esi+0xB18]
	mov edx,dword ptr [esi+ecx*4+0xB80]
	cmp dword ptr [edx+eax*8+4],0
	je Block10

 Block9:
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x20]
	lea eax,[ecx+eax*4+0xBB8]
	push eax
	mov ecx,edi
	call edx
	jmp Block17

 Block10:
	mov edx,dword ptr [esi+ecx*4+0xB90]
	cmp dword ptr [edx+eax*8+4],0
	je Block17

 Block11:
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x20]
	lea eax,[ecx+eax*4+0xFA0]
	push eax
	mov ecx,edi
	call edx
	jmp Block17

 Block12:
	cmp dword ptr [esi+0xB1C],ebx
	je Block17

 Block13:
	push ebx
	mov ecx,edi
	call CUIMedalQuestInfo::SetSelect
	cmp dword ptr [esi+0xB24],0
	je Block15

 Block14:
	mov ecx,dword ptr [esi+0xB7C]
	call CUIMedalQuestInfoDetail::ResetInfo
	jmp Block16

 Block15:
	push 1
	mov ecx,edi
	call CUIMedalQuestInfo::ToggleDetail

 Block16:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect

 Block17:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x24],ebp
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>

 Block18:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0x10
}
}
// CUIMedalQuestInfoDetail::CUIMedalQuestInfoDetail
_SUB_EXCEPTION_HANDLER(3E3A50)
__SUB_CLASS_THIS(003E3A50, __thiscall, 58989,  CUIMedalQuestInfoDetail, void, NakedParam<ZRef<CUIMedalQuestInfo>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E3A50
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
	mov dword ptr [TSingleton<CUIMedalQuestInfoDetail>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIMedalQuestInfoDetail>::ms_pInstance],edi

 Block3:
	mov ecx,dword ptr [esp+0x24]
	int 3// TODO: 	mov dword ptr [esi],offset CUIMedalQuestInfoDetail::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMedalQuestInfoDetail::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMedalQuestInfoDetail::`vftable'{for `ZRefCounted'}
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
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD4],edi
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0x18],0xF
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB30],edi
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB38],edi
	mov dword ptr [esi+0xB3C],edi
	mov dword ptr [esi+0xB40],edi
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x28]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x176
	push 0x130
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],0x11
	call CWnd::CreateWnd
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp dword ptr [esp+0x24],edi
	je Block7

 Block6:
	push edi
	lea ecx,[esp+0x24]
	call ZRef<CUIMedalQuestInfo>::_ReleaseRaw

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
// MedalQuestInfo::~MedalQuestInfo
_SUB_EXCEPTION_HANDLER(3EA300)
__SUB_CLASS_THIS0(003EA300, __thiscall, 59234,  MedalQuestInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3EA300
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
	lea ecx,[esi+0x4C]
	mov dword ptr [esp+0x14],7
	call ZArray<ZArray<CT_INFO>>::RemoveAll
	lea ecx,[esi+0x48]
	mov byte ptr [esp+0x14],6
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x44]
	mov byte ptr [esp+0x14],5
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0x40]
	mov byte ptr [esp+0x14],4
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x20]
	mov byte ptr [esp+0x14],3
	call ZArray<ZArray<CT_INFO>>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x14],2
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x18]
	mov byte ptr [esp+0x14],1
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+0x10]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIMedalQuestInfo::GetQuestState
__SUB_CLASS_THIS(003E1BC0, __thiscall, 59090,  CUIMedalQuestInfo, long, uint16_t, _FILETIME&) {
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
// CUIMedalQuestInfo::OnButtonClicked
__SUB_CLASS_THIS(003EC4F0, __thiscall, 59074,  CUIMedalQuestInfo, void, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	lea eax,[ebx-0xBB8]
	push esi
	push edi
	mov ebp,ecx
	cmp eax,7
	ja Block13

 Block1:
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
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	cmp edi,eax
	jbe Block12

 Block4:
	mov eax,dword ptr [esi]
	test eax,eax
	jne Block6

 Block5:
	xor ebx,ebx
	jmp Block7

 Block6:
	mov ebx,dword ptr [eax-4]

 Block7:
	lea ecx,[esp+0x18]
	push ecx
	push 0
	push edi
	mov ecx,esi
	call ZArray<unsigned char>::_Realloc
	mov eax,ebx

 Block8:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block11

 Block9:
	cmp eax,dword ptr [ecx-4]
	jae Block11

 Block10:
	mov edx,ecx
	mov byte ptr [eax+edx],0
	inc eax
	jmp Block8

 Block11:
	mov ebx,dword ptr [esp+0x18]

 Block12:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [esi]
	mov dl,1
	shl dl,cl
	lea eax,[eax+edi-1]
	or byte ptr [eax],dl
	jmp Block26

 Block13:
	lea eax,[ebx-0xFA0]
	cmp eax,7
	ja Block27

 Block14:
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
	je Block16

 Block15:
	mov eax,dword ptr [eax-4]

 Block16:
	cmp edi,eax
	jbe Block25

 Block17:
	mov eax,dword ptr [esi]
	test eax,eax
	jne Block19

 Block18:
	xor ebx,ebx
	jmp Block20

 Block19:
	mov ebx,dword ptr [eax-4]

 Block20:
	lea ecx,[esp+0x18]
	push ecx
	push 0
	push edi
	mov ecx,esi
	call ZArray<unsigned char>::_Realloc
	mov eax,ebx

 Block21:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block24

 Block22:
	cmp eax,dword ptr [ecx-4]
	jae Block24

 Block23:
	mov edx,ecx
	mov byte ptr [eax+edx],0
	inc eax
	jmp Block21

 Block24:
	mov ebx,dword ptr [esp+0x18]

 Block25:
	mov ecx,dword ptr [esp+0x10]
	mov eax,dword ptr [esi]
	mov dl,1
	shl dl,cl
	lea eax,[eax+edi-1]
	not dl
	and byte ptr [eax],dl

 Block26:
	push 1
	mov ecx,ebp
	call CUIMedalQuestInfo::ResetInfo

 Block27:
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
// CUIMedalQuestInfo::GetResignedTogetherQuests
_SUB_EXCEPTION_HANDLER(3E6960)
__SUB_CLASS_THIS(003E6960, __thiscall, 59084,  CUIMedalQuestInfo, ZArray<long>, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E6960
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [ebp-0x1C],edi
	push edi
	push edi
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov esi,1
	push offset _S_RESIGNEDTOGETHER
	mov dword ptr [ebp-4],esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
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
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],5
	jne Block8

 Block6:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
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
	mov eax,dword ptr [ebp+8]
	mov dword ptr [eax],edi
	mov dword ptr [ebp-0x1C],esi
	mov esi,dword ptr [ebp-0x18]
	cmp esi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block22

 Block10:
	xor ebx,ebx
	cmp esi,edi
	je Block1

 Block11:
	lea esp,[esp]

 Block12:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push esi
	mov dword ptr [ebp-0x14],edi
	call eax
	cmp eax,edi
	jge Block14

 Block13:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	cmp ebx,dword ptr [ebp-0x14]
	jae Block22

 Block15:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push edi
	push 0xA
	push eax
	push ebx
	call _itoa
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],6
	mov ecx,esi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],7
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x3C],8
	movzx edi,ax
	mov byte ptr [ebp-4],5
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	test di,di
	je Block21

 Block20:
	mov ecx,dword ptr [ebp+8]
	push 0xFFFFFFFF
	call ZArray<long>::InsertBefore
	movzx ecx,di
	mov dword ptr [eax],ecx

 Block21:
	inc ebx
	xor edi,edi
	jmp Block12

 Block22:
	mov byte ptr [ebp-4],1
	cmp esi,edi
	je Block24

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block24:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [ebp+8]
	lea esp,[ebp-0x4C]
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
	ret 8
}
}
// QIBaseCompareFunc::operator()
_SUB_EXCEPTION_HANDLER(3E1970)
__SUB_CLASS_THIS(003E1970, __thiscall, 86622,  QIBaseCompareFunc, int32_t, NakedParam<ZRef<MedalQuestInfo>>, NakedParam<ZRef<MedalQuestInfo>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E1970
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
	je Block5

 Block1:
	test ecx,ecx
	je Block5

 Block2:
	add ecx,0x38
	push ecx
	add eax,0x38
	push eax
	call CompareFileTime
	mov byte ptr [esp+0x1C],0
	lea ecx,[esp+0x24]
	test eax,eax
	jge Block4

 Block3:
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	jmp Block14

 Block4:
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZRef<MedalQuestInfo>::~ZRef<MedalQuestInfo>
	mov eax,1
	jmp Block15

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block10

 Block6:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block9

 Block7:
	push edi
	call ebx
	test esi,esi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block9:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0

 Block10:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test ecx,ecx
	je Block14

 Block11:
	lea esi,[ecx-0x10]
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
	xor eax,eax

 Block15:
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
// CUIMedalQuestInfo::SetSelect
_SUB_EXCEPTION_HANDLER(3E1DB0)
__SUB_CLASS_THIS(003E1DB0, __thiscall, 59087,  CUIMedalQuestInfo, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E1DB0
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [esi+0xB1C]
	mov dword ptr [esi+0xB20],eax
	mov edx,dword ptr [esi+ecx*4+0xB68]
	mov ebp,dword ptr [edx+eax*8+4]
	lea eax,[edx+eax*8]
	mov dword ptr [esp+0x18],ebp
	test ebp,ebp
	je Block2

 Block1:
	lea eax,[ebp-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	cmp dword ptr [ebp+0xC],0
	mov dword ptr [esp+0x2C],0
	jne Block4

 Block3:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call CUIMedalQuestInfo::GetQuestInfo
	cmp dword ptr [eax+4],0
	mov ebx,1
	mov byte ptr [esp+0x34],bl
	jne Block5

 Block4:
	mov byte ptr [esp+0x34],0

 Block5:
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block11

 Block6:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block11

 Block7:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call ebx
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
	mov ebp,dword ptr [esp+0x18]

 Block11:
	cmp byte ptr [esp+0x34],0
	je Block17

 Block12:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call CUIMedalQuestInfo::GetQuestInfo
	mov eax,dword ptr [eax+4]
	movzx edx,word ptr [eax]
	mov dword ptr [esi+0xAFC],edx
	mov esi,dword ptr [esp+0x20]
	test esi,esi
	je Block17

 Block13:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block16

 Block14:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block16

 Block15:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block16:
	mov dword ptr [esp+0x20],0

 Block17:
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block20

 Block18:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block20

 Block19:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block20:
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
// CUIMedalQuestInfoDetail::SetScrollBar
__SUB_CLASS_THIS0(003E12C0, __thiscall, 58991,  CUIMedalQuestInfoDetail, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [edi+0x8C]
	xor esi,esi
	xor eax,eax
	mov edi,edi

 Block1:
	mov edx,dword ptr [ecx+0x1C]
	test edx,edx
	je Block4

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block4

 Block3:
	add esi,dword ptr [edx+eax*4]
	inc eax
	jmp Block1

 Block4:
	mov ecx,edx
	test ecx,ecx
	jne Block6

 Block5:
	xor eax,eax
	jmp Block7

 Block6:
	mov eax,dword ptr [ecx-4]

 Block7:
	lea ecx,[eax*8]
	sub ecx,eax
	lea eax,[ecx+esi-0xD5]
	mov ecx,dword ptr [edi+0xA4]
	cdq
	and edx,7
	add eax,edx
	sar eax,3
	inc eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov ecx,dword ptr [edi+0xA4]
	push 0
	mov dword ptr [edi+0xA8],0
	call CCtrlScrollBar::SetCurPos
	pop edi
	pop esi
	ret
}
}
