#include "regen.hpp"
// MapleTVDownloader.ipp
#include "MapleTVDownloader.hpp"

// CMapleTVDownloader::~CMapleTVDownloader
__SUB_CLASS_THIS0(0020F2B0, __thiscall, 134838,  CMapleTVDownloader, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+8],0
	mov dword ptr [esi+0x1C],1
	je Block4

 Block1:
	call GetCurrentThreadId
	cmp dword ptr [esi+4],eax
	je Block4

 Block2:
	mov eax,dword ptr [esi+8]
	push 0xFFFFFFFF
	push eax
	call WaitForSingleObject
	test eax,eax
	je Block4

 Block3:
	push 0x20
	call MessageBeep

 Block4:
	pop esi
	ret
}
}
