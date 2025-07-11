#include "regen.hpp"
// InterStage.ipp
#include "InterStage.hpp"

// CInterStage::CInterStage
__SUB_CLASS_THIS0(00171D90, __thiscall, 68449,  CInterStage, void) {
__asm {

 Block0:
	mov eax,ecx
	int 3// TODO: 	mov dword ptr [eax+4],offset IUIMsgHandler::`vftable'
	int 3// TODO: 	mov dword ptr [eax+8],offset INetMsgHandler::`vftable'
	int 3// TODO: 	mov dword ptr [eax+0xC],offset ZRefCounted::`vftable'
	xor ecx,ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CInterStage::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [eax+4],offset CInterStage::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [eax+8],offset CInterStage::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [eax+0xC],offset CInterStage::`vftable'{for `ZRefCounted'}
	ret
}
}
// CInterStage::IsKindOf
__SUB_CLASS_THIS(00171D60, __thiscall, 68455,  CInterStage, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CInterStage::ms_RTTI_CInterStage
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
// CInterStage::GetRTTI
__SUB_CLASS_THIS0(00171D20, __thiscall, 68454,  CInterStage, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CInterStage::ms_RTTI_CInterStage
	ret
}
}
// CInterStage::Init
__SUB_CLASS_THIS(00171D30, __thiscall, 68452,  CInterStage, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CInterStage::~CInterStage
__SUB_CLASS_THIS0(00171D00, __thiscall, 68451,  CInterStage, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CInterStage::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ecx+4],offset CInterStage::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+8],offset CInterStage::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CInterStage::`vftable'{for `ZRefCounted'}
	jmp  CStage::~CStage
}
}
// CInterStage::Close
__SUB_CLASS_THIS0(00171D40, __thiscall, 68451,  CInterStage, void) {
__asm {

 Block0:
	ret
}
}
