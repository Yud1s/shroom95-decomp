// ActionFrame.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"


// Level: 0 0x50c0
class CActionFrame;
// Level: 1 0x5095
class CSpriteSource;
// Level: 1 0x5050
class CSpriteInstance;

class CActionFrame
{
    // Nested
public:
    struct MAPINFO
    {
        // Nested
        // Fields
    public:
        Ztl_bstr_t sName;

    public:
        tagPOINT pt{};
        // Methods
    public:
        ~MAPINFO();

    public:
        void _dtor_0();

    public:
        MAPINFO(const CActionFrame::MAPINFO& arg0);

    public:
        void _ctor_1(const CActionFrame::MAPINFO& arg0);

    public:
        MAPINFO();

    public:
        void _ctor_0();

    public:
        CActionFrame::MAPINFO& operator=(const CActionFrame::MAPINFO& arg0);

    public:
        static CActionFrame::MAPINFO& _op_assign_3(CActionFrame::MAPINFO* pThis, const CActionFrame::MAPINFO& arg0);
    };

    // Fields

public:
    static _x_com_ptr<IWzProperty> s_pZMapper;
    static _x_com_ptr<IWzProperty> s_pSMapper;
    static int32_t s_nFaceZ;
    static int32_t s_nCharacterStartZ;
    static int32_t s_nCharacterEndZ;

protected:
    ZList<ZRef<CSpriteInstance>> m_lpSprites;

protected:
    tagRECT m_rcMBR{};

protected:
    int32_t m_bMBRValid{};

protected:
    ZRef<CSpriteInstance> m_pSpriteBody;

protected:
    int32_t m_bBody{};

protected:
    Ztl_bstr_t m_sExclVSlot;

protected:
    ZList<ZRef<ZList<CActionFrame::MAPINFO>>> m_lGroups;

public:
    long tDelay{};

public:
    tagRECT rcBody{};
    // Methods
public:
    virtual ~CActionFrame();

public:
    void _dtor_0();

public:
    CActionFrame(const CActionFrame& arg0);

public:
    void _ctor_1(const CActionFrame& arg0);

public:
    CActionFrame();

public:
    void _ctor_0();

public:
    static _x_com_ptr<IWzProperty> __cdecl GetZMapper();

public:
    static _x_com_ptr<IWzProperty> __cdecl GetSMapper();

public:
    static long __cdecl GetFaceZ();

public:
    static long __cdecl GetCharacterStartZ();

public:
    static long __cdecl GetCharacterEndZ();

public:
    static void __cdecl UnlinkMappers();

public:
    static void __cdecl LoadMappers();

protected:
    static ZRef<ZList<CActionFrame::MAPINFO>> __cdecl ExtractMap(IWzCanvas* pRawSprite);

protected:
    __POSITION* FindGroup(ZList<CActionFrame::MAPINFO>* pMIL);

protected:
    void MergeGroup(__POSITION* posDst, __POSITION* posSrc);

protected:
    void UpdateMBR();

protected:
    void UpdateVisiblity();

public:
    long GetCount();

public:
    void SetExclusiveVSlot(Ztl_bstr_t arg0);

public:
    void Draw(_x_com_ptr<IWzCanvas>& pCanvasUnder, _x_com_ptr<IWzCanvas>& pCanvasOver, tagPOINT& ptNavel,
              tagPOINT& ptHead, tagPOINT& ptBrow, tagPOINT& ptMuzzle, int32_t bTamingMob);

public:
    void Merge(wchar_t* sISlot, wchar_t* sVSlot, IWzCanvas* pRawSprite);

public:
    CActionFrame& operator=(const CActionFrame& arg0);

public:
    static CActionFrame& _op_assign_19(CActionFrame* pThis, const CActionFrame& arg0);
};

STATIC_ASSERT_SIZE(CActionFrame, 100);

class CSpriteSource : public ZRefCounted
{
    // Nested
    // Fields
public:
    Ztl_bstr_t m_sBaseVSlot;

public:
    Ztl_bstr_t m_sISlot;

public:
    Ztl_bstr_t m_sVSlot;

public:
    long m_nISlot{};

public:
    tagSIZE m_sz{};

public:
    long m_z{};

public:
    tagPOINT m_ptCenter{};

public:
    _x_com_ptr<IWzCanvas> m_pSprite;
    // Methods
public:
    virtual ~CSpriteSource();

public:
    void _dtor_0();

public:
    CSpriteSource(const CSpriteSource& arg0);

public:
    void _ctor_1(const CSpriteSource& arg0);

public:
    CSpriteSource();

public:
    void _ctor_0();

public:
    void Init(const Ztl_bstr_t& sISlot, const Ztl_bstr_t& sBaseVSlot, IWzCanvas* pSprite);

public:
    static long __cdecl QueryZ(_x_com_ptr<IWzProperty> pProp, const Ztl_bstr_t* psBaseSlot, Ztl_bstr_t* psVSlot);

public:
    CSpriteSource& operator=(const CSpriteSource& arg0);

public:
    static CSpriteSource& _op_assign_5(CSpriteSource* pThis, const CSpriteSource& arg0);
};

STATIC_ASSERT_SIZE(CSpriteSource, 52);

class CSpriteInstance : public ZRefCounted
{
    // Nested
    // Fields
public:
    tagPOINT m_pt{};

public:
    int32_t m_bVisible{};

public:
    void* m_pGroup{};

public:
    ZRef<CSpriteSource> m_pSource;
    // Methods
public:
    virtual ~CSpriteInstance();

public:
    void _dtor_0();

public:
    CSpriteInstance(const CSpriteInstance& arg0);

public:
    void _ctor_1(const CSpriteInstance& arg0);

public:
    CSpriteInstance();

public:
    void _ctor_0();

public:
    CSpriteInstance& operator=(const CSpriteInstance& arg0);

public:
    static CSpriteInstance& _op_assign_3(CSpriteInstance* pThis, const CSpriteInstance& arg0);
};

STATIC_ASSERT_SIZE(CSpriteInstance, 36);

wchar_t*__cdecl ZComAPI__ZComSysAllocString(const wchar_t* s);
HRESULT __cdecl ZComAPI__ZComVarBstrFromVariant(tagVARIANT* pvargDest, tagVARIANT* pvarSrc);
wchar_t*__cdecl ZComAPI__ZComSysAllocStringByteLen(const char* s, uint32_t bn);
HRESULT __cdecl ZComAPI__ZComVariantClear(tagVARIANT* pvarg);
wchar_t*__cdecl ZComAPI__ZComSysAllocStringLen(const wchar_t* s, uint32_t u);
Ztl_bstr_t __cdecl DetachBSTR(tagVARIANT& v);
void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzCanvas___GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e___(
    const wchar_t* sUOL, _x_com_ptr<IWzCanvas>& pObj, IUnknown* pUnkOuter);
int32_t __cdecl ZStrUtil___ConvReqSize(const char* m, wchar_t* __formal, int32_t nChars);
wchar_t*__stdcall _com_util__ZtlConvertStringToBSTR(const char* pSrc);
HRESULT __cdecl ZComAPI__ZComVariantChangeType(tagVARIANT* pvargDest, tagVARIANT* pvarSrc, uint16_t wFlags,
                                               uint16_t vt);
void*__cdecl operatornew_146691(uint32_t uSize);
_x_com_ptr<IWzResMan>&__cdecl get_rm();
wchar_t*__cdecl ZStrUtil___Conv(const char* m, wchar_t* w, int32_t nChars);
