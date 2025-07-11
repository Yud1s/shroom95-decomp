// UIItem.cpp
#include "UIItem.hpp"
#include "UIItem_regen.ipp"

int32_t CUIItem::ms_anItemScrollPos[6]{};

CUIItem::~CUIItem()
{
    auto ctx = CWvsContext::GetInstance();
    ctx->ClearLastestGetItemID();
    ms_pInstance = nullptr;
}

void CUIItem::_dtor_0()
{
    return __sub_003CBC80(this, nullptr);
}

CUIItem::CUIItem(const CUIItem& arg0)
{
    _ctor_1(arg0);
}

void CUIItem::_ctor_1(const CUIItem& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIItem::CUIItem() : CUIWnd(0, 5, 150, 6, 1, 0, 0)
{
    ms_pInstance = this;

    auto cfg = CConfig::GetInstance();
    auto exp = cfg->GetInventoryExpanded();

    m_bExtended = exp;
    m_pBtClose = exp ? 574 : 150;
    CreateUIWndPosSaved(exp ? 594 : 172, 293, 10);
    SetItemTI(m_nOption + 1);
}

void CUIItem::_ctor_0()
{
    //return __sub_003CCE00(this, nullptr);
    new(this) CUIItem();
}

void CUIItem::OnCreate(void* arg0)
{
    __sub_003CE520(this, nullptr, arg0);
}

void CUIItem::OnDestroy()
{
    //__sub_003CBE40(this, nullptr);
    CUIWnd::OnDestroy();
    m_pSBItem = 0;
    SetTryToReleaseItem(false, -1);
    CWvsContext::GetInstance()->RemoveFromStackForTab(this);
}

void CUIItem::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    //__sub_003CF250(this, nullptr, nId, param1, param2);
    if (nId == 2000)
    {
        if (param1 == 500)
        {
            OnTabChanged(param2);
            return;
        }
    }
    else if (nId == 2001 && param1 >= 0x12C && param1 <= 0x130)
    {
        m_uiToolTip.ClearToolTip();
        ms_anItemScrollPos[this->m_nItemTI] = param2;
        this->m_nFirstPosition = 4 * param2 + 1;
        InvalidateRect(nullptr);
        SetLastestGetItemEffect();
    }
    if (param1 == 101)
    {
        auto code = 0;
        switch (nId)
        {
        case ID_CTRL_UIITEM_BT_GATHER:
            if (param2)
            {
                m_pBtArrange->SetSimpleToolTip(_GetStr(714), ZXString<char>("left"), false);
            }
            else
            {
                m_pBtArrange->ClearToolTip();
            }
            break;
        case ID_CTRL_UIITEM_BT_SORT:
            if (param2)
            {
                m_pBtArrange->SetSimpleToolTip(_GetStr(715), ZXString<char>("left"), false);
            }
            else
            {
                m_pBtArrange->ClearToolTip();
            }
            break;
        case ID_CTRL_UIITEM_BT_EXTEND:
            if (param2)
            {
                m_pBtExtend->SetSimpleToolTip(_GetStr(4517), ZXString<char>("left"), false);
            }
            else
            {
                m_pBtExtend->ClearToolTip();
            }
            break;

        case ID_CTRL_UIITEM_BT_FOLD:
            if (param2)
            {
                m_pBtExtend->SetSimpleToolTip(_GetStr(4518), ZXString<char>("left"), false);
            }
            else
            {
                m_pBtExtend->ClearToolTip();
            }
            break;
        case ID_CTRL_UIITEM_BT_CASHSHOP:
            if (param2)
            {
                m_pBtCashShop->SetSimpleToolTip(_GetStr(4520), ZXString<char>("left"), false);
            }
            else
            {
                m_pBtCashShop->ClearToolTip();
            }
            break;


        default:
            break;
        }
    }
    else if (param1 == 100)
    {
        this->OnButtonClicked(nId);
    }
}

void CUIItem::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_003CC590(this, nullptr, msg, wParam, rx, ry);
    if (msg != 513)
        return;

    auto ctx = CWvsContext::GetInstance();
    if (!ctx->CanSendExclRequest())
    {
        m_uiToolTip.ClearToolTip();
        return;
    }

    auto cd = ctx->GetCharacterData();
    auto slotPos = GetSlotPositionFromPoint(rx, ry);
    auto item = cd->GetItem(m_nItemTI, slotPos);
    if (item)
    {
        if (m_bTryToReleaseItem)
        {
            if (!ItemRelease(slotPos, item.op_arrow()))
            {
                SetTryToReleaseItem(false, -1);
                auto chat = _GetStr(0x16E1);
                CHATLOG_ADD(chat, 0xc);
            }
        }
        else
        {
            auto layer = get_gr()->CreateLayer(0, 0, 0, 0, 0, Ztl_variant_t(0), vtMissing);
            auto itemInfo = CItemInfo::GetInstance();
            auto wndMan = CWndMan::GetInstance();

            auto itemIcon = itemInfo->GetItemIcon(item->nItemID.GetData(), false, false);
            layer->InsertCanvas(itemIcon, vtMissing, vtMissing, vtMissing, vtMissing, vtMissing);
            layer->Putcolor(0x80FFFFFF);
            layer->PutOrigin(GetLayer());

            auto cx = itemIcon->Getcx();
            auto cy = itemIcon->Getcy();
            layer->RelMove(cx - 16, cy - 16, vtMissing, vtMissing);

            auto dragable = new CDraggableItem(layer, m_nItemTI, slotPos, 0, this);
            wndMan->BeginDragDrop(this, dragable, false);
            play_ui_sound_str(0x75E);
        }
    }
    else
    {
        SetTryToReleaseItem(false, -1);
    }

    m_uiToolTip.ClearToolTip();
}

int32_t CUIItem::OnMouseMove(long rx, long ry)
{
    //return __sub_003CCA90(this, nullptr, rx, ry);
    auto SlotPositionFromPoint = CUIItem::GetSlotPositionFromPoint(rx, ry);
    auto inp = CInputSystem::GetInstance();
    auto ctx = CWvsContext::GetInstance();
    if (SlotPositionFromPoint)
    {
        inp->SetCursorState(m_bTryToReleaseItem ? 14 : 5);
        auto cd = ctx->GetCharacterData();
        auto item = cd->GetItem(m_nItemTI, SlotPositionFromPoint);
        if (item)
        {
            CUIToolTip::ItemToolTipParam param;
            param.bShowPetLife = true;
            auto l = GetAbsLeft();
            auto t = GetAbsTop();
            m_uiToolTip.ShowItemToolTip(rx + l, ry + t + 20, item.op_arrow(), &param, nullptr, 0, 0,
                                        CUIToolTip::ITCToolTip_None);
            /*if (this->m_bTryToReleaseItem && p->__vftable[1].IsPreventSlipItem(p) && !(p->__vftable[1].~
                GW_ItemSlotBase)(p))
                inp->SetCursorState(15);*/ //TODO(game)
            if (auto local = CUserLocal::GetInstance())
            {
                local->PetInterActWithItem(item->nItemID.GetData());
            }
        }
        else
        {
            m_uiToolTip.ClearToolTip();
        }
    }
    return 0;
}

void CUIItem::OnButtonClicked(uint32_t nId)
{
    //__sub_003CC4F0(this, nullptr, nId);
    int v2; // edx
    auto ctx = CWvsContext::GetInstance();

    switch (nId)
    {
    case 0x7D2u:
        CUIItem::OnDropMoney();
        break;
    case 0x7D3u:
        CUIItem::OnGather();
        break;
    case 0x7D4u:
        CUIItem::OnSort();
        break;
    case 0x7D5u:
    case 0x7D6u:
        CUIItem::Toggle();
        break;
    case 0x7D7u:
        v2 = 0;
        switch (this->m_nItemTI)
        {
        case 1:
            v2 = 50200093;
            break;
        case 2:
            v2 = 50200094;
            break;
        case 4:
            v2 = 50200095;
            break;
        default:
            break;
        }
        ctx->SetCashShopInitialItem(v2);
        ctx->SendMigrateToShopRequest(false);
        break;
    default:
        CUIWnd::OnButtonClicked(nId);
        break;
    }
}

void CUIItem::Draw(const tagRECT* pRect)
{
    __sub_003CCF50(this, nullptr, pRect);
}

void CUIItem::Update()
{
    //__sub_003CF1E0(this, nullptr);
    auto local = CUserLocal::GetInstance();
    auto ctx = CWvsContext::GetInstance();
    if (local
        && (local->GetMoveAction() & 0xFFFFFFFE) == 0x12
        || TSingleton<CUniqueModeless>::ms_pInstance)
    {
        this->m_pBtArrange->SetEnable(0);
    }
    else
    {
        this->m_pBtArrange->SetEnable(1);
    }

    long latestId = 0, latestPos = 0;
    ctx->GetLastestGetItemID(latestId, latestPos);
    if (this->m_nLastestGetItemID != latestId
        || this->m_nLastestGetItemPos != latestPos)
    {
        SetLastestGetItemEffect();
    }
    CWnd::Update();
}

void CUIItem::ResetInfo()
{
    //__sub_003CBB20(this, nullptr);
    m_pTab->SetTab(m_nOption);
}

void CUIItem::ChangeTab(long nTab)
{
    //__sub_003CBC50(this, nullptr, nTab);
    m_pTab->SetTab(nTab);
    SetTryToReleaseItem(0, -1);
}

long CUIItem::GetSlotPositionFromPoint(long rx, long ry)
{
    //return __sub_003CC220(this, nullptr, rx, ry);
    auto cd = CWvsContext::GetInstance()->GetCharacterData();

    auto count = cd->GetItemSlotCount(m_nItemTI);
    auto slots = m_bExtended ? 97 : std::min(m_nFirstPosition + 24, count);
    if (m_nFirstPosition >= slots)
        return 0;


    for (auto i = m_nFirstPosition; i < slots; ++i)
    {
        tagRECT rc{};
        GetItemSlotRect(i, &rc);
        if (PtInRect(&rc, {rx, ry}))
            return i;
    }

    return 0;
}

long CUIItem::GetItemTypeIndex()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIItem::ToggleTab()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIItem::SetArrangeButton(long nTI, long nState)
{
    __sub_003CCC90(this, nullptr, nTI, nState);
}

void CUIItem::ClearLastestGetItemInfo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIItem::SetTryToReleaseItem(int32_t bTryToReleaseItem, long nReleaseUItemPos)
{
    //__sub_003CBC10(this, nullptr, bTryToReleaseItem, nReleaseUItemPos);
    m_bTryToReleaseItem = bTryToReleaseItem;
    m_nReleaseUItemPos = nReleaseUItemPos;
    auto cursor = m_bTryToReleaseItem ? 14 : 0;
    CInputSystem::GetInstance()->SetCursorState(cursor);
}

int32_t CUIItem::IsTryToReleaseItem()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIItem::ItemRelease(long nSlotPosition, GW_ItemSlotBase* pItem)
{
    return __sub_003CC300(this, nullptr, nSlotPosition, pItem);
}

void CUIItem::ShowItemReleaseEffect(long nPos)
{
    __sub_003CE2B0(this, nullptr, nPos);
}

void CUIItem::OnTabChanged(long nTab)
{
    __sub_003CF040(this, nullptr, nTab);
}

void CUIItem::OnDropMoney()
{
    __sub_003CBFD0(this, nullptr);
}

void CUIItem::OnGather()
{
    //__sub_003CBB40(this, nullptr);
    if ((TSingleton<CUserLocal>::ms_pInstance->GetMoveAction() & 0xFFFFFFFE) != 0x12
        && !TSingleton<CUniqueModeless>::ms_pInstance)
    {
        TSingleton<CWvsContext>::ms_pInstance->SendGatherItemRequest(this->m_nItemTI);
    }
}

void CUIItem::OnSort()
{
    //__sub_003CBB70(this, nullptr);
    if ((TSingleton<CUserLocal>::ms_pInstance->GetMoveAction() & 0xFFFFFFFE) != 0x12
        && !TSingleton<CUniqueModeless>::ms_pInstance)
    {
        TSingleton<CWvsContext>::ms_pInstance->SendSortItemRequest(this->m_nItemTI);
    }
}

int32_t CUIItem::GetItemSlotRect(long nSlotPosition, tagRECT* pRc)
{
    return __sub_003CBE90(this, nullptr, nSlotPosition, pRc);
}

void CUIItem::Toggle()
{
    //__sub_003CBBA0(this, nullptr);
    m_bExtended = m_bExtended == 0;
    TSingleton<CConfig>::ms_pInstance->SetInventoryExpanded(m_bExtended);
    CWnd::Destroy();
    auto v3 = m_bExtended != 0 ? 594 : 172;
    m_nBtCloseX = m_bExtended != 0 ? 574 : 150;
    CreateUIWndPosSaved(v3, 293, 10);
}

void CUIItem::SetItemTI(long nTab)
{
    //__sub_003CBAC0(this, nullptr, nTab);
    this->m_nItemTI = nTab;
    if (nTab == 3)
    {
        this->m_nItemTI = 4;
    }
    else if (nTab == 4)
    {
        this->m_nItemTI = 3;
    }
}

long CUIItem::ItemTI_2_TabIndex(long nItemTI)
{
    //return __sub_003CBAF0(this, nullptr, nItemTI);
    int result = nItemTI;
    if (nItemTI == 3)
        return 4;
    if (nItemTI == 4)
        return 3;
    return result;
}

ZXString16 CUIItem::_GetBackgroundUOL()
{
    //return __sub_003CCD90(this, nullptr);
    return ZXString16(this->m_bExtended ? L"UI/UIWindow2.img/Item/FullBackgrnd" : L"UI/UIWindow2.img/Item/backgrnd");
}

void CUIItem::SetLastestGetItemEffect()
{
    __sub_003CD8D0(this, nullptr);
}

CUIItem& CUIItem::operator=(const CUIItem& arg0)
{
    return _op_assign_35(this, arg0);
}

CUIItem& CUIItem::_op_assign_35(CUIItem* pThis, const CUIItem& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
