// UIRaiseManager.cpp
#include "UIRaiseManager.hpp"

CUIRaiseManager* CUIRaiseWndBase::s_pManager = nullptr;

static ZRef<CUIRaiseWndBase> FAKE_ZRef_CUIRaiseWndBase{};

#include "UIRaiseManager_regen.ipp"

CUIRaiseWndBase::~CUIRaiseWndBase()
{
}

void CUIRaiseWndBase::_dtor_0()
{
    this->~CUIRaiseWndBase();
}

CUIRaiseWndBase::CUIRaiseWndBase(const CUIRaiseWndBase& arg0)
{
    _ctor_1(arg0);
}

void CUIRaiseWndBase::_ctor_1(const CUIRaiseWndBase& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaiseWndBase::CUIRaiseWndBase()
{
}

CUIRaiseWndBase::CUIRaiseWndBase(long nItemID, long nQuestID, long nQRData, ZXString16& sUIData,
                                 ZXString<char>& sName, ZArray<ZXString<char>>& asMessage, ZArray<long>& anItemID)
{
    _nQRData = nQRData;
    _nQuestID = nQuestID;
    _nItemID = nItemID;
    _sUIData = sUIData;
    _sName = sName;
    _asMessage = asMessage;
    _anItemID = anItemID;

    auto& sp = StringPool::GetInstance();
    auto uol = sp.GetBSTR(0x1118);
    _LoadBgTile(_apBgTileCanvas.data()[0].data(), uol);


    uol = sp.GetBSTR(0x1119);
    _LoadBgTile(_apBgTileCanvas.data()[1].data(), uol);

    uol = sp.GetBSTR(0x111A);
    _LoadBgTile(_apBgTileCanvas.data()[2].data(), uol);

    _nLMargin = _apBgTileCanvas[0][0]->Getwidth();
    _nTMargin = _apBgTileCanvas[0][0]->Getheight();
    _nRMargin = _apBgTileCanvas[0][2]->Getwidth();
    _nBMargin = _apBgTileCanvas[2][0]->Getheight();

    COutPacket pkt(Cp::Raiseuistate);
    pkt.Encode4(_nItemID);
    pkt.Encode1(1);
    SendPacket(pkt);
}

void CUIRaiseWndBase::_ctor_0(long nItemID, long nQuestID, long nQRData, ZXString16& sUIData,
                              ZXString<char>& sName, ZArray<ZXString<char>>& asMessage, ZArray<long>& anItemID)
{
    //return __sub_0043B7C0(this, nullptr, nItemID, nQuestID, nQRData, sUIData, sName, asMessage, anItemID);
    new(this) CUIRaiseWndBase(nItemID, nQuestID, nQRData, sUIData, sName, asMessage, anItemID);
}

void CUIRaiseWndBase::OnCreate(void* pData)
{
    __sub_0043ACC0(this, nullptr, pData);
}

void CUIRaiseWndBase::OnButtonClicked(uint32_t nId)
{
    //__sub_004391D0(this, nullptr, nId);
    if (!nId)
        s_pManager->DestroyWindow(this->_nItemID);
}

int32_t CUIRaiseWndBase::OnMouseMove(long rx, long ry)
{
    return __sub_00438010(this, nullptr, rx, ry);
}

void CUIRaiseWndBase::OnMouseEnter(int32_t bEnter)
{
    //__sub_00437DD0(this, nullptr, bEnter);
    if (!bEnter)
        _uiToolTip.ClearToolTip();
}

int32_t CUIRaiseWndBase::OnSetFocus(int32_t bFocus)
{
    //return __sub_00437F90(this, nullptr, bFocus);
    CWndMan::GetInstance()->SetFocus(nullptr);
    return false;
}

int32_t CUIRaiseWndBase::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    //return __sub_00437DF0(this, nullptr, rx, ry, ppCtrl);
    auto res = CWnd::HitTest(rx, ry, ppCtrl);
    if (res && (!ppCtrl || !*ppCtrl))
        return (ry > 0x13) + 1;
    return res;
}

int32_t CUIRaiseWndBase::PutItem(long nItemTI, long nSlotPosition)
{
    return __sub_004380B0(this, nullptr, nItemTI, nSlotPosition);
}

void CUIRaiseWndBase::SetQRData(long nQRData)
{
    auto v3 = this->GetLevel();
    this->_nQRData = nQRData;
    if ( v3 == GetLevel() )
        _Repaint();
    else
        _LevelUp();
}

int32_t CUIRaiseWndBase::EnableDrop(long nItemID)
{
    //return __sub_00437E30(this, nullptr, nItemID);
    return  CheckDrop(nItemID);
}

long CUIRaiseWndBase::GetQuestID()
{
    return _nQuestID;
}

long CUIRaiseWndBase::GetQRData()
{
    return _nQRData;
}

long CUIRaiseWndBase::GetEnableDropItemIndex(long nItemID)
{
    return __sub_00438140(this, nullptr, nItemID);
}

_x_com_ptr<IWzCanvas> CUIRaiseWndBase::GetPreviewImage(long nIndex)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_0043B080(this, nullptr, &ret, nIndex);
}

void __cdecl CUIRaiseWndBase::SetManager(CUIRaiseManager* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIRaiseWndBase::_LoadBgTile(_x_com_ptr<IWzCanvas>* apCanvas, Ztl_bstr_t& sUOL)
{
    __sub_004391F0(this, nullptr, apCanvas, sUOL);
}

void CUIRaiseWndBase::_Repaint()
{
    __sub_00439920(this, nullptr);
}

void CUIRaiseWndBase::_LevelUp()
{
    __sub_0043A640(this, nullptr);
}

void CUIRaiseWndBase::_LoadLayer(unsigned long cColor)
{
    __sub_00438360(this, nullptr, cColor);
}

int32_t CUIRaiseWndBase::SendPutItem(long arg0, long arg1, long arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIRaiseWndBase::CheckDrop(long nItemID)
{
    return __sub_00437E30(this, nullptr, nItemID);
}

long CUIRaiseWndBase::GetLevel()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_x_com_ptr<IWzCanvas> CUIRaiseWndBase::MakePreviewImage()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaiseWndBase& CUIRaiseWndBase::operator=(const CUIRaiseWndBase& arg0)
{
    return _op_assign_28(this, arg0);
}

CUIRaiseWndBase& CUIRaiseWndBase::_op_assign_28(CUIRaiseWndBase* pThis, const CUIRaiseWndBase& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaiseManager::~CUIRaiseManager()
{
}

void CUIRaiseManager::_dtor_0()
{
    this->~CUIRaiseManager();
}

CUIRaiseManager::CUIRaiseManager(const CUIRaiseManager& arg0)
{
    _ctor_1(arg0);
}

void CUIRaiseManager::_ctor_1(const CUIRaiseManager& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaiseManager::CUIRaiseManager()
{
    CUIRaiseWndBase::s_pManager = this;
}

void CUIRaiseManager::_ctor_0()
{
    new(this) CUIRaiseManager();
}

void CUIRaiseManager::OpenWindow(long nItemID)
{
    __sub_0043C510(this, nullptr, nItemID);
}

void CUIRaiseManager::DestroyWindow(long nItemID)
{
    __sub_00438FB0(this, nullptr, nItemID);
}

void CUIRaiseManager::DestroyWindowWithQuestID(long nQuestID)
{
    __sub_00439080(this, nullptr, nQuestID);
}

void CUIRaiseManager::RestoreWindows()
{
    __sub_0043C5B0(this, nullptr);
}

void CUIRaiseManager::DestroyWindows()
{
    __sub_004390A0(this, nullptr);
}

void CUIRaiseManager::ClearWindows()
{
    //__sub_00438880(this, nullptr);
    m_mWnds.RemoveAll();
}

void CUIRaiseManager::SetQRDataWithQuestID(long nQuestID, long nQRData)
{
    __sub_0043B720(this, nullptr, nQuestID, nQRData);
}

void CUIRaiseManager::_CreateWindow(long arg0)
{
    __sub_0043BC60(this, nullptr, arg0);
}

long CUIRaiseManager::_Quest2Item(long nQuestID)
{
    return __sub_00438E50(this, nullptr, nQuestID);
}

CUIRaiseManager& CUIRaiseManager::operator=(const CUIRaiseManager& arg0)
{
    return _op_assign_12(this, arg0);
}

CUIRaiseManager& CUIRaiseManager::_op_assign_12(CUIRaiseManager* pThis, const CUIRaiseManager& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaiseWnd::~CUIRaiseWnd()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIRaiseWnd::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaiseWnd::CUIRaiseWnd(const CUIRaiseWnd& arg0)
{
    _ctor_1(arg0);
}

void CUIRaiseWnd::_ctor_1(const CUIRaiseWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaiseWnd::CUIRaiseWnd(long nItemID, long nQuestID, long nIncExpUnit, long nGrade, ZXString16& sUIData,
                         ZXString<char>& sName, ZArray<ZXString<char>>& asMessage, ZArray<long>& anItemID)
{
    _ctor_0(nItemID, nQuestID, nIncExpUnit, nGrade, sUIData, sName, asMessage, anItemID);
}

void CUIRaiseWnd::_ctor_0(long nItemID, long nQuestID, long nIncExpUnit, long nGrade, ZXString16& sUIData,
                          ZXString<char>& sName, ZArray<ZXString<char>>& asMessage, ZArray<long>& anItemID)
{
    return __sub_0043BAD0(this, nullptr, nItemID, nQuestID, nIncExpUnit, nGrade, sUIData, sName, asMessage, anItemID);
}

int32_t CUIRaiseWnd::SendPutItem(long nItemTI, long nSlotPosition, long _nItemID)
{
    return __sub_00438CF0(this, nullptr, nItemTI, nSlotPosition, _nItemID);
}

long CUIRaiseWnd::GetLevel()
{
    return __sub_00437E40(this, nullptr);
}

int32_t CUIRaiseWnd::CheckDrop(long nItemID)
{
    return __sub_0043A970(this, nullptr, nItemID);
}

_x_com_ptr<IWzCanvas> CUIRaiseWnd::MakePreviewImage()
{
    return __sub_0043B2F0(this, nullptr);
}

CUIRaiseWnd& CUIRaiseWnd::operator=(const CUIRaiseWnd& arg0)
{
    return _op_assign_10(this, arg0);
}

CUIRaiseWnd& CUIRaiseWnd::_op_assign_10(CUIRaiseWnd* pThis, const CUIRaiseWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaisePieceWnd::~CUIRaisePieceWnd()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIRaisePieceWnd::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaisePieceWnd::CUIRaisePieceWnd(const CUIRaisePieceWnd& arg0)
{
    _ctor_1(arg0);
}

void CUIRaisePieceWnd::_ctor_1(const CUIRaisePieceWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIRaisePieceWnd::CUIRaisePieceWnd(long nItemID, long nQuestID, long nGrade, ZXString16& sUIData,
                                   ZXString<char>& sName, ZArray<ZXString<char>>& asMessage, ZArray<long>& anItemID): CUIRaiseWndBase(nItemID, nQuestID, -1, sUIData, sName, asMessage, anItemID)
{
    //_ctor_0(nItemID, nQuestID, nGrade, sUIData, sName, asMessage, anItemID);
}

void CUIRaisePieceWnd::_ctor_0(long nItemID, long nQuestID, long nGrade, ZXString16& sUIData,
                               ZXString<char>& sName, ZArray<ZXString<char>>& asMessage, ZArray<long>& anItemID)
{
    new(this) CUIRaisePieceWnd(nItemID, nQuestID, nGrade, sUIData, sName, asMessage, anItemID);
}

int32_t CUIRaisePieceWnd::SendPutItem(long nItemTI, long nSlotPosition, long _nItemID)
{
    return __sub_00438D90(this, nullptr, nItemTI, nSlotPosition, _nItemID);
}

int32_t CUIRaisePieceWnd::CheckDrop(long nItemID)
{
    return __sub_00438F50(this, nullptr, nItemID);
}

long CUIRaisePieceWnd::GetLevel()
{
    // eax
    // esi

    int nQRData = this->GetQRData();
    int v2 = 0;
    if ( nQRData < 0 )
        return -1;
    for ( ; nQRData; nQRData /= 2 )
    {
        if ( nQRData % 2 )
            ++v2;
    }
    return v2;
}

_x_com_ptr<IWzCanvas> CUIRaisePieceWnd::MakePreviewImage()
{
    return __sub_0043B340(this, nullptr);
}

CUIRaisePieceWnd& CUIRaisePieceWnd::operator=(const CUIRaisePieceWnd& arg0)
{
    return _op_assign_10(this, arg0);
}

CUIRaisePieceWnd& CUIRaisePieceWnd::_op_assign_10(CUIRaisePieceWnd* pThis, const CUIRaisePieceWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
