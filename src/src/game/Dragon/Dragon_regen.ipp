#include "regen.hpp"
// Dragon.ipp
#include "Dragon.hpp"

// CDragon::OnLayerZChanged
__SUB_CLASS_THIS(0010AE40, __thiscall, 23924,  CDragon, void, const CVecCtrl*) {
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
	cmp eax,dword ptr [ecx+0xD8]
	jne Block5

 Block4:
	add ecx,0xFFFFFFFC
	call CDragon::SetLayerZ

 Block5:
	ret 4
}
}
// CDragon::UpdateQuestInfo
_SUB_EXCEPTION_HANDLER(10E100)
__SUB_CLASS_THIS0(0010E100, __thiscall, 23905,  CDragon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10E100
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
	mov dword ptr [esp+0x14],esi
	mov ecx,dword ptr [esi+0x118]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	test eax,eax
	je Block84

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x38]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block6

 Block2:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block5

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block5:
	mov dword ptr [esp+0x3C],0

 Block6:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x4080]
	lea edi,[ecx+0x2148]
	mov dword ptr [esp+0x24],edx
	call CWvsContext::GetCurFieldID
	mov ebp,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x2064]
	mov dword ptr [esp+0x1C],ecx
	xor ecx,ecx
	mov dword ptr [esp+0x2C],ecx
	mov dword ptr [esp+0x18],ecx

 Block7:
	mov eax,dword ptr [esi+0x120]
	mov dword ptr [esp+0x28],ecx
	test eax,eax
	je Block17

 Block8:
	cmp ecx,dword ptr [eax-4]
	jae Block17

 Block9:
	mov edx,eax
	movzx esi,word ptr [edx+ecx*2]
	lea eax,[esi-0x4B0]
	mov ecx,0xC7
	mov dword ptr [esp+0x34],esi
	cmp ax,cx
	jbe Block15

 Block10:
	movzx edx,si
	lea eax,[esp+0x30]
	push eax
	lea ecx,[ebx+0x6F5]
	mov dword ptr [esp+0x34],edx
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	je Block13

 Block11:
	push edi
	push ebx
	push 0xF7508
	push esi
	mov ecx,ebp
	call CQuestMan::CheckCompleteDemand
	test eax,eax
	je Block16

 Block12:
	mov ecx,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x2C],1
	inc ecx
	jmp Block7

 Block13:
	push 0
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[ebx+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x24]
	push 0
	push edx
	test eax,eax
	mov eax,dword ptr [esp+0x28]
	push eax
	push ecx
	push edi
	push ebx
	push 0xF7508
	mov ecx,ebp
	push esi
	call CQuestMan::CheckStartDemand
	test eax,eax
	je Block15

 Block14:
	mov dword ptr [esp+0x18],1

 Block15:
	mov ecx,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x14]
	inc ecx
	jmp Block7

 Block16:
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [edx+0x124],2
	mov esi,edx
	jmp Block22

 Block17:
	cmp dword ptr [esp+0x18],0
	je Block19

 Block18:
	mov dword ptr [esi+0x124],0
	jmp Block22

 Block19:
	cmp dword ptr [esp+0x2C],0
	je Block21

 Block20:
	mov dword ptr [esi+0x124],1
	jmp Block22

 Block21:
	mov dword ptr [esi+0x124],6

 Block22:
	mov eax,dword ptr [esi+0x124]
	cmp dword ptr [esi+0x128],eax
	je Block25

 Block23:
	mov dword ptr [esi+0x128],eax
	mov eax,dword ptr [esi+0x12C]
	test eax,eax
	je Block25

 Block24:
	mov dword ptr [esi+0x12C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	xor ecx,ecx
	cmp dword ptr [esi+0x12C],ecx
	sete al
	test al,al
	je Block56

 Block26:
	cmp dword ptr [esi+0x124],6
	je Block56

 Block27:
	mov dword ptr [esp+0x2C],ecx
	lea eax,[esp+0x34]
	push 0x19BC
	push eax
	mov dword ptr [esp+0x68],ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0x124]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x6C],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x40]
	add esp,0xC
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	mov eax,dword ptr [esi+0x88]
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block31:
	mov ecx,esi
	mov byte ptr [esp+0x70],2
	call CDragon::GetHeight
	mov ecx,0xFFFFFFF1
	sub ecx,eax
	mov eax,dword ptr [esi+0xDC]
	push ecx
	push 0x14
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov ebp,dword ptr [esp+0x48]
	push 0
	lea ecx,[esp+0x54]
	push ebp
	push ecx
	mov byte ptr [esp+0x88],0
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x12C]
	add esp,0x28
	cmp edi,eax
	je Block38

 Block34:
	mov dword ptr [esi+0x12C],eax
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block36:
	test edi,edi
	je Block38

 Block37:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block38:
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push eax
	call edi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea edx,[esp+0x38]
	mov bl,3
	push edx
	mov byte ptr [esp+0x64],bl
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	mov ecx,dword ptr [esi+0x12C]
	mov byte ptr [esp+0x60],4
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x60],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x38],di
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x38]
	push edx
	call ebx

 Block50:
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x48],di
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x48]
	push ecx
	call ebx

 Block54:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test ebp,ebp
	je Block56

 Block55:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block56:
	cmp dword ptr [esi+0x12C],0
	je Block84

 Block57:
	mov edx,dword ptr [esi+0xA0]
	push edx
	lea eax,[esi+0x98]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block75

 Block58:
	mov ecx,dword ptr [esi+0x118]
	mov edx,dword ptr [ecx+0x5F8]
	push edx
	call is_vehicle
	add esp,4
	test eax,eax
	jne Block75

 Block59:
	mov ecx,dword ptr [esi+0x12C]
	test ecx,ecx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea eax,[esp+0x34]
	push eax
	call IWzGr2DLayer::Getalpha
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x60],6
	test edi,edi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x2C]
	push edx
	push edi
	mov dword ptr [esp+0x34],0
	call eax
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block65:
	cmp dword ptr [esp+0x2C],0
	mov eax,dword ptr [esp+0x34]
	setle bl
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x60],edi
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	test bl,bl
	je Block84

 Block68:
	mov esi,dword ptr [esi+0x12C]
	test esi,esi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x60],7
	test esi,esi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0xFF
	push 0xFF
	push esi
	call edx
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block74:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x60],edi
	jmp Block82

 Block75:
	mov esi,dword ptr [esi+0x12C]
	test esi,esi
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x60],5
	test esi,esi
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block81

 Block80:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block81:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x60],0xFFFFFFFF

 Block82:
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
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
// CDragon::GetBodyRect
__SUB_CLASS_THIS(0010C150, __thiscall, 23909,  CDragon, int32_t, tagRECT&, int32_t) {
__asm {

 Block0:
	sub esp,0x10
	push ebp
	push edi
	mov edi,ecx
	lea ebp,[edi+0xB0]
	push ebp
	call IsRectEmpty
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esp+0x1C]
	push eax
	call SetRectEmpty
	pop edi
	xor eax,eax
	pop ebp
	add esp,0x10
	ret 8

 Block2:
	mov ecx,dword ptr [edi+0x94]
	push ebx
	push esi
	push ecx
	lea edx,[edi+0x8C]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	add esp,8
	and ebx,1
	mov eax,ebp
	jne Block4

 Block3:
	lea eax,[edi+0xC0]

 Block4:
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esp+0x24]
	mov dword ptr [esi],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+4],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [eax+0xC]
	lea ecx,[edi+0xE8]
	mov dword ptr [esi+0xC],edx
	call TSecType<long>::GetData
	push eax
	lea ecx,[edi+0xF4]
	call TSecType<long>::GetData
	push eax
	push esi
	call OffsetRect
	cmp dword ptr [esp+0x28],0
	je Block8

 Block5:
	mov eax,ebp
	test ebx,ebx
	jne Block7

 Block6:
	lea eax,[edi+0xC0]

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x10],ecx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x14],edx
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [esp+0x18],ecx
	lea ecx,[edi+0x100]
	mov dword ptr [esp+0x1C],edx
	call TSecType<long>::GetData
	push eax
	lea ecx,[edi+0x10C]
	call TSecType<long>::GetData
	push eax
	lea eax,[esp+0x18]
	push eax
	call OffsetRect
	lea ecx,[esp+0x10]
	push ecx
	push esi
	push esi
	call UnionRect

 Block8:
	pop esi
	pop ebx
	pop edi
	mov eax,1
	pop ebp
	add esp,0x10
	ret 8
}
}
// CDragon::IsKindOf
__SUB_CLASS_THIS(0010DA70, __thiscall, 23936,  CDragon, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CDragon::ms_RTTI_CDragon
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
// CDragon::SetLayerZ
__SUB_CLASS_THIS0(0010ACC0, __thiscall, 23905,  CDragon, void) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [ecx+0x88]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [ecx+0x118]
	add ecx,0x88
	call CAvatar::GetLayerZ
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xB4]
	dec eax
	push eax
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
	pop esi
	ret
}
}
// CDragon::GetPos
__SUB_CLASS_THIS0(0010DAD0, __thiscall, 23926,  CDragon, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0xE4]
	push edi
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,esi
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],edi
	pop edi
	mov dword ptr [eax+4],ecx
	pop esi
	ret 4
}
}
// CDragon::NeedToTalk
__SUB_CLASS_THIS(0010C250, __thiscall, 23918,  CDragon, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x18
	push ebx
	mov ebx,dword ptr [esp+0x20]
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x118]
	mov ecx,dword ptr [eax+0x5F8]
	push ecx
	mov dword ptr [esp+0x10],0
	call is_vehicle
	add esp,4
	test eax,eax
	je Block2

 Block1:
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x18
	ret 8

 Block2:
	mov ecx,dword ptr [esi+0x118]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	push edi
	call eax
	test eax,eax
	je Block9

 Block3:
	mov edi,dword ptr [esi+0x118]
	test edi,edi
	je Block9

 Block4:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CUserLocal::GetDCRect
	lea edx,[esp+0x14]
	push edx
	call IsRectEmpty
	test eax,eax
	jne Block6

 Block5:
	mov eax,dword ptr [esp+0x2C]
	push eax
	push ebx
	lea eax,[esp+0x1C]
	push eax
	call PtInRect
	test eax,eax
	jne Block8

 Block6:
	push 1
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[edi+0x88]
	call CAvatar::GetBodyRect
	lea edx,[esp+0x14]
	push edx
	call IsRectEmpty
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x2C]
	push eax
	push ebx
	lea eax,[esp+0x1C]
	push eax
	call PtInRect
	test eax,eax
	je Block9

 Block8:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0x18
	ret 8

 Block9:
	cmp dword ptr [esi+0x12C],0
	je Block24

 Block10:
	lea ecx,[esi+0xF4]
	call TSecType<long>::GetData
	mov edi,dword ptr [esi+0x12C]
	mov ebx,eax
	test edi,edi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0xC]
	push edx
	push edi
	mov dword ptr [esp+0x14],0
	call eax
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [esp+0xC]
	add ecx,ebx
	mov dword ptr [esp+0x14],ecx
	lea ecx,[esi+0xE8]
	call TSecType<long>::GetData
	mov edi,dword ptr [esi+0x12C]
	mov ebx,eax
	test edi,edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x70]
	lea eax,[esp+0xC]
	push eax
	push edi
	mov dword ptr [esp+0x14],0
	call ecx
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi+0x12C]
	add edx,ebx
	mov dword ptr [esp+0x18],edx
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	call IWzGr2DLayer::Getwidth
	add eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x12C]
	mov dword ptr [esp+0x1C],eax
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	call IWzGr2DLayer::Getheight
	add eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push eax
	lea eax,[esp+0x1C]
	push eax
	call PtInRect
	test eax,eax
	je Block24

 Block23:
	mov dword ptr [esp+0x10],1

 Block24:
	mov eax,dword ptr [esp+0x10]
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 8
}
}
// CDragon::GetRTTI
__SUB_CLASS_THIS0(0010DA30, __thiscall, 23935,  CDragon, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CDragon::ms_RTTI_CDragon
	ret
}
}
// CDragon::SetFrameInfo
__SUB_CLASS_THIS(0010AE70, __thiscall, 23933,  CDragon, void, ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY> >&, __POSITION*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xA0]
	push edi
	mov edi,dword ptr [eax+4]
	push ecx
	lea edx,[esi+0x98]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block2

 Block1:
	mov eax,dword ptr [esi+0xAC]
	add eax,0xA
	imul eax,dword ptr [edi+0x40]
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	jmp Block3

 Block2:
	mov eax,dword ptr [edi+0x40]

 Block3:
	add edi,0x10
	mov dword ptr [esi+0xA8],eax
	mov ecx,dword ptr [edi+8]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esi+0xB0],eax
	mov edx,dword ptr [edi+0x14]
	push edx
	lea eax,[edi+0xC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esi+0xB4],eax
	mov ecx,dword ptr [edi+0x20]
	push ecx
	lea edx,[edi+0x18]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esi+0xB8],eax
	mov eax,dword ptr [edi+0x2C]
	push eax
	add edi,0x24
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x20
	mov dword ptr [esi+0xBC],eax
	mov edx,dword ptr [esi+0xB0]
	mov ecx,eax
	mov eax,dword ptr [esi+0xB4]
	push ecx
	mov ecx,dword ptr [esi+0xB8]
	neg edx
	push edx
	push eax
	neg ecx
	push ecx
	add esi,0xC0
	push esi
	call SetRect
	pop edi
	pop esi
	ret 8
}
}
// CDragon::OnCreated
_SUB_EXCEPTION_HANDLER(10DC90)
__SUB_CLASS_THIS(0010DC90, __thiscall, 23920,  CDragon, void, CUser*, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10DC90
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
	mov eax,dword ptr [esp+0x54]
	mov edi,dword ptr [esp+0x58]
	mov ecx,edi
	mov dword ptr [esi+0x118],eax
	call CInPacket::Decode4
	lea ecx,[esi+0xF4]
	push eax
	call TSecType<long>::SetData
	mov ecx,edi
	call CInPacket::Decode4
	lea ebp,[esi+0xE8]
	push eax
	mov ecx,ebp
	call TSecType<long>::SetData
	lea ecx,[ebp+0xC]
	lea ebx,[esi+0x100]
	call TSecType<long>::GetData
	lea ecx,[ebx+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,ebp
	call TSecType<long>::GetData
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	lea ebx,[esi+0x8C]
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x94],eax
	call CInPacket::Decode2
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esi+0x11C],ecx
	push 0x90
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x58],eax
	xor edi,edi
	mov dword ptr [esp+0x4C],edi
	cmp eax,edi
	je Block2

 Block1:
	push edi
	mov ecx,eax
	call CAttrShoe::_ctor_0
	mov dword ptr [esp+0x58],eax
	jmp Block3

 Block2:
	mov dword ptr [esp+0x58],edi
	mov eax,edi

 Block3:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,edi
	je Block5

 Block4:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esi+0xE4]
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [esi+0xE4],edx
	test edi,edi
	je Block8

 Block6:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block8:
	call CVecCtrlDragon::CreateInstance
	mov ecx,dword ptr [esp+0x54]
	mov ecx,dword ptr [ecx+0x19E8]
	mov edi,eax
	push ecx
	lea eax,[esi+4]
	push eax
	mov ecx,edi
	call CVecCtrlDragon::Init
	mov edx,dword ptr [esi+0x94]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,ebp
	mov ebx,eax
	call TSecType<long>::GetData
	lea ecx,[esi+0xF4]
	mov ebp,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [edi]
	push 0
	push ebx
	push 0
	push 0
	push ebp
	mov ebp,dword ptr [esp+0x68]
	mov edx,dword ptr [ebp]
	mov dword ptr [esp+0x6C],ecx
	push eax
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebp
	call eax
	mov edx,dword ptr [esp+0x70]
	push eax
	mov eax,dword ptr [edx+4]
	mov ecx,edi
	call eax
	lea ebx,[esi+0xDC]
	push edi
	mov ecx,ebx
	call _x_com_ptr<IWzVector2D>::_QueryVecCtrlDragon
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov eax,3
	mov dword ptr [esp+0x4C],1
	mov word ptr [esp+0x24],ax
	mov dword ptr [esp+0x2C],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x4C],2
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x70]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x88]
	cmp edi,eax
	je Block20

 Block16:
	mov dword ptr [esi+0x88],eax
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	test edi,edi
	je Block20

 Block19:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block20:
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	mov edi,8
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x24],di
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x34],di
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov edi,dword ptr [esi+0x88]
	test edi,edi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block34:
	mov eax,dword ptr [ebx]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block36:
	mov edi,dword ptr [esi+0x88]
	mov dword ptr [esp+0x4C],3
	test edi,edi
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block40

 Block39:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block40:
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov edi,dword ptr [esi+0x88]
	test edi,edi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block48

 Block47:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block48:
	mov ecx,esi
	call CDragon::PrepareActionLayer
	mov ecx,esi
	call CDragon::SetLayerZ
	lea eax,[ebp+4]
	push eax
	push 1
	mov ecx,esi
	call CDragon::ChaseTarget
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0xC]
	mov ecx,ebp
	call eax
	test eax,eax
	je Block51

 Block49:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ecx+0x3FD4],0
	je Block51

 Block50:
	push 1
	mov ecx,esi
	call CDragon::CreateEffect

 Block51:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CDragon::CreateEffect
_SUB_EXCEPTION_HANDLER(10D5E0)
__SUB_CLASS_THIS(0010D5E0, __thiscall, 23912,  CDragon, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10D5E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x118]
	mov ecx,dword ptr [eax+0x5F8]
	push ecx
	call is_vehicle
	add esp,4
	test eax,eax
	jne Block34

 Block1:
	xor edi,edi
	mov dword ptr [esp+0xC],edi
	mov eax,dword ptr [esp+0x50]
	sub eax,edi
	mov dword ptr [esp+0x48],edi
	je Block27

 Block2:
	sub eax,1
	jne Block30

 Block3:
	push eax
	mov eax,dword ptr [esi+0x88]
	push 0xFF
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	mov eax,dword ptr [esi+0xDC]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x64],2
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	lea eax,[esp+0x2C]
	push 0x15DA
	push eax
	mov byte ptr [esp+0x6C],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi+0x88]
	mov byte ptr [esp+0x64],4
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edi,dword ptr [eax]
	call IWzGr2DLayer::Getflip
	push eax
	lea ecx,[esp+0x70]
	push edi
	push ecx
	mov byte ptr [esp+0x70],5
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	add esi,0x130
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x4C],6
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x48],7
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x48],6
	cmp word ptr [esp+0x20],si
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block23:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block34

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x40
	ret 4

 Block26:
	lea ecx,[esp+0x30]
	push ecx
	call edi
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x40
	ret 4

 Block27:
	lea edx,[esp+0x14]
	push 0xB6B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x4C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	mov edi,dword ptr [esp+0xC]

 Block30:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0
	mov dword ptr [eax],0
	mov esi,dword ptr [esi+0xDC]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block32

 Block31:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block32:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push edi
	call CAnimationDisplayer::Effect_General
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test edi,edi
	je Block34

 Block33:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block34:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x40
	ret 4
}
}
// CDragon::GetCurrentAction
__SUB_CLASS_THIS(0010B370, __thiscall, 23911,  CDragon, long, long*) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x94]
	push edi
	push eax
	lea ecx,[esi+0x8C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x18]
	add esp,8
	test ecx,ecx
	je Block2

 Block1:
	mov edx,eax
	and edx,1
	mov dword ptr [ecx],edx

 Block2:
	sar eax,1
	sub eax,1
	je Block4

 Block3:
	xor ebx,ebx
	jmp Block5

 Block4:
	mov ebx,1

 Block5:
	mov eax,dword ptr [esi+0xA0]
	push eax
	lea edi,[esi+0x98]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block7

 Block6:
	mov ecx,dword ptr [esi+0xA0]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop edi
	pop esi
	pop ebx
	ret 4

 Block7:
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	ret 4
}
}
// CAttrShoe::CAttrShoe
_SUB_EXCEPTION_HANDLER(10B710)
__SUB_CLASS_THIS(0010B710, __thiscall, 17189,  CAttrShoe, void, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10B710
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x40],esi
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	lea edi,[esi+0xC]
	mov ecx,edi
	mov dword ptr [esp+0x80],eax
	int 3// TODO: 	mov dword ptr [esi],offset CAttrShoe::`vftable'
	call TSecType<double>::_ctor_default
	lea ebx,[esi+0x18]
	mov ecx,ebx
	mov byte ptr [esp+0x80],1
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x24]
	mov byte ptr [esp+0x80],2
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x80],3
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x3C]
	mov byte ptr [esp+0x80],4
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x48]
	mov byte ptr [esp+0x80],5
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x54]
	mov byte ptr [esp+0x80],6
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x60]
	mov byte ptr [esp+0x80],7
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x6C]
	mov byte ptr [esp+0x80],8
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x78]
	mov byte ptr [esp+0x80],9
	call TSecType<double>::_ctor_default
	lea ecx,[esi+0x84]
	mov byte ptr [esp+0x80],0xA
	call TSecType<double>::_ctor_default
	fld qword ptr [__real_4059000000000000]
	sub esp,8
	mov ecx,edi
	fstp qword ptr [esp]
	mov byte ptr [esp+0x88],0xB
	call TSecType<double>::SetData
	fld1
	sub esp,8
	fstp qword ptr [esp]
	mov ecx,ebx
	call TSecType<double>::SetData
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x24]
	call TSecType<double>::SetData
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x30]
	call TSecType<double>::SetData
	fld qword ptr [__real_3feccccccccccccd]
	sub esp,8
	lea ecx,[esi+0x3C]
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x48]
	call TSecType<double>::SetData
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x54]
	call TSecType<double>::SetData
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x60]
	call TSecType<double>::SetData
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[esi+0x6C]
	call TSecType<double>::SetData
	sub esp,8
	cmp dword ptr [ebp+8],0
	lea ecx,[esi+0x78]
	jne Block2

 Block1:
	fldz
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	fldz
	jmp Block3

 Block2:
	fld1
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	fld1

 Block3:
	sub esp,8
	lea ecx,[esi+0x84]
	fstp qword ptr [esp]
	call TSecType<double>::SetData
	mov eax,esi
	mov ecx,dword ptr [esp+0x78]
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
// CDragon::PrepareActionLayer
_SUB_EXCEPTION_HANDLER(10BA70)
__SUB_CLASS_THIS0(0010BA70, __thiscall, 23905,  CDragon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10BA70
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
	lea eax,[esp+0x24]
	push eax
	call CDragon::GetCurrentAction
	mov ecx,dword ptr [ebp+0x11C]
	mov esi,eax
	call __get_dragon_idx
	mov ecx,dword ptr [ebp+0x13C]
	mov edi,eax
	mov eax,dword ptr [ecx+edi*4]
	lea ecx,[ecx+edi*4]
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax-4],0
	jne Block3

 Block2:
	lea edx,[esp+0x1F]
	push edx
	push 0x1D
	call ZArray<ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>>::_Alloc

 Block3:
	mov eax,dword ptr [ebp+0x13C]
	mov edx,dword ptr [eax+edi*4]
	lea ecx,[esi+esi*4]
	cmp dword ptr [edx+ecx*4+8],0
	lea edi,[edx+ecx*4]
	mov dword ptr [esp+0x20],edi
	jne Block6

 Block4:
	mov eax,dword ptr [ebp+0x11C]
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push edi
	push esi
	push eax
	call CActionMan::LoadDragonAction
	cmp dword ptr [edi+8],0
	jne Block6

 Block5:
	push 0x22000006
	lea ecx,[esp+0x18]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x14]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x20],ecx
	call _CxxThrowException

 Block6:
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x88]
	mov dword ptr [esp+0xA0],0
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ebx,8
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	cmp word ptr [esp+0x28],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block46

 Block15:
	mov edi,dword ptr [ZImports::_VariantInit]

 Block16:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea eax,[esp+0x68]
	push eax
	call edi
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block48

 Block17:
	lea edx,[esp+0x48]
	push edx
	mov dword ptr [esp+0xA4],1
	call edi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block48

 Block18:
	mov eax,dword ptr [esi+0x48]
	mov ecx,3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	mov eax,dword ptr [esi+0x44]
	mov edx,ecx
	mov word ptr [esp+0x58],dx
	mov dword ptr [esp+0x60],eax
	mov eax,dword ptr [esi+0x40]
	mov word ptr [esp+0x78],cx
	mov dword ptr [esp+0x80],eax
	mov ecx,dword ptr [ebp+0x88]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0xA0],5
	test ecx,ecx
	je Block7

 Block19:
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x64]
	push eax
	lea edx,[esp+0x88]
	push edx
	push esi
	lea eax,[esp+0xA0]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x88],bx
	jne Block26

 Block20:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block22:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0xA0],4
	cmp word ptr [esp+0x78],bx
	jne Block27

 Block24:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block28

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block26:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x88]
	push edx
	call esi
	jmp Block23

 Block27:
	lea ecx,[esp+0x78]
	push ecx
	call esi

 Block28:
	mov byte ptr [esp+0xA0],3
	cmp word ptr [esp+0x58],bx
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x58]
	push eax
	call esi

 Block32:
	mov byte ptr [esp+0xA0],2
	cmp word ptr [esp+0x38],bx
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x38]
	push edx
	call esi

 Block36:
	mov byte ptr [esp+0xA0],1
	cmp word ptr [esp+0x48],bx
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block40:
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	cmp word ptr [esp+0x68],bx
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x68]
	push eax
	call esi

 Block44:
	cmp dword ptr [esp+0x14],0
	jne Block16

 Block45:
	mov edi,dword ptr [esp+0x20]

 Block46:
	mov ecx,dword ptr [edi+0xC]
	mov dword ptr [ebp+0xA4],ecx
	mov esi,dword ptr [ebp+0x88]
	test esi,esi
	jne Block49

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD8]
	xor eax,eax
	cmp dword ptr [esp+0x24],eax
	sete al
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	mov edx,dword ptr [ebp+0xA4]
	push edx
	push edi
	mov ecx,ebp
	call CDragon::SetFrameInfo
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x90
	ret
}
}
// CAttrShoe::~CAttrShoe
_SUB_EXCEPTION_HANDLER(10B900)
__SUB_CLASS_THIS0(0010B900, __thiscall, 17191,  CAttrShoe, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10B900
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
	int 3// TODO: 	mov dword ptr [esi],offset CAttrShoe::`vftable'
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esp+0x14],0xA
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block2:
	mov eax,dword ptr [esi+0x80]
	mov byte ptr [esp+0x14],9
	test eax,eax
	je Block4

 Block3:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block4:
	mov eax,dword ptr [esi+0x74]
	mov byte ptr [esp+0x14],8
	test eax,eax
	je Block6

 Block5:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block6:
	mov eax,dword ptr [esi+0x68]
	mov byte ptr [esp+0x14],7
	test eax,eax
	je Block8

 Block7:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block8:
	mov eax,dword ptr [esi+0x5C]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block10

 Block9:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block10:
	mov eax,dword ptr [esi+0x50]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block12

 Block11:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block12:
	mov eax,dword ptr [esi+0x44]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block14

 Block13:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block14:
	mov eax,dword ptr [esi+0x38]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block16

 Block15:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block16:
	mov eax,dword ptr [esi+0x2C]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block18

 Block17:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block18:
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block20

 Block19:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block20:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block22

 Block21:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block22:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CDragon::GetAttackSpeed
__SUB_CLASS_THIS0(00503AB0, __thiscall, 23914,  CDragon, long) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [ecx+0x88]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+4]
	push ecx
	push esi
	mov dword ptr [esp+0xC],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+4]
	pop esi
	pop ecx
	ret
}
}
// CDragon::ChaseTarget
__SUB_CLASS_THIS(0010AD10, __thiscall, 23917,  CDragon, void, int32_t, IVecCtrlOwner*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xDC]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax-0xC]
	jmp  CVecCtrlDragon::ChaseTarget

 Block2:
	xor ecx,ecx
	jmp  CVecCtrlDragon::ChaseTarget
}
}
// CDragon::DeleteEffect
_SUB_EXCEPTION_HANDLER(10C430)
__SUB_CLASS_THIS(0010C430, __thiscall, 23912,  CDragon, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10C430
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	xor edx,edx
	mov dword ptr [esp+4],edx
	mov eax,dword ptr [esp+0x18]
	sub eax,1
	mov dword ptr [esp+0x10],edx
	jne Block3

 Block1:
	mov eax,dword ptr [ecx+0x130]
	cmp eax,edx
	je Block3

 Block2:
	mov dword ptr [ecx+0x130],edx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret 4
}
}
// CDragon::CDragon
_SUB_EXCEPTION_HANDLER(10D8E0)
__SUB_CLASS_THIS0(0010D8E0, __thiscall, 23903,  CDragon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10D8E0
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
	mov dword ptr [esp+0x18],esi
	call CLife::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CDragon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CDragon::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CDragon::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esi+0x88],edi
	mov ebp,6
	mov dword ptr [esi+0xAC],ebp
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE4],edi
	lea ecx,[esi+0xE8]
	mov byte ptr [esp+0x24],4
	call SECPOINT::_ctor_default
	lea ecx,[esi+0x100]
	mov byte ptr [esp+0x24],5
	call SECPOINT::_ctor_default
	lea ebx,[esi+0x120]
	mov dword ptr [esi+0x11C],edi
	mov dword ptr [ebx],edi
	mov dword ptr [esi+0x124],ebp
	mov dword ptr [esi+0x128],ebp
	mov dword ptr [esi+0x12C],edi
	mov dword ptr [esi+0x130],edi
	lea ebp,[esi+0x13C]
	mov dword ptr [esi+0x134],edi
	mov dword ptr [esi+0x138],edi
	mov dword ptr [ebp],edi
	lea edx,[esi+0x8C]
	xor ecx,ecx
	mov byte ptr [esp+0x24],0xA
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x98]
	or ecx,0xFFFFFFFF
	mov dword ptr [esi+0x94],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA0],eax
	lea eax,[esp+0x17]
	push eax
	push 0xA
	mov ecx,ebp
	call ZArray<ZArray<ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>>>::_Alloc
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push ebx
	push 0xF7508
	call CQuestMan::GetQuestByNpc
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CDragon::GetType
__SUB_CLASS_THIS0(0010DA20, __thiscall, 23922,  CDragon, long) {
__asm {

 Block0:
	mov eax,8
	ret
}
}
// CDragon::OnResolveMoveAction
__SUB_CLASS_THIS(0010B3F0, __thiscall, 23923,  CDragon, long, long, long, long, const CVecCtrl*) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x14]
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x90]
	push edi
	push eax
	lea ecx,[esi+0x88]
	push ecx
	and ebp,1
	call _ZtlSecureFuseHelper<long>::call
	sar eax,1
	add esp,8
	sub eax,1
	je Block2

 Block1:
	xor edi,edi
	jmp Block3

 Block2:
	mov edi,1

 Block3:
	mov edx,dword ptr [esi+0x9C]
	push edx
	lea ebx,[esi+0x94]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block5

 Block4:
	mov eax,dword ptr [esi+0x9C]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov edi,eax

 Block5:
	cmp edi,8
	je Block8

 Block6:
	cmp edi,7
	je Block8

 Block7:
	mov ecx,dword ptr [esi+0x9C]
	push ecx
	lea edx,[esi+0x94]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block28

 Block8:
	mov ebx,dword ptr [esp+0x14]
	cmp ebx,dword ptr [esi+0x130]
	jne Block10

 Block9:
	inc dword ptr [esi+0x134]
	jmp Block11

 Block10:
	mov dword ptr [esi+0x130],ebx
	mov dword ptr [esi+0x134],0

 Block11:
	mov eax,5
	cmp dword ptr [esi+0x134],eax
	jl Block22

 Block12:
	mov dword ptr [esi+0x134],eax
	cmp edi,8
	je Block14

 Block13:
	cmp edi,7
	jne Block19

 Block14:
	test ebx,ebx
	je Block21

 Block15:
	mov esi,dword ptr [esi+0x84]
	test esi,esi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD8]
	xor ecx,ecx
	test ebx,ebx
	setge cl
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	test ebx,ebx
	je Block21

 Block20:
	xor eax,eax
	test ebx,ebx
	setl al
	pop edi
	pop esi
	pop ebp
	pop ebx
	and eax,1
	or eax,2
	ret 0x10

 Block21:
	and ebp,1
	pop edi
	or ebp,4
	pop esi
	mov eax,ebp
	pop ebp
	pop ebx
	ret 0x10

 Block22:
	cmp edi,8
	je Block24

 Block23:
	cmp edi,7
	jne Block28

 Block24:
	mov esi,dword ptr [esi+0x84]
	test esi,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xD8]
	xor ecx,ecx
	test ebp,ebp
	sete cl
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	mov eax,dword ptr [esp+0x1C]
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x10
}
}
// CDragon::GetPosPrev
__SUB_CLASS_THIS0(0010DB00, __thiscall, 23926,  CDragon, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0xFC]
	push edi
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,esi
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],edi
	pop edi
	mov dword ptr [eax+4],ecx
	pop esi
	ret 4
}
}
// CDragon::GetHeight
_SUB_EXCEPTION_HANDLER(10AF40)
__SUB_CLASS_THIS0(0010AF40, __thiscall, 23908,  CDragon, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10AF40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov eax,3
	xor edi,edi
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],edi
	mov ecx,dword ptr [ecx+0x88]
	mov dword ptr [esp+0x2C],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],2
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov esi,dword ptr [esp+0x10]
	cmp esi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0xC]
	push ecx
	push esi
	mov dword ptr [esp+0x14],edi
	call edx
	cmp eax,edi
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0xC]
	mov edx,dword ptr [esi]
	xor ecx,ecx
	cmp eax,edi
	setle cl
	push esi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	dec ecx
	and ecx,eax
	mov eax,dword ptr [edx+8]
	mov edi,ecx
	call eax
	mov eax,edi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CDragon::GetZMass
__SUB_CLASS_THIS0(0010DA50, __thiscall, 23922,  CDragon, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xD8]
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
// CDragon::SetMoveAction
__SUB_CLASS_THIS(0010BE60, __thiscall, 23910,  CDragon, void, long, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x94]
	push eax
	lea ecx,[esi+0x8C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp ebx,eax
	je Block7

 Block2:
	push edi
	lea edi,[esi+0x8C]
	mov edx,edi
	mov ecx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0xA0]
	mov dword ptr [esi+0x94],eax
	push edx
	lea eax,[esi+0x98]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block4

 Block3:
	mov ecx,esi
	call CDragon::PrepareActionLayer

 Block4:
	mov ecx,dword ptr [esi+0x94]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov esi,dword ptr [esi+0xDC]
	add esp,8
	pop edi
	test esi,esi
	je Block6

 Block5:
	lea ecx,[esi-0xC]
	pop esi
	mov dword ptr [ecx+0x1D8],eax
	pop ebx
	ret 8

 Block6:
	xor ecx,ecx
	mov dword ptr [ecx+0x1D8],eax

 Block7:
	pop esi
	pop ebx
	ret 8
}
}
// CDragon::DrawKeyDownBar
_SUB_EXCEPTION_HANDLER(10C530)
__SUB_CLASS_THIS0(0010C530, __thiscall, 23905,  CDragon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10C530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x138
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x54],edi
	xor esi,esi
	cmp dword ptr [edi+0xD0],esi
	sete al
	test al,al
	jne Block222

 Block1:
	mov dword ptr [esp+0x28],esi
	lea eax,[esp+0x3C]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x15C],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov byte ptr [esp+0x160],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0x154],0
	cmp eax,esi
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov dword ptr [esp+0x58],esi
	mov dword ptr [esp+0x50],esi
	mov dword ptr [esp+0x3C],esi
	cmp dword ptr [edi+0xD8],0x1518A28
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x154],4
	je Block66

 Block4:
	lea edx,[esp+0xAC]
	push edx
	call ebp
	lea eax,[esp+0xAC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x158],0x11
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push esi
	push esi
	lea eax,[esp+0xB4]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x12
	push offset _S_UIBASICIMGKEYDOW__14
	mov byte ptr [esp+0x16C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x168],0x13
	cmp dword ptr [_D_G_RM],esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x110]
	mov byte ptr [esp+0x168],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x15C],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x5C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	cmp word ptr [esp+0xFC],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x154],bl
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0xFC],ax
	mov eax,dword ptr [esp+0x104]
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0xFC]
	push ecx
	call edi

 Block17:
	mov ebx,8
	mov byte ptr [esp+0x154],0x11
	cmp word ptr [esp+0x2C],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block21:
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0xAC],bx
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0xB4]
	xor ecx,ecx
	mov word ptr [esp+0xAC],cx
	cmp eax,esi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0xAC]
	push edx
	call edi

 Block25:
	lea eax,[esp+0xEC]
	push eax
	call ebp
	lea ecx,[esp+0xEC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea edx,[esp+0xBC]
	push edx
	mov byte ptr [esp+0x158],0x15
	call ebp
	lea eax,[esp+0xBC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	push esi
	push esi
	lea ecx,[esp+0xF4]
	push ecx
	lea edx,[esp+0xC8]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x16
	push offset _S_UIBASICIMGKEYDOW__13
	mov byte ptr [esp+0x16C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x168],0x17
	cmp dword ptr [_D_G_RM],esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea eax,[esp+0x150]
	mov byte ptr [esp+0x168],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x15C],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	cmp word ptr [esp+0x13C],8
	mov byte ptr [esp+0x154],bl
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x144]
	xor ecx,ecx
	mov word ptr [esp+0x13C],cx
	cmp eax,esi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x13C]
	push edx
	call edi

 Block38:
	mov ebx,8
	mov byte ptr [esp+0x154],0x15
	cmp word ptr [esp+0xBC],bx
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0xBC],ax
	mov eax,dword ptr [esp+0xC4]
	cmp eax,esi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0xBC]
	push ecx
	call edi

 Block42:
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0xEC],bx
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0xF4]
	xor edx,edx
	mov word ptr [esp+0xEC],dx
	cmp eax,esi
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0xEC]
	push eax
	call edi

 Block46:
	lea ecx,[esp+0x9C]
	push ecx
	call ebp
	lea edx,[esp+0x9C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea eax,[esp+0xDC]
	push eax
	mov byte ptr [esp+0x158],0x19
	call ebp
	lea ecx,[esp+0xDC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	push esi
	push esi
	lea edx,[esp+0xA4]
	push edx
	lea eax,[esp+0xE8]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x1A
	push offset _S_UIBASICIMGKEYDOW__12
	mov byte ptr [esp+0x16C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x168],0x1B
	cmp dword ptr [_D_G_RM],esi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea ecx,[esp+0x140]
	push ecx
	mov byte ptr [esp+0x16C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x15C],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block55

 Block53:
	cmp eax,0x80004002
	je Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	cmp word ptr [esp+0x12C],8
	mov byte ptr [esp+0x154],bl
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x134]
	xor edx,edx
	mov word ptr [esp+0x12C],dx
	cmp eax,esi
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x12C]
	push eax
	call edi

 Block59:
	mov ebx,8
	mov byte ptr [esp+0x154],0x19
	cmp word ptr [esp+0xDC],bx
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0xE4]
	xor ecx,ecx
	mov word ptr [esp+0xDC],cx
	cmp eax,esi
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0xDC]
	push edx
	call edi

 Block63:
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0x9C],bx
	jne Block65

 Block64:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	jmp Block127

 Block65:
	lea ecx,[esp+0x9C]
	jmp Block130

 Block66:
	lea edx,[esp+0x5C]
	push edx
	call ebp
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	lea ecx,[esp+0xCC]
	push ecx
	mov byte ptr [esp+0x158],5
	call ebp
	lea edx,[esp+0xCC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	push esi
	push esi
	lea eax,[esp+0x64]
	push eax
	lea ecx,[esp+0xD8]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,6
	push offset _S_UIBASICIMGKEYDOW__11
	mov byte ptr [esp+0x16C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x168],7
	cmp dword ptr [_D_G_RM],esi
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[esp+0x120]
	mov byte ptr [esp+0x168],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x15C],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x5C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block75

 Block73:
	cmp eax,0x80004002
	je Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	cmp word ptr [esp+0x10C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x154],bl
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x10C],ax
	mov eax,dword ptr [esp+0x114]
	cmp eax,esi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x10C]
	push ecx
	call edi

 Block79:
	mov ebx,8
	mov byte ptr [esp+0x154],5
	cmp word ptr [esp+0xCC],bx
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0xD4]
	xor edx,edx
	mov word ptr [esp+0xCC],dx
	cmp eax,esi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[esp+0xCC]
	push eax
	call edi

 Block83:
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0x5C],bx
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,esi
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[esp+0x5C]
	push edx
	call edi

 Block87:
	lea eax,[esp+0x7C]
	push eax
	call ebp
	lea ecx,[esp+0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	lea edx,[esp+0x6C]
	push edx
	mov byte ptr [esp+0x158],9
	call ebp
	lea eax,[esp+0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	push esi
	push esi
	lea ecx,[esp+0x84]
	push ecx
	lea edx,[esp+0x78]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0xA
	push offset _S_UIBASICIMGKEYDOW__10
	mov byte ptr [esp+0x16C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x168],0xB
	cmp dword ptr [_D_G_RM],esi
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea eax,[esp+0x130]
	mov byte ptr [esp+0x168],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x15C],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block96

 Block94:
	cmp eax,0x80004002
	je Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	cmp word ptr [esp+0x11C],8
	mov byte ptr [esp+0x154],bl
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x124]
	xor ecx,ecx
	mov word ptr [esp+0x11C],cx
	cmp eax,esi
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea edx,[esp+0x11C]
	push edx
	call edi

 Block100:
	mov ebx,8
	mov byte ptr [esp+0x154],9
	cmp word ptr [esp+0x6C],bx
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,esi
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[esp+0x6C]
	push ecx
	call edi

 Block104:
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0x7C],bx
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	cmp eax,esi
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[esp+0x7C]
	push eax
	call edi

 Block108:
	lea ecx,[esp+0x14]
	push ecx
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x158],0xD
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	push esi
	push esi
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0xE
	push offset _S_UIBASICIMGKEYDOW__9
	mov byte ptr [esp+0x16C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x168],0xF
	cmp dword ptr [_D_G_RM],esi
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	lea ecx,[esp+0xA0]
	push ecx
	mov byte ptr [esp+0x16C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x15C],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block117

 Block115:
	cmp eax,0x80004002
	je Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0x154],bl
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	cmp eax,esi
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea eax,[esp+0x8C]
	push eax
	call edi

 Block121:
	mov ebx,8
	mov byte ptr [esp+0x154],0xD
	cmp word ptr [esp+0x40],bx
	jne Block124

 Block122:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,esi
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[esp+0x40]
	push edx
	call edi

 Block125:
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0x14],bx
	jne Block129

 Block126:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]

 Block127:
	cmp eax,esi
	je Block131

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block129:
	lea ecx,[esp+0x14]

 Block130:
	push ecx
	call edi

 Block131:
	lea edx,[esp+0x40]
	push edx
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block133

 Block132:
	push eax
	call _com_issue_error

 Block133:
	lea ecx,[esp+0x14]
	mov bl,0x1D
	push ecx
	mov byte ptr [esp+0x158],bl
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x154],0x1E
	cmp ecx,esi
	jne Block137

 Block136:
	push 0x80004003
	call _com_issue_error

 Block137:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x18]
	push edx
	push 0xC
	push 0x48
	call IWzCanvas::Create
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x154],bl
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,esi
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block141:
	mov ebx,8
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0x40],bx
	jne Block144

 Block142:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,esi
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block145:
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],0xFF
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x154],0x1F
	cmp ecx,esi
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	mov eax,dword ptr [esp+0x58]
	lea edx,[esp+0x14]
	push edx
	push eax
	push esi
	push esi
	call IWzCanvas::Copy
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0x14],bx
	jne Block150

 Block148:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,esi
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block151:
	mov eax,dword ptr [esp+0x54]
	mov edi,2
	cmp dword ptr [eax+0xD4],edi
	jl Block161

 Block152:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],edx
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x154],0x20
	test ecx,ecx
	je Block9

 Block153:
	mov ebp,dword ptr [esp+0x2C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x60]
	push eax
	push 2
	push edi
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block155

 Block154:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block155:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x154],4
	jne Block158

 Block156:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block159:
	mov ecx,dword ptr [esp+0x54]
	inc edi
	cmp edi,dword ptr [ecx+0xD4]
	jle Block152

 Block160:
	mov ebp,dword ptr [ZImports::_VariantInit]
	xor esi,esi

 Block161:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov edx,0xFF
	mov dword ptr [esp+0x34],edx
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x154],0x21
	cmp ecx,esi
	jne Block163

 Block162:
	push 0x80004003
	call _com_issue_error

 Block163:
	mov edi,dword ptr [esp+0x2C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x4C]
	push edi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block165

 Block164:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block165:
	mov esi,8
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0x2C],si
	jne Block168

 Block166:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	mov eax,3
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],0xFFFFFFFE
	mov ecx,dword ptr [esp+0x54]
	mov ecx,dword ptr [ecx+0xD0]
	mov byte ptr [esp+0x154],0x22
	test ecx,ecx
	jne Block171

 Block170:
	push 0x80004003
	call _com_issue_error

 Block171:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x28]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block173

 Block172:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block173:
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0x14],si
	jne Block176

 Block174:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	lea edx,[esp+0x5C]
	push edx
	call ebp
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x158],0x23
	call ebp
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0x158],0x24
	call ebp
	lea ecx,[esp+0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x158],0x25
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block185

 Block184:
	push eax
	call _com_issue_error

 Block185:
	lea ecx,[esp+0x14]
	mov bl,0x26
	push ecx
	mov byte ptr [esp+0x158],bl
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [eax+0xD0]
	mov byte ptr [esp+0x154],0x27
	test ecx,ecx
	jne Block189

 Block188:
	push 0x80004003
	call _com_issue_error

 Block189:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x70]
	push eax
	lea edx,[esp+0x84]
	push edx
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x24]
	push edx
	push eax
	lea edx,[esp+0xA4]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov ebp,8
	cmp word ptr [esp+0x8C],bp
	jne Block196

 Block190:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block192

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block192:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block193:
	mov byte ptr [esp+0x154],bl
	cmp word ptr [esp+0x14],bp
	jne Block197

 Block194:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block198

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block196:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x8C]
	push ecx
	call esi
	jmp Block193

 Block197:
	lea eax,[esp+0x14]
	push eax
	call esi

 Block198:
	mov byte ptr [esp+0x154],0x25
	cmp word ptr [esp+0x40],bp
	jne Block201

 Block199:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea edx,[esp+0x40]
	push edx
	call esi

 Block202:
	mov byte ptr [esp+0x154],0x24
	cmp word ptr [esp+0x7C],bp
	jne Block205

 Block203:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block206

 Block204:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block205:
	lea ecx,[esp+0x7C]
	push ecx
	call esi

 Block206:
	mov byte ptr [esp+0x154],0x23
	cmp word ptr [esp+0x6C],bp
	jne Block209

 Block207:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea eax,[esp+0x6C]
	push eax
	call esi

 Block210:
	mov byte ptr [esp+0x154],4
	cmp word ptr [esp+0x5C],bp
	jne Block213

 Block211:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea edx,[esp+0x5C]
	push edx
	call esi

 Block214:
	mov byte ptr [esp+0x154],3
	test edi,edi
	je Block216

 Block215:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block216:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x154],2
	test eax,eax
	je Block218

 Block217:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block218:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x154],0
	test eax,eax
	je Block220

 Block219:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block220:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x154],0xFFFFFFFF
	test eax,eax
	je Block222

 Block221:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block222:
	mov ecx,dword ptr [esp+0x14C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x144
	ret
}
}
// CDragon::~CDragon
_SUB_EXCEPTION_HANDLER(10DB30)
__SUB_CLASS_THIS0(0010DB30, __thiscall, 23905,  CDragon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10DB30
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
	int 3// TODO: 	mov dword ptr [esi],offset CDragon::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CDragon::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CDragon::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x13C]
	mov dword ptr [esp+0x14],9
	call ZArray<ZArray<ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>>>::RemoveAll
	mov eax,dword ptr [esi+0x130]
	mov byte ptr [esp+0x14],8
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x12C]
	mov byte ptr [esp+0x14],7
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0x120]
	mov byte ptr [esp+0x14],6
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0x100]
	mov byte ptr [esp+0x14],5
	call SECPOINT::~SECPOINT
	lea ecx,[esi+0xE8]
	mov byte ptr [esp+0x14],4
	call SECPOINT::~SECPOINT
	mov eax,dword ptr [esi+0xE4]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+0xE4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xE4]
	test ecx,ecx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov dword ptr [esi+0xE4],0

 Block9:
	mov eax,dword ptr [esi+0xDC]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0xD0]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0x88]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CLife::~CLife
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CDragon::SetAttackAction
__SUB_CLASS_THIS(0010D570, __thiscall, 23913,  CDragon, void, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call get_update_time
	mov ecx,eax
	sub ecx,dword ptr [esp+0x10]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	mov ecx,dword ptr [esp+0xC]
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edi,eax
	push ecx
	imul edi,0x3E8
	call get_max_gauge_time
	mov ecx,eax
	mov eax,edi
	cdq
	idiv ecx
	add esp,4
	add eax,2
	cmp eax,0x45
	jl Block2

 Block1:
	mov eax,0x45

 Block2:
	cmp dword ptr [esi+0xD4],eax
	je Block4

 Block3:
	mov ecx,esi
	mov dword ptr [esi+0xD4],eax
	call CDragon::DrawKeyDownBar

 Block4:
	pop edi
	pop esi
	ret 8
}
}
// CDragon::GetShoeAttr
__SUB_CLASS_THIS0(0010DAA0, __thiscall, 23925,  CDragon, const ZRef<CAttrShoe>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0xE0]
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
// CDragon::ProcessAction
_SUB_EXCEPTION_HANDLER(10BF00)
__SUB_CLASS_THIS(0010BF00, __thiscall, 23912,  CDragon, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10BF00
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
	mov ecx,dword ptr [esi+0x11C]
	call __get_dragon_idx
	mov edi,eax
	test edi,edi
	jl Block27

 Block1:
	mov eax,dword ptr [esi+0x94]
	push eax
	lea ecx,[esi+0x8C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	sar eax,1
	add esp,8
	sub eax,1
	je Block3

 Block2:
	xor ebp,ebp
	jmp Block4

 Block3:
	mov ebp,1

 Block4:
	mov edx,dword ptr [esi+0xA0]
	push edx
	lea ebx,[esi+0x98]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block6

 Block5:
	mov eax,dword ptr [esi+0xA0]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ebp,eax

 Block6:
	add dword ptr [esi+0xA8],0xFFFFFFE2
	cmp dword ptr [esi+0xA8],0
	jg Block27

 Block7:
	mov ecx,dword ptr [esi+0x13C]
	mov eax,dword ptr [ecx+edi*4]
	lea edx,[ebp+ebp*4]
	lea ecx,[eax+edx*4]
	lea edi,[esi+0xA4]
	push edi
	mov dword ptr [esp+0x18],ecx
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::GetNext
	add esp,4
	cmp dword ptr [edi],0
	jne Block11

 Block8:
	cmp ebp,7
	jl Block11

 Block9:
	cmp ebp,8
	jg Block11

 Block10:
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [edi],edx
	jmp Block12

 Block11:
	mov ebp,dword ptr [esp+0x14]

 Block12:
	mov eax,dword ptr [esi+0xA0]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block18

 Block13:
	cmp dword ptr [edi],0
	jne Block20

 Block14:
	mov edx,ebx
	or ecx,0xFFFFFFFF
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0xA0],eax
	call CDragon::PrepareActionLayer
	add esi,0x12C
	cmp dword ptr [esi],0
	je Block27

 Block15:
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x54],0
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x54],1
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	lea edx,[esp+0x38]
	push edx
	lea ecx,[esp+0x2C]
	push ecx
	push 0xFF
	push 0xFF
	mov ecx,eax
	mov byte ptr [esp+0x60],2
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x50],1
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	lea ecx,[esp+0x28]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block27

 Block18:
	cmp dword ptr [edi],0
	jne Block20

 Block19:
	mov ecx,dword ptr [ebp+0xC]
	mov dword ptr [edi],ecx

 Block20:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],1
	mov ecx,dword ptr [esi+0x88]
	mov dword ptr [esp+0x50],edx
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::ShiftCanvas
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x50],0xFFFFFFFF
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov eax,dword ptr [edi]
	push eax
	push ebp
	mov ecx,esi
	call CDragon::SetFrameInfo

 Block27:
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
// CDragon::OnMove
__SUB_CLASS_THIS(0010AD30, __thiscall, 23921,  CDragon, void, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xDC]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+4]
	push 0
	add eax,0xFFFFFFF4
	push ecx
	lea ecx,[eax+0x244]
	call CMovePath::OnMovePacket
	ret 4

 Block2:
	mov ecx,dword ptr [esp+4]
	xor eax,eax
	push eax
	push ecx
	lea ecx,[eax+0x244]
	call CMovePath::OnMovePacket
	ret 4
}
}
// CDragon::Update
_SUB_EXCEPTION_HANDLER(10EAF0)
__SUB_CLASS_THIS0(0010EAF0, __thiscall, 23905,  CDragon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10EAF0
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
	call get_update_time
	mov ebp,eax
	mov eax,dword ptr [esi+0xDC]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	lea edi,[eax-0xC]
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	mov ecx,edi
	cmp dword ptr [edi+0x18],ebx
	je Block5

 Block4:
	call CVecCtrl::UpdateActive
	jmp Block8

 Block5:
	push ebx
	push ebx
	call CVecCtrl::UpdatePassive
	cmp eax,ebx
	jle Block8

 Block6:
	test al,0x10
	je Block8

 Block7:
	push ebx
	mov ecx,esi
	call CDragon::CreateEffect

 Block8:
	mov eax,dword ptr [edi+0x1D8]
	push ebx
	push eax
	mov ecx,esi
	call CDragon::SetMoveAction
	push ebp
	mov ecx,esi
	call CDragon::ProcessAction
	mov ecx,esi
	call CDragon::UpdateQuestInfo
	cmp dword ptr [esi+0x130],ebx
	je Block60

 Block9:
	mov edi,dword ptr [esi+0x130]
	cmp edi,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block13

 Block12:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block13:
	mov edi,dword ptr [esi+0x88]
	mov ebp,dword ptr [esp+0x14]
	cmp edi,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block17

 Block16:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	cmp ebp,dword ptr [esp+0x18]
	je Block26

 Block18:
	mov edi,dword ptr [esi+0x88]
	cmp edi,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block22

 Block21:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov edi,dword ptr [esi+0x130]
	cmp edi,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD8]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esi+0xA0]
	push eax
	lea ecx,[esi+0x98]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block42

 Block27:
	mov edx,dword ptr [esi+0x118]
	mov eax,dword ptr [edx+0x5F8]
	push eax
	call is_vehicle
	add esp,4
	test eax,eax
	jne Block42

 Block28:
	mov ecx,dword ptr [esi+0x130]
	cmp ecx,ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x5C],3
	cmp ecx,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	call IWzShape2D::Getx
	test eax,eax
	mov eax,dword ptr [esp+0x18]
	setle bl
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	test bl,bl
	je Block60

 Block35:
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x60],4
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x130]
	mov bl,5
	mov byte ptr [esp+0x5C],bl
	test ecx,ecx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],6
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],bl
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block60

 Block42:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push eax
	call edi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [esp+0x60],ebx
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	mov ecx,dword ptr [esi+0x130]
	mov bl,1
	mov byte ptr [esp+0x5C],bl
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],2
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[esp+0x44]
	push eax
	lea edx,[esp+0x38]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],bl
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov edi,8
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x34],di
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x44],di
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov ecx,dword ptr [esi+0x118]
	mov edi,dword ptr [ecx+0x5F8]
	push edi
	call is_vehicle
	add esp,4
	test eax,eax
	je Block80

 Block61:
	cmp edi,0x1D05D8
	je Block64

 Block62:
	cmp edi,0x1D05D9
	je Block64

 Block63:
	cmp edi,0x1D05DA
	jne Block80

 Block64:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push edx
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	lea ecx,[esp+0x44]
	mov ebx,7
	push ecx
	mov dword ptr [esp+0x60],ebx
	call edi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	mov ecx,dword ptr [esi+0x88]
	mov byte ptr [esp+0x5C],8
	test ecx,ecx
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],9
	test ecx,ecx
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],8
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	mov byte ptr [esp+0x5C],bl
	mov ebx,8
	cmp word ptr [esp+0x44],bx
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x34],bx
	je Block104

 Block79:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block107

 Block80:
	mov ecx,dword ptr [esi+0x88]
	test ecx,ecx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x5C],0xA
	test edi,edi
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block86

 Block85:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block86:
	cmp dword ptr [esp+0x18],0
	mov eax,dword ptr [esp+0x14]
	setle bl
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x5C],ebp
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block88:
	test bl,bl
	je Block106

 Block89:
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
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x60],0xB
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	mov ecx,dword ptr [esi+0x88]
	mov bl,0xC
	mov byte ptr [esp+0x5C],bl
	test ecx,ecx
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],0xD
	test ecx,ecx
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x48]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x5C],bl
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov ebx,8
	mov byte ptr [esp+0x5C],0xB
	cmp word ptr [esp+0x44],bx
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov dword ptr [esp+0x5C],ebp
	cmp word ptr [esp+0x34],bx
	jne Block79

 Block104:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	mov ebx,8

 Block107:
	mov ecx,dword ptr [esi+0x118]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x14]
	call eax
	test eax,eax
	je Block130

 Block108:
	mov edx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test edx,edx
	je Block118

 Block109:
	mov eax,dword ptr [esi+0x118]
	mov ecx,dword ptr [eax+0x2E18]
	cmp ecx,dword ptr [edx+0x2E18]
	je Block118

 Block110:
	mov eax,dword ptr [eax+0x2E1C]
	mov ecx,dword ptr [esi+0x88]
	shl eax,0x18
	mov ebp,eax
	test ecx,ecx
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	call IWzGr2DLayer::Getcolor
	and eax,0xFF000000
	cmp eax,ebp
	jbe Block130

 Block113:
	mov ecx,dword ptr [esi+0x88]
	test ecx,ecx
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov edi,ecx
	test edi,edi
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	call IWzGr2DLayer::Getcolor
	and eax,0xFFFFFF
	add eax,ebp
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Putcolor
	jmp Block130

 Block118:
	mov ecx,dword ptr [esi+0x118]
	mov edi,dword ptr [ecx+0x5F8]
	push edi
	call is_vehicle
	add esp,4
	test eax,eax
	je Block122

 Block119:
	cmp edi,0x1D05D8
	je Block130

 Block120:
	cmp edi,0x1D05D9
	je Block130

 Block121:
	cmp edi,0x1D05DA
	je Block130

 Block122:
	mov edi,dword ptr [esi+0x88]
	test edi,edi
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xDC]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],0
	call ecx
	test eax,eax
	jge Block126

 Block125:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block126:
	mov edi,dword ptr [esi+0x88]
	test edi,edi
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xE0]
	and eax,0xFFFFFF
	sub eax,0x1000000
	push eax
	push edi
	call ecx
	test eax,eax
	jge Block130

 Block129:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block130:
	lea ebp,[esi+0xE8]
	lea ecx,[ebp+0xC]
	lea edi,[esi+0x100]
	call TSecType<long>::GetData
	lea ecx,[edi+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,ebp
	call TSecType<long>::GetData
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov esi,dword ptr [esi+0xDC]
	mov dword ptr [esp+0x5C],0xE
	test esi,esi
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	push 0
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	push 0
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x48]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block136

 Block135:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block136:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bx
	jne Block139

 Block137:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov eax,dword ptr [esp+0x1C]
	push eax
	lea ecx,[ebp+0xC]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x20]
	push ecx
	mov ecx,ebp
	call TSecType<long>::SetData
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
// CDragon::GetMoveAction
__SUB_CLASS_THIS0(0010AE20, __thiscall, 23908,  CDragon, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x94]
	push eax
	add ecx,0x8C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CDragon::CreateKeyDownBar
_SUB_EXCEPTION_HANDLER(10E6D0)
__SUB_CLASS_THIS(0010E6D0, __thiscall, 23912,  CDragon, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_10E6D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0
	lea eax,[esp+0x58]
	push eax
	call CDragon::GetBodyRect
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov eax,3
	mov dword ptr [esp+0x6C],0
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x6C],1
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 2
	push 0xC
	push 0x48
	push 0
	push 0
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xD0]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [edi+0xD0],eax
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	test esi,esi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	mov esi,8
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x14],si
	jne Block18

 Block12:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block14:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block15:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block19

 Block16:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block20

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block18:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x14]
	push edx
	call ebx
	jmp Block15

 Block19:
	lea ecx,[esp+0x24]
	push ecx
	call ebx

 Block20:
	mov eax,dword ptr [edi+0x88]
	mov edx,0xD
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block22:
	mov esi,dword ptr [edi+0xD0]
	mov dword ptr [esp+0x6C],2
	test esi,esi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
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
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x6C],0xFFFFFFFF
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
	call ebx

 Block30:
	mov eax,dword ptr [edi+0xDC]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	mov esi,dword ptr [edi+0xD0]
	mov dword ptr [esp+0x6C],3
	test esi,esi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
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
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x14]
	push edx
	call ebx

 Block40:
	mov esi,dword ptr [edi+0xD0]
	test esi,esi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea ecx,[esp+0x34]
	mov ebx,4
	push ecx
	mov dword ptr [esp+0x70],ebx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [edi+0xD0]
	mov byte ptr [esp+0x6C],5
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x5C]
	sub eax,dword ptr [esp+0x64]
	lea edx,[esp+0x38]
	push edx
	sub eax,0x1E
	push eax
	push 0xFFFFFFDC
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x34],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x44],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
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
	mov edx,dword ptr [esp+0x74]
	mov ecx,edi
	mov dword ptr [edi+0xD4],2
	mov dword ptr [edi+0xD8],edx
	call CDragon::DrawKeyDownBar
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x60
	ret 4
}
}
// CDragon::GetVecCtrl
__SUB_CLASS_THIS0(004DF310, __thiscall, 23927,  CDragon, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0xDC]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
