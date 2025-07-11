#include "regen.hpp"
// Quest.ipp
#include "Quest.hpp"

// CQuest::StartQuest
_SUB_EXCEPTION_HANDLER(2B40A0)
__SUB_CLASS_THIS(002B40A0, __thiscall, 61967,  CQuest, void, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B40A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,4
	lea edx,[ebp-0x4C]
	push edx
	call eax
	lea ecx,[ebp-0x64]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x60]
	mov dword ptr [ebp-0x1C],esi
	mov ebx,1
	test eax,eax
	je Block5

 Block1:
	lea ebx,[eax-0x10]
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block4

 Block3:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block4:
	mov esi,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-0x60],0
	mov ebx,1

 Block5:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [edi+0x10]
	movzx edx,word ptr [edi+0xC]
	add eax,0x2148
	push eax
	push esi
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push edx
	call CQuestMan::CheckCompleteDemand
	test eax,eax
	je Block9

 Block6:
	cmp dword ptr [edi+0x14],ebx
	je Block8

 Block7:
	cmp eax,0xB
	jne Block9

 Block8:
	push eax
	mov ecx,edi
	call CQuest::OnCompleteQuestFailed
	jmp Block121

 Block9:
	cmp dword ptr [edi+0x14],0
	jne Block13

 Block10:
	movzx eax,word ptr [edi+0xC]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::IsStartScriptLinkedQuest
	test eax,eax
	je Block13

 Block11:
	push 0x77
	lea ecx,[ebp-0x30]
	call COutPacket::_ctor_1
	mov dword ptr [ebp-4],0
	push 4

 Block12:
	lea ecx,[ebp-0x30]
	call COutPacket::Encode1
	movzx ecx,word ptr [edi+0xC]
	push ecx
	lea ecx,[ebp-0x30]
	call COutPacket::Encode2
	mov edx,dword ptr [edi+0x10]
	push edx
	lea ecx,[ebp-0x30]
	call COutPacket::Encode4
	mov eax,dword ptr [ebp-0x4C]
	push eax
	lea ecx,[ebp-0x30]
	call COutPacket::Encode2
	mov ecx,dword ptr [ebp-0x48]
	push ecx
	lea ecx,[ebp-0x30]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[ebp-0x30]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	jmp Block121

 Block13:
	cmp dword ptr [edi+0x14],ebx
	jne Block16

 Block14:
	movzx eax,word ptr [edi+0xC]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::IsCompleteScriptLinkedQuest
	test eax,eax
	je Block16

 Block15:
	push 0x77
	lea ecx,[ebp-0x30]
	call COutPacket::_ctor_1
	mov dword ptr [ebp-4],ebx
	push 5
	jmp Block12

 Block16:
	mov dword ptr [ebp-0x14],0
	cmp dword ptr [edi+0x14],0
	mov dword ptr [ebp-4],2
	jne Block18

 Block17:
	movzx eax,word ptr [edi+0xC]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::IsAutoAutoAcceptQuest
	test eax,eax
	jne Block72

 Block18:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x30]
	push ecx
	call esi
	lea edx,[ebp-0x30]
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
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],3
	call esi
	lea ecx,[ebp-0x44]
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
	push 0
	push 0
	lea edx,[ebp-0x30]
	push edx
	lea eax,[ebp-0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0xCAF
	mov bl,4
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[ebp-0x5C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x5C],bx
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[ebp-0x5C]
	push ecx
	call esi

 Block31:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x44],bx
	jne Block34

 Block32:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[ebp-0x44]
	push eax
	call esi

 Block35:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x30],bx
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[ebp-0x30]
	push edx
	call esi

 Block39:
	mov eax,0x20
	call __chkstk
	movzx ecx,word ptr [edi+0xC]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0xB
	test ebx,ebx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[ebp-0x84]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x34]
	mov dword ptr [ebp-0x34],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block44

 Block42:
	cmp eax,0x80004002
	je Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	cmp word ptr [ebp-0x84],8
	mov byte ptr [ebp-4],0xE
	jne Block47

 Block45:
	mov eax,dword ptr [ebp-0x7C]
	xor ecx,ecx
	mov word ptr [ebp-0x84],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp-0x84]
	push edx
	call esi

 Block48:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [edi+0x14]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],0xF
	test esi,esi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[ebp-0x74]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x18]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block53

 Block51:
	cmp eax,0x80004002
	je Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],0xE
	jne Block56

 Block54:
	mov eax,dword ptr [ebp-0x6C]
	xor ecx,ecx
	mov word ptr [ebp-0x74],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[ebp-0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	cmp dword ptr [edi+0x18],0
	je Block70

 Block58:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	push 0xCB1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0x18]
	mov byte ptr [ebp-4],0x11
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea edx,[ebp-0x74]
	push edx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x74],8
	mov dword ptr [ebp-0x20],eax
	mov byte ptr [ebp-4],0xE
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[ebp-0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	cmp dword ptr [ebp-0x20],0
	jne Block68

 Block65:
	lea edx,[ebp-0x14]
	push edx
	mov ecx,edi
	call CQuest::SayNormal
	test eax,eax

 Block66:
	jne Block71

 Block67:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xA
	call ecx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],2
	call eax
	jmp Block120

 Block68:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,edi
	call CQuest::AskQuestion
	test eax,eax
	jne Block71

 Block69:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xA
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],2
	call edx
	jmp Block120

 Block70:
	cmp dword ptr [ebp+8],0
	jmp Block66

 Block71:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0xA
	call edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],2
	call ecx
	mov esi,dword ptr [ebp-0x1C]
	mov ebx,1

 Block72:
	cmp dword ptr [edi+0x14],ebx
	jne Block96

 Block73:
	lea edx,[ebp-0x14]
	push edx
	mov ecx,edi
	call CQuest::ShowRewardList
	mov dword ptr [ebp-0x34],eax
	cmp eax,0x7FFFFFFF
	je Block120

 Block74:
	push 0x77
	lea ecx,[ebp-0x30]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[ebp-0x30]
	mov byte ptr [ebp-4],0x13
	call COutPacket::Encode1
	movzx eax,word ptr [edi+0xC]
	push eax
	lea ecx,[ebp-0x30]
	call COutPacket::Encode2
	mov ecx,dword ptr [edi+0x10]
	push ecx
	lea ecx,[ebp-0x30]
	call COutPacket::Encode4
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebx,dword ptr [edx+0x4078]
	mov dword ptr [ebp-0x1C],0
	test ebx,ebx
	jle Block93

 Block75:
	push ebx
	push 5
	lea eax,[ebp-0x54]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block92

 Block76:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[ebp-0x64]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetQuestDeliveryItem
	mov esi,dword ptr [eax+4]
	lea ecx,[ebp-0x64]
	call ZRef<CItemInfo::QUESTDELIVERYITEM>::~ZRef<CItemInfo::QUESTDELIVERYITEM>
	test esi,esi
	je Block80

 Block77:
	cmp dword ptr [esi+4],1
	jne Block80

 Block78:
	movzx edx,word ptr [edi+0xC]
	push edx
	mov ecx,esi
	call CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
	test eax,eax
	je Block80

 Block79:
	mov dword ptr [ebp-0x1C],ebx

 Block80:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test esi,esi
	je Block83

 Block81:
	push 0
	push 0x1F4
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	jne Block84

 Block82:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x136
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block83:
	lea ecx,[ebp-0x54]
	mov byte ptr [ebp-4],0x13
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	lea ecx,[ebp-0x2C]
	jmp Block119

 Block84:
	mov dword ptr [ebp-0x18],0
	lea ecx,[ebp-0x20]
	push 0x19FE
	mov bl,0x15
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[ebp-0x18]
	push edx
	mov byte ptr [ebp-4],0x16
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x20]
	add esp,8
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea eax,[ebp-0x18]
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block90

 Block87:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	lea ecx,[ebp-0x54]
	mov byte ptr [ebp-4],0x13
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	lea ecx,[ebp-0x2C]
	jmp Block119

 Block90:
	push 1
	mov ecx,esi
	call CWvsContext::SetExclRequestSent
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	lea ecx,[ebp-0x54]
	mov byte ptr [ebp-4],0x13
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block93:
	mov ecx,dword ptr [ebp-0x1C]
	push ecx
	lea ecx,[ebp-0x30]
	call COutPacket::Encode4
	movzx edx,word ptr [edi+0xC]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push edx
	call CQuestMan::IsAutoAlertQuest
	test eax,eax
	jne Block95

 Block94:
	mov eax,dword ptr [ebp-0x4C]
	push eax
	lea ecx,[ebp-0x30]
	call COutPacket::Encode2
	mov ecx,dword ptr [ebp-0x48]
	push ecx
	lea ecx,[ebp-0x30]
	call COutPacket::Encode2

 Block95:
	mov edx,dword ptr [ebp-0x34]
	push edx
	lea ecx,[ebp-0x30]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[ebp-0x30]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[ebp-0x2C]
	jmp Block119

 Block96:
	push 0x77
	lea ecx,[ebp-0x44]
	call COutPacket::_ctor_1
	push ebx
	lea ecx,[ebp-0x44]
	mov byte ptr [ebp-4],0x17
	call COutPacket::Encode1
	movzx ecx,word ptr [edi+0xC]
	push ecx
	lea ecx,[ebp-0x44]
	call COutPacket::Encode2
	mov edx,dword ptr [edi+0x10]
	push edx
	lea ecx,[ebp-0x44]
	call COutPacket::Encode4
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebx,dword ptr [eax+0x4078]
	mov dword ptr [ebp-0x1C],0
	test ebx,ebx
	jle Block115

 Block97:
	push ebx
	push 5
	lea ecx,[ebp-0x54]
	push ecx
	mov ecx,esi
	call CharacterData::GetItem
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block114

 Block98:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[ebp-0x64]
	push edx
	call CItemInfo::GetQuestDeliveryItem
	mov esi,dword ptr [eax+4]
	lea ecx,[ebp-0x64]
	call ZRef<CItemInfo::QUESTDELIVERYITEM>::~ZRef<CItemInfo::QUESTDELIVERYITEM>
	test esi,esi
	je Block102

 Block99:
	cmp dword ptr [esi+4],0
	jne Block102

 Block100:
	movzx eax,word ptr [edi+0xC]
	push eax
	mov ecx,esi
	call CItemInfo::QUESTDELIVERYITEM::IsAllowedDeliveryQuest
	test eax,eax
	je Block102

 Block101:
	mov dword ptr [ebp-0x1C],ebx

 Block102:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test esi,esi
	je Block105

 Block103:
	push 0
	push 0x1F4
	mov ecx,esi
	call CWvsContext::CanSendExclRequest
	test eax,eax
	jne Block106

 Block104:
	push eax
	push eax
	push eax
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x136
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block105:
	lea ecx,[ebp-0x54]
	mov byte ptr [ebp-4],0x17
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block118

 Block106:
	mov dword ptr [ebp-0x18],0
	lea edx,[ebp-0x20]
	push 0x19FE
	mov bl,0x19
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[ebp-0x18]
	push eax
	mov byte ptr [ebp-4],0x1A
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x20]
	add esp,8
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block108:
	push 0
	push 0
	push 0
	push 0
	push ecx
	lea edx,[ebp-0x18]
	mov ecx,esp
	mov dword ptr [ebp-0x34],esp
	push edx
	call ZXString<char>::_ctor_copy
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block112

 Block109:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	lea ecx,[ebp-0x54]
	mov byte ptr [ebp-4],0x17
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block118

 Block112:
	push 1
	mov ecx,esi
	call CWvsContext::SetExclRequestSent
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block114:
	lea ecx,[ebp-0x54]
	mov byte ptr [ebp-4],0x17
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block115:
	mov eax,dword ptr [ebp-0x1C]
	push eax
	lea ecx,[ebp-0x44]
	call COutPacket::Encode4
	movzx ecx,word ptr [edi+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	call CQuestMan::IsAutoAlertQuest
	test eax,eax
	jne Block117

 Block116:
	mov edx,dword ptr [ebp-0x4C]
	push edx
	lea ecx,[ebp-0x44]
	call COutPacket::Encode2
	mov eax,dword ptr [ebp-0x48]
	push eax
	lea ecx,[ebp-0x44]
	call COutPacket::Encode2

 Block117:
	lea ecx,[ebp-0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket

 Block118:
	lea ecx,[ebp-0x40]

 Block119:
	mov byte ptr [ebp-4],2
	call ZArray<unsigned char>::RemoveAll

 Block120:
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll

 Block121:
	lea esp,[ebp-0x94]
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
// CQuest::OnCompleteQuestFailed
_SUB_EXCEPTION_HANDLER(2B1FC0)
__SUB_CLASS_THIS(002B1FC0, __thiscall, 61972,  CQuest, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B1FC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x148
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x2C],ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x24]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0x20]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [ebp+0x14],ecx
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call ebx
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [ebp-0x20],0

 Block5:
	xor esi,esi
	mov dword ptr [ebp+0x54],esi
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp+0x5C],esi
	mov dword ptr [ebp+0x58],esi
	mov eax,dword ptr [ebp+0x70]
	mov edi,dword ptr [ZImports::_VariantClear]
	dec eax
	mov byte ptr [ebp-4],2
	cmp eax,0xA
	ja Block17

 Block6:
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block153
cmp EAX, 2
je Block155
cmp EAX, 3
je Block157
cmp EAX, 4
je Block159
cmp EAX, 5
je Block161
cmp EAX, 6
je Block163
cmp EAX, 7
je Block170
cmp EAX, 8
je Block171
cmp EAX, 9
je Block17
cmp EAX, 10
je Block281


 Block7:
	lea ecx,[ebp-0x48]
	push 0xCA8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp+0x2C]
	movzx ecx,word ptr [edx+0xC]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[ebp+0x54]
	push edx
	mov byte ptr [ebp-4],3
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x48]
	add esp,0x10
	mov byte ptr [ebp-4],2
	cmp eax,esi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	push offset _D_VTMISSING
	lea ecx,[ebp-0xC4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x114]
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp+0x54]
	push 0
	push 0
	lea eax,[ebp-0xC4]
	push eax
	lea ecx,[ebp-0x114]
	push ecx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x124]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x124]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x114]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xC4]
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp+0x10]
	test esi,esi
	sete al
	test al,al
	je Block21

 Block12:
	lea ecx,[ebp-0x50]
	push 0x59B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block16

 Block15:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block16:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block17:
	lea edx,[ebp+0x50]
	push 0xCB6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x2C]
	mov eax,dword ptr [eax]
	push ecx
	movzx ecx,word ptr [edx+0xC]
	push ecx
	push eax
	lea edx,[ebp+0x54]
	push edx
	mov byte ptr [ebp-4],0x3B
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x50]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block172

 Block20:
	push eax
	call _com_issue_error

 Block21:
	xor ebx,ebx
	mov dword ptr [ebp+0x44],ebx
	xor edi,edi
	mov byte ptr [ebp-4],0xD
	mov dword ptr [ebp+0x48],edi
	cmp esi,ebx
	je Block10

 Block22:
	nop

 Block23:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x28]
	push edx
	push esi
	mov dword ptr [ebp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block25

 Block24:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp edi,dword ptr [ebp+0x28]
	jae Block56

 Block26:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],0xE
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block28

 Block27:
	cmp eax,0x80004002
	jne Block20

 Block28:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x11
	jne Block31

 Block29:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x965
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x12
	cmp esi,ebx
	je Block10

 Block33:
	lea edx,[ebp-0x8C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x8C],8
	mov ebx,eax
	mov dword ptr [ebp+0x24],ebx
	mov byte ptr [ebp-4],0x11
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x1AA6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x6C]
	mov byte ptr [ebp-4],0x14
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x6C],8
	mov edi,eax
	mov dword ptr [ebp+0x4C],edi
	mov byte ptr [ebp-4],0x11
	jne Block40

 Block38:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	test edi,edi
	jle Block55

 Block42:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	call CItemInfo::IsQuestItem
	test eax,eax
	je Block55

 Block43:
	mov ecx,dword ptr [ebp+0x14]
	mov eax,0x431BDE83
	imul ebx
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	push esi
	mov dword ptr [ebp+0x60],0
	mov ebx,1
	call CharacterData::GetItemSlotCount
	cmp eax,ebx
	jl Block49

 Block44:
	lea ecx,[ecx]

 Block45:
	mov ecx,dword ptr [ebp+0x14]
	push ebx
	push esi
	lea eax,[ebp-0x94]
	push eax
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[ebp-0x94]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block48

 Block46:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [ebp+0x24]
	jne Block48

 Block47:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	add dword ptr [ebp+0x60],eax

 Block48:
	mov ecx,dword ptr [ebp+0x14]
	push esi
	inc ebx
	call CharacterData::GetItemSlotCount
	cmp ebx,eax
	jle Block45

 Block49:
	mov edi,dword ptr [ebp+0x24]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block52

 Block50:
	mov ecx,dword ptr [ebp+0x14]
	push ecx
	lea edx,[ebp-0x14]
	push edi
	push edx
	call get_equiped_from_item
	mov esi,dword ptr [eax+4]
	add esp,0xC
	lea ecx,[ebp-0x14]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test esi,esi
	je Block52

 Block51:
	inc dword ptr [ebp+0x60]

 Block52:
	mov eax,dword ptr [ebp+0x4C]
	sub eax,dword ptr [ebp+0x60]
	test eax,eax
	jle Block54

 Block53:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x44]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi

 Block54:
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xD
	call edx
	inc dword ptr [ebp+0x48]
	mov edi,dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x10]
	xor ebx,ebx
	jmp Block23

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xD
	call ecx
	inc dword ptr [ebp+0x48]
	mov edi,dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x10]
	xor ebx,ebx
	jmp Block23

 Block56:
	mov eax,dword ptr [ebp+0x44]
	cmp eax,ebx
	je Block58

 Block57:
	cmp dword ptr [eax-4],ebx
	jne Block61

 Block58:
	lea edx,[ebp-0x38]
	push 0x59B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x16
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0xD
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xB
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],2
	call ecx
	jmp Block16

 Block61:
	lea edx,[ebp-0x3C]
	push 0xCB5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x2C]
	movzx edx,word ptr [ecx+0xC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],0x17
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],0xD
	cmp eax,ebx
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	push offset _D_VTMISSING
	lea ecx,[ebp-0xE4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xF4]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x54]
	push 0
	push 0
	lea ecx,[ebp-0xE4]
	push ecx
	lea edx,[ebp-0xF4]
	push edx
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	mov bl,0x19
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1A
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea ecx,[ebp-0x144]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[ebp-0x144]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xF4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xE4]
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x58]
	test edi,edi
	sete al
	test al,al
	je Block73

 Block66:
	lea edx,[ebp-0x44]
	push 0x59B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x1C
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block68:
	lea eax,[ebp-0x4C]
	push 0xCB6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [ebp+0x5C]
	movzx edx,word ptr [esi+0xC]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],0x1D
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x4C]
	add esp,0x10
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block70:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x104]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xA4]
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x54]
	push 0
	push 0
	lea ecx,[ebp-0x104]
	push ecx
	lea edx,[ebp-0xA4]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	mov bl,0x1F
	push eax
	mov byte ptr [ebp-4],bl
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x20
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea ecx,[ebp-0x134]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[ebp-0x134]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xA4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x104]
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x58]
	jmp Block74

 Block73:
	mov esi,dword ptr [ebp+0x2C]

 Block74:
	test edi,edi
	sete al
	test al,al
	je Block82

 Block75:
	lea edx,[ebp-0x54]
	push 0x3D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x22
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x54]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	lea eax,[ebp-0x58]
	push 0xCB6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x5C]
	movzx edx,word ptr [esi+0xC]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],0x23
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x58]
	add esp,0x10
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block79:
	push offset _D_VTMISSING
	lea ecx,[ebp-0xD4]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xB4]
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x54]
	push 0
	push 0
	lea ecx,[ebp-0xD4]
	push ecx
	lea edx,[ebp-0xB4]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	mov bl,0x25
	push eax
	mov byte ptr [ebp-4],bl
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x26
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea ecx,[ebp-0x154]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x27
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzProperty>::op_assign_unknown
	lea ecx,[ebp-0x154]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xB4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xD4]
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x58]

 Block82:
	mov dword ptr [ebp+0x60],0
	test edi,edi
	sete al
	test al,al
	sete al
	mov byte ptr [ebp-4],0x28
	test al,al
	je Block107

 Block83:
	test edi,edi
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[ebp-0x5C]
	push edx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],0x29
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x5C]
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov esi,dword ptr [ebp+0x24]
	mov bl,0x2C
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp+0x4C],0
	test esi,esi
	je Block10

 Block88:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block102

 Block89:
	mov edx,dword ptr [ebp-0x24]
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	lea eax,[ebp]
	mov byte ptr [ebp-4],0x2D
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x2E
	jne Block91

 Block90:
	mov eax,dword ptr [eax+8]
	jmp Block92

 Block91:
	mov eax,offset _S___3

 Block92:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x30
	jne Block95

 Block93:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov esi,dword ptr [ebp+0x48]
	test esi,esi
	je Block99

 Block97:
	cmp byte ptr [esi],0
	je Block99

 Block98:
	lea eax,[ebp+0x48]
	push eax
	push 0xFFFFFFFF
	lea ecx,[ebp+0x60]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block99:
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block101

 Block100:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block101:
	lea ecx,[ebp-0x2C]
	call _xvariant_t::Clear
	mov esi,dword ptr [ebp+0x24]
	jmp Block88

 Block102:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x2B
	jne Block105

 Block103:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x28
	call ecx
	jmp Block108

 Block105:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x28
	call ecx
	jmp Block108

 Block107:
	mov edx,dword ptr [esi+0x10]
	push edx
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	add eax,0xB4
	push eax
	push 0xFFFFFFFF
	lea ecx,[ebp+0x60]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block108:
	mov eax,dword ptr [ebp+0x60]
	xor edi,edi
	mov ebx,eax
	lea esp,[esp]

 Block109:
	test eax,eax
	je Block128

 Block110:
	cmp edi,dword ptr [eax-4]
	jae Block128

 Block111:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x31
	test eax,eax
	je Block119

 Block112:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block119

 Block113:
	lea esi,[eax+8]
	test esi,esi
	je Block119

 Block114:
	add esi,0xFFFFFFF8
	mov dword ptr [ebp+0x24],esi
	test esi,esi
	je Block116

 Block115:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block116:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push ebx
	mov byte ptr [ebp-4],0x32
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x2C]
	mov edx,dword ptr [ecx+0x10]
	push edx
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov eax,dword ptr [ebp+0x60]
	mov eax,dword ptr [eax-4]
	dec eax
	cmp edi,eax
	sbb ecx,ecx
	neg ecx
	xor edx,edx
	test edi,edi
	setg dl
	push ecx
	mov ecx,esi
	push edx
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	sub eax,0x2000
	mov byte ptr [ebp-4],0x28
	je Block120

 Block117:
	sub eax,1
	jne Block125

 Block118:
	inc edi
	add ebx,4
	jmp Block121

 Block119:
	xor esi,esi
	mov dword ptr [ebp+0x24],esi
	jmp Block116

 Block120:
	dec edi
	sub ebx,4

 Block121:
	test esi,esi
	je Block123

 Block122:
	push 0
	lea ecx,[ebp+0x20]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [ebp+0x24],0

 Block123:
	test edi,edi
	jl Block128

 Block124:
	mov eax,dword ptr [ebp+0x60]
	jmp Block109

 Block125:
	test esi,esi
	je Block127

 Block126:
	push 0
	lea ecx,[ebp+0x20]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block127:
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0xD
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xB
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],2
	call edx
	jmp Block275

 Block128:
	push 0x77
	lea ecx,[ebp+0x34]
	call COutPacket::_ctor_1
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x33
	test eax,eax
	jne Block130

 Block129:
	xor edx,edx
	jmp Block131

 Block130:
	mov edx,dword ptr [eax-4]

 Block131:
	mov ecx,dword ptr [ebp+0x3C]
	inc ecx
	cmp ecx,edx
	jbe Block136

 Block132:
	test eax,eax
	je Block134

 Block133:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block134:
	add eax,eax
	cmp ecx,eax
	ja Block134

 Block135:
	lea ecx,[ebp+0x33]
	push ecx
	push 0
	push eax
	lea ecx,[ebp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [ebp+0x38]

 Block136:
	mov edx,dword ptr [ebp+0x3C]
	mov byte ptr [eax+edx],0
	mov eax,dword ptr [ebp+0x2C]
	movzx esi,word ptr [eax+0xC]
	mov eax,dword ptr [ebp+0x38]
	inc dword ptr [ebp+0x3C]
	test eax,eax
	jne Block138

 Block137:
	xor edx,edx
	jmp Block139

 Block138:
	mov edx,dword ptr [eax-4]

 Block139:
	mov ecx,dword ptr [ebp+0x3C]
	add ecx,2
	cmp ecx,edx
	jbe Block144

 Block140:
	test eax,eax
	je Block142

 Block141:
	mov eax,dword ptr [eax-4]

 Block142:
	add eax,eax
	cmp ecx,eax
	ja Block142

 Block143:
	lea ecx,[ebp+0x33]
	push ecx
	push 0
	push eax
	lea ecx,[ebp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [ebp+0x38]

 Block144:
	mov edx,dword ptr [ebp+0x3C]
	mov word ptr [eax+edx],si
	add dword ptr [ebp+0x3C],2
	mov eax,dword ptr [ebp+0x38]
	mov esi,dword ptr [ebp+0x44]
	mov edi,dword ptr [esi-4]
	test eax,eax
	jne Block146

 Block145:
	xor edx,edx
	jmp Block147

 Block146:
	mov edx,dword ptr [eax-4]

 Block147:
	mov ecx,dword ptr [ebp+0x3C]
	add ecx,4
	cmp ecx,edx
	jbe Block152

 Block148:
	test eax,eax
	je Block150

 Block149:
	mov eax,dword ptr [eax-4]

 Block150:
	add eax,eax
	cmp ecx,eax
	ja Block150

 Block151:
	lea ecx,[ebp+0x33]
	push ecx
	push 0
	push eax
	lea ecx,[ebp+0x38]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [ebp+0x38]

 Block152:
	mov edx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+edx],edi
	add dword ptr [ebp+0x3C],4
	mov eax,dword ptr [esi-4]
	add eax,eax
	add eax,eax
	push eax
	push esi
	lea ecx,[ebp+0x34]
	call COutPacket::EncodeBuffer
	lea ecx,[ebp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],0x28
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0xD
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xB
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [ebp+0x10]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],2
	call eax
	jmp Block275

 Block153:
	lea eax,[ebp-0x40]
	push 0xCB4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x34
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],2
	cmp eax,esi
	je Block16

 Block154:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block17

 Block155:
	lea ecx,[ebp-0x34]
	push 0xBC8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x35
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],2
	cmp eax,esi
	je Block16

 Block156:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block17

 Block157:
	lea edx,[ebp-0x30]
	push 0x3D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x36
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],2
	cmp eax,esi
	je Block16

 Block158:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block17

 Block159:
	lea eax,[ebp+0x1C]
	push 0x3D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x37
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],2
	cmp eax,esi
	je Block16

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block17

 Block161:
	lea ecx,[ebp+0x50]
	push 0x666
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x38
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],2
	cmp eax,esi
	je Block16

 Block162:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block17

 Block163:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x39
	cmp eax,esi
	je Block169

 Block164:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block169

 Block165:
	lea esi,[eax+8]
	test esi,esi
	je Block169

 Block166:
	add esi,0xFFFFFFF8
	mov dword ptr [ebp-0x20],esi
	test esi,esi
	je Block168

 Block167:
	lea edx,[esi+0xC]
	push edx
	call ebx

 Block168:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0xD90
	push eax
	mov byte ptr [ebp-4],0x3A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x2C]
	mov edx,dword ptr [ecx+0x10]
	push edx
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
	lea ecx,[ebp-0x24]
	mov byte ptr [ebp-4],2
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	jmp Block281

 Block169:
	xor esi,esi
	mov dword ptr [ebp-0x20],esi
	jmp Block168

 Block170:
	push esi
	push esi
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	push 0xDD4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block281

 Block171:
	push esi
	push esi
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0xDD5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block281

 Block172:
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0x3C
	call esi
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block174

 Block173:
	push eax
	call _com_issue_error

 Block174:
	mov eax,dword ptr [ebp+0x54]
	push 0
	push 0
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	mov bl,0x3D
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x3E
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x3F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block179

 Block177:
	cmp eax,0x80004002
	je Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],bl
	jne Block182

 Block180:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea eax,[ebp]
	push eax
	call edi

 Block183:
	mov ebx,8
	mov byte ptr [ebp-4],0x3C
	cmp word ptr [ebp+0x34],bx
	jne Block186

 Block184:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea edx,[ebp+0x34]
	push edx
	call edi

 Block187:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x1C],bx
	jne Block190

 Block188:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea ecx,[ebp-0x1C]
	push ecx
	call edi

 Block191:
	mov ebx,dword ptr [ebp+0x58]
	test ebx,ebx
	sete al
	test al,al
	je Block218

 Block192:
	lea edx,[ebp+0x50]
	push 0x3D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x40
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block194

 Block193:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block194:
	lea eax,[ebp+0x50]
	push 0xCB6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x2C]
	mov eax,dword ptr [eax]
	push ecx
	movzx ecx,word ptr [edx+0xC]
	push ecx
	push eax
	lea edx,[ebp+0x54]
	push edx
	mov byte ptr [ebp-4],0x41
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x50]
	add esp,0x10
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block196

 Block195:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block196:
	lea eax,[ebp-0x1C]
	push eax
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block198

 Block197:
	push eax
	call _com_issue_error

 Block198:
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0x42
	call esi
	lea eax,[ebp+0x34]
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
	mov eax,dword ptr [ebp+0x54]
	push 0
	push 0
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	mov bl,0x43
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x44
	jne Block202

 Block201:
	push 0x80004003
	call _com_issue_error

 Block202:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x45
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block205

 Block203:
	cmp eax,0x80004002
	je Block205

 Block204:
	push eax
	call _com_issue_error

 Block205:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],bl
	jne Block208

 Block206:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea eax,[ebp]
	push eax
	call edi

 Block209:
	mov ebx,8
	mov byte ptr [ebp-4],0x42
	cmp word ptr [ebp+0x34],bx
	jne Block212

 Block210:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block213

 Block211:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block213

 Block212:
	lea edx,[ebp+0x34]
	push edx
	call edi

 Block213:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x1C],bx
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[ebp-0x1C]
	push ecx
	call edi

 Block217:
	mov ebx,dword ptr [ebp+0x58]

 Block218:
	xor edi,edi
	mov dword ptr [ebp+0x60],edi
	cmp ebx,edi
	sete al
	test al,al
	sete al
	mov byte ptr [ebp-4],0x46
	test al,al
	je Block254

 Block219:
	cmp ebx,edi
	jne Block221

 Block220:
	push 0x80004003
	call _com_issue_error

 Block221:
	lea edx,[ebp+0x50]
	push edx
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x47
	mov dword ptr [ebp+0x44],edi
	mov dword ptr [ebp+0x1C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block223

 Block222:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block223:
	lea ecx,[ebp+0x44]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block226

 Block224:
	cmp eax,0x80004002
	je Block226

 Block225:
	push eax
	call _com_issue_error

 Block226:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x49
	cmp eax,edi
	je Block228

 Block227:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block228:
	lea eax,[ebp+0x34]
	push eax
	call esi
	mov byte ptr [ebp-4],0x4A
	mov dword ptr [ebp+0x1C],edi
	jmp Block230

 Block230:
	mov esi,dword ptr [ebp+0x44]
	cmp esi,edi
	je Block10

 Block231:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x1C]
	push edx
	lea eax,[ebp+0x34]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block249

 Block232:
	mov edx,dword ptr [ebp+0x3C]
	push ecx
	mov dword ptr [ebp-0x30],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	lea eax,[ebp]
	mov byte ptr [ebp-4],0x4B
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x4A
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x4C
	jne Block234

 Block233:
	mov eax,dword ptr [eax+8]
	jmp Block235

 Block234:
	mov eax,offset _S___3

 Block235:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],edi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x4E
	jne Block238

 Block236:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,edi
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block239:
	mov esi,dword ptr [ebp+0x48]
	cmp esi,edi
	je Block242

 Block240:
	cmp byte ptr [esi],0
	je Block242

 Block241:
	lea eax,[ebp+0x48]
	push eax
	push 0xFFFFFFFF
	lea ecx,[ebp+0x60]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block242:
	mov byte ptr [ebp-4],0x4A
	cmp esi,edi
	je Block244

 Block243:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block244:
	cmp word ptr [ebp+0x34],8
	jne Block247

 Block245:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	cmp eax,edi
	je Block230

 Block246:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block230

 Block247:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,edi
	jl Block20

 Block248:
	jmp Block230

 Block249:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x49
	jne Block252

 Block250:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,edi
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x46
	call eax
	jmp Block255

 Block252:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block253:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x46
	call eax
	jmp Block255

 Block254:
	mov ecx,dword ptr [ebp+0x2C]
	mov edx,dword ptr [ecx+0x10]
	push edx
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	add eax,0xB4
	push eax
	push 0xFFFFFFFF
	lea ecx,[ebp+0x60]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block255:
	mov eax,dword ptr [ebp+0x60]
	xor edi,edi
	mov ebx,eax
	nop

 Block256:
	test eax,eax
	je Block274

 Block257:
	cmp edi,dword ptr [eax-4]
	jae Block274

 Block258:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x50],eax
	mov byte ptr [ebp-4],0x4F
	test eax,eax
	je Block266

 Block259:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block266

 Block260:
	lea esi,[eax+8]
	test esi,esi
	je Block266

 Block261:
	add esi,0xFFFFFFF8
	mov dword ptr [ebp+0x1C],esi
	test esi,esi
	je Block263

 Block262:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block263:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push ebx
	mov byte ptr [ebp-4],0x50
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x2C]
	mov edx,dword ptr [ecx+0x10]
	push edx
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov eax,dword ptr [ebp+0x60]
	mov eax,dword ptr [eax-4]
	dec eax
	cmp edi,eax
	sbb ecx,ecx
	neg ecx
	xor edx,edx
	test edi,edi
	setg dl
	push ecx
	mov ecx,esi
	push edx
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	sub eax,0x2000
	mov byte ptr [ebp-4],0x46
	je Block267

 Block264:
	sub eax,1
	jne Block272

 Block265:
	inc edi
	add ebx,4
	jmp Block268

 Block266:
	xor esi,esi
	mov dword ptr [ebp+0x1C],esi
	jmp Block263

 Block267:
	dec edi
	sub ebx,4

 Block268:
	test esi,esi
	je Block270

 Block269:
	push 0
	lea ecx,[ebp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [ebp+0x1C],0

 Block270:
	test edi,edi
	jl Block274

 Block271:
	mov eax,dword ptr [ebp+0x60]
	jmp Block256

 Block272:
	test esi,esi
	je Block274

 Block273:
	push 0
	lea ecx,[ebp+0x18]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block274:
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],2
	call ZArray<ZXString<char>>::RemoveAll

 Block275:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block277

 Block276:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block277:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block279

 Block278:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block279:
	mov eax,dword ptr [ebp+0x54]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block281

 Block280:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block281:
	lea esp,[ebp-0x164]
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
// CQuest::ShowRewardList
_SUB_EXCEPTION_HANDLER(2B09E0)
__SUB_CLASS_THIS(002B09E0, __thiscall, 61971,  CQuest, long, ZArray<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B09E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x1C],edi
	mov eax,dword ptr [esp+0xA8]
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0xA0],ebx
	cmp eax,ebx
	je Block3

 Block1:
	mov ecx,dword ptr [eax-4]
	cmp ecx,ebx
	jbe Block3

 Block2:
	lea ecx,[eax+ecx*4-4]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::op_assign
	mov edi,dword ptr [esp+0x1C]

 Block3:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x78]
	push edx
	call esi
	lea eax,[esp+0x78]
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
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0xA4],1
	call esi
	lea edx,[esp+0x68]
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
	push ebx
	push ebx
	lea eax,[esp+0x80]
	push eax
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x70]
	push 0xCB0
	push edx
	mov byte ptr [esp+0xB8],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x6C],ebx
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB0],4
	cmp eax,ebx
	je Block9

 Block8:
	mov eax,dword ptr [eax]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	movzx ecx,word ptr [ebp+0xC]
	push ecx
	push eax
	lea edx,[esp+0x74]
	push edx
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xB4],5
	cmp dword ptr [_D_G_RM],ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x9C]
	mov byte ptr [esp+0xB4],4
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x58],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0xA0],8
	cmp word ptr [esp+0x88],si
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x88]
	push edx
	call ebp

 Block19:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xA0],9
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esp+0x60]
	cmp ecx,ebx
	je Block23

 Block22:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x60],ebx

 Block23:
	mov byte ptr [esp+0xA0],0xB
	cmp word ptr [esp+0x68],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x68]
	push ecx
	call ebp

 Block27:
	mov byte ptr [esp+0xA0],0xC
	cmp word ptr [esp+0x78],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x78]
	push eax
	call ebp

 Block31:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xCBD
	push ecx
	mov dword ptr [esp+0x68],0xFFFFFFFF
	mov dword ptr [esp+0x5C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xA8],0xD
	test ebx,ebx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[esp+0x38]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0xAC],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xA8],0xE
	call get_int32
	add esp,8
	mov dword ptr [esp+0x48],eax
	mov byte ptr [esp+0xA0],0xC
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
	call ebp

 Block37:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x683
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x38]
	mov byte ptr [esp+0xA8],0xF
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0xAC],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xA8],0x10
	call get_int32
	add esp,8
	mov dword ptr [esp+0x40],eax
	mov byte ptr [esp+0xA0],0xC
	cmp word ptr [esp+0x30],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x30]
	push edx
	call ebp

 Block41:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0xCDE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xAC],0x11
	mov ecx,ebx
	mov byte ptr [esp+0xAC],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xA8],0x12
	call get_int32
	add esp,8
	mov dword ptr [esp+0x44],eax
	mov byte ptr [esp+0xA0],0xC
	cmp word ptr [esp+0x30],si
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x30]
	push eax
	call ebp

 Block45:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xDD2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x38]
	mov byte ptr [esp+0xA8],0x13
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0xAC],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xA8],0x14
	call get_int32
	add esp,8
	mov dword ptr [esp+0x50],eax
	mov byte ptr [esp+0xA0],0xC
	cmp word ptr [esp+0x30],si
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x30]
	push ecx
	call ebp

 Block49:
	mov eax,dword ptr [esp+0x18]
	movzx ecx,word ptr [eax+0xC]
	lea edx,[esp+0x64]
	push edx
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov dword ptr [esp+0x6C],0
	call CQuestMan::GetExpRateByLevel
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x24]
	test eax,eax
	je Block51

 Block50:
	cmp dword ptr [eax-4],0
	jne Block61

 Block51:
	cmp dword ptr [esp+0x48],0
	jg Block59

 Block52:
	cmp dword ptr [esp+0x44],0
	jg Block59

 Block53:
	cmp dword ptr [esp+0x40],0
	jg Block59

 Block54:
	cmp dword ptr [esp+0x50],0
	jg Block59

 Block55:
	mov ecx,edx
	add ecx,0x28
	call ZArray<ActSkill>::IsEmpty
	test eax,eax
	je Block59

 Block56:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x2C
	call ZArray<ActSP>::IsEmpty
	test eax,eax
	je Block59

 Block57:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x1C
	call ZArray<ItemInfo>::IsEmpty
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x20
	call ZArray<ItemInfo>::IsEmpty
	test eax,eax
	jne Block60

 Block59:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0xCDF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0xAC],0x15
	mov ecx,ebx
	mov byte ptr [esp+0xAC],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xA8],0x16
	mov dword ptr [esp+0x34],1
	call get_int32
	add esp,8
	test eax,eax
	je Block61

 Block60:
	xor bl,bl
	jmp Block62

 Block61:
	mov bl,1

 Block62:
	test byte ptr [esp+0x2C],1
	mov dword ptr [esp+0xA0],0xC
	je Block67

 Block63:
	cmp word ptr [esp+0x30],si
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x30]
	push eax
	call ebp

 Block67:
	test bl,bl
	je Block338

 Block68:
	push 2
	push offset _S_W
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ecx+0x24]
	test eax,eax
	je Block95

 Block69:
	cmp dword ptr [eax-4],0
	jbe Block95

 Block70:
	lea edx,[esp+0x14]
	push 0x19C1
	push edx
	mov dword ptr [esp+0x54],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xA0],0x17
	test esi,esi
	je Block74

 Block71:
	cmp dword ptr [esi+4],0
	jne Block73

 Block72:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block73:
	mov esi,dword ptr [esi+4]
	jmp Block75

 Block74:
	xor esi,esi

 Block75:
	mov eax,esi
	lea edx,[eax+1]

 Block76:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block76

 Block77:
	sub eax,edx
	push eax
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0xC
	test ecx,ecx
	je Block79

 Block78:
	call _xbstr_t::Data_t::Release

 Block79:
	xor ebx,ebx
	xor ebp,ebp

 Block80:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ecx+0x24]
	test eax,eax
	je Block95

 Block81:
	cmp ebx,dword ptr [eax-4]
	jae Block95

 Block82:
	lea edx,[esp+0x20]
	push 0xCAC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x2C],0
	mov ecx,dword ptr [esp+0x18]
	mov edi,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	mov byte ptr [esp+0xA0],0x19
	lea esi,[edx+ebp]
	test edi,edi
	je Block86

 Block83:
	cmp dword ptr [edi+4],0
	jne Block85

 Block84:
	mov eax,dword ptr [edi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [edi+4],eax

 Block85:
	mov edi,dword ptr [edi+4]
	jmp Block87

 Block86:
	xor edi,edi

 Block87:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [esi+4]
	push ecx
	push edx
	mov eax,ecx
	push eax
	push ebx
	lea ecx,[esp+0x3C]
	push edi
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0x18
	test eax,eax
	je Block89

 Block88:
	mov ecx,dword ptr [eax-4]
	jmp Block90

 Block89:
	xor ecx,ecx

 Block90:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA0],0x18
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0xA0],0xC
	test ecx,ecx
	je Block94

 Block93:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],0

 Block94:
	inc ebx
	add ebp,0xC
	jmp Block80

 Block95:
	mov edi,dword ptr [esp+0x18]
	mov eax,dword ptr [edi+0x1C]
	test eax,eax
	je Block97

 Block96:
	cmp dword ptr [eax-4],0
	ja Block107

 Block97:
	mov eax,dword ptr [edi+0x28]
	test eax,eax
	je Block99

 Block98:
	cmp dword ptr [eax-4],0
	ja Block107

 Block99:
	mov eax,dword ptr [edi+0x2C]
	test eax,eax
	je Block101

 Block100:
	cmp dword ptr [eax-4],0
	ja Block107

 Block101:
	mov eax,dword ptr [edi+0x20]
	test eax,eax
	je Block103

 Block102:
	cmp dword ptr [eax-4],0
	ja Block107

 Block103:
	cmp dword ptr [esp+0x48],0
	jg Block107

 Block104:
	cmp dword ptr [esp+0x44],0
	jg Block107

 Block105:
	cmp dword ptr [esp+0x40],0
	jg Block107

 Block106:
	cmp dword ptr [esp+0x50],0
	jle Block116

 Block107:
	lea edx,[esp+0x14]
	push 0x19C2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xA0],0x1A
	test esi,esi
	je Block111

 Block108:
	cmp dword ptr [esi+4],0
	jne Block110

 Block109:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block110:
	mov esi,dword ptr [esi+4]
	jmp Block112

 Block111:
	xor esi,esi

 Block112:
	mov eax,esi
	lea edx,[eax+1]

 Block113:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block113

 Block114:
	sub eax,edx
	push eax
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0xC
	test ecx,ecx
	je Block116

 Block115:
	call _xbstr_t::Data_t::Release

 Block116:
	mov eax,dword ptr [edi+0x1C]
	test eax,eax
	je Block143

 Block117:
	cmp dword ptr [eax-4],0
	jbe Block143

 Block118:
	mov dword ptr [esp+0x20],0
	xor ebx,ebx
	jmp Block120

 Block120:
	mov eax,dword ptr [edi+0x1C]
	test eax,eax
	je Block143

 Block121:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,dword ptr [eax-4]
	jae Block143

 Block122:
	mov edx,eax
	cmp dword ptr [edx+ebx+4],0
	jle Block142

 Block123:
	lea eax,[esp+0x28]
	push 0xCAD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [eax]
	mov edx,dword ptr [ecx+0x1C]
	mov byte ptr [esp+0xA0],0x1C
	lea edi,[edx+ebx]
	cmp esi,ebp
	je Block127

 Block124:
	cmp dword ptr [esi+4],ebp
	jne Block126

 Block125:
	mov eax,dword ptr [esi]
	push eax
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block126:
	mov esi,dword ptr [esi+4]
	jmp Block128

 Block127:
	xor esi,esi

 Block128:
	mov ecx,dword ptr [edi+4]
	mov edx,dword ptr [edi]
	push ecx
	push edx
	mov eax,edx
	push eax
	lea ecx,[esp+0x38]
	push esi
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	cmp eax,ebp
	je Block130

 Block129:
	mov ecx,dword ptr [eax-4]
	jmp Block131

 Block130:
	xor ecx,ecx

 Block131:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA0],0x1B
	cmp eax,ebp
	je Block133

 Block132:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block133:
	mov esi,dword ptr [esp+0x28]
	mov byte ptr [esp+0xA0],0xC
	cmp esi,ebp
	je Block142

 Block134:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block141

 Block135:
	cmp esi,ebp
	je Block141

 Block136:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block138

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block138:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block140

 Block139:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block140:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block141:
	mov dword ptr [esp+0x28],ebp

 Block142:
	inc dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x18]
	add ebx,0xC
	jmp Block120

 Block143:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x30]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x2C],ecx
	test esi,esi
	je Block148

 Block144:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block147

 Block145:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block147

 Block146:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block147:
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x34],0

 Block148:
	mov eax,dword ptr [edi+0x28]
	xor ebp,ebp
	cmp eax,ebp
	je Block180

 Block149:
	cmp dword ptr [eax-4],ebp
	jbe Block180

 Block150:
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x28],ebp
	mov edi,edi

 Block151:
	mov eax,dword ptr [edi+0x28]
	xor ebp,ebp
	cmp eax,ebp
	je Block180

 Block152:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,dword ptr [eax-4]
	jae Block180

 Block153:
	xor edi,edi
	lea esp,[esp]

 Block154:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [edx+0x28]
	add eax,ecx
	mov ecx,dword ptr [eax+0x10]
	test ecx,ecx
	je Block179

 Block155:
	cmp edi,dword ptr [ecx-4]
	jae Block179

 Block156:
	mov eax,dword ptr [esp+0x2C]
	mov edx,ecx
	mov ecx,dword ptr [eax+0x3D]
	push ecx
	add eax,0x39
	push eax
	lea esi,[edx+edi*4]
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	add esp,8
	cmp dword ptr [esi],edx
	je Block158

 Block157:
	inc edi
	jmp Block154

 Block158:
	lea eax,[esp+0x14]
	push 0xCAE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x24],0
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx+0x28]
	mov ebp,dword ptr [eax]
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xA0],0x1E
	lea ebx,[edx+ecx]
	test ebp,ebp
	je Block164

 Block159:
	cmp dword ptr [ebp+4],0
	jne Block163

 Block160:
	mov edi,dword ptr [ebp]
	test edi,edi
	jne Block162

 Block161:
	xor esi,esi
	mov dword ptr [ebp+4],esi
	mov ebp,esi
	jmp Block165

 Block162:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebp+4],esi

 Block163:
	mov ebp,dword ptr [ebp+4]
	jmp Block165

 Block164:
	xor ebp,ebp

 Block165:
	mov edx,dword ptr [ebx]
	push edx
	mov eax,edx
	push eax
	lea ecx,[esp+0x2C]
	push ebp
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0x10
	test eax,eax
	je Block167

 Block166:
	mov ecx,dword ptr [eax-4]
	jmp Block168

 Block167:
	xor ecx,ecx

 Block168:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA0],0x1D
	test eax,eax
	je Block170

 Block169:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block170:
	mov esi,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0xC
	test esi,esi
	je Block179

 Block171:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block178

 Block172:
	test esi,esi
	je Block178

 Block173:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block175

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block175:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block177

 Block176:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block177:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block178:
	mov dword ptr [esp+0x14],0

 Block179:
	inc dword ptr [esp+0x20]
	add dword ptr [esp+0x28],0x14
	mov edi,dword ptr [esp+0x18]
	jmp Block151

 Block180:
	mov eax,dword ptr [edi+0x2C]
	cmp eax,ebp
	je Block213

 Block181:
	cmp dword ptr [eax-4],ebp
	jbe Block213

 Block182:
	mov dword ptr [esp+0x28],ebp

 Block183:
	mov eax,dword ptr [edi+0x2C]
	xor ebp,ebp
	cmp eax,ebp
	je Block213

 Block184:
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,dword ptr [eax-4]
	jae Block213

 Block185:
	mov dword ptr [esp+0x20],ebp

 Block186:
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [edi+0x2C]
	add eax,eax
	add eax,eax
	add eax,eax
	lea eax,[eax+edx+4]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block212

 Block187:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,dword ptr [eax-4]
	jae Block212

 Block188:
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0x2C]
	add eax,eax
	add eax,eax
	add eax,eax
	mov edx,dword ptr [eax+ecx+4]
	mov eax,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+eax*4]
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov ebx,eax
	mov eax,0x51EB851F
	imul edx
	mov eax,dword ptr [esp+0x2C]
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov edx,dword ptr [eax+0x3D]
	lea ebp,[eax+0x39]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax+0x3D]
	sar edx,6
	mov esi,edx
	push ecx
	shr esi,0x1F
	push ebp
	add esi,edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	add esp,0x10
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp ebx,esi
	jne Block190

 Block189:
	cmp edi,eax
	je Block191

 Block190:
	inc dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x18]
	jmp Block186

 Block191:
	lea edx,[esp+0x24]
	push 0x19C6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	mov ecx,dword ptr [esp+0x18]
	mov ebp,dword ptr [ecx+0x2C]
	mov ecx,dword ptr [esp+0x28]
	mov ebx,dword ptr [eax]
	add ecx,ecx
	add ecx,ecx
	add ecx,ecx
	add ebp,ecx
	mov byte ptr [esp+0xA0],0x20
	cmp ebx,esi
	je Block197

 Block192:
	cmp dword ptr [ebx+4],esi
	jne Block196

 Block193:
	mov edi,dword ptr [ebx]
	cmp edi,esi
	je Block195

 Block194:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push edi
	push esi
	push esi
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte

 Block195:
	mov dword ptr [ebx+4],esi

 Block196:
	mov ebx,dword ptr [ebx+4]
	jmp Block198

 Block197:
	xor ebx,ebx

 Block198:
	mov edx,dword ptr [ebp]
	push edx
	lea eax,[esp+0x18]
	push ebx
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	test eax,eax
	je Block200

 Block199:
	mov ecx,dword ptr [eax-4]
	jmp Block201

 Block200:
	xor ecx,ecx

 Block201:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x1F
	test eax,eax
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block203:
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA0],0xC
	test esi,esi
	je Block212

 Block204:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block211

 Block205:
	test esi,esi
	je Block211

 Block206:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block208

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block208:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block210

 Block209:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block210:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block211:
	mov dword ptr [esp+0x24],0

 Block212:
	inc dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x18]
	jmp Block183

 Block213:
	push 2
	push offset _S___4
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	cmp dword ptr [esp+0x44],ebp
	jle Block234

 Block214:
	lea edx,[esp+0x24]
	push 0x19C3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],ebp
	mov ebx,dword ptr [eax]
	mov byte ptr [esp+0xA0],0x22
	cmp ebx,ebp
	je Block220

 Block215:
	cmp dword ptr [ebx+4],ebp
	jne Block219

 Block216:
	mov edi,dword ptr [ebx]
	test edi,edi
	jne Block218

 Block217:
	mov edi,dword ptr [esp+0x18]
	xor esi,esi
	mov dword ptr [ebx+4],esi
	mov ebx,esi
	jmp Block221

 Block218:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [ebx+4],esi

 Block219:
	mov ebx,dword ptr [ebx+4]
	jmp Block221

 Block220:
	xor ebx,ebx

 Block221:
	mov eax,dword ptr [esp+0x44]
	push eax
	lea ecx,[esp+0x18]
	push ebx
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	xor ebp,ebp
	add esp,0xC
	cmp eax,ebp
	je Block223

 Block222:
	mov ecx,dword ptr [eax-4]
	jmp Block224

 Block223:
	xor ecx,ecx

 Block224:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x21
	cmp eax,ebp
	je Block226

 Block225:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block226:
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA0],0xC
	cmp esi,ebp
	je Block234

 Block227:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block234

 Block228:
	cmp esi,ebp
	je Block234

 Block229:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block231

 Block230:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block231:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block233

 Block232:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block233:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block234:
	cmp dword ptr [esp+0x40],ebp
	jle Block271

 Block235:
	cmp dword ptr [esp+0x64],ebp
	lea eax,[esp+0x24]
	jle Block250

 Block236:
	push 0x17EA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],ebp
	mov ebx,dword ptr [eax]
	mov byte ptr [esp+0xA0],0x24
	cmp ebx,ebp
	je Block242

 Block237:
	cmp dword ptr [ebx+4],ebp
	jne Block241

 Block238:
	mov edi,dword ptr [ebx]
	test edi,edi
	jne Block240

 Block239:
	mov edi,dword ptr [esp+0x18]
	xor esi,esi
	mov dword ptr [ebx+4],esi
	mov ebx,esi
	jmp Block243

 Block240:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [ebx+4],esi

 Block241:
	mov ebx,dword ptr [ebx+4]
	jmp Block243

 Block242:
	xor ebx,ebx

 Block243:
	lea ecx,[esp+0x14]
	push ebx
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	je Block245

 Block244:
	mov ecx,dword ptr [eax-4]
	jmp Block246

 Block245:
	xor ecx,ecx

 Block246:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x23
	cmp eax,ebp
	je Block248

 Block247:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block248:
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA0],0xC
	cmp esi,ebp
	je Block271

 Block249:
	lea edx,[esi+8]
	push edx
	jmp Block264

 Block250:
	push 0x19C4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],ebp
	mov ebx,dword ptr [eax]
	mov byte ptr [esp+0xA0],0x26
	cmp ebx,ebp
	je Block256

 Block251:
	cmp dword ptr [ebx+4],ebp
	jne Block255

 Block252:
	mov edi,dword ptr [ebx]
	test edi,edi
	jne Block254

 Block253:
	mov edi,dword ptr [esp+0x18]
	xor esi,esi
	mov dword ptr [ebx+4],esi
	mov ebx,esi
	jmp Block257

 Block254:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [ebx+4],esi

 Block255:
	mov ebx,dword ptr [ebx+4]
	jmp Block257

 Block256:
	xor ebx,ebx

 Block257:
	mov ecx,dword ptr [esp+0x40]
	push ecx
	lea edx,[esp+0x18]
	push ebx
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	xor ebp,ebp
	add esp,0xC
	cmp eax,ebp
	je Block259

 Block258:
	mov ecx,dword ptr [eax-4]
	jmp Block260

 Block259:
	xor ecx,ecx

 Block260:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x25
	cmp eax,ebp
	je Block262

 Block261:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block262:
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA0],0xC
	cmp esi,ebp
	je Block271

 Block263:
	lea eax,[esi+8]
	push eax

 Block264:
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block271

 Block265:
	cmp esi,ebp
	je Block271

 Block266:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block268

 Block267:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block268:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block270

 Block269:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block270:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block271:
	cmp dword ptr [esp+0x48],ebp
	jle Block292

 Block272:
	lea ecx,[esp+0x24]
	push 0x19C5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],ebp
	mov ebx,dword ptr [eax]
	mov byte ptr [esp+0xA0],0x28
	cmp ebx,ebp
	je Block278

 Block273:
	cmp dword ptr [ebx+4],ebp
	jne Block277

 Block274:
	mov edi,dword ptr [ebx]
	test edi,edi
	jne Block276

 Block275:
	mov edi,dword ptr [esp+0x18]
	xor esi,esi
	mov dword ptr [ebx+4],esi
	mov ebx,esi
	jmp Block279

 Block276:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [ebx+4],esi

 Block277:
	mov ebx,dword ptr [ebx+4]
	jmp Block279

 Block278:
	xor ebx,ebx

 Block279:
	mov edx,dword ptr [esp+0x48]
	push edx
	lea eax,[esp+0x18]
	push ebx
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	test eax,eax
	je Block281

 Block280:
	mov ecx,dword ptr [eax-4]
	jmp Block282

 Block281:
	xor ecx,ecx

 Block282:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x27
	test eax,eax
	je Block284

 Block283:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block284:
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA0],0xC
	test esi,esi
	je Block292

 Block285:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block292

 Block286:
	test esi,esi
	je Block292

 Block287:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block289

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block289:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block291

 Block290:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block291:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block292:
	mov ebp,dword ptr [esp+0x50]
	test ebp,ebp
	jle Block313

 Block293:
	lea edx,[esp+0x24]
	push 0x19C8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x14],0
	mov ebx,dword ptr [eax]
	mov byte ptr [esp+0xA0],0x2A
	test ebx,ebx
	je Block299

 Block294:
	cmp dword ptr [ebx+4],0
	jne Block298

 Block295:
	mov edi,dword ptr [ebx]
	test edi,edi
	jne Block297

 Block296:
	mov edi,dword ptr [esp+0x18]
	xor esi,esi
	mov dword ptr [ebx+4],esi
	mov ebx,esi
	jmp Block300

 Block297:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [ebx+4],esi

 Block298:
	mov ebx,dword ptr [ebx+4]
	mov ebp,dword ptr [esp+0x50]
	jmp Block300

 Block299:
	xor ebx,ebx

 Block300:
	push ebp
	lea eax,[esp+0x18]
	push ebx
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	test eax,eax
	je Block302

 Block301:
	mov ecx,dword ptr [eax-4]
	jmp Block303

 Block302:
	xor ecx,ecx

 Block303:
	push ecx
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0x29
	test eax,eax
	je Block305

 Block304:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block305:
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA0],0xC
	test esi,esi
	je Block313

 Block306:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block313

 Block307:
	test esi,esi
	je Block313

 Block308:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block310

 Block309:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block310:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block312

 Block311:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block312:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block313:
	cmp dword ptr [esp+0x48],0
	jg Block317

 Block314:
	cmp dword ptr [esp+0x44],0
	jg Block317

 Block315:
	cmp dword ptr [esp+0x40],0
	jg Block317

 Block316:
	test ebp,ebp
	jle Block318

 Block317:
	push 2
	push offset _S___4
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat

 Block318:
	mov eax,dword ptr [edi+0x20]
	test eax,eax
	je Block337

 Block319:
	cmp dword ptr [eax-4],0
	jbe Block337

 Block320:
	lea edx,[esp+0x14]
	push 0x19C7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [eax]
	mov byte ptr [esp+0xA0],0x2B
	test ebx,ebx
	je Block326

 Block321:
	cmp dword ptr [ebx+4],0
	jne Block325

 Block322:
	mov edi,dword ptr [ebx]
	test edi,edi
	jne Block324

 Block323:
	xor esi,esi
	mov dword ptr [ebx+4],esi
	mov edx,esi
	jmp Block327

 Block324:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebx+4],esi

 Block325:
	mov edx,dword ptr [ebx+4]
	jmp Block327

 Block326:
	xor edx,edx

 Block327:
	mov eax,edx
	lea esi,[eax+1]
	mov edi,edi

 Block328:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block328

 Block329:
	sub eax,esi
	push eax
	push edx
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0xC
	test eax,eax
	je Block337

 Block330:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block337

 Block331:
	test esi,esi
	je Block337

 Block332:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block334

 Block333:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block334:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block336

 Block335:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block336:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block337:
	push 2
	push offset _S_W
	lea ecx,[esp+0x24]
	call ZXString<char>::_Cat
	mov edi,dword ptr [esp+0x1C]

 Block338:
	test edi,edi
	je Block358

 Block339:
	cmp byte ptr [edi],0
	je Block358

 Block340:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA0],0x2C
	test eax,eax
	je Block349

 Block341:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block349

 Block342:
	lea esi,[eax+8]
	test esi,esi
	je Block349

 Block343:
	add esi,0xFFFFFFF8
	mov dword ptr [esp+0x34],esi
	test esi,esi
	je Block345

 Block344:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block345:
	cmp dword ptr [esp+0x4C],0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x58],esp
	mov byte ptr [esp+0xAC],0x2D
	mov dword ptr [ecx],0
	push edx
	je Block351

 Block346:
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0x10]
	push ecx
	push 4
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	je Block350

 Block347:
	cmp eax,0x2001
	je Block350

 Block348:
	mov ebx,0x7FFFFFFF
	jmp Block354

 Block349:
	xor esi,esi
	mov dword ptr [esp+0x34],esi
	jmp Block345

 Block350:
	mov ebx,dword ptr [esi+0x110]
	jmp Block354

 Block351:
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0x10]
	push ecx
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
	cmp eax,0x2001
	je Block353

 Block352:
	mov ebx,0x7FFFFFFF
	cmp eax,1
	jne Block354

 Block353:
	mov ebx,dword ptr [esp+0x58]

 Block354:
	mov byte ptr [esp+0xA0],0xC
	test esi,esi
	je Block359

 Block355:
	add esi,8
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block359

 Block356:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block359

 Block357:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block359

 Block358:
	mov ebx,dword ptr [esp+0x58]

 Block359:
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xA4],0
	call edx
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	test edi,edi
	je Block361

 Block360:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block361:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x90
	ret 4
}
}
// ActSP::~ActSP
__SUB_CLASS_THIS0(002AEBB0, __thiscall, 62057,  ActSP, void) {
__asm {

 Block0:
	add ecx,4
	jmp  ZArray<long>::RemoveAll
}
}
// CQuest::LoadSay
_SUB_EXCEPTION_HANDLER(2AEF90)
__SUB_CLASS_THIS(002AEF90, __thiscall, 61969,  CQuest, void, NakedParam<_x_com_ptr<IWzProperty>>, ZArray<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AEF90
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
	mov ecx,dword ptr [esp+0x54]
	xor ebx,ebx
	mov dword ptr [esp+0x48],ebx
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0x50]
	cmp ecx,ebx
	sete al
	cmp al,bl
	je Block3

 Block1:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp ecx,ebx
	je Block39

 Block2:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8

 Block3:
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[esp+0x18]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x4C],1
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	lea ecx,[esp+0x18]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],3
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ebp,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],4
	mov dword ptr [esp+0x1C],ebx
	mov edi,edi

 Block13:
	cmp ebp,ebx
	je Block4

 Block14:
	mov ecx,dword ptr [ebp]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 1
	push ebp
	call ecx
	test eax,eax
	jne Block33

 Block15:
	mov edx,dword ptr [esp+0x28]
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],5
	cmp ecx,ebx
	je Block4

 Block16:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x50],4
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x48],6
	jne Block18

 Block17:
	mov eax,dword ptr [eax+8]
	jmp Block19

 Block18:
	mov eax,offset _S___3

 Block19:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],8
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov esi,dword ptr [esp+0x10]
	cmp esi,ebx
	je Block26

 Block24:
	cmp byte ptr [esi],bl
	je Block26

 Block25:
	mov ecx,dword ptr [esp+0x54]
	lea eax,[esp+0x10]
	push eax
	push 0xFFFFFFFF
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block26:
	mov byte ptr [esp+0x48],4
	cmp esi,ebx
	je Block28

 Block27:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block28:
	cmp word ptr [esp+0x20],8
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block13

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block31:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jge Block13

 Block32:
	jmp Block9

 Block33:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],3
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x4C],bl
	call eax
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CQuest::AskQuestion
_SUB_EXCEPTION_HANDLER(2B3790)
__SUB_CLASS_THIS(002B3790, __thiscall, 61970,  CQuest, int32_t, ZArray<ZXString<char> >&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B3790
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
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
	mov dword ptr [ebp+0x54],ebx
	mov edi,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x50],0
	mov eax,dword ptr [ebx+0x18]
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov ecx,ebx
	call CQuest::LoadSay
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi

 Block3:
	mov ecx,edi
	call ZArray<ZXString<char>>::GetCount
	cmp esi,eax
	jae Block128

 Block4:
	mov ecx,edi
	call ZArray<ZXString<char>>::GetCount
	dec eax
	cmp esi,eax
	je Block82

 Block5:
	mov eax,dword ptr [edi]
	lea eax,[eax+esi*4]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],0
	call ZXString<char>::op_assign
	push 0
	push 0
	push offset _S_L0
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp-4],0
	call ZXString<char>::Find__0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCB2
	push ecx
	mov edi,eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebx+0x18]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block101

 Block6:
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x58],ebx
	test eax,eax
	je Block9

 Block7:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x24]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x24]
	mov dword ptr [ebp+0x58],ebx
	test eax,eax
	jge Block9

 Block8:
	cmp eax,0x80004002
	jne Block102

 Block9:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],4
	jne Block12

 Block10:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],5
	test ebx,ebx
	je Block101

 Block14:
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x30],ebx
	test eax,eax
	je Block17

 Block15:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x20]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x20]
	mov dword ptr [ebp+0x30],ebx
	test eax,eax
	jge Block17

 Block16:
	cmp eax,0x80004002
	jne Block102

 Block17:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],8
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov dword ptr [ebp+0x64],0
	test edi,edi
	jl Block25

 Block22:
	test ebx,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block25

 Block23:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x105F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],9
	test ebx,ebx
	je Block101

 Block24:
	lea ecx,[ebp]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov esi,1
	or dword ptr [ebp+0x50],esi
	push eax
	mov byte ptr [ebp-4],0xA
	call get_int32
	add esp,8
	test eax,eax
	jne Block26

 Block25:
	xor esi,esi

 Block26:
	test byte ptr [ebp+0x50],1
	mov eax,8
	mov dword ptr [ebp+0x4C],esi
	mov dword ptr [ebp-4],eax
	je Block31

 Block27:
	and dword ptr [ebp+0x50],0xFFFFFFFE
	cmp word ptr [ebp],ax
	jne Block30

 Block28:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	test esi,esi
	je Block53

 Block32:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block45

 Block33:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block45

 Block34:
	add eax,8
	je Block45

 Block35:
	lea esi,[eax-8]
	mov dword ptr [ebp+0x38],esi
	test esi,esi
	je Block37

 Block36:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push edi
	push edx
	lea ecx,[ebp+0x68]
	mov byte ptr [ebp-4],0xC
	call ZXString<char>::Left
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax+0x10]
	push ecx
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,dword ptr [ebp+0x78]
	call ZArray<ZXString<char>>::GetCount
	mov edx,eax
	mov eax,dword ptr [ebp+0x5C]
	dec edx
	cmp eax,edx
	sbb ecx,ecx
	neg ecx
	xor edx,edx
	test eax,eax
	setg dl
	push ecx
	mov ecx,esi
	push edx
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	push 0xFFFFFFFF
	push edi
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[ebp+0x68]
	call ZXString<char>::Mid
	mov edi,eax
	push 0
	push 2
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0xD
	mov dword ptr [ebp+0x60],0
	call ZXString<char>::GetBuffer
	mov cx,word ptr [_S___4]
	mov word ptr [eax],cx
	push 2
	lea ecx,[ebp+0x60]
	call ZXString<char>::ReleaseBuffer
	push edi
	lea edx,[ebp+0x28]
	push edx
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0xE
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[ebp+0x68]
	mov byte ptr [ebp-4],0xF
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,0x2000
	jne Block46

 Block44:
	mov edi,1
	jmp Block49

 Block45:
	xor esi,esi
	mov dword ptr [ebp+0x38],esi
	jmp Block37

 Block46:
	cmp eax,1
	je Block48

 Block47:
	cmp eax,0x2001
	jne Block103

 Block48:
	mov edi,dword ptr [ebp+0x64]

 Block49:
	mov byte ptr [ebp-4],8
	test esi,esi
	je Block51

 Block50:
	push 0
	lea ecx,[ebp+0x34]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [ebp+0x38],0

 Block51:
	test edi,edi
	je Block53

 Block52:
	dec dword ptr [ebp+0x5C]
	jmp Block78

 Block53:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block67

 Block54:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block67

 Block55:
	add eax,8
	je Block67

 Block56:
	lea esi,[eax-8]
	mov dword ptr [ebp+0x48],esi
	test esi,esi
	je Block58

 Block57:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block58:
	cmp dword ptr [ebp+0x4C],0
	mov byte ptr [ebp-4],0x11
	je Block60

 Block59:
	mov dword ptr [esi+0xC34],2
	mov dword ptr [esi+0xC38],1

 Block60:
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x68]
	mov dword ptr [ebp+0x64],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax+0x10]
	push ecx
	push 4
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	je Block62

 Block61:
	cmp eax,0x2001
	jne Block112

 Block62:
	mov esi,dword ptr [esi+0x110]
	test esi,esi
	jl Block117

 Block63:
	test ebx,ebx
	sete al
	test al,al
	jne Block118

 Block64:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x12
	test ebx,ebx
	je Block101

 Block65:
	lea edx,[ebp-0x2C]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x13
	jne Block68

 Block66:
	mov eax,dword ptr [eax+8]
	jmp Block69

 Block67:
	xor esi,esi
	mov dword ptr [ebp+0x48],esi
	jmp Block58

 Block68:
	mov eax,offset _S___3

 Block69:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x15
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov edi,dword ptr [ebp+0x60]
	test edi,edi
	je Block75

 Block74:
	cmp byte ptr [edi],0
	jne Block119

 Block75:
	inc dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block77

 Block76:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block77:
	push 0
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],8
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [ebp+0x48],0

 Block78:
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block80

 Block79:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block80:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block94

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block94

 Block82:
	cmp dword ptr [ebx+0x14],1
	je Block128

 Block83:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov dword ptr [ebp-4],0x18
	test eax,eax
	je Block96

 Block84:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block96

 Block85:
	add eax,8
	je Block96

 Block86:
	lea esi,[eax-8]
	mov dword ptr [ebp+0x40],esi
	test esi,esi
	je Block88

 Block87:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block88:
	mov ecx,dword ptr [ebp+0x78]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [ebp+0x5C]
	push 1
	push 0
	push ecx
	lea eax,[edx+eax*4]
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push eax
	mov dword ptr [ebp-4],0x19
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edi,dword ptr [ebp+0x54]
	mov ecx,dword ptr [edi+0x10]
	push ecx
	push 1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_YESNO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	sub eax,6
	jne Block97

 Block89:
	inc dword ptr [ebp+0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block94

 Block90:
	add esi,8
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block93

 Block91:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block93

 Block92:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block93:
	mov dword ptr [ebp+0x40],0

 Block94:
	cmp dword ptr [ebp+0x5C],0
	jl Block128

 Block95:
	mov esi,dword ptr [ebp+0x5C]
	mov edi,dword ptr [ebp+0x78]
	mov ebx,dword ptr [ebp+0x54]
	jmp Block3

 Block96:
	xor esi,esi
	mov dword ptr [ebp+0x40],esi
	jmp Block88

 Block97:
	sub eax,1
	jne Block99

 Block98:
	mov ecx,edi
	call CQuest::OnQuestRefuse

 Block99:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block111

 Block100:
	push 0
	lea ecx,[ebp+0x3C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	xor eax,eax
	jmp Block129

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	push eax
	call _com_issue_error

 Block103:
	mov byte ptr [ebp-4],8
	test esi,esi
	je Block106

 Block104:
	lea ecx,[ebp+0x34]

 Block105:
	push 0
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block106:
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block108

 Block107:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block108:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx

 Block109:
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	xor eax,eax
	jmp Block129

 Block112:
	mov byte ptr [ebp-4],8
	test esi,esi
	je Block114

 Block113:
	push 0
	lea ecx,[ebp+0x44]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block114:
	mov byte ptr [ebp-4],4
	test ebx,ebx
	je Block116

 Block115:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block116:
	mov eax,dword ptr [ebp+0x58]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0
	call eax
	jmp Block109

 Block117:
	mov byte ptr [ebp-4],8
	lea ecx,[ebp+0x44]
	jmp Block105

 Block118:
	mov byte ptr [ebp-4],8
	jmp Block113

 Block119:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x64],eax
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block127

 Block120:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block127

 Block121:
	add eax,8
	je Block127

 Block122:
	lea esi,[eax-8]
	mov dword ptr [ebp+0x40],esi
	test esi,esi
	je Block124

 Block123:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block124:
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x60]
	mov dword ptr [ebp+0x64],esp
	push edx
	mov byte ptr [ebp-4],0x17
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax+0x10]
	push ecx
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
	mov byte ptr [ebp-4],0x15
	test esi,esi
	je Block126

 Block125:
	push 0
	lea ecx,[ebp+0x3C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block126:
	add edi,0xFFFFFFF4
	push edi
	mov byte ptr [ebp-4],0x11
	call ZXString<char>::_Release
	add esp,4
	push 0
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],8
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],4
	call eax
	jmp Block108

 Block127:
	xor esi,esi
	mov dword ptr [ebp+0x40],esi
	jmp Block124

 Block128:
	mov eax,1

 Block129:
	lea esp,[ebp-0x3C]
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
// CQuest::~CQuest
_SUB_EXCEPTION_HANDLER(2AF240)
__SUB_CLASS_THIS0(002AF240, __thiscall, 61966,  CQuest, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AF240
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
	int 3// TODO: 	mov dword ptr [esi],offset CQuest::`vftable'
	lea ecx,[esi+0x2C]
	mov dword ptr [esp+0x14],5
	call ZArray<ActSP>::RemoveAll
	lea ecx,[esi+0x28]
	mov byte ptr [esp+0x14],4
	call ZArray<ActSkill>::RemoveAll
	lea ecx,[esi+0x24]
	mov byte ptr [esp+0x14],3
	call ZArray<ItemInfo>::RemoveAll
	lea ecx,[esi+0x20]
	mov byte ptr [esp+0x14],2
	call ZArray<ItemInfo>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x14],1
	call ZArray<ItemInfo>::RemoveAll
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CQuest::SayNormal
_SUB_EXCEPTION_HANDLER(2B0760)
__SUB_CLASS_THIS(002B0760, __thiscall, 61970,  CQuest, int32_t, ZArray<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B0760
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
	mov dword ptr [esp+0x14],esi
	mov ebx,dword ptr [esp+0x38]
	mov eax,dword ptr [esi+0x18]
	push ebx
	push ecx
	xor ebp,ebp
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov ecx,esi
	call CQuest::LoadSay
	xor edi,edi

 Block3:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	je Block41

 Block4:
	mov eax,dword ptr [eax-4]
	cmp edi,eax
	jae Block41

 Block5:
	dec eax
	cmp edi,eax
	je Block21

 Block6:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x30],ebp
	cmp eax,ebp
	je Block13

 Block7:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,ebp
	je Block13

 Block8:
	add eax,8
	cmp eax,ebp
	je Block13

 Block9:
	lea esi,[eax-8]
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebp
	je Block11

 Block10:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,dword ptr [ebx]
	push ebp
	push ebp
	push ecx
	lea eax,[ecx+edi*4]
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push eax
	mov dword ptr [esp+0x40],1
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+0x10]
	push eax
	push ebp
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	jne Block14

 Block12:
	xor eax,eax
	jmp Block15

 Block13:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block11

 Block14:
	mov eax,dword ptr [eax-4]

 Block15:
	dec eax
	cmp edi,eax
	sbb ecx,ecx
	neg ecx
	xor edx,edx
	cmp edi,ebp
	setg dl
	push ecx
	mov ecx,esi
	push edx
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	sub eax,0x2000
	mov dword ptr [esp+0x30],0xFFFFFFFF
	je Block20

 Block16:
	sub eax,1
	jne Block38

 Block17:
	inc edi

 Block18:
	cmp esi,ebp
	je Block30

 Block19:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebp
	jmp Block30

 Block20:
	dec edi
	jmp Block18

 Block21:
	cmp dword ptr [esi+0x14],1
	je Block41

 Block22:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x30],2
	cmp eax,ebp
	je Block32

 Block23:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,ebp
	je Block32

 Block24:
	add eax,8
	cmp eax,ebp
	je Block32

 Block25:
	lea esi,[eax-8]
	mov dword ptr [esp+0x24],esi
	cmp esi,ebp
	je Block27

 Block26:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	mov ecx,dword ptr [ebx]
	push 1
	push ebp
	push ecx
	lea eax,[ecx+edi*4]
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push eax
	mov dword ptr [esp+0x40],3
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+0x10]
	push eax
	push 1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_YESNO
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	sub eax,6
	jne Block33

 Block28:
	inc edi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp esi,ebp
	je Block30

 Block29:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [esp+0x24],ebp

 Block30:
	cmp edi,ebp
	jl Block41

 Block31:
	mov esi,dword ptr [esp+0x14]
	jmp Block3

 Block32:
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	jmp Block27

 Block33:
	sub eax,1
	jne Block35

 Block34:
	mov ecx,dword ptr [esp+0x14]
	call CQuest::OnQuestRefuse

 Block35:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp esi,ebp
	je Block37

 Block36:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block37:
	xor eax,eax
	jmp Block42

 Block38:
	cmp esi,ebp
	je Block40

 Block39:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block40:
	xor eax,eax
	jmp Block42

 Block41:
	mov eax,1

 Block42:
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
// ActSkill::~ActSkill
__SUB_CLASS_THIS0(002AEBA0, __thiscall, 61994,  ActSkill, void) {
__asm {

 Block0:
	add ecx,0x10
	jmp  ZArray<long>::RemoveAll
}
}
// CQuest::CQuest
_SUB_EXCEPTION_HANDLER(2B35F0)
__SUB_CLASS_THIS(002B35F0, __thiscall, 61964,  CQuest, void, uint16_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B35F0
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
	mov esi,ecx
	mov dword ptr [esp+0x24],esi
	xor eax,eax
	mov dword ptr [esi+4],eax
	xor edi,edi
	mov dword ptr [esi+8],eax
	mov ebp,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x44]
	int 3// TODO: 	mov dword ptr [esi],offset CQuest::`vftable'
	mov word ptr [esi+0xC],bp
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x1C],edi
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x2C],edi
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [esp+0x3C],6
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	je Block5

 Block1:
	add eax,0xFFFFFFF0
	mov dword ptr [esp+0x14],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esp+0x14]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,edi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esp+0x2C],edi

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ecx+0x2148]
	mov dword ptr [esp+0x20],edx
	call CWvsContext::GetCurFieldID
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x2064]
	movzx edx,bp
	lea eax,[esp+0x14]
	mov dword ptr [esp+0x18],ecx
	push eax
	lea ecx,[ebx+0x6F5]
	mov dword ptr [esp+0x18],edx
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	je Block7

 Block6:
	mov dword ptr [esi+0x14],1
	jmp Block11

 Block7:
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[ebx+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetPos
	test eax,eax
	je Block10

 Block8:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x4080]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x1C]
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	push edx
	push eax
	mov eax,dword ptr [esp+0x30]
	push eax
	push ebx
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push ebp
	call CQuestMan::CheckStartDemand
	test eax,eax
	jne Block10

 Block9:
	mov dword ptr [esi+0x14],2
	jmp Block11

 Block10:
	mov dword ptr [esi+0x14],edi

 Block11:
	mov ecx,esi
	call CQuest::LoadReward
	mov eax,esi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 8
}
}
// CQuest::LoadReward
_SUB_EXCEPTION_HANDLER(2AF2E0)
__SUB_CLASS_THIS0(002AF2E0, __thiscall, 61966,  CQuest, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AF2E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA8
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
	mov dword ptr [ebp+0x58],esi
	lea ecx,[esi+0x1C]
	call ZArray<ItemInfo>::RemoveAll
	lea ecx,[esi+0x24]
	call ZArray<ItemInfo>::RemoveAll
	lea ecx,[esi+0x20]
	call ZArray<ItemInfo>::RemoveAll
	lea ecx,[esi+0x28]
	call ZArray<ActSkill>::RemoveAll
	lea ecx,[esi+0x2C]
	mov dword ptr [ebp-0x74],ecx
	call ZArray<ActSP>::RemoveAll
	xor edi,edi
	mov dword ptr [ebp+0x50],edi
	lea eax,[ebp+0x64]
	push 0xCA8
	push eax
	mov dword ptr [ebp-4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	movzx ecx,word ptr [esi+0xC]
	mov eax,dword ptr [eax]
	push 1
	push ecx
	push eax
	lea edx,[ebp+0x50]
	push edx
	mov byte ptr [ebp-4],1
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x64]
	add esp,0x10
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x84]
	push eax
	call ebx
	lea ecx,[ebp-0x84]
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
	lea edx,[ebp-0x94]
	push edx
	mov byte ptr [ebp-4],2
	call ebx
	lea eax,[ebp-0x94]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov eax,dword ptr [ebp+0x50]
	push edi
	push edi
	lea ecx,[ebp-0x84]
	push ecx
	lea edx,[ebp-0x94]
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[ebp-0xB4]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],edi
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
	cmp word ptr [ebp-0xB4],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],7
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0xAC]
	xor edx,edx
	mov word ptr [ebp-0xB4],dx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[ebp-0xB4]
	push eax
	call ebx

 Block15:
	cmp word ptr [ebp-0x94],8
	mov byte ptr [ebp-4],8
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x8C]
	xor ecx,ecx
	mov word ptr [ebp-0x94],cx
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x94]
	push edx
	call ebx

 Block19:
	cmp word ptr [ebp-0x84],8
	mov byte ptr [ebp-4],9
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x84],ax
	mov eax,dword ptr [ebp-0x7C]
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x84]
	push ecx
	call ebx

 Block23:
	mov edi,dword ptr [ebp+0x48]
	test edi,edi
	je Block85

 Block24:
	xor ebx,ebx
	mov dword ptr [ebp+0x54],ebx

 Block25:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x60]
	push eax
	push edi
	mov dword ptr [ebp+0x60],0
	call ecx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block27:
	cmp ebx,dword ptr [ebp+0x60]
	jae Block85

 Block28:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x20]
	mov byte ptr [ebp-4],0xA
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	test eax,eax
	je Block31

 Block29:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x64]
	mov esi,ecx
	mov dword ptr [ebp+0x5C],esi
	test eax,eax
	jge Block31

 Block30:
	cmp eax,0x80004002
	jne Block3

 Block31:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0xD
	jne Block34

 Block32:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	lea ecx,[ebp-0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+0x3D]
	push edx
	add eax,0x39
	push eax
	mov byte ptr [ebp-4],0xE
	call _ZtlSecureFuseHelper<short>::call
	mov ebx,dword ptr [ebp-0x30]
	movsx ecx,ax
	add esp,8
	mov dword ptr [ebp+0x60],ecx
	mov byte ptr [ebp-4],0xD
	test ebx,ebx
	je Block40

 Block36:
	add ebx,0xFFFFFFF0
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block37:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block39

 Block38:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block39:
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ebp-0x30],0

 Block40:
	cmp ecx,0x7D1
	jne Block42

 Block41:
	mov dword ptr [ebp+0x40],0x20000
	mov dword ptr [ebp+0x44],0
	jmp Block43

 Block42:
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,1
	xor edx,edx
	call __allshl
	mov dword ptr [ebp+0x40],eax
	mov dword ptr [ebp+0x44],edx

 Block43:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0xCAA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xF
	test esi,esi
	je Block7

 Block44:
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x10
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x30],8
	mov edi,eax
	mov byte ptr [ebp-4],0xD
	jne Block47

 Block45:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x191C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x60]
	mov byte ptr [ebp-4],0x11
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x60],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xD
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	xor edx,edx
	xor eax,eax
	or ebx,edx
	or eax,edi
	mov ecx,ebx
	mov edx,eax
	or edx,ecx
	jne Block54

 Block53:
	or eax,0xFFFFFFFF
	or ecx,0xFFFFFFFF

 Block54:
	and eax,dword ptr [ebp+0x40]
	and ecx,dword ptr [ebp+0x44]
	or eax,ecx
	jne Block56

 Block55:
	mov eax,0x51EB851F
	imul dword ptr [ebp+0x60]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,9
	jne Block84

 Block56:
	push 2
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x1AB2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x10]
	mov byte ptr [ebp-4],0x13
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x14
	call get_int32
	mov edi,8
	add esp,8
	mov ebx,eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x10],di
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x2034]
	cmp ebx,2
	je Block63

 Block61:
	cmp ebx,eax
	je Block63

 Block62:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],9
	call ecx
	inc dword ptr [ebp+0x54]
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x58]
	jmp Block25

 Block63:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x965
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x1C]
	mov byte ptr [ebp-4],0x15
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x16
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x28],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x1C],di
	jne Block66

 Block64:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x1AA6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x17
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x18
	call get_int32
	add esp,8
	cmp word ptr [ebp],8
	mov edi,eax
	mov dword ptr [ebp-0x24],edi
	mov byte ptr [ebp-4],0xD
	jne Block70

 Block68:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	test edi,edi
	jle Block83

 Block72:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x964
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x70]
	mov byte ptr [ebp-4],0x19
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1A
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x70],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xD
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[ebp-0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	test ebx,ebx
	jne Block78

 Block77:
	mov ecx,dword ptr [ebp+0x58]
	add ecx,0x1C
	jmp Block80

 Block78:
	jge Block81

 Block79:
	mov ecx,dword ptr [ebp+0x58]
	add ecx,0x24

 Block80:
	push 0xFFFFFFFF
	call ZArray<ItemInfo>::InsertBefore
	mov edx,dword ptr [ebp-0x28]
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],9
	call ecx
	inc dword ptr [ebp+0x54]
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x58]
	jmp Block25

 Block81:
	test ebx,ebx
	jle Block83

 Block82:
	mov ecx,dword ptr [ebp+0x58]
	push 0xFFFFFFFF
	lea edx,[ebp-0x28]
	push edx
	add ecx,0x20
	call ZArray<ItemInfo>::Insert

 Block83:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],9
	call ecx
	inc dword ptr [ebp+0x54]
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x58]
	jmp Block25

 Block84:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],9
	call eax
	inc dword ptr [ebp+0x54]
	mov ebx,dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x48]
	mov esi,dword ptr [ebp+0x58]
	jmp Block25

 Block85:
	lea ecx,[ebp+0x64]
	push 0xCA9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	movzx edx,word ptr [esi+0xC]
	mov eax,dword ptr [eax]
	push 1
	push edx
	push eax
	lea eax,[ebp+0x50]
	push eax
	mov byte ptr [ebp-4],0x1B
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x64]
	add esp,0x10
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block87:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x60]
	push ecx
	call edi
	lea edx,[ebp-0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0x1C
	call edi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	push 0
	push 0
	lea edx,[ebp-0x60]
	push edx
	mov edx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x2C]
	push eax
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x1D
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1E
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea eax,[ebp-0x70]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x54],edi
	test eax,eax
	je Block97

 Block94:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x64]
	mov edi,ecx
	mov dword ptr [ebp+0x54],edi
	test eax,eax
	jge Block97

 Block95:
	cmp eax,0x80004002
	je Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	mov ebx,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp-0x70],bx
	jne Block100

 Block98:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[ebp-0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x2C],bx
	jne Block104

 Block102:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x60],bx
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	test edi,edi
	je Block155

 Block110:
	mov dword ptr [ebp+0x60],0
	mov edi,edi

 Block111:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x5C]
	push eax
	push edi
	mov dword ptr [ebp+0x5C],0
	call ecx
	test eax,eax
	jge Block113

 Block112:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block113:
	mov edx,dword ptr [ebp+0x60]
	cmp edx,dword ptr [ebp+0x5C]
	jae Block155

 Block114:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x60]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x24
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x25
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x64],edi
	test eax,eax
	je Block117

 Block115:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x4C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x4C]
	mov edi,ecx
	mov dword ptr [ebp+0x64],edi
	test eax,eax
	jge Block117

 Block116:
	cmp eax,0x80004002
	jne Block3

 Block117:
	mov ebx,8
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp],bx
	jne Block125

 Block118:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block120

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block120:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block121:
	mov dword ptr [ebp-0x40],0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x965
	push ecx
	mov byte ptr [ebp-4],0x28
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x29
	test edi,edi
	je Block7

 Block122:
	lea edx,[ebp-0x1C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2A
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x50],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x1C],bx
	jne Block126

 Block123:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block127

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block125:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp]
	push eax
	call esi
	jmp Block121

 Block126:
	lea ecx,[ebp-0x1C]
	push ecx
	call esi

 Block127:
	push 0
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_SKILLLEVEL
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x10]
	mov byte ptr [ebp-4],0x2B
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2C
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x4C],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp+0x10],bx
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp+0x10]
	push ecx
	call esi

 Block131:
	push 0
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_MASTERLEVEL
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x20]
	mov byte ptr [ebp-4],0x2D
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2E
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x48],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp+0x20],bx
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[ebp+0x20]
	push ecx
	call esi

 Block135:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push offset _S_JOB__1
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x2F
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x30
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x68],esi
	test eax,eax
	je Block138

 Block136:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x44]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov esi,ecx
	mov dword ptr [ebp+0x68],esi
	test eax,eax
	jge Block138

 Block137:
	cmp eax,0x80004002
	jne Block3

 Block138:
	mov byte ptr [ebp-4],0x32
	cmp word ptr [ebp+0x30],bx
	jne Block141

 Block139:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block142:
	test esi,esi
	je Block152

 Block143:
	xor ebx,ebx

 Block144:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x5C]
	push edx
	push esi
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block146

 Block145:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block146:
	cmp ebx,dword ptr [ebp+0x5C]
	jae Block152

 Block147:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x33
	mov ecx,esi
	mov byte ptr [ebp-4],0x32
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x34
	call _xvariant_t::op_long
	push 0xFFFFFFFF
	lea ecx,[ebp-0x40]
	mov edi,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x32
	jne Block150

 Block148:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov edi,dword ptr [ebp+0x64]
	inc ebx
	jmp Block144

 Block150:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov edi,dword ptr [ebp+0x64]
	inc ebx
	jmp Block144

 Block152:
	mov ecx,dword ptr [ebp+0x58]
	push 0xFFFFFFFF
	add ecx,0x28
	call ZArray<ActSkill>::InsertBefore
	mov ecx,dword ptr [ebp-0x50]
	mov edx,dword ptr [ebp-0x4C]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x48]
	mov dword ptr [eax+8],ecx
	lea ecx,[ebp-0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x44]
	push ecx
	lea ecx,[eax+0x10]
	mov dword ptr [eax+0xC],edx
	call ZArray<long>::operator=
	mov byte ptr [ebp-4],0x28
	test esi,esi
	je Block154

 Block153:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block154:
	lea ecx,[ebp-0x40]
	mov byte ptr [ebp-4],0x27
	call ZArray<long>::RemoveAll
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0x23
	call edx
	inc dword ptr [ebp+0x60]
	mov edi,dword ptr [ebp+0x54]
	mov esi,dword ptr [ebp+0x58]
	jmp Block111

 Block155:
	lea eax,[ebp+0x68]
	push 0x15BD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	movzx ecx,word ptr [esi+0xC]
	mov eax,dword ptr [eax]
	push 1
	push ecx
	push eax
	lea edx,[ebp+0x50]
	push edx
	mov byte ptr [ebp-4],0x35
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x68]
	add esp,0x10
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block157

 Block156:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block157:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x20]
	push eax
	call esi
	lea ecx,[ebp+0x20]
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
	lea edx,[ebp+0x30]
	push edx
	mov byte ptr [ebp-4],0x36
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block161

 Block160:
	push eax
	call _com_issue_error

 Block161:
	mov eax,dword ptr [ebp+0x50]
	push 0
	push 0
	lea ecx,[ebp+0x20]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	mov bl,0x37
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x38
	jne Block163

 Block162:
	push 0x80004003
	call _com_issue_error

 Block163:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x39
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	je Block167

 Block164:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x68]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x68]
	mov esi,ecx
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	jge Block167

 Block165:
	cmp eax,0x80004002
	je Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	mov ebx,8
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp],bx
	jne Block170

 Block168:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block171:
	mov byte ptr [ebp-4],0x3C
	cmp word ptr [ebp+0x30],bx
	jne Block174

 Block172:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp+0x20],bx
	jne Block178

 Block176:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	test esi,esi
	je Block216

 Block180:
	xor ebx,ebx
	mov dword ptr [ebp+0x60],ebx
	nop

 Block181:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x64]
	push eax
	push esi
	mov dword ptr [ebp+0x64],0
	call ecx
	test eax,eax
	jge Block183

 Block182:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block183:
	cmp ebx,dword ptr [ebp+0x64]
	jae Block216

 Block184:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x3E
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x3D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3F
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	test eax,eax
	je Block187

 Block185:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x68]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x68]
	mov esi,ecx
	mov dword ptr [ebp+0x5C],esi
	test eax,eax
	jge Block187

 Block186:
	cmp eax,0x80004002
	jne Block3

 Block187:
	mov edi,8
	mov byte ptr [ebp-4],0x41
	cmp word ptr [ebp-0x1C],di
	jne Block190

 Block188:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block191:
	mov dword ptr [ebp-0x30],0
	push 0
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push offset _S_SPVALUE
	mov byte ptr [ebp-4],0x42
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x43
	test esi,esi
	je Block7

 Block192:
	lea ecx,[ebp+0x10]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x42
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x44
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x34],eax
	mov byte ptr [ebp-4],0x42
	cmp word ptr [ebp+0x10],di
	jne Block195

 Block193:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block196:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push offset _S_JOB__1
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0xA4]
	push ecx
	mov byte ptr [ebp-4],0x45
	mov ecx,esi
	mov byte ptr [ebp-4],0x42
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x46
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x4C],esi
	test eax,eax
	je Block199

 Block197:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x44]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x44]
	mov esi,ecx
	mov dword ptr [ebp+0x4C],esi
	test eax,eax
	jge Block199

 Block198:
	cmp eax,0x80004002
	jne Block3

 Block199:
	mov byte ptr [ebp-4],0x48
	cmp word ptr [ebp-0xA4],di
	jne Block202

 Block200:
	mov eax,dword ptr [ebp-0x9C]
	xor edx,edx
	mov word ptr [ebp-0xA4],dx
	test eax,eax
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea eax,[ebp-0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block203:
	test esi,esi
	je Block213

 Block204:
	xor ebx,ebx

 Block205:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x64]
	push edx
	push esi
	mov dword ptr [ebp+0x64],0
	call eax
	test eax,eax
	jge Block207

 Block206:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block207:
	cmp ebx,dword ptr [ebp+0x64]
	jae Block213

 Block208:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],0x49
	mov ecx,esi
	mov byte ptr [ebp-4],0x48
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x4A
	call _xvariant_t::op_long
	push 0xFFFFFFFF
	lea ecx,[ebp-0x30]
	mov edi,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x48
	jne Block211

 Block209:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	jmp Block205

 Block211:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block212:
	inc ebx
	jmp Block205

 Block213:
	mov ecx,dword ptr [ebp-0x74]
	push 0xFFFFFFFF
	call ZArray<ActSP>::InsertBefore
	mov ecx,dword ptr [ebp-0x34]
	lea edx,[ebp-0x30]
	mov dword ptr [eax],ecx
	push edx
	lea ecx,[eax+4]
	call ZArray<long>::operator=
	mov byte ptr [ebp-4],0x42
	test esi,esi
	je Block215

 Block214:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block215:
	lea ecx,[ebp-0x30]
	mov byte ptr [ebp-4],0x41
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x3D
	call eax
	inc dword ptr [ebp+0x60]
	mov edi,dword ptr [ebp+0x54]
	mov esi,dword ptr [ebp+0x58]
	mov ebx,dword ptr [ebp+0x60]
	jmp Block181

 Block216:
	mov byte ptr [ebp-4],0x23
	test esi,esi
	je Block218

 Block217:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block218:
	mov byte ptr [ebp-4],9
	test edi,edi
	je Block220

 Block219:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block220:
	cmp dword ptr [ebp+0x48],0
	mov byte ptr [ebp-4],0
	je Block222

 Block221:
	mov eax,dword ptr [ebp+0x48]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block222:
	cmp dword ptr [ebp+0x50],0
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block224

 Block223:
	mov ecx,dword ptr [ebp+0x50]
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString16::_Release
	add esp,4

 Block224:
	lea esp,[ebp-0xC4]
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
	ret
}
}
// CQuest::OnQuestRefuse
_SUB_EXCEPTION_HANDLER(2B0500)
__SUB_CLASS_THIS0(002B0500, __thiscall, 61966,  CQuest, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B0500
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
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x601
	push eax
	mov dword ptr [esp+0x5C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0x18]
	mov byte ptr [esp+0x54],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x58],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x50],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x48],4
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [esp+0x18]
	lea edx,[esp+0x14]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block11:
	mov ecx,edi
	call CQuest::LoadSay
	mov eax,dword ptr [esp+0x14]
	xor edi,edi
	mov ebp,eax

 Block12:
	cmp eax,ebx
	je Block32

 Block13:
	cmp edi,dword ptr [eax-4]
	jae Block32

 Block14:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x48],5
	cmp eax,ebx
	je Block22

 Block15:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,ebx
	je Block22

 Block16:
	add eax,8
	cmp eax,ebx
	je Block22

 Block17:
	lea esi,[eax-8]
	mov dword ptr [esp+0x28],esi
	cmp esi,ebx
	je Block19

 Block18:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ebp
	mov byte ptr [esp+0x58],6
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax+0x10]
	push ecx
	push ebx
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx-4]
	dec eax
	cmp edi,eax
	sbb eax,eax
	xor ecx,ecx
	neg eax
	cmp edi,ebx
	setg cl
	push eax
	push ecx
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	sub eax,0x2000
	mov byte ptr [esp+0x48],4
	je Block23

 Block20:
	sub eax,1
	jne Block28

 Block21:
	inc edi
	add ebp,4
	jmp Block24

 Block22:
	xor esi,esi
	mov dword ptr [esp+0x28],esi
	jmp Block19

 Block23:
	dec edi
	sub ebp,4

 Block24:
	cmp esi,ebx
	je Block26

 Block25:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [esp+0x28],ebx

 Block26:
	cmp edi,ebx
	mov esi,dword ptr [esp+0x18]
	jl Block32

 Block27:
	mov eax,dword ptr [esp+0x14]
	jmp Block12

 Block28:
	cmp esi,ebx
	je Block30

 Block29:
	push ebx
	lea ecx,[esp+0x28]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block30:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],bl
	cmp eax,ebx
	je Block34

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block34

 Block32:
	mov byte ptr [esp+0x48],bl
	cmp esi,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block34:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
