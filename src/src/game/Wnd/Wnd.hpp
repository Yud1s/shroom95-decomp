// Wnd.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"

#include "IG/IG.hpp"

// Level: 1 0x13a5
class CWnd;

class CCtrlWnd;

struct DRAGCTX;

class CWnd : public IGObj, public IUIMsgHandler, public ZRefCounted
{
public:
    static uint32_t ms_dwKeyCounter;
    // Nested
public:
    enum UIOrigin
    {
        Origin_LT = 0,
        Origin_CT = 1,
        Origin_RT = 2,
        Origin_LC = 3,
        Origin_CC = 4,
        Origin_RC = 5,
        Origin_LB = 6,
        Origin_CB = 7,
        Origin_RB = 8,
        Origin_NUM = 9
    };
    enum INV_POS
    {
        INV_POS = -2147483648
    };
    // Fields
protected:
    unsigned long m_dwWndKey{};

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayer;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pAnimationLayer;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pOverlabLayer;

protected:
    long m_width{};

protected:
    long m_height{};

protected:
    tagRECT m_rcInvalidated{};

protected:
    int32_t m_bScreenCoord{};

protected:
    long m_nBackgrndX{};

protected:
    long m_nBackgrndY{};

protected:
    SECPOINT m_ptCursorRel;

protected:
    ZList<ZRef<CCtrlWnd>> m_lpChildren;

protected:
    CCtrlWnd *m_pFocusChild{};

protected:
    _x_com_ptr<IWzCanvas> m_pBackgrnd;

protected:
    CWnd::UIOrigin m_origin{};
    // Methods
public:
    virtual ~CWnd();

public:
    void _dtor_0();

    CTOR_DEFAULT(CWnd);

public:
    CWnd(const CWnd &arg0);

public:
    void _ctor_1(const CWnd &arg0);

public:
    CWnd();

public:
    void _ctor_0();

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual int32_t OnMouseWheel(long rx, long ry, long nWheel);

public:
    virtual void OnMouseEnter(int32_t bEnter);

public:
    virtual int32_t OnDragDrop(long nState, DRAGCTX &ctx, long rx, long ry);

public:
    virtual long GetAbsLeft();

public:
    virtual long GetAbsTop();

public:
    virtual void Update();

public:
    void CreateWnd(long l, long t, long w, long h, long z, int32_t bScreenCoord, void *pData, int32_t bSetFocus,
                   CWnd::UIOrigin org);

public:
    void Destroy();

public:
    virtual void PreCreateWnd(long l, long t, long w, long h, long z, int32_t bScreenCoord, void *pData);

public:
    virtual void OnCreate(void *pData);

public:
    virtual void OnDestroy();

public:
    virtual void OnMoveWnd(long l, long t);

public:
    virtual void OnEndMoveWnd();

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
    virtual int32_t OnActivate(int32_t bActive);

public:
    unsigned long GetWndKey() const;

public:
    _x_com_ptr<IWzGr2DLayer> GetLayer();

public:
    _x_com_ptr<IWzGr2DLayer> GetOverlabLayer();

public:
    _x_com_ptr<IWzCanvas> GetCanvas() const;

public:
    Ztl_variant_t ClipRect(const tagRECT *pRect) const;

public:
    void MoveWnd(long l, long t);

public:
    void MoveWndToAbsPos(long absL, long absT);

public:
    void SetFocusChild(CCtrlWnd *pCtrl);

public:
    int32_t IsFocused() const;

public:
    int32_t IsActive() const;

public:
    long GetWidth() const;

public:
    long GetHeight() const;

public:
    void InvalidateRect(const tagRECT *pRect = nullptr);

public:
    virtual void Draw(const tagRECT *pRect);

public:
    virtual int32_t IsMyAddon(CWnd *pWnd);

public:
    int32_t IsScreenCoord() const;

public:
    CCtrlWnd *GetFocusChild() const;

public:
    CCtrlWnd *GetChildItem(uint32_t nId);

public:
    void RemoveChild(CCtrlWnd *pCtrl);

public:
    void CoverBackgrnd(ZXString16 arg0, long arg1, long arg2, int32_t arg3);

protected:
    __POSITION *FindChild(CCtrlWnd *pCtrl) const;

protected:
    void InsertChildAfter(CCtrlWnd *pCtrl, __POSITION *pos);

protected:
    void InsertChildBefore(CCtrlWnd *pCtrl, __POSITION *pos);

protected:
    void SetAnimationBackgrnd(Ztl_bstr_t sUOL, long nBackgrndX, long nBackgrndY);

protected:
    void SetBackgrnd(Ztl_bstr_t sUOL, long bgX, long bgY, int32_t bMulti, long expandW, long expandH);

protected:
    void SetBackgrndV(Ztl_bstr_t sUOL, long nHeight, long nBackgrndX, long nBackgrndY);

    CLASS_RTTI_(CWnd, IUIMsgHandler);

public:
    CWnd &operator=(const CWnd &arg0);

public:
    static CWnd &_op_assign_53(CWnd *pThis, const CWnd &arg0);



    void PrintInfoTree(size_t level);

    friend class CWndMan;
    friend class CCtrlWnd;
};

STATIC_ASSERT_SIZE(CWnd, 128);
