// InputSystem.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"

struct IDirectInput8A;
struct IDirectInputDevice8A;
struct DIDEVICEINSTANCEA;
struct DIDEVICEOBJECTINSTANCEA;

struct ISMSG
{

public:
    uint32_t message{};
    uint32_t wParam{};
    long lParam{};

    ISMSG() = default;
    ISMSG(const ISMSG &arg0);
    ISMSG &operator=(const ISMSG &arg0);
    // Methods
};
STATIC_ASSERT_SIZE(ISMSG, 12);

// Level: 1 0xa569
class CInputSystem;

class CInputSystem : public TSingleton<CInputSystem>
{
    // Nested
public:
    struct MOUSESTATE
    {
        // Nested
        // Fields
    public:
        long x{};

    public:
        long y{};

    public:
        int32_t bLBDown{};

    public:
        int32_t bRBDown{};

    public:
        long tLBDown{};

    public:
        long tRBDown{};

    public:
        tagPOINT ptLBDown{};

    public:
        tagPOINT ptRBDown{};

    public:
        long nWheel{};
        // Methods
    };

public:
    enum kJoystick_Range_
    {
        kJoystick_Range_Max = 1000,
        kJoystick_Range_Min = -1000,
        kJoystick_Range_ValidAbs = 700
    };
    // Fields
private:
    HWND__ *m_hWnd{};

private:
    IDirectInput8A *m_pDI{};

private:
    std::array<IDirectInputDevice8A *, 3> m_apDevice{};

private:
    std::array<HANDLE, 3> m_ahEvent{};

private:
    int32_t m_bAcquireKeyboard{};

private:
    std::array<int32_t, 256> m_aVk2Dik{};

private:
    std::array<int32_t, 256> m_aDik2Vk{};

private:
    std::array<unsigned char, 256> m_aKeyState{};

private:
    long m_tLastKeyDown{};

private:
    long m_nVkLastKeyDown{};

private:
    unsigned long m_dwToggleKey{};

private:
    long m_tKeyboardDelay{};

private:
    long m_tKeyboardSpeed{};

private:
    CInputSystem::MOUSESTATE m_MouseState;

private:
    long m_nDoubleClkTime{};

private:
    long m_nCxDoubleClk{};

private:
    long m_nCyDoubleClk{};

private:
    long m_nMouseSpeed{};

private:
    int32_t m_bSwapButton{};

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerCursor;

private:
    std::array<_x_com_ptr<IWzGr2DLayer>, 17> m_pCursorType{};

private:
    _x_com_ptr<IWzVector2D> m_pVectorCursor;

private:
    long m_nCursorState{-1};

private:
    long m_nLastCursorState{};

private:
    ZList<ISMSG> m_lISMsg;

private:
    int32_t m_bSupportJoystick{};

private:
    long m_nJoyX{};

private:
    long m_nJoyY{};

private:
    std::array<unsigned char, 16> m_aJoyBtnState{};

private:
    long m_tLastJoyBtnDown{};

private:
    long m_nLastJoyBtnDown{};

private:
    long m_tJoyBtnDelay{};

private:
    long m_tJoyBtnSpeed{};

private:
    long m_nJoyBtnNum{};

private:
    ZXString<char> m_sJoystickName;

private:
    long m_tLastDetectJoystick{};
    // Methods
public:
    ~CInputSystem();

public:
    void _dtor_0();

public:
    CInputSystem(const CInputSystem &arg0);

public:
    void _ctor_1(const CInputSystem &arg0);

public:
    CInputSystem();

public:
    void _ctor_0();

public:
    void Init(HWND__ *hWnd, void **ahEvent);

public:
    void Close();

public:
    void OnActivate();

public:
    int32_t TryAcquireDevice(int32_t nDeviceIndex);

public:
    void UpdateDevice(int32_t nDeviceIndex);

public:
    int32_t GetISMessage(ISMSG *pISMsg);

public:
    void SetAcquireKeyboard(int32_t bAcquire);

public:
    int32_t IsKeyPressed(int32_t nVk);

public:
    unsigned long GetSpecialKeyFlag();

public:
    int32_t GenerateAutoKeyDown(ISMSG *pISMsg);

public:
    void SetCursor(_x_com_ptr<IWzGr2DLayer> &m_pLayerCursor) const;

public:
    void SetCursorInChange(_x_com_ptr<IWzGr2DLayer> &m_pLayerCursor);

public:
    void ShowCursor(int32_t bShow);

public:
    int32_t GetCursorPos(tagPOINT *lpPoint);
    tagPOINT GetCursorPotPt();

public:
    int32_t SetCursorPos(long x, long y);

public:
    void SetMouseSpeed(long tCur);

public:
    void SetCursorVectorPos(long x, long y);

public:
    void SetCursorState(const long nCursorState);

public:
    void LoadCursorState();

public:
    long GetCursorState() const;

public:
    int32_t IsCursorShown();

public:
    int32_t IsDIKeyboard();

public:
    int32_t IsDIMouse();

private:
    void UpdateMouse();

private:
    void UpdateKeyboard(int32_t bGenerateMessage);

private:
    void AddISMessage(uint32_t message, uint32_t wParam, long lParam);

public:
    int32_t IsJoystickEnabled();

public:
    int32_t IsJoyBtnPressed(int32_t nBtn);

public:
    int32_t GenerateAutoBtnDown(ISMSG *pISMsg);

public:
    ZXString<char> GetJoystickName();

public:
    void SetJoystickName(ZXString<char> sName);

public:
    void IncJoyBtnCount();

public:
    long GetJoyBtnNum();

public:
    void DetectJoystick();

public:
    void Update(long tCur);

private:
    void ResetJoystickData();

private:
    int32_t InitJoystickDevice();

private:
    void DestroyJoystickDevice();

private:
    void UpdateJoystick();

private:
    static int32_t __stdcall EnumJoysticksCallback(const DIDEVICEINSTANCEA *pdidInstance, void *pContext);

private:
    static int32_t __stdcall EnumObjectsCallback(const DIDEVICEOBJECTINSTANCEA *pdidoi, void *pContext);

public:
    CInputSystem &operator=(const CInputSystem &arg0);

public:
    static CInputSystem &_op_assign_44(CInputSystem *pThis, const CInputSystem &arg0);

    friend class CWndMan;
};

STATIC_ASSERT_SIZE(CInputSystem, 2584);
