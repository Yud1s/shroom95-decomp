// LoginWnd_New.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "Login/Login.hpp"
#include "Wnd/Wnd.hpp"

// Level: 1 0x156c1
class CUINewCharJobSelect;
// Level: 1 0x156ee
class CUINewCharAvatarSelect;
// Level: 1 0x15634
class CUINewCharNameSelect;
// Level: 1 0x15615
class CUINewCharRaceSelect;
// Level: 1 0x15754
class CConfirmRaceDlg;
// Level: 2 0x15678
class CUINewCharNameSelectAran;
// Level: 2 0x156da
class CUINewCharJobSelectNormal;
// Level: 2 0x15692
class CUINewCharNameSelectEvan;
// Level: 2 0x15725
class CUINewCharAvatarSelectAran;
// Level: 2 0x15743
class CUINewCharAvatarSelectRes;
// Level: 2 0x15734
class CUINewCharAvatarSelectEvan;
// Level: 2 0x156ab
class CUINewCharNameSelectRes;
// Level: 2 0x15707
class CUINewCharAvatarSelectCygnus;
// Level: 2 0x15644
class CUINewCharNameSelectCygnus;
// Level: 2 0x15716
class CUINewCharAvatarSelectNormal;
// Level: 2 0x1565e
class CUINewCharNameSelectNormal;

class CUINewCharJobSelect : public CWnd, public TSingleton<CUINewCharJobSelect>
{
    // Nested
public:
    enum ID_CTRL_NEWCHAR_BT_
    {
        ID_CTRL_NEWCHAR_BT_YES = 1000,
        ID_CTRL_NEWCHAR_BT_NO = 1001,
        ID_CTRL_NEWCHAR_BT_LEFT = 1002,
        ID_CTRL_NEWCHAR_BT_RIGHT = 1003,
        ID_CTRL_NEWCHAR_BT_LR_END = 1004
    };

    // Fields
protected:
    CLogin* m_pLogin{};

protected:
    ZRef<CCtrlButton> m_pBtLeft;

protected:
    ZRef<CCtrlButton> m_pBtRight;

protected:
    ZRef<CCtrlButton> m_pBtYes;

protected:
    ZRef<CCtrlButton> m_pBtNo;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerBkg;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasSel;

protected:
    ZArray<_x_com_ptr<IWzCanvas>> m_apCanvasJob;
    // Methods
public:
    CUINewCharJobSelect();
    virtual ~CUINewCharJobSelect();

public:
    void _dtor_0();

public:
    CUINewCharJobSelect(const CUINewCharJobSelect& arg0);

public:
    void _ctor_1(const CUINewCharJobSelect& arg0);

public:
    CUINewCharJobSelect(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void Delete();

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

protected:
    int32_t IsRequestValid();

public:
    CUINewCharJobSelect& operator=(const CUINewCharJobSelect& arg0);

public:
    static CUINewCharJobSelect& _op_assign_9(CUINewCharJobSelect* pThis, const CUINewCharJobSelect& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharJobSelect, 176);

class CUINewCharAvatarSelect : public CWnd, public TSingleton<CUINewCharAvatarSelect>
{
    // Nested
public:
    enum ID_CTRL_NEWCHAR_BT_
    {
        ID_CTRL_NEWCHAR_BT_YES = 1000,
        ID_CTRL_NEWCHAR_BT_NO = 1001,
        ID_CTRL_NEWCHAR_BT_LEFT = 1002,
        ID_CTRL_NEWCHAR_BT_RIGHT = 1011,
        ID_CTRL_NEWCHAR_BT_LR_END = 1020
    };

    // Fields
protected:
    CLogin* m_pLogin{};

protected:
    std::array<ZRef<CCtrlButton>, 9> m_pBtLeft{};

protected:
    std::array<ZRef<CCtrlButton>, 9> m_pBtRight{};

protected:
    ZRef<CCtrlButton> m_pBtYes;

protected:
    ZRef<CCtrlButton> m_pBtNo;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerBkg;

protected:
    std::array<_x_com_ptr<IWzCanvas>, 9> m_pCanvasSel{};
    // Methods
public:
    CUINewCharAvatarSelect()
    {
    }

    virtual ~CUINewCharAvatarSelect();

public:
    void _dtor_0();

public:
    CUINewCharAvatarSelect(const CUINewCharAvatarSelect& arg0);

public:
    void _ctor_1(const CUINewCharAvatarSelect& arg0);

public:
    CUINewCharAvatarSelect(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void Delete();

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

protected:
    int32_t IsRequestValid();

public:
    CUINewCharAvatarSelect& operator=(const CUINewCharAvatarSelect& arg0);

public:
    static CUINewCharAvatarSelect& _op_assign_9(CUINewCharAvatarSelect* pThis, const CUINewCharAvatarSelect& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharAvatarSelect, 332);

class CUINewCharNameSelect : public CWnd
{
    // Nested
public:
    enum ID_CTRL_NEWCHAR_
    {
        ID_CTRL_NEWCHAR_BT_YES = 1000,
        ID_CTRL_NEWCHAR_BT_NO = 1001,
        ID_CTRL_NEWCHAR_EDIT_ID = 1002
    };

    // Fields
protected:
    CLogin* m_pLogin{};

protected:
    ZRef<CCtrlButton> m_pBtYes;

protected:
    ZRef<CCtrlButton> m_pBtNo;

protected:
    ZRef<CCtrlEdit> m_pEditID;
    // Methods
public:
    CUINewCharNameSelect()
    {
    }

    virtual ~CUINewCharNameSelect();

public:
    void _dtor_0();

public:
    CUINewCharNameSelect(const CUINewCharNameSelect& arg0);

public:
    //void _ctor_1(const CUINewCharNameSelect& arg0);

public:
    CUINewCharNameSelect(CLogin* arg0);

public:
    //void _ctor_0(CLogin* arg0);

public:
    virtual void OnCreate(void* pData) = 0;

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

protected:
    int32_t IsRequestValid() const;

public:
    CUINewCharNameSelect& operator=(const CUINewCharNameSelect& arg0);

public:
    static CUINewCharNameSelect& _op_assign_8(CUINewCharNameSelect* pThis, const CUINewCharNameSelect& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharNameSelect, 156);

class CUINewCharRaceSelect : public CWnd, public TSingleton<CUINewCharRaceSelect>
{
    // Nested
public:
    enum UnnamedEnum87547
    {
        RES_OFFSET_X = 45,
        RES_OFFSET_Y = 43,
        DUAL_OFFSET_X = 405,
        DUAL_OFFSET_Y = 43,
        NORMAL_OFFSET_X = 580,
        NORMAL_OFFSET_Y = 43,
        CYGNUS_OFFSET_X = 45,
        CYGNUS_OFFSET_Y = 295,
        ARAN_OFFSET_X = 284,
        ARAN_OFFSET_Y = 295,
        EVAN_OFFSET_X = 524,
        EVAN_OFFSET_Y = 295
    };

    enum UnnamedEnum87544
    {
        ID_CTRL_BT_RACE_DUAL = 0,
        ID_CTRL_BT_RACE_NORMAL = 1,
        ID_CTRL_BT_RACE_CYGNUS = 2,
        ID_CTRL_BT_RACE_ARAN = 3,
        ID_CTRL_BT_RACE_EVAN = 4,
        ID_CTRL_BT_RACE_RES = 5,
        BT_RACE_COUNT = 6
    };

    // Fields
protected:
    CLogin* m_pLogin{};
    uint32_t m_nSelectedBtnIdx{};
    long m_nSelectedRace{};
    short m_nSelectedSubJob{};
    _x_com_ptr<IWzGr2DLayer> m_pLayerBackGround;
    _x_com_ptr<IWzGr2DLayer> m_pLayerNewTab;
    std::array<ZRef<CCtrlButton>, 6> m_apButton{};
    // Methods
public:
    virtual ~CUINewCharRaceSelect();

public:
    void _dtor_0();

public:
    CUINewCharRaceSelect(const CUINewCharRaceSelect& arg0);

public:
    void _ctor_1(const CUINewCharRaceSelect& arg0);

public:
    CUINewCharRaceSelect(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);

protected:
    void SelectRaceButton(uint32_t nId);

protected:
    void OpenConfirmRaceDlg() const;

protected:
    void SetKeyFocus(long nIdx);

    CLASS_RTTI_(CUINewCharRaceSelect, CWnd);

public:
    CUINewCharRaceSelect& operator=(const CUINewCharRaceSelect& arg0);

public:
    static CUINewCharRaceSelect& _op_assign_16(CUINewCharRaceSelect* pThis, const CUINewCharRaceSelect& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharRaceSelect, 200);

class CConfirmRaceDlg : public CDialog
{
    // Nested
    // Fields
protected:
    ZRef<CCtrlButton> m_pBtOk;

protected:
    ZRef<CCtrlButton> m_pBtCancel;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerJob;

protected:
    long m_nRace{};

protected:
    short m_nSubJob{};
    // Methods
public:
    virtual ~CConfirmRaceDlg();

public:
    void _dtor_0();

public:
    CTOR_DEFAULT(CConfirmRaceDlg);
    CConfirmRaceDlg(const CConfirmRaceDlg& arg0);

public:
    void _ctor_1(const CConfirmRaceDlg& arg0);

public:
    CConfirmRaceDlg();

public:
    void _ctor_0();

public:
    virtual void OnCreate(void* pData);

public:
    void SetOption(long nRace, long nSubJob);

public:
    long GetSubJob();

public:
    CConfirmRaceDlg& operator=(const CConfirmRaceDlg& arg0);

public:
    static CConfirmRaceDlg& _op_assign_6(CConfirmRaceDlg* pThis, const CConfirmRaceDlg& arg0);
};

STATIC_ASSERT_SIZE(CConfirmRaceDlg, 172);

class CUINewCharNameSelectAran : public CUINewCharNameSelect, public TSingleton<CUINewCharNameSelectAran>
{
    // Nested
    // Fields

private:
    SINGLETON_PAD;

public:
    virtual ~CUINewCharNameSelectAran();

public:
    void _dtor_0();

public:
    CUINewCharNameSelectAran(const CUINewCharNameSelectAran& arg0);

public:
    void _ctor_1(const CUINewCharNameSelectAran& arg0);

public:
    CUINewCharNameSelectAran(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* pData);

public:
    CUINewCharNameSelectAran& operator=(const CUINewCharNameSelectAran& arg0);

public:
    static CUINewCharNameSelectAran&
    _op_assign_4(CUINewCharNameSelectAran* pThis, const CUINewCharNameSelectAran& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharNameSelectAran, 160);

class CUINewCharJobSelectNormal : public CUINewCharJobSelect
{
    // Nested
    // Fields
    // Methods
public:
    virtual ~CUINewCharJobSelectNormal();

public:
    void _dtor_0();

public:
    CUINewCharJobSelectNormal(const CUINewCharJobSelectNormal& arg0);

public:
    void _ctor_1(const CUINewCharJobSelectNormal& arg0);

public:
    CUINewCharJobSelectNormal(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* pData);

public:
    CUINewCharJobSelectNormal& operator=(const CUINewCharJobSelectNormal& arg0);

public:
    static CUINewCharJobSelectNormal& _op_assign_4(CUINewCharJobSelectNormal* pThis,
                                                   const CUINewCharJobSelectNormal& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharJobSelectNormal, 176);

class CUINewCharNameSelectEvan : public CUINewCharNameSelect, public TSingleton<CUINewCharNameSelectEvan>
{
    // Nested
    // Fields

private:
    SINGLETON_PAD;
    // Methods
public:
    virtual ~CUINewCharNameSelectEvan();

public:
    void _dtor_0();

public:
    CUINewCharNameSelectEvan(const CUINewCharNameSelectEvan& arg0);

public:
    void _ctor_1(const CUINewCharNameSelectEvan& arg0);

public:
    CUINewCharNameSelectEvan(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* pData);

public:
    CUINewCharNameSelectEvan& operator=(const CUINewCharNameSelectEvan& arg0);

public:
    static CUINewCharNameSelectEvan&
    _op_assign_4(CUINewCharNameSelectEvan* pThis, const CUINewCharNameSelectEvan& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharNameSelectEvan, 160);

class CUINewCharAvatarSelectAran : public CUINewCharAvatarSelect
{
    // Nested
    // Fields
    // Methods
public:
    virtual ~CUINewCharAvatarSelectAran();

public:
    void _dtor_0();

public:
    CUINewCharAvatarSelectAran(const CUINewCharAvatarSelectAran& arg0);

public:
    void _ctor_1(const CUINewCharAvatarSelectAran& arg0);

public:
    CUINewCharAvatarSelectAran(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* arg0);

public:
    CUINewCharAvatarSelectAran& operator=(const CUINewCharAvatarSelectAran& arg0);

public:
    static CUINewCharAvatarSelectAran& _op_assign_4(CUINewCharAvatarSelectAran* pThis,
                                                    const CUINewCharAvatarSelectAran& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharAvatarSelectAran, 332);

class CUINewCharAvatarSelectRes : public CUINewCharAvatarSelect
{
    // Nested
    // Fields
    // Methods
public:
    virtual ~CUINewCharAvatarSelectRes();

public:
    void _dtor_0();

public:
    CUINewCharAvatarSelectRes(const CUINewCharAvatarSelectRes& arg0);

public:
    void _ctor_1(const CUINewCharAvatarSelectRes& arg0);

public:
    CUINewCharAvatarSelectRes(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* arg0);

public:
    CUINewCharAvatarSelectRes& operator=(const CUINewCharAvatarSelectRes& arg0);

public:
    static CUINewCharAvatarSelectRes& _op_assign_4(CUINewCharAvatarSelectRes* pThis,
                                                   const CUINewCharAvatarSelectRes& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharAvatarSelectRes, 332);

class CUINewCharAvatarSelectEvan : public CUINewCharAvatarSelect
{
    // Nested
    // Fields
    // Methods
public:
    virtual ~CUINewCharAvatarSelectEvan();

public:
    void _dtor_0();

public:
    CUINewCharAvatarSelectEvan(const CUINewCharAvatarSelectEvan& arg0);

public:
    void _ctor_1(const CUINewCharAvatarSelectEvan& arg0);

public:
    CUINewCharAvatarSelectEvan(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* arg0);

public:
    CUINewCharAvatarSelectEvan& operator=(const CUINewCharAvatarSelectEvan& arg0);

public:
    static CUINewCharAvatarSelectEvan& _op_assign_4(CUINewCharAvatarSelectEvan* pThis,
                                                    const CUINewCharAvatarSelectEvan& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharAvatarSelectEvan, 332);

class CUINewCharNameSelectRes : public CUINewCharNameSelect, public TSingleton<CUINewCharNameSelectRes>
{
    // Nested
    // Fields

    SINGLETON_PAD;
    // Methods
public:
    virtual ~CUINewCharNameSelectRes();

public:
    void _dtor_0();

public:
    CUINewCharNameSelectRes(const CUINewCharNameSelectRes& arg0);

public:
    void _ctor_1(const CUINewCharNameSelectRes& arg0);

public:
    CUINewCharNameSelectRes(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* pData);

public:
    CUINewCharNameSelectRes& operator=(const CUINewCharNameSelectRes& arg0);

public:
    static CUINewCharNameSelectRes& _op_assign_4(CUINewCharNameSelectRes* pThis, const CUINewCharNameSelectRes& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharNameSelectRes, 160);

class CUINewCharAvatarSelectCygnus : public CUINewCharAvatarSelect
{
    // Nested
    // Fields
    // Methods
public:
    virtual ~CUINewCharAvatarSelectCygnus();

public:
    void _dtor_0();

public:
    CUINewCharAvatarSelectCygnus(const CUINewCharAvatarSelectCygnus& arg0);

public:
    void _ctor_1(const CUINewCharAvatarSelectCygnus& arg0);

public:
    CUINewCharAvatarSelectCygnus(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* arg0);

public:
    CUINewCharAvatarSelectCygnus& operator=(const CUINewCharAvatarSelectCygnus& arg0);

public:
    static CUINewCharAvatarSelectCygnus& _op_assign_4(CUINewCharAvatarSelectCygnus* pThis,
                                                      const CUINewCharAvatarSelectCygnus& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharAvatarSelectCygnus, 332);

class CUINewCharNameSelectCygnus : public CUINewCharNameSelect, public TSingleton<CUINewCharNameSelectCygnus>
{
    // Nested
    // Fields

    SINGLETON_PAD;
    // Methods
public:
    virtual ~CUINewCharNameSelectCygnus();

public:
    void _dtor_0();

public:
    CUINewCharNameSelectCygnus(const CUINewCharNameSelectCygnus& arg0);

public:
    void _ctor_1(const CUINewCharNameSelectCygnus& arg0);

public:
    CUINewCharNameSelectCygnus(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* pData);

public:
    CUINewCharNameSelectCygnus& operator=(const CUINewCharNameSelectCygnus& arg0);

public:
    static CUINewCharNameSelectCygnus& _op_assign_4(CUINewCharNameSelectCygnus* pThis,
                                                    const CUINewCharNameSelectCygnus& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharNameSelectCygnus, 160);

class CUINewCharAvatarSelectNormal : public CUINewCharAvatarSelect
{
    // Nested
    // Fields
    // Methods
public:
    virtual ~CUINewCharAvatarSelectNormal();

public:
    void _dtor_0();

public:
    CUINewCharAvatarSelectNormal(const CUINewCharAvatarSelectNormal& arg0);

public:
    void _ctor_1(const CUINewCharAvatarSelectNormal& arg0);

public:
    CUINewCharAvatarSelectNormal(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* arg0);

public:
    CUINewCharAvatarSelectNormal& operator=(const CUINewCharAvatarSelectNormal& arg0);

public:
    static CUINewCharAvatarSelectNormal& _op_assign_4(CUINewCharAvatarSelectNormal* pThis,
                                                      const CUINewCharAvatarSelectNormal& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharAvatarSelectNormal, 332);

class CUINewCharNameSelectNormal : public CUINewCharNameSelect, public TSingleton<CUINewCharNameSelectNormal>
{
    // Nested
    // Fields

    SINGLETON_PAD;
    // Methods
public:
    virtual ~CUINewCharNameSelectNormal();

public:
    void _dtor_0();

public:
    CUINewCharNameSelectNormal(const CUINewCharNameSelectNormal& arg0);

public:
    void _ctor_1(const CUINewCharNameSelectNormal& arg0);

public:
    CUINewCharNameSelectNormal(CLogin* pLogin);

public:
    void _ctor_0(CLogin* pLogin);

public:
    virtual void OnCreate(void* pData) override;

public:
    CUINewCharNameSelectNormal& operator=(const CUINewCharNameSelectNormal& arg0);

public:
    static CUINewCharNameSelectNormal& _op_assign_4(CUINewCharNameSelectNormal* pThis,
                                                    const CUINewCharNameSelectNormal& arg0);
};

STATIC_ASSERT_SIZE(CUINewCharNameSelectNormal, 160);
