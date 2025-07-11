// ScreenShot.cpp
#include "ScreenShot.hpp"
#include "ScreenShot_regen.ipp"

void __cdecl CScreenShot::SaveFullScreenToJpg(const ZXString<char>& sFileName) {
	__sub_002DB1E0(sFileName);
}
void __cdecl CScreenShot::SaveFullScreenToJpg() {
	__sub_002DB9F0();
}
void __cdecl CScreenShot::SaveFullScreenDX(const ZXString<char>& sFileName, E_ScrFileFormat fileFormat) {
	__sub_002DB600(sFileName, fileFormat);
}
void __cdecl CScreenShot::GetBaseFolder(ZXString<char>& sBaseFolder) {
	__sub_002DB6B0(sBaseFolder);
}
void __cdecl CScreenShot::GetPicName(ZXString<char>& sFileName, const ZXString<char>& sFileExt) {
	__sub_002DB840(sFileName, sFileExt);
}
int32_t __cdecl CScreenShot::IsFileExist(const ZXString<char>& sFileName) {
	return __sub_002DB0E0(sFileName);
}
long __cdecl CScreenShot::GetSeqNo(const ZXString<char>& sBaseFolder, const ZXString<char>& sFileExt) {
	return __sub_002DB490(sBaseFolder, sFileExt);
}

