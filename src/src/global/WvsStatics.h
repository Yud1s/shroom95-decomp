#include <array>
#include <cstdint>

#include "util/base.h"
#include "util/imports.h"

static ZSynchronizedHelper<ZFatalSection> FAKE_ZSynchronizedHelper_ZFatalSection{nullptr};

static void* _TI_SECURITY_UPDATE_FAILED = nullptr;
static void* _TI_SECURITY_INIT_FAILED = nullptr;
static void* _TI_SECURITY_CLEAR_FAILED = nullptr;
static void* _TI_THREAD_DETECTED = nullptr;
static void* _COM_ERROR_THROW_INFO = nullptr;

struct NMVirtualKey
{
    uint32_t uGameCode{};
    uint32_t uVirtualIDCode{};
};

static _FILETIME _FILETIME_HEX(uint32_t low, uint32_t high)
{
    _FILETIME ft{};
    ft.dwLowDateTime = low;
    ft.dwHighDateTime = high;
    return ft;
}


struct EHExceptionRecord
{
    struct EHParameters
    {
        uint32_t magicNumber{};
        void* pExceptionObject{};
        void const* pThrowInfo{};
    };

    uint32_t ExceptionCode{};
    uint32_t ExceptionFlags{};
    void* ExceptionRecord{};
    void* ExceptionAddress{};
    uint32_t NumberParameters{};
    EHParameters params;
};

static IID _IID_HEX(uint32_t a, uint16_t b, uint16_t c, uint64_t d)
{
    IID iid{};
    iid.Data1 = a;
    iid.Data2 = b;
    iid.Data3 = c;
    std::memcpy(iid.Data4, &d, 8);
    return iid;
}

static GUID _GUID_HEX(uint32_t a, uint16_t b, uint16_t c, uint64_t d)
{
    GUID guid{};
    guid.Data1 = a;
    guid.Data2 = b;
    guid.Data3 = c;
    std::memcpy(guid.Data4, &d, 8);
    return guid;
}

static IID __GUID_986515d9_0a0b_4929_8b4f_718682177b92 = _IID_HEX(0x986515d9, 0x0a0b, 0x4929, 0x927b178286714f8b);
static IID __GUID_e610818b_038d_4522_9232_30fcd5f4737c = _IID_HEX(0xe610818b, 0x038d, 0x4522, 0x7c73f4d5fc303292);
static IID __GUID_2aeeeb36_a4e1_4e2b_8f6f_2e7bdec5c53d = _IID_HEX(0x2aeeeb36, 0xa4e1, 0x4e2b, 0x3dc5c5de7b2e6f8f);
static IID __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e = _IID_HEX(0x7600dc6c, 0x9328, 0x4bff, 0x9e17015c0f5b2496);
static IID __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf = _IID_HEX(0x57dfe40b, 0x3e20, 0x4dbc, 0xbf81f3505a80e897);
static IID __GUID_352d8655_51e4_4668_8ce4_0866e2b6a5b5 = _IID_HEX(0x352d8655, 0x51e4, 0x4668, 0xb5a5b6e26608e48c);
static IID __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9 = _IID_HEX(0xe576ea33, 0xd465, 0x4f08, 0xd9e63ef78de7b1aa);
static IID __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4 = _IID_HEX(0xf28bd1ed, 0x3deb, 0x4f92, 0xb43f1c5aef10ec9e);
static IID __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf = _IID_HEX(0x6dc8c7ce, 0x8e81, 0x4420, 0xdffcd5b7604bf6b4);
static IID __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a = _IID_HEX(0x4cfb57c7, 0xeae3, 0x40b3, 0x2a64e350274b98ac);
static IID __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac = _IID_HEX(0x2bef046d, 0xccd6, 0x445a, 0xac305dc39f92c488);
static IID __GUID_3c39b9aa_18cc_408c_8716_c4fb2117266e = _IID_HEX(0x3c39b9aa, 0x18cc, 0x408c, 0x6e261721fbc41687);
static IID __GUID_1c923939_1338_4f8b_92cf_38935cee1fef = _IID_HEX(0x1c923939, 0x1338, 0x4f8b, 0xef1fee5c9338cf92);
static IID __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d = _IID_HEX(0xd9730ba4, 0x23f5, 0x4c2d, 0x5d76f33d7d0ed495);
static IID __GUID_01110bc6_d843_4ff1_918c_9cf64632fb15 = _IID_HEX(0x01110bc6, 0xd843, 0x4ff1, 0x15fb3246f69c8c91);
static IID __GUID_312126f0_c399_4111_8eab_0f96a30b6b7c = _IID_HEX(0x312126f0, 0xc399, 0x4111, 0x7c6b0ba3960fab8e);
static IID __GUID_b196b284_bab4_101a_b69c_00aa00341d07 = _IID_HEX(0xb196b284, 0xbab4, 0x101a, 0x071d3400aa009cb6);
static IID __GUID_00020404_0000_0000_c000_000000000046 = _IID_HEX(0x00020404, 0x0000, 0x0000, 0x46000000000000c0);

namespace _anon_ZAPILoader
{
    static void DecodePackage()
    {
    }

    static void MakeRawKey()
    {
    }

    static void InitDecoderInfo()
    {
    }

    static void LoadLibraries()
    {
    }

    static void LoadAPI()
    {
    }

    static void _Decode()
    {
    }

    static void Decode()
    {
    }

    static void ShowErrorMessageAndExit()
    {
    }
}

static double __real_3fe6666666666666 = 7e-1;
static double __real_41224f8000000000 = 6e5;
static double __real_41f0000000000000 = 4.294967296e9;
static double __real_3feffffde7210be9 = 9.99999e-1;
static float __real_00000000 = 0e0;
static double __real_3ff3333333333333 = 1.2e0;
static double __real_3ff0f5c28f5c28f6 = 1.06e0;
static double __real_403c000000000000 = 2.8e1;
static double __real_4076800000000000 = 3.6e2;
static double __real_3ff0a3d70a3d70a4 = 1.04e0;
static double __real_c079000000000000 = -4e2;
static double __real_408f400000000000 = 1e3;
static double __real_3fee666666666666 = 9.5e-1;
static double __real_4068800000000000 = 1.96e2;
static double __real_4039000000000000 = 2.5e1;
static double __real_3fe6666660000000 = 6.99999988079071e-1;
static double __real_3ff028f5c28f5c29 = 1.01e0;
static double __real_3ffccccccccccccd = 1.8e0;
static double __real_3fa999999999999a = 5e-2;
static double __real_3fb47ae147ae147b = 8e-2;
static double __real_41612a8800000000 = 9e6;
static double __real_3fdffffffeed1f41 = 4.99999999e-1;
static double __real_4147ffff80000000 = 3.145727e6;
static double __real_405e000000000000 = 1.2e2;
static double __real_3ff8000000000000 = 1.5e0;
static double __real_3fc3333333333333 = 1.5e-1;
static double __real_3fc999999999999a = 2e-1;
static double __real_c03e000000000000 = -3e1;
static float __real_42c80000 = 1e2;
static double __real_3f926e978d4fdf3b = 1.8e-2;
static double __real_4024000000000000 = 1e1;
static double __real_412967e800000000 = 8.325e5;
static double __real_4079000000000000 = 4e2;
static double __real_4097700000000000 = 1.5e3;
static double __real_4056800000000000 = 9e1;
static double __real_4046800000000000 = 4.5e1;
static double __real_3fefae147ae147ae = 9.9e-1;
static double __real_4040800000000000 = 3.3e1;
static double __real_412e848000000000 = 1e6;
static double __real_3ffb333333333333 = 1.7e0;
static double __real_4034000000000000 = 2e1;
static double __real_3ff0000000000000 = 1e0;
static double __real_4008000000000000 = 3e0;
static double __real_4044000000000000 = 4e1;
static double __real_4010000000000000 = 4e0;
static double __real_403f000000000000 = 3.1e1;
static double __real_c084500000000000 = -6.5e2;
static double __real_4053800000000000 = 7.8e1;
static double __real_3fe3333333333333 = 6e-1;
static double __real_bfd6a09e65dc27df = -3.5355339e-1;
static double __real_3fd0000000000000 = 2.5e-1;
static double __real_3ff0147ae147ae14 = 1.005e0;
static double __real_3ff147ae147ae148 = 1.08e0;
static double __real_4048000000000000 = 4.8e1;
static double __real_3fd999999999999a = 4e-1;
static double __real_4070e00000000000 = 2.7e2;
static double __real_3f50624dd2f1a9fc = 1e-3;
static double __real_402e000000000000 = 1.5e1;
static double __real_405e800000000000 = 1.22e2;
static double __real_4018000000000000 = 6e0;
static double __real_3f70624dd2f1a9fc = 4e-3;
static double __real_3ff051eb851eb852 = 1.02e0;
static double __real_3ff4cccccccccccd = 1.3e0;
static double __real_bf50624dd2f1a9fc = -1e-3;
static double __real_3f8eb851eb851eb8 = 1.5e-2;
static double __real_3fed70a3d70a3d71 = 9.2e-1;
static double __real_3ff7d70a3d70a3d7 = 1.49e0;
static double __real_3fda7efa00000000 = 4.140000343322754e-1;
static double __real_408c200000000000 = 9e2;
static double __real_4030000000000000 = 1.6e1;
static double __real_c059000000000000 = -1e2;
static double __real_3ff6666666666666 = 1.4e0;
static double __real_40c3880000000000 = 1e4;
static double __real_3faeb851eb851eb8 = 6e-2;
static double __real_3ff07ae147ae147b = 1.03e0;
static double __real_8000000000000000 = -0e0;
static double __real_3ffc000000000000 = 1.75e0;
static double __real_416312cfe0000000 = 9.999999e6;
static double __real_4082c00000000000 = 6e2;
static double __real_3f947ae147ae147b = 2e-2;
static double __real_3feb333333333333 = 8.5e-1;
static double __real_4092c00000000000 = 1.2e3;
static double __real_3feb6db6db6db6db = 8.571428571428571e-1;
static double __real_4058ff5c28f5c28f = 9.999e1;
static double __real_3fe8000000000000 = 7.5e-1;
static double __real_3fa47ae147ae147b = 4e-2;
static float __real_4f800000 = 4.2949673e9;
static double __real_3f9eb851eb851eb8 = 3e-2;
static double __real_3ff51eb851eb851f = 1.32e0;
static double __real_4049000000000000 = 5e1;
static double __real_405f400000000000 = 1.25e2;
static double __real_3f826e978d4fdf3b = 9e-3;
static double __real_3ff6e147ae147ae1 = 1.43e0;
static double __real_415312d000000000 = 5e6;
static double __real_3fd3333333333333 = 3e-1;
static double __real_4004000000000000 = 2.5e0;
static double __real_4016000000000000 = 5.5e0;
static double __real_3f80624dd2f1a9fc = 8e-3;
static double __real_4040aaaaaaaaaaab = 3.3333333333333336e1;
static double __real_c07c200000000000 = -4.5e2;
static double __real_4033000000000000 = 1.9e1;
static double __real_407f400000000000 = 5e2;
static double __real_40f86a0000000000 = 1e5;
static double __real_4086800000000000 = 7.2e2;
static double __real_3ff199999999999a = 1.1e0;
static double __real_bff0000000000000 = -1e0;
static double __real_3ff11eb851eb851f = 1.07e0;
static double __real_4060400000000000 = 1.3e2;
static double __real_416312d000000000 = 1e7;
static float __real_41880000 = 1.7e1;
static double __real_4066800000000000 = 1.8e2;
static double __real_406f400000000000 = 2.5e2;
static double __real_400599999999999a = 2.7e0;
static double __real_4000000000000000 = 2e0;
static double __real_403e000000000000 = 3e1;
static double __real_c072c00000000000 = -3e2;
static double __real_3ff599999999999a = 1.35e0;
static double __real_3ff4000000000000 = 1.25e0;
static double __real_412e847e00000000 = 9.99999e5;
static double __real_4086880000000000 = 7.21e2;
static double __real_4060e00000000000 = 1.35e2;
static double __real_4059000000000000 = 1e2;
static double __real_3fb999999999999a = 1e-1;
static double __real_4014000000000000 = 5e0;
static double __real_4150017ec0000000 = 4.195835e6;
static double __real_3f9999999999999a = 2.5e-2;
static double __real_4089000000000000 = 8e2;
static double __real_c0a1f80000000000 = -2.3e3;
static double __real_3feccccccccccccd = 9e-1;
static float __real_3f800000 = 1e0;
static double __real_3fe999999999999a = 8e-1;
static double __real_40e86a0000000000 = 5e4;
static double __real_0000000000000000 = 0e0;
static double __real_3fe0000000000000 = 5e-1;
static double __real_404e000000000000 = 6e1;

// 86F430 4
// TODO static _com_ptr_t<_com_IIID<IWzGr2D,&_GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9> > _D_G_GR{};
// 86F434 4
// TODO static _com_ptr_t<_com_IIID<IWzResMan,&_GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf> > _D_G_RM{};
// 86F438 4
// TODO static _com_ptr_t<_com_IIID<IWzSound,&_GUID_1c923939_1338_4f8b_92cf_38935cee1fef> > _D_G_SOUND{};
// 86F43C 4
// TODO static _com_ptr_t<_com_IIID<IWzNameSpace,&_GUID_2aeeeb36_a4e1_4e2b_8f6f_2e7bdec5c53d> > _D_G_ROOT{};
// 86F440 60
// TODO static std::array<_com_ptr_t<_com_IIID<IWzNameSpace,&_GUID_2aeeeb36_a4e1_4e2b_8f6f_2e7bdec5c53d> >, 60> _D_G_SUB{};
// 86F480 392
// TODO static std::array<_com_ptr_t<_com_IIID<IWzFont,&_GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac> >, 392> _D_SPFONTBASIC{};


const int32_t kHeight = 1024;
//
const int32_t kWidth = 768;
// 86F440 60

// 86F480 392
static std::array<void*, 392> _D_SPFONTBASIC{};
// 62FE6C 4
static unsigned long _D_LEADUPVEC = 0xA2FE78;
// 62FEE8 4
static unsigned long _D_UNWINDUPVEC = 0xA2FF4B;
// 62FF54 4
static unsigned long _D_TRAILUPVEC = 0xA2FF64;
// 62FFF8 4
static unsigned long _D_LEADDOWNVEC = 0xA30004;
// 630084 4
static unsigned long _D_UNWINDDOWNVEC = 0xA300A4;
// 6300F0 4
static unsigned long _D_TRAILDOWNVEC = 0xA30100;
// 630B7C 4
static unsigned long _D_LEADUPVEC__1 = 0xA30B88;
// 630BF8 4
static unsigned long _D_UNWINDUPVEC__1 = 0xA30C5B;
// 630C64 4
static unsigned long _D_TRAILUPVEC__1 = 0xA30C74;
// 630D08 4
static unsigned long _D_LEADDOWNVEC__1 = 0xA30D14;
// 630D94 4
static unsigned long _D_UNWINDDOWNVEC__1 = 0xA30DB4;
// 630E00 4
static unsigned long _D_TRAILDOWNVEC__1 = 0xA30E10;
// 64A700 2624
//static std::array<none_t, 2624> _D_C_RGODFDIJOY2{};
// 7143F0 4
static std::array<proc_t*, 4> _D___XC_A{};
// 746894 4
static proc_t* _D__S6__3{};
// 746898 4
static proc_t* _D__S5__1{};
// 7468A0 4
static std::array<proc_t*, 4> _D___XC_Z{};
// 7468A4 4
static std::array<proc_t*, 4> _D___XI_A{};
// 7468A8 4
static proc_t* _D_PINIT{};
// 7468AC 4
static proc_t* _D_PINIT__5{};
// 7468B0 4
static proc_t* _D_PINIT__4{};
// 7468B4 4
static proc_t* _D_PINIT__2{};
// 7468B8 4
static proc_t* _D_PINIT__1{};
// 7468BC 4
static proc_t* _D_PINIT__3{};
// 7468C0 4
static std::array<proc_t*, 4> _D___XI_Z{};
// 7468C4 4
static std::array<proc_t*, 4> _D___XP_A{};
// 7468C8 4
static proc_t* _D_PTERM{};
// 7468CC 4
static proc_t* _D_PTERM__1{};
// 7468D0 4
static std::array<proc_t*, 4> _D___XP_Z{};
// 7468D4 4
static std::array<proc_t*, 4> _D___XT_A{};
// 7468D8 4
static std::array<proc_t*, 4> _D___XT_Z{};
// 7469C4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__221{};
// 7469E0 8
static _FILETIME _D_DB_DATE_19000101__229 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 746F18 4
static const char* _D_SZSTRINGVAL__21{};
// 746F1C 4
static const char* _D_MULTISZSTRINGVAL__21{};
// 746F20 4
static const char* _D_SZDWORDVAL__21{};
// 746F24 4
static const char* _D_SZBINARYVAL__21{};
// 746F28 4
static const char* _D_SZVALTOKEN__21{};
// 746F2C 4
static const char* _D_SZFORCEREMOVE__21{};
// 746F30 4
static const char* _D_SZNOREMOVE__21{};
// 746F34 4
static const char* _D_SZDELETE__21{};
// 746F38 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__8{};
// 746F54 8
static _FILETIME _D_DB_DATE_19000101__7 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7472E0 4
static const char* _D_SZSTRINGVAL__20{};
// 7472E4 4
static const char* _D_MULTISZSTRINGVAL__20{};
// 7472E8 4
static const char* _D_SZDWORDVAL__20{};
// 7472EC 4
static const char* _D_SZBINARYVAL__20{};
// 7472F0 4
static const char* _D_SZVALTOKEN__20{};
// 7472F4 4
static const char* _D_SZFORCEREMOVE__20{};
// 7472F8 4
static const char* _D_SZNOREMOVE__20{};
// 7472FC 4
static const char* _D_SZDELETE__20{};
// 74731C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__11{};
// 747338 8
static _FILETIME _D_DB_DATE_19000101__11 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7473B0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__220{};
// 7473CC 8
static _FILETIME _D_DB_DATE_19000101__228 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 747BA8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__219{};
// 747BC4 8
static _FILETIME _D_DB_DATE_19000101__227 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 747BCC 8
static _FILETIME _D_DB_DATE_20790101__38 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 747C70 16
static tagRECT _D_RCBODYDEFAULT{};
// 747C80 16
static tagRECT _D_RCBODYPRONE{};
// 747CAC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__9{};
// 747CC8 8
static _FILETIME _D_DB_DATE_19000101__9 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 747D9C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__218{};
// 747DB8 8
static const double _D_MAX_DOUBLE_VALUE = 10e+200; // TODO
// 747DC0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__217{};
// 747DDC 8
static _FILETIME _D_DB_DATE_19000101__226 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 747F1C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__216{};
// 747F38 8
static _FILETIME _D_DB_DATE_19000101__225 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7480B4 4
static const char* _D_SZSTRINGVAL__19{};
// 7480B8 4
static const char* _D_MULTISZSTRINGVAL__19{};
// 7480BC 4
static const char* _D_SZDWORDVAL__19{};
// 7480C0 4
static const char* _D_SZBINARYVAL__19{};
// 7480C4 4
static const char* _D_SZVALTOKEN__19{};
// 7480C8 4
static const char* _D_SZFORCEREMOVE__19{};
// 7480CC 4
static const char* _D_SZNOREMOVE__19{};
// 7480D0 4
static const char* _D_SZDELETE__19{};
// 7481EC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__7{};
// 748218 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__215{};
// 748234 8
static _FILETIME _D_DB_DATE_19000101__224 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 748858 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__214{};
// 748874 8
static _FILETIME _D_DB_DATE_19000101__223 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74887C 8
static _FILETIME _D_DB_DATE_20790101__37 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7496EC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__213{};
// 749708 8
static _FILETIME _D_DB_DATE_19000101__222 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 749800 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__212{};
// 74981C 8
static _FILETIME _D_DB_DATE_19000101__221 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 749844 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__211{};
// 749860 8
static _FILETIME _D_DB_DATE_19000101__220 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 749868 8
static _FILETIME _D_DB_DATE_20790101__36 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 749B8C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__210{};
// 749BA8 8
static _FILETIME _D_DB_DATE_19000101__219 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 749BD8 4
static const char* _D_SZSTRINGVAL{};
// 749BDC 4
static const char* _D_MULTISZSTRINGVAL{};
// 749BE0 4
static const char* _D_SZDWORDVAL{};
// 749BE4 4
static const char* _D_SZBINARYVAL{};
// 749BE8 4
static const char* _D_SZVALTOKEN{};
// 749BEC 4
static const char* _D_SZFORCEREMOVE{};
// 749BF0 4
static const char* _D_SZNOREMOVE{};
// 749BF4 4
static const char* _D_SZDELETE{};
// 749BF8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__4{};
// 749C14 8
static _FILETIME _D_DB_DATE_19000101__4 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 749DD0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__209{};
// 749DEC 8
static _FILETIME _D_DB_DATE_19000101__218 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 749E9C 8
static _FILETIME _D_DB_DATE_19000101__217 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 749EA4 4
static const char* _D_SZSTRINGVAL__18{};
// 749EA8 4
static const char* _D_MULTISZSTRINGVAL__18{};
// 749EAC 4
static const char* _D_SZDWORDVAL__18{};
// 749EB0 4
static const char* _D_SZBINARYVAL__18{};
// 749EB4 4
static const char* _D_SZVALTOKEN__18{};
// 749EB8 4
static const char* _D_SZFORCEREMOVE__18{};
// 749EBC 4
static const char* _D_SZNOREMOVE__18{};
// 749EC0 4
static const char* _D_SZDELETE__18{};
// 749EC4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__208{};
// 749EE0 8
static _FILETIME _D_DB_DATE_19000101__216 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 749F68 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__207{};
// 749F90 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__206{};
// 749FAC 8
static _FILETIME _D_DB_DATE_19000101__215 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74A080 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__205{};
// 74A09C 8
static _FILETIME _D_DB_DATE_19000101__214 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74A270 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__204{};
// 74A28C 8
static _FILETIME _D_DB_DATE_19000101__213 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74A2A4 8
static _FILETIME _D_DB_DATE_19000101__212 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74A2CC 8
static _FILETIME _D_DB_DATE_19000101__8 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74A568 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__203{};
// 74A584 8
static _FILETIME _D_DB_DATE_19000101__211 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74AABC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__202{};
// 74AAD8 8
static _FILETIME _D_DB_DATE_19000101__210 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74AB6C 8
static _FILETIME _D_DB_DATE_19000101__209 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74AB74 8
static _FILETIME _D_DB_DATE_20790101__35 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 74AFF4 8
static _FILETIME _D_DB_DATE_19000101__208 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74B08C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__201{};
// 74B0A8 8
static _FILETIME _D_DB_DATE_19000101__207 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74B0B0 8
static _FILETIME _D_DB_DATE_20790101__34 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 74B0F0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__200{};
// 74B10C 8
static _FILETIME _D_DB_DATE_19000101__206 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74B114 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__199{};
// 74B130 8
static _FILETIME _D_DB_DATE_19000101__205 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74B138 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__198{};
// 74B154 8
static _FILETIME _D_DB_DATE_19000101__204 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74B15C 8
static _FILETIME _D_DB_DATE_20790101__33 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 74B320 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__197{};
// 74B33C 8
static _FILETIME _D_DB_DATE_19000101__203 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74B400 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__196{};
// 74B41C 8
static _FILETIME _D_DB_DATE_19000101__202 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74B450 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__195{};
// 74B488 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__194{};
// 74B4C0 8
static _FILETIME _D_DB_DATE_19000101__201 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74B558 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__193{};
// 74B574 8
static _FILETIME _D_DB_DATE_19000101__200 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74BA64 4
static const char* _D_SZSTRINGVAL__17{};
// 74BA68 4
static const char* _D_MULTISZSTRINGVAL__17{};
// 74BA6C 4
static const char* _D_SZDWORDVAL__17{};
// 74BA70 4
static const char* _D_SZBINARYVAL__17{};
// 74BA74 4
static const char* _D_SZVALTOKEN__17{};
// 74BA78 4
static const char* _D_SZFORCEREMOVE__17{};
// 74BA7C 4
static const char* _D_SZNOREMOVE__17{};
// 74BA80 4
static const char* _D_SZDELETE__17{};
// 74BA84 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__192{};
// 74BAA0 8
static _FILETIME _D_DB_DATE_19000101__199 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74BAB0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__191{};
// 74BACC 8
static _FILETIME _D_DB_DATE_19000101__198 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74BAD4 8
static _FILETIME _D_DB_DATE_20790101__32 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 74BC58 4
static const char* _D_SZSTRINGVAL__16{};
// 74BC5C 4
static const char* _D_MULTISZSTRINGVAL__16{};
// 74BC60 4
static const char* _D_SZDWORDVAL__16{};
// 74BC64 4
static const char* _D_SZBINARYVAL__16{};
// 74BC68 4
static const char* _D_SZVALTOKEN__16{};
// 74BC6C 4
static const char* _D_SZFORCEREMOVE__16{};
// 74BC70 4
static const char* _D_SZNOREMOVE__16{};
// 74BC74 4
static const char* _D_SZDELETE__16{};
// 74BC78 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__190{};
// 74BC94 8
static _FILETIME _D_DB_DATE_19000101__197 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74BC9C 8
static _FILETIME _D_DB_DATE_20790101__31 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 74C804 24
static std::array<std::array<const char, 4>, 24> _D_SG_RANKSTRING{};
// 74C81C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__189{};
// 74C838 8
static _FILETIME _D_DB_DATE_19000101__196 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74C850 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__188{};
// 74C86C 8
static _FILETIME _D_DB_DATE_19000101__195 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74C904 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__187{};
// 74C920 8
static _FILETIME _D_DB_DATE_19000101__194 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74C9B4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__186{};
// 74C9D0 8
static _FILETIME _D_DB_DATE_19000101__193 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74CA18 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__185{};
// 74CA34 8
static _FILETIME _D_DB_DATE_19000101__192 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74CA3C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__184{};
// 74CA58 8
static _FILETIME _D_DB_DATE_19000101__191 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74CAF0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__183{};
// 74CB0C 8
static _FILETIME _D_DB_DATE_19000101__190 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74CBA4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__182{};
// 74CBC0 8
static _FILETIME _D_DB_DATE_19000101__189 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74CC54 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__181{};
// 74CC70 8
static _FILETIME _D_DB_DATE_19000101__188 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74CD0C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__180{};
// 74CD28 8
static _FILETIME _D_DB_DATE_19000101__187 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74CD48 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__179{};
// 74CD64 8
static _FILETIME _D_DB_DATE_19000101__186 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74CFA0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__178{};
// 74CFBC 8
static _FILETIME _D_DB_DATE_19000101__185 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74D054 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__177{};
// 74D070 8
static _FILETIME _D_DB_DATE_19000101__184 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74D078 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__176{};
// 74D094 8
static _FILETIME _D_DB_DATE_19000101__183 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74D2A8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__175{};
// 74D2C4 8
static _FILETIME _D_DB_DATE_19000101__182 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74D32C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__174{};
// 74D348 8
static _FILETIME _D_DB_DATE_19000101__181 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74D360 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__14{};
// 74D37C 8
static _FILETIME _D_DB_DATE_19000101__14 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74D414 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__173{};
// 74D430 8
static _FILETIME _D_DB_DATE_19000101__180 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74D82C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__172{};
// 74D848 8
static _FILETIME _D_DB_DATE_19000101__179 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74D8DC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__171{};
// 74D8F8 8
static _FILETIME _D_DB_DATE_19000101__178 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74D91C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__170{};
// 74D938 8
static _FILETIME _D_DB_DATE_19000101__177 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74DA58 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__169{};
// 74DA74 8
static _FILETIME _D_DB_DATE_19000101__176 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74DA7C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__168{};
// 74DA98 8
static _FILETIME _D_DB_DATE_19000101__175 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74DB2C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__167{};
// 74DB48 8
static _FILETIME _D_DB_DATE_19000101__174 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74DBE8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__166{};
// 74DC04 8
static _FILETIME _D_DB_DATE_19000101__173 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74DC90 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__165{};
// 74DCAC 8
static _FILETIME _D_DB_DATE_19000101__172 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74DDE4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__3{};
// 74DE00 8
static _FILETIME _D_DB_DATE_19000101__3 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74DE0C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__164{};
// 74DE28 8
static _FILETIME _D_DB_DATE_19000101__171 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74DE30 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__163{};
// 74DE4C 8
static _FILETIME _D_DB_DATE_19000101__170 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74E5A8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__162{};
// 74E5C4 8
static _FILETIME _D_DB_DATE_19000101__169 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74E9E0 8
static _FILETIME _D_DB_DATE_19000101__168 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74E9E8 8
static _FILETIME _D_DB_DATE_20790101__30 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 74E9F4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__161{};
// 74EA10 8
static _FILETIME _D_DB_DATE_19000101__167 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74EA2C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__160{};
// 74EA48 8
static _FILETIME _D_DB_DATE_19000101__166 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74EA50 8
static _FILETIME _D_DB_DATE_20790101__29 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 74ED20 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__159{};
// 74ED3C 8
static _FILETIME _D_DB_DATE_19000101__165 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74EDF4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__158{};
// 74EE10 8
static _FILETIME _D_DB_DATE_19000101__164 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74EE18 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__157{};
// 74EE34 8
static _FILETIME _D_DB_DATE_19000101__163 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74EE58 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__156{};
// 74EE74 8
static _FILETIME _D_DB_DATE_19000101__162 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74EFDC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__155{};
// 74EFF8 8
static _FILETIME _D_DB_DATE_19000101__161 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74FDDC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__154{};
// 74FDF8 8
static _FILETIME _D_DB_DATE_19000101__160 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74FEBC 8
static _FILETIME _D_DB_DATE_19000101__159 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74FF40 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__153{};
// 74FF5C 8
static _FILETIME _D_DB_DATE_19000101__158 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 74FFB4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__152{};
// 74FFD0 8
static _FILETIME _D_DB_DATE_19000101__157 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 750328 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__151{};
// 750344 8
static _FILETIME _D_DB_DATE_19000101__156 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 75069C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__150{};
// 7506B8 8
static _FILETIME _D_DB_DATE_19000101__155 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 75088C 8
static _FILETIME _D_DB_DATE_19000101__154 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 750958 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__149{};
// 750974 8
static _FILETIME _D_DB_DATE_19000101__153 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7511FC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__148{};
// 751218 8
static _FILETIME _D_DB_DATE_19000101__152 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7512C8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__147{};
// 7512E4 8
static _FILETIME _D_DB_DATE_19000101__151 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 75144C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__146{};
// 751468 8
static _FILETIME _D_DB_DATE_19000101__150 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7516C8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__145{};
// 7516E4 8
static _FILETIME _D_DB_DATE_19000101__149 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 75170C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__144{};
// 751728 8
static _FILETIME _D_DB_DATE_19000101__148 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 751730 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__143{};
// 75174C 8
static _FILETIME _D_DB_DATE_19000101__147 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7518CC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__142{};
// 7518E8 8
static _FILETIME _D_DB_DATE_19000101__146 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 751BDC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__141{};
// 751BF8 8
static _FILETIME _D_DB_DATE_19000101__145 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 751CC4 8
static _FILETIME _D_DB_DATE_19000101__144 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 751DA0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__140{};
// 751DBC 8
static _FILETIME _D_DB_DATE_19000101__143 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 751DF0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__139{};
// 751E0C 8
static _FILETIME _D_DB_DATE_19000101__142 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 751EE8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__138{};
// 751F04 8
static _FILETIME _D_DB_DATE_19000101__141 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 751F0C 8
static _FILETIME _D_DB_DATE_20790101__28 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 752054 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__10{};
// 752070 8
static _FILETIME _D_DB_DATE_19000101__10 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 75208C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__137{};
// 7522FC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__136{};
// 752318 8
static _FILETIME _D_DB_DATE_19000101__140 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 752380 8
static NMVirtualKey _D_KEYVIRTUALALL{};
// 752388 8
static NMVirtualKey _D_KEYNEXONCOM{};
// 752390 8
static NMVirtualKey _D_KEYKART{};
// 752398 9
static std::array<const char, 9> _D_S_SZSYSTEM{};
// 7523A4 9
static std::array<const char, 9> _D_S_SZNOTICE{};
// 7523B0 7
static std::array<const char, 7> _D_S_SZOPEN{};
// 752628 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__135{};
// 752644 8
static _FILETIME _D_DB_DATE_19000101__139 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 75264C 8
static _FILETIME _D_DB_DATE_20790101__27 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7526E4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__134{};
// 752700 8
static _FILETIME _D_DB_DATE_19000101__138 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 752708 8
static _FILETIME _D_DB_DATE_20790101__26 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 752744 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__133{};
// 752760 8
static _FILETIME _D_DB_DATE_19000101__137 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 752780 8
static const double _D_DBSQR2 = 1.4140000343322754;
// 752794 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__132{};
// 7527B0 8
static _FILETIME _D_DB_DATE_19000101__136 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7527B8 8
static _FILETIME _D_DB_DATE_20790101__25 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 75293C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__131{};
// 752958 8
static _FILETIME _D_DB_DATE_19000101__135 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 752A34 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__130{};
// 752A50 8
static _FILETIME _D_DB_DATE_19000101__134 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 752AA4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__129{};
// 752AC0 8
static _FILETIME _D_DB_DATE_19000101__133 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 753474 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__128{};
// 753490 8
static _FILETIME _D_DB_DATE_19000101__132 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 753498 8
static _FILETIME _D_DB_DATE_20790101__24 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 753DD4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__127{};
// 753DF0 8
static _FILETIME _D_DB_DATE_19000101__131 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 753EAC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__126{};
// 753EC8 8
static _FILETIME _D_DB_DATE_19000101__130 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 753F74 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__125{};
// 753F90 8
static _FILETIME _D_DB_DATE_19000101__129 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 753FAC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__124{};
// 753FC8 8
static _FILETIME _D_DB_DATE_19000101__128 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 753FD0 8
static _FILETIME _D_DB_DATE_20790101__23 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 75402C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__123{};
// 754048 8
static _FILETIME _D_DB_DATE_19000101__127 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754050 8
static _FILETIME _D_DB_DATE_20790101__22 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 754460 8
static _FILETIME _D_DB_DATE_19000101__126 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 75446C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__122{};
// 754488 8
static _FILETIME _D_DB_DATE_19000101__125 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754808 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__121{};
// 754824 8
static _FILETIME _D_DB_DATE_19000101__124 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754A14 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__13{};
// 754A30 8
static _FILETIME _D_DB_DATE_19000101__13 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754AA0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__120{};
// 754ABC 8
static _FILETIME _D_DB_DATE_19000101__123 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754BA8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__119{};
// 754BC4 8
static _FILETIME _D_DB_DATE_19000101__122 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754C60 8
static _FILETIME _D_DB_DATE_19000101__121 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754CFC 8
static _FILETIME _D_DB_DATE_19000101__120 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754D0C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__118{};
// 754D28 8
static _FILETIME _D_DB_DATE_19000101__119 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754D34 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__117{};
// 754D50 8
static _FILETIME _D_DB_DATE_19000101__118 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 754F40 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__116{};
// 754F5C 8
static _FILETIME _D_DB_DATE_19000101__117 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 755058 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__115{};
// 755080 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__114{};
// 75509C 8
static _FILETIME _D_DB_DATE_20790101__21 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7553EC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__113{};
// 755408 8
static _FILETIME _D_DB_DATE_19000101__116 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7554B8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__112{};
// 7554D4 8
static _FILETIME _D_DB_DATE_19000101__115 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 755564 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__111{};
// 755580 8
static _FILETIME _D_DB_DATE_19000101__114 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 755934 8
static _FILETIME _D_DB_DATE_19000101__113 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 75594C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__110{};
// 755968 8
static _FILETIME _D_DB_DATE_19000101__112 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 755A68 4
static const char* _D_SZSTRINGVAL__15{};
// 755A6C 4
static const char* _D_MULTISZSTRINGVAL__15{};
// 755A70 4
static const char* _D_SZDWORDVAL__15{};
// 755A74 4
static const char* _D_SZBINARYVAL__15{};
// 755A78 4
static const char* _D_SZVALTOKEN__15{};
// 755A7C 4
static const char* _D_SZFORCEREMOVE__15{};
// 755A80 4
static const char* _D_SZNOREMOVE__15{};
// 755A84 4
static const char* _D_SZDELETE__15{};
// 755AF4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__109{};
// 755E8C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__108{};
// 755EA8 8
static _FILETIME _D_DB_DATE_19000101__111 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 755EB0 8
static _FILETIME _D_DB_DATE_20790101__20 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 756778 2048
static std::array<std::array<const unsigned long, 256>, 2048> _D_S_AADWP2{};
// 7575D8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__107{};
// 7575F4 8
static _FILETIME _D_DB_DATE_19000101__110 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79885C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__106{};
// 798878 8
static _FILETIME _D_DB_DATE_19000101__109 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 798994 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__105{};
// 7989D4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__104{};
// 7989F0 8
static _FILETIME _D_DB_DATE_19000101__108 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 798A84 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__103{};
// 798AA0 8
static _FILETIME _D_DB_DATE_19000101__107 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 798AB8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__102{};
// 798AD4 8
static _FILETIME _D_DB_DATE_19000101__106 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 798ADC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__101{};
// 798AF8 8
static _FILETIME _D_DB_DATE_19000101__105 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 798B00 8
static _FILETIME _D_DB_DATE_20790101__19 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 798B60 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__100{};
// 798B7C 8
static _FILETIME _D_DB_DATE_19000101__104 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 798BA4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__99{};
// 798BC0 8
static _FILETIME _D_DB_DATE_19000101__103 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 798BC8 8
static _FILETIME _D_DB_DATE_20790101__18 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 798E64 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__98{};
// 798E80 8
static _FILETIME _D_DB_DATE_19000101__102 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 798E88 8
static _FILETIME _D_DB_DATE_20790101__17 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7991D8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__97{};
// 7991F4 8
static _FILETIME _D_DB_DATE_19000101__101 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7992B4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__96{};
// 7992D0 8
static _FILETIME _D_DB_DATE_19000101__100 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 799470 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__95{};
// 79948C 8
static _FILETIME _D_DB_DATE_19000101__99 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7995F4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__94{};
// 799610 8
static _FILETIME _D_DB_DATE_19000101__98 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7997B0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__93{};
// 7997CC 8
static _FILETIME _D_DB_DATE_19000101__97 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79AD54 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__92{};
// 79AD70 8
static _FILETIME _D_DB_DATE_19000101__96 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79AE08 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__91{};
// 79AE24 8
static _FILETIME _D_DB_DATE_19000101__95 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79B098 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__90{};
// 79B0B4 8
static _FILETIME _D_DB_DATE_19000101__94 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79B150 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__89{};
// 79B16C 8
static _FILETIME _D_DB_DATE_19000101__93 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79B7F0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__88{};
// 79B80C 8
static _FILETIME _D_DB_DATE_19000101__92 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79B89C 4
static const char* _D_SZSTRINGVAL__14{};
// 79B8A0 4
static const char* _D_MULTISZSTRINGVAL__14{};
// 79B8A4 4
static const char* _D_SZDWORDVAL__14{};
// 79B8A8 4
static const char* _D_SZBINARYVAL__14{};
// 79B8AC 4
static const char* _D_SZVALTOKEN__14{};
// 79B8B0 4
static const char* _D_SZFORCEREMOVE__14{};
// 79B8B4 4
static const char* _D_SZNOREMOVE__14{};
// 79B8B8 4
static const char* _D_SZDELETE__14{};
// 79B8BC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__87{};
// 79B8D8 8
static _FILETIME _D_DB_DATE_19000101__91 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79C070 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__86{};
// 79C08C 8
static _FILETIME _D_DB_DATE_19000101__90 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79C564 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__85{};
// 79C580 8
static _FILETIME _D_DB_DATE_19000101__89 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79C8C0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__84{};
// 79C8DC 8
static _FILETIME _D_DB_DATE_19000101__88 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79CC3C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__83{};
// 79CC58 8
static _FILETIME _D_DB_DATE_19000101__87 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79CCF8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__82{};
// 79CD14 8
static _FILETIME _D_DB_DATE_19000101__86 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79CF9C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__81{};
// 79CFB8 8
static _FILETIME _D_DB_DATE_19000101__85 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79D094 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__80{};
// 79D0B0 8
static _FILETIME _D_DB_DATE_19000101__84 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79D0B8 8
static _FILETIME _D_DB_DATE_20790101__16 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 79D0C0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__2{};
// 79D0DC 8
static _FILETIME _D_DB_DATE_19000101__2 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79D234 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__79{};
// 79D250 8
static _FILETIME _D_DB_DATE_19000101__83 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79D6D0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__78{};
// 79D6EC 8
static _FILETIME _D_DB_DATE_19000101__82 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79D6F4 8
static _FILETIME _D_DB_DATE_20790101__15 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 79D960 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__77{};
// 79D97C 8
static _FILETIME _D_DB_DATE_19000101__81 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79D984 8
static _FILETIME _D_DB_DATE_20790101__14 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 79DB08 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__76{};
// 79DB24 8
static _FILETIME _D_DB_DATE_19000101__80 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79DCF8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__75{};
// 79DD14 8
static _FILETIME _D_DB_DATE_19000101__79 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79E04C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__74{};
// 79E068 8
static _FILETIME _D_DB_DATE_19000101__78 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79E148 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__73{};
// 79E164 8
static _FILETIME _D_DB_DATE_19000101__77 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79E1F4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__72{};
// 79E210 8
static _FILETIME _D_DB_DATE_19000101__76 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79E218 8
static _FILETIME _D_DB_DATE_20790101__13 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 79E7FC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__71{};
// 79E818 8
static _FILETIME _D_DB_DATE_19000101__75 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79EE14 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__70{};
// 79EE30 8
static _FILETIME _D_DB_DATE_19000101__74 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79F390 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__69{};
// 79F3AC 8
static _FILETIME _D_DB_DATE_19000101__73 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79F848 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__68{};
// 79F864 8
static _FILETIME _D_DB_DATE_19000101__72 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 79F884 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__67{};
// 79F8A0 8
static _FILETIME _D_DB_DATE_19000101__71 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A0178 4
static const char* _D_SZSTRINGVAL__13{};
// 7A017C 4
static const char* _D_MULTISZSTRINGVAL__13{};
// 7A0180 4
static const char* _D_SZDWORDVAL__13{};
// 7A0184 4
static const char* _D_SZBINARYVAL__13{};
// 7A0188 4
static const char* _D_SZVALTOKEN__13{};
// 7A018C 4
static const char* _D_SZFORCEREMOVE__13{};
// 7A0190 4
static const char* _D_SZNOREMOVE__13{};
// 7A0194 4
static const char* _D_SZDELETE__13{};
// 7A0198 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__66{};
// 7A01B4 8
static _FILETIME _D_DB_DATE_19000101__70 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A03D0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__65{};
// 7A03EC 8
static _FILETIME _D_DB_DATE_19000101__69 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A0A5C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__64{};
// 7A0A78 8
static _FILETIME _D_DB_DATE_19000101__68 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A0CBC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__63{};
// 7A0CD8 8
static _FILETIME _D_DB_DATE_19000101__67 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A0EB0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__62{};
// 7A0ECC 8
static _FILETIME _D_DB_DATE_19000101__66 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A0F60 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__61{};
// 7A0F7C 8
static _FILETIME _D_DB_DATE_19000101__65 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A0F84 8
static _FILETIME _D_DB_DATE_20790101__12 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7A10DC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__12{};
// 7A10F8 8
static _FILETIME _D_DB_DATE_19000101__12 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A1100 8
static _FILETIME _D_DB_DATE_20790101 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7A1FD8 8
static _FILETIME _D_DB_DATE_19000101__64 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A1FE0 8
static _FILETIME _D_DB_DATE_20790101__11 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7A2120 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__60{};
// 7A213C 8
static _FILETIME _D_DB_DATE_19000101__63 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A234C 4
static const char* _D_SZSTRINGVAL__12{};
// 7A2350 4
static const char* _D_MULTISZSTRINGVAL__12{};
// 7A2354 4
static const char* _D_SZDWORDVAL__12{};
// 7A2358 4
static const char* _D_SZBINARYVAL__12{};
// 7A235C 4
static const char* _D_SZVALTOKEN__12{};
// 7A2360 4
static const char* _D_SZFORCEREMOVE__12{};
// 7A2364 4
static const char* _D_SZNOREMOVE__12{};
// 7A2368 4
static const char* _D_SZDELETE__12{};
// 7A236C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__59{};
// 7A2388 8
static _FILETIME _D_DB_DATE_19000101__62 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A25E4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__58{};
// 7A2600 8
static _FILETIME _D_DB_DATE_19000101__61 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A27E0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__57{};
// 7A27FC 8
static _FILETIME _D_DB_DATE_19000101__60 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A2808 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__56{};
// 7A2824 8
static _FILETIME _D_DB_DATE_19000101__59 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A32C0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__55{};
// 7A32DC 8
static _FILETIME _D_DB_DATE_19000101__58 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A397C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__54{};
// 7A3998 8
static _FILETIME _D_DB_DATE_19000101__57 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A3C54 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__53{};
// 7A3C70 8
static _FILETIME _D_DB_DATE_19000101__56 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A42D0 8
static _FILETIME _D_DB_DATE_19000101__55 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A4368 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__52{};
// 7A4384 8
static _FILETIME _D_DB_DATE_19000101__54 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A4910 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__51{};
// 7A492C 8
static _FILETIME _D_DB_DATE_19000101__53 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A4A70 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__50{};
// 7A4A8C 8
static _FILETIME _D_DB_DATE_19000101__52 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A5A20 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__49{};
// 7A5A3C 8
static _FILETIME _D_DB_DATE_19000101__51 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A5A44 8
static _FILETIME _D_DB_DATE_20790101__10 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7A5BFC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__48{};
// 7A5C18 8
static _FILETIME _D_DB_DATE_19000101__50 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A5DD8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__47{};
// 7A5DF4 8
static _FILETIME _D_DB_DATE_19000101__49 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A5DFC 8
static _FILETIME _D_DB_DATE_20790101__9 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7A6BD8 4
static const char* _D_SZSTRINGVAL__11{};
// 7A6BDC 4
static const char* _D_MULTISZSTRINGVAL__11{};
// 7A6BE0 4
static const char* _D_SZDWORDVAL__11{};
// 7A6BE4 4
static const char* _D_SZBINARYVAL__11{};
// 7A6BE8 4
static const char* _D_SZVALTOKEN__11{};
// 7A6BEC 4
static const char* _D_SZFORCEREMOVE__11{};
// 7A6BF0 4
static const char* _D_SZNOREMOVE__11{};
// 7A6BF4 4
static const char* _D_SZDELETE__11{};
// 7A6BF8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__46{};
// 7A6C14 8
static _FILETIME _D_DB_DATE_19000101__48 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A8F10 4
static const char* _D_SZSTRINGVAL__10{};
// 7A8F14 4
static const char* _D_MULTISZSTRINGVAL__10{};
// 7A8F18 4
static const char* _D_SZDWORDVAL__10{};
// 7A8F1C 4
static const char* _D_SZBINARYVAL__10{};
// 7A8F20 4
static const char* _D_SZVALTOKEN__10{};
// 7A8F24 4
static const char* _D_SZFORCEREMOVE__10{};
// 7A8F28 4
static const char* _D_SZNOREMOVE__10{};
// 7A8F2C 4
static const char* _D_SZDELETE__10{};
// 7A8F30 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__45{};
// 7A8F4C 8
static _FILETIME _D_DB_DATE_19000101__47 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A9104 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__44{};
// 7A9120 8
static _FILETIME _D_DB_DATE_19000101__46 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A91B8 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__43{};
// 7A91D4 8
static _FILETIME _D_DB_DATE_19000101__45 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A92D0 24
static std::array<const long, 24> _D_ADELAY_FIST{};
// 7A92E8 16
static std::array<const long, 16> _D_ADELAY_VAMPIRE{};
// 7A961C 4
static const char* _D_SZSTRINGVAL__9{};
// 7A9620 4
static const char* _D_MULTISZSTRINGVAL__9{};
// 7A9624 4
static const char* _D_SZDWORDVAL__9{};
// 7A9628 4
static const char* _D_SZBINARYVAL__9{};
// 7A962C 4
static const char* _D_SZVALTOKEN__9{};
// 7A9630 4
static const char* _D_SZFORCEREMOVE__9{};
// 7A9634 4
static const char* _D_SZNOREMOVE__9{};
// 7A9638 4
static const char* _D_SZDELETE__9{};
// 7A963C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__42{};
// 7A9658 8
static _FILETIME _D_DB_DATE_19000101__44 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7A9660 8
static _FILETIME _D_DB_DATE_20790101__8 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7A9F34 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__41{};
// 7A9F50 8
static _FILETIME _D_DB_DATE_19000101__43 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AA02C 4
static const char* _D_SZSTRINGVAL__8{};
// 7AA030 4
static const char* _D_MULTISZSTRINGVAL__8{};
// 7AA034 4
static const char* _D_SZDWORDVAL__8{};
// 7AA038 4
static const char* _D_SZBINARYVAL__8{};
// 7AA03C 4
static const char* _D_SZVALTOKEN__8{};
// 7AA040 4
static const char* _D_SZFORCEREMOVE__8{};
// 7AA044 4
static const char* _D_SZNOREMOVE__8{};
// 7AA048 4
static const char* _D_SZDELETE__8{};
// 7AA04C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__40{};
// 7AA068 8
static _FILETIME _D_DB_DATE_19000101__42 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AA104 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__39{};
// 7AA120 8
static _FILETIME _D_DB_DATE_19000101__41 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AA168 4
static const char* _D_SZSTRINGVAL__7{};
// 7AA16C 4
static const char* _D_MULTISZSTRINGVAL__7{};
// 7AA170 4
static const char* _D_SZDWORDVAL__7{};
// 7AA174 4
static const char* _D_SZBINARYVAL__7{};
// 7AA178 4
static const char* _D_SZVALTOKEN__7{};
// 7AA17C 4
static const char* _D_SZFORCEREMOVE__7{};
// 7AA180 4
static const char* _D_SZNOREMOVE__7{};
// 7AA184 4
static const char* _D_SZDELETE__7{};
// 7AA188 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__38{};
// 7AA1A4 8
static _FILETIME _D_DB_DATE_19000101__40 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AA234 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__37{};
// 7AA250 8
static _FILETIME _D_DB_DATE_19000101__39 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AA340 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__36{};
// 7AA35C 8
static _FILETIME _D_DB_DATE_19000101__38 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AB1E4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__35{};
// 7AB200 8
static _FILETIME _D_DB_DATE_19000101__37 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AB208 8
static _FILETIME _D_DB_DATE_20790101__7 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7ABB44 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE{};
// 7ABB60 8
static _FILETIME _D_DB_DATE_19000101 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7ABDE0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__34{};
// 7ABDFC 8
static _FILETIME _D_DB_DATE_19000101__36 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AC000 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__5{};
// 7AC01C 8
static _FILETIME _D_DB_DATE_19000101__5 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AC13C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__33{};
// 7AC250 8
static const double _D_FDRAG = 40000;
// 7AC258 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__32{};
// 7AC274 8
static _FILETIME _D_DB_DATE_19000101__35 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AC374 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__31{};
// 7AC390 8
static _FILETIME _D_DB_DATE_19000101__34 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AC48C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__6{};
// 7AC4A8 8
static _FILETIME _D_DB_DATE_19000101__6 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AC5B0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__30{};
// 7AC5CC 8
static _FILETIME _D_DB_DATE_19000101__33 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AC6D0 4
static const char* _D_SZSTRINGVAL__6{};
// 7AC6D4 4
static const char* _D_MULTISZSTRINGVAL__6{};
// 7AC6D8 4
static const char* _D_SZDWORDVAL__6{};
// 7AC6DC 4
static const char* _D_SZBINARYVAL__6{};
// 7AC6E0 4
static const char* _D_SZVALTOKEN__6{};
// 7AC6E4 4
static const char* _D_SZFORCEREMOVE__6{};
// 7AC6E8 4
static const char* _D_SZNOREMOVE__6{};
// 7AC6EC 4
static const char* _D_SZDELETE__6{};
// 7AC6F0 30
static std::array<const char, 30> _D_SCLASSNAME{};
// 7AC718 8
static _FILETIME _D_DB_DATE_19000101__32 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AC8B0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__29{};
// 7AC8CC 8
static _FILETIME _D_DB_DATE_19000101__31 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AC8D4 8
static _FILETIME _D_DB_DATE_20790101__6 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7ACB60 4
static const char* _D_SZSTRINGVAL__5{};
// 7ACB64 4
static const char* _D_MULTISZSTRINGVAL__5{};
// 7ACB68 4
static const char* _D_SZDWORDVAL__5{};
// 7ACB6C 4
static const char* _D_SZBINARYVAL__5{};
// 7ACB70 4
static const char* _D_SZVALTOKEN__5{};
// 7ACB74 4
static const char* _D_SZFORCEREMOVE__5{};
// 7ACB78 4
static const char* _D_SZNOREMOVE__5{};
// 7ACB7C 4
static const char* _D_SZDELETE__5{};
// 7ACB80 8
static _FILETIME _D_DB_DATE_19000101__30 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7ACB88 8
static _FILETIME _D_DB_DATE_20790101__5 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7ACC44 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__1{};
// 7ACC60 8
static _FILETIME _D_DB_DATE_19000101__1 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7ACD20 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__28{};
// 7ACD3C 8
static _FILETIME _D_DB_DATE_19000101__29 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7ACD44 8
static _FILETIME _D_DB_DATE_20790101__4 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7AD0A0 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__27{};
// 7AD0BC 8
static _FILETIME _D_DB_DATE_19000101__28 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AD224 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__26{};
// 7AD240 8
static _FILETIME _D_DB_DATE_19000101__27 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AD248 8
static _FILETIME _D_DB_DATE_20790101__3 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7AD4E4 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__25{};
// 7AD500 8
static _FILETIME _D_DB_DATE_19000101__26 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AD508 4
static const char* _D_SZSTRINGVAL__4{};
// 7AD50C 4
static const char* _D_MULTISZSTRINGVAL__4{};
// 7AD510 4
static const char* _D_SZDWORDVAL__4{};
// 7AD514 4
static const char* _D_SZBINARYVAL__4{};
// 7AD518 4
static const char* _D_SZVALTOKEN__4{};
// 7AD51C 4
static const char* _D_SZFORCEREMOVE__4{};
// 7AD520 4
static const char* _D_SZNOREMOVE__4{};
// 7AD524 4
static const char* _D_SZDELETE__4{};
// 7AD528 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__24{};
// 7AD544 8
static _FILETIME _D_DB_DATE_19000101__25 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AD54C 8
static _FILETIME _D_DB_DATE_20790101__2 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7AE150 4
static const char* _D_SZSTRINGVAL__3{};
// 7AE154 4
static const char* _D_MULTISZSTRINGVAL__3{};
// 7AE158 4
static const char* _D_SZDWORDVAL__3{};
// 7AE15C 4
static const char* _D_SZBINARYVAL__3{};
// 7AE160 4
static const char* _D_SZVALTOKEN__3{};
// 7AE164 4
static const char* _D_SZFORCEREMOVE__3{};
// 7AE168 4
static const char* _D_SZNOREMOVE__3{};
// 7AE16C 4
static const char* _D_SZDELETE__3{};
// 7AE170 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__23{};
// 7AE18C 8
static _FILETIME _D_DB_DATE_19000101__24 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AE194 8
static _FILETIME _D_DB_DATE_20790101__1 = _FILETIME_HEX(0xBB058000, 0x217E646);
// 7AE374 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__22{};
// 7AE390 8
static _FILETIME _D_DB_DATE_19000101__23 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AE398 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__21{};
// 7AE3B4 8
static _FILETIME _D_DB_DATE_19000101__22 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AE3BC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__20{};
// 7AE3D8 8
static _FILETIME _D_DB_DATE_19000101__21 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AE3E4 4
static const char* _D_SZSTRINGVAL__2{};
// 7AE3E8 4
static const char* _D_MULTISZSTRINGVAL__2{};
// 7AE3EC 4
static const char* _D_SZDWORDVAL__2{};
// 7AE3F0 4
static const char* _D_SZBINARYVAL__2{};
// 7AE3F4 4
static const char* _D_SZVALTOKEN__2{};
// 7AE3F8 4
static const char* _D_SZFORCEREMOVE__2{};
// 7AE3FC 4
static const char* _D_SZNOREMOVE__2{};
// 7AE400 4
static const char* _D_SZDELETE__2{};
// 7AE404 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__19{};
// 7AE420 8
static _FILETIME _D_DB_DATE_19000101__20 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AE428 4
static const char* _D_SZSTRINGVAL__1{};
// 7AE42C 4
static const char* _D_MULTISZSTRINGVAL__1{};
// 7AE430 4
static const char* _D_SZDWORDVAL__1{};
// 7AE434 4
static const char* _D_SZBINARYVAL__1{};
// 7AE438 4
static const char* _D_SZVALTOKEN__1{};
// 7AE43C 4
static const char* _D_SZFORCEREMOVE__1{};
// 7AE440 4
static const char* _D_SZNOREMOVE__1{};
// 7AE444 4
static const char* _D_SZDELETE__1{};
// 7AE448 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__18{};
// 7AE464 8
static _FILETIME _D_DB_DATE_19000101__19 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AE46C 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__17{};
// 7AE488 8
static _FILETIME _D_DB_DATE_19000101__18 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AE750 8
static _FILETIME _D_DB_DATE_19000101__17 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AE898 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__16{};
// 7AE8B4 8
static _FILETIME _D_DB_DATE_19000101__16 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AEACC 28
static std::array<const long, 28> _D_RIDING_WILDHUNTE__15{};
// 7AEAE8 8
static _FILETIME _D_DB_DATE_19000101__15 = _FILETIME_HEX(0xFDE04000, 0x14F373B);
// 7AEC54 16
static _GUID _D_IID_IDOCHOSTUIHA = _GUID_HEX(0xBD3F23C0, 0xD43E, 0x11CF, 0x1ACEBD00AA003B89);
// 7AEC64 16
static _GUID _D_IID_IDOCHOSTSHOW = _GUID_HEX(0xC4D244B0, 0xD43E, 0x11CF, 0x1ACEBD00AA003B89);
// 7AEC74 16
static _GUID _D_IID_IOLECLIENTSI = _GUID_HEX(0x118, 0x0, 0x0, 0x46000000000000C0);
// 7AEC84 16
static _GUID _D_IID_IOLEOBJECT = _GUID_HEX(0x112, 0x0, 0x0, 0x46000000000000C0);
// 7AEC94 16
static _GUID _D_IID_IOLEWINDOW = _GUID_HEX(0x114, 0x0, 0x0, 0x46000000000000C0);
// 7AECA4 16
static _GUID _D_IID_IOLEINPLACEA = _GUID_HEX(0x117, 0x0, 0x0, 0x46000000000000C0);
// 7AECB4 16
static _GUID _D_IID_IOLEINPLACEO = _GUID_HEX(0x113, 0x0, 0x0, 0x46000000000000C0);
// 7AECC4 16
static _GUID _D_IID_IOLEINPLACES = _GUID_HEX(0x119, 0x0, 0x0, 0x46000000000000C0);
// 7AECD4 16
static _GUID _D_IID_IVIEWOBJECT = _GUID_HEX(0x10D, 0x0, 0x0, 0x46000000000000C0);
// 7AECE4 16
static _GUID _D_IID_IWEBBROWSER2 = _GUID_HEX(0xD30C1661, 0xCDAF, 0x11D0, 0x6EE2C94FC0003E8A);
// 7AECF4 16
static _GUID _D_DIID_DWEBBROWSER = _GUID_HEX(0x34A715A0, 0x6587, 0x11D0, 0x4DACC7AF20004A92);
// 7AED04 16
static _GUID _D_CLSID_WEBBROWSER = _GUID_HEX(0x8856F961, 0x340A, 0x11D0, 0xA205D74FC0006BA9);
// 7AED14 16
static _GUID _D_IID_IDISPATCH = _GUID_HEX(0x20400, 0x0, 0x0, 0x46000000000000C0);
// 7AED24 16
static _GUID _D_IID_IUNKNOWN = _GUID_HEX(0x0, 0x0, 0x0, 0x46000000000000C0);
// 7AEEF8 4
static proc_t* _D__FPINIT{};
// 7AEEFC 4
static proc_t* _D__FPMTINIT{};
// 7AEF00 4
static proc_t* _D__FPMTTERM{};
// 7AEF04 32
static EHExceptionRecord _D_EXCEPTIONTEMPLAT{};
// 7AEF30 8
static uint64_t _D__ONE__1 = 0x3FF0000000000000;
// 7AEF40 8
static uint64_t _D__BNS = 0x433;
// 7AEF50 8
static uint64_t _D__ZERO__2 = 0x0;
// 7AEF60 8
static uint64_t _D__S = 0x7FF;
// 7AEF70 8
static uint64_t _D__NEGZERO = 0x8000000000000000;
// 7AEF80 8
static uint64_t _D__ONE__2 = 0x3FF0000000000000;
// 7AEF90 8
static uint64_t _D__BNS__1 = 0x433;
// 7AEFA0 8
static uint64_t _D__NEGONE = 0xBFF0000000000000;
// 7AEFB0 8
static uint64_t _D__NEGZERO__1 = 0x8000000000000000;
// 7AEFC0 8
static uint64_t _D__S__1 = 0x7FF;
// 7AF028 89
static std::array<const char, 89> _D___LOOKUPTABLE{};
// 7AF0C8 8
static _EXCEPTION_POINTERS _D_GS_EXCEPTIONPOIN{};
// 7AF0D0 4
static proc_t* _D__PDESTRUCTEXCEPT{};
// 7AF160 8
static uint64_t _D_SHIFTER__3 = 0x4338000000000000;
// 7AF170 8
static uint64_t _D_TBL_ADDR = 0x3CE4FACCE3DDA158;
// 7B0070 8
static uint64_t _D_T_TABLE = 0x3FEFEFBB9D85B0FD;
// 7B0870 8
static uint64_t _D_PI_BY_2 = 0x3C91A62633145C07;
// 7B0880 8
static uint64_t _D_NEG_PI = 0xBCA1A62633145C07;
// 7B0890 8
static uint64_t _D_PI__217 = 0x3CA1A62633145C07;
// 7B08A0 8
static uint64_t _D_SIGNMASK = 0x8000000000000000;
// 7B08B0 8
static uint64_t _D_HALFMASK = 0xFFFFFFFFF8000000;
// 7B08C0 8
static uint64_t _D_HALFMASK2 = 0x7FFFFFC000000000;
// 7B08D0 8
static uint64_t _D_CV = 0x0;
// 7B08F0 8
static uint64_t _D_CV2 = 0x3F96E8BA2E8BA2E9;
// 7B0930 8
static uint64_t _D_ABSVALMASK__1 = 0x7FFFFFFFFFFFFFFF;
// 7B0938 8
static uint64_t _D_TMASK = 0xFFFFC00000000000;
// 7B0940 8
static uint64_t _D_ONEMASK__1 = 0x3FF0000000000000;
// 7B0948 8
static uint64_t _D_ONE_BY_2 = 0x3FE0000000000000;
// 7B0950 8
static uint64_t _D_EMIN__1 = 0x10000000000000;
// 7B0958 8
static uint64_t _D_MAX_ARG = 0x40862E42FEFA39EF;
// 7B0960 8
static uint64_t _D_MIN_ARG = 0xC086232BDD70000;
// 7B0968 8
static uint64_t _D_INF__2 = 0x7FF0000000000000;
// 7B0970 8
static uint64_t _D_ZERO__1 = 0x0;
// 7B0978 8
static uint64_t _D_ALPHA = 0x37F0000000000000;
// 7B0980 8
static uint64_t _D_ONE__3 = 0x3FF0000000000000;
// 7B0988 2
static unsigned short _D__DEFAULT_CW_IN_M = 0x27F;
// 7B098A 10
static long double _D__PI_BY_2_TO_61{};
// 7B0994 8
static uint64_t _D_DBLMAX = 0x7FEFFFFFFFFFFFFF;
// 7B099C 8
static uint64_t _D_DBLMIN = 0x10000000000000;
// 7B09A4 8
static uint64_t _D_IEEEADJO = 0xC098000000000000;
// 7B09AC 8
static uint64_t _D_IEEEADJU = 0x4098000000000000;
// 7B09B4 8
static uint64_t _D__INFINITY = 0x7FF0000000000000;
// 7B09BC 8
static uint64_t _D__ZERO = 0x0;
// 7B09C8 0
// TODO static std::array<const _XCPT_ACTION, 0> _D__XCPTACTTAB{};
// 7B1000 8
static uint64_t _D_CTABLE__1 = 0x0;
// 7B1800 8
static uint64_t _D_SC_1__1 = 0xBFC5555555555555;
// 7B1810 8
static uint64_t _D_SC_2__1 = 0x3F81111111111111;
// 7B1820 8
static uint64_t _D_SC_3__1 = 0xBF2A01A01A01A01A;
// 7B1830 8
static uint64_t _D_SC_4__1 = 0x3EC71DE3A556C734;
// 7B1840 8
static uint64_t _D_PI32INV__1 = 0x40245F306DC9C883;
// 7B1848 8
static uint64_t _D_SHIFTER__2 = 0x4338000000000000;
// 7B1850 8
static uint64_t _D_P_2__1 = 0x3D90B4611A600000;
// 7B1860 8
static uint64_t _D_P_1__1 = 0x3FB921FB54400000;
// 7B1868 8
static uint64_t _D_P_3__1 = 0x3B63198A2E037073;
// 7B1870 8
static uint64_t _D_TWO_POW_55__1 = 0x4360000000000000;
// 7B1878 8
static uint64_t _D_TWO_POW_M55__1 = 0x3C80000000000000;
// 7B1880 8
static uint64_t _D_ALL_ONES__1 = 0x3FEFFFFFFFFFFFFF;
// 7B1888 8
static uint64_t _D_NEG_ZERO__2 = 0x8000000000000000;
// 7B1890 8
static uint64_t _D_ONE__2 = 0x3FF0000000000000;
// 7B18A0 8
static uint64_t _D_CTABLE = 0x0;
// 7B20A0 8
static uint64_t _D_SC_1 = 0xBFC5555555555555;
// 7B20B0 8
static uint64_t _D_SC_2 = 0x3F81111111111111;
// 7B20C0 8
static uint64_t _D_SC_3 = 0xBF2A01A01A01A01A;
// 7B20D0 8
static uint64_t _D_SC_4 = 0x3EC71DE3A556C734;
// 7B20E0 8
static uint64_t _D_PI32INV = 0x40245F306DC9C883;
// 7B20E8 8
static uint64_t _D_SHIFTER = 0x4338000000000000;
// 7B20F0 8
static uint64_t _D_P_2 = 0x3D90B4611A600000;
// 7B2100 8
static uint64_t _D_P_1 = 0x3FB921FB54400000;
// 7B2108 8
static uint64_t _D_P_3 = 0x3B63198A2E037073;
// 7B2110 8
static uint64_t _D_TWO_POW_55 = 0x4360000000000000;
// 7B2118 8
static uint64_t _D_TWO_POW_M55 = 0x3C80000000000000;
// 7B2120 8
static uint64_t _D_ALL_ONES = 0x3FEFFFFFFFFFFFFF;
// 7B2128 8
static uint64_t _D_NEG_ZERO = 0x8000000000000000;
// 7B2130 8
static uint64_t _D_ONE = 0x3FF0000000000000;
// 7B2140 8
static uint64_t _D_SIGN_MASK = 0x7FFFFFFFFFFFFFFF;
// 7B2150 8
static uint64_t _D_DBLMAX__1 = 0x7FEFFFFFFFFFFFFF;
// 7B2158 8
static uint64_t _D_DBLMIN__1 = 0x10000000000000;
// 7B2160 8
static uint64_t _D_IEEEADJO__1 = 0xC098000000000000;
// 7B2168 8
static uint64_t _D_IEEEADJU__1 = 0x4098000000000000;
// 7B2170 8
static uint64_t _D__INFINITY__2 = 0x7FF0000000000000;
// 7B2178 8
static uint64_t _D__ZERO__3 = 0x0;
// 7B2180 8
static uint64_t _D__MEXP = 0x7FF0000000000000;
// 7B2190 8
static uint64_t _D__MABS = 0x7FFFFFFFFFFFFFFF;
// 7B21A0 8
static uint64_t _D__PI_2D = 0x3FF921FB54442D18;
// 7B21B0 8
static uint64_t _D__D1400 = 0x3FD5555555555552;
// 7B21C0 8
static uint64_t _D__D1213 = 0x3FC249249246AA76;
// 7B21D0 8
static uint64_t _D__D1011 = 0x3FB745D15933DE8A;
// 7B21E0 8
static uint64_t _D__D89 = 0x3FB110F5EEB76ECA;
// 7B21F0 8
static uint64_t _D__D67 = 0x3FAAE4492FE3A600;
// 7B2200 8
static uint64_t _D__D45 = 0x3FA51FA164891ABE;
// 7B2210 8
static uint64_t _D__D23 = 0x3F974721481CA2A2;
// 7B2220 8
static uint64_t _D__D01 = 0x3F66107C30E0B8A5;
// 7B2230 8
static uint64_t _D__P60 = 0x3FD55555555554EB;
// 7B2240 8
static uint64_t _D__P45 = 0x3FC249249014497E;
// 7B2250 8
static uint64_t _D__P23 = 0x3FB7453BA342480F;
// 7B2260 8
static uint64_t _D__P01 = 0x3FAE9BE97B0F8D08;
// 7B2270 8
static uint64_t _D__CNTSHF = 0x40201;
// 7B2278 8
static uint64_t _D__ZERO__1 = 0x0;
// 7B2280 8
static uint64_t _D__ONEN = 0xBFF0000000000000;
// 7B2288 8
static uint64_t _D__ONE = 0x3FF0000000000000;
// 7B2290 8
static uint64_t _D__CNST8 = 0x4020000000000000;
// 7B2298 8
static uint64_t _D__IN3 = 0x4020000000000000;
// 7B22A0 8
static uint64_t _D__IN2 = 0x3FD8000000000000;
// 7B22A8 8
static uint64_t _D__IN1 = 0x3FA0000000000000;
// 7B22B0 8
static uint64_t _D__IN0 = 0x3E40000000000000;
// 7B22B8 8
static uint64_t _D__IN = 0x434D02967C31CDB5;
// 7B22C0 8
static uint64_t _D__MINVAL = 0x10000000000000;
// 7B22C8 8
static uint64_t _D_LIBM_SMALL__1 = 0x200000000000000;
// 7B22D0 127
static std::array<const char, 127> _D__FIRST_127CHAR{};
// 7B2350 16
static std::array<const uint32_t, 16> _D_INF{};
// 7B2360 16
static std::array<const uint32_t, 16> _D_BIG{};
// 7B2370 16
static std::array<const uint32_t, 16> _D_ZERO{};
// 7B2380 8
static std::array<const uint32_t, 8> _D_INF_32{};
// 7B2388 8
static std::array<const uint32_t, 8> _D_NAN_32{};
// 7B2390 8
static std::array<const uint32_t, 8> _D_ZERO_32{};
// 7B2398 8
static std::array<const float, 8> _D_LIBM_LARGEF{};
// 7B23A0 8
static std::array<const float, 8> _D_LIBM_SMALLF{};
// 7B23A8 16
static std::array<const double, 16> _D_LIBM_SMALL{};
// 7B2440 8
static uint64_t _D_RCP_T1 = 0x3FF0000000000000;
// 7B2850 8
static uint64_t _D_LOG2_T1 = 0x0;
// 7B3060 8
static uint64_t _D_RCP_T2 = 0x3FF0000000000000;
// 7B3470 8
static uint64_t _D_LOG2_T2 = 0x0;
// 7B3C80 8
static uint64_t _D_RCP_T3 = 0x3FF7154740000000;
// 7B4490 8
static uint64_t _D_LOG2_T3 = 0x0;
// 7B54A0 8
static uint64_t _D_CLV = 0x3FC47FD462B3B816;
// 7B54C0 8
static uint64_t _D_EXP2_TBL = 0x3FF0000000000000;
// 7B5CC0 8
static uint64_t _D_SHIFTER__1 = 0x4338000000000000;
// 7B5CD0 8
static uint64_t _D_SIGMASK = 0xFFFFFFFFFFFFF;
// 7B5CE0 8
static uint64_t _D_ONEMASK = 0x3FF0000000000000;
// 7B5CF0 8
static uint64_t _D_ABSVALMASK = 0x7FFFFFFFFFFFFFFF;
// 7B5D00 8
static uint64_t _D_CEV = 0x3F55D87FE78A6731;
// 7B5D28 8
static uint64_t _D_HALFSIG = 0xFFFFFFFFF8000000;
// 7B5D30 8
static uint64_t _D_LHN = 0xBFF7154740000000;
// 7B5D38 8
static uint64_t _D_SNAN = 0x7FF0000000000001;
// 7B5D40 8
static uint64_t _D_INF__1 = 0x7FF0000000000000;
// 7B5D48 8
static uint64_t _D_NEG_INF = 0xFFF0000000000000;
// 7B5D50 8
static uint64_t _D_NEG_ZERO__1 = 0x8000000000000000;
// 7B5D58 8
static uint64_t _D_NEG_BIG = 0xFFE0000000000000;
// 7B5D60 8
static uint64_t _D_POS_BIG = 0x7FE0000000000000;
// 7B5D68 8
static uint64_t _D_EMIN = 0x10000000000000;
// 7B5D70 8
static uint64_t _D_QIND = 0xFFF8000000000000;
// 7B5D80 0
static std::array<const unsigned char, 0> _D___LOOKUPTABLE_S{};
// 7B6358 44
static std::array<const char*, 44> _D_TOKENTABLE{};
// 7B6384 20
static std::array<const char*, 20> _D_RTTITABLE{};
// 7B6398 320
static std::array<const char*, 320> _D_NAMETABLE{};
// 7B6548 6160
static std::array<const double, 6160> _D__ATAN_TABLE{};
// 7B7D58 768
static std::array<const unsigned short, 768> _D___NEWCTYPE{};
// 7B8058 516
static std::array<const unsigned short, 516> _D__WCTYPE{};
// 7B8260 384
static std::array<const unsigned char, 384> _D___NEWCLMAP{};
// 7B83E0 384
static std::array<const unsigned char, 384> _D___NEWCUMAP{};
// 7B86C0 22
static std::array<const char, 22> _D___DNAMES{};
// 7B86D8 37
static std::array<const char, 37> _D___MNAMES{};
// 7B8728 492
static std::array<std::array<const unsigned char, 12>, 492> _D_DIGENREDEVICEORD{};
// 7B8914 24
// TODO static _DIDATAFORMAT _D_C_DFDIJOYSTICK2{};
static uint8_t _D_C_DFDIJOYSTICK2[0x18]{};
// 7B892C 16
static _GUID _D_GUID_POV = _GUID_HEX(0xA36D02F2, 0xC9F3, 0x11CF, 0x54534544C7BF);
// 7B893C 16
static _GUID _D_GUID_SLIDER = _GUID_HEX(0xA36D02E4, 0xC9F3, 0x11CF, 0x54534544C7BF);
// 7B894C 16
static _GUID _D_GUID_RZAXIS = _GUID_HEX(0xA36D02E3, 0xC9F3, 0x11CF, 0x54534544C7BF);
// 7B895C 16
static _GUID _D_GUID_RYAXIS = _GUID_HEX(0xA36D02F5, 0xC9F3, 0x11CF, 0x54534544C7BF);
// 7B896C 16
static _GUID _D_GUID_RXAXIS = _GUID_HEX(0xA36D02F4, 0xC9F3, 0x11CF, 0x54534544C7BF);
// 7B897C 16
static _GUID _D_GUID_ZAXIS = _GUID_HEX(0xA36D02E2, 0xC9F3, 0x11CF, 0x54534544C7BF);
// 7B898C 16
static _GUID _D_GUID_YAXIS = _GUID_HEX(0xA36D02E1, 0xC9F3, 0x11CF, 0x54534544C7BF);
// 7B899C 16
static _GUID _D_GUID_XAXIS = _GUID_HEX(0xA36D02E0, 0xC9F3, 0x11CF, 0x54534544C7BF);
// 7B89AC 16
static _GUID _D_IID_IDIRECTINPUT = _GUID_HEX(0xBF798030, 0x483A, 0x4DA2, 0x9736ED645D99AA);
// 7B8AE0 4
static std::array<proc_t*, 4> _D___RTC_IAA{};
// 7B8AE4 4
static std::array<proc_t*, 4> _D___RTC_IZZ{};
// 7B8AE8 4
static std::array<proc_t*, 4> _D___RTC_TAA{};
// 7B8AEC 4
static std::array<proc_t*, 4> _D___RTC_TZZ{};
// 856240 0
static std::array<long, 4> _D_G_ANRINGBODYPART{0xc, 0xd, 0xf, 0x10};
// 856250 0
static std::array<long, 0> _D_G_ANPETABILBODYP{};
// 8562A0 0
static std::array<long, 0> _D_G_ANPETRINGBODYP{};
// 8562B8 0
static std::array<long, 0> _D_G_ANPETWEARBODYP{};
// 8562C8 0
static std::array<long, 18> _D_G_ANWEAPONTYPE

{
    0x00000000, 0x0000001e, 0x0000001f, 0x00000020,
    0x00000021, 0x00000025, 0x00000026, 0x00000028,
    0x00000029, 0x0000002a, 0x0000002b, 0x0000002c,
    0x0000002d, 0x0000002e, 0x0000002f, 0x00000030,
    0x00000031, 0x00000027
};
// 856738 4
static int32_t _D_S_BLOGALLITEMPRI = 0x1;
// 85673C 24
static ZMap<long, ZXString<char>, long> _D_S_MJOBNAME{};
// 856754 16
static tagRECT _D_RTBG{};
// 856764 16
static tagRECT _D_RTOFF{};
// 856774 16
static tagRECT _D_RTON{};
// 856798 80
static std::array<std::array<long, 8>, 80> _D_S_NCSW_TAB_LEFT{};
// 8567E8 120
static std::array<std::array<long, 12>, 120> _D_S_NCSW_TAB_COLOR{};
// 8568CC 16
static std::array<long, 16> _D_S_ANGRADE{};
// 8568DC 4
static long _D_S_NGRADECOUNT = 0x4;
// 856AD0 32
static std::array<long, 32> _D_S_ADEFAULTQKM{};
// 856AF0 204
static std::array<std::array<unsigned char, 2>, 204> _D_VK_TO_DIK{};
// 856BBC 40
static std::array<int32_t, 40> _D_AT{};
// 856BEC 48
static std::array<std::array<long, 8>, 48> _D_S_NITCW_TAB_LEFT{};
// 856C1C 20
static std::array<long, 20> _D_S_NITCW_SUBTAB_L{};
// 856C30 16
static std::array<long, 16> _D_S_NITCW_MYPAGESU{};
// 856C40 24
static std::array<long, 24> _D_S_NITCW_LISTHEAD{};
// 856C58 24
static std::array<long, 24> _D_S_NITCW_SORT_LEF{};
// 856C70 124
static std::array<long, 124> _D_AUNIQUEPO{};
// 856CF0 100
static std::array<long, 100> _D_AEPICPO{};
// 856D58 160
static std::array<long, 160> _D_ARAREPO{};
// 856DF8 76
static std::array<long, 76> _D_ANORMALPO{};
// 856E50 16
static tagRECT _D_RTPREV{};
// 856E60 16
static tagRECT _D_RTNEXT{};
// 856E80 22
static std::array<wchar_t, 22> _D_SPATHFAIL{};
// 856E98 26
static std::array<wchar_t, 26> _D_SPATHSUCCESS{};
// 856F20 4096
static std::array<std::array<unsigned char, 256>, 4096> _D_G_ACONVERTTABLEE{};
// 857F20 4096
static std::array<std::array<unsigned char, 256>, 4096> _D_G_ACONVERTTABLED{};
// 858F44 32
static std::array<long, 32> _D_S_ADEFAULTQKM__2{};
// 858F88 4
static long _D_NSEQNO = 0xFFFFFFFF;
// 858F8C 4
static long _D_G_NLOGINNO = 0x3;
// 858F98 480
static long _D_AMELEEATTACKACTI[0x14][6]{

    {
        0x00000005,
        0x00000005,
        0x00000006,
        0x00000007,
        0x00000010,
        0x00000011,
    },

    {
        0x00000002,
        0x00000008,
        0x00000012,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000005,
        0x0000000a,
        0x0000000d,
        0x0000000e,
        0x00000013,
        0x00000014,
    },

    {
        0x00000002,
        0x0000000f,
        0x00000015,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000002,
        0x00000009,
        0x0000000b,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000001,
        0x00000024,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000002,
        0x00000009,
        0x00000013,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000005,
        0x00000009,
        0x0000000a,
        0x0000000b,
        0x00000010,
        0x00000011,
    },

    {
        0x00000002,
        0x0000000c,
        0x00000012,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000001,
        0x00000006,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000002,
        0x00000010,
        0x00000011,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000002,
        0x00000010,
        0x00000011,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000003,
        0x00000009,
        0x0000000a,
        0x0000000a,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000003,
        0x00000016,
        0x00000017,
        0x00000018,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },
};
// 859178 320
static long _D_ASHOOTATTACKACTI[0x14][4]{
    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000001,
        0x0000001f,
        0x00000000,
        0x00000000,
    },

    {
        0x00000001,
        0x00000024,
        0x00000000,
        0x00000000,
    },

    {
        0x00000001,
        0x00000020,
        0x00000000,
        0x00000000,
    },

    {
        0x00000001,
        0x00000020,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000003,
        0x00000021,
        0x00000022,
        0x00000023,
    },

    {
        0x00000003,
        0x00000021,
        0x00000022,
        0x00000023,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000001,
        0x00000074,
        0x00000000,
        0x00000000,
    },

    {
        0x00000001,
        0x00000074,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
    }
};
// 8592B8 240
static long _D_AMAGICATTACKACTI[0x14][3]{

    {
        0x00000002,
        0x00000025,
        0x00000026,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000002,
        0x00000025,
        0x00000026,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },

    {
        0x00000000,
        0x00000000,
        0x00000000,
    },


};
// 8593A8 60
static std::array<long, 0xF> _D___NX__1{
    0x0000028a,
    0x000002a3,
    0x000002bc,
    0x000002d5,
    0x000002ee,
    0x00000307,
    0x00000320,
    0x00000339,
    0x00000352,
    0x0000036b,
    0x00000384,
    0x0000039d,
    0x000003b6,
    0x000003cf,
    0x000003e8,
};
// 8593E4 60
static std::array<long, 0xF> _D___NX{
    0x0000028a,
    0x000002a3,
    0x000002bc,
    0x000002d5,
    0x000002ee,
    0x00000307,
    0x00000320,
    0x00000339,
    0x00000352,
    0x0000036b,
    0x00000384,
    0x0000039d,
    0x000003b6,
    0x000003cf,
    0x000003e8,
};
// 859420 600
static double _D_S_AADRATE[5][0xF]{

    {
        0.66666700000000001,
        0.222222,
        0.074074000000000001,
        0.024691000000000001,
        0.0082299999999999995,
        0.0027430000000000002,
        0.00091399999999999999,
        0.00030499999999999999,
        0.000102,
        3.3000000000000003e-05,
        1.1e-05,
        3.9999999999999998e-06,
        9.9999999999999995e-07,
        0,
        0,
    },
    {
        1,
        0.90000000000000002,
        0.81000000000000005,
        0.72899999999999998,
        0.65610000000000002,
        0.59048999999999996,
        0.53144100000000005,
        0.478296,
        0.43046699999999999,
        0.38740999999999998,
        0.34867799999999999,
        0.31380999999999998,
        0.28242899999999999,
        0.25418600000000002,
        0.228767,
    },
    {
        1,
        0.69999999999999996,
        0.48999999999999999,
        0.34300000000000003,
        0.24010000000000001,
        0.16807,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        1,
        1.2,
        1.4399999999999999,
        1.728,
        2.0735999999999999,
        2.4883199999999999,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
    {
        1,
        1,
        1,
        0.94999999999999996,
        0.94999999999999996,
        0.94999999999999996,
        0.90000000000000002,
        0.90000000000000002,
        0.90000000000000002,
        0.84999999999999998,
        0.84999999999999998,
        0.84999999999999998,
        0.80000000000000004,
        0.80000000000000004,
        0.80000000000000004,
    },

};
// 859688 4
static const char* _D__BAD_ALLOC_MESSA{};
// 85968C 36
static std::array<char*, 36> _D_S_ASDLLNAME{};
// 859870 32
static std::array<long, 32> _D_S_ADEFAULTQKM__1{};
// 859890 3995
static std::array<char, 3995> _D_S_AAPIINFO{};
// 85A82C 61
static std::array<char, 61> _D_S_AZTLTASKMEMFUN{};
// 861404 4
static const char* _D_S_FILTERCHARS{" _-:\t^.,*/;!\\'\"`+"};
// 8615F8 16
static tagRECT _D_SRECTQUESTDLG__1{};
// 861608 88
static tagPOINT _D_APTNODE_[0xB]{
    {
        0xde,
        0x28,
    },

    {
        0xde,
        0x5e,
    },

    {
        0xde,
        0x92,
    },

    {
        0xde,
        0xc6,
    },

    {
        0x16d,
        0xc6,
    },

    {
        0x50,
        0xfa,
    },

    {
        0x16d,
        0xfa,
    },

    {
        0xd,
        0x12e,
    },

    {
        0x94,
        0x12e,
    },

    {
        0x129,
        0x12e,
    },

    {
        0x1b0,
        0x12e,
    },
};
// 861668 16
static tagRECT _D_S_RTPRIVILEGE{};
// 861678 16
static tagRECT _D_S_RTJUNIOR{};
// 861688 16
static tagRECT _D_S_RTFAMOUSPOINT{};
// 861698 16
static tagRECT _D_S_RTFAMILYCOUNT{};
// 861738 4
static long _D_S_NTABCOUNT = 0x7;
// 861744 4
static long _D_S_NSKILLROOTID = 0xFFFFFFFF;
// 861748 4
static long _D_S_NSKILLROOTID__1 = 0xFFFFFFFF;
// 861758 288
static std::array<tagPOINT, 288> _D_S_PTKEYPOS{};
// 861880 64
static std::array<tagPOINT, 64> _D_S_PTSHORTKEYPOS{};
// 861918 16
static tagRECT _D_SRECTQUESTDLG{};
// 861950 4
static char* _D_S_SREG{};
// 861954 4
static char* _D_S_SREGPOS{};
// 861958 4
static char* _D_S_SREGKEY{};
// 861A30 4
static unsigned long _D_G_DWTARGETOS = 0x7C0;
// 862298 4
static unsigned long _D_G_DWHSUPCHKLIBRA = 0x2010101;
// 8626E0 4
static const char* _D__BAD_ALLOC_MESSA__1{};
// 8626E4 4
static proc_t* _D___ERRORPFN{};
// 8626E8 16
static _variant_t _D_VTMISSING{};
// 862700 4
static uint32_t _D___SECURITY_COOKI = 0xBB40E64E;
// 862704 4
static uint32_t _D___SECURITY_COOKI__1 = 0x44BF19B1;
// 862708 4
static int32_t _D__FLTUSED = 0x9875;
// 86270C 4
static int32_t _D__LDUSED = 0x9873;
// 862710 4
static const char* _D__BAD_ALLOC_MESSA__3{};
// 862730 1
static unsigned char _D__NAME___4 = 0x61;
// 862740 1
static unsigned char _D__NAME_ = 0x73;
// 862750 1
static unsigned char _D__NAME___2 = 0x63;
// 862760 1
static unsigned char _D__NAME___3 = 0x61;
// 862770 1
static unsigned char _D__NAME___1 = 0x73;
// 862780 4
static const char* _D__BAD_ALLOC_MESSA__4{};
// 862790 4
static proc_t* _D__AEXIT_RTN{};
// 8627A0 8
static uint64_t _D__HALF__1 = 0x3FE0000000000000;
// 8627A8 1
static unsigned char _D_POW_NAME = 0x70;
// 8627B0 4
static int32_t _D___APP_TYPE = 0x2;
// 8627B4 16
// TODO static _NLG_INFO _D___NLG_DESTINATIO{};
// 8627D0 4
static char* _D___NULLSTRING{};
// 8627D4 4
static wchar_t* _D___WNULLSTRING{};
// 8627D8 360
// TODO static std::array<errentry, 360> _D_ERRTABLE{};
// 862940 4
static int32_t _D_ERRNONOMEM = 0xC;
// 862944 4
static unsigned long _D_DOSERRORNOMEM = 0x8;
// 862948 40
static std::array<proc_t*, 40> _D__CFLTCVT_TAB{};
// 862970 4
static const char* _D__BAD_ALLOC_MESSA__5{};
// 862994 4
static unsigned long _D___FLSINDEX = 0xFFFFFFFF;
// 862998 4
static unsigned long _D___GETVALUEINDEX = 0xFFFFFFFF;
// 8629A0 4
static const char* _D__BAD_ALLOC_MESSA__2{};
// 8629B0 10
static long double _D__INDEFINITE{};
// 8629BA 10
static long double _D__PIBY2{};
// 8629C4 8
static uint64_t _D_ONE__1 = 0x3FF0000000000000;
// 8629CC 1
static unsigned char _D_XAMTOTAGTAB = 0x8;
// 8629E0 4
static int32_t _D__FIRST_FPE_INDX = 0x3;
// 8629E4 4
static int32_t _D__NUM_FPE = 0x7;
// 8629E8 4
static int32_t _D__XCPTACTTABSIZE = 0x78;
// 8629EC 4
static int32_t _D__XCPTACTTABCOUNT = 0xA;
// 8629F0 4
static uint32_t _D__AMBLKSIZ = 0x10;
// 8629F8 288
// TODO static std::array<<unnamed-tag>, 288> _D__LOCKTABLE{};
// 862B18 184
// TODO static std::array<rterrmsgs, 184> _D_RTERRS{};
// 862BD0 2
static unsigned short _D__OP_ATAN2JMPTAB = 0x6105;
// 862C20 544
// TODO static threadmbcinfostruct _D___INITIALMBCINFO{};
// 862E40 257
static std::array<unsigned char, 257> _D__MBCTYPE{};
// 862F48 256
static std::array<unsigned char, 256> _D__MBCASEMAP{};
// 863048 4
// TODO static threadmbcinfostruct* _D___PTMBCINFO{};
// 86304C 4
static std::array<char, 4> _D___RGCTYPEFLAG{};
// 863050 240
// TODO static std::array<code_page_info, 240> _D___RGCODE_PAGE_IN{};
// 863140 4
static const short* _D__CTYPE_LOC_STYLE{};
// 863144 4
static int32_t _D___GLOBALLOCALEST = 0xFFFFFFFE;
// 863148 2
static std::array<char, 2> _D___CLOCALESTR{};
// 863150 216
// TODO static threadlocaleinfostruct _D___INITIALLOCINFO{};
// 863228 4
// TODO static threadlocaleinfostruct* _D___PTLOCINFO{};
// 86322C 4
static int32_t _D___LC_CLIKE = 0x1;
// 863230 8
// TODO static localeinfo_struct _D___INITIALLOCALES{};
// 863240 4
static uint32_t _D_NEWCW__1 = 0x1B3F;
// 863248 640
//static std::array<none_t, 640> _D__IOB{};
// 8634C8 256
static std::array<char, 256> _D__LOOKUPTRAILBYTE{};
// 8635C8 4
static uint32_t _D_NEWCW = 0x173F;
// 8635D0 10
static long double _D__INFINITY__1{};
// 8635DA 10
static long double _D__MINFINITY{};
// 8635E4 10
static long double _D__LOGEMAX{};
// 8635EE 10
static long double _D__LOG2MAX{};
// 8635F8 10
static long double _D__SMALLARG{};
// 863602 8
static uint64_t _D__HALF = 0x3FE0000000000000;
// 86360A 2
static unsigned short _D__OP_EXPJMPTAB = 0x6503;
// 863630 64
// static ioinfo _D___BADIOINFO{};
// 863670 4
static uint32_t _D___ABORT_BEHAVIOR = 0x3;
// 863674 4
static const unsigned short* _D__PCTYPE{};
// 863678 4
static const unsigned short* _D__PWCTYPE{};
// 863680 184
// static __lc_time_data _D___LC_TIME_C{};
// 863738 4
// static __lc_time_data* _D___LC_TIME_CURR{};
// 86373C 2
static std::array<char, 2> _D___LCONV_STATIC_D{};
// 863740 48
// static lconv _D___LCONV_C{};
// 863770 4
// static lconv* _D___LCONV{};
// 863774 4
static int32_t _D___MB_CUR_MAX = 0x1;
// 863778 2
static std::array<char, 2> _D___DECIMAL_POINT{};
// 86377C 4
static uint32_t _D___DECIMAL_POINT_ = 0x1;
// 863780 4
static int32_t _D__MATHERR_FLAG = 0x2694;
// 863870 4
// static _dbl _D__D_INF{};
// 863878 4
// static _dbl _D__D_IND{};
// 863880 4
// static _dbl _D__D_MAX{};
// 863888 4
// static _dbl _D__D_MIN{};
// 863890 4
// static _dbl _D__D_MZERO{};
// 863898 12
static std::array<unsigned long, 12> _D_OVER{};
// 8638A4 12
static std::array<unsigned long, 12> _D_UNDER{};
// 8638B0 4
static int32_t _D___DAZ_ENABLED = 0x1;
// 8638B4 12
// TODO static transitiondate _D_DSTSTART{};
// 8638C0 12
// TODO static transitiondate _D_DSTEND{};
// 8638D0 4
static long _D__TIMEZONE = 0x7080;
// 8638D4 4
static int32_t _D__DAYLIGHT = 0x1;
// 8638D8 4
static long _D__DSTBIAS = 0xFFFFF1F0;
// 8638E0 64
static std::array<char, 64> _D_TZSTD{};
// 863920 64
static std::array<char, 64> _D_TZDST{};
// 863960 8
static std::array<char*, 8> _D__TZNAME{};
// 863968 52
static std::array<int32_t, 52> _D__LPDAYS{};
// 86399C 52
static std::array<int32_t, 52> _D__DAYS{};
// 8639D0 24
// static FpFormatDescriptor _D_DOUBLEFORMAT{};
// 8639E8 24
// static FpFormatDescriptor _D_FLOATFORMAT{};
// 863A00 0
//static std::array<none_t, 0> _D__POW10POS{};
// 863B60 0
//static std::array<none_t, 0> _D__POW10NEG{};
// 863CC0 1
static unsigned char _D_FDIV_RISC_TABLE = 0x0;
// 863CD0 4
static unsigned long _D_FDIV_SCALE_1 = 0x3F700000;
// 863CD4 4
static unsigned long _D_FDIV_SCALE_2 = 0x3F880000;
// 863CD8 4
static unsigned long _D_ONE_SHL_63 = 0x5F000000;
// 863CDC 1
static unsigned char _D_FPREM_RISC_TABLE = 0x0;
// 863CEC 1
static unsigned char _D_FPREM_SCALE = 0x0;
// 863CF4 1
static unsigned char _D_ONE_SHL_64 = 0x0;
// 863CFC 1
static unsigned char _D_ONE_SHR_64 = 0x0;
// 863D04 1
static unsigned char _D_ONE__4 = 0x0;
// 863D0C 1
static unsigned char _D_HALF = 0x0;
// 863D14 1
static unsigned char _D_BIG_NUMBER = 0x0;
// 863D1E 4
static unsigned long _D_DISPATCH_TABLE = 0xA487E4;
// 863E1E 2
static unsigned short _D_FPCW = 0x0;
// 863E20 4
static int32_t _D_USE_W = 0x2;
// 863E24 4
static int32_t _D__CONINPFH = 0xFFFFFFFE;
// 863E28 4
static int32_t _D__CONFH = 0xFFFFFFFE;
// 863E7C 4
static Ztl_bstr_t _D_S_SBROW{L"brow"};
// 863E80 4
static Ztl_bstr_t _D_S_SNAVEL{L"navel"};
// 863E84 4
static Ztl_bstr_t _D_S_SHEAD{L"head"};
// 863E88 4
static Ztl_bstr_t _D_S_SMUZZLE{L"muzzle"};
// 863E8C 4
static Ztl_bstr_t _D_S_SMAP{L"map"};
// 863EB0 12
// TODO CDayOfWeek
static void* _D_SINGLETON__1{};
// 863EC0 4
static long _D_S_NTYPE = 0x0;
// 863EC8 4
static uint32_t _D__S3__13 = 0x0;
// 864038 8
static const double _D_PI__216 = acos(-1.0);
// 864040 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__45{};

// 86405C 4
// TODO static ADAD::BrowserControlPane* _D_BCP{};

// 8640F8 8
static const double _D_PI__9 = acos(-1.0);
// 864320 4096
static std::array<std::array<unsigned long, 1024>, 4096> _D_IL_TAB{};
// 865320 4096
static std::array<std::array<unsigned long, 1024>, 4096> _D_FL_TAB{};
// 866320 4096
static std::array<std::array<unsigned long, 1024>, 4096> _D_IT_TAB{};
// 867320 4096
static std::array<std::array<unsigned long, 1024>, 4096> _D_FT_TAB{};
// 868320 40
static std::array<unsigned long, 40> _D_RCO_TAB{};
// 868348 256
static std::array<unsigned char, 256> _D_ISB_TAB{};
// 868448 256
static std::array<unsigned char, 256> _D_SBX_TAB{};
// 868548 256
static std::array<unsigned char, 256> _D_POW_TAB{};
// 868648 256
static std::array<unsigned char, 256> _D_LOG_TAB{};
// 868778 8
static const double _D_PI__12 = acos(-1.0);
// 868788 8
static const double _D_PI__215 = acos(-1.0);
// 868790 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__44{};
// 868820 36
static std::array<unsigned long, 36> _D_G_HOOKAPI{};
// 868848 512
static std::array<HINSTANCE__*, 512> _D_G_HSAFEWS232ADRL{};
// 868A48 4
static proc_t* _D_G_FNSAFEGETPEERN__1{};
// 868A4C 24
// TODO static CCriticalSector _D_CS{};
// 868AB8 8
static const double _D_PI__214 = acos(-1.0);
// 868AD8 8
static const double _D_PI__10 = acos(-1.0);
// 868BD8 8
static const double _D_PI__213 = acos(-1.0);
// 868BE8 8
static const double _D_PI__212 = acos(-1.0);
// 868BF8 8
static const double _D_PI__8 = acos(-1.0);
// 868C08 8
static const double _D_PI__211 = acos(-1.0);
// 868C24 24
static std::array<ZXString<char>, 24> _D_S_ASCATEGORY__2{};
// 868C3C 4
static uint32_t _D__S4__6 = 0x0;
// 868C50 8
static const double _D_PI__210 = acos(-1.0);
// 868C58 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__43{};
// 868C80 8
static const double _D_PI__209 = acos(-1.0);
// 868C88 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__42{};
// 868CA8 8
static const double _D_PI__208 = acos(-1.0);
// 868CB8 8
static const double _D_PI__207 = acos(-1.0);
// 868CC8 8
static const double _D_PI__206 = acos(-1.0);
// 868CD0 260
static std::array<char, 260> _D_G_SZSAFEPATH{};
// 868DD4 4
static proc_t* _D_PFN_ISWOW64PROCE{};
// 868DD8 4
static proc_t* _D_PFN_NTGETCONTEXT{};
// 868DDC 4
static int32_t _D_G_BISWOW64 = 0x0;
// 868DE0 4
static unsigned long _D_G_NGTC_IDX = 0x0;
// 868DE4 4
static unsigned long _D_G_DWCRYPTKEY = 0x0;
// 868DE8 4
static HINSTANCE__* _D_G_HNTDLL{};
// 868DF8 8
static const double _D_PI__5 = acos(-1.0);
// 868E08 4
static unsigned long _D_G_DWRETADDR = 0x0;
// 868E10 8
static const double _D_PI__205 = acos(-1.0);
// 868E18 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__41{};
// 868E60 8
static const double _D_PI__204 = acos(-1.0);
// 86A8CC 44
static std::array<ZXString<char>, 44> _D_G_ASGAMEOBJECTTY{};
// 86A8F8 172
static std::array<Ztl_bstr_t, 172> _D_S_SMOBACTION{};
// 86A9A4 16
static std::array<Ztl_bstr_t, 16> _D_S_AMOBSPECIESNAM{};
// 86A9B4 40
static std::array<ZXString<char>, 40> _D_S_SJOBCATEGORYNA{};
// 86A9E0 76
static std::array<Ztl_bstr_t, 76> _D_S_SSUMMONEDACTIO{};
// 86AA30 116
static std::array<Ztl_bstr_t, 116> _D_S_SDRAGONACTION{};
// 86AAC0 8
static const double _D_PI__203 = acos(-1.0);
// 86AAC8 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__40{};
// 86AAE8 20
static std::array<ZXString<char>, 20> _D_S_ASCATEGORY__1{};
// 86AAFC 4
static uint32_t _D__S3__12 = 0x0;
// 86AB00 8
static const double _D_PI__202 = acos(-1.0);
// 86AB08 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__39{};
// 86AB20 8
static const double _D_PI__201 = acos(-1.0);
// 86AB28 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__38{};
// 86AB48 8
static const double _D_PI__200 = acos(-1.0);
// 86AB50 8
static const double _D_PI__199 = acos(-1.0);
// 86AB60 8
static const double _D_PI__198 = acos(-1.0);
// 86AC18 8
static const double _D_PI__197 = acos(-1.0);
// 86AC20 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__37{};
// 86AC38 8
static const double _D_PI__196 = acos(-1.0);
// 86AC48 8
static const double _D_PI__195 = acos(-1.0);
// 86AC50 8
static const double _D_PI__194 = acos(-1.0);
// 86AC60 4
static uint32_t _D__S3__11 = 0x0;
// 86AC64 4
static long _D_TLASTSFX = 0x0;
// 86AC78 8
static const double _D_PI__193 = acos(-1.0);
// 86AC80 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__36{};
// 86AC98 8
static const double _D_PI__192 = acos(-1.0);
// 86ACA0 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__35{};
// 86ACC8 8
static const double _D_PI__191 = acos(-1.0);
// 86ACE0 8
static const double _D_PI__190 = acos(-1.0);
// 86ACF0 8
static const double _D_PI__189 = acos(-1.0);
// 86AD10 4
static int32_t _D_S_BCHASE = 0x0;
// 86AD14 4
static int32_t _D_S_BAUTOULIST = 0x0;
// 86AD18 8
static const double _D_PI__188 = acos(-1.0);
// 86AD20 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__34{};
// 86AD38 8
static _FILETIME _D_S_FTXMASSTART = _FILETIME_HEX(0x0, 0x0);
// 86AD40 8
static _FILETIME _D_S_FTXMASEND = _FILETIME_HEX(0x0, 0x0);
// 86AD6C 24
static ZMap<ZXString<char>, ZXString<char>, ZXString<char>> _D_MMACRONOTICE{};
// 86AD84 4
static ZArray<ZXString<char>> _D_AMACRONOTICE{};
// 86AD88 4
static uint32_t _D__S6__2 = 0x0;
// 86AE00 8
static const double _D_PI__187 = acos(-1.0);
// 86AE08 8
static const double _D_PI__186 = acos(-1.0);
// 86AE10 8
static const double _D_PI__185 = acos(-1.0);
// 86AE18 8
static const double _D_PI__184 = acos(-1.0);
// 86AE20 8
static const double _D_PI__183 = acos(-1.0);
// 86AE28 8
static const double _D_PI__182 = acos(-1.0);
// 86AE30 8
static const double _D_PI__181 = acos(-1.0);
// 86AE38 8
static const double _D_PI__180 = acos(-1.0);
// 86AE40 8
static const double _D_PI__179 = acos(-1.0);
// 86AE48 8
static const double _D_PI__178 = acos(-1.0);
// 86AE50 8
static const double _D_PI__177 = acos(-1.0);
// 86AE58 8
static const double _D_PI__176 = acos(-1.0);
// 86AE60 8
static const double _D_PI__175 = acos(-1.0);
// 86AE68 8
static const double _D_PI__174 = acos(-1.0);
// 86AE78 8
static const double _D_PI__173 = acos(-1.0);
// 86AE80 8
static const double _D_PI__172 = acos(-1.0);
// 86AE88 8
static const double _D_PI__15 = acos(-1.0);
// 86AE90 8
static const double _D_PI__171 = acos(-1.0);
// 86AE98 8
static const double _D_PI__170 = acos(-1.0);
// 86AEA8 8
static const double _D_PI__169 = acos(-1.0);
// 86AEB0 8
static const double _D_PI__168 = acos(-1.0);
// 86AEB8 8
static const double _D_PI__167 = acos(-1.0);
// 86AEC0 24
static std::array<ZXString16, 6> _D_ASAUTOSPEAKING__33{};
// 86AED8 8
static const double _D_PI__166 = acos(-1.0);
// 86AEE0 8
static const double _D_PI__165 = acos(-1.0);
// 86AEE8 8
static const double _D_PI__164 = acos(-1.0);
// 86AEF0 8
static const double _D_PI__163 = acos(-1.0);
// 86AEF8 8
static const double _D_PI__4 = acos(-1.0);
// 86AF00 8
static const double _D_PI__162 = acos(-1.0);
// 86AF08 8
static const double _D_PI__161 = acos(-1.0);
// 86AF10 8
static const double _D_PI__160 = acos(-1.0);
// 86AF28 8
static const double _D_PI__159 = acos(-1.0);
// 86AF30 24
static std::array<ZXString16, 6> _D_ASAUTOSPEAKING__32{};
// 86AF50 8
static const double _D_PI__158 = acos(-1.0);
// 86AF58 24
static std::array<ZXString16, 6> _D_ASAUTOSPEAKING__31{};
// 86AF70 8
static const double _D_PI__157 = acos(-1.0);
// 86AF78 24
static std::array<ZXString16, 6> _D_ASAUTOSPEAKING__30{};
// 86AFA8 8
static const double _D_PI__156 = acos(-1.0);
// 86AFB0 24
static std::array<ZXString16, 6> _D_ASAUTOSPEAKING__29{};
// 86AFD0 8
static const double _D_PI__155 = acos(-1.0);
// 86AFD8 24
static std::array<ZXString16, 6> _D_ASAUTOSPEAKING__28{};
// 86AFF0 8
static const double _D_PI__154 = acos(-1.0);
// 86AFF8 24
static std::array<ZXString16, 6> _D_ASAUTOSPEAKING__27{};
// 86B028 8
static const double _D_PI__153 = acos(-1.0);
// 86B030 24
static std::array<ZXString16, 6> _D_ASAUTOSPEAKING__26{};
// 86B048 8
static const double _D_PI__152 = acos(-1.0);
// 86B050 12
static std::array<ZXString16, 3> _D_S_ASTYPENAME__2{};
// 86B05C 4
static uint32_t _D__S3__10 = 0x0;
// 86B060 20
static std::array<ZXString16, 5> _D_S_ASTYPENAME__1{};
// 86B074 4
static uint32_t _D__S4__5 = 0x0;
// 86B078 16
static std::array<ZXString16, 4> _D_S_ASTYPENAME{};
// 86B088 4
static uint32_t _D__S5 = 0x0;
// 86B168 8
static const double _D_PI__151 = acos(-1.0);
// 86B170 8
static const double _D_PI__150 = acos(-1.0);
// 86B180 8
static const double _D_PI__1 = acos(-1.0);
// 86B188 8
static const double _D_PI__149 = acos(-1.0);
// 86B190 8
static const double _D_PI__148 = acos(-1.0);
// 86B1E8 4
// TODO static CNMCOClientObject* _D_SPINSTANCE__1{};
// 86B1F0 8
static const double _D_PI__147 = acos(-1.0);
// 86B1F8 48
static std::array<ZXString<char>, 48> _D_S_ASMONTH{};
// 86B228 8
static std::array<ZXString<char>, 8> _D_S_ASTIME{};
// 86B230 8
static const double _D_PI__146 = acos(-1.0);
// 86B238 8
static const double _D_PI__145 = acos(-1.0);
// 86B240 8
static const double _D_PI__144 = acos(-1.0);
// 86B248 8
static const double _D_PI__143 = acos(-1.0);
// 86B250 8
static const double _D_PI__142 = acos(-1.0);
// 86B258 8
static const double _D_PI__141 = acos(-1.0);
// 86B260 8
static const double _D_PI__140 = acos(-1.0);
// 86B268 8
static const double _D_PI__139 = acos(-1.0);
// 86B270 8
static const double _D_PI__138 = acos(-1.0);
// 86B280 4
static long _D_NCOUNTER__2 = 0x0;
// 86B290 8
static const double _D_PI__137 = acos(-1.0);
// 86B298 8
static const double _D_PI__136 = acos(-1.0);
// 86B2A8 8
static const double _D_PI__135 = acos(-1.0);
// 86B2B0 8
static const double _D_PI__134 = acos(-1.0);
// 86B2B8 8
static const double _D_PI__133 = acos(-1.0);
// 86B2C0 4
static unsigned long _D_DWCOUNTER = 0x0;
// 86B2C4 24
static ZMap<long, ZMap<long, long, long>, long> _D_SMOBACTIONERRATA{};
// 86B2DC 4
static uint32_t _D__S4__4 = 0x0;
// 86B2E0 4
static ZXString<char> _D_SIGNORESYMBOLS{};
// 86B2E4 4
static ZXString<char> _D_SCHAR{};
// 86B2E8 4
static uint32_t _D__S3__9 = 0x0;
// 86B300 8
static const double _D_PI__132 = acos(-1.0);
// 86B308 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__25{};
// 86B320 8
static const double _D_PI__11 = acos(-1.0);
// 86B338 8
static const double _D_PI__131 = acos(-1.0);
// 86B34C 4
static proc_t* _D_SETUPDIGETCLASSD{};
// 86B350 4
static proc_t* _D_SETUPDIGETCLASSD__1{};
// 86B354 4
static proc_t* _D_SETUPDIGETDEVICE{};
// 86B358 4
static proc_t* _D_SETUPDIGETDEVICE__1{};
// 86B35C 4
static proc_t* _D_SETUPDISETCLASSI{};
// 86B360 4
static proc_t* _D_SETUPDISETCLASSI__1{};
// 86B364 4
static proc_t* _D_SETUPDIGETDEVICE__2{};
// 86B368 4
static proc_t* _D_SETUPDIGETDEVICE__3{};
// 86B36C 4
static proc_t* _D_SETUPDIENUMDEVIC{};
// 86B370 4
static proc_t* _D_SETUPDICALLCLASS{};
// 86B374 4
static proc_t* _D_SETUPDIDESTROYDE{};
// 86B378 4
static proc_t* _D_CM_GET_DEVICE_ID{};
// 86B37C 4
static proc_t* _D_CM_GET_DEVICE_ID__1{};
// 86B380 4
static HINSTANCE__* _D_G_HSETUPAPI{};
// 86B384 4
static HINSTANCE__* _D_G_HCFGMGR32{};
// 86B388 4
// TODO static CNMManager* _D_SPINSTANCE{};
// 86B3E0 8
static const double _D_PI__130 = acos(-1.0);
// 86B3E8 8
static const double _D_PI__129 = acos(-1.0);
// 86B3F0 8
static const double _D_PI__128 = acos(-1.0);
// 86B400 8
static const double _D_PI__127 = acos(-1.0);
// 86B408 8
static const double _D_PI__126 = acos(-1.0);
// 86B410 8
static const double _D_PI__125 = acos(-1.0);
// 86B418 8
static const double _D_PI__124 = acos(-1.0);
// 86B420 8
static const double _D_PI__123 = acos(-1.0);
// 86B430 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__24{};
// 86B448 8
static const double _D_PI__122 = acos(-1.0);
// 86B458 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__23{};
// 86B470 8
static const double _D_PI__121 = acos(-1.0);
// 86B480 8
static const double _D_PI__120 = acos(-1.0);
// 86B488 8
static const double _D_PI__119 = acos(-1.0);
// 86B4A0 8
static const double _D_PI__118 = acos(-1.0);
// 86B4A8 8
static const double _D_PI__117 = acos(-1.0);
// 86B4B0 8
static const double _D_PI__116 = acos(-1.0);
// 86B4B8 32
// static CRand32 _D_G_RAND{};
// 86B4E0 8
static const double _D_PI__14 = acos(-1.0);
// 86B4F0 8
static const double _D_PI__115 = acos(-1.0);
// 86B4F8 8
static const double _D_PI__114 = acos(-1.0);
// 86B500 4
static ZXString<char> _D_SLASTBASEFOLDER{};
// 86B504 4
static uint32_t _D__S4__3 = 0x0;
// 86B508 8
static const double _D_PI__113 = acos(-1.0);
// 86B510 32
// static CScriptMan _D_G_SCRIPTMAN{};
// 86B530 4
static int32_t _D_NSHUFFLECOUNTER = 0x0;
// 86B538 8
static const double _D_PI__112 = acos(-1.0);
// 86B540 48
static std::array<ZInetAddr, 48> _D_G_ALOGINADDR{};
// 86B570 8
static const double _D_PI__111 = acos(-1.0);
// 86B5F0 8
static const double _D_PI__110 = acos(-1.0);
// 86B5F8 8
static const double _D_PI__109 = acos(-1.0);
// 86B600 8
static const double _D_PI__108 = acos(-1.0);
// 86B610 4
static long _D_TFADEINTIME = 0x0;
// 86B614 4
static uint32_t _D__S3__8 = 0x0;
// 86B618 8
static const double _D_PI__107 = acos(-1.0);
// 86B620 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__22{};
// 86B64C 4
// TODO static ADAD::BrowserControlPane* _D_BCP3{};
static void* _D_BCP3{};
// 86B650 4
// TODO static const StartUpWndParam* _D_PSWP2{};
static const void* _D_PSWP2{};
// 86B654 4
// TODO static ADAD::BrowserControlPane* _D_BCP2{};
static void* _D_BCP2{};
// 86B658 4
static HWND__* _D_HWNDBUTTON{};
// 86B65C 2
static short _D_NSTATUS = 0x0;
// 86B660 4
static int32_t _D_CYBACKGROUND = 0x0;
// 86B664 4
static int32_t _D_CXBACKGROUND = 0x0;
// 86B668 16
static tagRECT _D_RECTBUTTON{};
// 86B678 12
static std::array<HBITMAP__*, 12> _D_HBITMAP{};
// 86B684 4
static HINSTANCE__* _D_HINSTANCE{};
// 86D6F4 4
static uint32_t _D__S3__7 = 0x0;
// 86D708 4
static uint32_t _D__S4__2 = 0x0;
// 86D750 4
static HINSTANCE__* _D__G_HPCOMMODULE{};
// 86D754 4
static volatile long _D__G_NPCOMMODULERE = 0x0;
// 86D758 1020
// TODOstatic _ZAPIProcAddress _D_ZAPI{};
static int _D_ZAPI{};
// 86DB54 20
static std::array<proc_t*, 20> _D__G_APFNPCOMAPIS{};
// 86DD58 16
static Ztl_variant_t _D_VTEMPTY{};
// 86DEBC 4
static ZXString<char> _D_S_SGROUPUNDEFINE{};
// 86DF10 332
// TODO static ZExceptionHandler _D__G_ZEH{};
static int _D__G_ZEH{};
// 86E0D0 200
// TODO static `anonymous-namespace'::ZAPILoader _D__S_ZAPILOADER{};
// 86E5C8 128
static std::array<char, 128> _D_SBUFFER{};
// 86E6D8 8
static const double _D_PI__106 = acos(-1.0);
// 86E6EC 4
static ZArray<ZXString<char>> _D_S_ASCURSE1{};
// 86E6F0 4
static ZArray<ZXString<char>> _D_S_ASCURSE2{};
// 86E6F4 4
static ZArray<ZList<ZXString<char>>> _D_S_ALSWINDLE{};
// 86E6F8 4
static ZArray<ZXString<char>> _D_S_ASFORBIDDENNAM{};
// 86E6FC 4
static uint32_t _D__S3__6 = 0x0;
// 86E708 8
static const double _D_PI__105 = acos(-1.0);
// 86E718 8
static const double _D_PI__104 = acos(-1.0);
// 86E728 8
static const double _D_PI__103 = acos(-1.0);
// 86E730 8
static const double _D_PI__102 = acos(-1.0);
// 86E738 8
static const double _D_PI__101 = acos(-1.0);
// 86E740 8
static const double _D_PI__100 = acos(-1.0);
// 86E748 8
static const double _D_PI__99 = acos(-1.0);
// 86E758 8
static const double _D_PI__98 = acos(-1.0);
// 86E768 8
static const double _D_PI__97 = acos(-1.0);
// 86E778 8
static const double _D_PI__96 = acos(-1.0);
// 86E780 8
static const double _D_PI__95 = acos(-1.0);
// 86E7A8 8
static const double _D_PI__94 = acos(-1.0);
// 86E7B0 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__21{};
// 86E7D0 8
static const double _D_PI__93 = acos(-1.0);
// 86E7D8 8
static const double _D_PI__92 = acos(-1.0);
// 86E7E8 8
static const double _D_PI__91 = acos(-1.0);
// 86E7F0 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__20{};
// 86E808 8
static const double _D_PI__90 = acos(-1.0);
// 86EA48 8
static const double _D_PI__89 = acos(-1.0);
// 86EA60 8
static const double _D_PI__88 = acos(-1.0);
// 86EA78 8
static const double _D_PI__87 = acos(-1.0);
// 86EA80 8
static const double _D_PI__86 = acos(-1.0);
// 86EA88 8
static const double _D_PI__85 = acos(-1.0);
// 86EA90 8
static const double _D_PI__84 = acos(-1.0);
// 86EAA0 8
static const double _D_PI__83 = acos(-1.0);
// 86EAA8 8
static const double _D_PI__82 = acos(-1.0);
// 86EAB0 8
static const double _D_PI__3 = acos(-1.0);
// 86EAD0 8
static const double _D_PI__81 = acos(-1.0);
// 86EAE0 8
static const double _D_PI__80 = acos(-1.0);
// 86EAE8 8
static const double _D_PI__79 = acos(-1.0);
// 86EAF0 8
static const double _D_PI__78 = acos(-1.0);
// 86EAF8 1160
static std::array<tagPOINT, 1160> _D_S_PTSHORTKEYPOS__1{};
// 86EF80 8
static const double _D_PI__77 = acos(-1.0);
// 86EF90 8
static const double _D_PI__76 = acos(-1.0);
// 86EFA0 8
static const double _D_PI__75 = acos(-1.0);
// 86EFB8 8
static const double _D_PI__74 = acos(-1.0);
// 86EFC0 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__19{};
// 86EFE0 8
static const double _D_PI__73 = acos(-1.0);
// 86EFF0 8
static const double _D_PI__72 = acos(-1.0);
// 86EFF8 4
static long _D_NCOUNTER__3 = 0x0;
// 86F008 8
static const double _D_PI__71 = acos(-1.0);
// 86F018 8
static const double _D_PI__70 = acos(-1.0);
// 86F028 8
static const double _D_PI__69 = acos(-1.0);
// 86F030 8
static const double _D_PI__68 = acos(-1.0);
// 86F048 8
static const double _D_PI__67 = acos(-1.0);
// 86F060 8
static const double _D_PI__66 = acos(-1.0);
// 86F068 8
static const double _D_PI__65 = acos(-1.0);
// 86F070 8
static const double _D_PI__64 = acos(-1.0);
// 86F080 8
static const double _D_PI__63 = acos(-1.0);
// 86F090 8
static const double _D_PI__13 = acos(-1.0);
// 86F098 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING{};
// 86F0B0 8
static const double _D_PI__62 = acos(-1.0);
// 86F0C0 8
static const double _D_PI__61 = acos(-1.0);
// 86F0C8 8
static const double _D_PI__60 = acos(-1.0);
// 86F0D8 8
static const double _D_PI__59 = acos(-1.0);
// 86F0E0 8
static const double _D_PI__58 = acos(-1.0);
// 86F0F8 8
static const double _D_PI__57 = acos(-1.0);
// 86F108 4
static uint32_t _D__S3__5 = 0x0;
// 86F110 8
static const double _D_PI__56 = acos(-1.0);
// 86F118 8
static const double _D_PI__55 = acos(-1.0);
// 86F128 4
static uint32_t _D__S3__4 = 0x0;
// 86F130 8
static const double _D_PI__54 = acos(-1.0);
// 86F140 8
static const double _D_PI__53 = acos(-1.0);
// 86F158 8
static const double _D_PI__52 = acos(-1.0);
// 86F160 4
static long _D_NCOUNTER__1 = 0x0;
// 86F168 8
static const double _D_PI__51 = acos(-1.0);
// 86F170 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__18{};
// 86F18C 20
static std::array<ZXString<char>, 20> _D_S_ASCATEGORY{};
// 86F1A0 4
static uint32_t _D__S4__1 = 0x0;
// 86F1B0 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__17{};
// 86F1C8 8
static const double _D_PI__50 = acos(-1.0);
// 86F1D0 8
static const double _D_PI__49 = acos(-1.0);
// 86F1F0 8
static const double _D_PI__48 = acos(-1.0);
// 86F1F8 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__16{};
// 86F220 8
static const double _D_PI__47 = acos(-1.0);
// 86F228 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__15{};
// 86F248 8
static const double _D_PI__46 = acos(-1.0);
// 86F250 8
static const double _D_PI__45 = acos(-1.0);
// 86F258 4
static unsigned long _D_DWCOUNTER__1 = 0x0;
// 86F25C 4
static Ztl_bstr_t _D_SSLASH{};
// 86F260 4
static Ztl_bstr_t _D_SHEAD{};
// 86F264 4
static uint32_t _D__S6__1 = 0x0;
// 86F270 8
static const double _D_PI__44 = acos(-1.0);
// 86F278 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__14{};
// 86F308 4
static uint32_t _D__S7 = 0x0;
// 86F314 4
static uint32_t _D__S4 = 0x0;
// 86F31C 4
static uint32_t _D__S6 = 0x0;
// 86F328 8
static const double _D_PI__43 = acos(-1.0);
// 86F330 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__13{};
// 86F370 8
static const double _D_PI__42 = acos(-1.0);
// 86F378 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__12{};
// 86F390 8
static const double _D_PI__41 = acos(-1.0);
// 86F398 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__11{};
// 86F3B0 4
static long _D_NLASTITEMID = 0x0;
// 86F3B4 4
static long _D_NLASTITEMID__1 = 0x0;
// 86F3B8 4
static long _D_NLASTITEMID__2 = 0x0;
// 86F3C0 8
static double _D_FANGLE = 0;
// 86F3C8 8
static const double _D_PI__40 = acos(-1.0);
// 86F3D0 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__10{};
// 86F3E8 8
static const double _D_PI__39 = acos(-1.0);
// 86F3F0 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__9{};
// 86F418 4
static long _D_S_NIMGEXTLEN = 0x0;
// 86F41C 4
static ZXString16 _D_S_SIMGEXT{};
// 86F420 4
static uint32_t _D__S3__3 = 0x0;
// 86F428 8
static const double _D_PI__38 = acos(-1.0);

// 86F610 8
static const double _D_PI__37 = acos(-1.0);
// 86F618 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__8{};
// 86F630 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__7{};
// 86F648 8
static const double _D_PI__36 = acos(-1.0);
// 86F650 28
// TODO static CFontContainer _D_SINGLETON{};
// 86F670 8
static const double _D_PI = 0;
// 86F680 8
static const double _D_PI__35 = acos(-1.0);
// 86F688 8
static const double _D_PI__6 = acos(-1.0);
// 86F690 8
static const double _D_PI__34 = acos(-1.0);
// 86F698 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__6{};
// 86F6B0 8
static const double _D_PI__33 = acos(-1.0);
// 86F6B8 4
static long _D_S_NFREEFALLTICK = 0x0;
// 86F6BC 4
static uint32_t _D__S3 = 0x0;
// 86F6C0 8
static const double _D_PI__7 = acos(-1.0);
// 86F6C8 8
static const double _D_PI__32 = acos(-1.0);
// 86F6D0 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__5{};
// 86F6F0 8
static const double _D_PI__31 = acos(-1.0);
// 86F700 8
static const double _D_PI__30 = acos(-1.0);
// 86F708 8
static const double _D_PI__2 = acos(-1.0);
// 86F718 8
static const double _D_PI__29 = acos(-1.0);
// 86F720 4
static HINSTANCE__* _D_G_HINSTANCE{};
// 86F728 8
static const double _D_PI__28 = acos(-1.0);
// 86F730 8
// TODO static CeTracer _D_ETRACER{};
// 86F738 4
static proc_t* _D_FN_LOPEN{};
// 86F73C 4
static int32_t _D_G_BCALLAUTH = 0x0;
// 86F740 1024
static std::array<unsigned long, 1024> _D_G_CRC32TABLE{};
// 86FB40 40
static std::array<proc_t*, 40> _D_G_FNSAFEGETPEERN{};
// 86FB68 4
static unsigned long _D_G_DWGPNFUNCSIZE = 0x0;
// 86FB6C 4
static proc_t* _D_S_FNSAFEGETPEERN{};
// 86FB70 8
static const double _D_PI__27 = acos(-1.0);
// 86FB78 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__4{};
// 86FB90 260
static std::array<char, 260> _D_S_SFILENAME{};
// 86FC98 8
static const double _D_PI__26 = acos(-1.0);
// 86FCA0 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__3{};
// 86FCB8 4
static unsigned long _D_NCOUNTER = 0x0;
// 86FCF8 8
static const double _D_PI__25 = acos(-1.0);
// 86FD00 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__2{};
// 873F70 8
static const double _D_PI__24 = acos(-1.0);
// 873F78 24
static std::array<ZXString16, 24> _D_ASAUTOSPEAKING__1{};
// 874000 8
static const double _D_PI__23 = acos(-1.0);
// 874008 8
static const double _D_PI__22 = acos(-1.0);
// 874010 8
static const double _D_PI__21 = acos(-1.0);
// 874020 4
static uint32_t _D__S3__2 = 0x0;
// 874028 8
static const double _D_PI__20 = acos(-1.0);
// 874030 8
static const double _D_PI__19 = acos(-1.0);
// 874038 4
static unsigned long _D_DWCONSTANTCRC = 0x0;
// 87403C 4
static uint32_t _D__S3__1 = 0x0;
// 874050 8
static const double _D_PI__18 = acos(-1.0);
// 874058 8
static const double _D_PI__17 = acos(-1.0);
// 874060 8
static const double _D_PI__16 = acos(-1.0);
// 8740A0 1340
// TODO static CHsMonitor _D_G_CHSMON{};
// 8745DC 4
static proc_t* _D_G_PFNDNSQUERY_A{};
// 8745E0 4
static proc_t* _D_G_PFNDNSRECORDSE{};
// 8745E4 4
static proc_t* _D_G_PFNDNSRECORDLI{};
// 8745E8 4
static proc_t* _D_G_PFNINET_ADDR{};
// 8745EC 4
//static none_t *_D_G_HDNSMODULE{};
// 8745F0 4
static void* _D_G_HFILEMAP{};
// 8745F4 4
static void* _D_G_PVIEW{};
// 8745F8 4
static unsigned long _D_G_DWHSUPPID = 0x0;
// 874600 1340
// TODO static CHsMonitor _D_G_HSMONITOR{};
// 874B40 256
static std::array<char, 256> _D_G_CB64DECNOTE{};
// 874C40 256
static std::array<char, 256> _D_G_CB64ENCNOTE{};
// 874D44 520
static std::array<char, 520> _D_G_SZLOGFILEPATH{};
// 874F4C 4
static int32_t _D_G_BSETLOGFILEPAT = 0x0;
// 874F54 1
static std::array<char, 1> _D_CC_PNULL{};
// 874F58 4
static int32_t _D___FASTFLAG = 0x0;
// 874F5C 4
static int32_t _D__ADJUST_FDIV = 0x0;
// 874F60 4
static proc_t* _D___PINVALIDARGHAN{};
// 874F64 4
static int32_t _D__UMASKVAL = 0x0;
// 874F68 4
static int32_t _D___ARGC = 0x0;
// 874F6C 4
static char** _D___ARGV{};
// 874F70 4
static unsigned short** _D___WARGV{};
// 874F74 4
static char** _D__ENVIRON{};
// 874F78 4
static char** _D___INITENV{};
// 874F7C 4
static unsigned short** _D__WENVIRON{};
// 874F80 4
static unsigned short** _D___WINITENV{};
// 874F84 4
static char* _D__PGMPTR{};
// 874F88 4
static unsigned short* _D__WPGMPTR{};
// 874F8C 1
static char _D__EXITFLAG = 0x0;
// 874F90 4
static int32_t _D__C_TERMINATION_D = 0x0;
// 874F94 4
static int32_t _D__C_EXIT_DONE = 0x0;
// 874F98 4
static char* _D__AENVPTR{};
// 874F9C 4
static unsigned short* _D__WENVPTR{};
// 874FA0 4
static int32_t _D___ERROR_MODE = 0x0;
// 874FA8 80
static _EXCEPTION_RECORD _D_GS_EXCEPTIONRECO{};
// 874FF8 4
static int32_t _D_DEBUGGERWASPRESE = 0x0;
// 875000 716
static _CONTEXT _D_GS_CONTEXTRECORD{};
// 8752CC 4
static proc_t* _D_GPFLSALLOC{};
// 8752D0 4
static proc_t* _D_GPFLSGETVALUE{};
// 8752D4 4
static proc_t* _D_GPFLSSETVALUE{};
// 8752D8 4
static proc_t* _D_GPFLSFREE{};
// 8752DC 4
static proc_t* _D___PINCONSISTENCY{};
// 8752E0 8
// TODO static __type_info_node _D___TYPE_INFO_ROOT{};
// 8752E8 4
static unsigned long _D__MAXWAIT = 0x0;
// 8752EC 4
static void* _D__CRTHEAP{};
// 8752F0 336
static std::array<_RTL_CRITICAL_SECTION, 336> _D_LCLCRITSECTS{};
// 875440 4
//static none_t *_D___SBH_PHEADERDEF{};
// 875448 788
static std::array<char, 788> _D_OUTMSG{};
// 87575C 4
static proc_t* _D__PNHHEAP{};
// 875760 4
static int32_t _D__NEWMODE = 0x0;
// 875764 4
static int32_t _D_FSYSTEMSET = 0x0;
// 875768 12
static std::array<unsigned short, 12> _D___MBULINFO{};
// 875774 4
static int32_t _D___MBCODEPAGE = 0x0;
// 875778 4
static int32_t _D___ISMBCODEPAGE = 0x0;
// 87577C 4
static int32_t _D___MBLCID = 0x0;
// 875780 4
static int32_t _D___LOCALE_CHANGED = 0x0;
// 875784 24
static std::array<unsigned long, 24> _D___LC_HANDLE{};
// 87579C 4
static uint32_t _D___LC_CODEPAGE = 0x0;
// 8757A0 4
static uint32_t _D___LC_COLLATE_CP = 0x0;
// 8757A4 4
static int32_t _D__PMATHERR_SET = 0x0;
// 8757A8 4
static int32_t _D_F_USE__2 = 0x0;
// 8757AC 4
static int32_t _D__CFLUSH = 0x0;
// 8757B0 4
static int32_t _D_F_USE = 0x0;
// 8757B4 4
static proc_t* _D_CTRLC_ACTION{};
// 8757B8 4
static proc_t* _D_CTRLBREAK_ACTION{};
// 8757BC 4
static proc_t* _D_ABORT_ACTION{};
// 8757C0 4
static proc_t* _D_TERM_ACTION{};
// 8757C4 4
static int32_t _D_CONSOLECTRLHANDL = 0x0;
// 8757C8 4
static proc_t* _D_G_PFNRTLGENRANDO{};
// 8757D4 4
static proc_t* _D___PPURECALL{};
// 8757D8 4
static proc_t* _D___PFNINITCRITSEC{};
// 8757E0 261
static std::array<char, 261> _D__PGMNAME{};
// 8758E8 4
static int32_t _D_F_USE__1 = 0x0;
// 8758F0 4
static int32_t _D_NVALIDPAGES = 0x0;
// 8758F4 4
static long _D_LMODIFYING = 0x0;
// 8758F8 128
// TODO static std::array<_VALID_PAGE_CACHE, 128> _D_RGVALIDPAGES{};
// 875978 4
static uint32_t _D___ENABLE_PERCENT = 0x0;
// 87597C 4
static uint32_t _D__OUTPUTFORMAT = 0x0;
// 875980 20
// TODO static HeapManager _D_HEAP{};
// 8759BC 4
static proc_t* _D_PFNMESSAGEBOX{};
// 8759C0 4
static proc_t* _D_PFNGETACTIVEWIND{};
// 8759C4 4
static proc_t* _D_PFNGETLASTACTIVE{};
// 8759C8 4
static proc_t* _D_PFNGETPROCESSWIN{};
// 8759CC 4
static proc_t* _D_PFNGETUSEROBJECT{};
// 8759D0 1
static std::array<char, 1> _D___LCONV_STATIC_N{};
// 8759D8 172
static _TIME_ZONE_INFORMATION _D_TZINFO{};
// 875A84 4
static int32_t _D_TZAPIUSED = 0x0;
// 875A88 4
static char* _D_LASTTZ{};
// 875A90 4
static int32_t _D__COMMODE = 0x0;
// 875A94 8
static std::array<void*, 8> _D__STDBUF{};
// 875A9C 4
static int32_t _D__FMODE = 0x0;
// 875B50 4
static int32_t _D__NHANDLE = 0x0;
// 875B60 0
// TODO static std::array<ioinfo*, 0> _D___PIOINFO{};
// 875C60 4
static int32_t _D__DEBUGGER_HOOK_D = 0x0;
// 875C64 4
static void** _D___PIOB{};
// 875C80 4096
static std::array<char, 4096> _D__BUFIN{};
// 876C80 4
static int32_t _D__NSTREAM = 0x0;
// 876C84 4
static proc_t* _D__PMATHERR{};
// 876C88 4
static int32_t _D___SBH_CNTHEADERL = 0x0;
// 876C8C 4
//static none_t *_D___SBH_PHEADERLIS{};
// 876C90 4
static uint32_t _D___SBH_THRESHOLD = 0x0;
// 876C94 4
//static none_t *_D___SBH_PHEADERSCA{};
// 876C98 4
static int32_t _D___SBH_SIZEHEADER = 0x0;
// 876C9C 4
static int32_t _D___SBH_INDGROUPDE = 0x0;
// 876CA0 4
static int32_t _D___ACTIVE_HEAP = 0x0;
// 876CA4 4
static int32_t _D___USE_SSE2_MATHF = 0x0;
// 876CA8 4
static int32_t _D___SSE2_AVAILABLE = 0x0;
// 876CAC 4
static char* _D__ACMDLN{};
// 876CB0 4
static int32_t _D___ENV_INITIALIZE = 0x0;
// 876CB4 4
static proc_t** _D___ONEXITEND{};
// 876CB8 4
static proc_t** _D___ONEXITBEGIN{};
// 876CBC 4
static int32_t _D___MBCTYPE_INITIA = 0x0;
// 876CC0 4
static proc_t* _D___DYN_TLS_INIT_C{};
