#pragma once

#include "wz/IWzBase.h"
#include "wz/IWzArchive.h"
#include "wz/IWzCanvas.h"
#include "wz/IWzFileSystem.h"
#include "wz/IWzFont.h"
#include "wz/IWzGr2D.h"
#include "wz/IWzGr2DLayer.h"
#include "wz/IWzNamespace.h"
#include "wz/IWzPackage.h"
#include "wz/IWzProperty.h"
#include "wz/IWzRawCanvas.h"
#include "wz/IWzRawCanvasAllocator.h"
#include "wz/IWzResMan.h"
#include "wz/IWzSeekableArchive.h"
#include "wz/IWzSerialize.h"
#include "wz/IWzShape2D.h"
#include "wz/IWzSound.h"
#include "wz/IWzUOL.h"
#include "wz/IWzVector2D.h"

#include "xcom_ptr.h"
#include "PCom.h"
static void __cdecl PcCreate_IWzGr2D(wchar_t const* sUOL, _x_com_ptr<IWzGr2D>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzGr2D>(sUOL, pUnkOuter);
}

static void __cdecl PcCreate_IWzResMan(wchar_t const* sUOL, _x_com_ptr<IWzResMan>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzResMan>(sUOL, pUnkOuter);
}

static void __cdecl PcCreate_IWzNameSpace(wchar_t const* sUOL, _x_com_ptr<IWzNameSpace>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzNameSpace>(sUOL, pUnkOuter);
}

// IWzFileSystem
static void __cdecl  PcCreate_IWzFileSystem(wchar_t const* sUOL, _x_com_ptr<IWzFileSystem>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzFileSystem>(sUOL, pUnkOuter);
}
// IWzPackage
static void __cdecl  PcCreate_IWzPackage(wchar_t const* sUOL, _x_com_ptr<IWzPackage>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzPackage>(sUOL, pUnkOuter);
}

// IWzCanvas
static void __cdecl PcCreate_IWzCanvas(wchar_t const* sUOL, _x_com_ptr<IWzCanvas>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzCanvas>(sUOL, pUnkOuter);
}

// IWzVector2D
static void __cdecl PcCreate_IWzVector2D(wchar_t const* sUOL, _x_com_ptr<IWzVector2D>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzVector2D>(sUOL, pUnkOuter);
}

// IWzFont
static void __cdecl PcCreate_IWzFont(wchar_t const* sUOL, _x_com_ptr<IWzFont>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzFont>(sUOL, pUnkOuter);
}

// IWzSound
static void __cdecl PcCreate_IWzSound(wchar_t const* sUOL, _x_com_ptr<IWzSound>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzSound>(sUOL, pUnkOuter);
}

// IWzProperty
static void __cdecl PcCreate_IWzProperty(wchar_t const* sUOL, _x_com_ptr<IWzProperty>& pOut, IUnknown* pUnkOuter = nullptr) {
    pOut = G_PCOM.CreateObjectPtr<IWzProperty>(sUOL, pUnkOuter);
}

static _x_com_ptr<IWzSeekableArchive> FAKE_PTR_IWzSeekableArchive{};
static _x_com_ptr<IWzPackage> FAKE_PTR_IWzPackage{};
static _x_com_ptr<IEnumVARIANT> FAKE_PTR_IEnumVARIANT{};
static _x_com_ptr<IUnknown> FAKE_PTR_IUnknown{};