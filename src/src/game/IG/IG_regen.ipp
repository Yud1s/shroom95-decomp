#include "regen.hpp"
// IG.ipp
#include "IG.hpp"

// IGObj::Update
__SUB_CLASS_THIS0(00038CA0, __thiscall, 78641, IGObj, void) {
__asm {

 Block0:
	ret
}
}

// IUIMsgHandler::OnIMEModeChange
__SUB_CLASS_THIS(00029AF0, __thiscall, 79260, IUIMsgHandler, void, char) {
__asm {

 Block0:
	ret 4
}
}

// IUIMsgHandler::OnIMEResult
__SUB_CLASS_THIS(00029B00, __thiscall, 79262, IUIMsgHandler, void, const char *) {
__asm {

 Block0:
	ret 4
}
}

// IUIMsgHandler::OnKey
__SUB_CLASS_THIS(0007D230, __thiscall, 79281, IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// IUIMsgHandler::IsKindOf
__SUB_CLASS_THIS(0007D2B0, __thiscall, 79270, IUIMsgHandler, int32_t, const CRTTI *) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset IUIMsgHandler::ms_RTTI_IUIMsgHandler
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
// IUIMsgHandler::IsShown
__SUB_CLASS_THIS0(00029AD0, __thiscall, 79272, IUIMsgHandler, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret
}
}

// IUIMsgHandler::GetAbsLeft
__SUB_CLASS_THIS0(0007D280, __thiscall, 79290, IUIMsgHandler, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// IUIMsgHandler::GetRTTI
__SUB_CLASS_THIS0(0007D2A0, __thiscall, 97795, IUIMsgHandler, const CRTTI *) {
__asm {

 Block0:
	mov eax,offset IUIMsgHandler::ms_RTTI_IUIMsgHandler
	ret
}
}

// IUIMsgHandler::OnIMEComp
__SUB_CLASS_THIS(00029B10, __thiscall, 79263, IUIMsgHandler, void, const char *, ZArray<unsigned long> &, uint32_t, long, ZList<ZXString<char>> &, long, long, long) {
__asm {

 Block0:
	ret 0x20
}
}

// IUIMsgHandler::SetEnable
__SUB_CLASS_THIS(00029AA0, __thiscall, 79289, IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	ret 4
}
}

// IUIMsgHandler::GetAbsTop
__SUB_CLASS_THIS0(0007D290, __thiscall, 79290, IUIMsgHandler, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}

// IUIMsgHandler::SetShow
__SUB_CLASS_THIS(00029AC0, __thiscall, 79289, IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	ret 4
}
}

// IUIMsgHandler::OnMouseButton
__SUB_CLASS_THIS(0007D250, __thiscall, 79284, IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}

// IUIMsgHandler::OnMouseMove
__SUB_CLASS_THIS(0007D260, __thiscall, 79285, IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 8
}
}

// IUIMsgHandler::OnSetFocus
__SUB_CLASS_THIS(0007D240, __thiscall, 79271, IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}

// IUIMsgHandler::OnMouseWheel
__SUB_CLASS_THIS(00071870, __thiscall, 79286, IUIMsgHandler, int32_t, long, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 0xC
}
}

// IUIMsgHandler::ClearToolTip
__SUB_CLASS_THIS0(00029AE0, __thiscall, 79381, IUIMsgHandler, void) {
__asm {

 Block0:
	ret
}
}
// IUIMsgHandler::OnDraggableMove
__SUB_CLASS_THIS(00029A90, __thiscall, 79288, IUIMsgHandler, void, long, IDraggable *, long, long) {
__asm {

 Block0:
	ret 0x10
}
}

// IUIMsgHandler::IsEnabled
__SUB_CLASS_THIS0(00029AB0, __thiscall, 79272, IUIMsgHandler, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret
}
}

// INetMsgHandler::OnPacket
__SUB_CLASS_THIS(0007D2E0, __thiscall, 124834,  INetMsgHandler, void, long, CInPacket&) {
__asm {

 Block0:
	ret 8
}
}
