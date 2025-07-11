// Util.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include "extra.h"

//#include "ActionMan/ActionMan.hpp"

void __cdecl play_ui_sound_str(uint32_t code);

int open_web_site(const char *url, const char *title);
int open_web_site2(const char *url);

void __cdecl msgbox_ZException(const ZException &e);
void __cdecl separate_string_by_width(ZArray<ZXString<char>> &asResult, ZXString<char> sInput, long nWidth, _x_com_ptr<IWzFont> pFont);
ZXString<char> __cdecl get_labeled_string(_x_com_ptr<IWzProperty> pProp, long nID, Ztl_bstr_t sKey);
uint32_t __cdecl get_sound_volume_by_pos(long x1, long y1);
_x_com_ptr<IWzFont> __cdecl get_basic_font(FONT_TYPE fType);
long __cdecl draw_text_by_image(_x_com_ptr<IWzCanvas> pCanvas, long nLeft, long nTop, ZXString<char> sText, _x_com_ptr<IWzProperty> pBase, long nHorzSpace);
_x_com_ptr<IWzProperty> __cdecl get_labeled_sub_1(_x_com_ptr<IWzProperty> pProp, ZXString<char> sID);
void __cdecl DrawGrayImage(_x_com_ptr<IWzCanvas> pCanvas, ZXString16 sUOL, long x, long y, long nAlpha);
void __cdecl format_largeinteger(ZXString<char> &sFormat, _LARGE_INTEGER li, int32_t bComma);
void __cdecl msgbox_com_error(const _com_error &e);
void __cdecl string_newline_by_width(ZXString<char> &sText, long nWidth, _x_com_ptr<IWzFont> pFont);
void __cdecl DrawTextA(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, ZXString<char> sText, IWzFont *pFont, ENUM_TEXT_ALIGN eAlign);
uint32_t __cdecl play_skill_sound(long nSkillId, SE_TYPE seType, long nSLV);
ZXString<char> __cdecl get_stringByKey(_x_com_ptr<IWzProperty> pProp, Ztl_bstr_t sKey);
_x_com_ptr<IWzProperty> __cdecl get_labeled_sub_0(_x_com_ptr<IWzProperty> pProp, long nID);
void __cdecl play_pet_sound(long nItemID, const wchar_t *sAction, uint32_t uVol);
int32_t __cdecl activate_web_site(const char *sTitle);
ZXString16 __cdecl UOL_Index(long sPath, long nIndex);
void __cdecl format_integer(ZXString<char> &sFormat, long i, int32_t bComma);
int32_t __cdecl format_string(ZXString<char> &sFormat, _x_com_ptr<IWzFont> pFont, long nWidth);
static int32_t __cdecl format_string_1(ZXString<char> &sFormat, _x_com_ptr<IWzFont> pFont, long nWidth)
{
    return format_string(sFormat, pFont, nWidth);
}
int32_t __cdecl format_string(ZXString16 &sFormat, _x_com_ptr<IWzFont> pFont, long nWidth);
static int32_t __cdecl format_string_0(ZXString16 &sFormat, _x_com_ptr<IWzFont> pFont, long nWidth)
{
    return format_string(sFormat, pFont, nWidth);
}
int32_t __cdecl DecodeFromJPEGBuffer(unsigned char *arg0, unsigned long arg1, unsigned char **arg2, unsigned long *arg3, unsigned long *arg4, unsigned long *arg5);
ZXString<char> __cdecl find_executable(const ZXString<char> &sExt);
ZXString<char> __cdecl format_com_error(const _com_error &e);
void __cdecl make_SingleColor_alpha_blur(_x_com_ptr<IWzRawCanvas> pRawCanvas, uint16_t wColor, uint16_t wRadius);
void __cdecl _anon__CopyDibToRawCanvas(unsigned char *pDib, _x_com_ptr<IWzRawCanvas> pRawCanvas, long x, long y, long w);
void __cdecl make_balloon(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long nWidth, long nHeight);
void __cdecl save_error_log(const ZXString<char> &errmsg);
void __cdecl play_mob_sound(unsigned long dwTemplateId, SE_TYPE seType, uint32_t uVol);
void __cdecl separate_string_by_line(ZArray<ZXString<char>> &asResult, ZXString<char> sInput);
void __cdecl play_ui_sound(const wchar_t *sSndName);
void __cdecl DrawImage(_x_com_ptr<IWzCanvas> pCanvas, ZXString16 sUOL, long x, long y);
void __cdecl play_game_sound(const wchar_t *sSndName, uint32_t uVol);
void __cdecl make_SingleColor_alpha_blur(_x_com_ptr<IWzCanvas> pCanvas, uint16_t wColor, uint16_t wRadius);
void __cdecl play_summon_sound(long nType, uint32_t uVol);
_x_com_ptr<IWzCanvas> __cdecl CreateCanvasFromJpeg(unsigned char *pData, unsigned long dwLen);
void __cdecl make_gray_raw_canvas(_x_com_ptr<IWzRawCanvas> pRawCanvas);
void __cdecl play_quest_sound(long nEffect);
long __cdecl draw_number_by_image(_x_com_ptr<IWzCanvas> pCanvas, long nLeft, long nTop, long nNo, _x_com_ptr<IWzProperty> pBase, long nHorzSpace);
ZXString<char> __cdecl get_labeled_string(_x_com_ptr<IWzProperty> pProp, ZXString<char> sID, Ztl_bstr_t sKey);
void __cdecl make_gray_canvas(_x_com_ptr<IWzCanvas> pCanvas);
int32_t __cdecl enum_next_in_directory(IEnumVARIANT *pEnum, Ztl_variant_t &vName, unsigned long &f);
void __cdecl play_item_sound(long nItemId, SE_TYPE seType);
int32_t __cdecl separate_channelName(ZXString<char> sAll, ZXString<char> &sWorld, ZXString<char> &sChannel, int32_t bAttachCH);
void __cdecl play_reactor_sound(const wchar_t *sReactor, SE_TYPE seType, uint32_t uVol);
