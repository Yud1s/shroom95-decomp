#include "regen.hpp"
// WvsApp.ipp
#include "WvsApp.hpp"

// CWvsApp::LowLevelKeyboardProc
// 9CC210
static uint8_t _SUB_5CC1A0_LOOKUP_TABLE_0[6] = {
0, 0, 1, 1, 0, 0, 
};
__SUB(005CC1A0, __stdcall, 52940,  long, int32_t, uint32_t, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	jne Block8

 Block1:
	lea eax,[ebx-0x100]
	cmp eax,5
	ja Block8

 Block2:
	movzx eax,byte ptr [eax+_SUB_5CC1A0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block8


 Block3:
	cmp dword ptr [esi],0x1B
	jne Block5

 Block4:
	push 0x11
	call GetKeyState
	test ax,ax
	jl Block7

 Block5:
	mov eax,dword ptr [esi]
	cmp eax,0x5B
	je Block7

 Block6:
	cmp eax,0x5C
	jne Block8

 Block7:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 0xC

 Block8:
	push esi
	push ebx
	push edi
	push 0
	call CallNextHookEx
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CWvsApp::SetSecurityErrorCode
__SUB_CLASS_THIS(005C1960, __thiscall, 52929,  CWvsApp, void, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push ecx
	mov dword ptr [ebp-4],ecx
	mov eax,dword ptr [ebp-4]
	mov ecx,dword ptr [eax+0x84]
	and ecx,dword ptr [ebp+8]
	jne Block2

 Block1:
	mov edx,dword ptr [ebp-4]
	mov eax,dword ptr [edx+0x84]
	add eax,dword ptr [ebp+8]
	mov ecx,dword ptr [ebp-4]
	mov dword ptr [ecx+0x84],eax

 Block2:
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CWvsApp::Dir_SlashToBackSlash
__SUB(005C1780, __cdecl, 52941,  void, char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x18
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0xC],eax
	mov ecx,dword ptr [ebp-0xC]
	add ecx,1
	mov dword ptr [ebp-0x10],ecx

 Block1:
	mov edx,dword ptr [ebp-0xC]
	mov al,byte ptr [edx]
	mov byte ptr [ebp-0x11],al
	add dword ptr [ebp-0xC],1
	cmp byte ptr [ebp-0x11],0
	jne Block1

 Block2:
	mov ecx,dword ptr [ebp-0xC]
	sub ecx,dword ptr [ebp-0x10]
	mov dword ptr [ebp-0x18],ecx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [ebp-4],edx
	mov dword ptr [ebp-8],0
	jmp Block4

 Block3:
	mov eax,dword ptr [ebp-8]
	add eax,1
	mov dword ptr [ebp-8],eax

 Block4:
	mov ecx,dword ptr [ebp-8]
	cmp ecx,dword ptr [ebp-4]
	jge Block8

 Block5:
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ebp-8]
	movsx eax,byte ptr [edx]
	cmp eax,0x2F
	jne Block7

 Block6:
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [ebp-8]
	mov byte ptr [ecx],0x5C

 Block7:
	jmp Block3

 Block8:
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::InitializeGr2D
_SUB_EXCEPTION_HANDLER(5C7670)
__SUB_CLASS_THIS0(005C7670, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C7670
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	sub esp,0xE4
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0xC8],ecx
	call TSingleton<CConfig>::GetInstance
	mov eax,dword ptr [eax+0x10]
	mov dword ptr [ebp-0x34],eax
	mov dword ptr [ebp-4],0
	call StringPool::GetInstance
	mov dword ptr [ebp-0xCC],eax
	push 0x1917
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [ebp-0xCC]
	call StringPool::GetStringW
	mov dword ptr [ebp-0xD0],eax
	mov edx,dword ptr [ebp-0xD0]
	mov dword ptr [ebp-0xD4],edx
	mov byte ptr [ebp-4],1
	push 0
	call get_gr
	push eax
	mov ecx,dword ptr [ebp-0xD4]
	call ZXString16::op_c_str
	push eax
	call PcCreate_IWzGr2D
	add esp,0xC
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x3C]
	call ZXString16::~ZXString<wchar_t>
	mov eax,dword ptr [ebp-0xC8]
	mov byte ptr [eax+0x78],1
	jmp Block2

 Block2:
	mov dword ptr [ebp-4],0xFFFFFFFF
	call TSingleton<CConfig>::GetInstance
	cmp dword ptr [eax+0x9C],0
	je Block4

 Block3:
	mov dword ptr [ebp-0xE0],0
	jmp Block5

 Block4:
	mov ecx,dword ptr [ebp-0xC8]
	movzx edx,byte ptr [ecx+0x78]
	neg edx
	sbb edx,edx
	and edx,0xFFFFFFEF
	add edx,0x10
	mov dword ptr [ebp-0xE0],edx

 Block5:
	mov eax,dword ptr [ebp-0xE0]
	mov dword ptr [ebp-0x38],eax
	mov ecx,0x4003
	mov word ptr [ebp-0x30],cx
	mov edx,dword ptr [ebp-0xC8]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp-0x28],eax
	mov ecx,3
	mov word ptr [ebp-0x20],cx
	mov edx,dword ptr [ebp-0x38]
	mov dword ptr [ebp-0x18],edx
	push 3
	mov eax,dword ptr [ebp-0x34]
	push eax
	lea ecx,[ebp-0x50]
	call Ztl_variant_t::_ctor_2
	mov dword ptr [ebp-4],4
	lea ecx,[ebp-0x20]
	push ecx
	lea ecx,[ebp-0x60]
	call Ztl_variant_t::_ctor_4
	mov byte ptr [ebp-4],5
	lea edx,[ebp-0x30]
	push edx
	lea ecx,[ebp-0x70]
	call Ztl_variant_t::_ctor_4
	mov byte ptr [ebp-4],6
	lea eax,[ebp-0x50]
	push eax
	lea ecx,[ebp-0x60]
	push ecx
	lea edx,[ebp-0x70]
	push edx
	call get_screen_height
	push eax
	call get_screen_width
	push eax
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::Initialize
	mov byte ptr [ebp-4],5
	lea ecx,[ebp-0x70]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [ebp-4],4
	lea ecx,[ebp-0x60]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x50]
	call Ztl_variant_t::~Ztl_variant_t
	push 0xFF000000
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::PutbackColor
	lea eax,[ebp-0x74]
	push eax
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::GetredTone
	mov dword ptr [ebp-0xE4],eax
	mov ecx,dword ptr [ebp-0xE4]
	mov dword ptr [ebp-0xE8],ecx
	mov dword ptr [ebp-4],7
	push 0xFF
	mov ecx,dword ptr [ebp-0xE8]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Putx
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x74]
	call _x_com_ptr<IWzVector2D>::~_x_com_ptr<IWzVector2D>
	lea edx,[ebp-0x78]
	push edx
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::GetgreenBlueTone
	mov dword ptr [ebp-0xEC],eax
	mov eax,dword ptr [ebp-0xEC]
	mov dword ptr [ebp-0xF0],eax
	mov dword ptr [ebp-4],8
	push 0xFF
	push 0xFF
	mov ecx,dword ptr [ebp-0xF0]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Move
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x78]
	call _x_com_ptr<IWzVector2D>::~_x_com_ptr<IWzVector2D>
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov dword ptr [ebp-0xF4],eax
	call get_adjust_cy
	neg eax
	push eax
	push 0
	mov ecx,dword ptr [ebp-0xF4]
	push ecx
	mov edx,dword ptr [ebp-0xF4]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [eax+0x6C]
	call ecx
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::DisableFpsPanel
	call TSingleton<CVecProcess>::CreateInstance
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::SetAutoConnect
__SUB_CLASS_THIS(005CC220, __thiscall, 52937,  CWvsApp, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x10]
	test esi,esi
	je Block3

 Block1:
	test eax,eax
	je Block12

 Block2:
	jmp Block4

 Block3:
	test eax,eax
	jne Block12

 Block4:
	cmp dword ptr [edi+0x14],0
	je Block7

 Block5:
	xor ecx,ecx
	test esi,esi
	sete cl
	push 0
	lea eax,[esp+0x10]
	push eax
	mov dword ptr [esp+0x14],0
	push ecx
	push 0x61
	call SystemParametersInfoA
	test eax,eax
	je Block12

 Block6:
	neg esi
	sbb esi,esi
	neg esi
	dec esi
	mov dword ptr [edi+0x10],esi
	pop edi
	pop esi
	ret 4

 Block7:
	test esi,esi
	je Block11

 Block8:
	test eax,eax
	je Block10

 Block9:
	push eax
	call UnhookWindowsHookEx
	test eax,eax
	je Block12

 Block10:
	mov dword ptr [edi+0x10],0
	pop edi
	pop esi
	ret 4

 Block11:
	push 0
	push 0
	call GetModuleHandleA
	push eax
	push offset CWvsApp::LowLevelKeyboardProc
	push 0xD
	call SetWindowsHookExA
	mov dword ptr [edi+0x10],eax

 Block12:
	pop edi
	pop esi
	ret 4
}
}
// CWvsApp::ISMsgProc
__SUB_CLASS_THIS(005C1CE0, __thiscall, 52947,  CWvsApp, void, uint32_t, uint32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,8
	mov dword ptr [ebp-4],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-8],eax
	cmp dword ptr [ebp-8],0x20A
	ja Block4

 Block1:
	cmp dword ptr [ebp-8],0x200
	jae Block7

 Block2:
	cmp dword ptr [ebp-8],0x100
	je Block10

 Block3:
	jmp Block15

 Block4:
	cmp dword ptr [ebp-8],0x500
	jb Block15

 Block5:
	cmp dword ptr [ebp-8],0x501
	jbe Block13

 Block6:
	jmp Block15

 Block7:
	call TSingleton<CWndMan>::IsInstantiated
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [ebp+0x10]
	push ecx
	mov edx,dword ptr [ebp+0xC]
	push edx
	mov eax,dword ptr [ebp+8]
	push eax
	call TSingleton<CWndMan>::GetInstance
	mov ecx,eax
	call CWndMan::ProcessMouse

 Block9:
	jmp Block15

 Block10:
	call TSingleton<CWndMan>::IsInstantiated
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [ebp+0x10]
	push ecx
	mov edx,dword ptr [ebp+0xC]
	push edx
	mov eax,dword ptr [ebp+8]
	push eax
	call TSingleton<CWndMan>::GetInstance
	mov ecx,eax
	call CWndMan::ProcessKey

 Block12:
	jmp Block15

 Block13:
	call TSingleton<CWndMan>::IsInstantiated
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [ebp+0x10]
	push ecx
	mov edx,dword ptr [ebp+0xC]
	push edx
	mov eax,dword ptr [ebp+8]
	push eax
	call TSingleton<CWndMan>::GetInstance
	mov ecx,eax
	call CWndMan::ProcessJoystick

 Block15:
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CWvsApp::InitializeAuth
_SUB_EXCEPTION_HANDLER(5C3AD0)
__SUB_CLASS_THIS0(005C3AD0, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C3AD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x48],ecx
	call CNMManager::GetInstance
	mov ecx,eax
	call CNMManager::Init
	push 0
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::SetPatchOption
	test eax,eax
	jne Block2

 Block1:
	push 0x2200000C
	lea ecx,[ebp-0x14]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x4C],eax
	mov eax,dword ptr [ebp-0x4C]
	mov dword ptr [ebp-0x50],eax
	mov dword ptr [ebp-4],0
	mov ecx,dword ptr [ebp-0x50]
	mov edx,dword ptr [ecx]
	mov dword ptr [ebp-0x10],edx
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x10]
	push eax
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x14]
	call CTerminateException::~CTerminateException
	jmp Block6

 Block2:
	push 0xC9
	push 0x200
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::SetLocaleAndRegion
	test eax,eax
	jne Block4

 Block3:
	push 0x2200000C
	lea ecx,[ebp-0x1C]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x54],eax
	mov ecx,dword ptr [ebp-0x54]
	mov dword ptr [ebp-0x58],ecx
	mov dword ptr [ebp-4],1
	mov edx,dword ptr [ebp-0x58]
	mov eax,dword ptr [edx]
	mov dword ptr [ebp-0x18],eax
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0x18]
	push ecx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x1C]
	call CTerminateException::~CTerminateException
	jmp Block6

 Block4:
	push 0x2002213
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::Initialize
	test eax,eax
	jne Block6

 Block5:
	push 0x2200000D
	lea ecx,[ebp-0x24]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x5C],eax
	mov edx,dword ptr [ebp-0x5C]
	mov dword ptr [ebp-0x60],edx
	mov dword ptr [ebp-4],2
	mov eax,dword ptr [ebp-0x60]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x20],ecx
	push offset CTerminateException::THROW_INFO
	lea edx,[ebp-0x20]
	push edx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x24]
	call CTerminateException::~CTerminateException

 Block6:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::Run
_SUB_EXCEPTION_HANDLER(5C5F00)
__SUB_CLASS_THIS(005C5F00, __thiscall, 52924,  CWvsApp, void, int32_t*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C5F00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD8C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0xC4],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0xD7C],ecx
	jmp Block2

 Block2:
	mov dword ptr [ebp-0x68],0
	xor eax,eax
	mov dword ptr [ebp-0x64],eax
	mov dword ptr [ebp-0x60],eax
	mov dword ptr [ebp-0x5C],eax
	mov dword ptr [ebp-0x58],eax
	mov dword ptr [ebp-0x54],eax
	mov dword ptr [ebp-0x50],eax
	mov dword ptr [ebp-0x88],0
	xor ecx,ecx
	mov dword ptr [ebp-0x84],ecx
	mov dword ptr [ebp-0x80],ecx
	call TSingleton<CClientSocket>::IsInstantiated
	test eax,eax
	je Block4

 Block3:
	call TSingleton<CClientSocket>::GetInstance
	mov ecx,eax
	call CClientSocket::ManipulatePacket

 Block4:
	jmp Block26

 Block26:
	push 0xFF
	push 0
	push 0
	mov ecx,dword ptr [ebp-0xD7C]
	add ecx,0x68
	push ecx
	push 3
	call MsgWaitForMultipleObjects
	mov dword ptr [ebp-0xB4],eax
	mov edx,dword ptr [ebp-0xB4]
	mov dword ptr [ebp-0xD80],edx
	cmp dword ptr [ebp-0xD80],0
	jb Block54

 Block27:
	cmp dword ptr [ebp-0xD80],2
	jbe Block30

 Block28:
	cmp dword ptr [ebp-0xD80],3
	je Block36

 Block29:
	jmp Block54

 Block30:
	mov eax,dword ptr [ebp-0xB4]
	push eax
	call TSingleton<CInputSystem>::GetInstance
	mov ecx,eax
	call CInputSystem::UpdateDevice

 Block31:
	lea ecx,[ebp-0x88]
	push ecx
	call TSingleton<CInputSystem>::GetInstance
	mov ecx,eax
	call CInputSystem::GetISMessage
	test eax,eax
	je Block35

 Block32:
	mov edx,dword ptr [ebp-0x80]
	push edx
	mov eax,dword ptr [ebp-0x84]
	push eax
	mov ecx,dword ptr [ebp-0x88]
	push ecx
	mov ecx,dword ptr [ebp-0xD7C]
	call CWvsApp::ISMsgProc
	mov edx,dword ptr [ebp+8]
	cmp dword ptr [edx],0
	je Block34

 Block33:
	jmp Block35

 Block34:
	jmp Block31

 Block35:
	jmp Block163

 Block36:
	push 1
	push 0
	push 0
	push 0
	lea eax,[ebp-0x68]
	push eax
	call PeekMessageA
	test eax,eax
	je Block53

 Block37:
	lea ecx,[ebp-0x68]
	push ecx
	call TranslateMessage
	lea edx,[ebp-0x68]
	push edx
	call DispatchMessageA
	lea eax,[ebp-0xB8]
	push eax
	mov ecx,dword ptr [ebp-0xD7C]
	call CWvsApp::ExtractComErrorCode
	test eax,eax
	je Block39

 Block38:
	push 0
	mov ecx,dword ptr [ebp-0xB8]
	push ecx
	call _com_raise_error

 Block39:
	lea edx,[ebp-0xB8]
	push edx
	mov ecx,dword ptr [ebp-0xD7C]
	call CWvsApp::ExtractZExceptionCode
	test eax,eax
	je Block49

 Block40:
	cmp dword ptr [ebp-0xB8],0x20000000
	jne Block42

 Block41:
	mov eax,dword ptr [ebp-0xD7C]
	mov ecx,dword ptr [eax+0x54]
	push ecx
	lea ecx,[ebp-0xCD8]
	call CPatchException::_ctor_0
	mov dword ptr [ebp-0xD84],eax
	mov edx,dword ptr [ebp-0xD84]
	mov dword ptr [ebp-0xD88],edx
	mov dword ptr [ebp-4],0
	mov esi,dword ptr [ebp-0xD88]
	mov ecx,0x142
	lea edi,[ebp-0x7D0]
	rep movsd
	push offset CPatchException::THROW_INFO
	lea eax,[ebp-0x7D0]
	push eax
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0xCD8]
	call CPatchException::~CPatchException

 Block42:
	cmp dword ptr [ebp-0xB8],0x21000000
	jl Block45

 Block43:
	cmp dword ptr [ebp-0xB8],0x21000006
	jg Block45

 Block44:
	mov ecx,dword ptr [ebp-0xB8]
	push ecx
	lea ecx,[ebp-0xCE0]
	call CDisconnectException::_ctor_0
	mov dword ptr [ebp-0xD8C],eax
	mov edx,dword ptr [ebp-0xD8C]
	mov dword ptr [ebp-0xD90],edx
	mov dword ptr [ebp-4],1
	mov eax,dword ptr [ebp-0xD90]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0xCDC],ecx
	push offset CDisconnectException::THROW_INFO
	lea edx,[ebp-0xCDC]
	push edx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0xCE0]
	call CDisconnectException::~CDisconnectException

 Block45:
	cmp dword ptr [ebp-0xB8],0x22000000
	jl Block48

 Block46:
	cmp dword ptr [ebp-0xB8],0x2200000E
	jg Block48

 Block47:
	mov eax,dword ptr [ebp-0xB8]
	push eax
	lea ecx,[ebp-0xCE8]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0xD94],eax
	mov ecx,dword ptr [ebp-0xD94]
	mov dword ptr [ebp-0xD98],ecx
	mov dword ptr [ebp-4],2
	mov edx,dword ptr [ebp-0xD98]
	mov eax,dword ptr [edx]
	mov dword ptr [ebp-0xCE4],eax
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0xCE4]
	push ecx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0xCE8]
	call CTerminateException::~CTerminateException

 Block48:
	mov edx,dword ptr [ebp-0xB8]
	push edx
	lea ecx,[ebp-0xCF0]
	call ZException::_ctor_0
	mov eax,dword ptr [eax]
	mov dword ptr [ebp-0xCEC],eax
	push offset ZException::THROW_INFO
	lea ecx,[ebp-0xCEC]
	push ecx
	call _CxxThrowException

 Block49:
	mov edx,dword ptr [ebp+8]
	cmp dword ptr [edx],0
	jne Block51

 Block50:
	cmp dword ptr [ebp-0x64],0x12
	jne Block52

 Block51:
	jmp Block53

 Block52:
	jmp Block36

 Block53:
	jmp Block163

 Block54:
	lea eax,[ebp-0x88]
	push eax
	call TSingleton<CInputSystem>::GetInstance
	mov ecx,eax
	call CInputSystem::GenerateAutoKeyDown
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [ebp-0x80]
	push ecx
	mov edx,dword ptr [ebp-0x84]
	push edx
	mov eax,dword ptr [ebp-0x88]
	push eax
	mov ecx,dword ptr [ebp-0xD7C]
	call CWvsApp::ISMsgProc

 Block56:
	lea ecx,[ebp-0x88]
	push ecx
	call TSingleton<CInputSystem>::GetInstance
	mov ecx,eax
	call CInputSystem::GenerateAutoBtnDown
	test eax,eax
	je Block58

 Block57:
	mov edx,dword ptr [ebp-0x80]
	push edx
	mov eax,dword ptr [ebp-0x84]
	push eax
	mov ecx,dword ptr [ebp-0x88]
	push ecx
	mov ecx,dword ptr [ebp-0xD7C]
	call CWvsApp::ISMsgProc

 Block58:
	call TSingleton<CSecurityClient>::GetInstance
	mov ecx,eax
	nop
	nop
	nop
	nop
	nop
	push 0
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_neq
	movzx edx,al
	test edx,edx
	je Block162

 Block59:
	jmp Block61

 Block61:
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::GetnextRenderTime
	mov dword ptr [ebp-0xBC],eax
	mov eax,dword ptr [ebp-0xBC]
	push eax
	mov ecx,dword ptr [ebp-0xD7C]
	call CWvsApp::CallUpdate
	call CWndMan::RedrawInvalidatedWindows
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::RenderFrame
	jmp Block162

 Block162:
	push 1
	call Sleep

 Block163:
	mov edx,dword ptr [ebp+8]
	cmp dword ptr [edx],0
	jne Block165

 Block164:
	cmp dword ptr [ebp-0x64],0x12
	jne Block166

 Block165:
	jmp Block168

 Block166:
	jmp Block26

 Block168:
	cmp dword ptr [ebp-0x64],0x12
	jne Block170

 Block169:
	push 0
	call PostQuitMessage

 Block170:
	push 0xDA
	lea ecx,[ebp-0x78]
	call COutPacket::_ctor_1
	mov dword ptr [ebp-4],4
	call TSingleton<CConfig>::GetInstance
	cmp dword ptr [eax+0x98],0
	setne al
	movzx ecx,al
	push ecx
	lea ecx,[ebp-0x78]
	call COutPacket::Encode1
	call TSingleton<CConfig>::GetInstance
	cmp dword ptr [eax+0x9C],0
	setne dl
	movzx eax,dl
	push eax
	lea ecx,[ebp-0x78]
	call COutPacket::Encode1
	lea ecx,[ebp-0x78]
	push ecx
	call SendPacket
	add esp,4
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x78]
	call COutPacket::~COutPacket
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0xC4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CMonsterBookMan::~CMonsterBookMan
_SUB_EXCEPTION_HANDLER(5CA450)
__SUB_CLASS_THIS0(005CA450, __thiscall, 46765,  CMonsterBookMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CA450
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
	int 3// TODO: 	mov dword ptr [esi],offset CMonsterBookMan::`vftable'
	lea ecx,[esi+0xA0]
	mov dword ptr [esp+0x14],6
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x14],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MonsterBookStr>, long>::`vftable'
	call ZMap<long, ZRef<MonsterBookStr>, long>::RemoveAll
	lea ecx,[esi+0x70]
	mov byte ptr [esp+0x14],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, long, ZXString<char>>::RemoveAll
	lea ecx,[esi+0x58]
	mov byte ptr [esp+0x14],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, unsigned short, unsigned short>::`vftable'
	call ZMap<unsigned short, unsigned short, unsigned short>::RemoveAll
	lea ecx,[esi+0x40]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, unsigned short, unsigned short>::`vftable'
	call ZMap<unsigned short, unsigned short, unsigned short>::RemoveAll
	lea ecx,[esi+0x28]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MonsterBookCard>, long>::`vftable'
	call ZMap<long, ZRef<MonsterBookCard>, long>::RemoveAll
	push offset ZArray<ZRef<MonsterBookCard>>::~ZArray<ZRef<MonsterBookCard>>
	push 9
	push 4
	add esi,4
	push esi
	mov byte ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
	mov dword ptr [TSingleton<CMonsterBookMan>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMonsterBookMan::CMonsterBookMan
_SUB_EXCEPTION_HANDLER(5CA340)
__SUB_CLASS_THIS0(005CA340, __thiscall, 46763,  CMonsterBookMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CA340
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
	lea eax,[esi+4]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-4]
	mov dword ptr [TSingleton<CMonsterBookMan>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CMonsterBookMan>::ms_pInstance],edi

 Block3:
	push offset ZArray<ZRef<MonsterBookCard>>::~ZArray<ZRef<MonsterBookCard>>
	push offset ZArray<ZRef<MonsterBookCard>>::_ctor_default
	push 9
	push 4
	push eax
	mov dword ptr [esp+0x30],edi
	int 3// TODO: 	mov dword ptr [esi],offset CMonsterBookMan::`vftable'
	call __eh_vector_ctor_iterator
	lea ecx,[esi+0x28]
	mov ebx,0x1F
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MonsterBookCard>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<MonsterBookCard>, long>::_CalcAutoGrow
	lea ecx,[esi+0x40]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, unsigned short, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, unsigned short, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x58]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, unsigned short, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, unsigned short, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x70]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, long, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x88]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<MonsterBookStr>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<MonsterBookStr>, long>::_CalcAutoGrow
	mov dword ptr [esi+0xA0],edi
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
// CMonsterBookMan::LoadBook
__SUB_CLASS_THIS0(00264C10, __thiscall, 46766,  CMonsterBookMan, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CMonsterBookMan::LoadCard
	test eax,eax
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	ret

 Block2:
	mov ecx,esi
	call CMonsterBookMan::LoadStringA
	test eax,eax
	je Block1

 Block3:
	mov ecx,esi
	call CMonsterBookMan::LoadBookIcon
	neg eax
	sbb eax,eax
	neg eax
	pop esi
	ret
}
}
// CMonsterBookMan::LoadStringA
_SUB_EXCEPTION_HANDLER(263E30)
__SUB_CLASS_THIS0(00263E30, __thiscall, 46766,  CMonsterBookMan, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_263E30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x110
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x18],ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call edi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x3C]
	push edx
	mov dword ptr [ebp-4],esi
	call edi
	lea eax,[ebp-0x3C]
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
	push esi
	push esi
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp-0x3C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x8E5
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0xAC]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0xAC],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0xA4]
	xor edx,edx
	mov word ptr [ebp-0xAC],dx
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0xAC]
	push eax
	call edi

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x3C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x3C]
	push edx
	call edi

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x1C],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x1C]
	push ecx
	call edi

 Block21:
	mov ecx,dword ptr [ebp+0x4C]
	cmp ecx,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[ebp+0x14]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],8
	mov dword ptr [ebp+0x30],esi
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[ebp+0x30]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0xA
	cmp eax,esi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp+0xC],esi

 Block31:
	mov esi,dword ptr [ebp+0x30]
	test esi,esi
	je Block5

 Block32:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0xC]
	push edx
	lea eax,[ebp+0x20]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block175

 Block33:
	lea edx,[ebp+0x20]
	push edx
	lea eax,[ebp+0x38]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0xC
	test esi,esi
	je Block35

 Block34:
	mov eax,dword ptr [esi]
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	push eax
	call __wtoi
	push 0
	mov dword ptr [ebp+0x34],eax
	call ZRefCounted_AllocHelper<ZRefCountedDummy<MonsterBookStr>>::call
	mov dword ptr [eax+4],1
	add eax,0x10
	add esp,8
	mov dword ptr [ebp+0x48],eax
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block38

 Block37:
	add esi,8
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	lea ecx,[ebp-0xCC]
	push ecx
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xE
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	je Block41

 Block39:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x10]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov esi,ecx
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	jge Block41

 Block40:
	cmp eax,0x80004002
	jne Block1

 Block41:
	mov edi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0xCC],di
	jne Block44

 Block42:
	mov eax,dword ptr [ebp-0xC4]
	xor edx,edx
	mov word ptr [ebp-0xCC],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[ebp-0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x3CA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x12
	test esi,esi
	je Block5

 Block46:
	lea edx,[ebp-0x8C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x50],ebx
	test eax,eax
	je Block49

 Block47:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+8]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+8]
	mov dword ptr [ebp+0x50],ebx
	test eax,eax
	jge Block49

 Block48:
	cmp eax,0x80004002
	jne Block1

 Block49:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x8C],di
	jne Block52

 Block50:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	xor edi,edi
	nop

 Block54:
	test ebx,ebx
	je Block5

 Block55:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x64]
	push ecx
	push ebx
	mov dword ptr [ebp+0x64],0
	call edx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block57:
	cmp edi,dword ptr [ebp+0x64]
	jae Block63

 Block58:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x10C]
	mov byte ptr [ebp-4],0x16
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	mov ecx,dword ptr [ebp+0x48]
	add esp,8
	push 0xFFFFFFFF
	add ecx,0xC
	mov esi,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	cmp word ptr [ebp-0x10C],8
	mov byte ptr [ebp-4],0x15
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x104]
	xor ecx,ecx
	mov word ptr [ebp-0x10C],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc edi
	jmp Block54

 Block61:
	lea edx,[ebp-0x10C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	inc edi
	jmp Block54

 Block63:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0x8E9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x18
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x54],ebx
	test eax,eax
	je Block66

 Block64:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp]
	mov dword ptr [ebp+0x54],ebx
	test eax,eax
	jge Block66

 Block65:
	cmp eax,0x80004002
	jne Block1

 Block66:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x1B
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	xor edi,edi

 Block71:
	test ebx,ebx
	je Block5

 Block72:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x64]
	push eax
	push ebx
	mov dword ptr [ebp+0x64],0
	call ecx
	test eax,eax
	jge Block74

 Block73:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block74:
	cmp edi,dword ptr [ebp+0x64]
	jae Block80

 Block75:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0xEC]
	mov byte ptr [ebp-4],0x1C
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	mov ecx,dword ptr [ebp+0x48]
	add esp,8
	push 0xFFFFFFFF
	add ecx,0x10
	mov esi,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	cmp word ptr [ebp-0xEC],8
	mov byte ptr [ebp-4],0x1B
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [ebp-0xEC],ax
	mov eax,dword ptr [ebp-0xE4]
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc edi
	jmp Block71

 Block78:
	lea ecx,[ebp-0xEC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	inc edi
	jmp Block71

 Block80:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x8E8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x6C]
	mov byte ptr [ebp-4],0x1E
	push eax
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1F
	jne Block82

 Block81:
	mov ebx,dword ptr [eax+8]
	jmp Block83

 Block82:
	mov ebx,offset _S___3

 Block83:
	mov esi,dword ptr [ebp+0x48]
	lea edi,[esi+8]
	test ebx,ebx
	jne Block86

 Block84:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],ebx
	jmp Block87

 Block86:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ebp+0x48]

 Block87:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x1B
	jne Block102

 Block88:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block90:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block91:
	mov dword ptr [ebp+0x64],0
	lea eax,[ebp+0x1C]
	push 0x3CE
	push eax
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x34]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x1C]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x4C]
	push eax
	call edi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block94:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x22
	call edi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block95:
	mov eax,dword ptr [ebp+0x64]
	push 0
	push 0
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x23
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x24
	je Block5

 Block96:
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],0x23
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x25
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x60],edi
	test eax,eax
	je Block99

 Block97:
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
	mov edi,ecx
	mov dword ptr [ebp+0x60],edi
	test eax,eax
	jge Block99

 Block98:
	cmp eax,0x80004002
	jne Block1

 Block99:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x27
	jne Block103

 Block100:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block104

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block102:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x6C]
	push edx
	call ebx
	jmp Block91

 Block103:
	lea eax,[ebp-0x7C]
	push eax
	call ebx

 Block104:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x28
	jne Block107

 Block105:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea edx,[ebp-0x2C]
	push edx
	call ebx

 Block108:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x29
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[ebp-0x4C]
	push ecx
	call ebx

 Block112:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x3D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x2A
	test edi,edi
	je Block5

 Block113:
	lea eax,[ebp-0x9C]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x29
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2B
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	je Block116

 Block114:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x3C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	jge Block116

 Block115:
	cmp eax,0x80004002
	jne Block1

 Block116:
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],0x2D
	jne Block119

 Block117:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[ebp-0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push offset _S_DEFAULTHP
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x2E
	test ebx,ebx
	je Block5

 Block121:
	lea eax,[ebp-0xBC]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2D
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x2F
	jne Block125

 Block122:
	mov edi,dword ptr [eax+8]
	test edi,edi
	jne Block126

 Block123:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block127

 Block124:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi],edi
	jmp Block127

 Block125:
	mov edi,offset _S___3

 Block126:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov ebx,dword ptr [ebp+0x48]
	mov esi,eax
	push 0
	dec esi
	push esi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer
	mov esi,ebx
	mov ebx,dword ptr [ebp+0x5C]

 Block127:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0x2D
	jne Block130

 Block128:
	mov eax,dword ptr [ebp-0xB4]
	xor ecx,ecx
	mov word ptr [ebp-0xBC],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[ebp-0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block133

 Block132:
	cmp byte ptr [eax],0
	jne Block138

 Block133:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x678
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xDC]
	push ecx
	mov byte ptr [ebp-4],0x30
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x31
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xDC],8
	mov edi,eax
	mov byte ptr [ebp-4],0x2D
	jne Block136

 Block134:
	mov eax,dword ptr [ebp-0xD4]
	xor edx,edx
	mov word ptr [ebp-0xDC],dx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea eax,[ebp-0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block137:
	push edi
	push offset _S_D__1
	push esi
	call ZXString<char>::Format
	add esp,0xC

 Block138:
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push offset _S_DEFAULTMP
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0xFC]
	push ecx
	mov byte ptr [ebp-4],0x32
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2D
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x33
	jne Block140

 Block139:
	mov edi,dword ptr [eax+8]
	jmp Block141

 Block140:
	mov edi,offset _S___3

 Block141:
	lea ebx,[esi+4]
	test edi,edi
	jne Block144

 Block142:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [ebx],edi
	jmp Block145

 Block144:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer

 Block145:
	cmp word ptr [ebp-0xFC],8
	mov byte ptr [ebp-4],0x2D
	jne Block148

 Block146:
	mov eax,dword ptr [ebp-0xF4]
	xor edx,edx
	mov word ptr [ebp-0xFC],dx
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea eax,[ebp-0xFC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block151

 Block150:
	cmp byte ptr [eax],0
	jne Block156

 Block151:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x679
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x5C]
	lea edx,[ebp-0x11C]
	mov byte ptr [ebp-4],0x34
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x2D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x35
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x11C],8
	mov edi,eax
	mov byte ptr [ebp-4],0x2D
	jne Block154

 Block152:
	xor eax,eax
	mov word ptr [ebp-0x11C],ax
	mov eax,dword ptr [ebp-0x114]
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	push edi
	push offset _S_D__1
	push ebx
	call ZXString<char>::Format
	add esp,0xC
	jmp Block157

 Block154:
	lea ecx,[ebp-0x11C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	push edi
	push offset _S_D__1
	push ebx
	call ZXString<char>::Format
	add esp,0xC
	jmp Block157

 Block156:
	mov esi,dword ptr [ebp+0x5C]

 Block157:
	mov ecx,dword ptr [ebp+0x18]
	lea edx,[ebp+0x44]
	push edx
	lea eax,[ebp+0x34]
	push eax
	add ecx,0x88
	call ZMap<long, ZRef<MonsterBookStr>, long>::Insert
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x29
	call edx
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x20
	call edx
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block159

 Block158:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block159:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x15
	call edx
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x11
	call edx
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xD
	call edx
	mov esi,dword ptr [ebp+0x48]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0xC
	call ebx
	test eax,eax
	jne Block162

 Block160:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block162

 Block161:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block162:
	mov esi,dword ptr [ebp+0x38]
	xor edi,edi
	mov dword ptr [ebp+0x48],edi
	mov byte ptr [ebp-4],0xB
	cmp esi,edi
	je Block170

 Block163:
	lea eax,[esi+8]
	push eax
	call ebx
	test eax,eax
	jne Block169

 Block164:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block166

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block166:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block168

 Block167:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block168:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block169:
	mov dword ptr [ebp+0x38],edi

 Block170:
	cmp word ptr [ebp+0x20],8
	jne Block173

 Block171:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	cmp eax,edi
	je Block31

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block173:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,edi
	jge Block31

 Block174:
	jmp Block1

 Block175:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0xA
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
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],7
	call eax
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	mov eax,1
	lea esp,[ebp-0x12C]
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
// CWvsApp::ConnectLogin
_SUB_EXCEPTION_HANDLER(5C1B30)
__SUB_CLASS_THIS0(005C1B30, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C1B30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x3C],ecx
	jmp Block2

 Block2:
	call TSingleton<CClientSocket>::GetInstance
	mov dword ptr [ebp-0x10],eax
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::Close
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::ConnectLogin
	jmp Block4

 Block4:
	push 1
	push 0
	push 0
	push 0
	lea eax,[ebp-0x2C]
	push eax
	call PeekMessageA
	test eax,eax
	je Block20

 Block5:
	cmp dword ptr [ebp-0x28],0x401
	jne Block19

 Block6:
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::GetHandle
	cmp dword ptr [ebp-0x24],eax
	je Block8

 Block7:
	jmp Block22

 Block8:
	mov ecx,dword ptr [ebp-0x20]
	shr ecx,0x10
	and ecx,0xFFFF
	movzx edx,cx
	mov dword ptr [ebp-0x30],edx
	cmp dword ptr [ebp-0x30],0
	je Block12

 Block9:
	cmp dword ptr [ebp-0x30],0x2736
	je Block11

 Block10:
	push 0
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::OnConnect

 Block11:
	jmp Block18

 Block12:
	mov eax,dword ptr [ebp-0x20]
	and eax,0xFFFF
	movzx ecx,ax
	cmp ecx,0x10
	je Block14

 Block13:
	mov edx,dword ptr [ebp-0x20]
	and edx,0xFFFF
	movzx eax,dx
	cmp eax,1
	jne Block17

 Block14:
	push 1
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::OnConnect
	test eax,eax
	je Block16

 Block15:
	jmp Block23

 Block16:
	jmp Block18

 Block17:
	push 0
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::OnConnect

 Block18:
	jmp Block22

 Block19:
	lea ecx,[ebp-0x2C]
	push ecx
	call TranslateMessage
	lea edx,[ebp-0x2C]
	push edx
	call DispatchMessageA

 Block20:
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::IsTimeout
	test eax,eax
	je Block22

 Block21:
	push 0
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::OnConnect

 Block22:
	cmp dword ptr [ebp-0x28],0x12
	jne Block4

 Block23:
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::GetHandle
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [ebp-0x10]
	call CClientSocket::GetHandle
	cmp eax,0xFFFFFFFF
	jne Block26

 Block25:
	push 0x22000001
	lea ecx,[ebp-0x38]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x40],eax
	mov eax,dword ptr [ebp-0x40]
	mov dword ptr [ebp-0x44],eax
	mov dword ptr [ebp-4],0
	mov ecx,dword ptr [ebp-0x44]
	mov edx,dword ptr [ecx]
	mov dword ptr [ebp-0x34],edx
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x34]
	push eax
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x38]
	call CTerminateException::~CTerminateException

 Block26:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::GetClipboardText
_SUB_EXCEPTION_HANDLER(5CA200)
__SUB_CLASS_THIS0(005CA200, __thiscall, 52943,  CWvsApp, ZXString<char>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CA200
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x20],ecx
	mov dword ptr [ebp-0x1C],0
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[ebp-0x18]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],1
	mov dword ptr [ebp-0x10],0
	push 1
	call IsClipboardFormatAvailable
	test eax,eax
	jne Block2

 Block1:
	lea eax,[ebp-0x18]
	push eax
	mov ecx,dword ptr [ebp+8]
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [ebp-0x1C]
	or ecx,1
	mov dword ptr [ebp-0x1C],ecx
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x18]
	call ZXString<char>::~ZXString<char>
	mov eax,dword ptr [ebp+8]
	jmp Block9

 Block2:
	mov ecx,dword ptr [ebp-0x20]
	call CWvsApp::GetMainWindow
	push eax
	call OpenClipboard
	test eax,eax
	je Block8

 Block3:
	push 1
	call GetClipboardData
	mov dword ptr [ebp-0x14],eax
	cmp dword ptr [ebp-0x14],0
	je Block7

 Block4:
	mov edx,dword ptr [ebp-0x14]
	push edx
	call GlobalLock
	mov dword ptr [ebp-0x10],eax
	cmp dword ptr [ebp-0x10],0
	jne Block6

 Block5:
	call CloseClipboard
	lea eax,[ebp-0x18]
	push eax
	mov ecx,dword ptr [ebp+8]
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [ebp-0x1C]
	or ecx,1
	mov dword ptr [ebp-0x1C],ecx
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x18]
	call ZXString<char>::~ZXString<char>
	mov eax,dword ptr [ebp+8]
	jmp Block9

 Block6:
	mov edx,dword ptr [ebp-0x10]
	push edx
	lea ecx,[ebp-0x18]
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [ebp-0x14]
	push eax
	call GlobalUnlock

 Block7:
	call CloseClipboard

 Block8:
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,dword ptr [ebp+8]
	call ZXString<char>::_ctor_copy
	mov edx,dword ptr [ebp-0x1C]
	or edx,1
	mov dword ptr [ebp-0x1C],edx
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x18]
	call ZXString<char>::~ZXString<char>
	mov eax,dword ptr [ebp+8]

 Block9:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret 4
}
}
// PcCreateObject__com_ptr_t__com_IIID_IWzPackage___GUID_e610818b_038d_4522_9232_30fcd5f4737c___
__SUB(005C47A0, __cdecl, 78605,  void, const wchar_t*, _x_com_ptr<IWzPackage>&, IUnknown*) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block1:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov dword ptr [esi],0
	mov eax,dword ptr [_D__G_APFNPCOMAPIS]
	test eax,eax
	jne Block5

 Block4:
	mov eax,0x800401F0
	jmp Block6

 Block5:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push esi
	push offset __GUID_e610818b_038d_4522_9232_30fcd5f4737c
	push edx
	call eax
	add esp,0x10
	test eax,eax
	jge Block7

 Block6:
	mov dword ptr [esp+8],eax
	push offset _COM_ERROR_THROW_INFO
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset _com_error::`vftable'
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x18],0
	call _CxxThrowException

 Block7:
	pop esi
	add esp,0x10
	ret
}
}
// CMonsterBookMan::GetCard
_SUB_EXCEPTION_HANDLER(262930)
__SUB_CLASS_THIS(00262930, __thiscall, 46771,  CMonsterBookMan, ZRef<MonsterBookCard>*, ZRef<MonsterBookCard>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_262930
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+8],eax
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esi+4],eax
	mov dword ptr [esp+0x14],eax
	push esi
	lea eax,[esp+0x24]
	push eax
	add ecx,0x28
	mov dword ptr [esp+0x10],1
	call ZMap<long, ZRef<MonsterBookCard>, long>::GetAt
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CWvsApp::GetMainWindow
__SUB_CLASS_THIS0(00031900, __thiscall, 52926,  CWvsApp, HWND__*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
	ret
}
}
// PcCreateObject__com_ptr_t__com_IIID_IWzNameSpace___GUID_2aeeeb36_a4e1_4e2b_8f6f_2e7bdec5c53d___
__SUB(005C2F40, __cdecl, 78397,  void, const wchar_t*, _x_com_ptr<IWzNameSpace>&, IUnknown*) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block1:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov dword ptr [esi],0
	mov eax,dword ptr [_D__G_APFNPCOMAPIS]
	test eax,eax
	jne Block5

 Block4:
	mov eax,0x800401F0
	jmp Block6

 Block5:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push esi
	push offset __GUID_2aeeeb36_a4e1_4e2b_8f6f_2e7bdec5c53d
	push edx
	call eax
	add esp,0x10
	test eax,eax
	jge Block7

 Block6:
	mov dword ptr [esp+8],eax
	push offset _COM_ERROR_THROW_INFO
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset _com_error::`vftable'
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x18],0
	call _CxxThrowException

 Block7:
	pop esi
	add esp,0x10
	ret
}
}
// CWvsApp::GetTimeGap
__SUB_CLASS_THIS0(000ACFD0, __thiscall, 52934,  CWvsApp, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x38]
	ret
}
}
// CWvsApp::GetExceptionFileName
_SUB_EXCEPTION_HANDLER(5C79A0)
__SUB0(005C79A0, __cdecl, 52944,  const char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C79A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	movsx eax,byte ptr [_D_S_SFILENAME]
	test eax,eax
	jne Block5

 Block1:
	push 0x104
	push offset _D_S_SFILENAME
	call GetSystemDirectoryA
	mov dword ptr [ebp-0x10],eax
	push offset _D_S_SFILENAME
	call CWvsApp::Dir_SlashToBackSlash
	add esp,4
	cmp dword ptr [ebp-0x10],0
	je Block4

 Block2:
	mov ecx,dword ptr [ebp-0x10]
	movsx edx,byte ptr [ecx+_D_ASAUTOSPEAKING__4+23]
	cmp edx,0x5C
	je Block4

 Block3:
	mov eax,dword ptr [ebp-0x10]
	mov byte ptr [eax+_D_S_SFILENAME],0x5C
	mov ecx,dword ptr [ebp-0x10]
	add ecx,1
	mov dword ptr [ebp-0x10],ecx

 Block4:
	push 0x9F9
	lea edx,[ebp-0x14]
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0x18],eax
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x1C],eax
	mov dword ptr [ebp-4],0
	mov ecx,dword ptr [ebp-0x1C]
	call ZXString<char>::c_str
	push eax
	mov ecx,dword ptr [ebp-0x10]
	add ecx,offset _D_S_SFILENAME
	push ecx
	call lstrcatA
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x14]
	call ZXString<char>::~ZXString<char>

 Block5:
	mov eax,offset _D_S_SFILENAME
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::InitializePCOM
__SUB_CLASS_THIS0(005C16C0, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,8
	mov dword ptr [ebp-8],ecx
	push 0
	call PcInitialize
	add esp,4
	mov dword ptr [ebp-4],eax
	cmp dword ptr [ebp-4],0
	jge Block2

 Block1:
	push 0
	mov eax,dword ptr [ebp-4]
	push eax
	call _com_raise_error

 Block2:
	mov ecx,dword ptr [ebp-8]
	mov dword ptr [ecx+8],1
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::~CWvsApp
_SUB_EXCEPTION_HANDLER(5CA550)
__SUB_CLASS_THIS0(005CA550, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CA550
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],ecx
	mov eax,dword ptr [ebp-0x10]
	int 3// TODO: 	mov dword ptr [eax],offset CWvsApp::`vftable'
	mov dword ptr [ebp-4],3
	mov ecx,dword ptr [ebp-0x10]
	call CWvsApp::CleanUp
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [ebp-0x10]
	add ecx,0x7C
	call ZArray<unsigned char>::~ZArray<unsigned char>
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [ebp-0x10]
	add ecx,0x34
	call ZXString<char>::~ZXString<char>
	mov byte ptr [ebp-4],0
	mov ecx,dword ptr [ebp-0x10]
	add ecx,0x24
	call ZXString<char>::~ZXString<char>
	mov dword ptr [ebp-4],0xFFFFFFFF
	mov ecx,dword ptr [ebp-0x10]
	add ecx,4
	call TSingleton<CWvsApp>::~TSingleton<CWvsApp>
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::InitializeInput
__SUB_CLASS_THIS0(005C7E40, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x1B0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-4],eax
	push ebx
	push esi
	push edi
	mov dword ptr [ebp-0x194],ecx
	jmp Block2

 Block2:
	call TSingleton<CInputSystem>::CreateInstance
	mov eax,dword ptr [ebp-0x194]
	add eax,0x68
	push eax
	mov ecx,dword ptr [ebp-0x194]
	call CWvsApp::GetMainWindow
	push eax
	call TSingleton<CInputSystem>::GetInstance
	mov ecx,eax
	call CInputSystem::Init
	jmp Block45

 Block45:
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// get_sub
__SUB(005C1700, __cdecl, 78368,  _x_com_ptr<IWzNameSpace>&, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea eax,[eax*4+_D_G_SUB]
	ret
}
}
// CWvsApp::CreateWndManager
_SUB_EXCEPTION_HANDLER(5C2060)
__SUB_CLASS_THIS0(005C2060, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C2060
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x18],ecx
	push 0x13C
	call _operator_new
	add esp,4
	mov dword ptr [ebp-0x14],eax
	mov dword ptr [ebp-4],0
	cmp dword ptr [ebp-0x14],0
	je Block2

 Block1:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax+4]
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	call CWndMan::_ctor_0
	mov dword ptr [ebp-0x1C],eax
	jmp Block3

 Block2:
	mov dword ptr [ebp-0x1C],0

 Block3:
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-0x10],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	push 0
	push 1
	push 0
	push 1
	push 0x80000000
	push 0x300
	push 0x400
	push 0
	push 0
	call TSingleton<CWndMan>::GetInstance
	mov ecx,eax
	call CWnd::CreateWnd
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::CleanUp
_SUB_EXCEPTION_HANDLER(5C9120)
__SUB_CLASS_THIS0(005C9120, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C9120
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xF0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0xDC],ecx
	call TSingleton<CSequencedKeyMan>::DestroyInstance
	call get_stage
	mov ecx,eax
	call ZRef<CStage>::op_star_access
	test eax,eax
	je Block2

 Block1:
	push 0
	push 0
	call set_stage
	add esp,8

 Block2:
	call TSingleton<CFuncKeyMappedMan>::IsInstantiated
	test eax,eax
	je Block4

 Block3:
	call TSingleton<CFuncKeyMappedMan>::DestroyInstance

 Block4:
	call TSingleton<CQuickslotKeyMappedMan>::IsInstantiated
	test eax,eax
	je Block6

 Block5:
	call TSingleton<CQuickslotKeyMappedMan>::DestroyInstance

 Block6:
	call TSingleton<CMacroSysMan>::IsInstantiated
	test eax,eax
	je Block8

 Block7:
	call TSingleton<CMacroSysMan>::DestroyInstance

 Block8:
	call TSingleton<CBattleRecordMan>::IsInstantiated
	test eax,eax
	je Block10

 Block9:
	call TSingleton<CBattleRecordMan>::DestroyInstance

 Block10:
	call TSingleton<CClientSocket>::IsInstantiated
	test eax,eax
	je Block16

 Block11:
	call TSingleton<CClientSocket>::GetInstance
	mov ecx,eax
	call CClientSocket::WasGuestIDLogin
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [ebp-0xDC]
	call CWvsApp::ResetShowAdBalloon
	lea eax,[ebp-0x14]
	push eax
	call TSingleton<CClientSocket>::GetInstance
	mov ecx,eax
	call CClientSocket::GetGuestIDRegistrationURL
	mov dword ptr [ebp-0xE0],eax
	mov ecx,dword ptr [ebp-0xE0]
	mov dword ptr [ebp-0xE4],ecx
	mov dword ptr [ebp-4],0
	push 0
	mov ecx,dword ptr [ebp-0xE4]
	call ZXString<char>::c_str
	push eax
	call open_web_site
	add esp,8
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x14]
	call ZXString<char>::~ZXString<char>

 Block13:
	call TSingleton<CClientSocket>::GetInstance
	mov ecx,eax
	call CClientSocket::Close
	call TSingleton<CClientSocket>::GetInstance
	mov dword ptr [ebp-0x1C],eax
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-0x18],edx
	cmp dword ptr [ebp-0x18],0
	je Block15

 Block14:
	push 1
	mov eax,dword ptr [ebp-0x18]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x18]
	mov eax,dword ptr [edx]
	call eax
	mov dword ptr [ebp-0xE8],eax
	jmp Block16

 Block15:
	mov dword ptr [ebp-0xE8],0

 Block16:
	call CMobTemplate::Unload
	call CNpcTemplate::Unload
	call CPetTemplate::Unload
	call CReactorTemplate::Unload
	call CEmployeeTemplate::Unload
	call TSingleton<CInputSystem>::IsInstantiated
	test eax,eax
	je Block22

 Block17:
	call TSingleton<CInputSystem>::GetInstance
	mov ecx,eax
	call CInputSystem::Close
	call TSingleton<CInputSystem>::GetInstance
	mov dword ptr [ebp-0x24],eax
	mov ecx,dword ptr [ebp-0x24]
	mov dword ptr [ebp-0x20],ecx
	cmp dword ptr [ebp-0x20],0
	je Block21

 Block18:
	mov ecx,dword ptr [ebp-0x20]
	call CInputSystem::~CInputSystem
	mov edx,1
	and edx,1
	je Block20

 Block19:
	mov eax,dword ptr [ebp-0x20]
	push eax
	call _operator_delete_0
	add esp,4

 Block20:
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [ebp-0xEC],ecx
	jmp Block22

 Block21:
	mov dword ptr [ebp-0xEC],0

 Block22:
	call TSingleton<CRadioManager>::DestroyInstance
	call TSingleton<CSoundMan>::IsInstantiated
	test eax,eax
	je Block26

 Block23:
	call TSingleton<CSoundMan>::GetInstance
	mov ecx,eax
	call CSoundMan::Term
	call TSingleton<CSoundMan>::GetInstance
	mov dword ptr [ebp-0x2C],eax
	mov edx,dword ptr [ebp-0x2C]
	mov dword ptr [ebp-0x28],edx
	cmp dword ptr [ebp-0x28],0
	je Block25

 Block24:
	push 1
	mov eax,dword ptr [ebp-0x28]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x28]
	mov eax,dword ptr [edx]
	call eax
	mov dword ptr [ebp-0xF0],eax
	jmp Block26

 Block25:
	mov dword ptr [ebp-0xF0],0

 Block26:
	push 0x64
	call Sleep
	call clear_basic_font
	call TSingleton<CActionMan>::DestroyInstance
	call TSingleton<CQuestMan>::DestroyInstance
	call TSingleton<CMonsterBookMan>::DestroyInstance
	call TSingleton<CAnimationDisplayer>::DestroyInstance
	call TSingleton<CItemInfo>::DestroyInstance
	call TSingleton<CItemOptionInfo>::DestroyInstance
	call TSingleton<CItemMakerInfo>::DestroyInstance
	call TSingleton<CSkillInfo>::DestroyInstance
	call TSingleton<CMapleTVMan>::DestroyInstance
	call TSingleton<CCakePieEvent>::DestroyInstance
	call TSingleton<CStageSystem>::DestroyInstance
	call TSingleton<CWndMan>::IsInstantiated
	test eax,eax
	je Block28

 Block27:
	call TSingleton<CWndMan>::GetInstance
	mov ecx,eax
	call CWndMan::DestroyAll

 Block28:
	push 0
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_neq
	movzx ecx,al
	test ecx,ecx
	je Block30

 Block29:
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov dword ptr [ebp-0xF4],eax
	mov edx,dword ptr [ebp-0xF4]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp-0xF4]
	push ecx
	mov edx,dword ptr [eax+0x10]
	call edx
	push 0
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_assign_zero

 Block30:
	push 0x64
	call Sleep
	call TSingleton<CWvsContext>::GetInstance
	mov ecx,eax
	call CWvsContext::ReleaseCommodityRes
	push 0
	call get_rm
	mov ecx,eax
	call _x_com_ptr<IWzResMan>::op_assign_zero
	mov dword ptr [ebp-0x10],0
	jmp Block32

 Block31:
	mov eax,dword ptr [ebp-0x10]
	add eax,1
	mov dword ptr [ebp-0x10],eax

 Block32:
	cmp dword ptr [ebp-0x10],0xF
	jge Block34

 Block33:
	push 0
	mov ecx,dword ptr [ebp-0x10]
	push ecx
	call get_sub
	add esp,4
	mov ecx,eax
	call _x_com_ptr<IWzNameSpace>::op_assign_zero
	jmp Block31

 Block34:
	push 0
	call get_root
	mov ecx,eax
	call _x_com_ptr<IWzNameSpace>::op_assign_zero
	mov edx,dword ptr [ebp-0xDC]
	cmp dword ptr [edx+4],0
	je Block36

 Block35:
	push 0
	mov eax,dword ptr [ebp-0xDC]
	mov ecx,dword ptr [eax+4]
	push ecx
	call ShowWindow
	mov edx,dword ptr [ebp-0xDC]
	mov eax,dword ptr [edx+4]
	push eax
	call DestroyWindow
	push 0x4B2
	lea ecx,[ebp-0x30]
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0xF8],eax
	mov edx,dword ptr [ebp-0xF8]
	mov dword ptr [ebp-0xFC],edx
	mov dword ptr [ebp-4],1
	push 0
	call GetModuleHandleA
	push eax
	mov ecx,dword ptr [ebp-0xFC]
	call ZXString<char>::c_str
	push eax
	call UnregisterClassA
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x30]
	call ZXString<char>::~ZXString<char>
	mov eax,dword ptr [ebp-0xDC]
	mov dword ptr [eax+4],0

 Block36:
	mov ecx,dword ptr [ebp-0xDC]
	cmp dword ptr [ecx+8],0
	je Block38

 Block37:
	call PcUninitialize
	mov edx,dword ptr [ebp-0xDC]
	mov dword ptr [edx+8],0

 Block38:
	call DR_uninit
	call TSingleton<CSecurityClient>::IsInstantiated
	test eax,eax
	je Block40

 Block39:
	call TSingleton<CSecurityClient>::DestroyInstance

 Block40:
	call DeleteNstSafeDll
	mov ecx,dword ptr [ebp-0xDC]
	call CWvsApp::GetGameStartMode
	cmp eax,1
	jne Block42

 Block41:
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::DetachAuth
	jmp Block43

 Block42:
	call CNMCOClientObject::GetInstance
	mov ecx,eax
	call CNMCOClientObject::LogoutAuth

 Block43:
	call CNMManager::GetInstance
	mov ecx,eax
	call CNMManager::Finalize
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::GetOSCSDVersion
__SUB_CLASS_THIS0(005C7D60, __thiscall, 52943,  CWvsApp, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x24]
	mov dword ptr [esp],0
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block3

 Block2:
	mov edx,offset _S_
	jmp Block4

 Block3:
	mov edx,eax

 Block4:
	push edi
	mov edi,dword ptr [esp+0xC]
	mov dword ptr [edi],0
	test edx,edx
	je Block8

 Block5:
	mov eax,edx
	push esi
	lea esi,[eax+1]

 Block6:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block6

 Block7:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
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
	pop esi

 Block8:
	mov eax,edi
	pop edi
	pop ecx
	ret 4
}
}
// CWvsApp::Dir_BackSlashToSlash
__SUB(005C1710, __cdecl, 52941,  void, char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x18
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0xC],eax
	mov ecx,dword ptr [ebp-0xC]
	add ecx,1
	mov dword ptr [ebp-0x10],ecx

 Block1:
	mov edx,dword ptr [ebp-0xC]
	mov al,byte ptr [edx]
	mov byte ptr [ebp-0x11],al
	add dword ptr [ebp-0xC],1
	cmp byte ptr [ebp-0x11],0
	jne Block1

 Block2:
	mov ecx,dword ptr [ebp-0xC]
	sub ecx,dword ptr [ebp-0x10]
	mov dword ptr [ebp-0x18],ecx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [ebp-4],edx
	mov dword ptr [ebp-8],0
	jmp Block4

 Block3:
	mov eax,dword ptr [ebp-8]
	add eax,1
	mov dword ptr [ebp-8],eax

 Block4:
	mov ecx,dword ptr [ebp-8]
	cmp ecx,dword ptr [ebp-4]
	jge Block8

 Block5:
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ebp-8]
	movsx eax,byte ptr [edx]
	cmp eax,0x5C
	jne Block7

 Block6:
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [ebp-8]
	mov byte ptr [ecx],0x2F

 Block7:
	jmp Block3

 Block8:
	mov esp,ebp
	pop ebp
	ret
}
}
// CMonsterBookMan::LoadBookIcon
_SUB_EXCEPTION_HANDLER(262E70)
__SUB_CLASS_THIS0(00262E70, __thiscall, 46766,  CMonsterBookMan, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_262E70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
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
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x48]
	push eax
	call esi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x38]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp-0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea ecx,[ebp-0x48]
	push ecx
	lea edx,[ebp-0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	push 0xA3E
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x58]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x58],di
	jne Block16

 Block10:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block12:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x38],di
	jne Block17

 Block14:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	cmp eax,ebx
	je Block18

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block16:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x58]
	push eax
	call esi
	jmp Block13

 Block17:
	lea edx,[ebp-0x38]
	push edx
	call esi

 Block18:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x48],di
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x48]
	push ecx
	call esi

 Block22:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x20],esp
	push 0x95B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],8
	cmp edi,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[ebp-0x68]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	cmp word ptr [ebp-0x68],8
	mov byte ptr [ebp-4],0xB
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp-0x68]
	push edx
	call esi

 Block31:
	mov ebx,dword ptr [ebp-0x24]
	xor esi,esi
	mov dword ptr [ebp-0x1C],esi
	test ebx,ebx
	je Block5

 Block32:
	mov edi,edi

 Block33:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push ebx
	mov dword ptr [ebp-0x14],0
	call edx
	test eax,eax
	jge Block35

 Block34:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block35:
	cmp esi,dword ptr [ebp-0x14]
	jae Block51

 Block36:
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
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x78]
	mov byte ptr [ebp-4],0xC
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x14],esi
	test eax,eax
	je Block39

 Block37:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x20]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x20]
	mov esi,ecx
	mov dword ptr [ebp-0x14],esi
	test eax,eax
	jge Block39

 Block38:
	cmp eax,0x80004002
	jne Block1

 Block39:
	cmp word ptr [ebp-0x78],8
	mov byte ptr [ebp-4],0xF
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x70]
	xor edx,edx
	mov word ptr [ebp-0x78],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[ebp-0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov ecx,dword ptr [ebp-0x28]
	push 0xFFFFFFFF
	add ecx,0xA0
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	cmp edi,esi
	je Block48

 Block44:
	mov dword ptr [eax],esi
	test esi,esi
	je Block46

 Block45:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block46:
	test edi,edi
	je Block48

 Block47:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block48:
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block50

 Block49:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block50:
	inc dword ptr [ebp-0x1C]
	mov esi,dword ptr [ebp-0x1C]
	mov edi,dword ptr [ebp-0x18]
	jmp Block33

 Block51:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	mov eax,1
	lea esp,[ebp-0x88]
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
	ret
}
}
// CWvsApp::SetUp
_SUB_EXCEPTION_HANDLER(5CAFB0)
__SUB_CLASS_THIS0(005CAFB0, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CAFB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7D0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x14],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x7C4],ecx
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::InitializeAuth
	call timeGetTime
	push eax
	call _srand
	add esp,4
	jmp Block35

 Block35:
	call TSingleton<CSecurityClient>::IsInstantiated
	test eax,eax
	jne Block37

 Block36:
	call TSingleton<CSecurityClient>::CreateInstance

 Block37:
	call TSingleton<CSecurityClient>::IsInstantiated
	test eax,eax
	jmp Block39

 Block39:
	call TSingleton<CSecurityClient>::IsInstantiated
	test eax,eax
	jmp Block41

 Block41:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block43

 Block42:
	push 0xFFFFFFFF
	push offset _S_INITIALIZING
	lea ecx,[ebp-0x710]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],0
	lea ecx,[ebp-0x710]
	push ecx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x710]
	call ZXString<char>::~ZXString<char>

 Block43:
	call TSingleton<CConfig>::CreateInstance
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::InitializePCOM
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::CreateMainWindow
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block45

 Block44:
	push 0xFFFFFFFF
	push offset _S_OK
	lea ecx,[ebp-0x714]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],1
	lea edx,[ebp-0x714]
	push edx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x714]
	call ZXString<char>::~ZXString<char>

 Block45:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block47

 Block46:
	push 0xFFFFFFFF
	push offset _S_CONNECTINGTOSERV
	lea ecx,[ebp-0x718]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],2
	lea eax,[ebp-0x718]
	push eax
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x718]
	call ZXString<char>::~ZXString<char>

 Block47:
	call MSLoop_Remove
	call TSingleton<CClientSocket>::CreateInstance
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::ConnectLogin
	jmp Block72

 Block72:
	call TSingleton<CFuncKeyMappedMan>::CreateInstance
	call TSingleton<CQuickslotKeyMappedMan>::CreateInstance
	call TSingleton<CMacroSysMan>::CreateInstance
	call TSingleton<CBattleRecordMan>::CreateInstance
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::InitializeResMan
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block74

 Block73:
	push 0xFFFFFFFF
	push offset _S_OK
	lea ecx,[ebp-0x71C]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],3
	lea ecx,[ebp-0x71C]
	push ecx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x71C]
	call ZXString<char>::~ZXString<char>

 Block74:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block76

 Block75:
	push 0xFFFFFFFF
	push offset _S_GRAPHICSOUND
	lea ecx,[ebp-0x720]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],4
	lea edx,[ebp-0x720]
	push edx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x720]
	call ZXString<char>::~ZXString<char>

 Block76:
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::InitializeGr2D
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::InitializeInput
	push 5
	mov eax,dword ptr [ebp-0x7C4]
	mov ecx,dword ptr [eax+4]
	push ecx
	call ShowWindow
	mov edx,dword ptr [ebp-0x7C4]
	mov eax,dword ptr [edx+4]
	push eax
	call UpdateWindow
	mov ecx,dword ptr [ebp-0x7C4]
	mov edx,dword ptr [ecx+4]
	push edx
	call SetForegroundWindow
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::RenderFrame
	push 0x64
	call Sleep
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::InitializeSound
	push 0x64
	call Sleep
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block78

 Block77:
	push 0xFFFFFFFF
	push offset _S_OK
	lea ecx,[ebp-0x724]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],5
	lea eax,[ebp-0x724]
	push eax
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x724]
	call ZXString<char>::~ZXString<char>

 Block78:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block80

 Block79:
	push 0xFFFFFFFF
	push offset _S_LOADINGDATA
	lea ecx,[ebp-0x728]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],6
	lea ecx,[ebp-0x728]
	push ecx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x728]
	call ZXString<char>::~ZXString<char>

 Block80:
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::InitializeGameData
	call TSingleton<CQuestMan>::CreateInstance
	mov ecx,eax
	call CQuestMan::LoadDemand
	test eax,eax
	jne Block82

 Block81:
	push 0x22000006
	lea ecx,[ebp-0x730]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x7C8],eax
	mov edx,dword ptr [ebp-0x7C8]
	mov dword ptr [ebp-0x7CC],edx
	mov dword ptr [ebp-4],7
	mov eax,dword ptr [ebp-0x7CC]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x72C],ecx
	push offset CTerminateException::THROW_INFO
	lea edx,[ebp-0x72C]
	push edx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x730]
	call CTerminateException::~CTerminateException

 Block82:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block84

 Block83:
	push 0xFFFFFFFF
	push offset _S___8
	lea ecx,[ebp-0x734]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],8
	lea eax,[ebp-0x734]
	push eax
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x734]
	call ZXString<char>::~ZXString<char>

 Block84:
	call TSingleton<CQuestMan>::GetInstance
	mov ecx,eax
	call CQuestMan::LoadPartyQuestInfo
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block86

 Block85:
	push 0xFFFFFFFF
	push offset _S___8
	lea ecx,[ebp-0x738]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],9
	lea ecx,[ebp-0x738]
	push ecx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x738]
	call ZXString<char>::~ZXString<char>

 Block86:
	call TSingleton<CQuestMan>::GetInstance
	mov ecx,eax
	call CQuestMan::LoadExclusive
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block88

 Block87:
	push 0xFFFFFFFF
	push offset _S_OK
	lea ecx,[ebp-0x73C]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],0xA
	lea edx,[ebp-0x73C]
	push edx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x73C]
	call ZXString<char>::~ZXString<char>

 Block88:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block90

 Block89:
	push 0xFFFFFFFF
	push offset _S_COMPLETE
	lea ecx,[ebp-0x740]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],0xB
	lea eax,[ebp-0x740]
	push eax
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x740]
	call ZXString<char>::~ZXString<char>

 Block90:
	call TSingleton<CMonsterBookMan>::CreateInstance
	mov ecx,eax
	call CMonsterBookMan::LoadBook
	test eax,eax
	jne Block92

 Block91:
	push 0x22000006
	lea ecx,[ebp-0x748]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x7D0],eax
	mov ecx,dword ptr [ebp-0x7D0]
	mov dword ptr [ebp-0x7D4],ecx
	mov dword ptr [ebp-4],0xC
	mov edx,dword ptr [ebp-0x7D4]
	mov eax,dword ptr [edx]
	mov dword ptr [ebp-0x744],eax
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0x744]
	push ecx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x748]
	call CTerminateException::~CTerminateException

 Block92:
	mov ecx,dword ptr [ebp-0x7C4]
	call CWvsApp::CreateWndManager
	push 0
	push 0
	call TSingleton<CConfig>::GetInstance
	mov ecx,eax
	call CConfig::ApplySysOpt
	call TSingleton<CActionMan>::CreateInstance
	mov ecx,eax
	call CActionMan::Init
	call TSingleton<CAnimationDisplayer>::CreateInstance
	call TSingleton<CMapleTVMan>::CreateInstance
	mov ecx,eax
	call CMapleTVMan::Init
	call TSingleton<CRadioManager>::CreateInstance
	jmp Block116

 Block116:
	push 0x104
	lea ecx,[ebp-0x314]
	push ecx
	push 0
	call GetModuleFileNameA
	lea edx,[ebp-0x314]
	push edx
	call CWvsApp::Dir_BackSlashToSlash
	add esp,4
	lea eax,[ebp-0x314]
	push eax
	call CWvsApp::Dir_upDir
	add esp,4
	lea ecx,[ebp-0x314]
	push ecx
	call CWvsApp::Dir_SlashToBackSlash
	add esp,4
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x74C],esp
	push 0xFFFFFFFF
	lea edx,[ebp-0x314]
	push edx
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-0x7D8],eax
	call TSingleton<CConfig>::GetInstance
	mov ecx,eax
	call CConfig::CheckExecPathReg
	push 0x48
	call _operator_new
	add esp,4
	mov dword ptr [ebp-0x754],eax
	mov dword ptr [ebp-4],0xD
	cmp dword ptr [ebp-0x754],0
	je Block118

 Block117:
	mov ecx,dword ptr [ebp-0x754]
	call CLogo::_ctor_default
	mov dword ptr [ebp-0x7DC],eax
	jmp Block119

 Block118:
	mov dword ptr [ebp-0x7DC],0

 Block119:
	mov eax,dword ptr [ebp-0x7DC]
	mov dword ptr [ebp-0x750],eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	push 0
	mov ecx,dword ptr [ebp-0x750]
	push ecx
	call set_stage
	add esp,8
	mov dword ptr [ebp-0x358],0xDD10EE12
	mov dword ptr [ebp-0x704],0
	jmp Block121

 Block120:
	mov edx,dword ptr [ebp-0x704]
	add edx,1
	mov dword ptr [ebp-0x704],edx

 Block121:
	cmp dword ptr [ebp-0x704],0x100
	jge Block130

 Block122:
	mov eax,dword ptr [ebp-0x704]
	mov dword ptr [ebp-0x708],eax
	mov dword ptr [ebp-0x70C],8
	jmp Block124

 Block123:
	mov ecx,dword ptr [ebp-0x70C]
	sub ecx,1
	mov dword ptr [ebp-0x70C],ecx

 Block124:
	cmp dword ptr [ebp-0x70C],0
	jle Block129

 Block125:
	mov edx,dword ptr [ebp-0x708]
	and edx,1
	je Block127

 Block126:
	mov eax,dword ptr [ebp-0x708]
	shr eax,1
	mov ecx,dword ptr [ebp-0x358]
	sub ecx,0x191
	xor eax,ecx
	mov dword ptr [ebp-0x708],eax
	jmp Block128

 Block127:
	mov edx,dword ptr [ebp-0x708]
	shr edx,1
	mov dword ptr [ebp-0x708],edx

 Block128:
	jmp Block123

 Block129:
	mov eax,dword ptr [ebp-0x704]
	mov ecx,dword ptr [ebp-0x708]
	mov dword ptr [eax*4+_D_G_CRC32TABLE],ecx
	jmp Block120

 Block130:
	jmp Block132

 Block132:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x14]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CMonsterBookMan::LoadCard
_SUB_EXCEPTION_HANDLER(2634B0)
__SUB_CLASS_THIS0(002634B0, __thiscall, 46766,  CMonsterBookMan, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2634B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xE4]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x74]
	push eax
	call ebp
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x64]
	push edx
	mov dword ptr [esp+0xF0],esi
	call ebp
	lea eax,[esp+0x64]
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
	push esi
	push esi
	lea ecx,[esp+0x7C]
	push ecx
	lea edx,[esp+0x70]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xF20
	push eax
	mov byte ptr [esp+0x108],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x100],2
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0xA8]
	push ecx
	mov byte ptr [esp+0x104],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xF4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0xEC],5
	cmp word ptr [esp+0x94],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x94]
	push eax
	call edi

 Block13:
	mov byte ptr [esp+0xEC],6
	cmp word ptr [esp+0x64],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x64]
	push edx
	call edi

 Block17:
	mov byte ptr [esp+0xEC],7
	cmp word ptr [esp+0x74],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x74]
	push ecx
	call edi

 Block21:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x60]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xF0],8
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[esp+0x30]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xEC],0xA
	cmp eax,esi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[esp+0x3C]
	push eax
	call ebp
	mov byte ptr [esp+0xEC],0xB
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x58],esi
	jmp Block32

 Block32:
	mov esi,dword ptr [esp+0x2C]
	test esi,esi
	je Block5

 Block33:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block110

 Block34:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x2C]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x28]
	test esi,esi
	je Block36

 Block35:
	mov eax,dword ptr [esi]
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	push eax
	call __wtoi
	mov ebx,eax
	lea ecx,[ebx-0x2450E0]
	mov eax,0x10624DD3
	imul ecx
	add esp,4
	sar edx,6
	push 0
	mov edi,edx
	push 0
	shr edi,0x1F
	push ecx
	add edi,edx
	mov eax,esp
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block39

 Block38:
	add esi,8
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	lea ecx,[esp+0xD0]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0xFC],0xD
	mov byte ptr [esp+0xFC],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0xE
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x30],esi
	test eax,eax
	je Block42

 Block40:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x50]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x50]
	mov esi,ecx
	mov dword ptr [esp+0x30],esi
	test eax,eax
	jge Block42

 Block41:
	cmp eax,0x80004002
	jne Block1

 Block42:
	cmp word ptr [esp+0xC4],8
	mov byte ptr [esp+0xEC],0x10
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xF8],0x11
	test esi,esi
	je Block5

 Block47:
	lea edx,[esp+0xB0]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xFC],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x12
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x38],ebp
	test eax,eax
	je Block50

 Block48:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x4C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x4C]
	mov ebp,ecx
	mov dword ptr [esp+0x38],ebp
	test eax,eax
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block1

 Block50:
	cmp word ptr [esp+0xA4],8
	mov byte ptr [esp+0xEC],0x14
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<MonsterBookCard>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x88],esi
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x666
	push ecx
	mov byte ptr [esp+0xFC],0x15
	mov dword ptr [esi],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xF4],0x16
	test ebp,ebp
	je Block5

 Block55:
	lea edx,[esp+0xBC]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xF8],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xF4],0x17
	call get_int32
	mov ebx,8
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [esp+0xEC],0x15
	cmp word ptr [esp+0xB4],bx
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0xB4],ax
	mov eax,dword ptr [esp+0xBC]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0xB4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esi+8],edi
	mov eax,dword ptr [edx+edi*4+4]
	lea edi,[edx+edi*4+4]
	mov dword ptr [esp+0x14],edi
	test eax,eax
	je Block61

 Block60:
	mov eax,dword ptr [eax-4]

 Block61:
	push 0
	push 0
	push ecx
	mov dword ptr [esi+0xC],eax
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x661
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0xE0]
	push ecx
	mov byte ptr [esp+0xFC],0x18
	mov ecx,ebp
	mov byte ptr [esp+0xFC],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x19
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block69

 Block62:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x5C]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov edi,eax
	xor eax,eax
	test edi,edi
	setl al
	dec eax
	and eax,dword ptr [esp+0x5C]
	mov ebp,eax
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov dword ptr [esi+0x10],ebp
	test edi,edi
	jge Block66

 Block65:
	cmp edi,0x80004002
	jne Block109

 Block66:
	mov byte ptr [esp+0xEC],0x15
	cmp word ptr [esp+0xD4],bx
	jne Block71

 Block67:
	xor eax,eax
	mov word ptr [esp+0xD4],ax
	mov eax,dword ptr [esp+0xDC]
	test eax,eax
	je Block72

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block69:
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block66

 Block70:
	mov dword ptr [esi+0x10],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block66

 Block71:
	lea ecx,[esp+0xD4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov edx,dword ptr [esi+4]
	push edx
	call CMobTemplate::GetMobTemplate
	mov ebp,eax
	add esp,4
	mov dword ptr [esp+0x90],ebp
	test ebp,ebp
	je Block74

 Block73:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block74:
	mov byte ptr [esp+0xEC],0x1A
	test ebp,ebp
	je Block83

 Block75:
	lea ecx,[ebp+0x30]
	push ecx
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::op_assign
	push 0
	push 0
	push offset _S___2
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xF8],0x1B
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	je Block81

 Block76:
	jmp Block78

 Block78:
	push offset _S_
	push offset _S___2
	lea edx,[esp+0x5C]
	push edx
	lea ecx,[esp+0x24]
	call ZXString<char>::Replace
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xF0],0x1C
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xEC],0x1B
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	push 0
	push 0
	push offset _S___2
	lea ecx,[esp+0x24]
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	jne Block78

 Block81:
	mov ecx,dword ptr [esp+0x20]
	push esi
	lea eax,[esp+0x1C]
	push eax
	add ecx,0x70
	call ZMap<ZXString<char>, long, ZXString<char>>::Insert
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xEC],0x1A
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block83:
	mov ecx,dword ptr [esp+0x14]
	push 0xFFFFFFFF
	call ZArray<ZRef<MonsterBookCard>>::InsertBefore
	lea ebx,[esi-0x10]
	lea ecx,[ebx+4]
	push ecx
	mov edi,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block88

 Block84:
	lea ebp,[eax-0x10]
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block87

 Block85:
	lea eax,[ebp+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block87

 Block86:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block87:
	mov ebp,dword ptr [esp+0x90]
	mov dword ptr [edi+4],0

 Block88:
	lea ecx,[esp+0x84]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x38]
	push edx
	add ecx,0x28
	mov dword ptr [edi+4],esi
	call ZMap<long, ZRef<MonsterBookCard>, long>::Insert
	mov esi,dword ptr [esp+0x34]
	mov edi,dword ptr [esp+0x20]
	add esi,0xFFFFAF20
	lea ecx,[esp+0x14]
	movzx eax,si
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea ecx,[edi+0x40]
	mov dword ptr [esp+0x1C],eax
	call ZMap<unsigned short, unsigned short, unsigned short>::Insert
	lea ecx,[esp+0x1C]
	movzx eax,si
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea ecx,[edi+0x58]
	mov dword ptr [esp+0x1C],eax
	call ZMap<unsigned short, unsigned short, unsigned short>::Insert
	inc dword ptr [esp+0x1C]
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0xEC],0x15
	test ebp,ebp
	je Block92

 Block89:
	lea esi,[ebp+4]
	push esi
	call edi
	test eax,eax
	jne Block91

 Block90:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block91:
	xor ebp,ebp
	mov dword ptr [esp+0x90],ebp
	jmp Block93

 Block92:
	xor ebp,ebp

 Block93:
	lea esi,[ebx+4]
	push esi
	mov byte ptr [esp+0xF0],0x14
	call edi
	test eax,eax
	jne Block96

 Block94:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp ebx,ebp
	je Block96

 Block95:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block96:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x8C],ebp
	mov byte ptr [esp+0xF0],0x10
	call edx
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xF0],0xC
	call edx
	mov esi,dword ptr [esp+0x28]
	mov byte ptr [esp+0xEC],0xB
	cmp esi,ebp
	je Block104

 Block97:
	lea eax,[esi+8]
	push eax
	call edi
	test eax,eax
	jne Block103

 Block98:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block100

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block100:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block102

 Block101:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block102:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block103:
	mov dword ptr [esp+0x28],ebp

 Block104:
	cmp word ptr [esp+0x3C],8
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block32

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block107:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebp
	jge Block32

 Block108:
	jmp Block1

 Block109:
	push edi
	call _com_issue_error

 Block110:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xEC],0xA
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xF0],7
	call eax
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0xF0],0xFFFFFFFF
	call edx
	mov eax,1
	mov ecx,dword ptr [esp+0xE4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xDC
	ret
}
}
// CWvsApp::ExtractZExceptionCode
__SUB_CLASS_THIS(005C0830, __thiscall, 52933,  CWvsApp, int32_t, HRESULT&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x48]
	xor edx,edx
	cmp eax,edx
	jne Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	push esi
	mov esi,dword ptr [esp+8]
	mov dword ptr [esi],eax
	mov dword ptr [ecx+0x4C],edx
	mov dword ptr [ecx+0x48],edx
	mov eax,1
	pop esi
	ret 4
}
}
// CWvsApp::GetAutoConnect
__SUB_CLASS_THIS0(005C08C0, __thiscall, 52936,  CWvsApp, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x28]
	ret
}
}
// PcCreateObject__com_ptr_t__com_IIID_IWzResMan___GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf___
__SUB(005C2EB0, __cdecl, 78392,  void, const wchar_t*, _x_com_ptr<IWzResMan>&, IUnknown*) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block1:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov dword ptr [esi],0
	mov eax,dword ptr [_D__G_APFNPCOMAPIS]
	test eax,eax
	jne Block5

 Block4:
	mov eax,0x800401F0
	jmp Block6

 Block5:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push esi
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push edx
	call eax
	add esp,0x10
	test eax,eax
	jge Block7

 Block6:
	mov dword ptr [esp+8],eax
	push offset _COM_ERROR_THROW_INFO
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset _com_error::`vftable'
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x18],0
	call _CxxThrowException

 Block7:
	pop esi
	add esp,0x10
	ret
}
}
// CWvsApp::ExtractComErrorCode
__SUB_CLASS_THIS(005C0860, __thiscall, 52933,  CWvsApp, int32_t, HRESULT&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x4C]
	xor edx,edx
	cmp eax,edx
	jne Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	push esi
	mov esi,dword ptr [esp+8]
	mov dword ptr [esi],eax
	mov dword ptr [ecx+0x4C],edx
	mov dword ptr [ecx+0x48],edx
	mov eax,1
	pop esi
	ret 4
}
}
// CWvsApp::WindowProc
_SUB_EXCEPTION_HANDLER(5CC2B0)
// 9CC614
static uint8_t _SUB_5CC2B0_LOOKUP_TABLE_0[32] = {
0, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 
};
__SUB(005CC2B0, __stdcall, 52939,  long, HWND__*, uint32_t, uint32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CC2B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	xor ebx,ebx
	cmp dword ptr [TSingleton<CWvsApp>::ms_pInstance],ebx
	je Block24

 Block1:
	call InSendMessage
	test eax,eax
	jne Block24

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov edi,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov dword ptr [ebp-0x18],edi
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x14],ebx
	cmp ecx,ebx
	je Block5

 Block3:
	lea eax,[ebp-0x14]
	push eax
	lea edx,[ebp+0x14]
	push edx
	lea eax,[ebp+0x10]
	push eax
	lea edx,[ebp+0xC]
	push edx
	call CWndMan::TranslateMessage
	cmp eax,ebx
	je Block5

 Block4:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x10

 Block5:
	mov eax,dword ptr [ebp+0xC]
	cmp eax,0x20
	ja Block26

 Block6:
	je Block25

 Block7:
	sub eax,2
	je Block23

 Block8:
	sub eax,4
	je Block11

 Block9:
	sub eax,9
	jne Block51

 Block10:
	mov eax,dword ptr [ebp+8]
	push ebx
	push eax
	call ValidateRect
	jmp Block51

 Block11:
	xor ecx,ecx
	cmp word ptr [ebp+0x10],bx
	sete cl
	push ecx
	mov ecx,edi
	call CWvsApp::EnableWinKey
	cmp word ptr [ebp+0x10],bx
	jne Block22

 Block12:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	cmp esi,ebx
	je Block15

 Block13:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CCashShop::ms_RTTI_CCashShop
	call eax
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,esi
	call CCashShop::TrySendQueryCashRequest

 Block15:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	cmp ecx,ebx
	je Block17

 Block16:
	call CInputSystem::OnActivate

 Block17:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp ecx,ebx
	je Block20

 Block18:
	cmp dword ptr [ecx+0x4690],ebx
	je Block20

 Block19:
	call CUserLocal::OnKeyDownSkillEnd

 Block20:
	cmp word ptr [ebp+0x10],bx
	jne Block22

 Block21:
	mov dword ptr [edi+0x88],ebx
	jmp Block51

 Block22:
	mov dword ptr [edi+0x88],1
	jmp Block51

 Block23:
	push ebx
	call PostQuitMessage

 Block24:
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x10

 Block25:
	push ebx
	call SetCursor
	jmp Block51

 Block26:
	sub eax,0x104
	je Block50

 Block27:
	sub eax,0xE
	je Block40

 Block28:
	sub eax,0x2EF
	jne Block51

 Block29:
	mov esi,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	cmp esi,ebx
	je Block51

 Block30:
	mov eax,dword ptr [esi+8]
	cmp eax,dword ptr [ebp+0x10]
	jne Block51

 Block31:
	push offset _D_G_PSTAGE
	lea ecx,[ebp-0x28]
	call ZRef<CStage>::_ctor_copy
	mov ecx,dword ptr [ebp+0x14]
	mov eax,ecx
	shr eax,0x10
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block33

 Block32:
	push eax
	mov ecx,esi
	call CClientSocket::OnError
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],bl
	call ZRef<CStage>::~ZRef<CStage>
	jmp Block51

 Block33:
	movzx eax,cx
	dec eax
	cmp eax,0x1F
	ja Block39

 Block34:
	movzx ecx,byte ptr [eax+_SUB_5CC2B0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block36
cmp ECX, 1
je Block37
cmp ECX, 2
je Block35
cmp ECX, 3
je Block38
cmp ECX, 4
je Block39


 Block35:
	push 1
	mov ecx,esi
	call CClientSocket::OnConnect
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],bl
	call ZRef<CStage>::~ZRef<CStage>
	jmp Block51

 Block36:
	mov ecx,esi
	call CClientSocket::OnRead
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],bl
	call ZRef<CStage>::~ZRef<CStage>
	jmp Block51

 Block37:
	mov ecx,esi
	call CClientSocket::Flush
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],bl
	call ZRef<CStage>::~ZRef<CStage>
	jmp Block51

 Block38:
	mov ecx,esi
	call CClientSocket::OnClose

 Block39:
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],bl
	call ZRef<CStage>::~ZRef<CStage>
	jmp Block51

 Block40:
	mov ecx,dword ptr [ebp+0x10]
	mov eax,ecx
	and eax,0xFFF0
	cmp eax,0xF100
	je Block24

 Block41:
	cmp eax,0xF030
	jne Block47

 Block42:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	push 1
	call IWzGr2D::PutfullScreen
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov esi,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call IWzGr2D::GetfullScreen
	mov dword ptr [esi+0x9C],eax
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	call CConfig::SaveGlobal
	jmp Block24

 Block47:
	cmp ecx,0xF060
	jne Block51

 Block48:
	call CUILogoutGift::TryShowLogoutGiftDialog
	cmp eax,ebx
	jne Block51

 Block49:
	jmp Block24

 Block50:
	cmp dword ptr [ebp+0x10],0x73
	je Block24

 Block51:
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+8]
	push eax
	push ecx
	push edx
	call DefWindowProcA
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x10
}
}
// PcSetRootNameSpace
__SUB(005C0AE0, __cdecl, 78354,  HRESULT, IUnknown*) {
__asm {

 Block0:
	mov eax,dword ptr [_D__G_APFNPCOMAPIS+16]
	lea ecx,[esp+4]
	push 1
	push ecx
	call eax
	add esp,8
	ret
}
}
// CWvsApp::InitializeGameData
_SUB_EXCEPTION_HANDLER(5C8440)
__SUB_CLASS_THIS0(005C8440, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C8440
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x11C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0xC4],ecx
	call TSingleton<CItemInfo>::CreateInstance
	call TSingleton<CItemInfo>::GetInstance
	mov ecx,eax
	call CItemInfo::IterateItemInfo
	test eax,eax
	jne Block2

 Block1:
	push 0x22000006
	lea ecx,[ebp-0x14]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0xC8],eax
	mov eax,dword ptr [ebp-0xC8]
	mov dword ptr [ebp-0xCC],eax
	mov dword ptr [ebp-4],0
	mov ecx,dword ptr [ebp-0xCC]
	mov edx,dword ptr [ecx]
	mov dword ptr [ebp-0x10],edx
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x10]
	push eax
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x14]
	call CTerminateException::~CTerminateException

 Block2:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block4

 Block3:
	push 0xFFFFFFFF
	push offset _S___8
	lea ecx,[ebp-0x18]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],1
	lea ecx,[ebp-0x18]
	push ecx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x18]
	call ZXString<char>::~ZXString<char>

 Block4:
	call TSingleton<CItemMakerInfo>::CreateInstance
	call TSingleton<CItemMakerInfo>::GetInstance
	mov ecx,eax
	call CItemMakerInfo::Load
	test eax,eax
	jne Block6

 Block5:
	push 0x22000006
	lea ecx,[ebp-0x20]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0xD0],eax
	mov edx,dword ptr [ebp-0xD0]
	mov dword ptr [ebp-0xD4],edx
	mov dword ptr [ebp-4],2
	mov eax,dword ptr [ebp-0xD4]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x1C],ecx
	push offset CTerminateException::THROW_INFO
	lea edx,[ebp-0x1C]
	push edx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x20]
	call CTerminateException::~CTerminateException

 Block6:
	call TSingleton<CItemOptionInfo>::CreateInstance
	call TSingleton<CItemOptionInfo>::GetInstance
	mov ecx,eax
	call CItemOptionInfo::IterateItemOptionInfo
	test eax,eax
	jne Block8

 Block7:
	push 0x22000006
	lea ecx,[ebp-0x28]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0xD8],eax
	mov eax,dword ptr [ebp-0xD8]
	mov dword ptr [ebp-0xDC],eax
	mov dword ptr [ebp-4],3
	mov ecx,dword ptr [ebp-0xDC]
	mov edx,dword ptr [ecx]
	mov dword ptr [ebp-0x24],edx
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x24]
	push eax
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x28]
	call CTerminateException::~CTerminateException

 Block8:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block10

 Block9:
	push 0xFFFFFFFF
	push offset _S___8
	lea ecx,[ebp-0x2C]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],4
	lea ecx,[ebp-0x2C]
	push ecx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x2C]
	call ZXString<char>::~ZXString<char>

 Block10:
	call TSingleton<CPartyQuestInfoManager>::CreateInstance
	call TSingleton<CPartyQuestInfoManager>::GetInstance
	mov ecx,eax
	call CPartyQuestInfoManager::Load
	test eax,eax
	jne Block12

 Block11:
	push 0x22000006
	lea ecx,[ebp-0x34]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0xE0],eax
	mov edx,dword ptr [ebp-0xE0]
	mov dword ptr [ebp-0xE4],edx
	mov dword ptr [ebp-4],5
	mov eax,dword ptr [ebp-0xE4]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x30],ecx
	push offset CTerminateException::THROW_INFO
	lea edx,[ebp-0x30]
	push edx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x34]
	call CTerminateException::~CTerminateException

 Block12:
	call CMobTemplate::Load
	call CMorphTemplate::Load
	call CTamingMobTemplate::Load
	call CNpcTemplate::Load
	call CPetTemplate::Load
	call CReactorTemplate::Load
	call CEmployeeTemplate::Load
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block14

 Block13:
	push 0xFFFFFFFF
	push offset _S___8
	lea ecx,[ebp-0x38]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],6
	lea eax,[ebp-0x38]
	push eax
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x38]
	call ZXString<char>::~ZXString<char>

 Block14:
	push 0x20
	call _operator_new
	add esp,4
	mov dword ptr [ebp-0x40],eax
	cmp dword ptr [ebp-0x40],0
	je Block16

 Block15:
	mov ecx,dword ptr [ebp-0x40]
	call CCakePieEvent::_ctor_default
	mov dword ptr [ebp-0xE8],eax
	jmp Block17

 Block16:
	mov dword ptr [ebp-0xE8],0

 Block17:
	mov ecx,dword ptr [ebp-0xE8]
	mov dword ptr [ebp-0x3C],ecx
	call TSingleton<CSkillInfo>::CreateInstance
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::IterateSkillInfo
	test eax,eax
	jne Block19

 Block18:
	push 0x22000006
	lea ecx,[ebp-0x48]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0xEC],eax
	mov edx,dword ptr [ebp-0xEC]
	mov dword ptr [ebp-0xF0],edx
	mov dword ptr [ebp-4],7
	mov eax,dword ptr [ebp-0xF0]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x44],ecx
	push offset CTerminateException::THROW_INFO
	lea edx,[ebp-0x44]
	push edx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x48]
	call CTerminateException::~CTerminateException

 Block19:
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::LoadMobSkill
	test eax,eax
	jne Block21

 Block20:
	push 0x22000006
	lea ecx,[ebp-0x50]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0xF4],eax
	mov eax,dword ptr [ebp-0xF4]
	mov dword ptr [ebp-0xF8],eax
	mov dword ptr [ebp-4],8
	mov ecx,dword ptr [ebp-0xF8]
	mov edx,dword ptr [ecx]
	mov dword ptr [ebp-0x4C],edx
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x4C]
	push eax
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x50]
	call CTerminateException::~CTerminateException

 Block21:
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::LoadMCSkill
	test eax,eax
	jne Block23

 Block22:
	push 0x22000006
	lea ecx,[ebp-0x58]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0xFC],eax
	mov ecx,dword ptr [ebp-0xFC]
	mov dword ptr [ebp-0x100],ecx
	mov dword ptr [ebp-4],9
	mov edx,dword ptr [ebp-0x100]
	mov eax,dword ptr [edx]
	mov dword ptr [ebp-0x54],eax
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0x54]
	push ecx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x58]
	call CTerminateException::~CTerminateException

 Block23:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block25

 Block24:
	push 0xFFFFFFFF
	push offset _S___8
	lea ecx,[ebp-0x5C]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],0xA
	lea edx,[ebp-0x5C]
	push edx
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x5C]
	call ZXString<char>::~ZXString<char>

 Block25:
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::LoadMCGuardian
	test eax,eax
	jne Block27

 Block26:
	push 0x22000006
	lea ecx,[ebp-0x64]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x104],eax
	mov eax,dword ptr [ebp-0x104]
	mov dword ptr [ebp-0x108],eax
	mov dword ptr [ebp-4],0xB
	mov ecx,dword ptr [ebp-0x108]
	mov edx,dword ptr [ecx]
	mov dword ptr [ebp-0x60],edx
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x60]
	push eax
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x64]
	call CTerminateException::~CTerminateException

 Block27:
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::LoadItemSkill
	test eax,eax
	jne Block29

 Block28:
	push 0x22000006
	lea ecx,[ebp-0x6C]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x10C],eax
	mov ecx,dword ptr [ebp-0x10C]
	mov dword ptr [ebp-0x110],ecx
	mov dword ptr [ebp-4],0xC
	mov edx,dword ptr [ebp-0x110]
	mov eax,dword ptr [edx]
	mov dword ptr [ebp-0x68],eax
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0x68]
	push ecx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x6C]
	call CTerminateException::~CTerminateException

 Block29:
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::LoadItemOptionSkill
	test eax,eax
	jne Block31

 Block30:
	push 0x22000006
	lea ecx,[ebp-0x74]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x114],eax
	mov edx,dword ptr [ebp-0x114]
	mov dword ptr [ebp-0x118],edx
	mov dword ptr [ebp-4],0xD
	mov eax,dword ptr [ebp-0x118]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x70],ecx
	push offset CTerminateException::THROW_INFO
	lea edx,[ebp-0x70]
	push edx
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x74]
	call CTerminateException::~CTerminateException

 Block31:
	call TSingleton<CSplashScreen>::IsInstantiated
	test eax,eax
	je Block33

 Block32:
	push 0xFFFFFFFF
	push offset _S___8
	lea ecx,[ebp-0x78]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],0xE
	lea eax,[ebp-0x78]
	push eax
	call TSingleton<CSplashScreen>::GetInstance
	mov ecx,eax
	call CSplashScreen::Log
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x78]
	call ZXString<char>::~ZXString<char>

 Block33:
	call CalcDamage::LoadStandardPDD
	call TSingleton<CSequencedKeyMan>::CreateInstance
	push 0x1C
	call _operator_new
	add esp,4
	mov dword ptr [ebp-0x80],eax
	mov dword ptr [ebp-4],0xF
	cmp dword ptr [ebp-0x80],0
	je Block35

 Block34:
	mov ecx,dword ptr [ebp-0x80]
	call CClientOptMan::_ctor_default
	mov dword ptr [ebp-0x11C],eax
	jmp Block36

 Block35:
	mov dword ptr [ebp-0x11C],0

 Block36:
	mov ecx,dword ptr [ebp-0x11C]
	mov dword ptr [ebp-0x7C],ecx
	mov dword ptr [ebp-4],0xFFFFFFFF
	push 0x74
	call _operator_new
	add esp,4
	mov dword ptr [ebp-0x88],eax
	mov dword ptr [ebp-4],0x10
	cmp dword ptr [ebp-0x88],0
	je Block38

 Block37:
	mov ecx,dword ptr [ebp-0x88]
	call CStageSystem::_ctor_default
	mov dword ptr [ebp-0x120],eax
	jmp Block39

 Block38:
	mov dword ptr [ebp-0x120],0

 Block39:
	mov edx,dword ptr [ebp-0x120]
	mov dword ptr [ebp-0x84],edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call TSingleton<CStageSystem>::GetInstance
	mov ecx,eax
	call CStageSystem::IterateStageSystem
	test eax,eax
	jne Block41

 Block40:
	push 0x22000006
	lea ecx,[ebp-0x90]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x124],eax
	mov eax,dword ptr [ebp-0x124]
	mov dword ptr [ebp-0x128],eax
	mov dword ptr [ebp-4],0x11
	mov ecx,dword ptr [ebp-0x128]
	mov edx,dword ptr [ecx]
	mov dword ptr [ebp-0x8C],edx
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x8C]
	push eax
	call _CxxThrowException
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x90]
	call CTerminateException::~CTerminateException

 Block41:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::InitializeSound
_SUB_EXCEPTION_HANDLER(5CA170)
__SUB_CLASS_THIS0(005CA170, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CA170
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x1C],ecx
	push 0x64
	call _operator_new
	add esp,4
	mov dword ptr [ebp-0x14],eax
	mov dword ptr [ebp-4],0
	cmp dword ptr [ebp-0x14],0
	je Block2

 Block1:
	mov ecx,dword ptr [ebp-0x14]
	call CSoundMan::_ctor_default
	mov dword ptr [ebp-0x20],eax
	jmp Block3

 Block2:
	mov dword ptr [ebp-0x20],0

 Block3:
	mov eax,dword ptr [ebp-0x20]
	mov dword ptr [ebp-0x10],eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	push 0x10
	push 2
	push 2
	push 0x7530
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ecx+4]
	push edx
	call TSingleton<CSoundMan>::GetInstance
	mov ecx,eax
	call CSoundMan::Init
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::SetClipboardText
__SUB_CLASS_THIS(005C18B0, __thiscall, 52942,  CWvsApp, void, const char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x10
	mov dword ptr [ebp-0x10],ecx
	mov dword ptr [ebp-4],0
	mov eax,dword ptr [ebp+8]
	push eax
	call lstrlenA
	mov dword ptr [ebp-8],eax
	mov ecx,dword ptr [ebp-8]
	add ecx,1
	push ecx
	push 0x42
	call GlobalAlloc
	mov dword ptr [ebp-0xC],eax
	cmp dword ptr [ebp-0xC],0
	jne Block2

 Block1:
	jmp Block6

 Block2:
	mov edx,dword ptr [ebp-0xC]
	push edx
	call GlobalLock
	mov dword ptr [ebp-4],eax
	cmp dword ptr [ebp-4],0
	jne Block4

 Block3:
	mov eax,dword ptr [ebp-0xC]
	push eax
	call GlobalFree
	jmp Block6

 Block4:
	mov ecx,dword ptr [ebp+8]
	push ecx
	mov edx,dword ptr [ebp-4]
	push edx
	call lstrcpyA
	mov eax,dword ptr [ebp-4]
	add eax,dword ptr [ebp-8]
	mov byte ptr [eax],0
	mov ecx,dword ptr [ebp-0xC]
	push ecx
	call GlobalUnlock
	mov ecx,dword ptr [ebp-0x10]
	call CWvsApp::GetMainWindow
	push eax
	call OpenClipboard
	test eax,eax
	je Block6

 Block5:
	call EmptyClipboard
	mov edx,dword ptr [ebp-0xC]
	push edx
	push 1
	call SetClipboardData
	call CloseClipboard

 Block6:
	mov esp,ebp
	pop ebp
	ret 4
}
}
// PcCreateObject__com_ptr_t__com_IIID_IWzFileSystem___GUID_352d8655_51e4_4668_8ce4_0866e2b6a5b5___
__SUB(005C4710, __cdecl, 78603,  void, const wchar_t*, _x_com_ptr<IWzFileSystem>&, IUnknown*) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block1:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov dword ptr [esi],0
	mov eax,dword ptr [_D__G_APFNPCOMAPIS]
	test eax,eax
	jne Block5

 Block4:
	mov eax,0x800401F0
	jmp Block6

 Block5:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push esi
	push offset __GUID_352d8655_51e4_4668_8ce4_0866e2b6a5b5
	push edx
	call eax
	add esp,0x10
	test eax,eax
	jge Block7

 Block6:
	mov dword ptr [esp+8],eax
	push offset _COM_ERROR_THROW_INFO
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset _com_error::`vftable'
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x18],0
	call _CxxThrowException

 Block7:
	pop esi
	add esp,0x10
	ret
}
}
// CWvsApp::SetPatchExceptionInfo
_SUB_EXCEPTION_HANDLER(5C5360)
__SUB_CLASS_THIS(005C5360, __thiscall, 52930,  CWvsApp, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C5360
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1CC
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x20],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x1D4],ecx
	jmp Block2

 Block2:
	mov eax,dword ptr [ebp-0x1D4]
	cmp dword ptr [eax+0x30],0
	je Block4

 Block3:
	mov ecx,dword ptr [ebp-0x1D4]
	mov edx,dword ptr [ebp+8]
	mov dword ptr [ecx+0x2C],edx
	mov eax,dword ptr [ebp-0x1D4]
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [eax+0x58],ecx
	mov edx,dword ptr [ebp-0x1D4]
	mov eax,dword ptr [ebp+8]
	mov dword ptr [edx+0x5C],eax
	mov ecx,dword ptr [ebp-0x1D4]
	mov edx,dword ptr [ebp+8]
	mov dword ptr [ecx+0x60],edx
	mov eax,dword ptr [ebp-0x1D4]
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [eax+0x64],ecx
	mov edx,dword ptr [ebp-0x1D4]
	mov dword ptr [edx+0x30],0

 Block4:
	mov eax,dword ptr [ebp-0x1D4]
	mov ecx,dword ptr [ebp+8]
	sub ecx,dword ptr [eax+0x2C]
	test ecx,ecx
	jle Block98

 Block5:
	call get_stage
	push eax
	lea ecx,[ebp-0x18]
	call ZRef<CStage>::_ctor_copy
	mov dword ptr [ebp-4],0
	lea ecx,[ebp-0x18]
	call ZRef<CStage>::op_star_access
	test eax,eax
	je Block7

 Block6:
	lea ecx,[ebp-0x18]
	call ZRef<CStage>::op_arrow
	mov dword ptr [ebp-0x1D8],eax
	mov edx,dword ptr [ebp-0x1D8]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp-0x1D8]
	mov edx,dword ptr [eax]
	call edx

 Block7:
	call CWndMan::s_Update
	mov eax,dword ptr [ebp-0x1D4]
	mov ecx,dword ptr [eax+0x2C]
	add ecx,0x1E
	mov edx,dword ptr [ebp-0x1D4]
	mov dword ptr [edx+0x2C],ecx
	mov eax,dword ptr [ebp-0x1D4]
	mov ecx,dword ptr [ebp+8]
	sub ecx,dword ptr [eax+0x2C]
	test ecx,ecx
	jle Block9

 Block8:
	mov edx,dword ptr [ebp-0x1D4]
	mov eax,dword ptr [edx+0x2C]
	push eax
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::UpdateCurrentTime

 Block9:
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x18]
	call ZRef<CStage>::~ZRef<CStage>
	jmp Block4

 Block98:
	mov edx,dword ptr [ebp+8]
	push edx
	call get_gr
	mov ecx,eax
	call _x_com_ptr<IWzGr2D>::op_arrow
	mov ecx,eax
	call IWzGr2D::UpdateCurrentTime
	call TSingleton<CActionMan>::GetInstance
	mov ecx,eax
	call CActionMan::SweepCache
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x20]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CWvsApp::ZtlExceptionHandler
_SUB_EXCEPTION_HANDLER(5C8AE0)
__SUB(005C8AE0, __cdecl, 52945,  void, int32_t, const char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C8AE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x898
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x70],eax
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	push 0
	push 2
	call TSingleton<CWvsApp>::GetInstance
	mov ecx,eax
	call CWvsApp::SendBackupPacket
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_GlobalMemoryStatus]
	call dword ptr [ZImports::_GetCurrentProcessId]
	mov dword ptr [ebp-0x5C],eax
	mov ecx,dword ptr [ebp-0x5C]
	push ecx
	push 0
	push 0x410
	call dword ptr [ZImports::_OpenProcess]
	mov dword ptr [ebp-0x10],eax
	push 0x28
	lea edx,[ebp-0x38]
	push edx
	mov eax,dword ptr [ebp-0x10]
	push eax
	call GetProcessMemoryInfo
	mov ecx,dword ptr [ebp-0x10]
	push ecx
	call dword ptr [ZImports::_CloseHandle]
	call TSingleton<CSecurityClient>::IsInstantiated
	test eax,eax
	je Block2

 Block1:
	call TSingleton<CSecurityClient>::GetInstance
	call TSingleton<CSecurityClient>::DestroyInstance

 Block2:
	cmp dword ptr [ebp+8],0
	jne Block9

 Block3:
	push 0
	push 0x80000000
	push 4
	push 0
	push 0
	push 0x40000000
	mov edx,dword ptr [ebp+0xC]
	push edx
	call CreateFileA
	mov dword ptr [ebp-0x6C],eax
	cmp dword ptr [ebp-0x6C],0xFFFFFFFF
	jne Block5

 Block4:
	jmp Block9

 Block5:
	push 2
	push 0
	push 0
	mov eax,dword ptr [ebp-0x6C]
	push eax
	call SetFilePointer
	call TSingleton<CConfig>::GetInstance
	mov dword ptr [ebp-0x64],eax
	mov ecx,dword ptr [ebp-0x64]
	call CConfig::GetPlayTime
	mov dword ptr [ebp-0x60],eax
	cmp dword ptr [ebp-0x64],0
	je Block7

 Block6:
	lea ecx,[ebp-0x878]
	push ecx
	mov ecx,dword ptr [ebp-0x64]
	call CConfig::GetSessionCharacterName
	mov dword ptr [ebp-0x898],eax
	mov edx,dword ptr [ebp-0x898]
	mov dword ptr [ebp-0x89C],edx
	mov dword ptr [ebp-4],0
	lea eax,[ebp-0x87C]
	push eax
	call TSingleton<CWvsApp>::GetInstance
	mov ecx,eax
	call CWvsApp::GetOSCSDVersion
	mov dword ptr [ebp-0x8A0],eax
	mov ecx,dword ptr [ebp-0x8A0]
	mov dword ptr [ebp-0x8A4],ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [ebp-0x64]
	call CConfig::GetSessionFieldID
	push eax
	mov ecx,dword ptr [ebp-0x64]
	call CConfig::GetSessionChannelID
	push eax
	mov ecx,dword ptr [ebp-0x64]
	call CConfig::GetSessionWorldID
	push eax
	mov edx,dword ptr [ebp-0x89C]
	mov eax,dword ptr [edx]
	push eax
	push 0x5F
	call TSingleton<CWvsApp>::GetInstance
	mov ecx,eax
	call CWvsApp::Get64BitInfo
	push eax
	mov ecx,dword ptr [ebp-0x8A4]
	mov edx,dword ptr [ecx]
	push edx
	call TSingleton<CWvsApp>::GetInstance
	mov ecx,eax
	call CWvsApp::GetOSBuildNumber
	push eax
	call TSingleton<CWvsApp>::GetInstance
	mov ecx,eax
	call CWvsApp::GetOSMinorVersion
	push eax
	call TSingleton<CWvsApp>::GetInstance
	mov ecx,eax
	call CWvsApp::GetOSVersion
	push eax
	push offset _S_OSDDDSPSX64DVDCH
	lea eax,[ebp-0x874]
	push eax
	call dword ptr [ZImports::_wsprintfA]
	add esp,0x30
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x87C]
	call ZXString<char>::~ZXString<char>
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x878]
	call ZXString<char>::~ZXString<char>
	jmp Block8

 Block7:
	push 0x5F
	push offset _S_VERD
	lea ecx,[ebp-0x874]
	push ecx
	call dword ptr [ZImports::_wsprintfA]
	add esp,0xC

 Block8:
	mov edx,dword ptr [ebp-0x60]
	push edx
	mov eax,dword ptr [ebp-0x40]
	push eax
	mov ecx,dword ptr [ebp-0x3C]
	push ecx
	mov edx,dword ptr [ebp-0x50]
	push edx
	mov eax,dword ptr [ebp-0x4C]
	push eax
	mov ecx,dword ptr [ebp-0x2C]
	push ecx
	push offset _S_LULULULULUPLAYTI
	lea edx,[ebp-0x474]
	push edx
	call dword ptr [ZImports::_wsprintfA]
	add esp,0x20
	push 0
	lea eax,[ebp-0x68]
	push eax
	lea ecx,[ebp-0x874]
	push ecx
	call lstrlenA
	push eax
	lea edx,[ebp-0x874]
	push edx
	mov eax,dword ptr [ebp-0x6C]
	push eax
	call WriteFile
	push 0
	lea ecx,[ebp-0x68]
	push ecx
	lea edx,[ebp-0x474]
	push edx
	call lstrlenA
	push eax
	lea eax,[ebp-0x474]
	push eax
	mov ecx,dword ptr [ebp-0x6C]
	push ecx
	call WriteFile
	mov edx,dword ptr [ebp-0x6C]
	push edx
	call CloseHandle

 Block9:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov ecx,dword ptr [ebp-0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// PcCreateObject__com_ptr_t__com_IIID_IWzGr2D___GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9___
__SUB(005C3040, __cdecl, 78399,  void, const wchar_t*, _x_com_ptr<IWzGr2D>&, IUnknown*) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block1:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov dword ptr [esi],0
	mov eax,dword ptr [_D__G_APFNPCOMAPIS]
	test eax,eax
	jne Block5

 Block4:
	mov eax,0x800401F0
	jmp Block6

 Block5:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push esi
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push edx
	call eax
	add esp,0x10
	test eax,eax
	jge Block7

 Block6:
	mov dword ptr [esp+8],eax
	push offset _COM_ERROR_THROW_INFO
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset _com_error::`vftable'
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x18],0
	call _CxxThrowException

 Block7:
	pop esi
	add esp,0x10
	ret
}
}
// Crc32_GetCrc32_VMTable
__SUB(005C1500, __cdecl, 78367,  unsigned long, unsigned long*, unsigned long, unsigned long*, unsigned long*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x1C
	push ebx
	push esi
	push edi
	call dword ptr [ZImports::_GetTickCount]
	mov dword ptr [ebp-8],eax
	jmp Block2

 Block2:
	mov dword ptr [ebp-0x18],0
	mov eax,dword ptr [ebp+0x14]
	cmp dword ptr [eax],0xFFFFFFFF
	jne Block4

 Block3:
	mov ecx,dword ptr [ebp+0x14]
	mov dword ptr [ecx],0x81521190

 Block4:
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [edx]
	mov dword ptr [ebp-0x14],eax
	mov ecx,dword ptr [ebp+0xC]
	shr ecx,2
	mov dword ptr [ebp-4],ecx
	mov edx,dword ptr [ebp-4]
	shr edx,1
	mov dword ptr [ebp-0xC],edx
	jmp Block6

 Block6:
	mov dword ptr [ebp-0x1C],0
	jmp Block8

 Block7:
	mov eax,dword ptr [ebp-0x1C]
	add eax,1
	mov dword ptr [ebp-0x1C],eax

 Block8:
	mov ecx,dword ptr [ebp-0x1C]
	cmp ecx,dword ptr [ebp-4]
	jae Block17

 Block9:
	mov edx,dword ptr [ebp-0x1C]
	cmp edx,dword ptr [ebp-0xC]
	jne Block15

 Block10:
	jmp Block12

 Block12:
	mov dword ptr [ebp-0x18],1
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [eax]
	shr ecx,8
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [ebp-0x1C]
	mov esi,dword ptr [ebp+8]
	mov edx,dword ptr [edx]
	xor edx,dword ptr [esi+eax*4]
	and edx,0xFF
	mov eax,dword ptr [ebp-0x1C]
	xor eax,0x1012
	mov edx,dword ptr [edx*4+_D_G_CRC32TABLE]
	add edx,eax
	xor ecx,edx
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x1C]
	neg ecx
	sbb ecx,ecx
	not ecx
	and ecx,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-0xC],ecx
	mov edx,dword ptr [ebp+0x10]
	mov eax,dword ptr [edx]
	imul eax,dword ptr [ebp-0xC]
	add eax,0x101210
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [ecx],eax
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [edx]
	add eax,1
	mov dword ptr [ebp-0x14],eax
	jmp Block14

 Block14:
	jmp Block16

 Block15:
	mov ecx,dword ptr [ebp+0x14]
	mov edx,dword ptr [ecx]
	shr edx,8
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [ebp-0x1C]
	mov esi,dword ptr [ebp+8]
	mov eax,dword ptr [eax]
	xor eax,dword ptr [esi+ecx*4]
	and eax,0xFF
	xor edx,dword ptr [eax*4+_D_G_CRC32TABLE]
	mov ecx,dword ptr [ebp+0x14]
	mov dword ptr [ecx],edx

 Block16:
	jmp Block7

 Block17:
	jmp Block19

 Block19:
	cmp dword ptr [ebp-0x18],0
	jne Block24

 Block20:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block21:
	cmp eax,ecx
	jbe Block23

 Block22:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block21

 Block23:
	xor eax,eax
	xor ecx,ecx
	ret

 Block24:
	jmp Block26

 Block26:
	call dword ptr [ZImports::_GetTickCount]
	mov dword ptr [ebp-0x10],eax
	mov eax,dword ptr [ebp-0x14]
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::CreateMainWindow
_SUB_EXCEPTION_HANDLER(5C74A0)
__SUB_CLASS_THIS0(005C74A0, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C74A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x68],ecx
	push 0x4B2
	lea eax,[ebp-0x58]
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-4],0
	mov dword ptr [ebp-0x50],0x30
	mov dword ptr [ebp-0x4C],0x48
	mov dword ptr [ebp-0x48],offset CWvsApp::WindowProc
	mov dword ptr [ebp-0x44],0
	mov dword ptr [ebp-0x40],0
	push 0
	call GetModuleHandleA
	mov dword ptr [ebp-0x3C],eax
	push 0x65
	push 0
	call GetModuleHandleA
	push eax
	call LoadIconA
	mov dword ptr [ebp-0x38],eax
	mov dword ptr [ebp-0x34],0
	mov dword ptr [ebp-0x30],0
	mov dword ptr [ebp-0x2C],0
	lea ecx,[ebp-0x58]
	call ZXString<char>::c_str
	mov dword ptr [ebp-0x28],eax
	mov dword ptr [ebp-0x24],0
	lea ecx,[ebp-0x50]
	push ecx
	call RegisterClassExA
	call TSingleton<CConfig>::GetInstance
	mov edx,dword ptr [eax+0x9C]
	mov dword ptr [ebp-0x54],edx
	mov eax,dword ptr [ebp-0x54]
	neg eax
	sbb eax,eax
	and eax,0x80C20000
	add eax,0x80080000
	mov dword ptr [ebp-0x20],eax
	mov dword ptr [ebp-0x1C],0
	mov dword ptr [ebp-0x18],0
	mov dword ptr [ebp-0x14],0x320
	mov dword ptr [ebp-0x10],0x258
	push 0
	mov ecx,dword ptr [ebp-0x20]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_AdjustWindowRect]
	push 0x4B3
	lea eax,[ebp-0x5C]
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0x6C],eax
	mov ecx,dword ptr [ebp-0x6C]
	mov dword ptr [ebp-0x70],ecx
	mov byte ptr [ebp-4],1
	mov edx,dword ptr [ebp-0x68]
	push edx
	mov eax,dword ptr [ebp-0x3C]
	push eax
	push 0
	push 0
	mov ecx,dword ptr [ebp-0x10]
	sub ecx,dword ptr [ebp-0x18]
	push ecx
	mov edx,dword ptr [ebp-0x14]
	sub edx,dword ptr [ebp-0x1C]
	push edx
	push 0x80000000
	push 0x80000000
	mov eax,dword ptr [ebp-0x20]
	push eax
	mov ecx,dword ptr [ebp-0x70]
	call ZXString<char>::c_str
	push eax
	lea ecx,[ebp-0x58]
	call ZXString<char>::c_str
	push eax
	mov ecx,dword ptr [ebp-0x54]
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFFF8
	add ecx,8
	push ecx
	call CreateWindowExA
	mov edx,dword ptr [ebp-0x68]
	mov dword ptr [edx+4],eax
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x5C]
	call ZXString<char>::~ZXString<char>
	mov eax,dword ptr [ebp-0x68]
	cmp dword ptr [eax+4],0
	jne Block2

 Block1:
	call GetLastError
	push eax
	lea ecx,[ebp-0x64]
	call ZException::_ctor_0
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x60],ecx
	push offset ZException::THROW_INFO
	lea edx,[ebp-0x60]
	push edx
	call _CxxThrowException

 Block2:
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x58]
	call ZXString<char>::~ZXString<char>
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::GetCmdLine
_SUB_EXCEPTION_HANDLER(5CA600)
__SUB_CLASS_THIS(005CA600, __thiscall, 52935,  CWvsApp, ZXString<char>*, ZXString<char>*, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CA600
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,0x1030
	call __chkstk
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x1030],ecx
	mov dword ptr [ebp-0x102C],0
	push 0xFFFFFFFF
	push offset _S_
	lea ecx,[ebp-0x101C]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [ebp-4],1
	mov ecx,dword ptr [ebp-0x1030]
	add ecx,0x34
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block2

 Block1:
	lea eax,[ebp-0x101C]
	push eax
	mov ecx,dword ptr [ebp+8]
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [ebp-0x102C]
	or ecx,1
	mov dword ptr [ebp-0x102C],ecx
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x101C]
	call ZXString<char>::~ZXString<char>
	mov eax,dword ptr [ebp+8]
	jmp Block7

 Block2:
	mov edx,dword ptr [ebp-0x1030]
	add edx,0x34
	push edx
	lea ecx,[ebp-0x1018]
	call ZXString<char>::_ctor_copy
	mov byte ptr [ebp-4],2
	mov dword ptr [ebp-0x1020],0
	jmp Block4

 Block3:
	mov eax,dword ptr [ebp-0x1020]
	add eax,1
	mov dword ptr [ebp-0x1020],eax

 Block4:
	mov ecx,dword ptr [ebp-0x1020]
	cmp ecx,dword ptr [ebp+0xC]
	jg Block6

 Block5:
	push 0
	lea ecx,[ebp-0x1018]
	call ZXString<char>::Trim
	push 0x1000
	push 0
	lea edx,[ebp-0x1014]
	push edx
	call _memset
	add esp,0xC
	push 0x1A19
	lea eax,[ebp-0x1024]
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0x1034],eax
	lea ecx,[ebp-0x1014]
	push ecx
	mov ecx,dword ptr [ebp-0x1034]
	call ZXString<char>::c_str
	push eax
	lea ecx,[ebp-0x1018]
	call ZXString<char>::c_str
	push eax
	call _sscanf
	add esp,0xC
	lea ecx,[ebp-0x1024]
	call ZXString<char>::~ZXString<char>
	lea edx,[ebp-0x1014]
	push edx
	lea ecx,[ebp-0x101C]
	call ZXString<char>::AssignCStr
	push 0xFFFFFFFF
	lea ecx,[ebp-0x101C]
	call ZXString<char>::GetLength
	push eax
	lea eax,[ebp-0x1028]
	push eax
	lea ecx,[ebp-0x1018]
	call ZXString<char>::Mid
	mov dword ptr [ebp-0x1038],eax
	mov ecx,dword ptr [ebp-0x1038]
	mov dword ptr [ebp-0x103C],ecx
	mov byte ptr [ebp-4],3
	mov edx,dword ptr [ebp-0x103C]
	push edx
	lea ecx,[ebp-0x1018]
	call ZXString<char>::op_assign
	mov byte ptr [ebp-4],2
	lea ecx,[ebp-0x1028]
	call ZXString<char>::~ZXString<char>
	jmp Block3

 Block6:
	lea eax,[ebp-0x101C]
	push eax
	mov ecx,dword ptr [ebp+8]
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [ebp-0x102C]
	or ecx,1
	mov dword ptr [ebp-0x102C],ecx
	mov byte ptr [ebp-4],1
	lea ecx,[ebp-0x1018]
	call ZXString<char>::~ZXString<char>
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x101C]
	call ZXString<char>::~ZXString<char>
	mov eax,dword ptr [ebp+8]

 Block7:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CWvsApp::GetOSVersion
__SUB_CLASS_THIS0(0020FF10, __thiscall, 52946,  CWvsApp, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x18]
	ret
}
}
// CWvsApp::SendBackupPacket
_SUB_EXCEPTION_HANDLER(5C7A80)
__SUB_CLASS_THIS(005C7A80, __thiscall, 52950,  CWvsApp, void, long, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C7A80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x40],ecx
	mov eax,dword ptr [ebp-0x40]
	cmp dword ptr [eax+0x80],0
	jbe Block3

 Block1:
	mov ecx,dword ptr [ebp-0x40]
	cmp dword ptr [ecx+0x80],0x1000
	ja Block3

 Block2:
	push 0x24
	lea ecx,[ebp-0x1C]
	call COutPacket::_ctor_1
	mov dword ptr [ebp-4],0
	movzx edx,word ptr [ebp+8]
	push edx
	lea ecx,[ebp-0x1C]
	call COutPacket::Encode2
	mov eax,dword ptr [ebp+0xC]
	push eax
	lea ecx,[ebp-0x1C]
	call COutPacket::Encode4
	mov ecx,dword ptr [ebp-0x40]
	movzx edx,word ptr [ecx+0x80]
	push edx
	lea ecx,[ebp-0x1C]
	call COutPacket::Encode2
	mov eax,dword ptr [ebp-0x40]
	mov ecx,dword ptr [eax+0x80]
	push ecx
	mov ecx,dword ptr [ebp-0x40]
	add ecx,0x7C
	call ZArray<unsigned char>::GetData
	push eax
	lea ecx,[ebp-0x1C]
	call COutPacket::EncodeBuffer
	lea edx,[ebp-0x1C]
	push edx
	call SendPacket
	add esp,4
	mov eax,dword ptr [ebp-0x40]
	mov dword ptr [eax+0x80],0
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x1C]
	call COutPacket::~COutPacket

 Block3:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CWvsApp::InitializeResMan
_SUB_EXCEPTION_HANDLER(5C9540)
__SUB_CLASS_THIS0(005C9540, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C9540
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	sub esp,0x410
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x8C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0x2E8],ecx
	push 0x6E6
	lea eax,[ebp-0x1BC]
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-0x2EC],eax
	mov ecx,dword ptr [ebp-0x2EC]
	mov dword ptr [ebp-0x2F0],ecx
	mov dword ptr [ebp-4],0
	push 0
	call get_rm
	push eax
	mov ecx,dword ptr [ebp-0x2F0]
	call ZXString16::op_c_str
	push eax
	call PcCreate_IWzResMan
	add esp,0xC
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x1BC]
	call ZXString16::~ZXString<wchar_t>
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push 0x11
	call get_rm
	mov ecx,eax
	call _x_com_ptr<IWzResMan>::op_arrow
	mov ecx,eax
	call IWzResMan::SetResManParam
	push 0x6E8
	lea edx,[ebp-0x1C0]
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-0x2F4],eax
	mov eax,dword ptr [ebp-0x2F4]
	mov dword ptr [ebp-0x2F8],eax
	mov dword ptr [ebp-4],1
	push 0
	call get_root
	push eax
	mov ecx,dword ptr [ebp-0x2F8]
	call ZXString16::op_c_str
	push eax
	call PcCreate_IWzNameSpace
	add esp,0xC
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x1C0]
	call ZXString16::~ZXString<wchar_t>
	call get_root
	mov ecx,eax
	call _x_com_ptr<IWzNameSpace>::op_star
	push eax
	call PcSetRootNameSpace
	add esp,4
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzFileSystem>::_ctor_default
	mov dword ptr [ebp-4],2
	push 0x6E9
	lea ecx,[ebp-0x1C4]
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-0x2FC],eax
	mov edx,dword ptr [ebp-0x2FC]
	mov dword ptr [ebp-0x300],edx
	mov byte ptr [ebp-4],3
	push 0
	lea eax,[ebp-0x14]
	push eax
	mov ecx,dword ptr [ebp-0x300]
	call ZXString16::op_c_str
	push eax
	call PcCreate_IWzFileSystem
	add esp,0xC
	mov byte ptr [ebp-4],2
	lea ecx,[ebp-0x1C4]
	call ZXString16::~ZXString<wchar_t>
	mov dword ptr [ebp-0x18],0
	mov byte ptr [ebp-4],4
	push 0x104
	lea ecx,[ebp-0x198]
	push ecx
	push 0
	call GetModuleFileNameA
	lea edx,[ebp-0x198]
	push edx
	call CWvsApp::Dir_BackSlashToSlash
	add esp,4
	lea eax,[ebp-0x198]
	push eax
	call CWvsApp::Dir_upDir
	add esp,4
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x1C8],esp
	lea edx,[ebp-0x198]
	push edx
	call Ztl_bstr_t::_ctor_1
	mov dword ptr [ebp-0x304],eax
	mov eax,dword ptr [ebp-0x304]
	mov dword ptr [ebp-0x308],eax
	mov byte ptr [ebp-4],5
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzFileSystem>::op_arrow
	mov dword ptr [ebp-0x30C],eax
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [ebp-0x30C]
	call IWzFileSystem::Init
	lea ecx,[ebp-0x68]
	call _x_com_ptr<IWzPackage>::_ctor_default
	mov byte ptr [ebp-4],6
	call StringPool::GetInstance
	mov dword ptr [ebp-0x310],eax
	push 0x91E
	lea ecx,[ebp-0x1CC]
	push ecx
	mov ecx,dword ptr [ebp-0x310]
	call StringPool::GetStringW
	mov dword ptr [ebp-0x314],eax
	mov edx,dword ptr [ebp-0x314]
	mov dword ptr [ebp-0x318],edx
	mov byte ptr [ebp-4],7
	push 0
	lea eax,[ebp-0x68]
	push eax
	mov ecx,dword ptr [ebp-0x318]
	call ZXString16::op_c_str
	push eax
	call PcCreate_IWzPackage
	add esp,0xC
	mov byte ptr [ebp-4],6
	lea ecx,[ebp-0x1CC]
	call ZXString16::~ZXString<wchar_t>
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x1D0],esp
	push offset _S_BASEWZ
	call Ztl_bstr_t::_ctor_2
	mov dword ptr [ebp-0x31C],eax
	mov ecx,dword ptr [ebp-0x31C]
	mov dword ptr [ebp-0x320],ecx
	mov byte ptr [ebp-4],8
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzFileSystem>::op_arrow
	mov dword ptr [ebp-0x324],eax
	lea edx,[ebp-0x1E0]
	push edx
	mov byte ptr [ebp-4],6
	mov ecx,dword ptr [ebp-0x324]
	call IWzNameSpace::Getitem
	mov dword ptr [ebp-0x328],eax
	mov eax,dword ptr [ebp-0x328]
	mov dword ptr [ebp-0x32C],eax
	mov byte ptr [ebp-4],9
	mov ecx,dword ptr [ebp-0x32C]
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp-0x330],eax
	mov ecx,dword ptr [ebp-0x330]
	push ecx
	lea ecx,[ebp-0x6C]
	call _x_com_ptr<IWzSeekableArchive>::CreateFromUnknown
	mov dword ptr [ebp-0x334],eax
	mov byte ptr [ebp-4],0xB
	lea ecx,[ebp-0x1E0]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x338],esp
	mov dword ptr [ebp-0x10],esp
	lea ecx,[ebp-0x6C]
	call _x_com_ptr<IWzSeekableArchive>::op_star
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x1E4],esp
	call Ztl_bstr_t::_ctor_default
	mov dword ptr [ebp-0x33C],eax
	mov edx,dword ptr [ebp-0x33C]
	mov dword ptr [ebp-0x340],edx
	mov byte ptr [ebp-4],0xC
	mov eax,dword ptr [ebp-0x338]
	push eax
	push 0x5F
	call _Int2StrW
	add esp,4
	mov ecx,esp
	mov dword ptr [ebp-0x1E8],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	mov dword ptr [ebp-0x344],eax
	mov ecx,dword ptr [ebp-0x344]
	mov dword ptr [ebp-0x348],ecx
	mov byte ptr [ebp-4],0xD
	lea ecx,[ebp-0x68]
	call _x_com_ptr<IWzPackage>::op_arrow
	mov dword ptr [ebp-0x34C],eax
	mov byte ptr [ebp-4],0xB
	mov ecx,dword ptr [ebp-0x34C]
	call IWzPackage::Init
	push 0
	lea ecx,[ebp-0x68]
	call _x_com_ptr<IWzPackage>::op_star
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x1EC],esp
	push offset _S___10
	call Ztl_bstr_t::_ctor_1
	mov dword ptr [ebp-0x350],eax
	mov edx,dword ptr [ebp-0x350]
	mov dword ptr [ebp-0x354],edx
	mov byte ptr [ebp-4],0xE
	call get_root
	mov ecx,eax
	call _x_com_ptr<IWzNameSpace>::op_arrow
	mov dword ptr [ebp-0x358],eax
	mov byte ptr [ebp-4],0xB
	mov ecx,dword ptr [ebp-0x358]
	call IWzNameSpace::Mount
	push 0x64
	push 0x1F
	lea ecx,[ebp-0x84]
	call ZMap<ZXString16, ZXString16, ZXString16>::_ctor_ii
	mov byte ptr [ebp-4],0xF
	call get_root
	mov ecx,eax
	call _x_com_ptr<IWzNameSpace>::op_arrow
	mov dword ptr [ebp-0x35C],eax
	lea eax,[ebp-0x1F0]
	push eax
	mov ecx,dword ptr [ebp-0x35C]
	call IWzNameSpace::Get_NewEnum
	mov dword ptr [ebp-0x360],eax
	mov ecx,dword ptr [ebp-0x360]
	mov dword ptr [ebp-0x364],ecx
	mov byte ptr [ebp-4],0x10
	mov edx,dword ptr [ebp-0x364]
	push edx
	lea ecx,[ebp-0x88]
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov dword ptr [ebp-0x368],eax
	mov byte ptr [ebp-4],0x12
	lea ecx,[ebp-0x1F0]
	call _x_com_ptr<IUnknown>::~_x_com_ptr<IUnknown>
	lea ecx,[ebp-0x28]
	call Ztl_variant_t::_ctor_default
	mov byte ptr [ebp-4],0x13
	mov dword ptr [ebp-0x64],offset _S_CHARACTER
	mov dword ptr [ebp-0x60],offset _S_MOB
	mov dword ptr [ebp-0x5C],offset _S_SKILL
	mov dword ptr [ebp-0x58],offset _S_REACTOR
	mov dword ptr [ebp-0x54],offset _S_NPC
	mov dword ptr [ebp-0x50],offset _S_UI
	mov dword ptr [ebp-0x4C],offset _S_QUEST
	mov dword ptr [ebp-0x48],offset _S_ITEM
	mov dword ptr [ebp-0x44],offset _S_EFFECT
	mov dword ptr [ebp-0x40],offset _S_STRING
	mov dword ptr [ebp-0x3C],offset _S_ETC
	mov dword ptr [ebp-0x38],offset _S_MORPH
	mov dword ptr [ebp-0x34],offset _S_TAMINGMOB
	mov dword ptr [ebp-0x30],offset _S_SOUND
	mov dword ptr [ebp-0x2C],offset _S_MAP
	mov dword ptr [ebp-0x19C],0
	jmp Block2

 Block1:
	mov eax,dword ptr [ebp-0x19C]
	add eax,1
	mov dword ptr [ebp-0x19C],eax

 Block2:
	cmp dword ptr [ebp-0x19C],0xF
	jge Block4

 Block3:
	lea ecx,[ebp-0x1A0]
	call _x_com_ptr<IWzPackage>::_ctor_default
	mov byte ptr [ebp-4],0x14
	call StringPool::GetInstance
	mov dword ptr [ebp-0x36C],eax
	push 0x91E
	lea ecx,[ebp-0x1F4]
	push ecx
	mov ecx,dword ptr [ebp-0x36C]
	call StringPool::GetStringW
	mov dword ptr [ebp-0x370],eax
	mov edx,dword ptr [ebp-0x370]
	mov dword ptr [ebp-0x374],edx
	mov byte ptr [ebp-4],0x15
	push 0
	lea eax,[ebp-0x1A0]
	push eax
	mov ecx,dword ptr [ebp-0x374]
	call ZXString16::op_c_str
	push eax
	call PcCreate_IWzPackage
	add esp,0xC
	mov byte ptr [ebp-4],0x14
	lea ecx,[ebp-0x1F4]
	call ZXString16::~ZXString<wchar_t>
	push 0
	push 0
	push 0xFFFFFFFF
	mov ecx,dword ptr [ebp-0x19C]
	mov edx,dword ptr [ebp+ecx*4-0x64]
	push edx
	lea ecx,[ebp-0x200]
	call ZXString16::CreateFromCharStr
	mov dword ptr [ebp-0x378],eax
	mov eax,dword ptr [ebp-0x378]
	mov dword ptr [ebp-0x37C],eax
	mov byte ptr [ebp-4],0x16
	lea ecx,[ebp-0x1FC]
	call ZXString16::_ctor_default
	mov dword ptr [ebp-0x380],eax
	mov ecx,dword ptr [ebp-0x380]
	mov dword ptr [ebp-0x384],ecx
	mov byte ptr [ebp-4],0x17
	mov edx,dword ptr [ebp-0x37C]
	mov eax,dword ptr [edx]
	push eax
	push offset _S_SWZ
	mov ecx,dword ptr [ebp-0x384]
	push ecx
	call ZXString16::Format
	add esp,0xC
	mov dword ptr [ebp-0x388],eax
	mov ecx,dword ptr [ebp-0x388]
	call ZXString16::op_c_str
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x1F8],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	mov dword ptr [ebp-0x38C],eax
	mov edx,dword ptr [ebp-0x38C]
	mov dword ptr [ebp-0x390],edx
	mov byte ptr [ebp-4],0x18
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzFileSystem>::op_arrow
	mov dword ptr [ebp-0x394],eax
	lea eax,[ebp-0x210]
	push eax
	mov byte ptr [ebp-4],0x17
	mov ecx,dword ptr [ebp-0x394]
	call IWzNameSpace::Getitem
	mov dword ptr [ebp-0x398],eax
	mov ecx,dword ptr [ebp-0x398]
	mov dword ptr [ebp-0x39C],ecx
	mov byte ptr [ebp-4],0x19
	mov ecx,dword ptr [ebp-0x39C]
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp-0x3A0],eax
	mov edx,dword ptr [ebp-0x3A0]
	push edx
	lea ecx,[ebp-0x1AC]
	call _x_com_ptr<IWzSeekableArchive>::CreateFromUnknown
	mov dword ptr [ebp-0x3A4],eax
	mov byte ptr [ebp-4],0x1B
	lea ecx,[ebp-0x210]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [ebp-4],0x1C
	lea ecx,[ebp-0x1FC]
	call ZXString16::~ZXString<wchar_t>
	mov byte ptr [ebp-4],0x1D
	lea ecx,[ebp-0x200]
	call ZXString16::~ZXString<wchar_t>
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x214],esp
	mov eax,dword ptr [ebp-0x19C]
	mov edx,dword ptr [ebp+eax*4-0x64]
	push edx
	call Ztl_bstr_t::_ctor_1
	mov dword ptr [ebp-0x3A8],eax
	mov eax,dword ptr [ebp-0x3A8]
	mov dword ptr [ebp-0x3AC],eax
	mov byte ptr [ebp-4],0x1E
	call get_root
	mov ecx,eax
	call _x_com_ptr<IWzNameSpace>::op_arrow
	mov dword ptr [ebp-0x3B0],eax
	lea ecx,[ebp-0x228]
	push ecx
	mov byte ptr [ebp-4],0x1D
	mov ecx,dword ptr [ebp-0x3B0]
	call IWzNameSpace::Getitem
	mov dword ptr [ebp-0x3B4],eax
	mov edx,dword ptr [ebp-0x3B4]
	mov dword ptr [ebp-0x3B8],edx
	mov byte ptr [ebp-4],0x1F
	mov ecx,dword ptr [ebp-0x3B8]
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp-0x3BC],eax
	mov eax,dword ptr [ebp-0x3BC]
	push eax
	mov ecx,dword ptr [ebp-0x19C]
	push ecx
	call get_sub
	add esp,4
	mov ecx,eax
	call _x_com_ptr<IWzNameSpace>::op_assign_unknown
	mov byte ptr [ebp-4],0x1D
	lea ecx,[ebp-0x228]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x3C0],esp
	mov dword ptr [ebp-0x10],esp
	push 0xFFFFFFFF
	mov edx,dword ptr [ebp-0x3C0]
	push edx
	push 0x5F
	call _Int2StrW
	add esp,8
	push eax
	lea ecx,[ebp-0x1A8]
	call ZXString16::CreateFromCStr
	mov dword ptr [ebp-0x3C4],eax
	mov byte ptr [ebp-4],0x20
	push 0xFFFFFFFF
	mov eax,dword ptr [ebp-0x19C]
	mov ecx,dword ptr [ebp+eax*4-0x64]
	push ecx
	lea ecx,[ebp-0x22C]
	call ZXString16::CreateFromCharStr
	mov dword ptr [ebp-0x3C8],eax
	mov byte ptr [ebp-4],0x21
	lea edx,[ebp-0x1A8]
	push edx
	lea eax,[ebp-0x22C]
	push eax
	lea ecx,[ebp-0x84]
	call ZMap<ZXString16, ZXString16, ZXString16>::GetAt
	mov byte ptr [ebp-4],0x20
	lea ecx,[ebp-0x22C]
	call ZXString16::~ZXString<wchar_t>
	lea ecx,[ebp-0x1AC]
	call _x_com_ptr<IWzSeekableArchive>::op_star
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x230],esp
	mov edx,dword ptr [ebp-0x19C]
	mov eax,dword ptr [ebp+edx*4-0x64]
	push eax
	call Ztl_bstr_t::_ctor_1
	mov dword ptr [ebp-0x3CC],eax
	mov ecx,dword ptr [ebp-0x3CC]
	mov dword ptr [ebp-0x3D0],ecx
	mov byte ptr [ebp-4],0x22
	lea ecx,[ebp-0x1A8]
	call ZXString16::op_c_str
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x234],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	mov dword ptr [ebp-0x3D4],eax
	mov edx,dword ptr [ebp-0x3D4]
	mov dword ptr [ebp-0x3D8],edx
	mov byte ptr [ebp-4],0x23
	lea ecx,[ebp-0x1A0]
	call _x_com_ptr<IWzPackage>::op_arrow
	mov dword ptr [ebp-0x3DC],eax
	mov byte ptr [ebp-4],0x20
	mov ecx,dword ptr [ebp-0x3DC]
	call IWzPackage::Init
	lea ecx,[ebp-0x1A4]
	call _x_com_ptr<IWzNameSpace>::_ctor_default
	mov byte ptr [ebp-4],0x24
	call StringPool::GetInstance
	mov dword ptr [ebp-0x3E0],eax
	push 0x91E
	lea eax,[ebp-0x238]
	push eax
	mov ecx,dword ptr [ebp-0x3E0]
	call StringPool::GetStringW
	mov dword ptr [ebp-0x3E4],eax
	mov ecx,dword ptr [ebp-0x3E4]
	mov dword ptr [ebp-0x3E8],ecx
	mov byte ptr [ebp-4],0x25
	push 0
	lea edx,[ebp-0x1A4]
	push edx
	mov ecx,dword ptr [ebp-0x3E8]
	call ZXString16::op_c_str
	push eax
	call PcCreate_IWzNameSpace
	add esp,0xC
	mov byte ptr [ebp-4],0x24
	lea ecx,[ebp-0x238]
	call ZXString16::~ZXString<wchar_t>
	push 0
	lea ecx,[ebp-0x1A0]
	call _x_com_ptr<IWzPackage>::op_star
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x23C],esp
	push offset _S___9
	call Ztl_bstr_t::_ctor_2
	mov dword ptr [ebp-0x3EC],eax
	mov eax,dword ptr [ebp-0x3EC]
	mov dword ptr [ebp-0x3F0],eax
	mov byte ptr [ebp-4],0x26
	lea ecx,[ebp-0x1A4]
	call _x_com_ptr<IWzNameSpace>::op_arrow
	mov dword ptr [ebp-0x3F4],eax
	mov byte ptr [ebp-4],0x24
	mov ecx,dword ptr [ebp-0x3F4]
	call IWzNameSpace::Mount
	push 1
	lea ecx,[ebp-0x1A4]
	call _x_com_ptr<IWzNameSpace>::op_star
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x240],esp
	push offset _S___9
	call Ztl_bstr_t::_ctor_2
	mov dword ptr [ebp-0x3F8],eax
	mov ecx,dword ptr [ebp-0x3F8]
	mov dword ptr [ebp-0x3FC],ecx
	mov byte ptr [ebp-4],0x27
	mov edx,dword ptr [ebp-0x19C]
	push edx
	call get_sub
	add esp,4
	mov ecx,eax
	call _x_com_ptr<IWzNameSpace>::op_arrow
	mov dword ptr [ebp-0x400],eax
	mov byte ptr [ebp-4],0x24
	mov ecx,dword ptr [ebp-0x400]
	call IWzNameSpace::Mount
	mov byte ptr [ebp-4],0x20
	lea ecx,[ebp-0x1A4]
	call _x_com_ptr<IWzNameSpace>::~_x_com_ptr<IWzNameSpace>
	mov byte ptr [ebp-4],0x1D
	lea ecx,[ebp-0x1A8]
	call ZXString16::~ZXString<wchar_t>
	mov byte ptr [ebp-4],0x14
	lea ecx,[ebp-0x1AC]
	call _x_com_ptr<IWzSeekableArchive>::~_x_com_ptr<IWzSeekableArchive>
	mov byte ptr [ebp-4],0x13
	lea ecx,[ebp-0x1A0]
	call _x_com_ptr<IWzPackage>::~_x_com_ptr<IWzPackage>
	jmp Block1

 Block4:
	mov byte ptr [ebp-4],0x12
	lea ecx,[ebp-0x28]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [ebp-4],0xF
	lea ecx,[ebp-0x88]
	call _x_com_ptr<IEnumVARIANT>::~_x_com_ptr<IEnumVARIANT>
	mov byte ptr [ebp-4],0xB
	lea ecx,[ebp-0x84]
	call ZMap<ZXString16, ZXString16, ZXString16>::~ZMap<ZXString16, ZXString16, ZXString16>
	mov byte ptr [ebp-4],6
	lea ecx,[ebp-0x6C]
	call _x_com_ptr<IWzSeekableArchive>::~_x_com_ptr<IWzSeekableArchive>
	mov byte ptr [ebp-4],4
	lea ecx,[ebp-0x68]
	call _x_com_ptr<IWzPackage>::~_x_com_ptr<IWzPackage>
	jmp Block7

 Block7:
	mov dword ptr [ebp-4],2
	cmp dword ptr [ebp-0x18],0
	jge Block15

 Block8:
	push 0x91C
	lea eax,[ebp-0x244]
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0x404],eax
	mov ecx,dword ptr [ebp-0x404]
	mov dword ptr [ebp-0x408],ecx
	mov byte ptr [ebp-4],0x29
	mov ecx,dword ptr [ebp-0x408]
	call ZXString<char>::c_str
	push eax
	call GetFileAttributesA
	mov dword ptr [ebp-0x1B8],eax
	mov byte ptr [ebp-4],2
	lea ecx,[ebp-0x244]
	call ZXString<char>::~ZXString<char>
	cmp dword ptr [ebp-0x1B8],0xFFFFFFFF
	je Block15

 Block9:
	mov edx,dword ptr [ebp-0x1B8]
	and edx,0x10
	je Block15

 Block10:
	cmp dword ptr [ebp-0x18],0x80070005
	jne Block12

 Block11:
	push 0x22000005
	lea ecx,[ebp-0x24C]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x40C],eax
	mov eax,dword ptr [ebp-0x40C]
	mov dword ptr [ebp-0x410],eax
	mov byte ptr [ebp-4],0x2A
	mov ecx,dword ptr [ebp-0x410]
	mov edx,dword ptr [ecx]
	mov dword ptr [ebp-0x248],edx
	push offset CTerminateException::THROW_INFO
	lea eax,[ebp-0x248]
	push eax
	call _CxxThrowException
	mov byte ptr [ebp-4],2
	lea ecx,[ebp-0x24C]
	call CTerminateException::~CTerminateException
	jmp Block15

 Block12:
	cmp dword ptr [ebp-0x18],0x80070057
	jne Block14

 Block13:
	push 0x22000003
	lea ecx,[ebp-0x254]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x414],eax
	mov ecx,dword ptr [ebp-0x414]
	mov dword ptr [ebp-0x418],ecx
	mov byte ptr [ebp-4],0x2B
	mov edx,dword ptr [ebp-0x418]
	mov eax,dword ptr [edx]
	mov dword ptr [ebp-0x250],eax
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0x250]
	push ecx
	call _CxxThrowException
	mov byte ptr [ebp-4],2
	lea ecx,[ebp-0x254]
	call CTerminateException::~CTerminateException
	jmp Block15

 Block14:
	push 0x22000004
	lea ecx,[ebp-0x25C]
	call CTerminateException::_ctor_0
	mov dword ptr [ebp-0x41C],eax
	mov edx,dword ptr [ebp-0x41C]
	mov dword ptr [ebp-0x420],edx
	mov byte ptr [ebp-4],0x2C
	mov eax,dword ptr [ebp-0x420]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x258],ecx
	push offset CTerminateException::THROW_INFO
	lea edx,[ebp-0x258]
	push edx
	call _CxxThrowException
	mov byte ptr [ebp-4],2
	lea ecx,[ebp-0x25C]
	call CTerminateException::~CTerminateException

 Block15:
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzFileSystem>::~_x_com_ptr<IWzFileSystem>
	lea esp,[ebp-0x430]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x8C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// CMonsterBookMan::GetString
_SUB_EXCEPTION_HANDLER(262990)
__SUB_CLASS_THIS(00262990, __thiscall, 46780,  CMonsterBookMan, ZRef<MonsterBookStr>*, ZRef<MonsterBookStr>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_262990
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x30]
	mov dword ptr [edi+4],ebx
	mov eax,dword ptr [esp+0x34]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ebp,1
	mov ecx,esi
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x1C],ebp
	call CMonsterBookMan::GetCard
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],ebp
	cmp eax,ebx
	je Block2

 Block1:
	push edi
	add eax,4
	push eax
	lea ecx,[esi+0x88]
	call ZMap<long, ZRef<MonsterBookStr>, long>::GetAt
	mov eax,dword ptr [esp+0x1C]

 Block2:
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
	je Block6

 Block3:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
	mov eax,edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 8
}
}
// CWvsApp::SetBackupPacket
__SUB_CLASS_THIS(005C2110, __thiscall, 52949,  CWvsApp, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push ecx
	mov dword ptr [ebp-4],ecx
	push 0x1000
	mov eax,dword ptr [ebp-4]
	add eax,0x7C
	push eax
	mov ecx,dword ptr [ebp+8]
	call CInPacket::BackupBuffer
	mov ecx,dword ptr [ebp-4]
	mov dword ptr [ecx+0x80],eax
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CWvsApp::CWvsApp
_SUB_EXCEPTION_HANDLER(5CA8A0)
__SUB_CLASS_THIS(005CA8A0, __thiscall, 52921,  CWvsApp, void, const char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CA8A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x12C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x18],eax
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0xF8],ecx
	mov ecx,dword ptr [ebp-0xF8]
	add ecx,4
	call TSingleton<CWvsApp>::_ctor_default
	mov dword ptr [ebp-4],0
	mov eax,dword ptr [ebp-0xF8]
	int 3// TODO: 	mov dword ptr [eax],offset CWvsApp::`vftable'
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+4],0
	mov edx,dword ptr [ebp-0xF8]
	mov dword ptr [edx+8],0
	mov eax,dword ptr [ebp-0xF8]
	mov dword ptr [eax+0x10],0
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0x18],0
	mov edx,dword ptr [ebp-0xF8]
	mov dword ptr [edx+0x1C],0
	mov eax,dword ptr [ebp-0xF8]
	mov dword ptr [eax+0x20],0
	mov ecx,dword ptr [ebp-0xF8]
	add ecx,0x24
	call ZXString<char>::_ctor_default
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0x28],0
	mov edx,dword ptr [ebp-0xF8]
	mov dword ptr [edx+0x2C],0
	mov eax,dword ptr [ebp-0xF8]
	mov dword ptr [eax+0x30],1
	mov ecx,dword ptr [ebp-0xF8]
	add ecx,0x34
	call ZXString<char>::_ctor_default
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0x38],0
	mov edx,dword ptr [ebp-0xF8]
	mov dword ptr [edx+0x3C],1
	mov eax,dword ptr [ebp-0xF8]
	mov dword ptr [eax+0x40],0
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0x44],0
	mov edx,dword ptr [ebp-0xF8]
	mov dword ptr [edx+0x48],0
	mov eax,dword ptr [ebp-0xF8]
	mov dword ptr [eax+0x4C],0
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0x74],0
	mov edx,dword ptr [ebp-0xF8]
	mov byte ptr [edx+0x78],1
	mov ecx,dword ptr [ebp-0xF8]
	add ecx,0x7C
	call ZArray<unsigned char>::_ctor_default
	mov byte ptr [ebp-4],3
	mov eax,dword ptr [ebp-0xF8]
	mov dword ptr [eax+0x80],0
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0x84],0
	mov edx,dword ptr [ebp-0xF8]
	mov dword ptr [edx+0x88],1
	jmp Block2

 Block2:
	mov eax,dword ptr [ebp+8]
	push eax
	mov ecx,dword ptr [ebp-0xF8]
	add ecx,0x34
	call ZXString<char>::AssignCStr
	push offset _S___11
	mov ecx,dword ptr [ebp-0xF8]
	add ecx,0x34
	call ZXString<char>::Trim
	push 0
	lea ecx,[ebp-0xBD]
	call ZAllocHelper::_ctor_0
	push eax
	push 0x1000
	mov ecx,dword ptr [ebp-0xF8]
	add ecx,0x7C
	call ZArray<unsigned char>::Alloc
	push 0
	lea ecx,[ebp-0xB8]
	push ecx
	mov ecx,dword ptr [ebp-0xF8]
	call CWvsApp::GetCmdLine
	mov byte ptr [ebp-4],4
	lea ecx,[ebp-0xB8]
	call ZXString<char>::IsEmpty
	test eax,eax
	nop
	jmp Block10

 Block10:
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0x38],2
	jmp Block12

 Block12:
	jmp Block14

 Block14:
	call GetCurrentThreadId
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0xC],eax
	mov dword ptr [ebp-0xB4],0x94
	lea edx,[ebp-0xB4]
	push edx
	call GetVersionExA
	xor eax,eax
	cmp dword ptr [ebp-0xA4],1
	sete al
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ecx+0x14],eax
	cmp dword ptr [ebp-0xB0],6
	jb Block17

 Block15:
	mov edx,dword ptr [ebp-0xF8]
	cmp dword ptr [edx+0x38],0
	jne Block17

 Block16:
	mov eax,dword ptr [ebp-0xF8]
	mov dword ptr [eax+0x38],2

 Block17:
	cmp dword ptr [ebp-0xB0],5
	jae Block19

 Block18:
	mov dword ptr [_D_G_DWTARGETOS],0x7CC

 Block19:
	mov dword ptr [ebp-0x14],0
	push offset _S_ISWOW64PROCESS
	push offset _S_KERNEL32DLL
	call dword ptr [ZImports::_GetModuleHandleA]
	push eax
	call MyGetProcAddress
	mov dword ptr [ebp-0x14],eax
	mov dword ptr [ebp-0x10],0
	cmp dword ptr [ebp-0x14],0
	je Block21

 Block20:
	lea ecx,[ebp-0x10]
	push ecx
	call dword ptr [ZImports::_GetCurrentProcess]
	push eax
	call dword ptr [ebp-0x14]

 Block21:
	cmp dword ptr [ebp-0x10],0
	je Block23

 Block22:
	mov dword ptr [_D_G_DWTARGETOS],0x7CC

 Block23:
	cmp dword ptr [ebp-0xB0],6
	jb Block26

 Block24:
	cmp dword ptr [ebp-0x10],0
	jne Block26

 Block25:
	call ResetLSP

 Block26:
	mov edx,dword ptr [ebp-0xF8]
	mov eax,dword ptr [edx+0x18]
	shl eax,0xC
	mov ecx,dword ptr [ebp-0x10]
	shl ecx,8
	add eax,ecx
	push eax
	mov ecx,dword ptr [ebp-0xF8]
	call CWvsApp::SetClearStackLog
	mov edx,dword ptr [ebp-0xF8]
	mov eax,dword ptr [ebp-0xB0]
	mov dword ptr [edx+0x18],eax
	mov ecx,dword ptr [ebp-0xF8]
	mov edx,dword ptr [ebp-0xAC]
	mov dword ptr [ecx+0x1C],edx
	mov eax,dword ptr [ebp-0xF8]
	mov ecx,dword ptr [ebp-0xA8]
	mov dword ptr [eax+0x20],ecx
	mov edx,1
	test edx,edx
	je Block28

 Block27:
	lea eax,[ebp-0xA0]
	push eax
	mov ecx,dword ptr [ebp-0xF8]
	add ecx,0x24
	call ZXString<char>::AssignCStr
	jmp Block29

 Block28:
	push offset _S_NONE
	mov ecx,dword ptr [ebp-0xF8]
	add ecx,0x24
	call ZXString<char>::AssignCStr

 Block29:
	mov ecx,dword ptr [ebp-0xF8]
	mov edx,dword ptr [ebp-0x10]
	mov dword ptr [ecx+0x28],edx
	jmp Block31

 Block31:
	mov byte ptr [ebp-4],3
	lea ecx,[ebp-0xB8]
	call ZXString<char>::~ZXString<char>
	mov dword ptr [ebp-4],0xFFFFFFFF
	mov eax,dword ptr [ebp-0xF8]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov ecx,dword ptr [ebp-0x18]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// Crc32_GetCrc32
__SUB(005C0B00, __cdecl, 78359,  unsigned long, unsigned long*, unsigned long, unsigned long*, unsigned long, unsigned long*, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x5C
	push ebx
	push esi
	push edi
	call dword ptr [ZImports::_GetTickCount]
	mov dword ptr [ebp-0x18],eax
	jmp Block2

 Block2:
	mov eax,dword ptr [ebp+0x14]
	xor eax,0xCA618953
	mov dword ptr [ebp-0x4C],eax
	mov ecx,dword ptr [ebp+0x1C]
	xor ecx,0x391A586C
	mov dword ptr [ebp-0x14],ecx
	mov edx,dword ptr [ebp-0x4C]
	cmp edx,dword ptr [ebp-0x14]
	je Block7

 Block3:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block4:
	cmp eax,ecx
	jbe Block6

 Block5:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block4

 Block6:
	xor eax,eax
	xor ecx,ecx
	ret

 Block7:
	mov eax,dword ptr [ebp-0x4C]
	mov dword ptr [ebp-0x20],eax
	mov ecx,dword ptr [ebp-0x20]
	mov edx,dword ptr [ebp-0x20]
	add edx,dword ptr [ecx+0x3C]
	mov dword ptr [ebp-0x1C],edx
	mov eax,dword ptr [ebp-0x1C]
	add eax,0xF8
	mov dword ptr [ebp-0x28],eax
	mov ecx,dword ptr [ebp-0x1C]
	movzx edx,word ptr [ecx+6]
	mov dword ptr [ebp-0x48],edx
	mov eax,dword ptr [ebp-0x48]
	imul eax,0x28
	mov ecx,dword ptr [ebp-0x48]
	sub ecx,1
	imul ecx,0x28
	mov edx,dword ptr [ebp-0x48]
	sub edx,1
	imul edx,0x28
	mov esi,dword ptr [ebp-0x28]
	mov ecx,dword ptr [esi+ecx+0xC]
	mov esi,dword ptr [ebp-0x28]
	add ecx,dword ptr [esi+edx+0x10]
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [edx+eax+0xC]
	sub eax,ecx
	mov dword ptr [ebp-8],eax
	mov ecx,dword ptr [ebp-8]
	xor ecx,0x23126032
	mov dword ptr [ebp-8],ecx
	mov edx,dword ptr [ebp-0x48]
	imul edx,0x28
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [eax+edx+8]
	xor ecx,0x23126032
	xor ecx,dword ptr [ebp-8]
	mov dword ptr [ebp-0x2C],ecx
	mov edx,dword ptr [ebp-0x48]
	imul edx,0x28
	mov eax,dword ptr [ebp-0x48]
	sub eax,1
	imul eax,0x28
	mov ecx,dword ptr [ebp-0x48]
	sub ecx,1
	imul ecx,0x28
	mov esi,dword ptr [ebp-0x28]
	mov eax,dword ptr [esi+eax+0x14]
	mov esi,dword ptr [ebp-0x28]
	add eax,dword ptr [esi+ecx+0x10]
	mov ecx,dword ptr [ebp-0x28]
	mov edx,dword ptr [ecx+edx+0x14]
	sub edx,eax
	mov dword ptr [ebp-0x44],edx
	mov eax,dword ptr [ebp-0x44]
	xor eax,0x23126032
	xor eax,dword ptr [ebp-0x2C]
	mov dword ptr [ebp-0x44],eax
	mov ecx,dword ptr [ebp-0x48]
	imul ecx,0x28
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [edx+ecx+0x10]
	xor eax,0x23126032
	xor eax,dword ptr [ebp-0x44]
	mov dword ptr [ebp-0x38],eax
	mov ecx,dword ptr [ebp-0x48]
	imul ecx,0x28
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [edx+ecx+0x18]
	xor eax,0x23126032
	xor eax,dword ptr [ebp-0x38]
	mov dword ptr [ebp-0x10],eax
	mov ecx,dword ptr [ebp-0x48]
	imul ecx,0x28
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [edx+ecx+0x1C]
	xor eax,0x23126032
	xor eax,dword ptr [ebp-0x10]
	mov dword ptr [ebp-0x24],eax
	mov ecx,dword ptr [ebp-8]
	add ecx,dword ptr [ebp-0x4C]
	mov dword ptr [ebp-8],ecx
	mov edx,dword ptr [ebp-0x44]
	add edx,dword ptr [ebp-0x4C]
	mov dword ptr [ebp-0x44],edx
	mov dword ptr [ebp-0x14],0
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x4C],eax
	mov ecx,dword ptr [ebp+8]
	cmp ecx,dword ptr [ebp-8]
	jb Block9

 Block8:
	mov edx,dword ptr [ebp-8]
	add edx,dword ptr [ebp-0x2C]
	cmp dword ptr [ebp+8],edx
	jb Block15

 Block9:
	mov eax,dword ptr [ebp+8]
	cmp eax,dword ptr [ebp-0x44]
	jb Block11

 Block10:
	mov ecx,dword ptr [ebp-0x44]
	add ecx,dword ptr [ebp-0x38]
	cmp dword ptr [ebp+8],ecx
	jb Block15

 Block11:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block12:
	cmp eax,ecx
	jbe Block14

 Block13:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block12

 Block14:
	xor eax,eax
	xor ecx,ecx
	ret

 Block15:
	mov edx,dword ptr [ebp-8]
	xor edx,0x37C9AE8F
	mov dword ptr [ebp-8],edx
	mov eax,dword ptr [ebp-0x2C]
	xor eax,0x37C9AE8F
	mov dword ptr [ebp-0x2C],eax
	mov ecx,dword ptr [ebp-0x44]
	xor ecx,0x37C9AE8F
	mov dword ptr [ebp-0x44],ecx
	mov edx,dword ptr [ebp-0x38]
	xor edx,0x37C9AE8F
	mov dword ptr [ebp-0x38],edx
	mov eax,dword ptr [ebp-0x10]
	xor eax,0x37C9AE8F
	mov dword ptr [ebp-0x10],eax
	mov ecx,dword ptr [ebp-0x24]
	xor ecx,0x37C9AE8F
	mov dword ptr [ebp-0x24],ecx
	mov dword ptr [ebp-0x50],0
	mov edx,dword ptr [ebp+0x18]
	mov dword ptr [edx],0x81521190
	mov eax,dword ptr [ebp+0x18]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x40],ecx
	mov edx,dword ptr [ebp+0xC]
	shr edx,2
	mov dword ptr [ebp-0xC],edx
	mov eax,dword ptr [ebp-0xC]
	shr eax,1
	mov dword ptr [ebp-0x30],eax
	jmp Block17

 Block17:
	mov dword ptr [ebp-0x54],0
	jmp Block19

 Block18:
	mov ecx,dword ptr [ebp-0x54]
	add ecx,1
	mov dword ptr [ebp-0x54],ecx

 Block19:
	mov edx,dword ptr [ebp-0x54]
	cmp edx,dword ptr [ebp-0xC]
	jae Block41

 Block20:
	mov eax,dword ptr [ebp-0x54]
	cmp eax,dword ptr [ebp-0x30]
	jne Block39

 Block21:
	jmp Block23

 Block23:
	mov ecx,dword ptr [ebp+0x14]
	xor ecx,0xCA618953
	mov dword ptr [ebp-0x5C],ecx
	mov edx,dword ptr [ebp+0x1C]
	xor edx,0x391A586C
	mov dword ptr [ebp-0x58],edx
	mov eax,dword ptr [ebp-0x5C]
	cmp eax,dword ptr [ebp-0x58]
	je Block28

 Block24:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block25:
	cmp eax,ecx
	jbe Block27

 Block26:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block25

 Block27:
	xor eax,eax
	xor ecx,ecx
	ret

 Block28:
	mov ecx,dword ptr [ebp-8]
	xor ecx,0x37C9AE8F
	mov dword ptr [ebp-8],ecx
	mov edx,dword ptr [ebp-0x2C]
	xor edx,0x37C9AE8F
	mov dword ptr [ebp-0x2C],edx
	mov eax,dword ptr [ebp-0x44]
	xor eax,0x37C9AE8F
	mov dword ptr [ebp-0x44],eax
	mov ecx,dword ptr [ebp-0x38]
	xor ecx,0x37C9AE8F
	mov dword ptr [ebp-0x38],ecx
	mov edx,dword ptr [ebp+8]
	cmp edx,dword ptr [ebp-8]
	jb Block30

 Block29:
	mov eax,dword ptr [ebp-8]
	add eax,dword ptr [ebp-0x2C]
	cmp dword ptr [ebp+8],eax
	jb Block36

 Block30:
	mov ecx,dword ptr [ebp+8]
	cmp ecx,dword ptr [ebp-0x44]
	jb Block32

 Block31:
	mov edx,dword ptr [ebp-0x44]
	add edx,dword ptr [ebp-0x38]
	cmp dword ptr [ebp+8],edx
	jb Block36

 Block32:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block33:
	cmp eax,ecx
	jbe Block35

 Block34:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block33

 Block35:
	xor eax,eax
	xor ecx,ecx
	ret

 Block36:
	mov dword ptr [ebp-0x38],0
	mov eax,dword ptr [ebp-0x38]
	mov dword ptr [ebp-0x44],eax
	mov ecx,dword ptr [ebp-0x44]
	mov dword ptr [ebp-0x2C],ecx
	mov edx,dword ptr [ebp-0x2C]
	mov dword ptr [ebp-8],edx
	mov dword ptr [ebp-0x50],1
	mov eax,dword ptr [ebp+0x18]
	mov ecx,dword ptr [eax]
	shr ecx,8
	mov edx,dword ptr [ebp+0x18]
	mov eax,dword ptr [ebp-0x54]
	mov esi,dword ptr [ebp+8]
	mov edx,dword ptr [edx]
	xor edx,dword ptr [esi+eax*4]
	and edx,0xFF
	mov eax,dword ptr [ebp-0x54]
	xor eax,0x1012
	mov edx,dword ptr [edx*4+_D_G_CRC32TABLE]
	add edx,eax
	xor ecx,edx
	mov eax,dword ptr [ebp+0x18]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x54]
	neg ecx
	sbb ecx,ecx
	not ecx
	and ecx,dword ptr [ebp-0x54]
	mov dword ptr [ebp-0x30],ecx
	mov edx,dword ptr [ebp+0x10]
	mov eax,dword ptr [edx]
	imul eax,dword ptr [ebp-0x30]
	add eax,0x101210
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [ecx],eax
	mov edx,dword ptr [ebp+0x18]
	mov eax,dword ptr [edx]
	add eax,1
	mov dword ptr [ebp-0x40],eax
	jmp Block38

 Block38:
	jmp Block40

 Block39:
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ecx]
	shr edx,8
	mov eax,dword ptr [ebp+0x18]
	mov ecx,dword ptr [ebp-0x54]
	mov esi,dword ptr [ebp+8]
	mov eax,dword ptr [eax]
	xor eax,dword ptr [esi+ecx*4]
	and eax,0xFF
	xor edx,dword ptr [eax*4+_D_G_CRC32TABLE]
	mov ecx,dword ptr [ebp+0x18]
	mov dword ptr [ecx],edx

 Block40:
	jmp Block18

 Block41:
	jmp Block43

 Block43:
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,0x37C9AE8F
	mov dword ptr [ebp-0x10],ecx
	mov edx,dword ptr [ebp-0x24]
	xor edx,0x37C9AE8F
	mov dword ptr [ebp-0x24],edx
	mov eax,offset Crc32_GetCrc32
	add eax,0x409
	mov dword ptr [ebp-4],eax
	mov ecx,dword ptr [ebp-4]
	cmp dword ptr [ecx],0x8B184D8B
	jne Block52

 Block44:
	mov edx,dword ptr [ebp-4]
	cmp dword ptr [edx+4],0x8EAC111
	jne Block52

 Block45:
	mov eax,dword ptr [ebp-4]
	cmp dword ptr [eax+8],0x8B18458B
	jne Block52

 Block46:
	mov ecx,dword ptr [ebp-4]
	cmp dword ptr [ecx+0xC],0x758BD84D
	je Block48

 Block47:
	mov edx,dword ptr [ebp-4]
	cmp dword ptr [edx+0xC],0x758BAC4D
	jne Block52

 Block48:
	mov eax,dword ptr [ebp-4]
	cmp dword ptr [eax+0x10],0x33008B08
	jne Block52

 Block49:
	mov ecx,dword ptr [ebp-4]
	cmp dword ptr [ecx+0x14],0xFF258E04
	jne Block52

 Block50:
	mov edx,dword ptr [ebp-4]
	cmp dword ptr [edx+0x18],0x33000000
	jne Block52

 Block51:
	mov eax,dword ptr [ebp-4]
	cmp dword ptr [eax+0x24],0xE9118918
	je Block56

 Block52:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block53:
	cmp eax,ecx
	jbe Block55

 Block54:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block53

 Block55:
	xor eax,eax
	xor ecx,ecx
	ret

 Block56:
	mov ecx,dword ptr [ebp-4]
	movzx edx,byte ptr [ecx+0x1C]
	cmp edx,0x14
	jne Block60

 Block57:
	mov eax,dword ptr [ebp-4]
	movzx ecx,byte ptr [eax+0x1D]
	cmp ecx,0x85
	jne Block60

 Block58:
	mov edx,dword ptr [ebp-4]
	movzx eax,byte ptr [edx+0x22]
	cmp eax,0x8B
	jne Block60

 Block59:
	mov ecx,dword ptr [ebp-4]
	movzx edx,byte ptr [ecx+0x23]
	cmp edx,0x4D
	je Block64

 Block60:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block61:
	cmp eax,ecx
	jbe Block63

 Block62:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block61

 Block63:
	xor eax,eax
	xor ecx,ecx
	ret

 Block64:
	mov eax,dword ptr [ebp-4]
	cmp dword ptr [eax+0x1E],offset _D_G_CRC32TABLE
	je Block69

 Block65:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block66:
	cmp eax,ecx
	jbe Block68

 Block67:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block66

 Block68:
	xor eax,eax
	xor ecx,ecx
	ret

 Block69:
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ecx]
	xor edx,0x81521190
	mov dword ptr [ebp-0x3C],edx
	mov eax,dword ptr [ebp-0x3C]
	cmp eax,dword ptr [ebp-0x10]
	je Block75

 Block70:
	mov ecx,dword ptr [ebp-0x3C]
	cmp ecx,dword ptr [ebp-0x24]
	je Block75

 Block71:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block72:
	cmp eax,ecx
	jbe Block74

 Block73:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block72

 Block74:
	xor eax,eax
	xor ecx,ecx
	ret

 Block75:
	mov dword ptr [ebp-0x3C],0
	mov edx,dword ptr [ebp-0x3C]
	mov dword ptr [ebp-0x24],edx
	mov eax,dword ptr [ebp-0x24]
	mov dword ptr [ebp-0x10],eax
	cmp dword ptr [ebp-0x50],0
	jne Block80

 Block76:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block77:
	cmp eax,ecx
	jbe Block79

 Block78:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block77

 Block79:
	xor eax,eax
	xor ecx,ecx
	ret

 Block80:
	mov dword ptr [_D_G_BCALLAUTH],1
	jmp Block82

 Block82:
	call dword ptr [ZImports::_GetTickCount]
	mov dword ptr [ebp-0x34],eax
	mov eax,dword ptr [ebp-0x40]
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CWvsApp::SendClearStackLog
_SUB_EXCEPTION_HANDLER(5C7B60)
__SUB_CLASS_THIS(005C7B60, __thiscall, 52950,  CWvsApp, void, long, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C7B60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x50],ecx
	mov eax,dword ptr [ebp-0x50]
	cmp dword ptr [eax+0x84],0
	je Block2

 Block1:
	push 0x24
	lea ecx,[ebp-0x1C]
	call COutPacket::_ctor_1
	mov dword ptr [ebp-4],0
	movzx ecx,word ptr [ebp+8]
	push ecx
	lea ecx,[ebp-0x1C]
	call COutPacket::Encode2
	mov edx,dword ptr [ebp+0xC]
	push edx
	lea ecx,[ebp-0x1C]
	call COutPacket::Encode4
	push 0xC
	lea ecx,[ebp-0x1C]
	call COutPacket::Encode2
	push 0
	lea ecx,[ebp-0x1C]
	call COutPacket::Encode4
	mov eax,dword ptr [ebp-0x50]
	mov ecx,dword ptr [eax+0x84]
	push ecx
	lea ecx,[ebp-0x1C]
	call COutPacket::Encode4
	push 0
	lea ecx,[ebp-0x1C]
	call COutPacket::Encode4
	lea edx,[ebp-0x1C]
	push edx
	call SendPacket
	add esp,4
	mov eax,dword ptr [ebp-0x50]
	mov dword ptr [eax+0x84],0
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x1C]
	call COutPacket::~COutPacket

 Block2:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CWvsApp::ResetShowAdBalloon
__SUB_CLASS_THIS0(005C0890, __thiscall, 52923,  CWvsApp, void) {
__asm {

 Block0:
	mov dword ptr [ecx+0x40],0
	ret
}
}
// CWvsApp::Dir_upDir
__SUB(005C17F0, __cdecl, 52941,  void, char*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x28
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0xC],eax
	mov ecx,dword ptr [ebp-0xC]
	add ecx,1
	mov dword ptr [ebp-0x10],ecx

 Block1:
	mov edx,dword ptr [ebp-0xC]
	mov al,byte ptr [edx]
	mov byte ptr [ebp-0x11],al
	add dword ptr [ebp-0xC],1
	cmp byte ptr [ebp-0x11],0
	jne Block1

 Block2:
	mov ecx,dword ptr [ebp-0xC]
	sub ecx,dword ptr [ebp-0x10]
	mov dword ptr [ebp-0x18],ecx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [ebp-4],edx
	cmp dword ptr [ebp-4],0
	jle Block5

 Block3:
	mov eax,dword ptr [ebp+8]
	add eax,dword ptr [ebp-4]
	movsx ecx,byte ptr [eax-1]
	cmp ecx,0x2F
	jne Block5

 Block4:
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ebp-4]
	mov byte ptr [edx-1],0

 Block5:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x1C],eax
	mov ecx,dword ptr [ebp-0x1C]
	add ecx,1
	mov dword ptr [ebp-0x20],ecx

 Block6:
	mov edx,dword ptr [ebp-0x1C]
	mov al,byte ptr [edx]
	mov byte ptr [ebp-0x21],al
	add dword ptr [ebp-0x1C],1
	cmp byte ptr [ebp-0x21],0
	jne Block6

 Block7:
	mov ecx,dword ptr [ebp-0x1C]
	sub ecx,dword ptr [ebp-0x20]
	mov dword ptr [ebp-0x28],ecx
	mov edx,dword ptr [ebp-0x28]
	mov dword ptr [ebp-4],edx
	mov eax,dword ptr [ebp-4]
	sub eax,1
	mov dword ptr [ebp-8],eax
	jmp Block9

 Block8:
	mov ecx,dword ptr [ebp-8]
	sub ecx,1
	mov dword ptr [ebp-8],ecx

 Block9:
	cmp dword ptr [ebp-8],0
	jle Block13

 Block10:
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ebp-8]
	movsx eax,byte ptr [edx]
	cmp eax,0x2F
	jne Block12

 Block11:
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [ebp-8]
	mov byte ptr [ecx],0
	jmp Block13

 Block12:
	jmp Block8

 Block13:
	mov esp,ebp
	pop ebp
	ret
}
}
