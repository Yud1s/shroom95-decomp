// PortalList.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"

// Level: 0 0xce22
struct PORTAL;
// Level: 1 0xce40
class CPortalList;

struct PORTAL
{
    // Nested
    // Fields
public:
    long nIdx{};

public:
    ZXString<char> sName;

public:
    long nType{};

public:
    tagPOINT ptPos{};

public:
    long nHRange{};

public:
    long nVRange{};

public:
    long nTMap{};

public:
    ZXString<char> sTName;

public:
    int32_t bHideTooltip{};

public:
    int32_t bOnlyOnce{};

public:
    long nDelayTime{};

public:
    ZXString<char> sImage;

public:
    long nVImpact{};

public:
    long nHImpact{};

public:
    ZXString<char> sReactorName;

public:
    ZXString<char> sSessionValueKey;

public:
    ZXString<char> sSessionValue;
    // Methods
public:
    ~PORTAL();

public:
    void _dtor_0();

public:
    PORTAL(const PORTAL& arg0);

public:
    void _ctor_1(const PORTAL& arg0);

public:
    PORTAL();

public:
    void _ctor_0();

public:
    int32_t IsChangable();

public:
    PORTAL& operator=(const PORTAL& arg0);

public:
    static PORTAL& _op_assign_4(PORTAL* pThis, const PORTAL& arg0);
};

STATIC_ASSERT_SIZE(PORTAL, 72);

class CPortalList : public TSingleton<CPortalList>
{
    // Nested
    // Fields
protected:
    ZArray<ZRef<PORTAL>> m_aPortal;

protected:
    ZArray<ZRef<PORTAL>> m_aPortal_Collision;

protected:
    ZArray<ZRef<PORTAL>> m_aPortal_Hidden;

protected:
    ZList<_x_com_ptr<IWzGr2DLayer>> m_llVisiblePortal;

protected:
    _x_com_ptr<IWzProperty> m_pPropPV;

protected:
    _x_com_ptr<IWzProperty> m_pPropPH;

protected:
    _x_com_ptr<IWzProperty> m_pPropPSH;

protected:
    const PORTAL* m_pHiddenPortal{};

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerPHAppear;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerPHVisible;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerPHDisappear;

private:
    unsigned long m_dwPortalCrc{};
    // Methods
public:
    virtual ~CPortalList();

public:
    void _dtor_0();

public:
    CPortalList(const CPortalList& arg0);

public:
    void _ctor_1(const CPortalList& arg0);

public:
    CPortalList();

public:
    void _ctor_0();

public:
    void RestorePortal(CField* pField, _x_com_ptr<IWzProperty> pPropPortal);

public:
    const PORTAL* FindPortal(long x, long y, long nXrange);

public:
    const PORTAL* FindPortalByName(const char* sName);

public:
    const PORTAL* FindPortal_Collision(long x, long y);

public:
    const PORTAL* FindPortal_Visible(long x, long y, long nXrange);

public:
    ZRef<PORTAL> FindPortal_Hidden(long x, long y, long nXrange);

public:
    const PORTAL* GetPortal(long arg0);

public:
    long GetPortalCount();

public:
    void SetHiddenPortal(ZRef<PORTAL> pPortal);

public:
    void UpdateHiddenPortal();

protected:
    _x_com_ptr<IWzProperty> GetPropPV();

protected:
    _x_com_ptr<IWzProperty> GetPropPH();

protected:
    _x_com_ptr<IWzProperty> GetPropPSH();

public:
    unsigned long GetCRC();

public:
    CPortalList& operator=(const CPortalList& arg0);

public:
    static CPortalList& _op_assign_17(CPortalList* pThis, const CPortalList& arg0);
};

STATIC_ASSERT_SIZE(CPortalList, 68);


unsigned long __cdecl GETCRC32String(ZXString<char> str, unsigned long dwInit);
