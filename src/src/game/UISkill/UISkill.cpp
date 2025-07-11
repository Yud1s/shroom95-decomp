// UISkill.cpp
#include "UISkill.hpp"
static ZSortHelperDefault<CUISkill::RecommSkillPair> __ZSortHelper_CUISkill__RecommSkillPair;
static IntroSortLoopHelperDefault<CUISkill::RecommSkillPair, int> __IntroSortLoopHelper_CUISkill__RecommSkillPair;
static InsertionSortHelperDefault<CUISkill::RecommSkillPair> __InsertionSortHelper_CUISkill__RecommSkillPair;

#include "UISkill_regen.ipp"

CUISkill::~CUISkill()
{
    ms_pInstance = nullptr;
}

void CUISkill::_dtor_0()
{
    this->~CUISkill();
}

CUISkill::CUISkill(const CUISkill& arg0)
{
    _ctor_1(arg0);
}

void CUISkill::_ctor_1(const CUISkill& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkill::CUISkill(int32_t bTip, long nTabOption): CUIWnd(3, 5, 153, 6, 1, 0, 0)
{
    //_ctor_0(bTip, nTabOption);
    ms_pInstance = this;

    m_pFont = get_basic_font(FONT_SMALL_GRAY);
    m_pFontBonus = get_basic_font(FONT_SMALL_GRAY);
    m_pFontBookName = get_basic_font(FONT_SMALL_WHITE);
    m_pFontNo = get_basic_font(FONT_NO_BLACK);
    m_nTabOption = nTabOption;
    m_bTip = bTip;
    CreateUIWndPosSaved(174, 281, 10);
}

void CUISkill::_ctor_0(int32_t bTip, long nTabOption)
{
    //return __sub_00450690(this, nullptr, bTip, nTabOption);
    new(this) CUISkill(bTip, nTabOption);
}

void CUISkill::OnCreate(void* pData)
{
    __sub_00451520(this, nullptr, pData);
}

void CUISkill::OnDestroy()
{
    //__sub_0044A660(this, nullptr);
    m_pTab->RemoveAllItems();
    if (m_pUIMacroSys)
    {
        m_pUIMacroSys->Destroy();
        m_pUIMacroSys = 0;
    }

    if (m_pWndSkillGuide)
    {
        m_pWndSkillGuide->Destroy();
        m_pWndSkillGuide = 0;
    }

    CUIWnd::OnDestroy();
    CWvsContext::GetInstance()->RemoveFromStackForTab(this);
}

void CUISkill::OnMoveWnd(long l, long t)
{
    //__sub_0044A350(this, nullptr, l, t);
    CWnd::OnMoveWnd(l, t);
    if (m_pUIMacroSys)
    {
        auto x = GetAbsLeft();
        auto y = GetAbsTop();
        m_pUIMacroSys->MoveWnd(x + 174, y);
    }
}

int32_t CUISkill::OnMouseMove(long rx, long ry)
{
    //return __sub_0044B660(this, nullptr, rx, ry);
    auto SkillIndexFromPoint = GetSkillIndexFromPoint(rx, ry, 0);
    if (SkillIndexFromPoint < 0)
    {
        m_uiToolTip.ClearToolTip();
        if (this->m_nMouseOver != -1)
        {
            this->m_nMouseOver = -1;
            InvalidateRect(nullptr);
        }
        return 0;
    }
    else
    {
        auto& p = CUISkill::GetSkillRootVisible(0)->aSkill[SkillIndexFromPoint];
        auto y = GetAbsTop() + ry + 20;
        auto x = GetAbsLeft() + rx;
        m_uiToolTip.SetToolTip_Skill(x, y, p.op_arrow(), true);
        if (SkillIndexFromPoint != m_nMouseOver)
        {
            this->m_nMouseOver = SkillIndexFromPoint;
            InvalidateRect(nullptr);
        }
        return 1;
    }
}

void CUISkill::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_0044B710(this, nullptr, msg, wParam, rx, ry);
    auto ctx = CWvsContext::GetInstance();
    auto cd = ctx->GetCharacterData();
    auto skillInfo = CSkillInfo::GetInstance();

    //WM_LBUTTONDBLCLK
    if (msg == WM_LBUTTONDBLCLK)
    {
        auto skillIx = GetSkillIndexFromPoint(rx, ry, true);
        if (skillIx >= 0)
        {
            auto& entry = GetSkillRootVisible(false)->aSkill[skillIx];
            auto id = entry->nSkillID;
            auto rootId = id / 1000 % 10;
            if (rootId)
            {
                const SKILLENTRY* skillEntry{};
                if (rootId != 9 && !is_nonslot_skill(id) && skillInfo->GetSkillLevel(*cd.op_arrow(), id, &skillEntry) >
                    0)
                {
                    auto layer = get_gr()->CreateLayer(0, 0, 0, 0, 0, Ztl_variant_t(0), vtMissing);
                    auto icon = entry->GetIconCanvas();
                    layer->InsertCanvas(icon, vtMissing, vtMissing, vtMissing, vtMissing, vtMissing);
                    layer->Putcolor(0x80FFFFFF);
                    layer->PutOrigin(GetLayer());


                    auto cy = icon->Getcy();
                    auto cx = icon->Getcx();

                    layer->RelMove(rx - cx - 16, ry - cy + 16, vtMissing, vtMissing);

                    auto f = 0;
                    auto drag = new CDraggableSkill(layer, id, this, false, -1, -1);
                    auto wndMan = CWndMan::GetInstance();
                    wndMan->BeginDragDrop(this, drag, false);
                    play_ui_sound_str(0x75E);
                }
            }
        }
    }
    else if (msg == WM_LBUTTONDOWN)
    {
        auto ix = GetSkillIndexFromPoint(rx, ry, false);
        if (auto local = CUserLocal::GetInstance())
        {
            if (ix >= 0 && !CUniqueModeless::GetInstance())
            {
                auto& entry = GetSkillRootVisible(false)->aSkill[ix];
                if (!is_keydown_skill(entry->nSkillID) && !is_command_skill(entry->nSkillID) && is_active_skill(
                    entry->nSkillID))
                    local->DoActiveSkill(entry->nSkillID, 0, nullptr);
            }
        }
    }
}

void CUISkill::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    if (nId == 2001)
    {
        if (param1 >= 0x12C && param1 <= 0x130)
        {
            ResetInfo();
            return;
        }
    }
    else if (nId == 2000 && param1 == 500)
    {
        OnTabChanged(param2);
        return;
    }
    if (param1 == 100)
        this->OnButtonClicked(nId);
}

void CUISkill::OnButtonClicked(uint32_t nId)
{
    if (nId - 2010 > 3)
    {
        if (nId == 2023)
        {
            ShiftMacroUIState();
            CUIWnd::OnButtonClicked(0x7E7u);
        }
        else
        {
            if (nId - 3001 <= 3)
                OpenSkillGuide(static_cast<int>(nId) - 3000);
            CUIWnd::OnButtonClicked(nId);
        }
    }
    else
    {
        OnSkillLevelUpButton(static_cast<int>(nId) - 2010);
    }
}

void CUISkill::Draw(const tagRECT* arg0)
{
    __sub_0044ED90(this, nullptr, arg0);
}

int32_t CUISkill::IsMyAddon(CWnd* pWnd)
{
    return TSingleton<CUIMacroSys>::ms_pInstance && TSingleton<CUIMacroSys>::ms_pInstance == pWnd;
}

void CUISkill::ResetInfo()
{
    //__sub_004514F0(this, nullptr);
    GetSkillRootVisible( 1);
    SetTabItems();
    SetScrollBar();
    SetButtons();
    InvalidateRect(nullptr);
}

void CUISkill::ToggleTab()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkill::ShiftMacroUIState()
{
    //__sub_0044A040(this, nullptr);
    if (m_pUIMacroSys)
    {
        auto en = m_nMacroUIState != 0;
        m_nMacroUIState = !m_nMacroUIState;
        SetShow(en);
        m_pUIMacroSys->SetEnable(en);
        m_pUIMacroSys->ResetInfo();
    }
}

long CUISkill::GetMacroUIState() const
{
    return m_nMacroUIState;
}

long CUISkill::GetRecommendSKill(const SKILLROOT* pSkillRoot)
{
    //return __sub_0044E710(this, nullptr, arg0);
    static ZArray<RecommSkillPair> aRecommSkill;
    auto skillInfo = CSkillInfo::GetInstance();
    auto ctx = CWvsContext::GetInstance();
    auto cd = ctx->GetCharacterData();
    auto job = cd->characterStat._ZtlSecureGet_nJob();

    if (!(job / 1000) && cd->characterStat.nSubJob == 1 && (pSkillRoot->nSkillRootID == 400 || pSkillRoot->nSkillRootID == 430))
    {
        SKILLROOT dualRogue;
        skillInfo->GetSkillRootVisible(400, *cd.op_arrow(), dualRogue);
        SKILLROOT dual1;
        skillInfo->GetSkillRootVisible(430, *cd.op_arrow(), dual1);
    }

    //TODO(game)
    return 0;

}

void CUISkill::OnTabChanged(long nTab)
{
    //__sub_0044BFA0(this, nullptr, nTab);
    this->m_nOption = nTab;
    this->m_uiToolTip.ClearToolTip();
    GetSkillRootVisible(1);
    SetScrollBar();
    SetButtons();
    InvalidateRect();
}

void CUISkill::OnSkillLevelUpButton(long nIdx)
{
    __sub_0044D660(this, nullptr, nIdx);
}

void CUISkill::SetSkillRootList()
{
    __sub_0044BFE0(this, nullptr);
}

void CUISkill::SetTabItems()
{
    __sub_00450990(this, nullptr);
}

void CUISkill::SetScrollBar()
{
    //__sub_0044B1C0(this, nullptr);
    auto rootVis = GetSkillRootVisible(false);
    if (m_pTab->GetTabNo() && rootVis)
    {
        m_pSBSkill->SetScrollRange(static_cast<int>(rootVis->aSkill.GetCount()) - 3);
    }
    else
    {
        m_pSBSkill->SetScrollRange(0);
    }
}

void CUISkill::SetButtons()
{
    __sub_0044B220(this, nullptr);
}

void CUISkill::SetButton(long nIdx, int32_t bShow, int32_t bEnable)
{
    //__sub_0044A0A0(this, nullptr, nIdx, bShow, bEnable);
    m_apBtUp[nIdx]->SetShow(bShow);
    m_apBtUp[nIdx]->SetEnable(bEnable);
}

long CUISkill::GetSkillIndexFromPoint(long rx, long ry, int32_t bIcon)
{
    return __sub_0044B390(this, nullptr, rx, ry, bIcon);
}

const SKILLROOT* CUISkill::GetSkillRootVisible(int32_t bReload)
{
    return __sub_0044A6F0(this, nullptr, bReload);
}

void CUISkill::CreateTip()
{
    __sub_0044FDD0(this, nullptr);
}

long CUISkill::GetMySkillDegreeSP(long nSkillDegree)
{
    return __sub_0044A790(this, nullptr, nSkillDegree);
}

long CUISkill::GetMaxSkillDegreeSP(long nSkillDegree)
{
    return __sub_0044A870(this, nullptr, nSkillDegree);
}

int32_t CUISkill::CanSkillUp(const SKILLENTRY* pSkillEntry)
{
    return __sub_0044A930(this, nullptr, pSkillEntry);
}

long CUISkill::GetMySkillDegreeSPDualJob(long nDualJobSkillDegree)
{
    return __sub_0044AAC0(this, nullptr, nDualJobSkillDegree);
}

void CUISkill::GetMaxSkillDegreeSPDualJob(long nDualJobSkillDegree, long& nMaxSP, long& nJobSP, long& nSpecialSP)
{
    __sub_0044AC10(this, nullptr, nDualJobSkillDegree, nMaxSP, nJobSP, nSpecialSP);
}

int32_t CUISkill::CanSkillUpDualJob(const SKILLENTRY* pSkillEntry)
{
    return __sub_0044AE10(this, nullptr, pSkillEntry);
}

void CUISkill::OpenSkillGuide(long nGrade)
{
    __sub_004513D0(this, nullptr, nGrade);
}

void CUISkill::OpenCurSkillGuide()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkill::CloseSkillGuide()
{
    //__sub_0044A5B0(this, nullptr);
    if (auto& guide = m_pWndSkillGuide)
    {
        guide->Destroy();
        guide = 0;
    }
}

CUISkill& CUISkill::operator=(const CUISkill& arg0)
{
    return _op_assign_39(this, arg0);
}

CUISkill& CUISkill::_op_assign_39(CUISkill* pThis, const CUISkill& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkill::RecommSkillPair::RecommSkillPair(long arg0, long arg1)
{
    this->nSP = arg0;
    this->nSkillID = arg1;
}

void CUISkill::RecommSkillPair::_ctor_0(long arg0, long arg1)
{
    new(this) RecommSkillPair(arg0, arg1);
}

CUISkill::RecommSkillPair::RecommSkillPair()
= default;

void CUISkill::RecommSkillPair::_ctor_1()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool CUISkill::RecommSkillPair::operator<(const CUISkill::RecommSkillPair& arg0) const
{
    return nSkillID < arg0.nSkillID || nSkillID == arg0.nSkillID && nSP < arg0.nSP;
}

bool CUISkill::RecommSkillPair::_op_lt_2(CUISkill::RecommSkillPair* pThis, const CUISkill::RecommSkillPair& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWndSkillGuide::~CWndSkillGuide()
{
}

void CWndSkillGuide::_dtor_0()
{
    return __sub_00450630(this, nullptr);
}

CWndSkillGuide::CWndSkillGuide(const CWndSkillGuide& arg0)
{
    _ctor_1(arg0);
}

void CWndSkillGuide::_ctor_1(const CWndSkillGuide& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWndSkillGuide::CWndSkillGuide(long nGrade)
{
    //_ctor_0(nGrade);
    CreateWnd(0, 0, 800, 600, 10, true, nullptr, true, Origin_LT);
    auto uol = ZXString16::FromFmt(L"UI/UIWindow.img/AranSkillGuide/%d", nGrade);

    auto canvas = get_rm()->GetObjectT<IWzCanvas>(uol.c_str());
    GetCanvas()->Copy(0, 0, canvas, vtMissing);
}

void CWndSkillGuide::_ctor_0(long nGrade)
{
    //return __sub_00450310(this, nullptr, nGrade);
    new(this) CWndSkillGuide(nGrade);
}

void CWndSkillGuide::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_0044A5E0(this, nullptr, msg, wParam, rx, ry);
    if (msg == 514 || msg == 517)
    {
        if (auto uiSkill = TSingleton<CUISkill>::ms_pInstance)
        {
            //TODO(game)
            /*p = TSingleton<CUISkill>::ms_pInstance->m_pWndSkillGuide.p;
            v6 = TSingleton<CUISkill>::ms_pInstance;
            if ( auto guide = TSingleton<CUISkill>::ms_pInstance->m_pW )
            {
                CWnd::Destroy(p);
                p_m_pWndSkillGuide = &v6->m_pWndSkillGuide;
                if ( p_m_pWndSkillGuide->p )
                {
                    ZRef<CWndSkillGuide>::_ReleaseRaw(p_m_pWndSkillGuide, 0);
                    p_m_pWndSkillGuide->p = 0;
                }
            }*/
        }
    }
}

void CWndSkillGuide::OnKey(uint32_t wParam, int32_t lParam)
{
    if (lParam >= 0 && wParam == 27)
    {
        if (auto uiSkill = TSingleton<CUISkill>::ms_pInstance)
            uiSkill->CloseSkillGuide();
    }
}

void CWndSkillGuide::OnMoveWnd()
{
}

CWndSkillGuide& CWndSkillGuide::operator=(const CWndSkillGuide& arg0)
{
    return _op_assign_6(this, arg0);
}

CWndSkillGuide& CWndSkillGuide::_op_assign_6(CWndSkillGuide* pThis, const CWndSkillGuide& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMacroSys::~CUIMacroSys()
{
    ms_pInstance = nullptr;
}

void CUIMacroSys::_dtor_0()
{
    this->~CUIMacroSys();
}

CUIMacroSys::CUIMacroSys(const CUIMacroSys& arg0)
{
    _ctor_1(arg0);
}

void CUIMacroSys::_ctor_1(const CUIMacroSys& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMacroSys::CUIMacroSys(long nLeft, long nTop)
{
    m_bShow = true;
    m_bEnable = true;

    CreateWnd(nLeft, nTop, 195, 281, 10, 1, 0, 1, Origin_LT);
}

void CUIMacroSys::_ctor_0(long nLeft, long nTop)
{
    //return __sub_0044C0D0(this, nullptr, nLeft, nTop);
    new(this) CUIMacroSys(nLeft, nTop);
}

void CUIMacroSys::OnCreate(void* pData)
{
    __sub_0044DF20(this, nullptr, pData);
}

void CUIMacroSys::OnDestroy()
{
    __sub_0044C1D0(this, nullptr);
}

int32_t CUIMacroSys::OnSetFocus(int32_t bFocus)
{
    return __sub_0044C1E0(this, nullptr, bFocus);
}

void CUIMacroSys::OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3)
{
    __sub_0044CCE0(this, nullptr, arg0, arg1, arg2, arg3);
}

int32_t CUIMacroSys::OnMouseMove(long rx, long ry)
{
    return __sub_0044B470(this, nullptr, rx, ry);
}

void CUIMacroSys::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    if (nId == 3010 && param1 >= 0x12C && param1 <= 0x130)
    {
        ResetInfo();
    }
    else if (param1 == 100)
    {
        this->OnButtonClicked(nId);
    }
}

void CUIMacroSys::OnKey(uint32_t wParam, int32_t lParam)
{
    if (lParam >= 0 && wParam == 27)
        CWvsContext::GetInstance()->ProcessBasicUIKey(0x1Bu, lParam);
}

void CUIMacroSys::OnButtonClicked(uint32_t nId)
{
    //__sub_0044D530(this, nullptr, nId);
    if (nId == 3000 && this->m_nSelected != -1)
    {
        auto txt = m_pEditName->GetText();
        auto buf = txt.GetBuffer(1024, true);
        auto code = 0;
        auto tightLine = false;
        if (CCurseProcess::ProcessString(buf, nullptr, true))
        {
            tightLine = m_pCheckShout->IsChecked();
            CMacroSysMan::GetInstance()->SetMacroInfo(m_nSelected, txt, tightLine);
            code = 3329;
        }
        else
        {
            tightLine = false;
            code = 285;
        }
        auto msg = _GetStr(code);
        CUtilDlg::Notice(msg, nullptr, nullptr, false, tightLine);
    }
}

int32_t CUIMacroSys::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    //return __sub_00449D60(this, nullptr, rx, ry, ppCtrl);
    auto result = this->IsEnabled();
    if (result)
        return CWnd::HitTest(rx, ry, ppCtrl);
    return result;
}

void CUIMacroSys::SetEnable(int32_t bEnable)
{
    //__sub_0044C1F0(this, nullptr, bEnable);
    m_nSelected = bEnable;
}

int32_t CUIMacroSys::IsEnabled()
{
    //return __sub_0044C200(this, nullptr);
    return m_nSelected;
}

void CUIMacroSys::SetShow(int32_t bShow)
{
    //__sub_0044C270(this, nullptr, bShow);
    GetLayer()->Putvisible(bShow);
    m_bEnable = bShow;
}

int32_t CUIMacroSys::IsShown()
{
    //return __sub_0044C210(this, nullptr);
    return m_bShow;
}

void CUIMacroSys::Draw(const tagRECT* pRect)
{
    __sub_0044C430(this, nullptr, pRect);
}

int32_t CUIMacroSys::GetIndexByPos(long rx, long ry, int32_t bIncludeCombinationSkill, long& nMacroIdx, long& nSkillIdx)
{
    //return __sub_00449F70(this, nullptr, rx, ry, bIncludeCombinationSkill, nMacroIdx, nSkillIdx);
    nMacroIdx = -1;
    auto curPos = m_pSBMacro->GetCurPos();
    auto v7 = 0;
    auto v8 = 76;
    while (v8 - 32 > ry || ry > v8)
    {
        v8 += 44;
        ++v7;
        if (v8 >= 208)
            goto LABEL_7;
    }
    nMacroIdx = v7 + curPos;
LABEL_7:
    if (v7 == 3)
        return 0;
    auto v10 = 0;
    auto v11 = 47;
    while (v11 - 32 > rx || rx > v11)
    {
        v11 += 34;
        ++v10;
        if (v11 >= 149)
            goto LABEL_15;
    }
    nSkillIdx = v10;
LABEL_15:
    if (v10 == 3)
    {
        if (!bIncludeCombinationSkill || (rx - 136) > 0x20)
            return 0;
        nSkillIdx = 3;
    }
    return 1;
}

void CUIMacroSys::ResetInfo()
{
    //__sub_00449F00(this, nullptr);
    auto uiSkill = CUISkill::GetInstance();
    m_pCheckShout->SetShow(uiSkill->GetMacroUIState() == 1);
    m_pEditName->SetShow(uiSkill->GetMacroUIState() == 1);
    m_uiToolTip.ClearToolTip();
    InvalidateRect();
}

void CUIMacroSys::OnSelected(long nMacroIdx)
{
    //__sub_0044B0F0(this, nullptr, nMacroIdx);
    auto macroSys = TSingleton<CMacroSysMan>::ms_pInstance;
    this->m_nSelected = nMacroIdx;
    auto macroName = macroSys->GetMacroName(nMacroIdx);
    m_pEditName->SetText(macroName.c_str());
    auto isShout = macroSys->IsShoutMacro(nMacroIdx);
    m_pCheckShout->SetChecked(isShout);
    m_pBtChangeName->SetEnable(m_nSelected >= 0);
    ResetInfo();
}

CUIMacroSys& CUIMacroSys::operator=(const CUIMacroSys& arg0)
{
    return _op_assign_23(this, arg0);
}

CUIMacroSys& CUIMacroSys::_op_assign_23(CUIMacroSys* pThis, const CUIMacroSys& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl DownHeap_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, int32_t nIdx, int32_t nLen,
                                                 int32_t nFrom)
{
    return __sub_00449E50(a, nIdx, nLen, nFrom);
}

void __cdecl ZSort_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, __POSITION* posFrom,
                                              __POSITION* posTo)
{
    return __sub_0044A550(a, posFrom, posTo);
}

long __cdecl get_job_change_level(long nJob, short nSubJob, int32_t nStep)
{
    return __sub_00449C00(nJob, nSubJob, nStep);
}

int32_t __cdecl Partition_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, int32_t nFrom, int32_t nTo,
                                                     const CUISkill::RecommSkillPair& pivot)
{
    return __sub_0044A270(a, nFrom, nTo, pivot);
}

void __cdecl ZSort_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a)
{
    return __sub_0044B0C0(a);
}

void __cdecl InsertionSort_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, int32_t nFrom, int32_t nTo)
{
    return __sub_00449DE0(a, nFrom, nTo);
}
