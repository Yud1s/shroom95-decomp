// ScreenShot.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// TODO
enum E_ScrFileFormat
{
	Jpeg = 0
};

// Level: 0 0xf1d1
class CScreenShot;

class CScreenShot
{
	// Nested
	// Fields
	// Methods
public:
	static void __cdecl SaveFullScreenToJpg(const ZXString<char> &sFileName);

	static void __cdecl SaveFullScreenToJpg_0(const ZXString<char> &sFileName) {
		return SaveFullScreenToJpg(sFileName);
	}

public:
	static void __cdecl SaveFullScreenToJpg();
	static void __cdecl SaveFullScreenToJpg_1() {
		return SaveFullScreenToJpg();
	}

public:
	static void __cdecl SaveFullScreenDX(const ZXString<char> &sFileName, E_ScrFileFormat fileFormat);

public:
	static void __cdecl GetBaseFolder(ZXString<char> &sBaseFolder);

protected:
	static void __cdecl GetPicName(ZXString<char> &sFileName, const ZXString<char> &sFileExt);

protected:
	static int32_t __cdecl IsFileExist(const ZXString<char> &sFileName);

protected:
	static long __cdecl GetSeqNo(const ZXString<char> &sBaseFolder, const ZXString<char> &sFileExt);
};
STATIC_ASSERT_SIZE(CScreenShot, 1);
