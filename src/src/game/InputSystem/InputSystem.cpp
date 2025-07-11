// InputSystem.cpp
#include "InputSystem.hpp"
#include "InputSystem_regen.ipp"

#define DIRECTINPUT_VERSION 0x0800

#include <dinput.h>

CInputSystem::~CInputSystem()
{
    Close();
    ms_pInstance = nullptr;
}

void CInputSystem::_dtor_0()
{
    this->~CInputSystem();
}

CInputSystem::CInputSystem(const CInputSystem& arg0)
{
    _ctor_1(arg0);
}

void CInputSystem::_ctor_1(const CInputSystem& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CInputSystem::CInputSystem()
{
    ms_pInstance = this;
    m_nCursorState = -1;
    // UNIMPLEMENTED; //_ctor_0();
}

void CInputSystem::_ctor_0()
{
    new(this) CInputSystem();
    // return __sub_005C5D60(this, nullptr);
}

void CInputSystem::Init(HWND__* hWnd, void** ahEvent)
{
    //__sub_00171A60(this, nullptr, hWnd, ahEvent);
    m_hWnd = hWnd;
    for (auto i = 0; i < 3; i++)
    {
        m_ahEvent[i] = CreateEventA(nullptr, 0, 0, nullptr);
        ahEvent[i] = m_ahEvent[i];
        if (!m_ahEvent[i])
        {
            auto err = GetLastError();
            _com_raise_error(
                err > 0 ? ((err & 0xffff) | 0x80070000) : err);
        }
    }

    auto hr = DirectInput8Create(GetModuleHandleA(nullptr), 0x800, IID_IDirectInput8, (void**)&m_pDI, nullptr);
    if (FAILED(hr))
    {
        _com_raise_error(hr);
    }

    m_aVk2Dik.fill(0);
    m_aDik2Vk.fill(0);
    const uint8_t data[208] =
    {
        0x30, 0x0b, 0x31, 0x02, 0x32, 0x03, 0x33, 0x04, 0x34, 0x05, 0x35, 0x06, 0x36, 0x07, 0x37, 0x08,
        0x38, 0x09, 0x39, 0x0a, 0x41, 0x1e, 0x42, 0x30, 0x43, 0x2e, 0x44, 0x20, 0x45, 0x12, 0x46, 0x21,
        0x47, 0x22, 0x48, 0x23, 0x49, 0x17, 0x4a, 0x24, 0x4b, 0x25, 0x4c, 0x26, 0x4d, 0x32, 0x4e, 0x31,
        0x4f, 0x18, 0x50, 0x19, 0x51, 0x10, 0x52, 0x13, 0x53, 0x1f, 0x54, 0x14, 0x55, 0x16, 0x56, 0x2f,
        0x57, 0x11, 0x58, 0x2d, 0x59, 0x15, 0x5a, 0x2c, 0x08, 0x0e, 0x09, 0x0f, 0x0d, 0x9c, 0x0d, 0x1c,
        0xa0, 0x2a, 0xa1, 0x36, 0xa2, 0x1d, 0xa3, 0x9d, 0xa4, 0x38, 0xa5, 0xb8, 0x14, 0x3a, 0x1b, 0x01,
        0x20, 0x39, 0x21, 0xc9, 0x22, 0xd1, 0x23, 0xcf, 0x24, 0xc7, 0x25, 0xcb, 0x26, 0xc8, 0x27, 0xcd,
        0x28, 0xd0, 0x2d, 0xd2, 0x2e, 0xd3, 0x5b, 0xdb, 0x5c, 0xdc, 0x5d, 0xdd, 0x60, 0x52, 0x61, 0x4f,
        0x62, 0x50, 0x63, 0x51, 0x64, 0x4b, 0x65, 0x4c, 0x66, 0x4d, 0x67, 0x47, 0x68, 0x48, 0x69, 0x49,
        0x6a, 0x37, 0x6b, 0x4e, 0x6d, 0x4a, 0x6e, 0x53, 0x6f, 0xb5, 0x70, 0x3b, 0x71, 0x3c, 0x72, 0x3d,
        0x73, 0x3e, 0x74, 0x3f, 0x75, 0x40, 0x76, 0x41, 0x77, 0x42, 0x78, 0x43, 0x79, 0x44, 0x7a, 0x57,
        0x7b, 0x58, 0x90, 0x45, 0x91, 0x46, 0xba, 0x27, 0xbb, 0x0d, 0xbc, 0x33, 0xbd, 0x0c, 0xbe, 0x34,
        0xbf, 0x35, 0xc0, 0x29, 0xdb, 0x1a, 0xdc, 0x2b, 0xdd, 0x1b, 0xde, 0x28, 0x2d, 0x00, 0x00, 0x00
    };

    for (size_t i = 0; i < 204; i += 2)
    {
        m_aVk2Dik[data[i]] = data[i + 1];
        m_aDik2Vk[data[i + 1]] = data[i];
    }
    m_bAcquireKeyboard = 0;

    m_pVectorCursor = G_PCOM.CreateObjectPtr<IWzVector2D>(L"Shape2D#Vector2D");
    auto gr = get_gr();

    IWzVector2D* pCenterVec = nullptr;
    gr->get_center(&pCenterVec); // TODO check return
    Ztl_variant_t vCenter((IUnknown*)pCenterVec);
    m_pVectorCursor->put_origin(vCenter); // TODO check return

    SetCursorVectorPos(m_MouseState.x, m_MouseState.y);
    m_MouseState = MOUSESTATE();

    auto w = get_screen_width();
    auto h = get_screen_height();
    m_MouseState.x = w / 2;
    m_MouseState.y = h / 2;

    LoadCursorState();
    SetCursorState(0);
    m_bSupportJoystick = 1;
    DetectJoystick();
}

void CInputSystem::Close()
{
    for (auto i = 0; i < 3; i++)
    {
        auto& dev = m_apDevice[i];
        if (dev)
        {
            dev->Unacquire();
            dev->Release();
            dev = nullptr;
        }

        auto& event = m_ahEvent[i];
        if (event)
        {
            CloseHandle(event);
            event = nullptr;
        }
    }

    if (m_pDI)
    {
        m_pDI->Release();
        m_pDI = nullptr;
    }

    m_pLayerCursor = nullptr;
    m_pVectorCursor = nullptr;
    //__sub_001703B0(this, nullptr);
}

void CInputSystem::OnActivate()
{
    // keyboard
    if (m_apDevice[0] && m_bAcquireKeyboard)
    {
        TryAcquireDevice(0);
    }
    // rest
    for (auto i = 1; i < 3; i++)
    {
        if (m_apDevice[i])
        {
            TryAcquireDevice(i);
        }
    }

    //__sub_001702C0(this, nullptr);
}

int32_t CInputSystem::TryAcquireDevice(int32_t nDeviceIndex)
{
    if (!m_apDevice[nDeviceIndex])
    {
        return 0;
    }

    if (nDeviceIndex == 0)
    {
        uint8_t data[256]{};
        if (!FAILED(m_apDevice[0]->GetDeviceState(0xFF, data)))
        {
            return 0;
        }

        auto wndMan = CWndMan::GetInstance();
        if (wndMan)
        {
            wndMan->NotifyIME(0x15, 1, 0);
        }

        m_nVkLastKeyDown = 0;
        m_tLastKeyDown = 0;
        m_aKeyState.fill(0);

        auto numLock = GetAsyncKeyState(VK_NUMLOCK) & 1;
        auto scroll = GetAsyncKeyState(VK_SCROLL) & 1;
        auto capital = GetAsyncKeyState(VK_CAPITAL) & 1;
        m_dwToggleKey = (capital | numLock << 1 | scroll << 2) << 28;

        if (!SystemParametersInfoA(SPI_GETKEYBOARDDELAY, 0, &m_tKeyboardDelay, 0))
        {
            m_tKeyboardDelay = 3;
        }
        m_tKeyboardDelay = std::clamp<long>((m_tKeyboardDelay + 1) * 250, 250, 1000);

        if (!SystemParametersInfoA(SPI_GETKEYBOARDSPEED, 0, &m_tKeyboardSpeed, 0))
        {
            m_tKeyboardSpeed = 0;
        }
        m_tKeyboardSpeed = std::clamp<long>(400 - m_tKeyboardSpeed * 12, 33, 400);
    }
    else if (nDeviceIndex == 2)
    {
        _DIMOUSESTATE2 state{};
        if (!FAILED(m_apDevice[2]->GetDeviceState(sizeof(_DIMOUSESTATE2), &state)))
        {
            return 0;
        }

        SetCursorPos(m_MouseState.x, m_MouseState.y);
        m_nDoubleClkTime = GetDoubleClickTime();
        m_nCxDoubleClk = GetSystemMetrics(SM_CXDOUBLECLK);
        m_nCyDoubleClk = GetSystemMetrics(SM_CYDOUBLECLK);
        m_bSwapButton = GetSystemMetrics(SM_SWAPBUTTON);
    }

    for (auto i = 0; i < m_apDevice.size(); i++)
    {
        if (m_apDevice[i] && SUCCEEDED(m_apDevice[i]->Acquire()))
        {
            if (i == 0)
            {
                UpdateKeyboard(0);
            }
        }
        Sleep(100);
    }

    return 0;

    // return __sub_00170030(this, nullptr, nDeviceIndex);
}

void CInputSystem::UpdateDevice(int32_t nDeviceIndex)
{
    switch (nDeviceIndex)
    {
    case 0:
        UpdateKeyboard(1);
        break;
    case 1:
        UpdateMouse();
        break;
    case 2:
        UpdateJoystick();
        break;
    default:
        break;
    }
}

int32_t CInputSystem::GetISMessage(ISMSG* pISMsg)
{
    if (m_lISMsg.IsEmpty())
    {
        return 0;
    }

    *pISMsg = *m_lISMsg.GetHeadPosition();
    m_lISMsg.RemoveHead();
    return 1;
    // return __sub_001708F0(this, nullptr, pISMsg);
}

void CInputSystem::SetAcquireKeyboard(int32_t bAcquire)
{
    auto p = this->m_apDevice[0];
    if (!p || bAcquire == m_bAcquireKeyboard)
    {
        return;
    }
    this->m_bAcquireKeyboard = bAcquire;
    if (bAcquire)
    {
        TryAcquireDevice(0);
    }
    else
    {
        p->Unacquire();
    }
    //__sub_00170280(this, nullptr, bAcquire);
}

int32_t CInputSystem::IsKeyPressed(int32_t nVk)
{
    if (nVk > 0xff)
    {
        return 0;
    }

    auto mouseDev = m_apDevice[1];
    switch (nVk)
    {
    case VK_LBUTTON:
        return !mouseDev ? m_MouseState.bLBDown : GetAsyncKeyState(VK_LBUTTON) < 0;
    case VK_RBUTTON:
        return !mouseDev ? m_MouseState.bRBDown : GetAsyncKeyState(VK_RBUTTON) < 0;
    default:
        if (m_apDevice[0] && m_bAcquireKeyboard)
        {
            return m_aKeyState[nVk] != 0;
        }
        else
        {
            return GetAsyncKeyState(nVk) < 0;
        }
    }

    // return __sub_0016F7A0(this, nullptr, nVk);
}

unsigned long CInputSystem::GetSpecialKeyFlag()
{
    return __sub_0016F890(this, nullptr);
}

int32_t CInputSystem::GenerateAutoKeyDown(ISMSG* pISMsg)
{
    if (!m_apDevice[0] || !m_bAcquireKeyboard || !m_nVkLastKeyDown)
    {
        return 0;
    }

    auto t = timeGetTime();
    auto delay = m_nVkLastKeyDown >= 0 ? m_tKeyboardSpeed : m_tKeyboardDelay;
    if ((t - m_tLastKeyDown) < delay)
    {
        return 0;
    }

    m_nVkLastKeyDown = std::abs(m_nVkLastKeyDown);
    m_tLastKeyDown = t;
    pISMsg->message = WM_KEYDOWN;
    pISMsg->wParam = m_nVkLastKeyDown;
    auto state = m_aKeyState[m_nVkLastKeyDown];
    pISMsg->lParam = static_cast<long>(GetSpecialKeyFlag()) | ((state & 0x80) << 1 | (state & 0xffffff7f)) << 0x10;

    return 1;

    // TODO return __sub_0016F990(this, nullptr, pISMsg);
}

void CInputSystem::SetCursor(_x_com_ptr<IWzGr2DLayer>& newCursor) const
{
    if (!newCursor)
    {
        return;
    }

    newCursor->Putoverlay(vtMissing); //TODO vtEmpty
    newCursor->Putz(LONG_MAX);
    newCursor->Putcolor(0xffffffff);
    newCursor->Putorigin(Ztl_variant_t(m_pVectorCursor));
    //__sub_0016FDC0(this, nullptr, m_pLayerCursor);
}

void CInputSystem::SetCursorInChange(_x_com_ptr<IWzGr2DLayer>& m_pLayerCursor)
{
    //TODO correct?
    m_pCursorType[m_nCursorState] = m_pLayerCursor;
    //__sub_0016FDC0(this, nullptr, m_pLayerCursor);
}

void CInputSystem::ShowCursor(int32_t bShow)
{
    if (m_pLayerCursor)
    {
        m_pLayerCursor->put_color(bShow ? 0xffffffff : 0x00FFFFFF);
    }
    //__sub_0016FD60(this, nullptr, bShow);
}

int32_t CInputSystem::GetCursorPos(tagPOINT* lpPoint)
{
    if (m_apDevice[1])
    {
        *lpPoint = {m_MouseState.x, m_MouseState.y};
        return 1;
    }

    return ::GetCursorPos(lpPoint) && ScreenToClient(m_hWnd, lpPoint);
    // return __sub_0016F830(this, nullptr, lpPoint);
}

tagPOINT CInputSystem::GetCursorPotPt()
{
    tagPOINT pt{};
    GetCursorPos(&pt);
    return pt;
}

int32_t CInputSystem::SetCursorPos(long x, long y)
{
    long w = get_screen_width();
    long h = get_screen_height();

    tagPOINT pt{
        std::clamp<long>(x, 0, w - 1),
        std::clamp<long>(y, 0, h - 1)
    };


    if (m_apDevice[1])
    {
        m_MouseState.x = pt.x;
        m_MouseState.y = pt.y;
        SetCursorVectorPos(pt.x, pt.y);
        return 1;
    }
    else
    {
        SetCursorVectorPos(pt.x, pt.y);
        return ClientToScreen(m_hWnd, &pt) && ::SetCursorPos(pt.x, pt.y);
    }
    // return __sub_0016FF80(this, nullptr, x, y);
}

void CInputSystem::SetMouseSpeed(long speed)
{
    m_nMouseSpeed = speed;
}

void CInputSystem::SetCursorVectorPos(long x, long y)
{
    auto h = get_screen_height();
    auto w = get_screen_width();

    auto nY = y - (h / 2) - get_adjust_cy();
    auto nX = x - w / 2;
    m_pVectorCursor->RelMove(nX, nY, vtMissing, vtMissing);

    //__sub_0016FC00(this, nullptr, x, y);
}

void CInputSystem::SetCursorState(const long nCursorState)
{
    if (m_nCursorState == nCursorState)
    {
        return;
    }

    if (nCursorState == -1)
    {
        m_nCursorState = m_nLastCursorState;
    }
    else
    {
        if (m_nCursorState < 0 || m_nCursorState < 9)
        {
            m_nLastCursorState = m_nCursorState;
        }
        m_nCursorState = nCursorState;
    }

    auto ty = m_pCursorType[m_nCursorState];
    if (!ty)
    {
        return;
    }

    // Hide cursor
    ShowCursor(false);
    m_pLayerCursor = ty;
    SetCursor(m_pLayerCursor);

    auto count = m_pLayerCursor->Getcount();
    if (count > 1)
    {
        m_pLayerCursor->Animate(GA_REPEAT, vtMissing, vtMissing);
    }

    //__sub_00170440(this, nullptr, nCursorState);
}

void CInputSystem::LoadCursorState()
{
    auto anim = CAnimationDisplayer::GetInstance();
    auto uol = StringPool::GetInstance().GetStringW(2943);
    for (auto i = 0; i < 17; ++i)
    {
        auto uolFmt = ZXString16::FromFmt(uol.c_str(), i);
        m_pCursorType[i] = CAnimationDisplayer::LoadLayer(reinterpret_cast<const wchar_t*>(uolFmt.c_str()), false,
                                                          _x_com_ptr<IWzVector2D>(), 0,
                                                          0, _x_com_ptr<IWzGr2DLayer>(), 0, 255, 0);
        m_pCursorType[i]->Putoverlay(vtMissing);
        m_pCursorType[i]->Putz(0x7FFFFFFF);
        m_pCursorType[i]->Putcolor(0xFFFFFF);
        m_pCursorType[i]->PutOrigin(m_pVectorCursor);
    }
}

long CInputSystem::GetCursorState() const
{
    return m_nCursorState;
}

int32_t CInputSystem::IsCursorShown()
{
    // TODO: No module found for method
    // UNIMPLEMENTED;
    return m_pLayerCursor->Getcolor() == 0xFFFFFFFF;
}

int32_t CInputSystem::IsDIKeyboard()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CInputSystem::IsDIMouse()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CInputSystem::UpdateMouse()
{
    auto dev = m_apDevice[1];
    if (!dev)
    {
        return;
    }

    DIMOUSESTATE2 state{};
    if (FAILED(dev->GetDeviceState(sizeof(DIMOUSESTATE2), &state)))
    {
        TryAcquireDevice(1);
        return;
    }

    //__sub_00170BE0(this, nullptr);
}

void CInputSystem::UpdateKeyboard(int32_t bGenerateMessage)
{
    /*auto dev = m_apDevice[0];
    if(!dev || !m_bAcquireKeyboard) {
        return;
    }

    // Get keyboard state
    auto hr = dev->GetDeviceState(sizeof(m_aKeyState), m_aKeyState.data());*/

    __sub_00171050(this, nullptr, bGenerateMessage);
}

void CInputSystem::AddISMessage(uint32_t message, uint32_t wParam, long lParam)
{
    //__sub_00170BB0(this, nullptr, message, wParam, lParam);
    auto msg = m_lISMsg.AddTail();
    msg.message = message;
    msg.wParam = wParam;
    msg.lParam = lParam;
}

int32_t CInputSystem::IsJoystickEnabled()
{
    return m_apDevice[2] != nullptr;
}

int32_t CInputSystem::IsJoyBtnPressed(int32_t nBtn)
{
    if (nBtn > 15 || !m_bSupportJoystick)
    {
        return 0;
    }
    return m_aJoyBtnState[nBtn];

    // return __sub_0016FA90(this, nullptr, nBtn);
}

int32_t CInputSystem::GenerateAutoBtnDown(ISMSG* pISMsg)
{
    auto dev = m_apDevice[2];
    if (!dev || !m_bSupportJoystick || !m_nLastJoyBtnDown)
    {
        return 0;
    }

    auto t = timeGetTime();
    auto delay = m_nLastJoyBtnDown >= 0 ? m_tKeyboardSpeed : m_tKeyboardDelay;
    if ((t - m_tLastJoyBtnDown) < delay)
    {
        return 0;
    }

    if (m_nLastJoyBtnDown < 0)
    {
        m_nLastJoyBtnDown = -m_nLastJoyBtnDown;
    }

    m_tLastJoyBtnDown = static_cast<long>(t);
    pISMsg->message = 0x500;
    pISMsg->wParam = m_nLastJoyBtnDown;
    pISMsg->lParam = 0;
    return 1;

    // return __sub_0016FAC0(this, nullptr, pISMsg);
}

ZXString<char> CInputSystem::GetJoystickName()
{
    return m_sJoystickName;
}

void CInputSystem::SetJoystickName(ZXString<char> sName)
{
    m_sJoystickName = sName;
    //__sub_001709E0(this, nullptr, CreateNakedParam(sName));
}

void CInputSystem::IncJoyBtnCount()
{
    m_nJoyBtnNum++;
}

long CInputSystem::GetJoyBtnNum()
{
    return m_nJoyBtnNum;
}

void CInputSystem::DetectJoystick()
{
    m_tLastDetectJoystick = get_update_time();
    if (!m_bSupportJoystick)
    {
        return;
    }

    auto dev = m_apDevice[2];
    auto hr = 0;
    if (dev)
    {
        DIJOYSTATE state{};
        hr = dev->GetDeviceState(sizeof(DIJOYSTATE), &state);
    }

    if (!dev || hr < 0)
    {
        ResetJoystickData();
        DestroyJoystickDevice();
        if (InitJoystickDevice() < 0)
        {
            DestroyJoystickDevice();
        }
    }
    //__sub_00171740(this, nullptr);
}

void CInputSystem::Update(long tCur)
{
    if ((tCur - this->m_tLastDetectJoystick) >= 5000)
    {
        DetectJoystick();
    }
}

void CInputSystem::ResetJoystickData()
{
    m_nJoyBtnNum = 0;
    m_aJoyBtnState.fill(0);
    m_sJoystickName = "";
}

int32_t CInputSystem::InitJoystickDevice()
{
    m_nJoyBtnNum = 0;
    if (FAILED(m_pDI->EnumDevices(DI8DEVCLASS_GAMECTRL, EnumJoysticksCallback, nullptr, DIEDFL_ATTACHEDONLY)))
    {
        return 0;
    }

    auto dev = m_apDevice[2];
    if (!dev)
    {
        return 0;
    }
    if (FAILED(dev->SetDataFormat(&c_dfDIJoystick2)))
    {
        return 0;
    }

    if (FAILED(dev->SetCooperativeLevel(m_hWnd, DISCL_FOREGROUND | DISCL_EXCLUSIVE)))
    {
        return 0;
    }

    if (FAILED(dev->EnumObjects(EnumObjectsCallback, nullptr, DIDFT_ALL)))
    {
        return 0;
    }

    if (FAILED(dev->SetEventNotification(m_ahEvent[2])))
    {
        return 0;
    }

    DIPROPDWORD propBuf{
        .diph = {
            .dwSize = sizeof(DIPROPDWORD),
            .dwHeaderSize = sizeof(DIPROPHEADER),
            .dwObj = 0,
            .dwHow = DIPH_DEVICE,
        },
        .dwData = 0x10,
    };
    if (FAILED(dev->SetProperty(DIPROP_BUFFERSIZE, &propBuf.diph)))
    {
        return 0;
    }

    while (dev->Acquire() == ERROR_READ_FAULT)
    {
    }
    return 1;
    // return __sub_001712E0(this, nullptr);
}

void CInputSystem::DestroyJoystickDevice()
{
    //__sub_0016FA50(this, nullptr);
    auto dev = m_apDevice[2];
    if (dev)
    {
        dev->Unacquire();
        dev->Release();
        m_apDevice[2] = nullptr;
    }
}

void CInputSystem::UpdateJoystick()
{
    __sub_001713E0(this, nullptr);
}

int32_t __stdcall CInputSystem::EnumJoysticksCallback(const DIDEVICEINSTANCEA* pdidInstance, void* pContext)
{
    auto inp = CInputSystem::GetInstance();
    auto hr = inp->m_pDI->CreateDevice(pdidInstance->guidInstance, &inp->m_apDevice[2], nullptr);
    if (FAILED(hr))
    {
        return 1;
    }

    inp->SetJoystickName(ZXString<char>(pdidInstance->tszProductName));
    return 0;
    // return __sub_00170A50(pdidInstance, pContext);
}

int32_t __stdcall CInputSystem::EnumObjectsCallback(const DIDEVICEOBJECTINSTANCEA* pdidoi, void* pContext)
{
    auto ty = pdidoi->dwType;
    auto inp = CInputSystem::GetInstance();
    if (ty & 0x3)
    {
        DIPROPRANGE hdr{
            .diph = {
                .dwSize = sizeof(DIPROPRANGE),
                .dwHeaderSize = sizeof(DIPROPHEADER),
                .dwObj = ty,
                .dwHow = DIPH_BYID,
            },
            .lMin = -1000,
            .lMax = 1000,
        };
        if (FAILED(inp->m_apDevice[2]->SetProperty(DIPROP_RANGE, &hdr.diph)))
        {
            return 1;
        }
    }
    else if (ty & 0xc)
    {
        inp->m_nJoyBtnNum++;
    }
    return 1;

    // return __sub_0016FB50(pdidoi, pContext);
}

CInputSystem& CInputSystem::operator=(const CInputSystem& arg0)
{
    return _op_assign_44(this, arg0);
}

CInputSystem& CInputSystem::_op_assign_44(CInputSystem* pThis, const CInputSystem& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ISMSG::ISMSG(const ISMSG& arg0)
{
    this->message = arg0.message;
    this->wParam = arg0.wParam;
    this->lParam = arg0.lParam;
}

ISMSG& ISMSG::operator=(const ISMSG& arg0)
{
    if (this == &arg0)
    {
        return *this;
    }
    this->message = arg0.message;
    this->wParam = arg0.wParam;
    this->lParam = arg0.lParam;
    return *this;
}
