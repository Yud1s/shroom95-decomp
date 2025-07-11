// ActionFrame.cpp
#include "ActionFrame.hpp"

#include "spdlog/spdlog.h"

static ZList<CActionFrame::MAPINFO> FAKE_ZList_CActionFrame_MAPINFO{};

#include "ActionFrame_regen.ipp"

_x_com_ptr<IWzProperty> CActionFrame::s_pZMapper{}; // TODO
_x_com_ptr<IWzProperty> CActionFrame::s_pSMapper{}; // TODO
int32_t CActionFrame::s_nFaceZ{}; // TODO
int32_t CActionFrame::s_nCharacterStartZ{}; // TODO
int32_t CActionFrame::s_nCharacterEndZ{}; // TODO

CActionFrame::~CActionFrame()
{
}

void CActionFrame::_dtor_0()
{
    return __sub_00017000(this, nullptr);
}

CActionFrame::CActionFrame(const CActionFrame& arg0)
{
    _ctor_1(arg0);
}

void CActionFrame::_ctor_1(const CActionFrame& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionFrame::CActionFrame()
{
    m_bBody = true;
}

void CActionFrame::_ctor_0()
{
    new(this) CActionFrame();
}

_x_com_ptr<IWzProperty> __cdecl CActionFrame::GetZMapper()
{
    return s_pZMapper;
    // return __sub_003180E0();
}

_x_com_ptr<IWzProperty> __cdecl CActionFrame::GetSMapper()
{
    return s_pSMapper;
    // return __sub_00318120();
}

long __cdecl CActionFrame::GetFaceZ()
{
    return s_nFaceZ;
}

long __cdecl CActionFrame::GetCharacterStartZ()
{
    return s_nCharacterStartZ;
}

long __cdecl CActionFrame::GetCharacterEndZ()
{
   return s_nCharacterEndZ;
}

void __cdecl CActionFrame::UnlinkMappers()
{
}

void __cdecl CActionFrame::LoadMappers()
{
    auto& sp = StringPool::GetInstance();
    _D_S_SMUZZLE = sp.GetBSTR(0x45B);
    _D_S_SHEAD = sp.GetBSTR(0x1AB4);
    _D_S_SNAVEL = sp.GetBSTR(0x459);
    _D_S_SBROW = sp.GetBSTR(0x458);
    _D_S_SMAP = sp.GetBSTR(0x3CA);

    __sub_00004DA0();
}

ZRef<ZList<CActionFrame::MAPINFO>> __cdecl CActionFrame::ExtractMap(IWzCanvas* pRawSprite)
{
    return __sub_00005710(pRawSprite);
}

__POSITION* CActionFrame::FindGroup(ZList<CActionFrame::MAPINFO>* pMIL)
{
    return __sub_00002D10(this, nullptr, pMIL);
}

void CActionFrame::MergeGroup(__POSITION* posDst, __POSITION* posSrc)
{
    __sub_00005C00(this, nullptr, posDst, posSrc);
}

void CActionFrame::UpdateMBR()
{
    if (m_bMBRValid)
    {
        return;
    }

    m_bMBRValid = true;
    SetRectEmpty(&m_rcMBR);

    for (auto& sprite : m_lpSprites)
    {
        RECT rc{};
        auto& pt = sprite->m_pt;
        auto& sz = sprite->m_pSource->m_sz;
        SetRect(&rc, pt.x, pt.y, pt.x + sz.cx, pt.y + sz.cy);
        UnionRect(&m_rcMBR, &m_rcMBR, &rc);
    }
    //__sub_00017000(this, nullptr);
}

void CActionFrame::UpdateVisiblity()
{
    ZMap<unsigned long, CSpriteInstance*, unsigned long> map;
    // TODO
    auto vLen = m_sExclVSlot.length();
    auto codes = m_sExclVSlot.length() / 2;
    auto sCode = m_sExclVSlot.op_ushort_str();
    for (auto i = 0; i < codes; ++i)
    {
        auto key = sCode[i * 2] << 16 | sCode[i * 2 + 1];
        map.Insert(key, nullptr);
    }

    for (auto& sprite : m_lpSprites)
    {
        sprite->m_bVisible = true;
        auto& src = sprite->m_pSource;

        codes = src->m_sVSlot.length() / 2;
        sCode = src->m_sVSlot.op_ushort_str();

        for (auto i = 0; i < codes; ++i)
        {
            auto key = sCode[i * 2] << 16 | sCode[i * 2 + 1];

            CSpriteInstance* value{};
            if (map.GetAt(key, &value))
            {
                if (!value)
                {
                    sprite->m_bVisible = false;
                    break;
                }

                auto valueSlot = value->m_pSource->m_nISlot;
                auto spriteSlot = sprite->m_pSource->m_nISlot;
                if (spriteSlot != valueSlot)
                {
                    if (valueSlot - spriteSlot >= 0)
                    {
                        sprite->m_bVisible = false;
                        break;
                    }

                    value->m_bVisible = false;
                    map.Insert(key, sprite.op_ptr());
                }
            }
            else
            {
                map.Insert(key, sprite.op_ptr());
            }
        }
    }
}

long CActionFrame::GetCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CActionFrame::SetExclusiveVSlot(Ztl_bstr_t arg0)
{
    m_sExclVSlot = arg0;
}

void CActionFrame::Draw(_x_com_ptr<IWzCanvas>& pCanvasUnder, _x_com_ptr<IWzCanvas>& pCanvasOver, tagPOINT& ptNavel,
                        tagPOINT& ptHead, tagPOINT& ptBrow, tagPOINT& ptMuzzle, int32_t bTamingMob)
{
    spdlog::info("Drawing with char: {}", CActionFrame::s_nCharacterStartZ);


    __sub_00003D60(this, nullptr, pCanvasUnder, pCanvasOver, ptNavel, ptHead, ptBrow, ptMuzzle, bTamingMob);
}

void CActionFrame::Merge(wchar_t* sISlot, wchar_t* sVSlot, IWzCanvas* pRawSprite)
{
    __sub_00005F10(this, nullptr, sISlot, sVSlot, pRawSprite);
}

CActionFrame& CActionFrame::operator=(const CActionFrame& arg0)
{
    return _op_assign_19(this, arg0);
}

CActionFrame& CActionFrame::_op_assign_19(CActionFrame* pThis, const CActionFrame& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionFrame::MAPINFO::~MAPINFO()
{
}

void CActionFrame::MAPINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionFrame::MAPINFO::MAPINFO(const CActionFrame::MAPINFO& arg0)
{
    _ctor_1(arg0);
}

void CActionFrame::MAPINFO::_ctor_1(const CActionFrame::MAPINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionFrame::MAPINFO::MAPINFO()
{
}

void CActionFrame::MAPINFO::_ctor_0()
{
    new (this) MAPINFO();
}

CActionFrame::MAPINFO& CActionFrame::MAPINFO::operator=(const CActionFrame::MAPINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionFrame::MAPINFO& CActionFrame::MAPINFO::_op_assign_3(CActionFrame::MAPINFO* pThis,
                                                           const CActionFrame::MAPINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSpriteSource::~CSpriteSource()
{
}

void CSpriteSource::_dtor_0()
{
    return __sub_000054F0(this, nullptr);
}

CSpriteSource::CSpriteSource(const CSpriteSource& arg0)
{
    _ctor_1(arg0);
}

void CSpriteSource::_ctor_1(const CSpriteSource& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSpriteSource::CSpriteSource()
{
}

void CSpriteSource::_ctor_0()
{
    new(this) CSpriteInstance();
}

void CSpriteSource::Init(const Ztl_bstr_t& sISlot, const Ztl_bstr_t& sBaseVSlot, IWzCanvas* pSprite)
{
    __sub_00318630(this, nullptr, sISlot, sBaseVSlot, pSprite);
}

long __cdecl CSpriteSource::QueryZ(_x_com_ptr<IWzProperty> pProp, const Ztl_bstr_t* psBaseSlot, Ztl_bstr_t* psVSlot)
{
    return __sub_003182E0(CreateNakedParam(pProp), psBaseSlot, psVSlot);
}

CSpriteSource& CSpriteSource::operator=(const CSpriteSource& arg0)
{
    return _op_assign_5(this, arg0);
}

CSpriteSource& CSpriteSource::_op_assign_5(CSpriteSource* pThis, const CSpriteSource& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSpriteInstance::~CSpriteInstance()
{
}

void CSpriteInstance::_dtor_0()
{
    this->~CSpriteInstance();
    // return __sub_00003940(this, nullptr);
}

CSpriteInstance::CSpriteInstance(const CSpriteInstance& arg0)
{
    _ctor_1(arg0);
}

void CSpriteInstance::_ctor_1(const CSpriteInstance& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSpriteInstance::CSpriteInstance()
{
}

void CSpriteInstance::_ctor_0()
{
    new(this) CSpriteInstance();
}

CSpriteInstance& CSpriteInstance::operator=(const CSpriteInstance& arg0)
{
    return _op_assign_3(this, arg0);
}

CSpriteInstance& CSpriteInstance::_op_assign_3(CSpriteInstance* pThis, const CSpriteInstance& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

wchar_t*__cdecl ZComAPI__ZComSysAllocString(const wchar_t* s)
{
    return __sub_00001230(s);
}

HRESULT __cdecl ZComAPI__ZComVarBstrFromVariant(tagVARIANT* pvargDest, tagVARIANT* pvarSrc)
{
    return __sub_00001340(pvargDest, pvarSrc);
}

wchar_t*__cdecl ZComAPI__ZComSysAllocStringByteLen(const char* s, uint32_t bn)
{
    return __sub_00001290(s, bn);
}

HRESULT __cdecl ZComAPI__ZComVariantClear(tagVARIANT* pvarg)
{
    return __sub_00001310(pvarg);
}

wchar_t*__cdecl ZComAPI__ZComSysAllocStringLen(const wchar_t* s, uint32_t u)
{
    return __sub_000012D0(s, u);
}

Ztl_bstr_t __cdecl DetachBSTR(tagVARIANT& v)
{
    if (v.vt == 8)
    {
        return Ztl_bstr_t(v.bstrVal);
    }

    Ztl_variant_t dst;
    ZComAPI::ZComVarBstrFromVariant(&dst, &v);
    return Ztl_bstr_t(dst.bstrVal);

    /*Ztl_bstr_t ret;
    return *__sub_00004C40(&ret, v);*/
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzCanvas___GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e___(
    const wchar_t* sUOL, _x_com_ptr<IWzCanvas>& pObj, IUnknown* pUnkOuter)
{
    return __sub_000030F0(sUOL, pObj, pUnkOuter);
}

int32_t __cdecl ZStrUtil___ConvReqSize(const char* m, wchar_t* __formal, int32_t nChars)
{
    return __sub_00001150(m, __formal, nChars);
}

wchar_t*__stdcall _com_util__ZtlConvertStringToBSTR(const char* pSrc)
{
    return __sub_000017D0(pSrc);
}

HRESULT __cdecl ZComAPI__ZComVariantChangeType(tagVARIANT* pvargDest, tagVARIANT* pvarSrc, uint16_t wFlags, uint16_t vt)
{
    return __sub_00001670(pvargDest, pvarSrc, wFlags, vt);
}

void*__cdecl operatornew_146691(uint32_t uSize)
{
    return __sub_000023F0(uSize);
}

_x_com_ptr<IWzResMan>&__cdecl get_rm()
{
    //return __sub_00001D80();
    return _D_G_RM;
}

wchar_t*__cdecl ZStrUtil___Conv(const char* m, wchar_t* w, int32_t nChars)
{
    return __sub_00001170(m, w, nChars);
}
