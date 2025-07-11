// WvsContext2.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "Packet/Packet.hpp"

class CCtrlCheckBox;
class CCtrlComboBox;
class CCtrlEdit;

// Level: 0 0xd5d8
struct ITEMDATA;
// Level: 0 0xf14d
struct SnLessFunc;
// Level: 0 0xf152
struct PriceMoreFunc;
// Level: 1 0xd29f
class CMiniGameCreateDlg;
// Level: 1 0xdc85
struct MedalAchievementInfo;
// Level: 1 0xd2b8
class CMemoryGameCreateDlg;

struct ITEMDATA
{
    // Nested
    // Fields
public:
    long nNumber{};

public:
    long nSet{};

public:
    long nPrice{};

public:
    unsigned char nTI{};

public:
    unsigned long dwMiniRoomSN{};

public:
    unsigned long dwFieldID{};

public:
    ZXString<char> sCharacterName;

public:
    ZXString<char> sTitle;

public:
    char nChannelID;

public:
    ZRef<GW_ItemSlotBase> pItem;

public:
    int32_t bNpcShop{};
    // Methods
public:
    ~ITEMDATA();

public:
    void _dtor_0();

public:
    ITEMDATA(const ITEMDATA& arg0);

public:
    void _ctor_1(const ITEMDATA& arg0);

public:
    ITEMDATA();

public:
    void _ctor_0();

public:
    ITEMDATA& operator=(const ITEMDATA& arg0);

public:
    static ITEMDATA& _op_assign_3(ITEMDATA* pThis, const ITEMDATA& arg0);
};

STATIC_ASSERT_SIZE(ITEMDATA, 48);

struct SnLessFunc
{
    // Nested
    // Fields
    // Methods
public:
    int32_t operator()(const ZRef<CS_COMMODITY> a, const ZRef<CS_COMMODITY> b);

public:
    static int32_t _op_call_0(SnLessFunc* pThis, const ZRef<CS_COMMODITY> a, const ZRef<CS_COMMODITY> b);
};

STATIC_ASSERT_SIZE(SnLessFunc, 1);

struct PriceMoreFunc
{
    // Nested
    // Fields
    // Methods
public:
    int32_t operator()(const ZRef<CS_COMMODITY> a, const ZRef<CS_COMMODITY> b);

public:
    static int32_t _op_call_0(PriceMoreFunc* pThis, const ZRef<CS_COMMODITY> a, const ZRef<CS_COMMODITY> b);
};

STATIC_ASSERT_SIZE(PriceMoreFunc, 1);

class CMiniGameCreateDlg : public CDialog
{
    // Nested
public:
    enum ID_CTRL_
    {
        ID_CTRL_CHECKBOX_PASSWORD = 1000,
        ID_CTRL_EDIT_TITLE = 1001,
        ID_CTRL_EDIT_PASSWORD = 1002
    };

    // Fields
protected:
    std::array<_x_com_ptr<IWzCanvas>, 2> m_pLockOption{};

protected:
    std::array<_x_com_ptr<IWzCanvas>, 2> m_pPasswordBox{};

protected:
    std::array<_x_com_ptr<IWzFont>, 2> m_pPasswordFont{};

protected:
    ZRef<CCtrlCheckBox> m_pCheckBoxPassword;

protected:
    ZRef<CCtrlEdit> m_pEditTitle;

protected:
    ZRef<CCtrlEdit> m_pEditPassword;

protected:
    ZRef<CCtrlButton> m_pBtOK;

protected:
    ZRef<CCtrlButton> m_pBtCancel;

protected:
    ZRef<CCtrlButton> m_pBtClose;
    // Methods
public:
    virtual ~CMiniGameCreateDlg();

public:
    void _dtor_0();

public:
    CMiniGameCreateDlg(const CMiniGameCreateDlg& arg0);

public:
    void _ctor_1(const CMiniGameCreateDlg& arg0);

public:
    CMiniGameCreateDlg();

public:
    void _ctor_0();

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);

public:
    virtual void SetRet(long nRet);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void Update();

public:
    int32_t IsTitleValid();

public:
    int32_t IsPasswordValid();

public:
    void GetResult(ZXString<char>& sTitle, ZXString<char>& sPassword, int32_t& bPassword);

public:
    CMiniGameCreateDlg& operator=(const CMiniGameCreateDlg& arg0);

public:
    static CMiniGameCreateDlg& _op_assign_11(CMiniGameCreateDlg* pThis, const CMiniGameCreateDlg& arg0);
};

STATIC_ASSERT_SIZE(CMiniGameCreateDlg, 216);

struct MedalAchievementInfo : public ZRefCounted
{
    // Nested
    // Fields
public:
    long nEquipedMedalID{};

public:
    ZArray<unsigned short> ausMedalQuestID;
    // Methods
public:
    virtual ~MedalAchievementInfo();

public:
    void _dtor_0();

public:
    MedalAchievementInfo(const MedalAchievementInfo& arg0);

public:
    void _ctor_1(const MedalAchievementInfo& arg0);

public:
    MedalAchievementInfo();

public:
    void _ctor_0();

public:
    void Decode(CInPacket& iPacket);

public:
    MedalAchievementInfo& operator=(const MedalAchievementInfo& arg0);

public:
    static MedalAchievementInfo& _op_assign_4(MedalAchievementInfo* pThis, const MedalAchievementInfo& arg0);
};

STATIC_ASSERT_SIZE(MedalAchievementInfo, 20);

class CMemoryGameCreateDlg : public CDialog
{
    // Nested
public:
    enum ID_SIZE_
    {
        ID_SIZE_4_BY_3 = 0,
        ID_SIZE_5_BY_4 = 1,
        ID_SIZE_6_BY_5 = 2
    };

    enum ID_CTRL_
    {
        ID_CTRL_CHECKBOX_PASSWORD = 1000,
        ID_CTRL_EDIT_TITLE = 1001,
        ID_CTRL_EDIT_PASSWORD = 1002,
        ID_CTRL_COMBOBOX_GAMESIZE = 1003
    };

    // Fields
protected:
    std::array<_x_com_ptr<IWzCanvas>, 2> m_pLockOption{};

protected:
    std::array<_x_com_ptr<IWzCanvas>, 2> m_pPasswordBox{};

protected:
    std::array<_x_com_ptr<IWzFont>, 2> m_pPasswordFont{};

protected:
    ZRef<CCtrlCheckBox> m_pCheckBoxPassword;

protected:
    ZRef<CCtrlEdit> m_pEditTitle;

protected:
    ZRef<CCtrlEdit> m_pEditPassword;

protected:
    ZRef<CCtrlComboBox> m_pComboBox;

protected:
    ZRef<CCtrlButton> m_pBtOK;

protected:
    ZRef<CCtrlButton> m_pBtCancel;

protected:
    ZRef<CCtrlButton> m_pBtClose;
    // Methods
public:
    virtual ~CMemoryGameCreateDlg();

public:
    void _dtor_0();

public:
    CMemoryGameCreateDlg(const CMemoryGameCreateDlg& arg0);

public:
    void _ctor_1(const CMemoryGameCreateDlg& arg0);

public:
    CMemoryGameCreateDlg();

public:
    void _ctor_0();

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);

public:
    virtual void SetRet(long nRet);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void Update();

public:
    int32_t IsTitleValid();

public:
    int32_t IsPasswordValid();

public:
    void GetResult(ZXString<char>& sTitle, long& nGameSize, ZXString<char>& sPassword, int32_t& bPassword);

public:
    CMemoryGameCreateDlg& operator=(const CMemoryGameCreateDlg& arg0);

public:
    static CMemoryGameCreateDlg& _op_assign_11(CMemoryGameCreateDlg* pThis, const CMemoryGameCreateDlg& arg0);
};

STATIC_ASSERT_SIZE(CMemoryGameCreateDlg, 224);

void __cdecl ZSort_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>>& a, __POSITION* posFrom,
                                                     __POSITION* posTo, PriceMoreFunc comp);
void __cdecl DownHeap_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>>& a, int32_t nIdx, int32_t nLen,
                                                     int32_t nFrom, SnLessFunc& comp);
void __cdecl DownHeap_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>>& a, int32_t nIdx, int32_t nLen,
                                                        int32_t nFrom, PriceMoreFunc& comp);
long __cdecl get_minigame_type(long nItemID);
void __cdecl ZSort_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>>& a, SnLessFunc comp);
_x_com_ptr<IWzCanvas> __cdecl _anon__CreateCanvasFromJpegPacket(CInPacket& iPacket);
const ZRef<CS_COMMODITY>&__cdecl Median_ZRef_CS_COMMODITY__PriceMoreFunc_(
    const ZRef<CS_COMMODITY>& a, const ZRef<CS_COMMODITY>& b, const ZRef<CS_COMMODITY>& c, PriceMoreFunc& comp);
void __cdecl InsertionSort_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>>& a, int32_t nFrom, int32_t nTo,
                                                          SnLessFunc& comp);
int32_t __cdecl Partition_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>>& a, int32_t nFrom, int32_t nTo,
                                                            const ZRef<CS_COMMODITY>& pivot, PriceMoreFunc& comp);
void __cdecl InsertionSort_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>>& a, int32_t nFrom, int32_t nTo,
                                                             PriceMoreFunc& comp);
void __cdecl ZSort_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>>& a, PriceMoreFunc comp);
const ZRef<CS_COMMODITY>&__cdecl Median_ZRef_CS_COMMODITY__SnLessFunc_(const ZRef<CS_COMMODITY>& a,
                                                                       const ZRef<CS_COMMODITY>& b,
                                                                       const ZRef<CS_COMMODITY>& c, SnLessFunc& comp);
int32_t __cdecl Partition_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>>& a, int32_t nFrom, int32_t nTo,
                                                         const ZRef<CS_COMMODITY>& pivot, SnLessFunc& comp);
void __cdecl ZSort_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>>& a, __POSITION* posFrom, __POSITION* posTo,
                                                  SnLessFunc comp);
