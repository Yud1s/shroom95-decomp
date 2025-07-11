#include "regen.hpp"
// Npc.ipp
#include "Npc.hpp"

// CNpc::Update
_SUB_EXCEPTION_HANDLER(277B50)
__SUB_CLASS_THIS0(00277B50, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_277B50
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
	cmp dword ptr [esi+0xF4],ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block8

 Block1:
	mov edi,dword ptr [esi+0xF4]
	cmp edi,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	cmp dword ptr [esp+0x14],ebx
	jne Block8

 Block6:
	mov eax,dword ptr [esi+0xF4]
	cmp eax,ebx
	je Block8

 Block7:
	mov dword ptr [esi+0xF4],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp dword ptr [esi+0x138],ebx
	je Block71

 Block9:
	mov eax,dword ptr [esi+0xA8]
	cmp dword ptr [eax+0xE4],ebx
	je Block12

 Block10:
	mov ecx,dword ptr [esi+0x8C]
	cmp ecx,ebx
	je Block71

 Block11:
	call CAvatar::Update

 Block12:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebx
	je Block14

 Block13:
	lea edi,[eax-0xC]
	jmp Block15

 Block14:
	xor edi,edi

 Block15:
	mov eax,dword ptr [esi+0x94]
	cmp eax,ebx
	je Block17

 Block16:
	lea ebp,[eax-0xC]
	jmp Block18

 Block17:
	xor ebp,ebp

 Block18:
	push ebx
	push ebx
	mov ecx,edi
	call CVecCtrl::UpdatePassive
	mov edi,dword ptr [edi+0x1D8]
	push 0
	push edi
	mov ecx,esi
	mov ebx,eax
	call CNpc::SetMoveAction
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block28

 Block19:
	mov eax,dword ptr [esi+0xE4]
	test eax,eax
	jle Block21

 Block20:
	add eax,0xFFFFFFE2
	mov dword ptr [esi+0xE4],eax

 Block21:
	cmp dword ptr [esi+0x98],0
	jne Block28

 Block22:
	mov ecx,dword ptr [esi+0xA8]
	mov eax,dword ptr [ecx+0xC]
	test eax,eax
	je Block26

 Block23:
	cmp ebx,0xFFFFFFFF
	jne Block25

 Block24:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CNpc::DoActionOrChat
	jmp Block27

 Block25:
	test eax,eax
	jne Block28

 Block26:
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CNpc::DoActionOrChat
	test eax,eax
	je Block28

 Block27:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	push eax
	push ecx
	mov ecx,esi
	call CNpc::GenerateMovePath

 Block28:
	push 0
	mov ecx,esi
	call CNpc::SetQuestList
	mov ecx,esi
	call CNpc::SetClientActionByQuest
	push 0
	lea ecx,[esi+0x14]
	call CChatBalloon::CheckTimeOut
	cmp dword ptr [esi+0xEC],0
	je Block36

 Block29:
	cmp dword ptr [esi+0xF0],0
	sete al
	test al,al
	sete al
	test al,al
	jne Block31

 Block30:
	cmp dword ptr [esi+0x18],0
	mov eax,0xFFFFFFFF
	je Block32

 Block31:
	mov eax,0xFFFFFF

 Block32:
	mov edi,dword ptr [esi+0xEC]
	test edi,edi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0xE0]
	push edi
	call eax
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	mov ecx,dword ptr [esi+0xA8]
	cmp dword ptr [ecx+0x4C],0
	je Block38

 Block37:
	mov ecx,esi
	call CNpc::SetMapleTVMessage

 Block38:
	mov eax,dword ptr [esi+0xA8]
	mov ebx,1
	test eax,eax
	je Block40

 Block39:
	cmp dword ptr [eax+0xE4],0
	jne Block63

 Block40:
	mov eax,dword ptr [esi+0xAC]
	sar eax,1
	sub eax,ebx
	je Block43

 Block41:
	sub eax,ebx
	jne Block43

 Block42:
	mov edi,ebx
	jmp Block44

 Block43:
	xor edi,edi

 Block44:
	mov ecx,dword ptr [esi+0x8C]
	test ecx,ecx
	je Block46

 Block45:
	call CAvatar::GetOneTimeAction
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	mov eax,edx
	jmp Block47

 Block46:
	mov eax,dword ptr [esi+0xB0]
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	mov eax,ecx

 Block47:
	test eax,eax
	je Block49

 Block48:
	mov eax,dword ptr [esi+0xB0]
	jmp Block50

 Block49:
	mov eax,edi

 Block50:
	add dword ptr [esi+0xB8],0xFFFFFFE2
	cmp dword ptr [esi+0xB8],0
	jg Block63

 Block51:
	push eax
	mov ecx,esi
	call CNpc::GetActionFrameList
	lea edi,[esi+0xB4]
	push edi
	mov ebp,eax
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	add esp,4
	mov ecx,esi
	call CNpc::IsOnPlayingOneTimeAction
	test eax,eax
	je Block54

 Block52:
	cmp dword ptr [edi],0
	jne Block56

 Block53:
	mov ecx,esi
	mov dword ptr [esi+0xB0],0xFFFFFFFF
	mov dword ptr [esi+0xC0],0
	call CNpc::PrepareActionLayer
	jmp Block63

 Block54:
	cmp dword ptr [edi],0
	jne Block56

 Block55:
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [edi],edx

 Block56:
	mov edi,dword ptr [edi]
	mov edi,dword ptr [edi+4]
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [esi+0xE8]
	mov dword ptr [esp+0x44],0
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::ShiftCanvas
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov edx,dword ptr [edi+0x10]
	mov dword ptr [esi+0xB8],edx

 Block63:
	mov eax,dword ptr [esi+0x160]
	mov ecx,dword ptr [esi+0x164]
	lea edi,[esi+0x160]
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esi+0x168],eax
	mov dword ptr [esi+0x16C],ecx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov ecx,dword ptr [esi+0x90]
	mov dword ptr [esp+0x44],ebx
	test ecx,ecx
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea edx,[esp+0x2C]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	add esi,0x164
	push esi
	push edi
	call IWzVector2D::_GetSnapshot
	cmp word ptr [esp+0x2C],8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret

 Block70:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
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
// CNpc::SetQuestList
_SUB_EXCEPTION_HANDLER(271980)
__SUB_CLASS_THIS(00271980, __thiscall, 50385,  CNpc, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_271980
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
	lea ecx,[esi+0xCC]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD0]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD4]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xC8]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD8]
	call ZArray<unsigned short>::RemoveAll
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,ecx
	mov dword ptr [esp+0x34],eax
	mov eax,dword ptr [eax+0x4254]
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x3C],eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block5

 Block1:
	lea ebx,[eax-0x10]
	lea edi,[ebx+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block4:
	mov dword ptr [esp+0x40],0

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x4080]
	lea ebx,[ecx+0x2148]
	mov dword ptr [esp+0x20],eax
	call CWvsContext::GetCurFieldID
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x2064]
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x14],eax
	xor ecx,ecx

 Block6:
	mov eax,dword ptr [esi+0xC4]
	xor edi,edi
	mov dword ptr [esp+0x24],ecx
	cmp eax,edi
	je Block23

 Block7:
	cmp ecx,dword ptr [eax-4]
	jae Block23

 Block8:
	mov edx,eax
	movzx edi,word ptr [edx+ecx*2]
	lea eax,[edi-0x4B0]
	mov ecx,0xC7
	mov dword ptr [esp+0x30],edi
	cmp ax,cx
	jbe Block22

 Block9:
	movzx edx,di
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[ebp+0x6F5]
	mov dword ptr [esp+0x30],edx
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	je Block13

 Block10:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [esp+0x14]
	push ebx
	push ebp
	push edx
	push edi
	call CQuestMan::CheckCompleteDemand
	push 0xFFFFFFFF
	test eax,eax
	jne Block12

 Block11:
	lea ecx,[esi+0xD4]
	call ZArray<unsigned short>::InsertBefore
	mov ecx,dword ptr [esp+0x24]
	mov word ptr [eax],di
	inc ecx
	jmp Block6

 Block12:
	lea ecx,[esi+0xD0]
	call ZArray<unsigned short>::InsertBefore
	mov ecx,dword ptr [esp+0x24]
	mov word ptr [eax],di
	inc ecx
	jmp Block6

 Block13:
	push 0
	lea eax,[esp+0x34]
	push eax
	lea ecx,[ebp+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	push 0
	test eax,eax
	je Block17

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x24]
	push ecx
	mov ecx,dword ptr [esi+0xA8]
	push edx
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [esp+0x20]
	push eax
	push ebx
	push ebp
	push edx
	push edi
	call CQuestMan::CheckStartDemand
	push 0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	lea ecx,[esi+0xCC]
	call ZArray<unsigned short>::InsertBefore
	mov ecx,dword ptr [esp+0x24]
	mov word ptr [eax],di
	inc ecx
	jmp Block6

 Block16:
	lea ecx,[esi+0xC8]
	call ZArray<unsigned short>::InsertBefore
	mov ecx,dword ptr [esp+0x24]
	mov word ptr [eax],di
	inc ecx
	jmp Block6

 Block17:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x24]
	push eax
	mov eax,dword ptr [esi+0xA8]
	push ecx
	mov ecx,dword ptr [eax]
	push edx
	push ebx
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x30]
	push edi
	call CQuestMan::CheckStartDemand
	test eax,eax
	je Block20

 Block18:
	push 0xFFFFFFFF
	lea ecx,[esi+0xCC]
	call ZArray<unsigned short>::InsertBefore
	mov ecx,dword ptr [esp+0x34]
	push edi
	mov word ptr [eax],di
	call CWvsContext::IsWorthlessQuest
	test eax,eax
	jne Block22

 Block19:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esp+0x28],eax
	inc ecx
	jmp Block6

 Block20:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x20]
	push 0xA
	push edx
	mov edx,dword ptr [esi+0xA8]
	push eax
	mov eax,dword ptr [edx]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push ebx
	push ebp
	push eax
	push edi
	call CQuestMan::CheckStartDemand
	test eax,eax
	je Block22

 Block21:
	push 0xFFFFFFFF
	lea ecx,[esi+0xD8]
	call ZArray<unsigned short>::InsertBefore
	mov word ptr [eax],di

 Block22:
	mov ecx,dword ptr [esp+0x24]
	inc ecx
	jmp Block6

 Block23:
	mov eax,dword ptr [esi+0xD4]
	mov ebx,3
	cmp eax,edi
	je Block26

 Block24:
	cmp dword ptr [eax-4],edi
	jbe Block26

 Block25:
	mov dword ptr [esi+0xDC],2
	jmp Block36

 Block26:
	mov eax,dword ptr [esi+0xCC]
	cmp eax,edi
	je Block29

 Block27:
	cmp dword ptr [eax-4],edi
	jbe Block29

 Block28:
	mov dword ptr [esi+0xDC],edi
	jmp Block36

 Block29:
	mov eax,dword ptr [esi+0xD0]
	cmp eax,edi
	je Block32

 Block30:
	cmp dword ptr [eax-4],edi
	jbe Block32

 Block31:
	mov dword ptr [esi+0xDC],1
	jmp Block36

 Block32:
	mov eax,dword ptr [esi+0xD8]
	cmp eax,edi
	je Block35

 Block33:
	cmp dword ptr [eax-4],edi
	jbe Block35

 Block34:
	mov dword ptr [esi+0xDC],ebx
	jmp Block36

 Block35:
	mov dword ptr [esi+0xDC],6

 Block36:
	cmp dword ptr [esi+0xDC],edi
	jne Block39

 Block37:
	cmp dword ptr [esp+0x28],1
	jne Block39

 Block38:
	xor ecx,ecx
	cmp dword ptr [esp+0x38],edi
	setne cl
	add ecx,4
	mov dword ptr [esi+0xDC],ecx

 Block39:
	cmp dword ptr [esp+0x74],edi
	jne Block41

 Block40:
	mov edx,dword ptr [esi+0xDC]
	cmp edx,dword ptr [esi+0xE0]
	je Block88

 Block41:
	mov eax,dword ptr [esi+0xDC]
	mov dword ptr [esi+0xE0],eax
	cmp eax,6
	jne Block44

 Block42:
	mov eax,dword ptr [esi+0xF0]
	cmp eax,edi
	je Block88

 Block43:
	mov dword ptr [esi+0xF0],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block88

 Block44:
	cmp dword ptr [esi+0x90],edi
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block88

 Block45:
	cmp dword ptr [esi+0xE8],edi
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block88

 Block46:
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x6C],edi
	cmp eax,ebx
	jne Block48

 Block47:
	lea eax,[esp+0x38]
	push 0x19EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x70],1
	call ZXString16::op_assign
	jmp Block53

 Block48:
	cmp eax,5
	jne Block50

 Block49:
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[esp+0x7C]
	call ZXString16::AssignCharStr
	jmp Block55

 Block50:
	cmp eax,4
	jne Block52

 Block51:
	lea ecx,[esp+0x38]
	push 0x19EE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0x70],2
	call ZXString16::op_assign
	jmp Block53

 Block52:
	lea edx,[esp+0x38]
	push 0x19BC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x7C]
	push edx
	mov byte ptr [esp+0x78],bl
	call ZXString16::Format
	add esp,0xC

 Block53:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x6C],0
	cmp eax,edi
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	mov edi,dword ptr [esp+0x74]
	test edi,edi
	je Block84

 Block56:
	cmp word ptr [edi],0
	je Block84

 Block57:
	mov eax,dword ptr [esi+0xE8]
	cmp dword ptr [esi+0x8C],0
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	je Block61

 Block58:
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block60:
	mov ecx,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x7C],4
	call CAvatar::GetHeight
	jmp Block66

 Block61:
	test eax,eax
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block63:
	mov ecx,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x7C],5
	test ecx,ecx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	call IWzGr2DLayer::Getheight

 Block66:
	mov edx,dword ptr [esi+0x13C]
	mov ecx,0xFFFFFFF1
	sub ecx,dword ptr [esi+0x140]
	add edx,0x14
	sub ecx,eax
	mov eax,dword ptr [esi+0x90]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block68:
	push 0
	lea eax,[esp+0x58]
	push edi
	push eax
	mov byte ptr [esp+0x94],0
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	add esi,0xF0
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push eax
	call ebp
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x70],6
	call ebp
	lea eax,[esp+0x44]
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
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x6C],7
	test ecx,ecx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x6C],6
	cmp word ptr [esp+0x44],si
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x44]
	push edx
	call ebx

 Block80:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x54],si
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block86

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block83:
	lea ecx,[esp+0x54]
	push ecx
	call ebx
	jmp Block86

 Block84:
	mov eax,dword ptr [esi+0xF0]
	test eax,eax
	je Block86

 Block85:
	mov dword ptr [esi+0xF0],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block86:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test edi,edi
	je Block88

 Block87:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block88:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
// CNpc::SetAcceptQuestOnlyOne
_SUB_EXCEPTION_HANDLER(272010)
__SUB_CLASS_THIS(00272010, __thiscall, 50400,  CNpc, void, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_272010
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esi+0xCC]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD0]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD4]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xC8]
	call ZArray<unsigned short>::RemoveAll
	xor ebp,ebp
	lea eax,[esp+0x28]
	mov dword ptr [esi+0x154],ebp
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x20],ecx
	cmp edi,ebp
	je Block5

 Block1:
	add edi,0xFFFFFFF0
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
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x2C],ebp

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebx,dword ptr [ecx+0x4080]
	lea ebp,[ecx+0x2148]
	call CWvsContext::GetCurFieldID
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x2064]
	mov edi,dword ptr [esp+0x60]
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x24],eax
	xor ecx,ecx

 Block6:
	mov eax,dword ptr [esi+0xC4]
	mov dword ptr [esp+0x14],ecx
	test eax,eax
	je Block14

 Block7:
	cmp ecx,dword ptr [eax-4]
	jae Block14

 Block8:
	mov edx,eax
	cmp di,word ptr [edx+ecx*2]
	jne Block12

 Block9:
	lea eax,[edi-0x4B0]
	mov edx,0xC7
	cmp ax,dx
	jbe Block12

 Block10:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x20]
	push 0
	push eax
	mov eax,dword ptr [esi+0xA8]
	push ecx
	mov ecx,dword ptr [eax]
	push ebx
	push ebp
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x40]
	push edi
	call CQuestMan::CheckStartDemand
	test eax,eax
	jne Block13

 Block11:
	mov ecx,dword ptr [esp+0x14]

 Block12:
	inc ecx
	jmp Block6

 Block13:
	push 0xFFFFFFFF
	lea ecx,[esi+0xCC]
	call ZArray<unsigned short>::InsertBefore
	mov word ptr [eax],di

 Block14:
	mov eax,dword ptr [esi+0xCC]
	xor ecx,ecx
	cmp eax,ecx
	je Block17

 Block15:
	cmp dword ptr [eax-4],ecx
	jbe Block17

 Block16:
	mov dword ptr [esi+0xDC],ecx
	jmp Block18

 Block17:
	mov dword ptr [esi+0xDC],6

 Block18:
	mov eax,dword ptr [esi+0xDC]
	mov dword ptr [esi+0xE0],eax
	cmp eax,6
	jne Block21

 Block19:
	mov eax,dword ptr [esi+0xF0]
	cmp eax,ecx
	je Block68

 Block20:
	mov dword ptr [esi+0xF0],ecx
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block68

 Block21:
	cmp dword ptr [esi+0x90],ecx
	sete al
	test al,al
	sete al
	test al,al
	je Block68

 Block22:
	cmp dword ptr [esi+0xE8],ecx
	sete al
	test al,al
	sete al
	test al,al
	je Block68

 Block23:
	mov dword ptr [esp+0x60],ecx
	mov dword ptr [esp+0x58],ecx
	lea ecx,[esp+0x24]
	push 0x19BC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x68]
	push eax
	mov byte ptr [esp+0x64],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esi+0xE8]
	cmp dword ptr [esi+0x8C],0
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	je Block37

 Block26:
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	mov ecx,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x68],2
	call CAvatar::GetHeight
	mov edx,dword ptr [esi+0x13C]
	mov ecx,0xFFFFFFF1
	sub ecx,dword ptr [esi+0x140]
	add edx,0x14
	sub ecx,eax
	mov eax,dword ptr [esi+0x90]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	mov ebp,dword ptr [esp+0x7C]
	push 0
	lea eax,[esp+0x44]
	push ebp
	push eax
	mov byte ptr [esp+0x80],0
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF0]
	add esp,0x28
	cmp edi,eax
	je Block35

 Block31:
	mov dword ptr [esi+0xF0],eax
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block33:
	test edi,edi
	je Block35

 Block34:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block35:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block52

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block52

 Block37:
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block39:
	mov edi,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x68],3
	test edi,edi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x24]
	push ecx
	push edi
	mov dword ptr [esp+0x2C],0
	call edx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	mov ecx,dword ptr [esi+0x13C]
	mov eax,0xFFFFFFF1
	sub eax,dword ptr [esi+0x140]
	add ecx,0x14
	sub eax,dword ptr [esp+0x24]
	push eax
	mov eax,dword ptr [esi+0x90]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block45:
	mov ebp,dword ptr [esp+0x7C]
	push 0
	lea ecx,[esp+0x44]
	push ebp
	push ecx
	mov byte ptr [esp+0x80],0
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF0]
	add esp,0x28
	cmp edi,eax
	je Block50

 Block46:
	mov dword ptr [esi+0xF0],eax
	test eax,eax
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	test edi,edi
	je Block50

 Block49:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block50:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[esp+0x30]
	mov bl,4
	push edx
	mov byte ptr [esp+0x5C],bl
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov esi,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x58],5
	test esi,esi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x30],si
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block62:
	mov byte ptr [esp+0x58],0
	cmp word ptr [esp+0x40],si
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block66:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test ebp,ebp
	je Block68

 Block67:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block68:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 4
}
}
// CNpc::DrawMapleTVMessage
_SUB_EXCEPTION_HANDLER(273C80)
__SUB_CLASS_THIS0(00273C80, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_273C80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x9C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB0]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x50],ebp
	mov esi,dword ptr [TSingleton<CMapleTVMan>::ms_pInstance]
	lea eax,[esp+0x5C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0xBC],ebp
	call CMapleTVMan::GetMessageStr1
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xBC],1
	call CMapleTVMan::GetMessageStr2
	lea edx,[esp+0x60]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xBC],2
	call CMapleTVMan::GetMessageStr3
	lea eax,[esp+0x64]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xBC],3
	call CMapleTVMan::GetMessageStr4
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xBC],4
	call CMapleTVMan::GetMessageStr5
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xC8],5
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x60]
	call ZXString<char>::ReleaseBuffer
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x64]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x58]
	call ZXString<char>::ReleaseBuffer
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x70]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x64]
	call ZXString<char>::ReleaseBuffer
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x74]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x68]
	call ZXString<char>::ReleaseBuffer
	push 1
	push ebp
	push 1
	push 0x400
	lea ecx,[esp+0x68]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x5C]
	call ZXString<char>::ReleaseBuffer
	lea edx,[esp+0x80]
	push edx
	mov ecx,esi
	call CMapleTVMan::GetSenderName
	lea eax,[esp+0x68]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xBC],6
	call CMapleTVMan::GetReceivername
	mov byte ptr [esp+0xB8],7
	lea ebx,[ebp-2]
	cmp dword ptr [edi+0xF8],ebp
	je Block9

 Block1:
	mov ecx,3
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],ebx
	mov ecx,dword ptr [edi+0xF8]
	mov byte ptr [esp+0xB8],8
	cmp ecx,ebp
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x50]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xB8],7
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	cmp dword ptr [edi+0x100],ebp
	je Block18

 Block10:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],ebx
	mov ecx,dword ptr [edi+0x100]
	mov byte ptr [esp+0xB8],9
	cmp ecx,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x50]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xB8],7
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	movzx eax,byte ptr [esi+0x45C]
	sub eax,ebp
	mov dword ptr [esp+0x4C],ebp
	je Block87

 Block19:
	sub eax,1
	je Block54

 Block20:
	sub eax,1
	jne Block88

 Block21:
	lea edx,[esp+0x84]
	push 0xF9D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xC0],0xD
	call ZXString16::Format
	mov eax,dword ptr [esp+0x8C]
	add esp,8
	mov byte ptr [esp+0xB8],7
	cmp eax,ebp
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [edi+0x104]
	push ebp
	push 0xFF
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	mov eax,dword ptr [edi+0xA8]
	mov ecx,dword ptr [eax+0x54]
	mov edx,dword ptr [eax+0x50]
	mov eax,dword ptr [edi+0x90]
	add ecx,0x2D
	push ecx
	add edx,0x77
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [esp+0x6C]
	push ebp
	push eax
	lea ecx,[esp+0xB0]
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x10C]
	add esp,0x28
	cmp esi,eax
	je Block32

 Block28:
	mov dword ptr [edi+0x10C],eax
	cmp eax,ebp
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block30:
	cmp esi,ebp
	je Block32

 Block31:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block32:
	mov eax,dword ptr [esp+0x8C]
	cmp eax,ebp
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	cmp dword ptr [edi+0x10C],ebp
	je Block53

 Block35:
	lea eax,[esp+0x70]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea edx,[esp+0x3C]
	mov bl,0xE
	push edx
	mov byte ptr [esp+0xBC],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov ecx,dword ptr [edi+0x10C]
	mov byte ptr [esp+0xB8],0xF
	cmp ecx,ebp
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x3C],si
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov byte ptr [esp+0xB8],7
	cmp word ptr [esp+0x70],si
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebp
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov esi,dword ptr [edi+0x10C]
	cmp esi,ebp
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebp
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	mov dword ptr [edi+0x134],1
	jmp Block88

 Block54:
	lea ecx,[esp+0x88]
	push 0xF9C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0xC0],0xA
	call ZXString16::Format
	mov eax,dword ptr [esp+0x90]
	add esp,8
	mov byte ptr [esp+0xB8],7
	cmp eax,ebp
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block56:
	mov eax,dword ptr [edi+0x104]
	push ebp
	push 0xFF
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block58:
	mov eax,dword ptr [edi+0xA8]
	mov ecx,dword ptr [eax+0x54]
	mov edx,dword ptr [eax+0x50]
	mov eax,dword ptr [edi+0x90]
	add ecx,0x2D
	push ecx
	add edx,0x71
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block60:
	mov eax,dword ptr [esp+0x6C]
	push ebp
	push eax
	lea ecx,[esp+0x90]
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x108]
	add esp,0x28
	cmp esi,eax
	je Block65

 Block61:
	mov dword ptr [edi+0x108],eax
	cmp eax,ebp
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block63:
	cmp esi,ebp
	je Block65

 Block64:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block65:
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebp
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	cmp dword ptr [edi+0x108],ebp
	je Block86

 Block68:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	lea edx,[esp+0x24]
	mov bl,0xB
	push edx
	mov byte ptr [esp+0xBC],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov ecx,dword ptr [edi+0x108]
	mov byte ptr [esp+0xB8],0xC
	cmp ecx,ebp
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x24],si
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov byte ptr [esp+0xB8],7
	cmp word ptr [esp+0x14],si
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov esi,dword ptr [edi+0x108]
	cmp esi,ebp
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebp
	jge Block86

 Block85:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block86:
	mov dword ptr [edi+0x130],1
	jmp Block88

 Block87:
	mov dword ptr [esp+0x4C],0xFF000000

 Block88:
	mov dword ptr [esp+0x34],ebp
	lea ecx,[esp+0x6C]
	push 0x3D0
	push ecx
	mov byte ptr [esp+0xC0],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB8],0x11
	cmp eax,ebp
	je Block90

 Block89:
	mov eax,dword ptr [eax]
	jmp Block91

 Block90:
	xor eax,eax

 Block91:
	push ebp
	lea edx,[esp+0x38]
	push edx
	push eax
	call PcCreate_IWzCanvas
	mov ecx,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0xB8],0x10
	cmp ecx,ebp
	je Block93

 Block92:
	call _xbstr_t::Data_t::Release

 Block93:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
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
	lea edx,[esp+0x14]
	mov bl,0x12
	push edx
	mov byte ptr [esp+0xBC],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
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
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB8],0x13
	cmp ecx,ebp
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 0x384
	push 0x258
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x14],si
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebp
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x24],si
	jne Block106

 Block104:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov edx,dword ptr [esp+0x34]
	cmp edx,ebp
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	push dword ptr [esp+0x4C]
	mov ecx,dword ptr [edi+0xA8]
	mov eax,dword ptr [ecx+0x54]
	mov ecx,dword ptr [ecx+0x50]
	mov ebx,dword ptr [edx]
	push 0x5A
	push 0xF0
	add eax,0x1C1
	push eax
	add ecx,0x12C
	push ecx
	mov esi,edx
	push edx
	mov edx,dword ptr [ebx+0x8C]
	call edx
	test eax,eax
	jge Block111

 Block110:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block111:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call ebp
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0xBC],0x14
	call ebp
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block115

 Block114:
	push eax
	call _com_issue_error

 Block115:
	mov eax,dword ptr [edi+0x114]
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x18]
	push edx
	push eax
	mov eax,dword ptr [esp+0x68]
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x15
	push eax
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xC8],0x16
	test ecx,ecx
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	mov eax,dword ptr [edi+0xA8]
	mov edx,dword ptr [eax+0x54]
	mov eax,dword ptr [eax+0x50]
	add edx,0x1C6
	push edx
	add eax,0x16C
	push eax
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xB8],0x14
	cmp word ptr [esp+0x14],si
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x24],si
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xBC],0x17
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	mov edx,dword ptr [esp+0x54]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [edi+0x114]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x18
	push edx
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xC8],0x19
	test ecx,ecx
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	mov eax,dword ptr [edi+0xA8]
	mov edx,dword ptr [eax+0x54]
	mov eax,dword ptr [eax+0x50]
	add edx,0x1D6
	push edx
	add eax,0x16C
	push eax
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xB8],0x17
	cmp word ptr [esp+0x14],si
	jne Block134

 Block132:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x24],si
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xBC],0x1A
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	mov edx,dword ptr [esp+0x60]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [edi+0x114]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x1B
	push edx
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xC8],0x1C
	test ecx,ecx
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	mov eax,dword ptr [edi+0xA8]
	mov edx,dword ptr [eax+0x54]
	mov eax,dword ptr [eax+0x50]
	add edx,0x1E6
	push edx
	add eax,0x16C
	push eax
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xB8],0x1A
	cmp word ptr [esp+0x14],si
	jne Block148

 Block146:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x24],si
	jne Block152

 Block150:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
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
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xBC],0x1D
	call ebp
	lea edx,[esp+0x14]
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
	mov edx,dword ptr [esp+0x64]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [edi+0x114]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x1E
	push edx
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xC8],0x1F
	test ecx,ecx
	jne Block159

 Block158:
	push 0x80004003
	call _com_issue_error

 Block159:
	mov eax,dword ptr [edi+0xA8]
	mov edx,dword ptr [eax+0x54]
	mov eax,dword ptr [eax+0x50]
	add edx,0x1F6
	push edx
	add eax,0x16C
	push eax
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xB8],0x1D
	cmp word ptr [esp+0x14],si
	jne Block162

 Block160:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x24],si
	jne Block166

 Block164:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block167:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xBC],0x20
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block171

 Block170:
	push eax
	call _com_issue_error

 Block171:
	mov edx,dword ptr [esp+0x58]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [edi+0x114]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x21
	push edx
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xC8],0x22
	test ecx,ecx
	jne Block173

 Block172:
	push 0x80004003
	call _com_issue_error

 Block173:
	mov eax,dword ptr [edi+0xA8]
	mov edx,dword ptr [eax+0x54]
	mov eax,dword ptr [eax+0x50]
	add edx,0x206
	push edx
	add eax,0x16C
	push eax
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xB8],0x20
	cmp word ptr [esp+0x14],si
	jne Block176

 Block174:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x24],si
	jne Block180

 Block178:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block181:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
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
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xBC],0x23
	call ebp
	lea edx,[esp+0x14]
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
	mov edx,dword ptr [esp+0x80]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [edi+0x114]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x24
	push edx
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xC8],0x25
	test ecx,ecx
	jne Block187

 Block186:
	push 0x80004003
	call _com_issue_error

 Block187:
	mov eax,dword ptr [edi+0xA8]
	mov edx,dword ptr [eax+0x54]
	mov eax,dword ptr [eax+0x50]
	add edx,0x20D
	push edx
	add eax,0x133
	push eax
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0xB8],0x23
	cmp word ptr [esp+0x14],si
	jne Block190

 Block188:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x24],si
	jne Block194

 Block192:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block195:
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block197

 Block196:
	mov eax,dword ptr [eax-4]
	jmp Block198

 Block197:
	xor eax,eax

 Block198:
	lea edx,[esp+0x24]
	push edx
	lea esi,[eax*4]
	call ebp
	lea eax,[esp+0x24]
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
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xBC],0x26
	call ebp
	lea edx,[esp+0x14]
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
	mov edx,dword ptr [esp+0x68]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [edi+0x114]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x27
	push edx
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xC8],0x28
	test ecx,ecx
	jne Block204

 Block203:
	push 0x80004003
	call _com_issue_error

 Block204:
	mov eax,dword ptr [edi+0xA8]
	mov edx,dword ptr [eax+0x54]
	mov eax,dword ptr [eax+0x50]
	add edx,0x20D
	sub eax,esi
	push edx
	add eax,0x1FE
	push eax
	mov byte ptr [esp+0xD0],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB8],0x26
	jne Block207

 Block205:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xB8],0x10
	jne Block214

 Block209:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block211

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block211:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block212:
	lea edx,[esp+0x90]
	push edx
	call ebp
	lea eax,[esp+0x90]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block215

 Block213:
	push eax
	call _com_issue_error

 Block214:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x24]
	push ecx
	call esi
	jmp Block212

 Block215:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0xBC],0x29
	call ebp
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block217

 Block216:
	push eax
	call _com_issue_error

 Block217:
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0xBC],0x2A
	call ebp
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block219

 Block218:
	push eax
	call _com_issue_error

 Block219:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0xBC],0x2B
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block221

 Block220:
	push eax
	call _com_issue_error

 Block221:
	lea ecx,[esp+0x14]
	mov bl,0x2C
	push ecx
	mov byte ptr [esp+0xBC],bl
	call ebp
	lea edx,[esp+0x14]
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
	mov edi,dword ptr [edi+0x104]
	mov byte ptr [esp+0xB8],0x2D
	test edi,edi
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	lea eax,[esp+0x90]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x78]
	push edx
	mov edx,dword ptr [esp+0x40]
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	push edx
	lea eax,[esp+0xB8]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0xA0],di
	jne Block228

 Block226:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	test eax,eax
	je Block229

 Block227:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block228:
	lea edx,[esp+0xA0]
	push edx
	call esi

 Block229:
	mov byte ptr [esp+0xB8],bl
	cmp word ptr [esp+0x14],di
	jne Block232

 Block230:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea ecx,[esp+0x14]
	push ecx
	call esi

 Block233:
	mov byte ptr [esp+0xB8],0x2B
	cmp word ptr [esp+0x24],di
	jne Block236

 Block234:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block237

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block237

 Block236:
	lea eax,[esp+0x24]
	push eax
	call esi

 Block237:
	mov byte ptr [esp+0xB8],0x2A
	cmp word ptr [esp+0x70],di
	jne Block240

 Block238:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block241

 Block239:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block241

 Block240:
	lea edx,[esp+0x70]
	push edx
	call esi

 Block241:
	mov byte ptr [esp+0xB8],0x29
	cmp word ptr [esp+0x3C],di
	jne Block244

 Block242:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea ecx,[esp+0x3C]
	push ecx
	call esi

 Block245:
	mov byte ptr [esp+0xB8],0x10
	cmp word ptr [esp+0x90],di
	jne Block248

 Block246:
	mov eax,dword ptr [esp+0x98]
	xor edx,edx
	mov word ptr [esp+0x90],dx
	test eax,eax
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea eax,[esp+0x90]
	push eax
	call esi

 Block249:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB8],7
	test eax,eax
	je Block251

 Block250:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block251:
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xB8],6
	test eax,eax
	je Block253

 Block252:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block253:
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0xB8],5
	test eax,eax
	je Block255

 Block254:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block255:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xB8],4
	test eax,eax
	je Block257

 Block256:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block257:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xB8],3
	test eax,eax
	je Block259

 Block258:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block259:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xB8],2
	test eax,eax
	je Block261

 Block260:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block261:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xB8],1
	test eax,eax
	je Block263

 Block262:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block263:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xB8],0
	test eax,eax
	je Block265

 Block264:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block265:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block267

 Block266:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block267:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret
}
}
// CNpc::OnChat
_SUB_EXCEPTION_HANDLER(275520)
__SUB_CLASS_THIS(00275520, __thiscall, 50394,  CNpc, void, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_275520
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
	cmp dword ptr [edi+0x138],0
	mov dword ptr [esp+0x30],0
	je Block27

 Block1:
	cmp dword ptr [edi+0x150],0
	jne Block27

 Block2:
	cmp dword ptr [edi+0xF0],0
	sete al
	test al,al
	sete al
	test al,al
	je Block6

 Block3:
	mov ecx,dword ptr [edi+0xF0]
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	call IWzGr2DLayer::Getvisible
	test eax,eax
	jne Block27

 Block6:
	mov eax,dword ptr [edi+0x8C]
	test eax,eax
	je Block20

 Block7:
	push 0xFFFFFFFF
	lea ecx,[esp+0x3C]
	call _xbstr_t::op_char_str
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::CreateFromCharStr
	push 0
	push 0
	push offset _S_NAME__1
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],1
	call ZXString<char>::Find__0
	mov esi,eax
	test esi,esi
	jl Block18

 Block8:
	mov ebx,4

 Block9:
	push 0xFFFFFFFF
	lea eax,[esi+5]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::Substring
	mov ebp,eax
	push esi
	push 0
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],2
	call ZXString<char>::Substring
	mov ecx,dword ptr [edi+0xA8]
	add ecx,ebx
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x38],3
	call ZXString<char>::op_add_1
	push ebp
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x38],bl
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x34],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],3
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x30],2
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	push 0
	push 0
	push offset _S_NAME__1
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	test esi,esi
	jge Block9

 Block18:
	mov edx,dword ptr [edi+0x140]
	push 0
	push edx
	push 0
	push 0
	push 0x3E9
	push 0x1388
	push ecx
	lea eax,[edi+0x90]
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov ecx,dword ptr [edi+0x8C]
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push edx
	mov byte ptr [esp+0x54],6
	call CAvatar::GetLayerUnderFace
	mov esi,dword ptr [esp+0x34]
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0x58],7
	call _xbstr_t::_ctor_0
	lea ecx,[edi+0x14]
	mov byte ptr [esp+0x54],1
	call CChatBalloon::MakeBalloon
	mov byte ptr [esp+0x30],0
	test esi,esi
	je Block27

 Block19:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4
	jmp Block27

 Block20:
	mov eax,dword ptr [edi+0x140]
	push 0
	push eax
	mov eax,dword ptr [edi+0x90]
	push 0
	push 0
	push 0x3E9
	push 0x1388
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [edi+0xE8]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x48],esp
	test eax,eax
	je Block26

 Block25:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block26:
	lea ecx,[edi+0x14]
	call CChatBalloon::MakeBalloon

 Block27:
	mov ecx,dword ptr [esp+0x38]
	test ecx,ecx
	je Block29

 Block28:
	call _xbstr_t::Data_t::Release

 Block29:
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
// CreateNpc
_SUB_EXCEPTION_HANDLER(2717B0)
__SUB(002717B0, __cdecl, 134921,  CNpc*, CNpcTemplate*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2717B0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	push 0x190
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push edx
	mov ecx,eax
	call CNpc::_ctor_0
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret

 Block2:
	xor eax,eax
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CNpc::GetQuestDCRange
__SUB_CLASS_THIS0(0026FFC0, __thiscall, 50393,  CNpc, const tagRECT&) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	lea ebp,[esi+0x180]
	push ebp
	call SetRectEmpty
	xor ebx,ebx
	cmp dword ptr [esi+0xF0],ebx
	je Block23

 Block1:
	mov edi,dword ptr [esi+0xF0]
	cmp edi,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x118]
	lea ecx,[esp+0x10]
	push ecx
	push edi
	mov dword ptr [esp+0x18],ebx
	call edx
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	cmp dword ptr [esp+0x10],ebx
	je Block23

 Block6:
	mov edi,dword ptr [esi+0xF0]
	cmp edi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x10]
	push ecx
	push edi
	mov dword ptr [esp+0x18],ebx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esi+0x160]
	add eax,dword ptr [esp+0x10]
	mov dword ptr [ebp],eax
	mov edi,dword ptr [esi+0xF0]
	cmp edi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x10]
	push edx
	push edi
	mov dword ptr [esp+0x18],ebx
	call eax
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [esi+0x164]
	add ecx,dword ptr [esp+0x10]
	mov dword ptr [esi+0x184],ecx
	mov edi,dword ptr [esi+0xF0]
	cmp edi,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xB8]
	lea eax,[esp+0x10]
	push eax
	push edi
	mov dword ptr [esp+0x18],ebx
	call ecx
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	mov edx,dword ptr [ebp]
	add edx,dword ptr [esp+0x10]
	mov dword ptr [esi+0x188],edx
	mov edi,dword ptr [esi+0xF0]
	cmp edi,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x10]
	push ecx
	push edi
	mov dword ptr [esp+0x18],ebx
	call edx
	cmp eax,ebx
	jge Block22

 Block21:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov eax,dword ptr [esi+0x184]
	add eax,dword ptr [esp+0x10]
	mov dword ptr [esi+0x18C],eax

 Block23:
	pop edi
	pop esi
	mov eax,ebp
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// CNpc::GetActionFrameList
__SUB_CLASS_THIS(00270140, __thiscall, 50392,  CNpc, ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY> >&, long) {
__asm {

 Block0:
	push ecx
	mov edx,dword ptr [ecx+0x148]
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	lea esi,[eax+eax*4]
	test edx,edx
	jge Block2

 Block1:
	mov edi,dword ptr [ecx+0xBC]
	jmp Block3

 Block2:
	mov edi,dword ptr [ecx+0x144]

 Block3:
	lea esi,[edi+esi*4]
	cmp edx,dword ptr [ecx+0x14C]
	je Block6

 Block4:
	test edx,edx
	jl Block6

 Block5:
	mov edi,1
	jmp Block7

 Block6:
	xor edi,edi

 Block7:
	cmp dword ptr [esi+8],0
	je Block9

 Block8:
	test edi,edi
	je Block10

 Block9:
	push edx
	push esi
	push eax
	mov eax,dword ptr [ecx+0xA8]
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push eax
	call CActionMan::LoadNpcAction

 Block10:
	cmp dword ptr [esi+8],0
	jne Block12

 Block11:
	push 0x22000006
	lea ecx,[esp+0x14]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x10]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0xC]
	push edx
	mov dword ptr [esp+0x10],ecx
	call _CxxThrowException

 Block12:
	pop edi
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CNpc::SetCompletedQuestOnlyOne
_SUB_EXCEPTION_HANDLER(2724F0)
__SUB_CLASS_THIS(002724F0, __thiscall, 50400,  CNpc, void, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2724F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esi+0xCC]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD0]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD4]
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xC8]
	call ZArray<unsigned short>::RemoveAll
	lea eax,[esp+0x1C]
	mov dword ptr [esi+0x154],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
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
	mov dword ptr [esp+0x20],0

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ecx+0x2148]
	mov dword ptr [esp+0x14],edx
	call CWvsContext::GetCurFieldID
	mov eax,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov edi,dword ptr [esp+0x54]
	mov dword ptr [esp+0x18],eax
	xor ebp,ebp
	lea esp,[esp]

 Block6:
	mov eax,dword ptr [esi+0xC4]
	test eax,eax
	je Block14

 Block7:
	cmp ebp,dword ptr [eax-4]
	jae Block14

 Block8:
	mov ecx,eax
	cmp di,word ptr [ecx+ebp*2]
	jne Block12

 Block9:
	lea edx,[edi-0x4B0]
	mov eax,0xC7
	cmp dx,ax
	jbe Block12

 Block10:
	movzx ecx,di
	lea edx,[esp+0x54]
	mov dword ptr [esp+0x54],ecx
	push edx
	lea ecx,[ebx+0x6F5]
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	je Block12

 Block11:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [esp+0x18]
	push eax
	push ebx
	push edx
	push edi
	call CQuestMan::CheckCompleteDemand
	test eax,eax
	je Block13

 Block12:
	inc ebp
	jmp Block6

 Block13:
	push 0xFFFFFFFF
	lea ecx,[esi+0xD4]
	call ZArray<unsigned short>::InsertBefore
	mov word ptr [eax],di

 Block14:
	mov eax,dword ptr [esi+0xD4]
	xor ecx,ecx
	mov ebx,2
	cmp eax,ecx
	je Block17

 Block15:
	cmp dword ptr [eax-4],ecx
	jbe Block17

 Block16:
	mov dword ptr [esi+0xDC],ebx
	jmp Block18

 Block17:
	mov dword ptr [esi+0xDC],6

 Block18:
	mov eax,dword ptr [esi+0xDC]
	mov dword ptr [esi+0xE0],eax
	cmp eax,6
	jne Block21

 Block19:
	mov eax,dword ptr [esi+0xF0]
	cmp eax,ecx
	je Block68

 Block20:
	mov dword ptr [esi+0xF0],ecx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block68

 Block21:
	cmp dword ptr [esi+0x90],ecx
	sete al
	test al,al
	sete al
	test al,al
	je Block68

 Block22:
	cmp dword ptr [esi+0xE8],ecx
	sete al
	test al,al
	sete al
	test al,al
	je Block68

 Block23:
	mov dword ptr [esp+0x54],ecx
	lea eax,[esp+0x18]
	push 0x19BC
	push eax
	mov dword ptr [esp+0x54],ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0xDC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0x58],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esi+0xE8]
	cmp dword ptr [esi+0x8C],0
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	je Block37

 Block26:
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	mov ecx,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x5C],bl
	call CAvatar::GetHeight
	mov edx,dword ptr [esi+0x13C]
	mov ecx,0xFFFFFFF1
	sub ecx,dword ptr [esi+0x140]
	add edx,0x14
	sub ecx,eax
	mov eax,dword ptr [esi+0x90]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	mov ebp,dword ptr [esp+0x70]
	push 0
	lea eax,[esp+0x38]
	push ebp
	push eax
	mov byte ptr [esp+0x74],0
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF0]
	add esp,0x28
	cmp edi,eax
	je Block35

 Block31:
	mov dword ptr [esi+0xF0],eax
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block33:
	test edi,edi
	je Block35

 Block34:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block35:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block52

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block52

 Block37:
	mov dword ptr [esp+0x2C],esp
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block39:
	mov edi,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x5C],3
	test edi,edi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x24]
	push ecx
	push edi
	mov dword ptr [esp+0x2C],0
	call edx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block43:
	mov ecx,dword ptr [esi+0x13C]
	mov eax,0xFFFFFFF1
	sub eax,dword ptr [esi+0x140]
	add ecx,0x14
	sub eax,dword ptr [esp+0x24]
	push eax
	mov eax,dword ptr [esi+0x90]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block45:
	mov ebp,dword ptr [esp+0x70]
	push 0
	lea ecx,[esp+0x38]
	push ebp
	push ecx
	mov byte ptr [esp+0x74],0
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF0]
	add esp,0x28
	cmp edi,eax
	je Block50

 Block46:
	mov dword ptr [esi+0xF0],eax
	test eax,eax
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	test edi,edi
	je Block50

 Block49:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block50:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
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
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[esp+0x24]
	mov bl,4
	push edx
	mov byte ptr [esp+0x50],bl
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x4C],5
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x24],si
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x24]
	push edx
	call edi

 Block62:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x34],si
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x34]
	push ecx
	call edi

 Block66:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test ebp,ebp
	je Block68

 Block67:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block68:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 4
}
}
// CNpc::GenerateMovePath
_SUB_EXCEPTION_HANDLER(271590)
__SUB_CLASS_THIS(00271590, __thiscall, 50410,  CNpc, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_271590
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
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x94]
	xor esi,esi
	cmp eax,esi
	je Block2

 Block1:
	lea edi,[eax-0xC]
	mov dword ptr [esp+0x14],edi
	jmp Block3

 Block2:
	mov dword ptr [esp+0x14],esi
	mov edi,esi

 Block3:
	mov eax,dword ptr [ebp+0xA8]
	mov ebx,dword ptr [esp+0x38]
	cmp dword ptr [eax+0xC],esi
	je Block13

 Block4:
	cmp ebx,0xFFFFFFFF
	je Block9

 Block5:
	push ebx
	call CNpc::GetActionFrameList
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block8

 Block6:
	lea esp,[esp]

 Block7:
	lea ecx,[esp+0x38]
	push ecx
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	mov eax,dword ptr [eax+4]
	add esi,dword ptr [eax+0x10]
	add esp,4
	cmp dword ptr [esp+0x38],0
	jne Block7

 Block8:
	push 0
	push esi
	mov ecx,edi
	call CVecCtrlNpc::UpdateActiveInterrupted

 Block9:
	xor esi,esi
	add edi,0x244
	lea esp,[esp]

 Block10:
	push 0
	push 0
	mov ecx,edi
	call CMovePath::IsTimeForFlush
	test eax,eax
	jne Block12

 Block11:
	mov ecx,dword ptr [esp+0x14]
	call CVecCtrl::UpdateActive
	inc esi
	cmp esi,0x37
	jl Block10

 Block12:
	mov edi,dword ptr [esp+0x14]

 Block13:
	push 0xF1
	lea ecx,[esp+0x1C]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x1C]
	mov esi,dword ptr [ebp+0xA4]
	mov dword ptr [esp+0x30],0
	test eax,eax
	jne Block15

 Block14:
	xor edx,edx
	jmp Block16

 Block15:
	mov edx,dword ptr [eax-4]

 Block16:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	cmp ecx,edx
	jbe Block21

 Block17:
	test eax,eax
	je Block19

 Block18:
	mov eax,dword ptr [eax-4]
	nop

 Block19:
	add eax,eax
	cmp ecx,eax
	ja Block19

 Block20:
	lea edx,[esp+0x38]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block21:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [ecx+eax],esi
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],4
	test eax,eax
	jne Block23

 Block22:
	xor edx,edx
	jmp Block24

 Block23:
	mov edx,dword ptr [eax-4]

 Block24:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block29

 Block25:
	test eax,eax
	je Block27

 Block26:
	mov eax,dword ptr [eax-4]

 Block27:
	add eax,eax
	cmp ecx,eax
	ja Block27

 Block28:
	lea edx,[esp+0x38]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block29:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [ecx+eax],bl
	mov eax,dword ptr [esp+0x1C]
	mov esi,1
	add dword ptr [esp+0x20],esi
	test eax,eax
	jne Block31

 Block30:
	xor edx,edx
	jmp Block32

 Block31:
	mov edx,dword ptr [eax-4]

 Block32:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block37

 Block33:
	test eax,eax
	je Block35

 Block34:
	mov eax,dword ptr [eax-4]

 Block35:
	add eax,eax
	cmp ecx,eax
	ja Block35

 Block36:
	lea edx,[esp+0x38]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block37:
	mov edx,dword ptr [esp+0x20]
	mov cl,byte ptr [esp+0x3C]
	mov byte ptr [edx+eax],cl
	mov eax,dword ptr [ebp+0xA8]
	add dword ptr [esp+0x20],esi
	cmp dword ptr [eax+0xC],0
	je Block39

 Block38:
	push 0
	push 0
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[edi+0x244]
	call CMovePath::Flush

 Block39:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov dword ptr [ebp+0x98],esi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8
}
}
// CNpc::SetClientActionByQuest
__SUB_CLASS_THIS0(00271020, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x148]
	mov ecx,dword ptr [esi+0xA8]
	push 1
	mov dword ptr [esi+0x14C],eax
	call CNpcTemplate::CalcClientActionSetIdx
	mov dword ptr [esi+0x148],eax
	cmp eax,dword ptr [esi+0x14C]
	je Block7

 Block1:
	push edi
	mov ecx,esi
	call CNpc::PrepareActionLayer
	mov edi,dword ptr [esi+0x148]
	test edi,edi
	jl Block4

 Block2:
	mov ecx,dword ptr [esi+0xA8]
	push edi
	sub ecx,0xFFFFFF80
	call ZList<CNpcTemplate::CLIENT_ACTION_SET>::FindIndex
	cmp dword ptr [eax+0x1C],0
	jne Block5

 Block3:
	test edi,edi
	jge Block6

 Block4:
	mov ecx,dword ptr [esi+0xA8]
	cmp dword ptr [ecx+0x18],0
	je Block6

 Block5:
	push 0
	push 0
	mov ecx,esi
	call CNpc::ViewOrHide
	pop edi
	pop esi
	ret

 Block6:
	mov edx,dword ptr [esi+0xA8]
	xor eax,eax
	cmp dword ptr [edx+0x1C],eax
	mov ecx,esi
	sete al
	push eax
	push 1
	call CNpc::ViewOrHide
	pop edi

 Block7:
	pop esi
	ret
}
}
// CNpc::GetPosPrev
__SUB_CLASS_THIS0(00270F90, __thiscall, 50405,  CNpc, const tagPOINT) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x164]
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0x168]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	ret 4
}
}
// CNpc::RestoreLayers
_SUB_EXCEPTION_HANDLER(2751D0)
__SUB_CLASS_THIS0(002751D0, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2751D0
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
	xor ebx,ebx
	push ebx
	call CNpc::SetQuestList
	mov eax,dword ptr [esi+0xA8]
	cmp dword ptr [eax+0x20],ebx
	je Block32

 Block1:
	mov eax,dword ptr [esi+0xE8]
	push ebx
	push 0xFF
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	mov edi,dword ptr [esi+0xE8]
	mov dword ptr [esp+0x58],ebx
	cmp edi,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebx
	call edx
	cmp eax,ebx
	jge Block7

 Block6:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block7:
	mov eax,dword ptr [esp+0x20]
	neg eax
	push eax
	mov eax,dword ptr [esi+0x90]
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	lea eax,[esp+0x34]
	push 0x6AB
	push eax
	mov byte ptr [esp+0x6C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x64],2
	push ebx
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x70],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xEC]
	add esp,0x28
	cmp edi,eax
	je Block14

 Block10:
	mov dword ptr [esi+0xEC],eax
	cmp eax,ebx
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	cmp edi,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block14:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea edx,[esp+0x20]
	mov ebx,4
	push edx
	mov dword ptr [esp+0x4C],ebx
	call edi
	lea eax,[esp+0x20]
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
	mov ecx,dword ptr [esi+0xEC]
	mov byte ptr [esp+0x48],5
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x48],bl
	mov ebx,8
	cmp word ptr [esp+0x20],bx
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block28:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],bx
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block32:
	mov edx,dword ptr [esi+0xA8]
	cmp dword ptr [edx+0x1C],0
	jne Block44

 Block33:
	mov eax,dword ptr [esi+0x90]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x3E9
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block35:
	mov eax,dword ptr [esi+0xE8]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block37:
	mov eax,dword ptr [esi+0xA8]
	mov eax,dword ptr [eax+4]
	push eax
	mov ecx,esi
	call CLife::MakeNameTag
	mov eax,dword ptr [esi+0xA8]
	add eax,8
	mov eax,dword ptr [eax]
	test eax,eax
	je Block44

 Block38:
	cmp byte ptr [eax],0
	je Block44

 Block39:
	mov eax,dword ptr [esi+0x90]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x3EA
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block41:
	mov eax,dword ptr [esi+0xE8]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esi+0xA8]
	mov eax,dword ptr [eax+8]
	push eax
	mov ecx,esi
	call CLife::MakeNameTag

 Block44:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret
}
}
// CNpc::SetImitatedLook
_SUB_EXCEPTION_HANDLER(2729D0)
__SUB_CLASS_THIS(002729D0, __thiscall, 50398,  CNpc, void, AvatarLook&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2729D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov esi,ecx
	mov dword ptr [ebp-0x14],esi
	lea ecx,[esi+0x88]
	call ZRef<CAvatar>::_Alloc
	xor ebx,ebx
	push ebx
	push 0x64
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [eax],ebx
	mov eax,dword ptr [esi+0x90]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [esi+0x8C]
	push 5
	push eax
	call CAvatar::Init_1
	mov ecx,esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call CNpc::PrepareActionLayer
	mov ecx,dword ptr [esi+0xA8]
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	mov dword ptr [ecx+0x1C],ebx
	mov eax,dword ptr [esi+0x90]
	push 0x3E9
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+8],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	mov eax,dword ptr [esi+0xE8]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+8],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xA8]
	mov eax,dword ptr [eax+4]
	push eax
	mov ecx,esi
	call CLife::MakeNameTag
	mov eax,dword ptr [esi+0xA8]
	add eax,8
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block13

 Block7:
	cmp byte ptr [eax],bl
	je Block13

 Block8:
	mov eax,dword ptr [esi+0x90]
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push 0x3EA
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+8],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xE8]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+8],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xA8]
	mov eax,dword ptr [eax+8]
	push eax
	mov ecx,esi
	call CLife::MakeNameTag

 Block13:
	mov ecx,esi
	call CNpc::SetLayerZ
	push 1
	mov ecx,esi
	call CNpc::SetQuestList
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CNpc::GetZMass
__SUB_CLASS_THIS0(00271000, __thiscall, 50401,  CNpc, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x8C]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x1B8]
	ret

 Block2:
	xor eax,eax
	mov eax,dword ptr [eax+0x1C4]
	ret
}
}
// CNpc::GetRTTI
__SUB_CLASS_THIS0(00270FB0, __thiscall, 50412,  CNpc, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CNpc::ms_RTTI_CNpc
	ret
}
}
// CNpc::DoActionOrChat
__SUB_CLASS_THIS(002702B0, __thiscall, 50408,  CNpc, int32_t, long&, long&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	mov dword ptr [ebp],0xFFFFFFFF
	mov esi,ecx
	mov dword ptr [eax],0xFFFFFFFF
	cmp dword ptr [esi+0xE4],0
	jg Block21

 Block1:
	cmp dword ptr [esi+0x18],0
	jne Block21

 Block2:
	mov ecx,dword ptr [esi+0x8C]
	test ecx,ecx
	je Block4

 Block3:
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	mov eax,ecx
	jmp Block5

 Block4:
	xor eax,eax
	cmp dword ptr [esi+0xB0],0xFFFFFFFF
	setg al

 Block5:
	test eax,eax
	jne Block21

 Block6:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x1770
	div ecx
	mov ecx,dword ptr [esi+0xA8]
	add edx,0xBB8
	mov dword ptr [esi+0xE4],edx
	mov eax,dword ptr [ecx+0x78]
	test eax,eax
	je Block8

 Block7:
	mov eax,dword ptr [eax-4]

 Block8:
	sub eax,dword ptr [ecx+0x7C]
	mov ecx,dword ptr [ecx+0x60]
	push ebx
	mov ebx,eax
	test ecx,ecx
	je Block10

 Block9:
	mov ecx,dword ptr [ecx-4]

 Block10:
	push edi
	lea edi,[ecx+ebx]
	test edi,edi
	jne Block12

 Block11:
	pop edi
	pop ebx
	pop esi
	xor eax,eax
	pop ebp
	ret 8

 Block12:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x32
	div ecx
	mov esi,dword ptr [esi+0xA8]
	mov eax,edx
	xor edx,edx
	div edi
	mov eax,dword ptr [esi+0x34]
	test eax,eax
	jg Block14

 Block13:
	or eax,0xFFFFFFFF

 Block14:
	cmp edx,ebx
	jge Block20

 Block15:
	lea edi,[edx+2]
	cmp edi,eax
	je Block20

 Block16:
	mov eax,dword ptr [esi+0x78]
	lea edx,[edx+edx*8]
	lea eax,[eax+edx*4+4]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block19

 Block17:
	mov esi,dword ptr [eax-4]
	test esi,esi
	je Block19

 Block18:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x32
	div ecx
	mov eax,edx
	xor edx,edx
	div esi
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [eax],edi
	pop edi
	pop ebx
	pop esi
	lea eax,[ecx-0x31]
	mov dword ptr [ebp],edx
	pop ebp
	ret 8

 Block19:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [eax],edi
	pop edi
	pop ebx
	or edx,0xFFFFFFFF
	pop esi
	mov dword ptr [ebp],edx
	lea eax,[edx+2]
	pop ebp
	ret 8

 Block20:
	pop edi
	sub edx,ebx
	pop ebx
	pop esi
	mov dword ptr [ebp],edx
	mov eax,1
	pop ebp
	ret 8

 Block21:
	pop esi
	xor eax,eax
	pop ebp
	ret 8
}
}
// CNpc::IsKindOf
__SUB_CLASS_THIS(00270FC0, __thiscall, 50413,  CNpc, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CNpc::ms_RTTI_CNpc
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
// CNpc::SetActive
__SUB_CLASS_THIS(002710B0, __thiscall, 50385,  CNpc, void, int32_t) {
__asm {

 Block0:
	push ebx
	push edi
	mov edi,ecx
	mov ebx,dword ptr [edi+0x94]
	test ebx,ebx
	je Block2

 Block1:
	add ebx,0xFFFFFFF4
	jmp Block3

 Block2:
	xor ebx,ebx

 Block3:
	cmp dword ptr [esp+0xC],0
	je Block8

 Block4:
	mov eax,dword ptr [edi+0x90]
	push ebp
	push esi
	test eax,eax
	je Block6

 Block5:
	lea esi,[eax-0xC]
	jmp Block7

 Block6:
	xor esi,esi

 Block7:
	movsx eax,word ptr [esi+0x2AC]
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ebp,dword ptr [ebx]
	push eax
	call CWvsPhysicalSpace2D::GetFoothold
	movzx ecx,byte ptr [esi+0x2AA]
	movsx edx,word ptr [esi+0x2A8]
	push eax
	movsx eax,word ptr [esi+0x2A6]
	push ecx
	movsx ecx,word ptr [esi+0x2A4]
	push edx
	movsx edx,word ptr [esi+0x2A2]
	push eax
	mov eax,dword ptr [ebp+4]
	push ecx
	push edx
	push 1
	mov ecx,ebx
	call eax
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x1770
	div ecx
	pop esi
	pop ebp
	mov dword ptr [edi+0x98],0
	add edx,0xBB8
	mov dword ptr [edi+0xE4],edx
	pop edi
	pop ebx
	ret 4

 Block8:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	mov ecx,ebx
	call eax
	pop edi
	pop ebx
	ret 4
}
}
// CNpc::CNpc
_SUB_EXCEPTION_HANDLER(271320)
__SUB_CLASS_THIS(00271320, __thiscall, 50379,  CNpc, void, CNpcTemplate*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_271320
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
	call CLife::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CNpc::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CNpc::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CNpc::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x94],edi
	mov eax,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],ebp
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB0],0xFFFFFFFF
	mov eax,dword ptr [ebp+0x78]
	mov byte ptr [esp+0x30],3
	cmp eax,edi
	jne Block2

 Block1:
	xor eax,eax
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	lea edx,[esp+0x3C]
	push edx
	add eax,2
	lea ecx,[esi+0xBC]
	push eax
	mov dword ptr [ecx],edi
	call ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>>::_Alloc
	lea ebx,[esi+0xC4]
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [ebx],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],6
	mov dword ptr [esi+0xE0],0xFFFFFFFF
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x120],edi
	mov dword ptr [esi+0x128],edi
	mov dword ptr [esi+0x138],1
	mov eax,dword ptr [ebp+0x78]
	mov byte ptr [esp+0x30],0x18
	cmp eax,edi
	jne Block5

 Block4:
	xor eax,eax
	jmp Block6

 Block5:
	mov eax,dword ptr [eax-4]

 Block6:
	lea edx,[esp+0x3C]
	push edx
	add eax,2
	lea ecx,[esi+0x144]
	push eax
	mov dword ptr [ecx],edi
	call ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>>::_Alloc
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0x148],eax
	mov dword ptr [esi+0x14C],eax
	mov dword ptr [esi+0x150],edi
	mov dword ptr [esi+0x154],1
	mov dword ptr [esi+0x15C],edi
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [eax]
	push ebx
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov byte ptr [esp+0x38],0x1A
	call CQuestMan::GetQuestByNpc
	mov ebx,dword ptr [_D_G_PSTAGE+4]
	cmp ebx,edi
	je Block9

 Block7:
	mov edx,dword ptr [ebx+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[ebx+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,ebx
	jmp Block10

 Block9:
	xor ecx,ecx

 Block10:
	lea edx,[esp+0x18]
	push edx
	call CField::GetCorrectTime
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x1C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],ecx
	mov ecx,ebp
	mov dword ptr [eax+0xC],edx
	call CNpcTemplate::UpdateScript
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esi+0x13C],edi
	cmp eax,edi
	je Block13

 Block11:
	cmp dword ptr [eax],0x13D620
	mov eax,esi
	jne Block14

 Block12:
	mov dword ptr [esi+0x13C],edi
	mov dword ptr [esi+0x140],0xFFFFFFEC
	jmp Block14

 Block13:
	mov eax,esi

 Block14:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8
}
}
// CNpc::SetShoeAttr
_SUB_EXCEPTION_HANDLER(271180)
__SUB_CLASS_THIS0(00271180, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_271180
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
	push 0x90
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block2

 Block1:
	push 0
	mov ecx,eax
	call CAttrShoe::_ctor_0
	mov edi,eax
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block5

 Block4:
	lea eax,[edi+4]
	push eax
	call ebp

 Block5:
	mov esi,dword ptr [ebx+0x15C]
	mov dword ptr [ebx+0x15C],edi
	test esi,esi
	je Block8

 Block6:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov ecx,dword ptr [ebx+0xA8]
	mov eax,dword ptr [ecx+0x14]
	cmp eax,0xA
	jg Block10

 Block9:
	mov eax,0xA
	mov dword ptr [esp+0x14],eax
	jmp Block13

 Block10:
	cmp eax,0x8C
	jge Block12

 Block11:
	mov dword ptr [esp+0x14],eax
	jmp Block13

 Block12:
	mov dword ptr [esp+0x14],0x8C

 Block13:
	fild dword ptr [esp+0x14]
	mov ecx,dword ptr [ebx+0x15C]
	sub esp,8
	add ecx,0x24
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp]
	call TSecType<double>::SetData
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
// CNpc::GetDCRange
__SUB_CLASS_THIS0(0026FD00, __thiscall, 50393,  CNpc, const tagRECT&) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0xA8]
	push ebx
	push esi
	mov esi,dword ptr [ecx+0x160]
	push edi
	mov edi,dword ptr [edx+0x24]
	add edi,esi
	mov dword ptr [ecx+0x170],edi
	mov ebx,dword ptr [edx+0x28]
	mov edi,dword ptr [ecx+0x164]
	lea eax,[ecx+0x170]
	add ebx,edi
	mov dword ptr [ecx+0x174],ebx
	mov ebx,dword ptr [edx+0x2C]
	add ebx,esi
	mov dword ptr [ecx+0x178],ebx
	mov edx,dword ptr [edx+0x30]
	add edx,edi
	pop edi
	pop esi
	mov dword ptr [ecx+0x17C],edx
	pop ebx
	ret
}
}
// CNpc::GetShoeAttr
__SUB_CLASS_THIS0(002712F0, __thiscall, 50404,  CNpc, const ZRef<CAttrShoe>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x158]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CNpc::IsOnPlayingOneTimeAction
__SUB_CLASS_THIS0(00270210, __thiscall, 50390,  CNpc, int32_t) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [eax+0x8C]
	test ecx,ecx
	je Block2

 Block1:
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	mov eax,ecx
	ret

 Block2:
	xor edx,edx
	cmp dword ptr [eax+0xB0],0xFFFFFFFF
	setg dl
	mov eax,edx
	ret
}
}
// CNpc::GetPos
__SUB_CLASS_THIS0(00270F70, __thiscall, 50405,  CNpc, const tagPOINT) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x15C]
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0x160]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	ret 4
}
}
// CNpc::SetLayerZ
__SUB_CLASS_THIS0(0026FED0, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x90]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov esi,dword ptr [edi+0xE8]
	mov ecx,dword ptr [eax+0x1C4]
	mov eax,dword ptr [eax+0x1C0]
	test esi,esi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov edx,dword ptr [esi]
	imul eax,0xBB8
	mov edx,dword ptr [edx+0xB4]
	sub eax,ecx
	lea eax,[eax+eax*4]
	lea ecx,[eax+eax-0x3FFF8AD5]
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	cmp dword ptr [edi+0x8C],0
	je Block13

 Block8:
	mov esi,dword ptr [edi+0xE8]
	test esi,esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB0]
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
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [edi+0x8C]
	push eax
	call CAvatar::SetLayerZ

 Block13:
	pop edi
	pop esi
	pop ecx
	ret
}
}
// CNpc::GetCurrentAction
__SUB_CLASS_THIS(00270240, __thiscall, 50391,  CNpc, long, long*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi+0xAC]
	push edi
	test ecx,ecx
	je Block2

 Block1:
	mov edx,eax
	and edx,1
	mov dword ptr [ecx],edx

 Block2:
	sar eax,1
	sub eax,1
	je Block5

 Block3:
	sub eax,1
	jne Block5

 Block4:
	lea edi,[eax+1]
	jmp Block6

 Block5:
	xor edi,edi

 Block6:
	mov ecx,dword ptr [esi+0x8C]
	test ecx,ecx
	je Block8

 Block7:
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	mov eax,ecx
	jmp Block9

 Block8:
	xor eax,eax
	cmp dword ptr [esi+0xB0],0xFFFFFFFF
	setg al

 Block9:
	test eax,eax
	je Block11

 Block10:
	mov eax,dword ptr [esi+0xB0]
	pop edi
	pop esi
	ret 4

 Block11:
	mov eax,edi
	pop edi
	pop esi
	ret 4
}
}
// CNpc::UpdateScript
__SUB_CLASS_THIS(0026FD50, __thiscall, 50396,  CNpc, void, NakedParam<_SYSTEMTIME>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0xA8]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax+0xC],edx
	call CNpcTemplate::UpdateScript
	ret 0x10
}
}
// CNpc::ShowQuestList
_SUB_EXCEPTION_HANDLER(272B50)
__SUB_CLASS_THIS0(00272B50, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_272B50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x70],ebx
	xor edi,edi
	cmp dword ptr [ebx+0x138],edi
	je Block263

 Block1:
	cmp dword ptr [ebx+0x150],edi
	jne Block263

 Block2:
	mov eax,dword ptr [ebx+0xA8]
	add eax,0xB0
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],edi
	call ZXString<char>::op_assign
	mov dword ptr [ebp-4],edi
	cmp dword ptr [ebx+0x154],edi
	jne Block4

 Block3:
	push offset _S_
	lea ecx,[ebp+0x64]
	call ZXString<char>::AssignCStr

 Block4:
	mov eax,dword ptr [ebx+0xC8]
	cmp eax,edi
	jne Block6

 Block5:
	xor ecx,ecx
	jmp Block7

 Block6:
	mov ecx,dword ptr [eax-4]

 Block7:
	mov eax,dword ptr [ebx+0xC4]
	cmp eax,edi
	jne Block9

 Block8:
	xor eax,eax
	jmp Block10

 Block9:
	mov eax,dword ptr [eax-4]

 Block10:
	cmp ecx,eax
	jne Block25

 Block11:
	mov esi,dword ptr [ebp+0x64]
	cmp esi,edi
	je Block14

 Block12:
	cmp byte ptr [esi],0
	je Block14

 Block13:
	push 0x3F
	lea ecx,[ebp+0x38]
	call COutPacket::_ctor_1
	mov ebx,dword ptr [ebx+0xA4]
	push ebx
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],1
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,4
	lea edx,[ebp+0x48]
	push edx
	call eax
	movzx ecx,word ptr [eax]
	push ecx
	lea ecx,[ebp+0x38]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[ebp+0x48]
	push eax
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[ebp+0x38]
	call COutPacket::Encode2
	lea ecx,[ebp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x3C]
	mov byte ptr [ebp-4],0
	call ZArray<unsigned char>::RemoveAll
	jmp Block22

 Block14:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x30],eax
	mov byte ptr [ebp-4],2
	cmp eax,edi
	je Block24

 Block15:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,edi
	je Block24

 Block16:
	lea esi,[eax+8]
	cmp esi,edi
	je Block24

 Block17:
	add esi,0xFFFFFFF8
	mov dword ptr [ebp+0x4C],esi
	cmp esi,edi
	je Block19

 Block18:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov eax,dword ptr [ebx+0xA8]
	push edi
	push edi
	push ecx
	add eax,0xB8
	mov ecx,esp
	mov dword ptr [ebp+0x30],esp
	push eax
	mov byte ptr [ebp-4],3
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebx+0xA8]
	mov ecx,dword ptr [eax]
	push ecx
	push edi
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push edi
	push edi
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	mov byte ptr [ebp-4],0
	cmp esi,edi
	je Block21

 Block20:
	push edi
	lea ecx,[ebp+0x48]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block21:
	mov esi,dword ptr [ebp+0x64]

 Block22:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,edi
	je Block263

 Block23:
	add esi,0xFFFFFFF4
	push esi
	jmp Block262

 Block24:
	xor esi,esi
	mov dword ptr [ebp+0x4C],esi
	jmp Block19

 Block25:
	mov eax,dword ptr [ebx+0xCC]
	cmp eax,edi
	jne Block27

 Block26:
	mov dword ptr [ebp+0x2C],edi
	jmp Block28

 Block27:
	mov edx,dword ptr [eax-4]
	mov dword ptr [ebp+0x2C],edx

 Block28:
	mov eax,dword ptr [ebx+0xD0]
	cmp eax,edi
	jne Block30

 Block29:
	mov dword ptr [ebp+0x50],edi
	jmp Block31

 Block30:
	mov eax,dword ptr [eax-4]
	mov dword ptr [ebp+0x50],eax

 Block31:
	mov eax,dword ptr [ebx+0xD4]
	cmp eax,edi
	jne Block33

 Block32:
	mov dword ptr [ebp+0x28],edi
	jmp Block34

 Block33:
	mov ecx,dword ptr [eax-4]
	mov dword ptr [ebp+0x28],ecx

 Block34:
	mov eax,dword ptr [ebx+0xD8]
	cmp eax,edi
	jne Block36

 Block35:
	mov dword ptr [ebp+0x68],edi
	jmp Block37

 Block36:
	mov edx,dword ptr [eax-4]
	mov dword ptr [ebp+0x68],edx

 Block37:
	mov eax,dword ptr [ebx+0xA8]
	add eax,0xB4
	push eax
	lea ecx,[ebp+0x6C]
	mov dword ptr [ebp+0x6C],edi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	lea eax,[ebp+0x34]
	push eax
	mov byte ptr [ebp-4],4
	mov dword ptr [ebp+0x30],ecx
	call CQuestMan::GetQuestArray
	mov edx,dword ptr [ebx+0xA8]
	mov ebx,dword ptr [edx+0xCC]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [ebp-4],5
	mov dword ptr [ebp+0x60],ecx
	mov dword ptr [ebp+0x58],ebx
	cmp ebx,edi
	je Block48

 Block38:
	mov edi,dword ptr [ebp+0x34]

 Block39:
	xor esi,esi

 Block40:
	test edi,edi
	je Block46

 Block41:
	cmp esi,dword ptr [edi-4]
	jae Block46

 Block42:
	movzx eax,word ptr [edi+esi*2]
	cmp ax,word ptr [ebx]
	jne Block44

 Block43:
	mov ecx,dword ptr [ebp+0x60]
	push eax
	call CWvsContext::GetQuestState
	cmp eax,2
	je Block45

 Block44:
	inc esi
	jmp Block40

 Block45:
	add ebx,4
	push ebx
	lea ecx,[ebp+0x6C]
	call ZXString<char>::op_assign

 Block46:
	lea ecx,[ebp+0x34]
	call ZArray<unsigned short>::GetCount
	cmp esi,eax
	jne Block48

 Block47:
	lea eax,[ebp+0x58]
	push eax
	call ZList<CNpcTemplate::QuestLine>::GetPrev
	mov ebx,dword ptr [ebp+0x58]
	add esp,4
	test ebx,ebx
	jne Block39

 Block48:
	mov eax,dword ptr [ebp+0x6C]
	mov edi,dword ptr [ebp+0x64]
	xor esi,esi
	cmp eax,esi
	je Block50

 Block49:
	cmp byte ptr [eax],0
	jne Block59

 Block50:
	mov ebx,dword ptr [ebp+0x2C]
	cmp ebx,esi
	jne Block60

 Block51:
	cmp dword ptr [ebp+0x50],esi
	jne Block60

 Block52:
	cmp dword ptr [ebp+0x28],esi
	jne Block60

 Block53:
	cmp edi,esi
	je Block55

 Block54:
	cmp byte ptr [edi],0
	jne Block60

 Block55:
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],4
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0
	cmp eax,esi
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp edi,esi
	je Block263

 Block58:
	add edi,0xFFFFFFF4
	push edi
	jmp Block262

 Block59:
	mov ebx,dword ptr [ebp+0x2C]

 Block60:
	mov ecx,dword ptr [ebp+0x28]
	mov eax,dword ptr [ebp+0x50]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ecx+eax]
	add edx,ebx
	cmp edx,1
	jne Block109

 Block61:
	cmp ebx,esi
	jle Block63

 Block62:
	mov eax,dword ptr [ebp+0x70]
	add eax,0xCC
	mov eax,dword ptr [eax]
	movzx ecx,word ptr [eax]
	mov dword ptr [ebp+0x20],ecx
	jmp Block67

 Block63:
	cmp eax,esi
	jle Block65

 Block64:
	mov eax,dword ptr [ebp+0x70]
	mov edx,dword ptr [eax+0xD0]
	add eax,0xD0
	movzx eax,word ptr [edx]
	mov dword ptr [ebp+0x20],eax
	jmp Block67

 Block65:
	cmp ecx,esi
	jle Block67

 Block66:
	mov eax,dword ptr [ebp+0x70]
	mov ecx,dword ptr [eax+0xD4]
	movzx edx,word ptr [ecx]
	add eax,0xD4
	mov dword ptr [ebp+0x20],edx

 Block67:
	lea eax,[ebp+0x38]
	push eax
	call edi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],6
	call edi
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	push esi
	push esi
	lea ecx,[ebp+0x38]
	push ecx
	lea edx,[ebp+0x10]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0xCC1
	mov bl,7
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],8
	cmp dword ptr [_D_G_RM],esi
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block76

 Block74:
	cmp eax,0x80004002
	je Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov edi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x2C],di
	jne Block79

 Block77:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,esi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp+0x10],di
	jne Block83

 Block81:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,esi
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x38],di
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	cmp eax,esi
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
	mov dword ptr [ebp+0x58],esi
	lea edx,[ebp+0x60]
	push 0x1A14
	push edx
	mov byte ptr [ebp-4],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	movzx ecx,word ptr [ebp+0x20]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],0xF
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0xE
	cmp eax,esi
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [ebp+0x58]
	push esi
	push esi
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x10
	cmp edi,esi
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block95

 Block93:
	cmp eax,0x80004002
	je Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x13
	jne Block98

 Block96:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,esi
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block99:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x6F0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x14
	test esi,esi
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	lea edx,[ebp]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	cmp word ptr [ebp],8
	mov ebx,eax
	mov byte ptr [ebp-4],0x13
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	test ebx,ebx
	je Block254

 Block106:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xE
	call eax
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block108:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],5
	call edx
	mov ebx,dword ptr [ebp+0x2C]

 Block109:
	mov esi,dword ptr [ebp+0x70]
	xor edi,edi
	mov dword ptr [ebp+0x54],edi
	cmp dword ptr [ebp+0x28],edi
	mov byte ptr [ebp-4],0x16
	jle Block116

 Block110:
	lea eax,[ebp+0x60]
	push 0x19BF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x17
	cmp eax,edi
	je Block112

 Block111:
	mov ecx,dword ptr [eax-4]
	jmp Block113

 Block112:
	xor ecx,ecx

 Block113:
	push ecx
	push eax
	lea ecx,[ebp+0x6C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block115:
	push 2
	lea eax,[esi+0xD4]
	push eax
	lea ecx,[ebp+0x6C]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	call AddQuestList
	add esp,0x10

 Block116:
	cmp ebx,edi
	jle Block123

 Block117:
	lea eax,[ebp+0x60]
	push 0x19BD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x18
	cmp eax,edi
	je Block119

 Block118:
	mov ecx,dword ptr [eax-4]
	jmp Block120

 Block119:
	xor ecx,ecx

 Block120:
	push ecx
	push eax
	lea ecx,[ebp+0x6C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block122:
	push edi
	lea eax,[esi+0xCC]
	push eax
	lea ecx,[ebp+0x6C]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	call AddQuestList
	add esp,0x10

 Block123:
	cmp dword ptr [ebp+0x50],edi
	jle Block130

 Block124:
	lea eax,[ebp+0x60]
	push 0x19BE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x19
	cmp eax,edi
	je Block126

 Block125:
	mov ecx,dword ptr [eax-4]
	jmp Block127

 Block126:
	xor ecx,ecx

 Block127:
	push ecx
	push eax
	lea ecx,[ebp+0x6C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block129

 Block128:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block129:
	push 1
	lea eax,[esi+0xD0]
	push eax
	lea ecx,[ebp+0x6C]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	call AddQuestList
	add esp,0x10

 Block130:
	cmp dword ptr [ebp+0x68],edi
	jle Block137

 Block131:
	lea eax,[ebp+0x68]
	push 0x19ED
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x1A
	cmp eax,edi
	je Block133

 Block132:
	mov ecx,dword ptr [eax-4]
	jmp Block134

 Block133:
	xor ecx,ecx

 Block134:
	push ecx
	push eax
	lea ecx,[ebp+0x6C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block136:
	push edi
	lea eax,[esi+0xD8]
	push eax
	lea ecx,[ebp+0x6C]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	call AddQuestList
	add esp,0x10

 Block137:
	cmp dword ptr [ebp+0x64],edi
	je Block190

 Block138:
	mov eax,dword ptr [ebp+0x64]
	cmp byte ptr [eax],0
	je Block190

 Block139:
	lea ecx,[ebp+0x68]
	push 0x19C0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x1B
	cmp eax,edi
	je Block141

 Block140:
	mov ecx,dword ptr [eax-4]
	jmp Block142

 Block141:
	xor ecx,ecx

 Block142:
	push ecx
	push eax
	lea ecx,[ebp+0x6C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x16
	cmp eax,edi
	je Block144

 Block143:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block144:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x10]
	push edx
	call esi
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	lea ecx,[ebp+0x38]
	push ecx
	mov byte ptr [ebp-4],0x1C
	call esi
	lea edx,[ebp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block148

 Block147:
	push eax
	call _com_issue_error

 Block148:
	push edi
	push edi
	lea eax,[ebp+0x10]
	push eax
	lea ecx,[ebp+0x38]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0xCA5
	mov bl,0x1D
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1E
	cmp dword ptr [_D_G_RM],edi
	jne Block150

 Block149:
	push 0x80004003
	call _com_issue_error

 Block150:
	lea eax,[ebp]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block153

 Block151:
	cmp eax,0x80004002
	je Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	mov esi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp],si
	jne Block156

 Block154:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,edi
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0x38],si
	jne Block160

 Block158:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	cmp eax,edi
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block161:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp+0x10],si
	jne Block164

 Block162:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block165:
	mov edi,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x24
	test ecx,ecx
	jne Block167

 Block166:
	push 0x80004003
	call _com_issue_error

 Block167:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x25
	jne Block169

 Block168:
	mov eax,dword ptr [eax+8]
	jmp Block170

 Block169:
	mov eax,offset _S___3

 Block170:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x27
	jne Block173

 Block171:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block174:
	mov dword ptr [ebp+0x60],0
	mov edi,dword ptr [ebp+0x68]
	mov bl,0x28
	mov byte ptr [ebp-4],bl
	test edi,edi
	je Block176

 Block175:
	cmp byte ptr [edi],0
	jne Block177

 Block176:
	mov esi,dword ptr [ebp+0x64]
	jmp Block178

 Block177:
	mov esi,edi

 Block178:
	lea edx,[ebp+0x24]
	push 0xCA4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x29
	test ecx,ecx
	je Block180

 Block179:
	mov ecx,dword ptr [ecx-4]

 Block180:
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea eax,[ebp+0x60]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x24]
	add esp,0x10
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block182

 Block181:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block182:
	mov esi,dword ptr [ebp+0x60]
	test esi,esi
	je Block184

 Block183:
	mov eax,dword ptr [esi-4]
	jmp Block185

 Block184:
	xor eax,eax

 Block185:
	push eax
	push esi
	lea ecx,[ebp+0x6C]
	call ZXString<char>::_Cat
	mov byte ptr [ebp-4],0x27
	test esi,esi
	je Block187

 Block186:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block187:
	mov byte ptr [ebp-4],0x23
	test edi,edi
	je Block189

 Block188:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block189:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x16
	call edx
	mov esi,dword ptr [ebp+0x70]
	xor edi,edi

 Block190:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x2A
	cmp eax,edi
	je Block204

 Block191:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,edi
	je Block204

 Block192:
	add eax,8
	cmp eax,edi
	je Block204

 Block193:
	lea ebx,[eax-8]
	mov dword ptr [ebp+0x60],ebx
	cmp ebx,edi
	je Block195

 Block194:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block195:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x2B
	cmp eax,edi
	je Block197

 Block196:
	cmp dword ptr [eax-4],edi
	jne Block205

 Block197:
	mov ecx,dword ptr [ebp+0x64]
	cmp ecx,edi
	je Block199

 Block198:
	cmp byte ptr [ecx],0
	jne Block205

 Block199:
	push edi
	push edi
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x6C]
	mov dword ptr [ebp+0x4C],esp
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [eax]
	push ecx
	push edi
	mov ecx,ebx
	call CUtilDlgEx::SetUtilDlgEx_1
	push edi
	push edi
	mov ecx,ebx
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,ebx
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,ebx
	call CDialog::DoModal
	mov byte ptr [ebp-4],0x16
	cmp ebx,edi
	je Block201

 Block200:
	push edi
	lea ecx,[ebp+0x5C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block201:
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],5
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],4
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block203:
	mov eax,dword ptr [ebp+0x64]
	cmp eax,edi
	jmp Block260

 Block204:
	mov dword ptr [ebp+0x60],edi
	mov ebx,edi
	jmp Block195

 Block205:
	cmp eax,edi
	je Block207

 Block206:
	cmp dword ptr [eax-4],edi
	jne Block208

 Block207:
	push 0x3F
	lea ecx,[ebp+0x38]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0xA4]
	push eax
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],0x2C
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[ebp+0x48]
	push eax
	call edx
	movzx eax,word ptr [eax]
	push eax
	jmp Block250

 Block208:
	push edi
	push edi
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x6C]
	mov dword ptr [ebp+0x4C],esp
	push edx
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [eax]
	push ecx
	push 4
	mov ecx,ebx
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,ebx
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,ebx
	call CDialog::DoModal
	cmp dword ptr [esi+0x138],edi
	jne Block214

 Block209:
	lea edx,[ebp+0x68]
	push 0x1153
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [ebp-4],0x2D
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],edi
	je Block211

 Block210:
	sub esp,8
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push edi
	push 0xFFFFFFFF
	mov dword ptr [eax+4],edi
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block211:
	mov eax,dword ptr [ebp+0x68]
	cmp eax,edi

 Block212:
	mov byte ptr [ebp-4],0x2B
	je Block251

 Block213:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block251

 Block214:
	cmp eax,1
	je Block217

 Block215:
	cmp eax,0x2001
	jne Block251

 Block216:
	mov ebx,dword ptr [ebp+0x60]
	xor edi,edi

 Block217:
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [ebx+0x110]
	cmp ecx,edi
	je Block249

 Block218:
	cmp eax,dword ptr [ecx-4]
	jae Block249

 Block219:
	mov ebx,dword ptr [ebp+0x70]
	movzx edi,word ptr [ecx+eax*2]
	mov eax,dword ptr [ebx+0xCC]
	lea esi,[ebx+0xCC]
	mov dword ptr [ebp+0x50],0
	test eax,eax
	je Block227

 Block220:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	je Block227

 Block221:
	lea eax,[eax+ecx*2-2]
	mov dword ptr [ebp+0x70],eax
	test eax,eax
	je Block227

 Block222:
	lea esp,[esp]

 Block223:
	push eax
	call ZArray<unsigned short>::GetAt
	add esp,4
	cmp word ptr [eax],di
	je Block226

 Block224:
	lea ecx,[ebp+0x70]
	push ecx
	mov ecx,esi
	call ZArray<unsigned short>::GetNext
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	jne Block223

 Block225:
	jmp Block227

 Block226:
	mov dword ptr [ebp+0x50],1

 Block227:
	lea esi,[ebx+0xD0]
	mov ecx,esi
	call ZArray<unsigned short>::GetHeadPosition
	mov dword ptr [ebp+0x70],eax
	test eax,eax
	je Block233

 Block228:
	lea ecx,[ecx]

 Block229:
	push eax
	call ZArray<unsigned short>::GetAt
	add esp,4
	cmp word ptr [eax],di
	je Block232

 Block230:
	lea edx,[ebp+0x70]
	push edx
	mov ecx,esi
	call ZArray<unsigned short>::GetNext
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	jne Block229

 Block231:
	jmp Block233

 Block232:
	mov dword ptr [ebp+0x50],1

 Block233:
	lea esi,[ebx+0xD4]
	mov ecx,esi
	call ZArray<unsigned short>::GetHeadPosition
	mov dword ptr [ebp+0x70],eax
	test eax,eax
	je Block239

 Block234:
	lea ecx,[ecx]

 Block235:
	push eax
	call ZArray<unsigned short>::GetAt
	add esp,4
	cmp word ptr [eax],di
	je Block238

 Block236:
	lea eax,[ebp+0x70]
	push eax
	mov ecx,esi
	call ZArray<unsigned short>::GetNext
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	jne Block235

 Block237:
	jmp Block239

 Block238:
	mov dword ptr [ebp+0x50],1

 Block239:
	lea esi,[ebx+0xD8]
	mov ecx,esi
	call ZArray<unsigned short>::GetHeadPosition
	mov dword ptr [ebp+0x70],eax
	test eax,eax
	je Block243

 Block240:
	lea ecx,[ecx]

 Block241:
	push eax
	call ZArray<unsigned short>::GetAt
	add esp,4
	cmp word ptr [eax],di
	je Block245

 Block242:
	lea ecx,[ebp+0x70]
	push ecx
	mov ecx,esi
	call ZArray<unsigned short>::GetNext
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	jne Block241

 Block243:
	cmp dword ptr [ebp+0x50],0
	je Block251

 Block244:
	mov eax,dword ptr [ebx+0xA8]
	mov ecx,dword ptr [eax]
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	call CWvsContext::StartQuest
	jmp Block251

 Block245:
	mov ecx,dword ptr [ebp+0x30]
	push edi
	call CQuestMan::GetStartDemand
	mov esi,eax
	test esi,esi
	je Block251

 Block246:
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp+0x30]
	push 0x1A4B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp+0x68],0
	mov ecx,dword ptr [esi+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x68]
	push edx
	mov byte ptr [ebp-4],0x2F
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push eax
	call ZXString<char>::_ctor_copy
	call CUtilDlg::Notice
	mov eax,dword ptr [ebp+0x68]
	add esp,0x14
	mov byte ptr [ebp-4],0x2E
	test eax,eax
	je Block248

 Block247:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block248:
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	jmp Block212

 Block249:
	push 0x3F
	lea ecx,[ebp+0x38]
	call COutPacket::_ctor_1
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+0xA4]
	push eax
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],0x30
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,4
	lea edx,[ebp+0x48]
	push edx
	call eax
	movzx ecx,word ptr [eax]
	push ecx

 Block250:
	lea ecx,[ebp+0x38]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[ebp+0x48]
	push eax
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[ebp+0x38]
	call COutPacket::Encode2
	lea ecx,[ebp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x3C]
	mov byte ptr [ebp-4],0x2B
	call ZArray<unsigned char>::RemoveAll

 Block251:
	cmp dword ptr [ebp+0x60],0
	mov byte ptr [ebp-4],0x16
	je Block253

 Block252:
	push 0
	lea ecx,[ebp+0x5C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block253:
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],5
	call ZArray<unsigned short>::RemoveAll
	jmp Block257

 Block254:
	mov edx,dword ptr [ebp+0x70]
	mov eax,dword ptr [edx+0xA8]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp+0x20]
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	call CWvsContext::StartQuest
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xE
	call ecx
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block256

 Block255:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block256:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],5
	call eax

 Block257:
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],4
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block259

 Block258:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block259:
	mov eax,dword ptr [ebp+0x64]
	test eax,eax

 Block260:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block263

 Block261:
	add eax,0xFFFFFFF4
	push eax

 Block262:
	call ZXString<char>::_Release
	add esp,4

 Block263:
	lea esp,[ebp-0x3C]
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
// CNpc::RequestSpecialAction
_SUB_EXCEPTION_HANDLER(273BC0)
__SUB_CLASS_THIS(00273BC0, __thiscall, 50399,  CNpc, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_273BC0
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
	push 0xF2
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::_ctor_1
	mov esi,dword ptr [esi+0xA4]
	push esi
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x28],1
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea eax,[esp+0x30]
	mov dword ptr [esp+0xC],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x10]
	call COutPacket::EncodeStr
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x24],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4
}
}
// CNpc::OnSetSpecialAction
_SUB_EXCEPTION_HANDLER(2750F0)
__SUB_CLASS_THIS(002750F0, __thiscall, 50406,  CNpc, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2750F0
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
	mov ebp,ecx
	xor edi,edi
	cmp dword ptr [ebp+0xC0],edi
	jne Block16

 Block1:
	mov ecx,dword ptr [esp+0x24]
	lea eax,[esp+0x24]
	push eax
	call CInPacket::DecodeStr
	mov dword ptr [esp+0x1C],edi
	xor ebx,ebx
	jmp Block3

 Block3:
	mov eax,dword ptr [ebp+0xA8]
	mov ecx,dword ptr [eax+0x78]
	test ecx,ecx
	je Block14

 Block4:
	cmp ebx,dword ptr [ecx-4]
	jae Block14

 Block5:
	mov eax,ecx
	mov esi,dword ptr [eax+edi]
	add eax,edi
	test esi,esi
	je Block9

 Block6:
	cmp dword ptr [esi+4],0
	jne Block8

 Block7:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block8:
	mov esi,dword ptr [esi+4]
	jmp Block10

 Block9:
	xor esi,esi

 Block10:
	push esi
	lea ecx,[esp+0x28]
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block12

 Block11:
	inc ebx
	add edi,0x24
	jmp Block3

 Block12:
	test ebx,ebx
	jl Block14

 Block13:
	push 0
	add ebx,2
	push ebx
	mov ecx,ebp
	call CNpc::GenerateMovePath

 Block14:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CNpc::OnUpdateLimitedInfo
_SUB_EXCEPTION_HANDLER(276340)
__SUB_CLASS_THIS(00276340, __thiscall, 50406,  CNpc, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_276340
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
	mov ecx,dword ptr [esp+0x70]
	call CInPacket::Decode1
	movzx eax,al
	or ebx,0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esi+0x138],eax
	mov dword ptr [esi+0xE0],ebx
	call CNpc::PrepareActionLayer
	mov eax,dword ptr [esi+0x18]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	mov dword ptr [esi+0x18],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0x138],ebp
	jne Block31

 Block3:
	mov eax,dword ptr [esi+0xEC]
	cmp eax,ebp
	je Block5

 Block4:
	mov dword ptr [esi+0xEC],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	mov eax,dword ptr [esi+0xF0]
	cmp eax,ebp
	je Block7

 Block6:
	mov dword ptr [esi+0xF0],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	push ebp
	mov ecx,esi
	call CLife::ShowNameTag
	push ebp
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],ebp
	mov eax,dword ptr [esi+0x90]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x84],ebp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	lea eax,[esp+0x30]
	push 0x1155
	push eax
	mov byte ptr [esp+0x8C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x84],2
	push ebp
	push eax
	lea ecx,[esp+0x94]
	push ecx
	mov byte ptr [esp+0x90],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF4]
	add esp,0x28
	cmp edi,eax
	je Block14

 Block10:
	mov dword ptr [esi+0xF4],eax
	cmp eax,ebp
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	cmp edi,ebp
	je Block14

 Block13:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block14:
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x68],ebx
	cmp eax,ebp
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
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
	lea edx,[esp+0x20]
	mov ebx,4
	push edx
	mov dword ptr [esp+0x6C],ebx
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x68],5
	cmp ecx,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ebp
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x20],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block28:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block30

 Block29:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	jmp Block54

 Block30:
	lea ecx,[esp+0x30]
	jmp Block57

 Block31:
	mov ecx,esi
	call CNpc::RestoreLayers
	push ebp
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],ebp
	mov eax,dword ptr [esi+0x90]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x84],6
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	lea ecx,[esp+0x30]
	push 0x1154
	push ecx
	mov byte ptr [esp+0x8C],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x84],8
	push ebp
	push eax
	lea edx,[esp+0x94]
	push edx
	mov byte ptr [esp+0x90],9
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF4]
	add esp,0x28
	cmp edi,eax
	je Block38

 Block34:
	mov dword ptr [esi+0xF4],eax
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
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x68],ebx
	cmp eax,ebp
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push ecx
	call edi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea eax,[esp+0x40]
	mov ebx,0xA
	push eax
	mov dword ptr [esp+0x6C],ebx
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	mov ecx,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x68],0xB
	cmp ecx,ebp
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push ebp
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x40],si
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebp
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x40]
	push edx
	call edi

 Block52:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp word ptr [esp+0x50],si
	jne Block56

 Block53:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]

 Block54:
	cmp eax,ebp
	je Block58

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block56:
	lea ecx,[esp+0x50]

 Block57:
	push ecx
	call edi

 Block58:
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
// CNpc::Init
_SUB_EXCEPTION_HANDLER(276770)
__SUB_CLASS_THIS(00276770, __thiscall, 50384,  CNpc, void, unsigned long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_276770
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
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esi+0xA4],eax
	call CNpc::SetShoeAttr
	mov ebp,dword ptr [esp+0x60]
	mov ecx,ebp
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esi+0x168],ecx
	mov ecx,ebp
	call CInPacket::Decode2
	movsx edx,ax
	mov eax,dword ptr [esi+0x168]
	mov ecx,edx
	mov dword ptr [esi+0x164],ecx
	mov ecx,ebp
	mov dword ptr [esi+0x16C],edx
	mov dword ptr [esi+0x160],eax
	call CInPacket::Decode1
	movzx edx,al
	mov dword ptr [esi+0xAC],edx
	mov edi,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,ebp
	call CInPacket::Decode2
	cwde
	push eax
	mov ecx,edi
	call CWvsPhysicalSpace2D::GetFoothold
	mov ecx,ebp
	mov ebx,eax
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esi+0x9C],ecx
	mov ecx,ebp
	call CInPacket::Decode2
	movsx edx,ax
	mov dword ptr [esi+0xA0],edx
	call CVecCtrlNpc::CreateInstance
	mov edi,eax
	lea ecx,[esi+0x90]
	push edi
	call __QueryVecCtrlNpc
	test eax,eax
	jge Block3

 Block1:
	cmp eax,0x80004002
	je Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea ecx,[esi+0x9C]
	push ecx
	mov ecx,dword ptr [esi+0xA8]
	xor edx,edx
	cmp dword ptr [ecx+0xC],edx
	lea eax,[esi+4]
	setne dl
	mov ecx,edi
	push edx
	push eax
	call CVecCtrlNpc::Init
	mov ecx,dword ptr [esi+0xAC]
	mov edx,dword ptr [esi+0x164]
	mov eax,dword ptr [edi]
	push ebx
	push ecx
	mov ecx,dword ptr [esi+0x160]
	push 0
	push 0
	push edx
	mov edx,dword ptr [eax+4]
	push ecx
	push 0
	mov ecx,edi
	call edx
	mov eax,dword ptr [edi+0x1D8]
	mov ecx,ebp
	mov dword ptr [esi+0xAC],eax
	call CInPacket::Decode1
	mov edx,dword ptr [esi+0xA8]
	movzx ecx,al
	mov dword ptr [esi+0x138],ecx
	cmp dword ptr [edx+0x10],0
	je Block77

 Block4:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x54],ebx
	mov dword ptr [esp+0x60],ebx
	mov dword ptr [esp+0x5C],ebx
	lea eax,[esp+0x18]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x5C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x60],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x54],2
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	lea edx,[esp+0x18]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x64]
	push ecx
	push eax
	mov byte ptr [esp+0x60],4
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x54],2
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea edx,[esp+0x18]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x60]
	push ecx
	push eax
	mov byte ptr [esp+0x60],5
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x54],2
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],0x7D0
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],6
	cmp ecx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	fldz
	lea eax,[esp+0x1C]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x54],2
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov eax,0xD
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],7
	cmp ecx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ebp,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov edi,ecx
	call eax
	cmp eax,ebx
	jge Block22

 Block21:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x54],2
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],8
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],9
	cmp ecx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 5
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x54],8
	cmp word ptr [esp+0x1C],di
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [esp+0x54],2
	cmp word ptr [esp+0x2C],di
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov ecx,dword ptr [esp+0x60]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x98]
	push 0x64
	push ebx
	push 0x64
	push 0x64
	push ecx
	push eax
	mov edi,eax
	call edx
	cmp eax,ebx
	jge Block44

 Block43:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea edx,[esp+0x2C]
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x58],bl
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],0xB
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esi+0x164]
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [esi+0x160]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0x54],2
	cmp word ptr [esp+0x1C],di
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov ecx,dword ptr [esp+0x5C]
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	test ecx,ecx
	je Block60

 Block59:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax
	mov ecx,dword ptr [esp+0x5C]

 Block60:
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	jmp Block63

 Block62:
	xor eax,eax

 Block63:
	mov ebp,dword ptr [eax+0x1C]
	mov byte ptr [esp+0x54],0xC
	cmp ebp,edi
	je Block69

 Block64:
	mov dword ptr [eax+0x1C],edi
	test edi,edi
	je Block66

 Block65:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block66:
	test ebp,ebp
	je Block68

 Block67:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block68:
	mov ecx,dword ptr [esp+0x5C]

 Block69:
	mov byte ptr [esp+0x54],2
	test edi,edi
	je Block71

 Block70:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	mov ecx,dword ptr [esp+0x5C]

 Block71:
	mov byte ptr [esp+0x54],1
	test ecx,ecx
	je Block73

 Block72:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block73:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	call CVecCtrlNpc::CreateInstance
	mov edi,eax
	lea ecx,[esi+0x94]
	push edi
	call __QueryVecCtrlNpc
	xor ebx,ebx
	cmp eax,ebx
	jge Block80

 Block78:
	cmp eax,0x80004002
	je Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	lea eax,[esi+0x9C]
	push eax
	mov eax,dword ptr [esi+0xA8]
	xor ecx,ecx
	cmp dword ptr [eax+0xC],ebx
	lea eax,[esi+4]
	setne cl
	push ecx
	push eax
	mov ecx,edi
	call CVecCtrlNpc::Init
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	mov ecx,edi
	call eax
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	mov eax,3
	mov dword ptr [esp+0x54],0xD
	mov word ptr [esp+0x2C],ax
	mov dword ptr [esp+0x34],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x54],0xE
	cmp ecx,ebx
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x78]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xE8]
	cmp edi,eax
	je Block89

 Block85:
	mov dword ptr [esi+0xE8],eax
	cmp eax,ebx
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block87:
	cmp edi,ebx
	je Block89

 Block88:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block89:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebx
	je Block91

 Block90:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block91:
	mov ebp,8
	mov byte ptr [esp+0x54],0xD
	cmp word ptr [esp+0x2C],bp
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bp
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	mov eax,dword ptr [esi+0x90]
	mov edx,0xD
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block101

 Block100:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block101:
	mov edi,dword ptr [esi+0xE8]
	mov dword ptr [esp+0x54],0xF
	cmp edi,ebx
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	cmp eax,ebx
	jge Block105

 Block104:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block105:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bp
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov edi,dword ptr [esi+0xE8]
	cmp edi,ebx
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	cmp eax,ebx
	jge Block113

 Block112:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block113:
	mov ecx,esi
	call CNpc::SetLayerZ
	mov ecx,esi
	call CNpc::PrepareActionLayer
	cmp dword ptr [esi+0x138],ebx
	je Block115

 Block114:
	mov ecx,esi
	call CNpc::RestoreLayers

 Block115:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0x140],ebx
	mov dword ptr [esi+0x13C],ebx
	cmp eax,ebx
	je Block118

 Block116:
	cmp dword ptr [eax],0x13D620
	jne Block118

 Block117:
	mov dword ptr [esi+0x13C],ebx
	mov dword ptr [esi+0x140],0xFFFFFFEC

 Block118:
	cmp dword ptr [eax+0x18],ebx
	je Block120

 Block119:
	push ebx
	push ebx
	mov ecx,esi
	call CNpc::ViewOrHide

 Block120:
	mov edx,dword ptr [esi+0xA8]
	cmp dword ptr [edx+0x4C],ebx
	je Block300

 Block121:
	mov dword ptr [esp+0x5C],ebx
	lea eax,[esp+0x60]
	push 0xF8E
	push eax
	mov dword ptr [esp+0x5C],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ebp,eax
	mov ecx,dword ptr [TSingleton<CMapleTVMan>::ms_pInstance]
	mov edi,dword ptr [ecx+0x440]
	mov ecx,offset _D_G_RAND
	mov byte ptr [esp+0x54],0x11
	call CRand32::Random
	cmp edi,ebx
	je Block123

 Block122:
	xor edx,edx
	div edi
	mov eax,edx

 Block123:
	mov ecx,dword ptr [ebp]
	push eax
	push ecx
	lea edx,[esp+0x64]
	push edx
	call ZXString16::Format
	mov eax,dword ptr [esp+0x6C]
	add esp,0xC
	mov byte ptr [esp+0x54],0x10
	cmp eax,ebx
	je Block125

 Block124:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block125:
	mov eax,dword ptr [esi+0xE8]
	push ebx
	push 0xFF
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block127

 Block126:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block127:
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [eax+0x5C]
	mov edx,dword ptr [eax+0x58]
	mov eax,dword ptr [esi+0x90]
	add ecx,0xB4
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block129

 Block128:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block129:
	mov eax,dword ptr [esp+0x78]
	push ebx
	push eax
	lea ecx,[esp+0x84]
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xFC]
	add esp,0x28
	cmp edi,eax
	je Block134

 Block130:
	mov dword ptr [esi+0xFC],eax
	cmp eax,ebx
	je Block132

 Block131:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block132:
	cmp edi,ebx
	je Block134

 Block133:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block134:
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebx
	je Block136

 Block135:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block136:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block138

 Block137:
	push eax
	call _com_issue_error

 Block138:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	mov bl,0x12
	push edx
	mov byte ptr [esp+0x58],bl
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block140

 Block139:
	push eax
	call _com_issue_error

 Block140:
	mov ecx,dword ptr [esi+0xFC]
	mov byte ptr [esp+0x54],0x13
	test ecx,ecx
	jne Block142

 Block141:
	push 0x80004003
	call _com_issue_error

 Block142:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block145

 Block143:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov byte ptr [esp+0x54],0x10
	cmp word ptr [esp+0x1C],di
	jne Block149

 Block147:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov eax,dword ptr [esi+0xA8]
	mov edx,dword ptr [eax+0x5C]
	add edx,dword ptr [esi+0x164]
	mov eax,dword ptr [eax+0x58]
	add eax,dword ptr [esi+0x160]
	mov ecx,dword ptr [TSingleton<CMapleTVMan>::ms_pInstance]
	push edx
	push eax
	call CMapleTVMan::SetFlashAbsLocation
	lea ecx,[esp+0x60]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[esi+0x114]
	push edi
	push eax
	mov byte ptr [esp+0x60],0x14
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x6C]
	add esp,0xC
	mov byte ptr [esp+0x54],0x10
	test eax,eax
	je Block152

 Block151:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block152:
	lea edx,[esp+0x2C]
	push edx
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block154

 Block153:
	push eax
	call _com_issue_error

 Block154:
	lea ecx,[esp+0x2C]
	push ecx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x70],esp
	push 0x1A25
	mov bl,0x15
	push edx
	mov byte ptr [esp+0x6C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	xor ebp,ebp
	mov byte ptr [esp+0x64],0x16
	cmp ecx,ebp
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	mov byte ptr [esp+0x64],bl
	call IWzFont::Create
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],0x10
	jne Block159

 Block157:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	lea edx,[esp+0x60]
	push 0x3D0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x54],0x17
	cmp eax,ebp
	je Block162

 Block161:
	mov eax,dword ptr [eax]
	jmp Block163

 Block162:
	xor eax,eax

 Block163:
	push ebp
	lea edi,[esi+0x110]
	push edi
	push eax
	call PcCreate_IWzCanvas
	mov ecx,dword ptr [esp+0x6C]
	add esp,0xC
	mov byte ptr [esp+0x54],0x10
	cmp ecx,ebp
	je Block165

 Block164:
	call _xbstr_t::Data_t::Release

 Block165:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	lea edx,[esp+0x2C]
	mov bl,0x18
	push edx
	mov byte ptr [esp+0x58],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x54],0x19
	cmp ecx,ebp
	jne Block171

 Block170:
	push 0x80004003
	call _com_issue_error

 Block171:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0xC8
	push 0xC8
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],di
	jne Block174

 Block172:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov byte ptr [esp+0x54],0x10
	cmp word ptr [esp+0x1C],di
	jne Block178

 Block176:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x54],0x1B
	cmp ecx,ebp
	jne Block183

 Block182:
	push 0x80004003
	call _com_issue_error

 Block183:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x7C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF8]
	cmp edi,eax
	je Block188

 Block184:
	mov dword ptr [esi+0xF8],eax
	cmp eax,ebp
	je Block186

 Block185:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block186:
	cmp edi,ebp
	je Block188

 Block187:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block188:
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block190

 Block189:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block190:
	mov ebx,8
	mov byte ptr [esp+0x54],0x1A
	cmp word ptr [esp+0x2C],bx
	jne Block197

 Block191:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block193

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block193:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block194:
	mov byte ptr [esp+0x54],0x10
	cmp word ptr [esp+0x1C],bx
	jne Block198

 Block195:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block199

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block199

 Block197:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x2C]
	push edx
	call edi
	jmp Block194

 Block198:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block199:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebp
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block208

 Block200:
	mov edx,0xD
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],eax
	cmp eax,ebp
	je Block202

 Block201:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block202:
	mov ecx,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x54],0x1C
	cmp ecx,ebp
	jne Block204

 Block203:
	push 0x80004003
	call _com_issue_error

 Block204:
	lea eax,[esp+0x2C]
	push eax
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0x54],0x10
	cmp word ptr [esp+0x2C],bx
	jne Block207

 Block205:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block208:
	mov eax,dword ptr [esi+0xE8]
	cmp eax,ebp
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block217

 Block209:
	mov ecx,0xD
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	cmp eax,ebp
	je Block211

 Block210:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block211:
	mov ecx,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x54],0x1D
	cmp ecx,ebp
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2DLayer::Putoverlay
	mov byte ptr [esp+0x54],0x10
	cmp word ptr [esp+0x2C],bx
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block217:
	mov edi,dword ptr [esi+0xF8]
	cmp edi,ebp
	jne Block219

 Block218:
	push 0x80004003
	call _com_issue_error

 Block219:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 4
	push edi
	call eax
	cmp eax,ebp
	jge Block221

 Block220:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block221:
	mov edi,dword ptr [esi+0xF8]
	cmp edi,ebp
	jne Block223

 Block222:
	push 0x80004003
	call _com_issue_error

 Block223:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	cmp eax,ebp
	jge Block225

 Block224:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block225:
	lea eax,[esp+0x60]
	push 0xF90
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x5C],0x1E
	call ZXString16::Format
	mov eax,dword ptr [esp+0x68]
	add esp,8
	mov byte ptr [esp+0x54],0x10
	cmp eax,ebp
	je Block227

 Block226:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block227:
	mov eax,dword ptr [esi+0xE8]
	push ebp
	push 0xFF
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block229

 Block228:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block229:
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [eax+0x54]
	mov edx,dword ptr [eax+0x50]
	mov eax,dword ptr [esi+0x90]
	add ecx,0x5A
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block231

 Block230:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block231:
	mov eax,dword ptr [esp+0x78]
	push ebp
	push eax
	lea ecx,[esp+0x84]
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x100]
	add esp,0x28
	cmp edi,eax
	je Block236

 Block232:
	mov dword ptr [esi+0x100],eax
	cmp eax,ebp
	je Block234

 Block233:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block234:
	cmp edi,ebp
	je Block236

 Block235:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block236:
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block238

 Block237:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block238:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block240

 Block239:
	push eax
	call _com_issue_error

 Block240:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	mov bl,0x1F
	push edx
	mov byte ptr [esp+0x58],bl
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block242

 Block241:
	push eax
	call _com_issue_error

 Block242:
	mov ecx,dword ptr [esi+0x100]
	mov byte ptr [esp+0x54],0x20
	cmp ecx,ebp
	jne Block244

 Block243:
	push 0x80004003
	call _com_issue_error

 Block244:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ebp
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x54],bl
	mov ebx,8
	cmp word ptr [esp+0x2C],bx
	jne Block247

 Block245:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block248

 Block246:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block248

 Block247:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block248:
	mov byte ptr [esp+0x54],0x10
	cmp word ptr [esp+0x1C],bx
	jne Block251

 Block249:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block252

 Block250:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block252

 Block251:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block252:
	lea edx,[esp+0x1C]
	push edx
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block254

 Block253:
	push eax
	call _com_issue_error

 Block254:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x54],0x22
	cmp ecx,ebp
	jne Block256

 Block255:
	push 0x80004003
	call _com_issue_error

 Block256:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x7C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x104]
	cmp edi,eax
	je Block261

 Block257:
	mov dword ptr [esi+0x104],eax
	cmp eax,ebp
	je Block259

 Block258:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block259:
	cmp edi,ebp
	je Block261

 Block260:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block261:
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block263

 Block262:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block263:
	mov ebx,8
	mov byte ptr [esp+0x54],0x21
	cmp word ptr [esp+0x2C],bx
	jne Block270

 Block264:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block266

 Block265:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block266:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block267:
	mov byte ptr [esp+0x54],0x10
	cmp word ptr [esp+0x1C],bx
	jne Block271

 Block268:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block272

 Block269:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block272

 Block270:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x2C]
	push edx
	call edi
	jmp Block267

 Block271:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block272:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebp
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block281

 Block273:
	mov edx,0xD
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],eax
	cmp eax,ebp
	je Block275

 Block274:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block275:
	mov ecx,dword ptr [esi+0x104]
	mov byte ptr [esp+0x54],0x23
	cmp ecx,ebp
	jne Block277

 Block276:
	push 0x80004003
	call _com_issue_error

 Block277:
	lea eax,[esp+0x2C]
	push eax
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0x54],0x10
	cmp word ptr [esp+0x2C],bx
	jne Block280

 Block278:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block281

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block280:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block281:
	cmp dword ptr [esi+0xE8],ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block290

 Block282:
	mov eax,dword ptr [esi+0x100]
	mov ecx,0xD
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],eax
	cmp eax,ebp
	je Block284

 Block283:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block284:
	mov ecx,dword ptr [esi+0x104]
	mov byte ptr [esp+0x54],0x24
	cmp ecx,ebp
	jne Block286

 Block285:
	push 0x80004003
	call _com_issue_error

 Block286:
	lea edx,[esp+0x3C]
	push edx
	call IWzGr2DLayer::Putoverlay
	mov byte ptr [esp+0x54],0x10
	cmp word ptr [esp+0x3C],bx
	jne Block289

 Block287:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block290

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block290

 Block289:
	lea ecx,[esp+0x3C]
	push ecx
	call edi

 Block290:
	mov edi,dword ptr [esi+0x104]
	cmp edi,ebp
	jne Block292

 Block291:
	push 0x80004003
	call _com_issue_error

 Block292:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xB4]
	push 4
	push edi
	call eax
	cmp eax,ebp
	jge Block294

 Block293:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block294:
	mov edi,dword ptr [esi+0x104]
	cmp edi,ebp
	jne Block296

 Block295:
	push 0x80004003
	call _com_issue_error

 Block296:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	cmp eax,ebp
	jge Block298

 Block297:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block298:
	mov ecx,esi
	mov dword ptr [esi+0x118],ebp
	mov dword ptr [esi+0x12C],ebp
	call CNpc::SetMapleTVMessage
	mov ecx,dword ptr [TSingleton<CMapleTVMan>::ms_pInstance]
	call CMapleTVMan::LoadMapleTVMedia
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block300

 Block299:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block300:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 8
}
}
// CNpc::SetMoveAction
__SUB_CLASS_THIS(00271280, __thiscall, 50389,  CNpc, void, long, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x8C]
	push edi
	mov edi,dword ptr [esp+0x10]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x10]
	push ebx
	push edi
	call edx

 Block2:
	test ebx,ebx
	jne Block4

 Block3:
	cmp edi,dword ptr [esi+0xAC]
	je Block9

 Block4:
	mov ecx,dword ptr [esi+0x8C]
	mov dword ptr [esi+0xAC],edi
	test ecx,ecx
	je Block6

 Block5:
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	mov eax,ecx
	jmp Block7

 Block6:
	xor eax,eax
	cmp dword ptr [esi+0xB0],0xFFFFFFFF
	setg al

 Block7:
	test eax,eax
	jne Block9

 Block8:
	mov ecx,esi
	call CNpc::PrepareActionLayer

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CNpc::SetMapleTVMessage
_SUB_EXCEPTION_HANDLER(2757F0)
__SUB_CLASS_THIS0(002757F0, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2757F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x464
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x478]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [TSingleton<CMapleTVMan>::ms_pInstance]
	mov eax,dword ptr [ebx]
	xor ebp,ebp
	mov dword ptr [esp+0x40],ebx
	cmp eax,ebp
	je Block80

 Block1:
	mov eax,dword ptr [ebx+4]
	mov ecx,dword ptr [ebx+0xC]
	mov dword ptr [esp+0x14],ecx
	cmp eax,ebp
	je Block71

 Block2:
	or ebx,0xFFFFFFFF
	lea edi,[ebp-2]
	cmp dword ptr [esi+0x130],ebp
	je Block10

 Block3:
	cmp dword ptr [esi+0x108],ebp
	je Block9

 Block4:
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],edi
	mov ecx,dword ptr [esi+0x108]
	mov dword ptr [esp+0x480],ebp
	cmp ecx,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x48]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x480],ebx
	call Ztl_variant_t::~Ztl_variant_t

 Block9:
	mov dword ptr [esi+0x130],ebp

 Block10:
	cmp dword ptr [esi+0x134],ebp
	je Block18

 Block11:
	cmp dword ptr [esi+0x10C],ebp
	je Block17

 Block12:
	mov eax,3
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],edi
	mov ecx,dword ptr [esi+0x10C]
	mov dword ptr [esp+0x480],1
	cmp ecx,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x480],ebx
	call Ztl_variant_t::~Ztl_variant_t

 Block17:
	mov dword ptr [esi+0x134],ebp

 Block18:
	lea edi,[esi+0x11C]
	mov ecx,edi
	call ZRef<CAvatar>::Clear
	lea ebp,[esi+0x124]
	mov ecx,ebp
	call ZRef<CAvatar>::Clear
	cmp dword ptr [esi+0xF8],0
	mov ebx,8
	je Block27

 Block19:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],0xFFFFFFFE
	mov ecx,dword ptr [esi+0xF8]
	mov dword ptr [esp+0x480],2
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov dword ptr [esp+0x480],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	cmp dword ptr [esi+0x100],0
	je Block36

 Block28:
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x100]
	mov dword ptr [esp+0x480],edx
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov dword ptr [esp+0x480],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	cmp dword ptr [esi+0x104],0
	je Block45

 Block37:
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x104]
	mov dword ptr [esp+0x480],4
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov dword ptr [esp+0x480],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov ecx,edi
	call ZRef<CAvatar>::_Alloc
	mov ecx,ebp
	call ZRef<CAvatar>::_Alloc
	mov edx,dword ptr [esp+0x40]
	cmp dword ptr [edx+8],0
	je Block70

 Block46:
	mov dword ptr [esp+0x18],0
	lea eax,[esp+0x44]
	push 0xF8F
	push eax
	mov dword ptr [esp+0x488],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x488],6
	call ZXString16::Format
	mov eax,dword ptr [esp+0x4C]
	add esp,8
	mov byte ptr [esp+0x480],5
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	mov eax,dword ptr [esi+0x104]
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block50:
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [eax+0x54]
	mov edx,dword ptr [eax+0x50]
	mov eax,dword ptr [esi+0x90]
	add ecx,0x5A
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block52:
	mov ebp,dword ptr [esp+0x34]
	push 0
	lea eax,[esp+0x64]
	push ebp
	push eax
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[esi+0x100]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	mov bl,7
	push edx
	mov byte ptr [esp+0x484],bl
	call edi
	lea eax,[esp+0x1C]
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
	mov ecx,dword ptr [esi+0x100]
	mov byte ptr [esp+0x480],8
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x480],bl
	cmp word ptr [esp+0x1C],di
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0x480],5
	cmp word ptr [esp+0x2C],di
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov dword ptr [esp+0x480],0xFFFFFFFF
	test ebp,ebp
	je Block70

 Block69:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block70:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	call dword ptr [ZImports::_timeGetTime]
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [esi+0x12C],eax
	xor ebp,ebp

 Block71:
	cmp dword ptr [esi+0x12C],ebp
	je Block152

 Block72:
	call dword ptr [ZImports::_timeGetTime]
	sub eax,dword ptr [esi+0x12C]
	cmp eax,0x11
	jbe Block152

 Block73:
	lea edx,[esp+0x68]
	push edx
	mov ecx,ebx
	call CMapleTVMan::GetSenderAvartarLook
	lea eax,[esp+0x270]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x484],9
	call CMapleTVMan::GetReceiverAvartarLook
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [eax+0x54]
	mov edx,dword ptr [eax+0x50]
	mov eax,dword ptr [esi+0xF8]
	push ebp
	push 0x64
	add ecx,0x4D
	push ecx
	add edx,0x1C
	push edx
	push 0xE
	push ecx
	lea edi,[esi+0xF8]
	mov ecx,esp
	mov byte ptr [esp+0x498],0xA
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block75:
	mov eax,dword ptr [esi+0x90]
	push ecx
	lea ebp,[esi+0x90]
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block77:
	mov ecx,dword ptr [esi+0x120]
	push 4
	lea eax,[esp+0x88]
	push eax
	call CAvatar::Init_1
	cmp dword ptr [esp+0x14],0
	jne Block79

 Block78:
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [eax+0x54]
	mov edx,dword ptr [eax+0x50]
	push 0
	push 0x64
	add ecx,0x4D
	push ecx
	add edx,0xD5
	push edx
	push 0xE
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	push edi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	push ebp
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov ecx,dword ptr [esi+0x128]
	push 5
	lea eax,[esp+0x290]
	push eax
	call CAvatar::Init_1

 Block79:
	mov ecx,esi
	call CNpc::DrawMapleTVMessage
	mov dword ptr [esi+0x12C],0
	jmp Block152

 Block80:
	cmp dword ptr [ebx+4],ebp
	je Block152

 Block81:
	lea ecx,[esi+0x11C]
	call ZRef<CAvatar>::Clear
	lea ecx,[esi+0x124]
	call ZRef<CAvatar>::Clear
	or edi,0xFFFFFFFF
	cmp dword ptr [esi+0xF8],0
	lea ebp,[edi+9]
	je Block90

 Block82:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],0xFFFFFFFE
	mov ecx,dword ptr [esi+0xF8]
	mov dword ptr [esp+0x480],0xB
	test ecx,ecx
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	mov dword ptr [esp+0x480],edi
	cmp word ptr [esp+0x2C],bp
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
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
	cmp dword ptr [esi+0x100],0
	je Block99

 Block91:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x100]
	mov dword ptr [esp+0x480],0xC
	test ecx,ecx
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block95

 Block94:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block95:
	mov dword ptr [esp+0x480],edi
	cmp word ptr [esp+0x2C],bp
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	cmp dword ptr [esi+0x104],0
	je Block108

 Block100:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x104]
	mov dword ptr [esp+0x480],0xD
	test ecx,ecx
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov dword ptr [esp+0x480],edi
	cmp word ptr [esp+0x2C],bp
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	movzx eax,byte ptr [ebx+0x45C]
	sub eax,1
	je Block116

 Block109:
	sub eax,1
	jne Block123

 Block110:
	cmp dword ptr [esi+0x10C],eax
	je Block123

 Block111:
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x10C]
	mov dword ptr [esp+0x480],0xF
	test ecx,ecx
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	lea eax,[esp+0x48]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block115:
	lea ecx,[esp+0x48]
	jmp Block122

 Block116:
	cmp dword ptr [esi+0x108],0
	je Block123

 Block117:
	mov eax,3
	mov word ptr [esp+0x58],ax
	mov dword ptr [esp+0x60],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x108]
	mov dword ptr [esp+0x480],0xE
	test ecx,ecx
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block121

 Block120:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block121:
	lea ecx,[esp+0x58]

 Block122:
	call Ztl_variant_t::~Ztl_variant_t

 Block123:
	mov dword ptr [esp+0x18],0
	lea eax,[esp+0x14]
	push 0xF90
	push eax
	mov dword ptr [esp+0x488],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x488],0x11
	call ZXString16::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov byte ptr [esp+0x480],0x10
	test eax,eax
	je Block125

 Block124:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block125:
	mov eax,dword ptr [esi+0x104]
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block127

 Block126:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block127:
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [eax+0x54]
	mov edx,dword ptr [eax+0x50]
	mov eax,dword ptr [esi+0x90]
	add ecx,0x5A
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block129

 Block128:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block129:
	mov ebp,dword ptr [esp+0x34]
	push 0
	lea eax,[esp+0x34]
	push ebp
	push eax
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x100]
	add esp,0x28
	cmp edi,eax
	je Block134

 Block130:
	mov dword ptr [esi+0x100],eax
	test eax,eax
	je Block132

 Block131:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block132:
	test edi,edi
	je Block134

 Block133:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block134:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block136

 Block135:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block136:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push ecx
	call edi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block138

 Block137:
	push eax
	call _com_issue_error

 Block138:
	lea eax,[esp+0x58]
	mov bl,0x12
	push eax
	mov byte ptr [esp+0x484],bl
	call edi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block140

 Block139:
	push eax
	call _com_issue_error

 Block140:
	mov ecx,dword ptr [esi+0x100]
	mov byte ptr [esp+0x480],0x13
	test ecx,ecx
	jne Block142

 Block141:
	push 0x80004003
	call _com_issue_error

 Block142:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x480],bl
	cmp word ptr [esp+0x58],si
	jne Block145

 Block143:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov byte ptr [esp+0x480],0x10
	cmp word ptr [esp+0x48],si
	jne Block149

 Block147:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [eax+4],0
	mov dword ptr [eax+8],1
	mov dword ptr [esp+0x480],0xFFFFFFFF
	test ebp,ebp
	je Block152

 Block151:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block152:
	mov ecx,dword ptr [esp+0x478]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x470
	ret
}
}
// CNpc::OnLayerZChanged
__SUB_CLASS_THIS(0026FF90, __thiscall, 50403,  CNpc, void, const CVecCtrl*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	cmp eax,dword ptr [ecx+0x8C]
	jne Block5

 Block4:
	add ecx,0xFFFFFFFC
	call CNpc::SetLayerZ

 Block5:
	ret 4
}
}
// CNpc::~CNpc
_SUB_EXCEPTION_HANDLER(270C40)
__SUB_CLASS_THIS0(00270C40, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_270C40
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
	int 3// TODO: 	mov dword ptr [esi],offset CNpc::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CNpc::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CNpc::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x15C]
	xor ebx,ebx
	mov dword ptr [esp+0x20],0x19
	cmp eax,ebx
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x15C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x15C]
	cmp ecx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x15C],ebx

 Block5:
	lea ecx,[esi+0x144]
	mov byte ptr [esp+0x20],0x18
	call ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>>::RemoveAll
	mov eax,dword ptr [esi+0x128]
	mov byte ptr [esp+0x20],0x17
	cmp eax,ebx
	je Block10

 Block6:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block9

 Block8:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block9:
	mov dword ptr [esi+0x128],ebx

 Block10:
	mov eax,dword ptr [esi+0x120]
	mov byte ptr [esp+0x20],0x16
	cmp eax,ebx
	je Block15

 Block11:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block14

 Block13:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block14:
	mov dword ptr [esi+0x120],ebx

 Block15:
	mov eax,dword ptr [esi+0x114]
	mov byte ptr [esp+0x20],0x15
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esi+0x110]
	mov byte ptr [esp+0x20],0x14
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,dword ptr [esi+0x10C]
	mov byte ptr [esp+0x20],0x13
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [esi+0x108]
	mov byte ptr [esp+0x20],0x12
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov eax,dword ptr [esi+0x104]
	mov byte ptr [esp+0x20],0x11
	cmp eax,ebx
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov eax,dword ptr [esi+0x100]
	mov byte ptr [esp+0x20],0x10
	cmp eax,ebx
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [esi+0xFC]
	mov byte ptr [esp+0x20],0xF
	cmp eax,ebx
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov eax,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x20],0xE
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov eax,dword ptr [esi+0xF4]
	mov byte ptr [esp+0x20],0xD
	cmp eax,ebx
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov eax,dword ptr [esi+0xF0]
	mov byte ptr [esp+0x20],0xC
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov eax,dword ptr [esi+0xEC]
	mov byte ptr [esp+0x20],0xB
	cmp eax,ebx
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov eax,dword ptr [esi+0xE8]
	mov byte ptr [esp+0x20],0xA
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0x20],9
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD4]
	mov byte ptr [esp+0x20],8
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD0]
	mov byte ptr [esp+0x20],7
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xCC]
	mov byte ptr [esp+0x20],6
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xC8]
	mov byte ptr [esp+0x20],5
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xC4]
	mov byte ptr [esp+0x20],4
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xBC]
	mov byte ptr [esp+0x20],3
	call ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>>::RemoveAll
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x20],2
	cmp eax,ebx
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov eax,dword ptr [esi+0x90]
	mov byte ptr [esp+0x20],1
	cmp eax,ebx
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block48

 Block44:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block45:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block47

 Block46:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block47:
	mov dword ptr [esi+0x8C],ebx

 Block48:
	mov ecx,esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CLife::~CLife
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
// CNpc::PrepareActionLayer
_SUB_EXCEPTION_HANDLER(270580)
__SUB_CLASS_THIS0(00270580, __thiscall, 50381,  CNpc, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_270580
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
	mov eax,dword ptr [ebp+0xA8]
	test eax,eax
	je Block12

 Block1:
	cmp dword ptr [eax+0xE4],0
	je Block12

 Block2:
	mov ecx,dword ptr [ebp+0x8C]
	test ecx,ecx
	jne Block11

 Block3:
	mov eax,3
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],0xFFFFFFFE
	mov dword ptr [esp+0x98],ecx

 Block4:
	mov ecx,dword ptr [ebp+0xE8]
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x98],0xFFFFFFFF
	jne Block14

 Block9:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block62

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block11:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	call eax
	jmp Block62

 Block12:
	cmp dword ptr [ebp+0x138],0
	jne Block15

 Block13:
	mov ecx,3
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],0xFFFFFFFE
	mov dword ptr [esp+0x98],1
	jmp Block4

 Block14:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block62

 Block15:
	lea edx,[esp+0x1C]
	push edx
	call CNpc::GetCurrentAction
	push eax
	mov ecx,ebp
	call CNpc::GetActionFrameList
	mov esi,eax
	mov eax,3
	mov dword ptr [esp+0x18],esi
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0xE8]
	mov dword ptr [esp+0x98],2
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov ebx,8
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp word ptr [esp+0x20],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block57

 Block24:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ecx]

 Block25:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea eax,[esp+0x70]
	push eax
	call edi
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block59

 Block26:
	lea edx,[esp+0x60]
	push edx
	mov dword ptr [esp+0x9C],3
	call edi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block59

 Block27:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x9C],4
	call edi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block59

 Block28:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x9C],5
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block59

 Block29:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	mov ecx,dword ptr [ebp+0xE8]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x98],7
	test ecx,ecx
	je Block5

 Block30:
	lea eax,[esp+0x70]
	push eax
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x58]
	push eax
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push esi
	lea edx,[esp+0x98]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x80],bx
	jne Block37

 Block31:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block33:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x98],6
	cmp word ptr [esp+0x30],bx
	jne Block38

 Block35:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block39

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block37:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x80]
	push ecx
	call esi
	jmp Block34

 Block38:
	lea eax,[esp+0x30]
	push eax
	call esi

 Block39:
	mov byte ptr [esp+0x98],5
	cmp word ptr [esp+0x40],bx
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x40]
	push edx
	call esi

 Block43:
	mov byte ptr [esp+0x98],4
	cmp word ptr [esp+0x50],bx
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x50]
	push ecx
	call esi

 Block47:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x60],bx
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[esp+0x60]
	push eax
	call esi

 Block51:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp word ptr [esp+0x70],bx
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x70]
	push edx
	call esi

 Block55:
	cmp dword ptr [esp+0x14],0
	jne Block25

 Block56:
	mov esi,dword ptr [esp+0x18]

 Block57:
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [ebp+0xB4],eax
	mov ecx,dword ptr [esi+0xC]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x10]
	mov dword ptr [ebp+0xB8],eax
	mov esi,dword ptr [ebp+0xE8]
	test esi,esi
	jne Block60

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	push eax
	call _com_issue_error

 Block60:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD8]
	xor edx,edx
	cmp dword ptr [esp+0x1C],edx
	sete dl
	push edx
	push esi
	call eax
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret
}
}
// CNpc::ViewOrHide
__SUB_CLASS_THIS(0026FE00, __thiscall, 50411,  CNpc, void, int32_t, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	xor eax,eax
	test ebx,ebx
	sete al
	push esi
	push edi
	mov edi,ecx
	mov dword ptr [edi+0x150],eax
	mov esi,dword ptr [edi+0xE8]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x11C]
	push ebx
	push esi
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	cmp dword ptr [edi+0xEC],0
	je Block9

 Block5:
	mov esi,dword ptr [edi+0xEC]
	test esi,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x11C]
	push ebx
	push esi
	call ecx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	cmp dword ptr [edi+0xF0],0
	je Block14

 Block10:
	mov esi,dword ptr [edi+0xF0]
	test esi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x11C]
	push ebx
	push esi
	call eax
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [esp+0x14]
	push ecx
	mov ecx,edi
	call CLife::ShowNameTag
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CNpc::OnResolveMoveAction
__SUB_CLASS_THIS(0026FCB0, __thiscall, 50402,  CNpc, long, long, long, long, const CVecCtrl*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA4]
	cmp dword ptr [eax+0xC],0
	mov eax,dword ptr [esp+4]
	je Block3

 Block1:
	test eax,eax
	je Block5

 Block2:
	xor ecx,ecx
	test eax,eax
	setl cl
	and ecx,1
	or ecx,2
	mov eax,ecx
	ret 0x10

 Block3:
	test eax,eax
	je Block5

 Block4:
	xor edx,edx
	test eax,eax
	setl dl
	and edx,1
	or edx,4
	mov eax,edx
	ret 0x10

 Block5:
	mov eax,dword ptr [esp+0xC]
	and eax,1
	or eax,4
	ret 0x10
}
}
// CNpc::OnMove
_SUB_EXCEPTION_HANDLER(278060)
__SUB_CLASS_THIS(00278060, __thiscall, 50406,  CNpc, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_278060
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x74]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [esp+0x84]
	mov ecx,ebx
	call CInPacket::Decode1
	mov ecx,ebx
	movsx edi,al
	call CInPacket::Decode1
	movsx eax,al
	mov dword ptr [esp+0x14],eax
	cmp edi,0xFFFFFFFF
	je Block54

 Block1:
	test edi,edi
	jl Block60

 Block2:
	mov ecx,dword ptr [esi+0xA8]
	mov eax,dword ptr [ecx+0x78]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	lea ebp,[edi-2]
	cmp ebp,eax
	jae Block60

 Block5:
	cmp dword ptr [esi+0xF0],0
	mov ebx,1
	je Block13

 Block6:
	mov ecx,dword ptr [ecx+0x78]
	lea eax,[edi+edi*8]
	cmp dword ptr [ecx+eax*4-0x3C],0
	jne Block9

 Block7:
	cmp dword ptr [esi+0x150],0
	jne Block9

 Block8:
	mov eax,ebx
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov ecx,dword ptr [esi+0xF0]
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	push eax
	call IWzGr2DLayer::Putvisible

 Block13:
	mov ecx,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xC0],0
	mov dword ptr [esi+0xB0],edi
	mov eax,dword ptr [ecx+0x78]
	test eax,eax
	je Block15

 Block14:
	mov eax,dword ptr [eax-4]

 Block15:
	sub eax,dword ptr [ecx+0x7C]
	cmp ebp,eax
	jb Block17

 Block16:
	mov dword ptr [esi+0xC0],ebx

 Block17:
	mov ecx,esi
	call CNpc::PrepareActionLayer
	xor ecx,ecx
	mov dword ptr [esp+0x18],ecx
	mov eax,dword ptr [esi+0x148]
	cmp eax,ecx
	mov dword ptr [esp+0x7C],ecx
	jge Block19

 Block18:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x2C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0xA8]
	mov edx,dword ptr [eax+0x78]
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[edi+edi*8-0x12]
	lea ecx,[edx+ecx*4]
	lea edx,[esp+0x18]
	push edx
	push ebp
	lea eax,[esp+0x30]
	push eax
	call CNpcTemplate::ACT::GetChatMessageList
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x80],bl
	call ZArray<Ztl_bstr_t>::operator=
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x7C],0
	call ZArray<Ztl_bstr_t>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x18]
	jmp Block23

 Block19:
	mov ecx,dword ptr [esi+0xA8]
	push eax
	sub ecx,0xFFFFFF80
	call ZList<CNpcTemplate::CLIENT_ACTION_SET>::FindIndex
	mov edx,dword ptr [eax+0x18]
	lea ecx,[edi+edi*8]
	lea eax,[edx+ecx*4-0x44]
	push eax
	lea ecx,[esp+0x1C]
	call ZArray<Ztl_bstr_t>::operator=
	mov ebp,dword ptr [esp+0x18]
	test ebp,ebp
	je Block21

 Block20:
	mov eax,dword ptr [ebp-4]
	test eax,eax
	jne Block22

 Block21:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	jmp Block27

 Block22:
	push 0
	push eax
	call get_rand_range
	add esp,8
	mov dword ptr [esp+0x14],eax

 Block23:
	test eax,eax
	jl Block27

 Block24:
	test ebp,ebp
	je Block27

 Block25:
	cmp eax,dword ptr [ebp-4]
	jae Block27

 Block26:
	push ecx
	lea eax,[ebp+eax*4]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call Ztl_bstr_t::_ctor_copy
	mov ecx,esi
	call CNpc::OnChat

 Block27:
	cmp dword ptr [esi+0xC0],0
	je Block53

 Block28:
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x20],0
	lea ecx,[esp+0x24]
	push 0x3CF
	push ecx
	mov byte ptr [esp+0x84],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi+0xA8]
	mov ecx,dword ptr [edx]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x88],4
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x7C],3
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x80],5
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x20]
	push 0
	push 0
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov bl,6
	push edx
	mov byte ptr [esp+0x94],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x90],7
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea eax,[esp+0x68]
	mov byte ptr [esp+0x90],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x84],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x54]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x34]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x2C]
	test ebp,ebp
	je Block46

 Block33:
	mov edx,dword ptr [esi+0xA8]
	mov eax,dword ptr [edx+0x78]
	lea ecx,[edi+edi*8-0x12]
	push ecx
	lea eax,[eax+ecx*4]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call Ztl_bstr_t::_ctor_copy
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0x84],0xD
	mov ecx,ebp
	mov byte ptr [esp+0x84],0xC
	call IWzProperty::Getitem
	push eax
	lea edx,[esp+0x28]
	mov bl,0xE
	push edx
	mov byte ptr [esp+0x84],bl
	call get_unknown
	add esp,8
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x80],0xF
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x7C],bl
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x7C],0xC
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [esp+0x1C]
	test ebx,ebx
	je Block47

 Block36:
	push 0xFFFFFFFF
	push offset _S___3
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1AAD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0x8C],0x10
	mov ecx,ebx
	mov byte ptr [esp+0x8C],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0x11
	call get_string
	add esp,8
	push eax
	lea ecx,[esp+0x2C]
	call ZXString16::CreateFromCStr
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x7C],0x13
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x24]
	call ZXString16::IsEmpty
	mov edi,dword ptr [esp+0x24]
	test eax,eax
	jne Block44

 Block37:
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	je Block39

 Block38:
	lea ecx,[eax-0xC]
	jmp Block40

 Block39:
	xor ecx,ecx

 Block40:
	mov ecx,dword ptr [ecx+0x1C4]
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	jmp Block43

 Block42:
	xor eax,eax

 Block43:
	mov eax,dword ptr [eax+0x1C0]
	imul eax,0xBB8
	sub eax,ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	lea edx,[eax+eax*4]
	push 0
	lea eax,[edx+edx-0x3FFF8ADA]
	push eax
	push edi
	call CAnimationDisplayer::Effect_Reserved

 Block44:
	mov byte ptr [esp+0x7C],0xC
	test edi,edi
	je Block47

 Block45:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4
	jmp Block47

 Block46:
	mov ebx,dword ptr [esp+0x1C]

 Block47:
	mov byte ptr [esp+0x7C],3
	test ebp,ebp
	je Block49

 Block48:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block49:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x7C],2
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block51:
	mov byte ptr [esp+0x7C],0
	test ebx,ebx
	je Block53

 Block52:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block53:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	call ZArray<Ztl_bstr_t>::RemoveAll
	mov ebx,dword ptr [esp+0x84]
	jmp Block60

 Block54:
	cmp eax,0xFFFFFFFF
	je Block60

 Block55:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x24]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea eax,[esp+0x14]
	push eax
	push edi
	lea ecx,[esp+0x8C]
	push ecx
	mov ecx,dword ptr [esi+0xA8]
	call CNpcTemplate::GetChatMessageList_0
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x7C],0x14
	test eax,eax
	jl Block59

 Block56:
	mov ecx,dword ptr [esp+0x84]
	test ecx,ecx
	je Block59

 Block57:
	cmp eax,dword ptr [ecx-4]
	jae Block59

 Block58:
	push ecx
	lea eax,[ecx+eax*4]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	call Ztl_bstr_t::_ctor_copy
	mov ecx,esi
	call CNpc::OnChat

 Block59:
	lea ecx,[esp+0x84]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	call ZArray<Ztl_bstr_t>::RemoveAll

 Block60:
	mov edx,dword ptr [esi+0xA8]
	cmp dword ptr [edx+0xC],0
	je Block65

 Block61:
	mov eax,dword ptr [esi+0x90]
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	jmp Block64

 Block63:
	xor eax,eax

 Block64:
	push 0
	push ebx
	lea ecx,[eax+0x244]
	call CMovePath::OnMovePacket

 Block65:
	mov dword ptr [esi+0x98],0
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x6C
	ret 4
}
}
// CNpc::GetType
__SUB_CLASS_THIS0(00270F60, __thiscall, 50401,  CNpc, long) {
__asm {

 Block0:
	mov eax,2
	ret
}
}
