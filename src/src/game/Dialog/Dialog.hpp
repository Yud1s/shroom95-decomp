// Dialog.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0x1518
class CDialog;

class CDialog : public CWnd
{
public:
    struct MODAL_OWNER
    {
        explicit MODAL_OWNER(CDialog* dialog);

        void _ctor_0(CDialog* dialog)
        {
            new(this) MODAL_OWNER(dialog);
        }

        ~MODAL_OWNER();
        CDialog* m_pDlg;
    };

    // Nested
    // Fields
protected:
    long m_nRet{};

protected:
    int32_t m_bTerminate{};

protected:
    ZRef<CDialog> m_pChildModal;
    // Methods
public:
    virtual ~CDialog();

public:
    void _dtor_0();

public:
    CDialog(const CDialog& arg0);

public:
    void _ctor_1(const CDialog& arg0) const;

public:
    CDialog();

public:
    void _ctor_0();

public:
    void CreateDlg(const wchar_t* sUOL, int32_t bScreenCoord, void* pData, int32_t bMulti);

    void CreateDlg_0(const wchar_t* sUOL, int32_t bScreenCoord, void* pData, int32_t bMulti)
    {
        CreateDlg(sUOL, bScreenCoord, pData, bMulti);
    }

public:
    void CreateDlg(long w, long h, int32_t bScreenCoord, void* pData);

    void CreateDlg_1(long w, long h, int32_t bScreenCoord, void* pData)
    {
        CreateDlg(w, h, bScreenCoord, pData);
    }

public:
    void CreateDlg(long l, long t, long w, long h, long z, int32_t bScreenCoord, void* pData, CWnd::UIOrigin origin);

    void CreateDlg_2(long l, long t, long w, long h, long z, int32_t bScreenCoord, void* pData, CWnd::UIOrigin origin)
    {
        CreateDlg(l, t, w, h, z, bScreenCoord, pData, origin);
    }

public:
    void CreateDlg2(const wchar_t* sUOL, long l, long t);

public:
    void CreateDlgOnCenter(const wchar_t* sUOL);

public:
    long DoModal();

public:
    virtual void SetRet(long nRet);

public:
    virtual void OnDestroy();

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);

public:
    virtual void OnButtonClicked(uint32_t nId);

protected:
    void ProcessTab(int32_t bBackTab);

    CLASS_RTTI_(CDialog, CWnd);

public:
    CDialog& operator=(const CDialog& arg0);

public:
    static CDialog& _op_assign_18(CDialog* pThis, const CDialog& arg0);
};

STATIC_ASSERT_SIZE(CDialog, 144);

class CUniqueModeless : public CDialog, public TSingleton<CUniqueModeless>
{
    // Nested
    // Fields
    //SINGLETON_PAD;

public:
    virtual ~CUniqueModeless();

public:
    void _dtor_0();

public:
    CUniqueModeless(const CUniqueModeless& arg0);

public:
    void _ctor_1(const CUniqueModeless& arg0) const;

    CTOR_DEFAULT(CUniqueModeless);

public:
    CUniqueModeless();

public:
    void _ctor_0();

public:
    virtual void ResetInfo();

public:
    virtual void SetRet(long nRet);

private:
    long DoModal() const;

    CLASS_RTTI_(CUniqueModeless, CDialog);

public:
    CUniqueModeless& operator=(const CUniqueModeless& arg0);

public:
    static CUniqueModeless& _op_assign_9(CUniqueModeless* pThis, const CUniqueModeless& arg0);
};

STATIC_ASSERT_SIZE(TSingleton<CUniqueModeless>, 1);
// TODO(IMPORTANT) SIZE!
STATIC_ASSERT_SIZE(CUniqueModeless, 148);
