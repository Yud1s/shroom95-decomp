//
//

#ifndef GMS95_REGEN_PCOM_H
#define GMS95_REGEN_PCOM_H

#include "wz/IWzBase.h"
#include "wz/IWzFont.h"
#include <WinSock2.h>
#include <windows.h>
#include <atomic>

#include "xcom_ptr.h"

typedef HRESULT (*pc_create_obj_t)(const wchar_t *clsid, const GUID *riid, void **ppv, IUnknown *outer);

typedef HRESULT (*pc_free_unused_t)();

typedef HRESULT (*pc_serialize_obj_t)(IUnknown **serialize, void *p);

typedef HRESULT (*pc_serialize_str_t)(const wchar_t *ps, IUnknown *archive, long id);

typedef HRESULT (*pc_root_ns_t)(IUnknown **ppNameSpace);

typedef HRESULT (*pc_init_module_t)();

typedef HRESULT (*pc_term_module_t)();


class PCom {
public:
    pc_create_obj_t PcCreateObject{};
    pc_free_unused_t PcFreeUnused{};
    pc_serialize_obj_t PcSerializeObject{};
    pc_serialize_str_t PcSerializeString{};
    pc_root_ns_t PcRootNamespace{};

    static inline HMODULE hModule{};
    static inline std::atomic_int refCount{};

public:
    HRESULT Init(HMODULE mod);
    static void Uninitialize();

    HRESULT SetRootNameSpace(IUnknown* ns) const;

    IUnknown* CreateObjectUnk(const wchar_t *clsid, const GUID* riid, IUnknown *outer = nullptr) const;
    template<typename T>
    T *CreateObject(const wchar_t *clsid, const GUID* riid, IUnknown *outer = nullptr) {
        return (T*)CreateObjectUnk(clsid, riid, outer);
    }

    template<typename T>
    _com_ptr_t<_com_IIID<T, &__uuidof(T)>> CreateObjectPtr(const wchar_t *clsid, IUnknown *outer = nullptr) {
        auto guid = __uuidof(T);
        return _com_ptr_t<_com_IIID<T, &__uuidof(T)>>(CreateObject<T>(clsid, &guid, outer), false);
    }


    _com_ptr_t<_com_IIID<IWzVector2D, &__uuidof(IWzVector2D)>> CreateVector2D()
    {
        return CreateObjectPtr<IWzVector2D>(L"Shape2D#Vector2D");
    }

    _com_ptr_t<_com_IIID<IWzFont, &__uuidof(IWzFont)>> CreateWzFont()
    {
        return this->CreateObjectPtr<IWzFont>(L"Canvas#Font");
    }

    _com_ptr_t<_com_IIID<IWzCanvas, &__uuidof(IWzCanvas)>> CreateCanvas()
    {
        return this->CreateObjectPtr<IWzCanvas>(L"Canvas");
    }



private:
    bool LoadProcs(HMODULE mod);
};

extern PCom G_PCOM;

HRESULT PcInitialize(const wchar_t *pcomModule);
void PcUninitialize();


#endif //GMS95_REGEN_PCOM_H
