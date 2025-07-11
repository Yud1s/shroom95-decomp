#include "PCom.h"

#include <imports.h>
#include <iostream>

#include "ClientConfig.hpp"

PCom G_PCOM;


bool PCom::LoadProcs(const HMODULE mod) {
    auto fn = GetProcAddress(mod, "PcCreateObject");
    if (!fn) {
        return false;
    }
    PcCreateObject = reinterpret_cast<pc_create_obj_t>(fn);

    fn = GetProcAddress(mod, "PcFreeUnusedLibraries");
    if (!fn) {
        return false;
    }
    PcFreeUnused = reinterpret_cast<pc_free_unused_t>(fn);

    fn = GetProcAddress(mod, "PcSerializeObject");
    if (!fn) {
        return false;
    }
    PcSerializeObject = reinterpret_cast<pc_serialize_obj_t>(fn);

    fn = GetProcAddress(mod, "PcSerializeString");
    if (!fn) {
        return false;
    }
    PcSerializeString = reinterpret_cast<pc_serialize_str_t>(fn);

    fn = GetProcAddress(mod, "PcRootNameSpace");
    if (!fn) {
        return false;
    }
    PcRootNamespace = reinterpret_cast<pc_root_ns_t>(fn);
    return true;
}



HRESULT PCom::Init(const HMODULE mod) {
    if (!LoadProcs(mod)) {
        return E_FAIL;
    }

    const auto initMod = reinterpret_cast<pc_init_module_t>(GetProcAddress(mod, "PcInitModule"));
    if (const auto res = initMod(); res < 0) {
        return res;
    }

    refCount += 1;
    hModule = mod;
    return S_OK;
}

IUnknown *PCom::CreateObjectUnk(const wchar_t *clsid, const GUID* riid, IUnknown *outer) const {
    IUnknown *obj{};
    TESTHR(PcCreateObject(clsid, riid, reinterpret_cast<void**>(&obj), outer));
    return obj;
}

void PCom::Uninitialize() {
    if (const auto rc = refCount.fetch_sub(1, std::memory_order_relaxed); rc > 1) {
        return;
    }
    const auto termMod = reinterpret_cast<pc_term_module_t>(GetProcAddress(hModule, "PcTermModule"));
    termMod();
    FreeLibrary(hModule);
}

HRESULT PCom::SetRootNameSpace(IUnknown *ns) const {
    return PcRootNamespace(&ns);
}

HRESULT PcInitialize(const wchar_t *pcomModule) {
    const auto hModule = pcomModule ? MustLoadLibrary(pcomModule) : MustLoadLibrary(L"PCOM.dll");
    if (!hModule) {
        return E_FAIL;
    }

    if (G_PCOM.Init(hModule) < 0) {
        FreeLibrary(hModule);
        return E_FAIL;
    }

    for(const auto client_dll: CLIENT_DLLS) {
        MustLoadLibrary( client_dll);
    }

    return S_OK;
}

void PcUninitialize() {
    PCom::Uninitialize();
}




