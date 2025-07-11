// UIEquip.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"
#include "Wnd/Wnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 0 0x5bdb
struct EqSlotInfo;
// Level: 1 0x5c41
class CUIPetEquip;
// Level: 1 0x5c6f
class CUIEquip;
// Level: 1 0x5c19
class CUIDragonEquip;
// Level: 1 0x5bf5
class CUIMechanicEquip;

struct EqSlotInfo
{
    // Nested
    // Fields
public:
    int32_t nX{};

public:
    int32_t nY{};

    EqSlotInfo() = default;

    constexpr EqSlotInfo(int32_t x, int32_t y) : nX(x), nY(y)
    {
    }

    // Methods
public:
    static long __cdecl GetX(long nXpt, long nType);

public:
    static long __cdecl GetY(long nYpt, long nType);

public:
    int32_t IsPtIn(int32_t arg0, int32_t arg1);
};

STATIC_ASSERT_SIZE(EqSlotInfo, 8);

class CUIPetEquip : public CWnd, public TSingleton<CUIPetEquip>
{
    // Nested
public:
    enum k
    {
        kWidth = 167,
        kHeight = 201
    };

    enum ID_CTRL_
    {
        ID_CTRL_SCROLLBAR = 1000,
        ID_CTRL_BT_HIDE = 2000,
        ID_CTRL_BT_PET_1 = 2001,
        ID_CTRL_BT_PET_2 = 2002,
        ID_CTRL_BT_PET_3 = 2003
    };

    // Fields
protected:
    CUIToolTip m_uiToolTip;

protected:
    ZRef<CCtrlButton> m_pBtHide;

protected:
    std::array<ZRef<CCtrlButton>, 3> m_pBtPets{};

protected:
    long m_nPetIndex{};

private:
    _x_com_ptr<IWzProperty> m_pImgFontNumber;

private:
    long m_nPetConsumeItemID_HP{};

private:
    long m_nPetConsumeItemID_MP{};
    // Methods
public:
    virtual ~CUIPetEquip();

public:
    void _dtor_0();

public:
    CUIPetEquip(const CUIPetEquip& arg0);

public:
    void _ctor_1(const CUIPetEquip& arg0);

public:
    CUIPetEquip(long lLeft, long lTop);

public:
    void _ctor_0(long lLeft, long lTop);

public:
    virtual void OnCreate(void* pData);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    long GetPetEquipFromPoint(int32_t rx, int32_t ry);

public:
    void SetPetConsumeItem(long nItemID, long x, long y);

public:
    void SetPetConsumeMPItem(long nItemID, long x, long y);

    CLASS_RTTI_(CUIPetEquip, CWnd);

public:
    CUIPetEquip& operator=(const CUIPetEquip& arg0);

public:
    static CUIPetEquip& _op_assign_15(CUIPetEquip* pThis, const CUIPetEquip& arg0);
};

STATIC_ASSERT_SIZE(CUIPetEquip, 2808);

class CUIEquip : public CUIWnd, public TSingleton<CUIEquip>
{
    // Nested
public:
    class CExpandableWndInfo
    {
    public:
        static EqSlotInfo m_sEqSlotInfo[59];
        static EqSlotInfo m_sPetConsumeSlotInfo[2];
        // Nested
        // Fields
    private:
        int32_t m_bExpanded{};
        // Methods
    public:
        CExpandableWndInfo();

        CExpandableWndInfo(int32_t arg0);

    public:
        void _ctor_0(int32_t arg0);

    public:
        int32_t IsExpanded();

    public:
        long GetBPCount();

    public:
        EqSlotInfo& GetEqSlotInfo(long arg0);

    public:
        EqSlotInfo& GetPetConsumeSlotInfo(long arg0);

    public:
        void SetSlotDisable_1(_x_com_ptr<IWzCanvas> pCanvas, long nSlotIndex);

    public:
        void SetSlotDisable_0(_x_com_ptr<IWzCanvas> pCanvas, long nX, long nY);
    };

public:
    enum k
    {
        kWidth = 184,
        kHeight = 304,
        kBtClose_X = 162,
        kBtClose_Y = 6,
        kDragonEquipX = 151,
        kPetEquip_X = 183,
        kPetEquip_Y = 103,
        kMechanicEquipX = 151
    };

    enum ID_CTRL_BT_
    {
        ID_CTRL_BT_CASHSHOP = 3000,
        ID_CTRL_BT_DRAGON = 3001,
        ID_CTRL_BT_PETEQUIP_SHOW = 3002,
        ID_CTRL_BT_MECHANIC = 3003
    };

    enum ID_CTRL_BT_DETAIL
    {
        ID_CTRL_BT_DETAIL = 2006
    };

    enum kDetail_
    {
        kDetail_X = 172,
        kDetail_Y = 117
    };

    // Fields
private:
    _x_com_ptr<IWzProperty> m_pImgFontNumber;

private:
    long m_nPetConsumeHPItemID{};

private:
    long m_nPetConsumeMPItemID{};

private:
    ZRef<CUIMechanicEquip> m_pUIMechanicEquip;

private:
    ZRef<CUIDragonEquip> m_pUIDragonEquip;

private:
    ZRef<CUIPetEquip> m_pUIPetEquip;

private:
    ZRef<CCtrlButton> m_pBtPetEquipShow;

private:
    int32_t m_bPetEquipShown{};

private:
    long m_nToggleTime{};

private:
    CUIEquip::CExpandableWndInfo m_ewi;

private:
    CLayoutMan m_lm;

private:
    ZRef<CCtrlOriginButton> m_pBtMechanic;
    // Methods
public:
    virtual ~CUIEquip();

public:
    void _dtor_0();

public:
    CUIEquip(const CUIEquip& arg0);

public:
    void _ctor_1(const CUIEquip& arg0);

    CTOR_DEFAULT(CUIEquip);

public:
    CUIEquip();

public:
    void _ctor_0();

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void Update();

public:
    virtual void OnMoveWnd(long l, long t);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    long GetBodyPartFromPoint(int32_t rx, int32_t ry);

public:
    void ToggleMechanicEquip();

public:
    void ToggleDragonEquip();

protected:
    void TogglePetEquip();

protected:
    void OnTogglePetEquip();

public:
    void ShowItemReleaseEffect(long nPos);

public:
    virtual int32_t IsMyAddon(CWnd* pWnd);

    CLASS_RTTI_(CUIEquip, CUIWnd);

public:
    CUIEquip& operator=(const CUIEquip& arg0);

public:
    static CUIEquip& _op_assign_21(CUIEquip* pThis, const CUIEquip& arg0);

    friend class CUIPetEquip;
};

STATIC_ASSERT_SIZE(CUIEquip, 2908);

class CUIDragonEquip : public CWnd, public TSingleton<CUIDragonEquip>
{
public:
    static EqSlotInfo ms_aRegion[4];
    // Nested
public:
    enum k
    {
        kWidth = 151,
        kHeight = 172
    };

    // Fields
protected:
    CUIToolTip m_uiToolTip;
    // Methods
public:
    virtual ~CUIDragonEquip();

public:
    void _dtor_0();

public:
    CUIDragonEquip(const CUIDragonEquip& arg0);

public:
    void _ctor_1(const CUIDragonEquip& arg0);

public:
    CUIDragonEquip(long lLeft, long lTop);

public:
    void _ctor_0(long lLeft, long lTop);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    long GetBodyPartFromPoint(int32_t rx, int32_t ry);

    CLASS_RTTI_(CUIDragonEquip, CWnd);

public:
    CUIDragonEquip& operator=(const CUIDragonEquip& arg0);

public:
    static CUIDragonEquip& _op_assign_12(CUIDragonEquip* pThis, const CUIDragonEquip& arg0);
};

STATIC_ASSERT_SIZE(CUIDragonEquip, 2760);

class CUIMechanicEquip : public CWnd, public TSingleton<CUIMechanicEquip>
{
public:
    static EqSlotInfo ms_aRegion[5];
    // Nested
public:
    enum k
    {
        kWidth = 151,
        kHeight = 172
    };

    // Fields
protected:
    CUIToolTip m_uiToolTip;
    // Methods
public:
    virtual ~CUIMechanicEquip();

public:
    void _dtor_0();

public:
    CUIMechanicEquip(const CUIMechanicEquip& arg0);

public:
    void _ctor_1(const CUIMechanicEquip& arg0);

public:
    CUIMechanicEquip(long lLeft, long lTop);

public:
    void _ctor_0(long lLeft, long lTop);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    long GetBodyPartFromPoint(int32_t rx, int32_t ry);

    CLASS_RTTI_(CUIMechanicEquip, CWnd);

public:
    CUIMechanicEquip& operator=(const CUIMechanicEquip& arg0);

public:
    static CUIMechanicEquip& _op_assign_12(CUIMechanicEquip* pThis, const CUIMechanicEquip& arg0);
};

STATIC_ASSERT_SIZE(CUIMechanicEquip, 2760);


// 861458 400
static std::array<EqSlotInfo, 0x32> _D_SEQSLOTINFO{
    EqSlotInfo{
        0x26,
        0x23,
    },

    EqSlotInfo{
        0x26,
        0x44,
    },

    EqSlotInfo{
        0x26,
        0x65,
    },

    EqSlotInfo{
        0x68,
        0x65,
    },

    EqSlotInfo{
        0x26,
        0x86,
    },

    EqSlotInfo{
        0x26,
        0xa7,
    },

    EqSlotInfo{
        0x47,
        0xc8,
    },

    EqSlotInfo{
        0x5,
        0xa7,
    },

    EqSlotInfo{
        0x5,
        0x86,
    },

    EqSlotInfo{
        0x89,
        0x86,
    },

    EqSlotInfo{
        0x68,
        0x86,
    },

    EqSlotInfo{
        0x68,
        0xa7,
    },

    EqSlotInfo{
        0x89,
        0xa7,
    },

    EqSlotInfo{
        0x70,
        0x4d,
    },

    EqSlotInfo{
        0x68,
        0x44,
    },

    EqSlotInfo{
        0x89,
        0x44,
    },

    EqSlotInfo{
        0x47,
        0x86,
    },

    EqSlotInfo{
        0x5,
        0xe9,
    },

    EqSlotInfo{
        0x26,
        0xe9,
    },

    EqSlotInfo{
        0x47,
        0xe9,
    },

    EqSlotInfo{
        0x4d,
        0x7a,
    },

    EqSlotInfo{
        0xb,
        0x38,
    },

    EqSlotInfo{
        0x2c,
        0x38,
    },

    EqSlotInfo{
        0xb,
        0x17,
    },

    EqSlotInfo{
        0x4d,
        0x17,
    },

    EqSlotInfo{
        0x4d,
        0x59,
    },

    EqSlotInfo{
        0xb,
        0x7a,
    },

    EqSlotInfo{
        0x2c,
        0x59,
    },

    EqSlotInfo{
        0x6e,
        0x7a,
    },

    EqSlotInfo{
        0x6e,
        0x59,
    },

    EqSlotInfo{
        0x4d,
        0x7a,
    },

    EqSlotInfo{
        0x6e,
        0x7a,
    },

    EqSlotInfo{
        0xb,
        0x38,
    },

    EqSlotInfo{
        0x2c,
        0x38,
    },

    EqSlotInfo{
        0x4d,
        0x59,
    },

    EqSlotInfo{
        0xb,
        0x7a,
    },

    EqSlotInfo{
        0x2c,
        0x59,
    },

    EqSlotInfo{
        0x6e,
        0x59,
    },

    EqSlotInfo{
        0x4d,
        0x7a,
    },

    EqSlotInfo{
        0x6e,
        0x7a,
    },

    EqSlotInfo{
        0xb,
        0x38,
    },

    EqSlotInfo{
        0x2c,
        0x38,
    },

    EqSlotInfo{
        0x4d,
        0x59,
    },

    EqSlotInfo{
        0xb,
        0x7a,
    },

    EqSlotInfo{
        0x2c,
        0x59,
    },

    EqSlotInfo{
        0xb,
        0x59,
    },

    EqSlotInfo{
        0xb,
        0x59,
    },

    EqSlotInfo{
        0xb,
        0x59,
    },

    EqSlotInfo{
        0x5,
        0x44,
    },

    EqSlotInfo{
        0x47,
        0xa7,
    },
};
