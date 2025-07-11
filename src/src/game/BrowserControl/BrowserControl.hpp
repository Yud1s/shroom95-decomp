// BrowserControl.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"


namespace ADAD {
    class BrowserControlPane {
        void _ctor_0(HWND__* hpwnd, HINSTANCE hInst, tagRECT& boundRect) {
        }

        // TODO
        void ActivateWindow(int value) {
        }

        void NavigateTo(const char* isURL) {
        }

        void SetShowScrollBar(int value) {
        }
    };
}



char* __cdecl ZStrUtil__Str(const char* string, const char* pat, int32_t bTreatAsMBChar);
void __cdecl ADAD__Log(const char* str, long __formal);
wchar_t* __cdecl A2WBSTR(const char* lp, int32_t nLen);
HRESULT __stdcall ATL__AtlAdvise(IUnknown* pUnkCP, IUnknown* pUnk, const _GUID& iid, unsigned long* pdw);
HRESULT __stdcall ATL__AtlUnadvise(IUnknown* pUnkCP, const _GUID& iid, unsigned long dw);
//int32_t __cdecl IsEqualGUID(const _GUID& rguid1, const _GUID& rguid2);
void __cdecl ADAD__Log(const char* str);
