// CtrlScrollBar.cpp
#include "CtrlScrollBar.hpp"
#include "CtrlScrollBar_regen.ipp"

CCtrlScrollBar::~CCtrlScrollBar()
{
}

void CCtrlScrollBar::_dtor_0()
{
    //return __sub_000EA050(this, nullptr);
    this->~CCtrlScrollBar();
}

CCtrlScrollBar::CCtrlScrollBar(const CCtrlScrollBar& arg0)
{
    _ctor_1(arg0);
}

void CCtrlScrollBar::_ctor_1(const CCtrlScrollBar& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlScrollBar::CCtrlScrollBar()
{
    m_nWheelRange = -1;
}

void CCtrlScrollBar::_ctor_0()
{
    new(this) CCtrlScrollBar();
}

void CCtrlScrollBar::_ctor_default()
{
    new(this) CCtrlScrollBar();
}

void CCtrlScrollBar::CreateCtrl(CWnd* pParent, uint32_t nId, long hv, long type, long l, long t, long length,
                                void* pData)
{
    //__sub_000EB430(this, nullptr, pParent, nId, hv, type, l, t, length, pData);
    this->m_length = length;
    this->m_hv = hv;
    this->m_type = type;
    this->m_nCurPos = 0;
    this->m_nScrollRange = 0;
    this->m_nLastHT = 100;
    this->m_dwLastHT = 0;
    this->m_bCapture = 0;
    this->m_bHideThumb = 0;
    GetScrollBarBaseUOL(hv, type, this->m_sUOL);
    auto canvas = GetScrollBarCanvas(0);
    m_hv = this->m_hv;

    auto h = canvas->Getheight();
    auto w = canvas->Getwidth();

    if (m_hv)
    {
        if (m_hv == 1)
        {
            m_grid = h;
            CCtrlWnd::CreateCtrl(pParent, nId, l, t, w, m_length, pData);
        }
    }
    else
    {
        m_grid = w;
        CCtrlWnd::CreateCtrl(pParent, nId, l, t, m_length, h, pData);
    }

    if (this->m_type == 4)
        this->m_bTranslucent = true;
}

int32_t CCtrlScrollBar::OnMouseMove(long rx, long ry)
{
    //return __sub_000E9B90(this, nullptr, rx, ry);
    if (this->m_nCurPos <= 1 || !this->m_dwLastHT || this->m_nScrollRange != 105)
        return 0;
    DoThumbMove(rx, ry);
    return 1;
}

void CCtrlScrollBar::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_000E9F80(this, nullptr, msg, wParam, rx, ry);
    if (msg == 513)
    {
        MouseDown(rx, ry);
    }
    else if (msg == 514)
    {
        MouseUp(rx, ry);
    }
}

int32_t CCtrlScrollBar::OnMouseWheel(long rx, long ry, long nDelta)
{
    //return __sub_000E9C30(this, nullptr, rx, ry, nDelta);
    tagRECT rtWheelRange{};

    if (this->m_bShown < 0)
        return 0;
    SetRect(&rtWheelRange, 0, 0, m_width, m_height);
    if (m_length)
    {
        if (m_length == 1)
            rtWheelRange.bottom -= this->m_bEnabled;
    }
    else
    {
        rtWheelRange.top -= this->m_bEnabled;
    }
    if (!PtInRect(&rtWheelRange, tagPOINT{rx, ry}))
        return 0;
    DoPrevNext(nDelta);
    return 1;
}

void CCtrlScrollBar::OnMouseEnter(int32_t bEnter)
{
    //__sub_000E9BD0(this, nullptr, bEnter);
    auto inp = CInputSystem::GetInstance();

    CCtrlWnd::OnMouseEnter(bEnter);
    if (bEnter && this->m_nCurPos > 1)
    {
        int m_length = this->m_length;
        if (m_length)
        {
            if (m_length == 1)
                inp->SetCursorState(7);
        }
        else
        {
            inp->SetCursorState(8);
        }
    }
}

void CCtrlScrollBar::Draw(long rx, long ry, const tagRECT* pRect)
{
    __sub_000EA940(this, nullptr, rx, ry, pRect);
}

void CCtrlScrollBar::Update()
{

    //__sub_000E9E80(this, nullptr);
    tagPOINT pt{};
    auto wndMan = CWndMan::GetInstance();
    if (this->m_nScrollRange > 1 && this->m_bCapture)
    {
        wndMan->GetCursorPos(&pt, 0);
        auto hit = ScrHitTest(pt.x - GetAbsLeft(), pt.y - GetAbsTop());
        switch (hit)
        {
        case 'e':
            if (this->m_nLastHT == hit)
            {
                if (AutoRepeat())
                    DoPrevNext(-1);
            }
            break;
        case 'f':
            if (this->m_nLastHT == hit && AutoRepeat())
                DoPrevNext(1);
            break;
        case 'g':
            if (this->m_nLastHT == hit && AutoRepeat())
                DoPrevNextBar(-1);
            break;
        case 'h':
            if (this->m_nLastHT == hit && AutoRepeat())
                DoPrevNextBar(1);
            break;
        default:
            break;
        }
    }
}

long CCtrlScrollBar::GetCurPos() const
{
    return m_nCurPos;
}

long CCtrlScrollBar::GetScrollRange() const
{
    return m_nScrollRange;
}

void CCtrlScrollBar::SetCurPos(long nPos)
{
    //__sub_000E9B50(this, nullptr, nPos);
    this->m_nCurPos = nPos;
    ValidatePosAndRange();
    InvalidateRect();
}

void CCtrlScrollBar::SetScrollRange(long nRange)
{
    //__sub_000E9B70(this, nullptr, nRange);
    this->m_nScrollRange = nRange;
    ValidatePosAndRange();
    InvalidateRect();
}

int32_t CCtrlScrollBar::IsEnabled()
{
    //return __sub_000E9850(this, nullptr);
    return CCtrlWnd::IsEnabled();
}

void CCtrlScrollBar::HideThumb(int32_t arg0)
{
    m_bHideThumb = arg0;
}

void CCtrlScrollBar::SetWheelRange(long arg0)
{
    m_nWheelRange = arg0;
}

long __cdecl CCtrlScrollBar::GetScrollBarSize(long hv, long type)
{
    //return __sub_000EA230(hv, type);
    ZXString16 uol;
    GetScrollBarBaseUOL(hv, type, uol);

    auto s = StringPool::GetInstance().GetStringW(0x5d8);
    uol._Cat(s.c_str(), s.GetLength());

    auto obj = get_rm()->GetObjectT<IWzCanvas>((const wchar_t*)uol.c_str());
    if (hv)
    {
        if (hv != 1)
            return 0;

        return obj->Getwidth();
    }
    return obj->Getheight();
}

int32_t CCtrlScrollBar::SetScrollBarSize(long length)
{
    if (this->m_length != length && length)
    {
        if (!m_hv)
        {
            this->m_width = length;
            this->m_length = length;
            InvalidateRect();
            return 1;
        }
        if (m_hv == 1)
        {
            this->m_height = length;
            this->m_length = length;
            InvalidateRect();
            return 1;
        }
    }
    return 0;
}

_x_com_ptr<IWzCanvas> CCtrlScrollBar::GetScrollBarCanvas(long nImgType)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_000EA530(this, nullptr, &ret, nImgType);
}

void CCtrlScrollBar::ValidatePosAndRange()
{
    //__sub_000E9820(this, nullptr);
    int m_nScrollRange; // edx
    int m_nCurPos; // eax
    int v3; // edx

    m_nScrollRange = this->m_nScrollRange;
    if (m_nScrollRange <= 1)
    {
        this->m_nScrollRange = 0;
    LABEL_3:
        this->m_nCurPos = 0;
        return;
    }
    m_nCurPos = this->m_nCurPos;
    if (m_nCurPos < 0)
        goto LABEL_3;
    v3 = m_nScrollRange - 1;
    if (m_nCurPos > v3)
        this->m_nCurPos = v3;
}

long CCtrlScrollBar::ScrHitTest(long rx, long ry)
{
    //return __sub_000E9890(this, nullptr, rx, ry);
    int v3; // edi
    int m_nScrollRange; // edx
    int m_grid; // ebx
    int v7; // eax
    if (this->m_hv)
        v3 = ry;
    else
        v3 = rx;
    m_nScrollRange = this->m_nScrollRange;
    if (m_nScrollRange <= 1 || rx < 0 || rx >= this->m_width || ry < 0 || ry >= this->m_height)
        return 'd';
    m_grid = this->m_grid;
    if (v3 <= m_grid)
        return 'e';
    if (v3 >= this->m_length - m_grid)
        return 'f';
    v7 = m_grid + this->m_nCurPos * (this->m_length - 3 * m_grid) / (m_nScrollRange - 1);
    if (v7 > v3)
        return 'g';
    if (v3 <= v7 + m_grid)
        return 'i';
    if (v3 >= v7)
        return 'h';
    else
        return 'g';
}

int32_t CCtrlScrollBar::AutoRepeat()
{
    //return __sub_000E9850(this, nullptr);
    if (this->m_nScrollRange <= 1)
        return 0;
    if (m_nLastHT == 100)
        return 0;
    if (m_nLastHT == 105)
        return 0;
    auto t = timeGetTime();
    if (t - this->m_dwLastHT <= 0x32)
        return 0;
    this->m_dwLastHT = t;
    return 1;
}

void CCtrlScrollBar::MouseDown(long rx, long ry)
{
    //__sub_000E9D20(this, nullptr, rx, ry);
    if (this->m_nScrollRange > 1 && !this->m_bCapture)
    {
        this->m_bCapture = 1;
        CWndMan::GetInstance()->SetCaptureWnd(this);
        this->m_nLastHT = ScrHitTest(rx, ry);
        this->m_dwLastHT = timeGetTime();
        switch (this->m_nLastHT)
        {
        case 'e':
            DoPrevNext(-1);
            break;
        case 'f':
            DoPrevNext(1);
            break;
        case 'g':
            DoPrevNextBar(-1);
            break;
        case 'h':
            DoPrevNextBar(1);
            break;
        case 'i':
            DoThumbStart(rx, ry);
            break;
        default:
            break;
        }
    }
}

void CCtrlScrollBar::MouseUp(long rx, long ry)
{
    //__sub_000E9DE0(this, nullptr, rx, ry);
    if (this->m_nScrollRange > 1 && this->m_bCapture)
    {
        this->m_bCapture = 0;
        CWndMan::GetInstance()->ReleaseCaptureWnd(this);
        int v4 = ScrHitTest(rx, ry);
        switch (this->m_nLastHT)
        {
        case 'g':
            if (this->m_dwLastHT == v4)
                DoPrevNextBar(-1);
            break;
        case 'h':
            if (this->m_dwLastHT == v4)
                DoPrevNextBar(1);
            break;
        case 'i':
            DoThumbEnd(rx, ry);
            this->m_nLastHT = 100;
            InvalidateRect();
            return;
        default:
            break;
        }
        this->m_nLastHT = 100;
        InvalidateRect();
    }
}

void CCtrlScrollBar::DoPrevNext(long delta)
{
    //__sub_000E9950(this, nullptr, delta);
    this->m_nCurPos += delta;
    ValidatePosAndRange();
    InvalidateRect();
    if (delta >= 0)
    {
        if (delta > 0)
            this->m_pParent->OnChildNotify(this->m_nCtrlId, 301u, this->m_nCurPos);
    }
    else
    {
        this->m_pParent->OnChildNotify(this->m_nCtrlId, 300u, this->m_nCurPos);
    }
}

void CCtrlScrollBar::DoPrevNextBar(long delta)
{
    //__sub_000E9CB0(this, nullptr, delta);
    int v3 = this->m_nScrollRange / 16;
    if (v3 < 16)
        v3 = 16;
    int v4 = delta * v3;
    this->m_nCurPos += delta * v3;
    ValidatePosAndRange();
    InvalidateRect();
    if (v4 >= 0)
    {
        if (v4 > 0)
            m_pParent->OnChildNotify(this->m_nCtrlId, 303u, this->m_nCurPos);
    }
    else
    {
        m_pParent->OnChildNotify(this->m_nCtrlId, 302u, this->m_nCurPos);
    }
}

void CCtrlScrollBar::DoThumbStart(long rx, long ry)
{
    //__sub_000E99B0(this, nullptr, rx, ry);
    if (this->m_nScrollRange > 1)
    {
        this->m_thumbPos = this->m_nCurPos;
        this->m_thumbX = rx;
        this->m_thumbY = ry;
        InvalidateRect();
    }
}

void CCtrlScrollBar::DoThumbMove(long rx, long ry)
{
    //__sub_000E99E0(this, nullptr, rx, ry);

    if (this->m_nScrollRange > 1)
    {
        auto varDisp = m_hv ? ry - m_thumbY : rx - m_thumbX;
        int m_nCurPos = this->m_nCurPos;
        this->m_nCurPos = this->m_thumbPos
            + (int)((double)this->m_nScrollRange * (double)varDisp / (double)(this->m_length - 3 * this->m_grid));
        ValidatePosAndRange();
        InvalidateRect();
        if (this->m_nCurPos != m_nCurPos)
            this->m_pParent->OnChildNotify(this->m_nCtrlId, 304u, this->m_nCurPos);
    }
}

void CCtrlScrollBar::DoThumbEnd(long rx, long ry)
{
    //__sub_000E9A70(this, nullptr, rx, ry);
    if (this->m_nScrollRange > 1)
    {
        auto varDisp = m_hv ? ry - m_thumbY : rx - m_thumbX;
        auto oldCur = this->m_nCurPos;
        this->m_nCurPos = this->m_thumbPos
            + (int)((double)this->m_nScrollRange * (double)varDisp / (double)(this->m_length - 3 * this->m_grid));
        ValidatePosAndRange();
        InvalidateRect();
        if (this->m_nCurPos != oldCur)
            this->m_pParent->OnChildNotify(this->m_nCtrlId, 304u, this->m_nCurPos);
    }
}

void __cdecl CCtrlScrollBar::GetScrollBarBaseUOL(long hv, long type, ZXString16& sUOL)
{
    //__sub_000EA0F0(hv, type, sUOL);
    if (hv == 1)
    {
        sUOL = _GetStrW(0x51A);
    }
    else if (!hv)
    {
        sUOL = _GetStrW(0x519);
    }

    const wchar_t* append = nullptr;
    switch (type)
    {
    case 1:
        append = L"2";
        break;
    case 2:
        append = L"3";
        break;
    case 3:
        append = L"4";
        break;
    case 4:
        append = L"5";
        break;
    case 5:
        if (hv)
            append = L"6";
        break;
    case 6:
        if (hv)
            append = L"7";
        break;

    case 7:
        append = L"8";
        break;

    case 8:
        append = L"9";
        break;

    case 9:
        append = L"10";
        break;
    default:
        break;
    }

    if (!append)
        return;

    sUOL._Cat(append);
}

CCtrlScrollBar& CCtrlScrollBar::operator=(const CCtrlScrollBar& arg0)
{
    return _op_assign_34(this, arg0);
}

CCtrlScrollBar& CCtrlScrollBar::_op_assign_34(CCtrlScrollBar* pThis, const CCtrlScrollBar& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
