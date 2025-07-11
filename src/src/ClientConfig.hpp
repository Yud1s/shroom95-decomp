#pragma once

#include <array>

constexpr auto DEFAULT_LOGIN_IP = "192.9.175.32";
constexpr int DEFAULT_LOGIN_PORT = 8484;
constexpr int CLIENT_VERSION = 95;

constexpr auto DEFAULT_LOGIN_ID = "admin_dec";
constexpr auto DEFAULT_LOGIN_PW = "test1234";

// String Pool file
constexpr auto STRING_POOL_PATH = L"../data/strings.bin";
constexpr auto WZ_PATH = L"../data/wz";

// Pre-load dlls
constexpr std::array<const wchar_t *, 7> CLIENT_DLLS = {
    L"d3dx9_31.dll",
    L"Shape2D.dll",
    L"ZLZ.dll",
    L"bdvid32.dll",
    L"bz32ex.dll",
    L"Canvas.dll",
    L"Gr2D_DX9.dll",
};

// Net encryption
constexpr bool CLIENT_NET_ENC = true;