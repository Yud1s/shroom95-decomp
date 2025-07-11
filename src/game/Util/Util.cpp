// Util.cpp
#include "Util.hpp"
#include "Util_regen.ipp"
#include "spdlog/spdlog.h"

int open_web_site(const char *url, const char *title) {
    //TODO UNIMPLEMENTED;
    return 0;
}

int open_web_site2(const char *url) {
    UNIMPLEMENTED;
    return 0;
}

void __cdecl msgbox_ZException(const ZException &e) {
    return __sub_0055D0A0(e);
}

void __cdecl separate_string_by_width(ZArray<ZXString<char>> &asResult, ZXString<char> sInput, long nWidth,
                                      _x_com_ptr<IWzFont> pFont) {
    return __sub_00564CA0(asResult, CreateNakedParam(sInput), nWidth, CreateNakedParam(pFont));
}

ZXString<char> __cdecl get_labeled_string(_x_com_ptr<IWzProperty> pProp, long nID, Ztl_bstr_t sKey) {
    return __sub_0055D9D0(CreateNakedParam(pProp), nID, CreateNakedParam(sKey));
}

uint32_t __cdecl get_sound_volume_by_pos(long x1, long y1) {
    //return __sub_0055B2A0(x1, y1);
    if (auto local = CUserLocal::GetInstance())
    {
        auto localPos = local->GetPos();
        auto dx = x1 - localPos.x;
        auto dy = y1 - localPos.y;
        auto dist = sqrt(dx*dx + dy*dy + 0.001);
        if ( dist < 250.0 )
            return 100;
        if ( dist <= 1000.0 )
            return (120.0 - dist * 0.08);
    }


    return 40;
}

_x_com_ptr<IWzFont> __cdecl get_basic_font(FONT_TYPE fType) {
    return __sub_0055F9D0(fType);
}

long __cdecl draw_text_by_image(_x_com_ptr<IWzCanvas> pCanvas, long nLeft, long nTop, ZXString<char> sText,
                                _x_com_ptr<IWzProperty> pBase, long nHorzSpace) {
    return __sub_00565410(CreateNakedParam(pCanvas), nLeft, nTop, CreateNakedParam(sText), CreateNakedParam(pBase), nHorzSpace);
}

_x_com_ptr<IWzProperty> __cdecl get_labeled_sub_1(_x_com_ptr<IWzProperty> pProp, ZXString<char> sID) {
    return __sub_0055D770(CreateNakedParam(pProp), CreateNakedParam(sID));
}

void __cdecl DrawGrayImage(_x_com_ptr<IWzCanvas> pCanvas, ZXString16 sUOL, long x, long y, long nAlpha) {
    return __sub_0055F080(CreateNakedParam(pCanvas), CreateNakedParam(sUOL), x, y, nAlpha);
}

void __cdecl format_largeinteger(ZXString<char> &sFormat, _LARGE_INTEGER li, int32_t bComma) {
    return __sub_00565D50(sFormat, li, bComma);
}

void __cdecl msgbox_com_error(const _com_error &e) {
    return __sub_0055CFC0(e);
}

void __cdecl string_newline_by_width(ZXString<char> &sText, long nWidth, _x_com_ptr<IWzFont> pFont) {
    return __sub_005652A0(sText, nWidth, CreateNakedParam(pFont));
}

void __cdecl DrawTextA(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, ZXString<char> sText, IWzFont *pFont,
                       ENUM_TEXT_ALIGN eAlign) {
    return __sub_0055F5A0(CreateNakedParam(pCanvas), x, y, CreateNakedParam(sText), pFont, eAlign);
}

uint32_t __cdecl play_skill_sound(long nSkillId, SE_TYPE seType, long nSLV) {
    return __sub_00566B60(nSkillId, seType, nSLV);
}

ZXString<char> __cdecl get_stringByKey(_x_com_ptr<IWzProperty> pProp, Ztl_bstr_t sKey) {
    return __sub_0055D8C0(CreateNakedParam(pProp), CreateNakedParam(sKey));
}

_x_com_ptr<IWzProperty> __cdecl get_labeled_sub_0(_x_com_ptr<IWzProperty> pProp, long nID) {
    return __sub_0055D660(CreateNakedParam(pProp), nID);
}

void __cdecl play_pet_sound(long nItemID, const wchar_t *sAction, uint32_t uVol) {
    return __sub_005683F0(nItemID, sAction, uVol);
}

int32_t __cdecl activate_web_site(const char *sTitle) {
    return __sub_0055B150(sTitle);
}

ZXString16 __cdecl UOL_Index(long sPath, long nIndex) {
    return __sub_00565FB0(sPath, nIndex);
}

void __cdecl format_integer(ZXString<char> &sFormat, long i, int32_t bComma) {
    return __sub_005658D0(sFormat, i, bComma);
}

int32_t __cdecl format_string(ZXString<char> &sFormat, _x_com_ptr<IWzFont> pFont, long nWidth) {
    return __sub_00566380(sFormat, CreateNakedParam(pFont), nWidth);
}

int32_t __cdecl format_string(ZXString16 &sFormat, _x_com_ptr<IWzFont> pFont, long nWidth) {
    return __sub_00566080(sFormat, CreateNakedParam(pFont), nWidth);
}

int32_t __cdecl DecodeFromJPEGBuffer(unsigned char *arg0, unsigned long arg1, unsigned char **arg2, unsigned long *arg3,
                                     unsigned long *arg4, unsigned long *arg5) {
    return __sub_0055BE60(arg0, arg1, arg2, arg3, arg4, arg5);
}

ZXString<char> __cdecl find_executable(const ZXString<char> &sExt) {
    return __sub_0055D2B0(sExt);
}

ZXString<char> __cdecl format_com_error(const _com_error &e) {
    return __sub_0055CD50(e);
}

void __cdecl make_SingleColor_alpha_blur(_x_com_ptr<IWzRawCanvas> pRawCanvas, uint16_t wColor, uint16_t wRadius) {
    return __sub_0055B790(CreateNakedParam(pRawCanvas), wColor, wRadius);
}

void
__cdecl _anon__CopyDibToRawCanvas(unsigned char *pDib, _x_com_ptr<IWzRawCanvas> pRawCanvas, long x, long y, long w) {
    return __sub_0055C010(pDib, CreateNakedParam(pRawCanvas), x, y, w);
}

void __cdecl make_balloon(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long nWidth, long nHeight) {
    return __sub_0055DE30(CreateNakedParam(pCanvas), x, y, nWidth, nHeight);
}

void __cdecl save_error_log(const ZXString<char> &errmsg) {
    return __sub_0055C800(errmsg);
}

void __cdecl play_mob_sound(unsigned long dwTemplateId, SE_TYPE seType, uint32_t uVol) {
    return __sub_00567760(dwTemplateId, seType, uVol);
}

void __cdecl separate_string_by_line(ZArray<ZXString<char>> &asResult, ZXString<char> sInput) {
    return __sub_00564BC0(asResult, CreateNakedParam(sInput));
}

void __cdecl play_ui_sound(const wchar_t *sSndName) {
    //TODO return __sub_005666E0(sSndName);
}

void __cdecl play_ui_sound_str(uint32_t code) {
    auto str = StringPool::GetInstance().GetStringW(code);
    play_ui_sound(reinterpret_cast<const wchar_t*>(str.c_str()));
}

void __cdecl DrawImage(_x_com_ptr<IWzCanvas> pCanvas, ZXString16 sUOL, long x, long y) {
    return __sub_0055EE20(CreateNakedParam(pCanvas), CreateNakedParam(sUOL), x, y);
}

void __cdecl play_game_sound(const wchar_t *sSndName, uint32_t uVol) {
    return __sub_00567420(sSndName, uVol);
}

void __cdecl make_SingleColor_alpha_blur(_x_com_ptr<IWzCanvas> pCanvas, uint16_t wColor, uint16_t wRadius) {
    return __sub_0055BC60(CreateNakedParam(pCanvas), wColor, wRadius);
}

void __cdecl play_summon_sound(long nType, uint32_t uVol) {
    return __sub_00567FA0(nType, uVol);
}

_x_com_ptr<IWzCanvas> __cdecl CreateCanvasFromJpeg(unsigned char *pData, unsigned long dwLen) {
    return __sub_0055C290(pData, dwLen);
}

void __cdecl make_gray_raw_canvas(_x_com_ptr<IWzRawCanvas> pRawCanvas) {
    //return __sub_0055B400(CreateNakedParam(pRawCanvas));
    long pitch = 0;
    Ztl_variant_t addr{};
    pRawCanvas->raw__LockAddress(&pitch, &addr);
    spdlog::info("gray addr: {}", addr.intVal);
    Z_UNIMPLEMENTED;
}

void __cdecl play_quest_sound(long nEffect) {
    return __sub_00568330(nEffect);
}

long __cdecl draw_number_by_image(_x_com_ptr<IWzCanvas> pCanvas, long nLeft, long nTop, long nNo,
                                  _x_com_ptr<IWzProperty> pBase, long nHorzSpace) {
    return __sub_00565780(CreateNakedParam(pCanvas), nLeft, nTop, nNo, CreateNakedParam(pBase), nHorzSpace);
}

ZXString<char> __cdecl get_labeled_string(_x_com_ptr<IWzProperty> pProp, ZXString<char> sID, Ztl_bstr_t sKey) {
    return __sub_0055DBF0(CreateNakedParam(pProp), CreateNakedParam(sID), CreateNakedParam(sKey));
}

void __cdecl make_gray_canvas(_x_com_ptr<IWzCanvas> pCanvas) {
    //TODO fix this crashing
    const auto tw = pCanvas->GettileWidth();
    const auto th = pCanvas->GettileHeight();
    if (!tw || !th)
        return;

    const auto w = pCanvas->Getwidth();
    const auto h = pCanvas->Getheight();

    const auto bx = (w + tw - 1) / tw;
    const auto by = (h + th - 1) / th;
    for (auto x = 0; x < bx; ++x)
    {
        for (auto y = 0; y < by; ++y)
        {
            auto raw = pCanvas->GetrawCanvas(x * tw, y * th);
            make_gray_raw_canvas(_x_com_ptr<IWzRawCanvas>(raw));
        }
    }
    //return __sub_0055B5A0(CreateNakedParam(pCanvas));
}

int32_t __cdecl enum_next_in_directory(IEnumVARIANT *pEnum, Ztl_variant_t &vName, unsigned long &f) {
    return __sub_0055CA90(pEnum, vName, f);
}

void __cdecl play_item_sound(long nItemId, SE_TYPE seType) {
    return __sub_00566840(nItemId, seType);
}

int32_t
__cdecl separate_channelName(ZXString<char> sAll, ZXString<char> &sWorld, ZXString<char> &sChannel, int32_t bAttachCH) {
    return __sub_0055F7E0(CreateNakedParam(sAll), sWorld, sChannel, bAttachCH);
}

void __cdecl play_reactor_sound(const wchar_t *sReactor, SE_TYPE seType, uint32_t uVol) {
    return __sub_00567630(sReactor, seType, uVol);
}
