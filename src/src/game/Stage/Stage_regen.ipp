#include "regen.hpp"
// Stage.ipp
#include "Stage.hpp"

// CStage::~CStage
_SUB_EXCEPTION_HANDLER(318A50)
__SUB_CLASS_THIS0(00318A50, __thiscall, 122848,  CStage, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_318A50
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
	lea eax,[esi+4]
	int 3// TODO: 	mov dword ptr [esi],offset CStage::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [eax],offset CStage::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CStage::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CStage::`vftable'{for `ZRefCounted'}
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [esp+0x14],0
	test ecx,ecx
	je Block2

 Block1:
	push eax
	call CWndMan::Unlink

 Block2:
	int 3// TODO: 	mov dword ptr [esi+0xC],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CStage::OnMouseEnter
__SUB_CLASS_THIS(00318AD0, __thiscall, 122852,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	je Block3

 Block1:
	cmp dword ptr [ecx+0x9C4],0
	je Block3

 Block2:
	mov dword ptr [esp+4],0
	jmp  CInputSystem::SetCursorState

 Block3:
	ret 4
}
}
// CStage::OnSetCashShop
_SUB_EXCEPTION_HANDLER(31ADF0)
__SUB_CLASS_THIS(0031ADF0, __thiscall, 122853,  CStage, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31ADF0
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
	mov ebp,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor ebx,ebx
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x1C],ebx
	call ZRef<CharacterData>::_Alloc
	mov edi,dword ptr [esp+0x30]
	mov esi,dword ptr [esp+0x1C]
	push ebx
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	call CharacterData::Decode
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax+4],esi
	cmp esi,ebx
	je Block2

 Block1:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SetCharacterData
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x48]
	add ecx,4
	push offset CInterStage::ms_RTTI_CInterStage
	call eax
	test eax,eax
	jne Block7

 Block3:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x28],1
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,eax
	call CInterStage::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push ebx
	push eax
	mov byte ptr [esp+0x30],bl
	call set_stage
	add esp,8

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [ecx+0x3F88]
	push 0x3B70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x18],edx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block9

 Block8:
	push edi
	mov ecx,eax
	call CCashShop::_ctor_0
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov byte ptr [esp+0x30],bl
	call set_stage
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	add esp,8
	push 0x64
	call CConfig::SaveSessionInfo_ChannelID
	mov dword ptr [ebp+0x37AC],1
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp esi,ebx
	je Block14

 Block11:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CStage::Close
__SUB_CLASS_THIS0(00318A30, __thiscall, 122848,  CStage, void) {
__asm {

 Block0:
	ret
}
}
// CStage::OnSetITC
_SUB_EXCEPTION_HANDLER(31AF60)
__SUB_CLASS_THIS(0031AF60, __thiscall, 122853,  CStage, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31AF60
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
	xor ebx,ebx
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x18],ebx
	call ZRef<CharacterData>::_Alloc
	mov edi,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0x18]
	push ebx
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x2C],ebx
	call CharacterData::Decode
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax+4],esi
	cmp esi,ebx
	je Block2

 Block1:
	lea eax,[esi-0xC]
	push eax
	call ebp

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SetCharacterData
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x48]
	add ecx,4
	push offset CInterStage::ms_RTTI_CInterStage
	call eax
	test eax,eax
	jne Block7

 Block3:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x24],1
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,eax
	call CInterStage::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push ebx
	push eax
	mov byte ptr [esp+0x2C],bl
	call set_stage
	add esp,8

 Block7:
	push 0x3488
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	mov byte ptr [esp+0x24],2
	cmp eax,ebx
	je Block9

 Block8:
	push edi
	mov ecx,eax
	call CITC::_ctor_0
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	push ebx
	push eax
	mov byte ptr [esp+0x2C],bl
	call set_stage
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	add esp,8
	push 0xC8
	call CConfig::SaveSessionInfo_ChannelID
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp esi,ebx
	je Block14

 Block11:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	push edi
	call ebp
	cmp esi,ebx
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
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
// CStage::OnSetField
_SUB_EXCEPTION_HANDLER(31A0A0)
__SUB_CLASS_THIS(0031A0A0, __thiscall, 122853,  CStage, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_31A0A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x40],ecx
	call CUtilDlgEx::ForcedRet
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov esi,dword ptr [ebp+0x70]
	mov ecx,dword ptr [TSingleton<CClientOptMan>::ms_pInstance]
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call CClientOptMan::DecodeOpt
	mov edi,dword ptr [ebx+0x2060]
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [ebx+0x2060],eax
	call CInPacket::Decode4
	mov dword ptr [ebx+0x3D98],eax
	mov eax,dword ptr [ebx+0x2060]
	cmp edi,eax
	je Block2

 Block1:
	mov dword ptr [ebx+0x37AC],1

 Block2:
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [ebp+0x63],al
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [ebp+0x2C],eax
	call CInPacket::Decode2
	push 0
	push offset _S_
	movzx edi,ax
	push 0
	push 0
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x14],edi
	mov dword ptr [ebp+0x38],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	lea ecx,[ebp+0x38]
	call ZXString<char>::ReleaseBuffer
	xor eax,eax
	mov dword ptr [ebp-4],eax
	mov dword ptr [ebp+0x28],eax
	mov byte ptr [ebp-4],1
	cmp edi,eax
	je Block11

 Block3:
	lea ecx,[ebp+0x54]
	push ecx
	mov ecx,esi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	test edi,edi
	jle Block11

 Block6:
	jmp Block8

 Block8:
	lea edx,[ebp+0x58]
	push edx
	mov ecx,esi
	call CInPacket::DecodeStr
	lea eax,[ebp+0x58]
	push eax
	push 0xFFFFFFFF
	lea ecx,[ebp+0x28]
	mov byte ptr [ebp-4],3
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	sub edi,1
	jne Block8

 Block11:
	mov dword ptr [ebp+0x34],0
	cmp dword ptr [ebp+0x2C],0
	mov byte ptr [ebp-4],4
	mov ecx,esi
	je Block13

 Block12:
	call CInPacket::Decode4
	mov ecx,esi
	mov edi,eax
	call CInPacket::Decode4
	mov ecx,esi
	mov ebx,eax
	call CInPacket::Decode4
	mov ecx,dword ptr [ebp+0x5C]
	push eax
	push ebx
	push edi
	add ecx,0x3C78
	mov dword ptr [ebp+0x54],eax
	call CalcDamage::SetSeed
	mov ecx,dword ptr [ebp+0x54]
	push ecx
	push ebx
	push edi
	mov edi,dword ptr [ebp+0x5C]
	mov ecx,edi
	call CWvsContext::SetActionRndSeed
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<CharacterData>>::call
	add esp,4
	mov dword ptr [eax+4],1
	add eax,0x10
	push 0
	push esi
	mov ecx,eax
	mov dword ptr [ebp+0x34],eax
	call CharacterData::Decode
	push esi
	mov ecx,edi
	call CWvsContext::OnSetLogoutGiftConfig
	mov edi,dword ptr [ebp+0x34]
	jmp Block24

 Block13:
	call CInPacket::Decode1
	movzx ecx,al
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov dword ptr [ebp+0x54],eax
	mov eax,dword ptr [eax+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	je Block15

 Block14:
	test ecx,ecx
	je Block16

 Block15:
	mov ecx,ebx
	call CWvsContext::OnRevive

 Block16:
	lea edx,[ebp+0x4C]
	push edx
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	push eax
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],5
	call ZRef<CharacterData>::op_assign_copy
	mov edi,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],4
	test edi,edi
	je Block21

 Block17:
	add edi,0xFFFFFFF0
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
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block20:
	mov ebx,dword ptr [ebp+0x5C]

 Block21:
	mov ecx,esi
	call CInPacket::Decode4
	mov edi,dword ptr [ebp+0x34]
	lea edx,[edi+0xE1]
	mov ecx,eax
	call _ZtlSecureTearHelper<unsigned long>::call
	mov ecx,esi
	mov dword ptr [edi+0xE9],eax
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [edi+0xED],al
	call CInPacket::Decode4
	lea edx,[edi+0x61]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x69],eax
	mov ecx,esi
	mov dword ptr [ebx+0x1C],0
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [ebx+0x1C],eax
	test eax,eax
	je Block23

 Block22:
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [ebx+0x14],eax
	call CInPacket::Decode4
	mov dword ptr [ebx+0x18],eax

 Block23:
	mov eax,dword ptr [ebp+0x54]
	mov dword ptr [eax+0x2E18],0

 Block24:
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x48]
	add ecx,4
	push offset CInterStage::ms_RTTI_CInterStage
	call eax
	test eax,eax
	jne Block29

 Block25:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x10],eax
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block27

 Block26:
	mov ecx,eax
	call CInterStage::_ctor_default
	jmp Block28

 Block27:
	xor eax,eax

 Block28:
	push 0
	push eax
	mov byte ptr [ebp-4],4
	call set_stage
	add esp,8

 Block29:
	mov dword ptr [ebp-0x2C],0
	mov byte ptr [ebp-4],7
	test edi,edi
	je Block34

 Block30:
	mov ecx,dword ptr [ebp+0x34]
	add ecx,0xFFFFFFF4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edi,dword ptr [ebp-0x2C]
	test edi,edi
	je Block34

 Block31:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block32:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block34

 Block33:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block34:
	mov cl,byte ptr [ebp+0x63]
	mov edi,dword ptr [ebp+0x34]
	push 8
	lea edx,[ebp-0x24]
	mov byte ptr [ebp-0x28],cl
	push edx
	mov ecx,esi
	mov dword ptr [ebp-0x2C],edi
	call CInPacket::DecodeBuffer
	mov eax,dword ptr [edi+0xE9]
	push eax
	lea ecx,[edi+0xE1]
	push ecx
	call _ZtlSecureFuseHelper<unsigned long>::call
	push eax
	lea edx,[ebp+0x4C]
	push edx
	call CField::FieldFactory
	mov eax,dword ptr [eax+4]
	lea ecx,[ebp-0x30]
	push ecx
	push eax
	mov byte ptr [ebp-4],8
	call set_stage
	mov eax,dword ptr [ebp+0x50]
	add esp,0x18
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block42

 Block35:
	add eax,0x10
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block36:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block38

 Block37:
	add eax,0xC
	jmp Block39

 Block38:
	xor eax,eax

 Block39:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block42

 Block40:
	lea ecx,[eax+0xC]
	test ecx,ecx
	je Block42

 Block41:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block42:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::CloseShopScanner
	cmp dword ptr [ebp+0x2C],0
	je Block47

 Block43:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::SaveSessionInfo
	mov ecx,dword ptr [ebp+0x5C]
	add ecx,0x3FB4
	call ZMap<long, long, long>::RemoveAll
	add edi,0x59D
	mov ecx,edi
	call ZMap<long, unsigned short, long>::GetHeadPosition
	mov dword ptr [ebp+0x58],eax
	test eax,eax
	je Block46

 Block44:
	mov ebx,dword ptr [ZImports::_timeGetTime]

 Block45:
	lea ecx,[ebp+0x60]
	push ecx
	lea edx,[ebp+0x58]
	push edx
	mov ecx,edi
	call ZMap<long, unsigned short, long>::GetNext
	mov esi,dword ptr [eax]
	call ebx
	movzx ecx,word ptr [ebp+0x60]
	imul ecx,0x3E8
	add eax,ecx
	mov ecx,dword ptr [ebp+0x5C]
	push eax
	push esi
	call CWvsContext::SetSkillCooltimeOver
	cmp dword ptr [ebp+0x58],0
	jne Block45

 Block46:
	mov esi,dword ptr [ebp+0x5C]
	push 1
	mov ecx,esi
	call CWvsContext::CheckDarkForce
	push 1
	mov ecx,esi
	call CWvsContext::CheckDragonFury
	mov edi,dword ptr [ebp+0x34]
	mov ebx,esi
	jmp Block48

 Block47:
	mov ebx,dword ptr [ebp+0x5C]

 Block48:
	lea ecx,[ebx+0x2044]
	call TSecType<unsigned char>::GetData
	test al,al
	jns Block66

 Block49:
	push 0x97
	lea ecx,[ebp+0x44]
	call COutPacket::_ctor_1
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],9
	test eax,eax
	jne Block51

 Block50:
	xor edx,edx
	jmp Block52

 Block51:
	mov edx,dword ptr [eax-4]

 Block52:
	mov ecx,dword ptr [ebp+0x4C]
	inc ecx
	cmp ecx,edx
	jbe Block57

 Block53:
	test eax,eax
	je Block55

 Block54:
	mov eax,dword ptr [eax-4]

 Block55:
	add eax,eax
	cmp ecx,eax
	ja Block55

 Block56:
	lea edx,[ebp+0x63]
	push edx
	push 0
	push eax
	lea ecx,[ebp+0x48]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [ebp+0x48]

 Block57:
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [eax+ecx],0x13
	mov eax,dword ptr [ebp+0x48]
	mov esi,1
	add dword ptr [ebp+0x4C],esi
	test eax,eax
	jne Block59

 Block58:
	xor edx,edx
	jmp Block60

 Block59:
	mov edx,dword ptr [eax-4]

 Block60:
	mov ecx,dword ptr [ebp+0x4C]
	inc ecx
	cmp ecx,edx
	jbe Block65

 Block61:
	test eax,eax
	je Block63

 Block62:
	mov eax,dword ptr [eax-4]

 Block63:
	add eax,eax
	cmp ecx,eax
	ja Block63

 Block64:
	lea edx,[ebp+0x63]
	push edx
	push 0
	push eax
	lea ecx,[ebp+0x48]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [ebp+0x48]

 Block65:
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [eax+ecx],0xF
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	add dword ptr [ebp+0x4C],esi
	lea edx,[ebp+0x44]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],7
	call ZArray<unsigned char>::RemoveAll

 Block66:
	mov esi,dword ptr [ebp+0x40]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	add esi,4
	push offset CLogin::ms_RTTI_CLogin
	mov ecx,esi
	mov dword ptr [ebp+0x10],esi
	call edx
	test eax,eax
	je Block148

 Block67:
	mov eax,dword ptr [edi+0x35]
	push eax
	lea ecx,[edi+0x33]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,1
	jne Block76

 Block68:
	mov edx,dword ptr [edi+0xA9]
	push edx
	add edi,0xA1
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block76

 Block69:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x3C],eax
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block89

 Block70:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block89

 Block71:
	lea esi,[eax+8]
	test esi,esi
	je Block89

 Block72:
	add esi,0xFFFFFFF8
	mov dword ptr [ebp+0x50],esi
	test esi,esi
	je Block74

 Block73:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block74:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x19AB
	push ecx
	mov byte ptr [ebp-4],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0x897B50
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
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block76

 Block75:
	push 0
	lea ecx,[ebp+0x4C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block76:
	mov eax,dword ptr [ebx+0x2064]
	test eax,eax
	je Block84

 Block77:
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x48]
	add ecx,4
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block83

 Block78:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block80

 Block79:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block81

 Block80:
	xor esi,esi

 Block81:
	lea ecx,[esi+0x16C]
	call TSecType<unsigned long>::GetData
	test eax,eax
	je Block83

 Block82:
	lea ecx,[ebp-0xDC]
	call CUINoticePremium::_ctor_default
	lea ecx,[ebp-0xDC]
	mov byte ptr [ebp-4],0xC
	call CDialog::DoModal
	lea ecx,[ebp-0xDC]
	mov byte ptr [ebp-4],7
	call CUINoticePremium::~CUINoticePremium

 Block83:
	mov eax,dword ptr [ebx+0x2068]
	push 0
	push eax
	mov ecx,ebx
	call CWvsContext::ShowPremiumArgument

 Block84:
	mov al,byte ptr [ebx+0x206C]
	mov byte ptr [ebp+0x63],al
	test al,al
	jbe Block135

 Block85:
	mov eax,dword ptr [ebp+0x5C]
	mov esi,dword ptr [eax+0x206E]
	mov ecx,dword ptr [eax+0x2072]
	mov edx,dword ptr [eax+0x2076]
	mov eax,dword ptr [eax+0x207A]
	mov dword ptr [ebp+0x18],esi
	mov dword ptr [ebp+0x1C],ecx
	mov dword ptr [ebp+0x20],edx
	mov dword ptr [ebp+0x24],eax
	mov dword ptr [ebp+0x58],0
	lea ecx,[ebp+0x40]
	push 0xD61
	push ecx
	mov byte ptr [ebp-4],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	movzx edx,word ptr [ebp+0x1E]
	movzx ecx,word ptr [ebp+0x1A]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	movzx edx,si
	push edx
	push eax
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0xE
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x40]
	add esp,0x14
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block87:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x18]
	push ecx
	call esi
	lea edx,[ebp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block88:
	push eax
	call _com_issue_error

 Block89:
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	jmp Block74

 Block90:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],0xF
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	push 0
	push 0
	lea edx,[ebp+0x18]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0xD68
	mov bl,0x10
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x11
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea edx,[ebp-0x40]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block97

 Block95:
	cmp eax,0x80004002
	je Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp-0x40],di
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[ebp-0x40]
	push ecx
	call esi

 Block101:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x1C],di
	jne Block104

 Block102:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block105:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp+0x18],di
	jne Block108

 Block106:
	mov eax,dword ptr [ebp+0x20]
	xor ecx,ecx
	mov word ptr [ebp+0x18],cx
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea edx,[ebp+0x18]
	push edx
	call esi

 Block109:
	mov edi,dword ptr [ebp+0x54]
	test edi,edi
	je Block131

 Block110:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	movzx eax,byte ptr [ebp+0x63]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x17
	mov ecx,edi
	mov byte ptr [ebp-4],0x16
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block113

 Block111:
	cmp eax,0x80004002
	je Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x1A
	jne Block116

 Block114:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov dword ptr [ebp+0x60],0
	mov esi,dword ptr [ebp+0x40]
	mov bl,0x1B
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block125

 Block118:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x1AC3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x44]
	mov byte ptr [ebp-4],0x1C
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1D
	jne Block120

 Block119:
	mov eax,dword ptr [eax+8]
	jmp Block121

 Block120:
	mov eax,offset _S___3

 Block121:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x60]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],bl
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	push 0
	push 1
	push 0
	push 0
	push offset _S___4
	lea edx,[ebp+0x3C]
	push edx
	lea ecx,[ebp+0x60]
	call ZXString<char>::op_add_0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	lea edx,[ebp+0x58]
	push edx
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x1E
	call ZXString<char>::op_add_1
	call CUtilDlg::Notice
	mov eax,dword ptr [ebp+0x3C]
	add esp,0x14
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block127

 Block126:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block127:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block129

 Block128:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block129:
	mov byte ptr [ebp-4],0x16
	test esi,esi
	je Block131

 Block130:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block131:
	mov byte ptr [ebp-4],0xD
	test edi,edi
	je Block133

 Block132:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block133:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block135

 Block134:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block135:
	cmp dword ptr [ebp+0x14],0
	je Block154

 Block136:
	xor esi,esi
	push esi
	push offset _S_
	push esi
	push esi
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],esi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp+0x60]
	call ZXString<char>::ReleaseBuffer
	mov ecx,dword ptr [ebp+0x38]
	mov bl,0x1F
	mov byte ptr [ebp-4],bl
	cmp ecx,esi
	je Block138

 Block137:
	mov eax,dword ptr [ecx-4]
	jmp Block139

 Block138:
	xor eax,eax

 Block139:
	push eax
	push ecx
	lea ecx,[ebp+0x60]
	call ZXString<char>::_Cat
	push 2
	push offset _S___4
	lea ecx,[ebp+0x60]
	call ZXString<char>::_Cat
	mov edi,dword ptr [ebp+0x14]
	test edi,edi
	jle Block144

 Block140:
	push 4
	push offset _S___36
	lea ecx,[ebp+0x60]
	call ZXString<char>::_Cat
	mov ecx,dword ptr [ebp+0x28]
	mov eax,dword ptr [ecx+esi*4]
	test eax,eax
	je Block142

 Block141:
	mov ecx,dword ptr [eax-4]
	jmp Block143

 Block142:
	xor ecx,ecx

 Block143:
	push ecx
	push eax
	lea ecx,[ebp+0x60]
	call ZXString<char>::_Cat
	inc esi
	cmp esi,edi
	jl Block140

 Block144:
	push 0xE0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x50],eax
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block146

 Block145:
	mov ecx,eax
	call CUIEventAlarm::_ctor_default

 Block146:
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x60]
	mov dword ptr [ebp+0x50],esp
	push edx
	mov byte ptr [ebp-4],bl
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [TSingleton<CUIEventAlarm>::ms_pInstance]
	call CUIEventAlarm::SetEventAlarm
	mov ecx,dword ptr [TSingleton<CUIEventAlarm>::ms_pInstance]
	call CUIEventAlarm::Layout_GEN
	mov ecx,dword ptr [TSingleton<CUIEventAlarm>::ms_pInstance]
	call CUIEventAlarm::CreateEventAlarm
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block154

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block154

 Block148:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CField::ms_RTTI_CField
	mov ecx,esi
	call eax
	test eax,eax
	je Block154

 Block149:
	cmp dword ptr [ebx+0x2064],0
	je Block154

 Block150:
	mov ecx,dword ptr [ebp+0x40]
	add ecx,0x16C
	call TSecType<unsigned long>::GetData
	test eax,eax
	jne Block154

 Block151:
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x48]
	add ecx,4
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block154

 Block152:
	call get_field
	lea ecx,[eax+0x16C]
	call TSecType<unsigned long>::GetData
	cmp eax,0x2710
	jne Block154

 Block153:
	lea ecx,[ebp-0xDC]
	call CUINoticePremium::_ctor_default
	lea ecx,[ebp-0xDC]
	mov byte ptr [ebp-4],0x21
	call CDialog::DoModal
	lea ecx,[ebp-0xDC]
	mov byte ptr [ebp-4],7
	call CUINoticePremium::~CUINoticePremium

 Block154:
	cmp dword ptr [ebp+0x2C],0
	je Block156

 Block155:
	mov ecx,dword ptr [ebp+0x5C]
	push 1
	call CWvsContext::CheckNewQuestAvailable

 Block156:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block159

 Block157:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block159

 Block158:
	mov ecx,esi
	jmp Block160

 Block159:
	xor ecx,ecx

 Block160:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	call eax
	cmp eax,0x1D
	jne Block162

 Block161:
	push 0x10D
	lea ecx,[ebp]
	call COutPacket::_ctor_1
	lea ecx,[ebp]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	mov byte ptr [ebp-4],0x22
	call CClientSocket::SendPacket
	lea ecx,[ebp+4]
	mov byte ptr [ebp-4],7
	call ZArray<unsigned char>::RemoveAll

 Block162:
	mov esi,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block167

 Block163:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block166

 Block164:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block166

 Block165:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block166:
	mov dword ptr [ebp-0x2C],0

 Block167:
	mov esi,dword ptr [ebp+0x34]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block170

 Block168:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block170

 Block169:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block170:
	lea ecx,[ebp+0x28]
	mov byte ptr [ebp-4],0
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block172

 Block171:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block172:
	lea esp,[ebp-0xEC]
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
// CStage::IsKindOf
__SUB_CLASS_THIS(0007DBB0, __thiscall, 122856,  CStage, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CStage::ms_RTTI_CStage
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
// CStage::GetRTTI
__SUB_CLASS_THIS0(0007DBA0, __thiscall, 122855,  CStage, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CStage::ms_RTTI_CStage
	ret
}
}
// set_stage
_SUB_EXCEPTION_HANDLER(319C30)
__SUB(00319C30, __cdecl, 132762,  void, CStage*, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_319C30
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
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RemoveAll
	mov eax,dword ptr [_D_G_PSTAGE+4]
	xor edi,edi
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [_D_G_PSTAGE+4],edi
	cmp eax,edi
	je Block8

 Block1:
	add eax,0xC
	cmp eax,edi
	je Block8

 Block2:
	add eax,0xFFFFFFF4
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+8]
	call eax

 Block4:
	mov ebp,dword ptr [esp+0x34]
	cmp ebp,edi
	je Block20

 Block5:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [edx+0x48]
	lea esi,[ebp+4]
	push offset CInterStage::ms_RTTI_CInterStage
	mov ecx,esi
	call eax
	test eax,eax
	je Block9

 Block6:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	cmp dword ptr [eax+4],edi
	lea ecx,[esp+0x1C]
	setne bl
	call ZRef<CharacterData>::~ZRef<CharacterData>
	test bl,bl
	je Block27

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::OnGameStageChanged
	jmp Block27

 Block8:
	mov dword ptr [esp+0x18],edi
	jmp Block4

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CField::ms_RTTI_CField
	mov ecx,esi
	call eax
	test eax,eax
	jne Block12

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CCashShop::ms_RTTI_CCashShop
	mov ecx,esi
	call eax
	test eax,eax
	jne Block12

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CITC::ms_RTTI_CITC
	mov ecx,esi
	call eax
	test eax,eax
	je Block20

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CField::ms_RTTI_CField
	mov ecx,esi
	call eax
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp dword ptr [ecx+0x98],edi
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	setne dl
	movzx eax,dl
	push edi
	push eax
	call CWvsContext::SetScreenResolution

 Block14:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x20]
	xor ebx,ebx
	cmp dword ptr [eax+4],edi
	sete bl
	cmp esi,edi
	je Block18

 Block15:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	test ebx,ebx
	je Block27

 Block19:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::OnEnterGame
	jmp Block27

 Block20:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	cmp dword ptr [eax+4],edi
	mov eax,dword ptr [esp+0x20]
	setne bl
	cmp eax,edi
	je Block25

 Block21:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block24

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block24:
	mov dword ptr [esp+0x20],0

 Block25:
	test bl,bl
	je Block27

 Block26:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::OnLeaveGame

 Block27:
	test ebp,ebp
	je Block34

 Block28:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [edx+0x48]
	lea esi,[ebp+4]
	push offset CLogo::ms_RTTI_CLogo
	mov ecx,esi
	call eax
	test eax,eax
	jne Block32

 Block29:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CLogin::ms_RTTI_CLogin
	mov ecx,esi
	call eax
	test eax,eax
	jne Block32

 Block30:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CCashShop::ms_RTTI_CCashShop
	mov ecx,esi
	call eax
	test eax,eax
	jne Block32

 Block31:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CITC::ms_RTTI_CITC
	mov ecx,esi
	call eax
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0
	push 0
	call CWvsContext::SetScreenResolution

 Block33:
	push ebp
	mov ecx,offset _D_G_PSTAGE
	call ZRef<CStage>::op_assign_ptr
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [edx+4]
	push eax
	call edx

 Block34:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block36

 Block35:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CStage>::_ReleaseRaw

 Block36:
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
// CStage::FadeIn
_SUB_EXCEPTION_HANDLER(318CD0)
__SUB_CLASS_THIS0(00318CD0, __thiscall, 122854,  CStage, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_318CD0
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
	mov ebx,1
	test byte ptr [_D__S3__8],bl
	jne Block6

 Block1:
	or dword ptr [_D__S3__8],ebx
	mov eax,dword ptr [_D_G_GR]
	xor ebp,ebp
	mov dword ptr [esp+0x74],ebp
	cmp eax,ebp
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x44]
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block5

 Block4:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov ecx,dword ptr [esp+0x14]
	or edi,0xFFFFFFFF
	mov dword ptr [_D_TFADEINTIME],ecx
	mov dword ptr [esp+0x74],edi
	jmp Block7

 Block6:
	xor ebp,ebp
	or edi,0xFFFFFFFF

 Block7:
	mov eax,dword ptr [_D_G_GR]
	cmp eax,ebp
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x44]
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block11

 Block10:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	mov eax,dword ptr [_D_TFADEINTIME]
	cmp eax,dword ptr [esp+0x14]
	jle Block28

 Block12:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2D::GetredTone
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x74],ebx
	cmp esi,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x40]
	push ebp
	push ebp
	push esi
	call ecx
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x74],edi
	cmp eax,ebp
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block20:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2D::GetgreenBlueTone
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x74],2
	cmp esi,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x40]
	push ebp
	push ebp
	push esi
	call ecx
	cmp eax,ebp
	jge Block26

 Block25:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x74],edi
	cmp eax,ebp
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	mov eax,dword ptr [_D_G_GR]
	cmp eax,ebp
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push eax
	mov esi,eax
	call edx
	cmp eax,ebp
	jge Block32

 Block31:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x28]
	push eax
	call IWzGr2D::GetredTone
	mov esi,eax
	mov ecx,dword ptr [_D_G_GR]
	mov dword ptr [esp+0x74],3
	cmp ecx,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2D::GetgreenBlueTone
	mov edi,eax
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x74],4
	cmp ecx,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2D::GetgreenBlueTone
	mov ebx,eax
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x74],5
	cmp esi,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block42

 Block41:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov esi,dword ptr [edi]
	mov ebp,dword ptr [esp+0x14]
	test esi,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov esi,dword ptr [ebx]
	mov edi,dword ptr [esp+0x18]
	xor ebx,ebx
	cmp esi,ebx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block50

 Block49:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,edi
	add ecx,ebp
	mov eax,0x55555556
	imul ecx
	mov eax,dword ptr [esp+0x20]
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov byte ptr [esp+0x74],4
	cmp eax,ebx
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block52:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x74],3
	cmp eax,ebx
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp eax,ebx
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edi,0x258
	cmp eax,ebx
	je Block59

 Block57:
	cmp dword ptr [eax+0x3850],ebx
	je Block59

 Block58:
	mov edi,0x12C

 Block59:
	mov eax,dword ptr [_D_G_GR]
	cmp eax,ebx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov ebp,eax
	push eax
	mov eax,dword ptr [ecx+0x44]
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block63

 Block62:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push ebp
	push eax
	call _com_issue_errorex

 Block63:
	mov ecx,0xFF
	sub ecx,esi
	imul ecx,edi
	mov edi,dword ptr [ZImports::_VariantInit]
	mov eax,0x80808081
	imul ecx
	add edx,ecx
	sar edx,7
	mov esi,edx
	shr esi,0x1F
	lea ecx,[esp+0x3C]
	add esi,edx
	add esi,dword ptr [esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov eax,3
	mov dword ptr [esp+0x74],6
	mov word ptr [esp+0x2C],ax
	mov dword ptr [esp+0x34],esi
	mov ecx,dword ptr [_D_G_GR]
	mov bl,7
	mov byte ptr [esp+0x74],bl
	test ecx,ecx
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea edx,[esp+0x28]
	push edx
	call IWzGr2D::GetredTone
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x74],8
	test ecx,ecx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x74],bl
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov ebp,8
	mov byte ptr [esp+0x74],6
	cmp word ptr [esp+0x2C],bp
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp word ptr [esp+0x3C],bp
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	lea ecx,[esp+0x5C]
	push ecx
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	mov eax,3
	mov dword ptr [esp+0x74],9
	mov word ptr [esp+0x4C],ax
	mov dword ptr [esp+0x54],esi
	mov ecx,dword ptr [_D_G_GR]
	mov bl,0xA
	mov byte ptr [esp+0x74],bl
	test ecx,ecx
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2D::GetgreenBlueTone
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x74],0xB
	test ecx,ecx
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x50]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x74],bl
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	mov byte ptr [esp+0x74],9
	cmp word ptr [esp+0x4C],bp
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp word ptr [esp+0x5C],bp
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov dword ptr [_D_TFADEINTIME],esi
	mov eax,esi
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret
}
}
// CStage::FadeOut
_SUB_EXCEPTION_HANDLER(3192B0)
__SUB_CLASS_THIS0(003192B0, __thiscall, 122848,  CStage, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3192B0
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
	jmp Block2

 Block2:
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],eax
	push eax
	push ecx
	push edx
	push ebx
	push ebx
	push ebp
	push esi
	push edi
	xor eax,eax
	xor ebx,ebx
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x38],ebx
	mov ecx,6
	add ecx,4
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [esp+0x40],0x2D9FB3D
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ebx
	pop edx
	pop ecx
	pop eax
	jmp Block4

 Block4:
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
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x30]
	push edx
	mov dword ptr [esp+0x9C],0
	call edi
	lea eax,[esp+0x30]
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x98],1
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2D::GetredTone
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],2
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x34]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x98],1
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x98],0
	cmp word ptr [esp+0x30],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x30]
	push ecx
	call ebp

 Block18:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp word ptr [esp+0x40],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x40]
	push eax
	call ebp

 Block22:
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	lea eax,[esp+0x40]
	push eax
	mov dword ptr [esp+0x9C],3
	call edi
	lea ecx,[esp+0x40]
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
	mov ecx,dword ptr [_D_G_GR]
	mov bl,4
	mov byte ptr [esp+0x98],bl
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2D::GetgreenBlueTone
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],5
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x98],bl
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x40],si
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x40]
	push ecx
	call ebp

 Block36:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x30]
	push eax
	call ebp

 Block40:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block76

 Block41:
	cmp dword ptr [eax+0x3850],0
	jne Block76

 Block42:
	call timeGetTime
	mov ebx,eax
	mov ebp,9

 Block43:
	mov ecx,ebx
	sub ecx,eax
	add ecx,0x258
	imul ecx,0xFF
	mov eax,0x1B4E81B5
	imul ecx
	sar edx,6
	mov esi,edx
	lea ecx,[esp+0x30]
	shr esi,0x1F
	push ecx
	add esi,edx
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block44:
	lea eax,[esp+0x40]
	push eax
	mov dword ptr [esp+0x9C],6
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block45:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x98],7
	test ecx,ecx
	je Block9

 Block46:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2D::GetredTone
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],8
	test ecx,ecx
	je Block9

 Block47:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0
	push esi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x98],7
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x98],6
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x98],0xFFFFFFFF
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	lea ecx,[esp+0x60]
	push ecx
	call edi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block58:
	lea eax,[esp+0x50]
	push eax
	mov dword ptr [esp+0x9C],ebp
	call edi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block59:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x98],0xA
	test ecx,ecx
	je Block9

 Block60:
	lea edx,[esp+0x28]
	push edx
	call IWzGr2D::GetgreenBlueTone
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],0xB
	test ecx,ecx
	je Block9

 Block61:
	lea eax,[esp+0x60]
	push eax
	lea edx,[esp+0x54]
	push edx
	push esi
	push esi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x98],0xA
	test eax,eax
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov esi,8
	mov byte ptr [esp+0x98],9
	cmp word ptr [esp+0x50],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp word ptr [esp+0x60],si
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	je Block9

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x1C]
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push esi
	push eax
	call _com_issue_errorex

 Block74:
	push 1
	call Sleep
	call timeGetTime
	mov ecx,eax
	sub ecx,ebx
	cmp ecx,0x258
	jl Block43

 Block75:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov esi,8

 Block76:
	lea edx,[esp+0x50]
	push edx
	call edi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	lea ecx,[esp+0x60]
	push ecx
	mov dword ptr [esp+0x9C],0xC
	call edi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	mov ecx,dword ptr [_D_G_GR]
	mov bl,0xD
	mov byte ptr [esp+0x98],bl
	test ecx,ecx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea eax,[esp+0x28]
	push eax
	call IWzGr2D::GetredTone
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],0xE
	test ecx,ecx
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x64]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x98],bl
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	mov byte ptr [esp+0x98],0xC
	cmp word ptr [esp+0x60],si
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x60]
	push ecx
	call ebp

 Block90:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp word ptr [esp+0x50],si
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea eax,[esp+0x50]
	push eax
	call ebp

 Block94:
	lea ecx,[esp+0x80]
	push ecx
	call edi
	lea edx,[esp+0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea eax,[esp+0x70]
	push eax
	mov dword ptr [esp+0x9C],0xF
	call edi
	lea ecx,[esp+0x70]
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
	mov ecx,dword ptr [_D_G_GR]
	mov bl,0x10
	mov byte ptr [esp+0x98],bl
	test ecx,ecx
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2D::GetgreenBlueTone
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x98],0x11
	test ecx,ecx
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	lea eax,[esp+0x80]
	push eax
	lea edx,[esp+0x74]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x98],bl
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov byte ptr [esp+0x98],0xF
	cmp word ptr [esp+0x70],si
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[esp+0x70]
	push ecx
	call ebp

 Block108:
	mov dword ptr [esp+0x98],0xFFFFFFFF
	cmp word ptr [esp+0x80],si
	jne Block111

 Block109:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea eax,[esp+0x80]
	push eax
	call ebp

 Block112:
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block116

 Block115:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push esi
	push eax
	call _com_issue_errorex

 Block116:
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
// CStage::OnSetFocus
__SUB_CLASS_THIS(0007DB90, __thiscall, 122851,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CStage::Init
__SUB_CLASS_THIS(0007DB80, __thiscall, 122849,  CStage, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CStage::OnPacket
__SUB_CLASS_THIS(0031B0B0, __thiscall, 122850,  CStage, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x8D
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
	call CStage::OnSetCashShop
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CStage::OnSetITC
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CStage::OnSetField

 Block6:
	ret 8
}
}
