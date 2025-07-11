// UIEquip.cpp
#include "UIEquip.hpp"


#include "UtilDlg/UtilDlg.hpp"

static ZRef<CUISysOpt> _FAKE_ZRef_CUISysOpt{};

#include "UIEquip_regen.ipp"
#include "ITC_DBBasic/ITC_DBBasic.hpp"

void initSlotInfo()
{
    int v0; // ebx
    int v1; // ebp
    int v2; // esi
    int v3; // edi
    int v5; // [esp+10h] [ebp-1Ch]
    int v6; // [esp+14h] [ebp-18h]
    int v7; // [esp+18h] [ebp-14h]
    int v8; // [esp+1Ch] [ebp-10h]
    EqSlotInfo v9; // [esp+20h] [ebp-Ch]
    int v10; // [esp+28h] [ebp-4h]

    v0 = EqSlotInfo::GetX(1, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[0].nX = v0;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[0].nY = EqSlotInfo::GetY(0, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[1].nX = v0;
    v6 = EqSlotInfo::GetY(1, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[1].nY = v6;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[2].nX = v0;
    v10 = EqSlotInfo::GetY(2, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[2].nY = v10;
    v8 = EqSlotInfo::GetX(3, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[3].nX = v8;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[3].nY = v10;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[4].nX = v0;
    v1 = EqSlotInfo::GetY(3, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[4].nY = v1;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[5].nX = v0;
    v9.nY = EqSlotInfo::GetY(4, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[5].nY = v9.nY;
    v5 = EqSlotInfo::GetX(2, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[6].nX = v5;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[6].nY = EqSlotInfo::GetY(5, 0);
    v9.nX = EqSlotInfo::GetX(0, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[7] = v9;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[8].nX = v9.nX;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[8].nY = v1;
    v7 = EqSlotInfo::GetX(4, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[9].nX = v7;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[9].nY = v1;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[10].nX = v8;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[10].nY = v1;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[11].nX = v8;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[11].nY = v9.nY;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[12].nX = v7;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[12].nY = v9.nY;
    v2 = EqSlotInfo::GetX(-1, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[13].nX = v2;
    v3 = EqSlotInfo::GetY(-1, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[14].nX = v8;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[16].nY = v1;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[13].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[14].nY = v6;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[15].nX = v7;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[15].nY = v6;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[16].nX = v5;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[17].nX = v9.nX;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[17].nY = EqSlotInfo::GetY(6, 0);
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[18].nX = v0;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[18].nY = CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[17].nY;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[19].nX = v5;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[19].nY = CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[17].nY;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[20].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[20].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[21].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[21].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[22].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[22].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[23].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[23].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[24].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[24].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[25].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[25].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[26].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[26].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[27].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[27].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[28].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[28].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[29].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[29].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[30].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[30].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[31].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[31].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[32].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[32].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[33].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[33].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[34].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[34].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[35].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[35].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[36].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[36].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[37].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[37].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[38].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[38].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[39].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[39].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[40].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[40].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[41].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[41].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[42].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[42].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[43].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[43].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[44].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[44].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[45].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[45].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[46].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[46].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[47].nX = v2;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[48].nY = v6;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[49].nX = v5;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[47].nY = v3;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[49].nY = v9.nY;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[48].nX = v9.nX;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[50].nX = v7;
    CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[50].nY = v10;
    memset(&CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[51], 0, 0x40u);

    int result; // eax

    v0 = EqSlotInfo::GetX(4, 0);
    CUIEquip::CExpandableWndInfo::m_sPetConsumeSlotInfo[0].nX = v0;
    CUIEquip::CExpandableWndInfo::m_sPetConsumeSlotInfo[0].nY = EqSlotInfo::GetY(6, 0);
    CUIEquip::CExpandableWndInfo::m_sPetConsumeSlotInfo[1].nX = v0;
    result = EqSlotInfo::GetY(5, 0);
    CUIEquip::CExpandableWndInfo::m_sPetConsumeSlotInfo[1].nY = result;

    v0 = EqSlotInfo::GetX(1, 3);
    CUIMechanicEquip::ms_aRegion[0].nX = v0;
    v1 = EqSlotInfo::GetY(2, 3);
    CUIMechanicEquip::ms_aRegion[0].nY = v1;
    CUIMechanicEquip::ms_aRegion[1].nX = EqSlotInfo::GetX(0, 3);
    CUIMechanicEquip::ms_aRegion[1].nY = EqSlotInfo::GetY(3, 3);
    CUIMechanicEquip::ms_aRegion[2].nX = v0;
    CUIMechanicEquip::ms_aRegion[2].nY = CUIMechanicEquip::ms_aRegion[1].nY;
    CUIMechanicEquip::ms_aRegion[3].nX = EqSlotInfo::GetX(2, 3);
    CUIMechanicEquip::ms_aRegion[3].nY = v1;
    CUIMechanicEquip::ms_aRegion[4].nX = v0;
    result = EqSlotInfo::GetY(1, 3);
    CUIMechanicEquip::ms_aRegion[4].nY = result;

    CUIDragonEquip::ms_aRegion[0].nX = EqSlotInfo::GetX(0, 2);
    v0 = EqSlotInfo::GetY(1, 2);
    CUIDragonEquip::ms_aRegion[0].nY = v0;
    CUIDragonEquip::ms_aRegion[1].nX = EqSlotInfo::GetX(1, 2);
    v1 = EqSlotInfo::GetY(2, 2);
    CUIDragonEquip::ms_aRegion[1].nY = v1;
    CUIDragonEquip::ms_aRegion[2].nX = EqSlotInfo::GetX(2, 2);
    CUIDragonEquip::ms_aRegion[2].nY = v0;
    result = EqSlotInfo::GetX(3, 2);
    CUIDragonEquip::ms_aRegion[3].nY = v1;
    CUIDragonEquip::ms_aRegion[3].nX = result;
}

EqSlotInfo CUIDragonEquip::ms_aRegion[4]{};

EqSlotInfo CUIMechanicEquip::ms_aRegion[5]{};

EqSlotInfo CUIEquip::CExpandableWndInfo::m_sEqSlotInfo[59]{};
EqSlotInfo CUIEquip::CExpandableWndInfo::m_sPetConsumeSlotInfo[2]{};

long __cdecl EqSlotInfo::GetX(long nXpt, long nType)
{
    int v2; // ecx

    v2 = 0;
    switch (nType)
    {
    case 0:
    case 2:
        v2 = 10;
        break;
    case 1:
        v2 = 11;
        break;
    case 3:
        v2 = 12;
        break;
    default:
        break;
    }
    if (nXpt < 0)
        return 1024;
    else
        return nXpt + v2 + 32 * nXpt;
}

long __cdecl EqSlotInfo::GetY(long nYpt, long nType)
{
    int v2; // ecx

    v2 = 0;
    switch (nType)
    {
    case 0:
        v2 = 27;
        break;
    case 1:
        v2 = 37;
        break;
    case 2:
    case 3:
        v2 = 22;
        break;
    default:
        break;
    }
    if (nYpt < 0)
        return 768;
    else
        return nYpt + v2 + 32 * nYpt;
}

int32_t EqSlotInfo::IsPtIn(int32_t arg0, int32_t arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIPetEquip::~CUIPetEquip()
{
    ms_pInstance = nullptr;
}

void CUIPetEquip::_dtor_0()
{
    this->~CUIPetEquip();
}

CUIPetEquip::CUIPetEquip(const CUIPetEquip& arg0)
{
    _ctor_1(arg0);
}

void CUIPetEquip::_ctor_1(const CUIPetEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIPetEquip::CUIPetEquip(long lLeft, long lTop)
{
    ms_pInstance = this;
    CWnd::CreateWnd(lLeft, lTop, 167, 201, 10, 1, 0, 1, Origin_LT);
}

void CUIPetEquip::_ctor_0(long lLeft, long lTop)
{
    new(this) CUIPetEquip(lLeft, lTop);
}

void CUIPetEquip::OnCreate(void* pData)
{
    __sub_003A9FF0(this, nullptr, pData);
}

int32_t CUIPetEquip::OnSetFocus(int32_t bFocus)
{
    return 0;
}

void CUIPetEquip::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //TODO(game)__sub_003A65A0(this, nullptr, msg, wParam, rx, ry);
    UNIMPLEMENTED;
}

int32_t CUIPetEquip::OnMouseMove(long rx, long ry)
{
    //TODO(game)return __sub_003A4F50(this, nullptr, rx, ry);
    UNIMPLEMENTED;
}

void CUIPetEquip::Draw(const tagRECT* pRect)
{
    __sub_003A5FB0(this, nullptr, pRect);
}

void CUIPetEquip::OnButtonClicked(uint32_t nId)
{
    if (nId == ID_CTRL_BT_HIDE)
    {
        CUIEquip::GetInstance()->TogglePetEquip();
    }
    else if (nId >= ID_CTRL_BT_PET_1 && nId <= ID_CTRL_BT_PET_3)
    {
        this->m_nPetIndex = nId - ID_CTRL_BT_PET_1;
        CWnd::InvalidateRect(nullptr);
    }
}

long CUIPetEquip::GetPetEquipFromPoint(int32_t rx, int32_t ry)
{
    return __sub_003A39B0(this, nullptr, rx, ry);
}

void CUIPetEquip::SetPetConsumeItem(long nItemID, long x, long y)
{
    __sub_003A9330(this, nullptr, nItemID, x, y);
}

void CUIPetEquip::SetPetConsumeMPItem(long nItemID, long x, long y)
{
    __sub_003A96C0(this, nullptr, nItemID, x, y);
}

CUIPetEquip& CUIPetEquip::operator=(const CUIPetEquip& arg0)
{
    return _op_assign_15(this, arg0);
}

CUIPetEquip& CUIPetEquip::_op_assign_15(CUIPetEquip* pThis, const CUIPetEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIEquip::~CUIEquip()
{
    ms_pInstance = nullptr;
}

void CUIEquip::_dtor_0()
{
    //return __sub_003A5320(this, nullptr);
    this->~CUIEquip();
}

CUIEquip::CUIEquip(const CUIEquip& arg0)
{
    _ctor_1(arg0);
}

void CUIEquip::_ctor_1(const CUIEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIEquip::CUIEquip(): CUIWnd(1, 5, 162, 6, 1, 0, 0)
{
    ms_pInstance = this;
    m_nBtCloseX = 162;

    CreateUIWndPosSaved(184, 304, 10);

    static bool bInitSlots = false;
    if (!bInitSlots)
    {
        initSlotInfo();
        bInitSlots = true;
    }
}

void CUIEquip::_ctor_0()
{
    new(this) CUIEquip();
    //return __sub_003A8CF0(this, nullptr);
}

void CUIEquip::OnCreate(void* pData)
{
    __sub_003A8DF0(this, nullptr, pData);
}

void CUIEquip::OnDestroy()
{
    m_pUIMechanicEquip = 0;
    m_pUIDragonEquip = 0;
    m_pUIPetEquip = 0;
    CWvsContext::GetInstance()->RemoveFromStackForTab(this);
    CUIWnd::OnDestroy();
}

void CUIEquip::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_003A72B0(this, nullptr, msg, wParam, rx, ry);
    if (msg != 513)
        return;
    auto bp = GetBodyPartFromPoint(rx, ry);
    if (!bp)
    {
        m_uiToolTip.ClearToolTip();
        return;
    }

    auto ctx = CWvsContext::GetInstance();
    auto itemInfo = CItemInfo::GetInstance();
    if (ctx->CanSendExclRequest(500, false))
    {
        auto cd = ctx->GetCharacterData();
        auto slot = -100 - bp;
        auto item = cd->GetItem(1, slot);
        if (!item)
        {
            slot = -bp;
            item = cd->GetItem(1, slot);
        }

        if (item)
        {
            long id = item->nItemID;
            if (!is_evan_dragon_riding_item(id))
            {
                auto layer = get_gr()->CreateLayer(0, 0, 0, 0, 0, Ztl_variant_t(0), vtMissing);
                auto icon = itemInfo->GetItemIcon(id, false, false);
                layer->InsertCanvas(icon.op_arrow(),
                                    vtMissing,
                                    vtMissing,
                                    vtMissing,
                                    vtMissing,
                                    vtMissing
                );
                layer->Putcolor(0x80FFFFFF);
                layer->PutOrigin(GetLayer().op_arrow());

                auto cx = icon->Getcx();
                auto cy = icon->Getcy();
                layer->RelMove(rx - cx - 16, ry - cy + 16, vtMissing, vtMissing);

                auto drag = new CDraggableItem(layer, 1, slot, 0, this);
                CWndMan::GetInstance()->BeginDragDrop(this, drag, false);

                play_ui_sound_str(0x75e);
            }
        }
    }

    m_uiToolTip.ClearToolTip();
}

int32_t CUIEquip::OnMouseMove(long rx, long ry)
{
    return __sub_003A7780(this, nullptr, rx, ry);
    /*auto cd = CWvsContext::GetInstance()->GetCharacterData();
    auto bp = GetBodyPartFromPoint(rx, ry);


    auto inp = CInputSystem::GetInstance();
    auto& sp = StringPool::GetInstance();
    auto job = cd->characterStat._ZtlSecureGet_nJob();

    auto l = GetAbsLeft();
    auto t = GetAbsTop();

    if (bp == 10 && is_dual_job_born(job, cd->characterStat.nSubJob) && !is_dual_job(job))
    {
        auto toolTip = sp.GetString(0x1731);
        m_uiToolTip.SetToolTip_String_MultiLine(l + rx + 13, t + ry + 20, toolTip, CUIToolTip::ITCToolTip_None,
                                                true);
        inp->SetCursorState(0);
        return 0;
    }

    auto slot = -bp;
    auto item = cd->GetItem(1, slot);
    auto slot2 = -100 - bp;
    auto item2 = cd->GetItem(1, slot2);
    auto tooltipTy = CUIToolTip::ITCToolTip_None;
    bool isSetItem = true;

    auto uiBP = bp;

    //TODO set
    //ZRef<ITCITEM> itcItem{};

    if (!item)
    {
        if (!item2)
        {
            m_uiToolTip.ClearToolTip();
            inp->SetCursorState(0);
            return 0;
        }
        //TODO set itc item
        uiBP = 0;
        tooltipTy = CUIToolTip::ITCToolTip_Normal;
        isSetItem = false;
    }
    else
    {
        long id = item->nItemID;
        // Only if item1
        if (is_evan_dragon_riding_item(id))
        {
            m_uiToolTip.ClearToolTip();
            return 0;
        }

        if (item2)
        {
            inp->SetCursorState(5);
            m_uiToolTip.SetToolTip_Equip2(rx + l, ry + t + 20, dynamic_cast<GW_ItemSlotEquip*>(item.op_arrow()),
                                          dynamic_cast<GW_ItemSlotEquip*>(item2.op_arrow()), true, 0, true);
            return 0;
        }
    }
    inp->SetCursorState(5);

    m_uiToolTip.SetToolTip_Equip(
        l + rx,
        t + ry + 20,
        dynamic_cast<GW_ItemSlotEquip*>(item.op_arrow()),
        0,
        nullptr,
        0,
        0,
        nullptr,
        uiBP,
        0,
        0,
        0,
        0,
        nullptr,
        nullptr,
        {}, //TODO(game) itcitem
        tooltipTy,
        isSetItem
    );

    return 0;*/
}

void CUIEquip::OnButtonClicked(uint32_t nId)
{
    auto ctx = CWvsContext::GetInstance();
    switch (nId)
    {
    case 0xBB8u:
        ctx->SetCashShopInitialItem(50200052);
        ctx->SendMigrateToShopRequest(false);
        break;
    case 0xBB9u:
        ToggleDragonEquip();
        break;
    case 0xBBAu:
        TogglePetEquip();
        break;
    case 0xBBBu:
        ToggleMechanicEquip();
    default:
        CUIWnd::OnButtonClicked(nId);
        break;
    }
}

void CUIEquip::Update()
{
    __sub_003A5570(this, nullptr);
}

void CUIEquip::OnMoveWnd(long l, long t)
{
    //__sub_003A4300(this, nullptr, l, t);
    CWnd::OnMoveWnd(l, t);
    auto absL = GetAbsLeft();
    auto absT = GetAbsTop();
    if ( m_pUIMechanicEquip )
    {
        m_pUIMechanicEquip->MoveWnd(absL - 151, absT);
    }
    if ( m_pUIDragonEquip )
    {
        m_pUIDragonEquip->MoveWnd(absL - 151, absT);
    }
    if ( m_pUIPetEquip )
    {
        m_pUIPetEquip->MoveWnd(absL + 183, absT + 103);
    }
}

void CUIEquip::Draw(const tagRECT* pRect)
{
    __sub_003AA560(this, nullptr, pRect);
}

long CUIEquip::GetBodyPartFromPoint(int32_t rx, int32_t ry)
{
    //return __sub_003A3CE0(this, nullptr, rx, ry);
    auto exp = this->m_ewi.IsExpanded();
    auto v4 = 0;
    const auto v5 = (exp != 0) + 58;
    if (v5 <= 0)
        return 0;

    const auto isExp = exp;
    const EqSlotInfo* v7 = nullptr;
    for (auto i = CExpandableWndInfo::m_sEqSlotInfo; ; ++i)
    {
        if (exp || (v7 = &CExpandableWndInfo::m_sEqSlotInfo[0x39], v4 < 58))
            v7 = i;
        if (v7->nX < rx && rx < v7->nX + 32)
        {
            if (auto nY = v7->nY; nY < ry && ry < nY + 32)
                break;
        }
        if (++v4 >= v5)
            return 0;
        exp = isExp;
    }
    return v4 + 1;
}

void CUIEquip::ToggleMechanicEquip()
{
    __sub_003A7AF0(this, nullptr);
}

void CUIEquip::ToggleDragonEquip()
{
    __sub_003A7C40(this, nullptr);
}

void CUIEquip::TogglePetEquip()
{
    __sub_003A43B0(this, nullptr);
}

void CUIEquip::OnTogglePetEquip()
{
    __sub_003A43B0(this, nullptr);
}

void CUIEquip::ShowItemReleaseEffect(long nPos)
{
    __sub_003A9A50(this, nullptr, nPos);
}

int32_t CUIEquip::IsMyAddon(CWnd* pWnd)
{
    return this->m_pUIMechanicEquip.op_arrow() == pWnd || this->m_pUIDragonEquip.op_arrow() == pWnd || this->
        m_pUIPetEquip.op_arrow() == pWnd;
}

CUIEquip& CUIEquip::operator=(const CUIEquip& arg0)
{
    return _op_assign_21(this, arg0);
}

CUIEquip& CUIEquip::_op_assign_21(CUIEquip* pThis, const CUIEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIEquip::CExpandableWndInfo::CExpandableWndInfo()
{
    m_bExpanded = CWvsContext::GetInstance()->GetBuyEquipExt();
}

CUIEquip::CExpandableWndInfo::CExpandableWndInfo(int32_t arg0)
{
    m_bExpanded = arg0;
}

void CUIEquip::CExpandableWndInfo::_ctor_0(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIEquip::CExpandableWndInfo::IsExpanded()
{
    return m_bExpanded;
}

long CUIEquip::CExpandableWndInfo::GetBPCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

EqSlotInfo& CUIEquip::CExpandableWndInfo::GetEqSlotInfo(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

EqSlotInfo& CUIEquip::CExpandableWndInfo::GetPetConsumeSlotInfo(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIEquip::CExpandableWndInfo::SetSlotDisable_1(_x_com_ptr<IWzCanvas> pCanvas, long nSlotIndex)
{
    __sub_003A9F30(this, nullptr, CreateNakedParam(pCanvas), nSlotIndex);
}

void CUIEquip::CExpandableWndInfo::SetSlotDisable_0(_x_com_ptr<IWzCanvas> pCanvas, long nX, long nY)
{
    __sub_003A9CD0(this, nullptr, CreateNakedParam(pCanvas), nX, nY);
}

CUIDragonEquip::~CUIDragonEquip()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIDragonEquip::_dtor_0()
{
    return __sub_003A4010(this, nullptr);
}

CUIDragonEquip::CUIDragonEquip(const CUIDragonEquip& arg0)
{
    _ctor_1(arg0);
}

void CUIDragonEquip::_ctor_1(const CUIDragonEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIDragonEquip::CUIDragonEquip(long lLeft, long lTop)
{
    _ctor_0(lLeft, lTop);
}

void CUIDragonEquip::_ctor_0(long lLeft, long lTop)
{
    return __sub_003A3F30(this, nullptr, lLeft, lTop);
}

void CUIDragonEquip::OnCreate(void* pData)
{
    __sub_003A87B0(this, nullptr, pData);
}

void CUIDragonEquip::Draw(const tagRECT* pRect)
{
    __sub_003A8960(this, nullptr, pRect);
}

int32_t CUIDragonEquip::OnMouseMove(long rx, long ry)
{
    return __sub_003A4D50(this, nullptr, rx, ry);
}

void CUIDragonEquip::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003A5B30(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIDragonEquip::OnSetFocus(int32_t bFocus)
{
    return __sub_003A3FE0(this, nullptr, bFocus);
}

long CUIDragonEquip::GetBodyPartFromPoint(int32_t rx, int32_t ry)
{
    return __sub_003A38C0(this, nullptr, rx, ry);
}

CUIDragonEquip& CUIDragonEquip::operator=(const CUIDragonEquip& arg0)
{
    return _op_assign_12(this, arg0);
}

CUIDragonEquip& CUIDragonEquip::_op_assign_12(CUIDragonEquip* pThis, const CUIDragonEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMechanicEquip::~CUIMechanicEquip()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIMechanicEquip::_dtor_0()
{
    return __sub_003A3E80(this, nullptr);
}

CUIMechanicEquip::CUIMechanicEquip(const CUIMechanicEquip& arg0)
{
    _ctor_1(arg0);
}

void CUIMechanicEquip::_ctor_1(const CUIMechanicEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMechanicEquip::CUIMechanicEquip(long lLeft, long lTop)
{
    _ctor_0(lLeft, lTop);
}

void CUIMechanicEquip::_ctor_0(long lLeft, long lTop)
{
    return __sub_003A3DA0(this, nullptr, lLeft, lTop);
}

void CUIMechanicEquip::OnCreate(void* pData)
{
    __sub_003A8270(this, nullptr, pData);
}

void CUIMechanicEquip::Draw(const tagRECT* pRect)
{
    __sub_003A8420(this, nullptr, pRect);
}

int32_t CUIMechanicEquip::OnMouseMove(long rx, long ry)
{
    return __sub_003A4B50(this, nullptr, rx, ry);
}

void CUIMechanicEquip::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003A56B0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIMechanicEquip::OnSetFocus(int32_t bFocus)
{
    return __sub_003A3E50(this, nullptr, bFocus);
}

long CUIMechanicEquip::GetBodyPartFromPoint(int32_t rx, int32_t ry)
{
    return __sub_003A3870(this, nullptr, rx, ry);
}

CUIMechanicEquip& CUIMechanicEquip::operator=(const CUIMechanicEquip& arg0)
{
    return _op_assign_12(this, arg0);
}

CUIMechanicEquip& CUIMechanicEquip::_op_assign_12(CUIMechanicEquip* pThis, const CUIMechanicEquip& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
