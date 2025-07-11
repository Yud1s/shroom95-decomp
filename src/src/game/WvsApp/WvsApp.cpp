// WvsApp.cpp
#include "WvsApp.hpp"

#include "WvsExtra.h"
#include "opcodes.h"
#include "MonsterBookMan/MonsterBookMan.hpp"
#include "Stage/Stage.hpp"
#include "Login/Login.hpp"

#include "ClientConfig.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZMap<ZXString16, ZXString16, ZXString16> FAKE_ZMapStr16{};

static ZRefCounted_AllocHelper<ZRefCountedDummy<MonsterBookStr>>
FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_MonsterBookStr{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<MonsterBookCard>>
FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_MonsterBookCard{};

_x_com_ptr<IWzResMan> _D_G_RM{};
_x_com_ptr<IWzGr2D> _D_G_GR{};
_x_com_ptr<IWzSound> _D_G_SOUND{};
_x_com_ptr<IWzNameSpace> _D_G_ROOT{};
std::array<_x_com_ptr<IWzNameSpace>, 0xf> _D_G_SUB{};

void throwTerminateException(HRESULT hres)
{
    UNIMPLEMENTED;
    // TODO
}

#include "WvsApp_regen.ipp"
#include "Crc32/Crc32.hpp"

CMonsterBookMan::~CMonsterBookMan()
{
}

void CMonsterBookMan::_dtor_0()
{
    return __sub_005CA450(this, nullptr);
}

CMonsterBookMan::CMonsterBookMan(const CMonsterBookMan& arg0)
{
    _ctor_1(arg0);
}

void CMonsterBookMan::_ctor_1(const CMonsterBookMan& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMonsterBookMan::CMonsterBookMan()
{
    //UNIMPLEMENTED; //_ctor_0();
}

void CMonsterBookMan::_ctor_0()
{
    return __sub_005CA340(this, nullptr);
}

int32_t CMonsterBookMan::LoadBook()
{
    return __sub_00264C10(this, nullptr);
}

ZRef<MonsterBookCard> CMonsterBookMan::GetCard_(const ZXString<char>& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZRef<MonsterBookCard> CMonsterBookMan::GetCard_(long arg0, long arg1) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZRef<MonsterBookCard> CMonsterBookMan::GetCard(long nCardID)
{
    //TODO verify nullptr
    return *m_mCard.GetAt(nCardID, nullptr);
    //return __sub_00262930(this, nullptr, nCardID);
}

uint16_t CMonsterBookMan::GetID(uint16_t arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint16_t CMonsterBookMan::GetIndex(uint16_t arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint16_t CMonsterBookMan::GetSize() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMonsterBookMan::LoadCard()
{
    return __sub_002634B0(this, nullptr);
}

ZRef<MonsterBookStr> CMonsterBookMan::GetString(long nCardID)
{
    //return __sub_00262990(this, nullptr, nCardID);
    //TODO verify nullptr
    return *this->m_mStr.GetAt(nCardID, nullptr);
}

_x_com_ptr<IWzCanvas> CMonsterBookMan::GetBookIcon(long arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMonsterBookMan::LoadStringA()
{
    return __sub_00263E30(this, nullptr);
}

int32_t CMonsterBookMan::LoadBookIcon()
{
    return __sub_00262E70(this, nullptr);
}

CMonsterBookMan& CMonsterBookMan::operator=(const CMonsterBookMan& arg0)
{
    return _op_assign_15(this, arg0);
}

CMonsterBookMan& CMonsterBookMan::_op_assign_15(CMonsterBookMan* pThis, const CMonsterBookMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsApp::~CWvsApp()
{
    //TODO UNIMPLEMENTED; // _dtor_0();
}

void CWvsApp::_dtor_0()
{
    return __sub_005CA550(this, nullptr);
}

CWvsApp::CWvsApp(const CWvsApp& arg0)
{
    _ctor_1(arg0);
}

void CWvsApp::_ctor_1(const CWvsApp& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsApp::CWvsApp(const char* sCmdLine)
{
    ms_pInstance = this;
    //_ctor_0( sCmdLine);
    m_bFirstUpdate = 1;
    m_bAutoConnect = 1;
    m_bEnabledDX9 = true;
    m_bWindowActive = 1;
    m_nGameStartMode = GSM_::GSM_GAME;
    m_sCmdLine = sCmdLine;
    m_sCmdLine.Trim();
    m_pBackupBuffer = ZArray<uint8_t>(0x1000);


    OSVERSIONINFOA version{};
    // ReSharper disable once CppDeprecatedEntity
    GetVersionExA(&version);


    m_bWin9x = version.dwPlatformId == 1;
    if (version.dwMajorVersion >= 6 && !m_nGameStartMode)
    {
        m_nGameStartMode = GSM_::GSM_GAME;
    }


    auto is64 = FALSE;
    IsWow64Process(GetCurrentProcess(), &is64);

    if (version.dwMajorVersion < 5 || is64)
    {
        _D_G_DWTARGETOS = 1996;
    }

    if (version.dwMajorVersion >= 6 && !is64)
    {
        //TODO weird winsock reset
        //ResetLSP();
    }


    SetClearStackLog(is64 << 8 + m_nOSVersion << 12);
    m_nOSVersion = static_cast<long>(version.dwMajorVersion);
    m_nOSMinorVersion = static_cast<long>(version.dwMinorVersion);
    m_nOSBuildNumber = static_cast<long>(version.dwBuildNumber);
    m_sCSDVersion = version.szCSDVersion;
    m_b64BitInfo = is64;
    // TODO init backup buffer 0x1000
}

void CWvsApp::_ctor_0(const char* sCmdLine)
{
    //return __sub_005CA8A0(this, nullptr, sCmdLine);
    new(this) CWvsApp(sCmdLine);
}

void CWvsApp::SetUp()
{
    InitializeAuth();
    _srand(timeGetTime());

    CSecurityClient::CreateInstance();
    const auto cfg = CConfig::CreateInstance();
    InitializePCOM();
    CreateMainWindow();

    MSLoop_Remove();
    CClientSocket::CreateInstance();
    ConnectLogin();
    CFuncKeyMappedMan::CreateInstance();
    CQuickslotKeyMappedMan::CreateInstance();
    CMacroSysMan::CreateInstance();
    CBattleRecordMan::CreateInstance();

    InitializeResMan();

    InitializeGr2D();
    InitializeInput();
    ShowWindow(m_hWnd, SW_SHOW);
    UpdateWindow(m_hWnd);
    get_gr()->RenderFrame();

    InitializeSound();

    InitializeGameData();
    const auto questMan = CQuestMan::CreateInstance();
    questMan->LoadDemand();
    questMan->LoadPartyQuestInfo();
    questMan->LoadExclusive();
    CMonsterBookMan::CreateInstance()->LoadBook();

    CreateWndManager();

    cfg->ApplySysOpt(nullptr, 0);
    const auto actionMan = CActionMan::CreateInstance();
    actionMan->Init();
    CAnimationDisplayer::CreateInstance();
    CMapleTVMan::CreateInstance()->Init();
    CRadioManager::CreateInstance();

    char buf[MAX_PATH]{};
    GetModuleFileNameA(nullptr, buf, MAX_PATH);
    Dir_BackSlashToSlash(buf);
    Dir_upDir(buf);
    Dir_SlashToBackSlash(buf);
    cfg->CheckExecPathReg(ZXString(buf));

    const auto logo = new CLogin();
    set_stage(logo, nullptr);

    CCrc32::Init();
    //__sub_005CAFB0(this, nullptr);
}

void CWvsApp::Run(const int32_t* pbTerminate)
{
    if (auto sock = CClientSocket::ms_pInstance)
    {
        sock->ManipulatePacket();
    }

    tagMSG msg{};
    ISMSG isMsg{};
    const auto inpSys = CInputSystem::GetInstance();
    HRESULT hr{};
    while (msg.message != WM_QUIT && *pbTerminate == 0)
    {
        const auto devIx = MsgWaitForMultipleObjects(3, m_ahInput.data(), false, 0, 0xFF);
        switch (devIx)
        {
        // Input system update
        case WAIT_OBJECT_0:
        case WAIT_OBJECT_0 + 1:
        case WAIT_OBJECT_0 + 2:
            inpSys->UpdateDevice(static_cast<int>(devIx));
            while (*pbTerminate == 0 && inpSys->GetISMessage(&isMsg))
            {
                ISMsgProc(isMsg.message, isMsg.wParam, isMsg.lParam);
            }
            break;
        // Window message
        case WAIT_OBJECT_0 + 3:
            while (*pbTerminate == 0 && PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE))
            {
                TranslateMessage(&msg);
                DispatchMessageA(&msg);

                if (ExtractComErrorCode(hr))
                {
                    _com_raise_error(hr);
                }
                if (ExtractZExceptionCode(hr))
                {
                    if (hr == 0x20000000)
                    {
                        UNIMPLEMENTED; // TODO Patch exception
                    }
                    if (hr >= 0x21000000 && hr <= 0x21000006)
                    {
                        UNIMPLEMENTED; // TODO Disconnect Exception
                    }
                    if (hr >= 0x22000000 && hr <= 0x2200000e)
                    {
                        UNIMPLEMENTED; // TODO Temrinate exception
                    }
                    UNIMPLEMENTED; //TODO ZException
                }

                if (msg.message == WM_QUIT)
                {
                    break;
                }
            }
        default:
            if (inpSys->GenerateAutoKeyDown(&isMsg))
            {
                ISMsgProc(isMsg.message, isMsg.wParam, isMsg.lParam);
            }
            if (inpSys->GenerateAutoBtnDown(&isMsg))
            {
                ISMsgProc(isMsg.message, isMsg.wParam, isMsg.lParam);
            }
        //TODO CSecurityClient::GetInstance();
            if (const auto gr = get_gr())
            {
                CallUpdate(gr->GetnextRenderTime());
                CWndMan::RedrawInvalidatedWindows();
                Z_CHECK_HR(gr->RenderFrame());
            }

            Sleep(1);
            break;
        }
    }
    if (msg.message == WM_QUIT)
    {
        PostQuitMessage(0);
    }

    const auto cfg = CConfig::GetInstance();
    COutPacket pkt(Cp::Updatescreensetting);
    pkt.Encode1(cfg->m_sysOpt.bSysOpt_LargeScreen);
    pkt.Encode1(cfg->m_sysOpt.bSysOpt_WindowedMode);
    SendPacket(pkt);
    //__sub_005C5F00(this, nullptr, pbTerminate);
}

void CWvsApp::CleanUp()
{
    //__sub_005C9120(this, nullptr);
    CSequencedKeyMan::DestroyInstance();
    if (get_stage())
    {
        set_stage(nullptr, nullptr);
    }

    CFuncKeyMappedMan::DestroyInstance();
    CQuickslotKeyMappedMan::DestroyInstance();
    CMacroSysMan::DestroyInstance();
    CBattleRecordMan::DestroyInstance();

    if (CClientSocket::IsInstantiated())
    {
        const auto sck = CClientSocket::GetInstance();
        if (sck->WasGuestIDLogin())
        {
            ResetShowAdBalloon();
            auto registerUrl = sck->GetGuestIDRegistrationURL();
            //TODO open_web_site(registerUrl.c_str(), nullptr);
        }

        sck->Close();
        CClientSocket::DestroyInstance();
    }

    CMobTemplate::Unload();
    CNpcTemplate::Unload();
    CPetTemplate::Unload();
    CReactorTemplate::Unload();
    CEmployeeTemplate::Unload();


    if (const auto inp = CInputSystem::GetInstance())
    {
        inp->Close();
        CInputSystem::DestroyInstance();
    }

    //TODO sound
    /*CRadioManager::DestroyInstance();
    if (const auto sound = CSoundMan::GetInstance())
    {
        sound->Term();
        CSoundMan::DestroyInstance();
    }*/

    Sleep(100);
    clear_basic_font();
    //TODO Actionman CHARACTERIMGENTRY dtor CActionMan::DestroyInstance();
    CQuestMan::DestroyInstance();
    CMonsterBookMan::DestroyInstance();
    CAnimationDisplayer::DestroyInstance();
    CItemInfo::DestroyInstance();
    CItemOptionInfo::DestroyInstance();
    CItemMakerInfo::DestroyInstance();
    CSkillInfo::DestroyInstance();
    CMapleTVMan::DestroyInstance();
    CCakePieEvent::DestroyInstance();
    CStageSystem::DestroyInstance();

    if (const auto wndMan = CWndMan::GetInstance())
    {
        wndMan->DestroyAll();
    }

    if (auto gr = get_gr())
    {
        Z_CHECK_HR(gr->raw_Uninitialize());
        gr = 0;
    }
    Sleep(100);

    CWvsContext::GetInstance()->ReleaseCommodityRes();

    if (auto rm = get_rm())
    {
        rm = 0;
    }

    for (auto i = 0; i < 15; ++i)
    {
        if (auto sub = get_sub(i))
        {
            sub = 0;
        }
    }

    if (const auto wnd = m_hWnd)
    {
        ShowWindow(wnd, SW_HIDE);
        DestroyWindow(wnd);
        UnregisterClassW(L"MapleStoryClass", GetModuleHandle(nullptr));
        m_hWnd = nullptr;
    }

    /*
        //TODO safe deinit
        if (m_bPCOMInitialized)
        {
            PCom::Uninitialize();
            m_bPCOMInitialized = 0;
        }
        */

    //TODO DR_uninit();

    CSecurityClient::DestroyInstance();
    //TODO DeleteNstSafeDll()


    //TODO(nmco)

    /*
        auto nmco = CNMCOClientObject::GetInstance();
        if (GetGameStartMode() == GSM::WEB)
        {
            nmco->DetachAuth();
        }
        else
        {
            nmco->LogoutAuth();
        }


        CNMManager::GetInstance()->Finalize();*/
}

void CWvsApp::ConnectLogin()
{
    //return; // TODO
    //__sub_005C1B30(this, nullptr);
    auto sck = CClientSocket::GetInstance();
    sck->Close();
    sck->ConnectLogin();

    MSG msg{};
    while (msg.message != WM_QUIT)
    {
        constexpr auto MSG_SOCKET = 0x401;
        const auto res = PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE);
        if (res && msg.message != MSG_SOCKET)
        {
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }

        if (!res || msg.message != MSG_SOCKET)
        {
            if (sck->IsTimeout())
            {
                sck->OnConnect(0);
            }
            continue;
        }

        if (msg.wParam != sck->GetHandle())
        {
            continue;
        }

        auto err = msg.lParam >> 16;
        if (err == WSAENOTSOCK)
        {
            sck->OnConnect(0);
            continue;
        }

        if (err)
        {
            continue;
        }

        if (const auto fd = msg.lParam & 0xFFFF; fd != FD_CONNECT && fd != FD_READ)
        {
            sck->OnConnect(0);
        }
        if (sck->OnConnect(1))
        {
            break;
        }
    }

    if (sck->GetHandle() != INVALID_SOCKET && sck->GetHandle())
    {
        return;
    }
}

HWND__* CWvsApp::GetMainWindow() const
{
    return m_hWnd;
}

unsigned long CWvsApp::GetMainThreadId() const
{
    return m_dwMainThreadId;
}

void CWvsApp::SetZExceptionCode(HRESULT arg0)
{
    m_hrZExceptionCode = arg0;
}

void CWvsApp::SetComErrorCode(HRESULT arg0)
{
    m_hrComErrorCode = arg0;
}

void CWvsApp::SetSecurityErrorCode(unsigned long dwLog)
{
    m_dwSecurityErrorCode = dwLog;
}

void CWvsApp::SetPatchExceptionInfo(long version)
{
    m_nTargetVersion = version;
    // TODO __sub_005C5360(this, nullptr, tCurTime);
}

int32_t CWvsApp::ExtractZExceptionCode(HRESULT& hr)
{
    if (!m_hrZExceptionCode)
    {
        return 0;
    }

    hr = m_hrZExceptionCode;
    m_hrZExceptionCode = 0;
    return 1;
}

int32_t CWvsApp::ExtractComErrorCode(HRESULT& hr)
{
    if (!m_hrComErrorCode)
    {
        return 0;
    }

    hr = m_hrComErrorCode;
    m_hrComErrorCode = 0;
    return 1;
}

long CWvsApp::GetTimeGap() const
{
    auto t = get_gr()->Getcurrenttime();
    // TODO check gr != null
    return m_tUpdateTime - t;
}

long CWvsApp::GetUpdateTime() const
{
    return m_tUpdateTime;
}

void CWvsApp::CallUpdate(long tCurTime)
{
    // TODO global
    if (m_bFirstUpdate)
    {
        m_bFirstUpdate = 0;
        m_tUpdateTime = tCurTime;
        m_tLastServerIPCheck = tCurTime;
        m_tLastServerIPCheck2 = tCurTime;
        m_tLastGGHookingAPICheck = tCurTime;
        m_tLastSecurityCheck = tCurTime;
    }

    // TODO check
    const auto gr = get_gr();

    while ((tCurTime - m_tUpdateTime) > 0)
    {
        constexpr long TIME_STEP = 0x1E;
        if (auto stage = get_stage())
        {
            stage->Update();
        }

        CWndMan::s_Update();
        m_tUpdateTime += TIME_STEP;
        if ((tCurTime - this->m_tUpdateTime) > 0)
        {
            Z_CHECK_HR(gr->UpdateCurrentTime(this->m_tUpdateTime));
        }
    }

    Z_CHECK_HR(gr->UpdateCurrentTime(tCurTime));
    CActionMan::GetInstance()->SweepCache();

    //__sub_005C5360(this, nullptr, tCurTime);
}

ZXString<char> CWvsApp::GetCmdLine(int32_t nArg)
{
    ZXString<char> ret;
    return *__sub_005CA600(this, nullptr, &ret, nArg);
}

CWvsApp::GSM CWvsApp::GetGameStartMode() const
{
    return static_cast<CWvsApp::GSM>(m_nGameStartMode);
}

int32_t CWvsApp::GetAutoConnect() const
{
    return m_bAutoConnect;
}

void CWvsApp::SetAutoConnect(int32_t bEnable)
{
    //__sub_005CC220(this, nullptr, bEnable);
    m_bAutoConnect = bEnable;
}

void CWvsApp::SetPatchInfo(uint16_t version)
{
    m_nTargetVersion = version;
}

long __stdcall CWvsApp::WindowProc(HWND__* hWnd, uint32_t msg, uint32_t wParam, long lParam)
{
    //return __sub_005CC2B0(hWnd, msg, wParam, lParam);
    auto app = CWvsApp::GetInstance();
    if (!app || InSendMessage())
    {
        return 0;
    }


    auto wndMan = CWndMan::GetInstance();
    long lResult;
    if (wndMan && wndMan->TranslateMessage(msg, wParam, lParam, &lResult))
    {
        return lResult;
    }

    auto v8 = 0;
    auto sck = CClientSocket::GetInstance();

    switch (msg)
    {
    case WM_SYSKEYDOWN:
        if (wParam == VK_F4)
        {
            return 0;
        }

        v8 = wParam & 0xFFF0;
        if (v8 == 0xF100)
            return 0;
        if (v8 == 0xF030)
        {
            get_gr()->PutfullScreen(true);
            auto cfg = CConfig::GetInstance();
            cfg->m_sysOpt.bSysOpt_WindowedMode = get_gr()->GetfullScreen();
            cfg->SaveGlobal();
            return 0;
        }
        if (wParam == 0xF060 && !CUILogoutGift::TryShowLogoutGiftDialog())
            return 0;

        break;
    case 0x401:
        if (sck && sck->GetHandle() == wParam)
        {
            auto stage = get_stage();
            if (auto err = HIWORD(lParam))
            {
                sck->OnError(err);
            }
            else
            {
                switch (LOWORD(lParam))
                {
                case 1:
                    sck->OnRead();
                    break;
                case 2:
                    sck->Flush();
                    break;
                case 16:
                    sck->OnConnect(true);
                    break;
                case 32:
                    sck->OnClose();
                    break;
                default:
                    break;
                }
            }
        }

        break;

    case WM_PAINT:
        ValidateRect(hWnd, nullptr);
        break;

    case WM_ACTIVATE:
        app->EnableWinKey(wParam == 0);

        if (!wParam)
        {
            if (auto& stage = get_stage())
            {
                if (auto cashShop = dynamic_cast<CCashShop*>(stage.op_arrow()))
                {
                    cashShop->TrySendQueryCashRequest();
                }
            }

            if (auto inp = CInputSystem::GetInstance())
            {
                inp->OnActivate();
            }

            if (auto local = CUserLocal::GetInstance())
            {
                if (local->IsKeyDownSkillUsing())
                    local->OnKeyDownSkillEnd();
            }
        }

        app->m_bWindowActive = wParam != 0;
        break;

    case 2:
        PostQuitMessage(0);
        return 0;

    case WM_SETCURSOR:
        SetCursor(nullptr);
        break;

    default:
        break;
    }
    return DefWindowProcA(hWnd, msg, wParam, lParam);
}

bool isKeyParam(uint32_t wParam)
{
    switch (wParam)
    {
    case WM_KEYDOWN:
    case WM_KEYUP:
    case WM_SYSKEYDOWN:
    case WM_SYSKEYUP:
        return true;
    default:
        return false;
    }
}

long __stdcall CWvsApp::LowLevelKeyboardProc(int32_t nCode, uint32_t wParam, long lParam)
{
    if (nCode == HC_ACTION)
    {
        if (isKeyParam(wParam))
        {
            if (lParam == VK_ESCAPE && GetAsyncKeyState(VK_CONTROL) < 0)
            {
                return 1;
            }
            if (lParam == VK_LWIN || lParam == VK_RWIN)
            {
                return 1;
            }
        }
    }

    return CallNextHookEx(nullptr, nCode, wParam, lParam);

    // return __sub_005CC1A0(nCode, wParam, lParam);
}

void CWvsApp::SetShowAdBalloon()
{
    m_bShowAdBalloon = 1;
}

void CWvsApp::ResetShowAdBalloon()
{
    //__sub_005C0890(this, nullptr);
    m_bShowAdBalloon = 0;
}

int32_t CWvsApp::GetShowAdBalloon() const
{
    return m_bShowAdBalloon;
}

int32_t CWvsApp::GetExitByTitleEscape() const
{
    return m_bExitByTitleEscape;
}

void CWvsApp::SetExitByTitleEscape(int32_t bEnable)
{
    m_bExitByTitleEscape = bEnable;
}

void CWvsApp::EnableWinKey(int32_t bEnable)
{
    //TODO(app) __sub_005CC220(this, nullptr, bEnable);
}

void __cdecl CWvsApp::Dir_BackSlashToSlash(char* sDir)
{
    auto n = strlen(sDir);
    for (auto i = 0; i < n; ++i)
    {
        if (sDir[i] == '\\')
        {
            sDir[i] = '/';
        }
    }
}

void __cdecl CWvsApp::Dir_SlashToBackSlash(char* sDir)
{
    auto n = strlen(sDir);
    for (auto i = 0; i < n; ++i)
    {
        if (sDir[i] == '/')
        {
            sDir[i] = '\\';
        }
    }
}

void __cdecl CWvsApp::Dir_upDir(char* sDir)
{
    const auto len = strlen(sDir);
    if (!len)
    {
        return;
    }

    for (auto i = 0; i < len; i++)
    {
        const auto cur = &sDir[len - i - 1];
        if (*cur == '/' || *cur == '\\')
        {
            *cur = 0;
            break;
        }
    }
}

void CWvsApp::SetClipboardText(const char* sText) const
{
    const auto n = lstrlenA(sText);
    const auto p = GlobalAlloc(GMEM_ZEROINIT | GMEM_MOVEABLE, n + 1);
    if (!p)
    {
        return;
    }

    if (!GlobalLock(p))
    {
        GlobalFree(p);
        return;
    }

    memcpy(GlobalLock(p), sText, n);
    GlobalUnlock(p);

    if (!OpenClipboard(m_hWnd))
    {
        GlobalFree(p);
        return;
    }

    EmptyClipboard();
    SetClipboardData(CF_TEXT, p);
    CloseClipboard();
}

ZXString<char> CWvsApp::GetClipboardText() const
{
    // return __sub_005CA200(this, nullptr);
    if (!IsClipboardFormatAvailable(CF_TEXT))
    {
        return {};
    }

    if (!OpenClipboard(m_hWnd))
    {
        return {};
    }

    auto p = GetClipboardData(CF_TEXT);
    if (!p)
    {
        CloseClipboard();
        return {};
    }

    auto s = static_cast<char*>(GlobalLock(p));
    if (!s)
    {
        CloseClipboard();
        return {};
    }

    auto ret = ZXString(s);
    GlobalUnlock(p);
    CloseClipboard();
    return ret;
}

const char*__cdecl CWvsApp::GetExceptionFileName()
{
    char* filename = _D_S_SFILENAME.data();
    if (_D_S_SFILENAME[0] == 0)
    {
        const auto n = GetSystemDirectoryA(filename, MAX_PATH);
        Dir_BackSlashToSlash(filename);

        if (n != 0 && filename[n - 1] != '/')
        {
            filename[n] = '/';
            filename[n + 1] = 0;
        }

        // TODO different file name frm string pool normally
        strcat(filename, "WvsAppException.log");
    }

    return filename;
}

void __cdecl CWvsApp::ZtlExceptionHandler(const int32_t bReportGenerated, const char* sReportFileName)
{
    auto app = CWvsApp::GetInstance();
    app->SendBackupPacket(2, 0);

    MEMORYSTATUS buf{};
    GlobalMemoryStatus(&buf);

    const auto hProc = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, 0, GetCurrentProcessId());
    PROCESS_MEMORY_COUNTERS pmc{};
    GetProcessMemoryInfo(hProc, &pmc, sizeof(pmc));
    CloseHandle(hProc);

    // TODO Destroy SecurityClient if it exists

    if (bReportGenerated)
    {
        return;
    }
    auto file = CreateFile(
        sReportFileName,
        GENERIC_WRITE,
        0,
        nullptr,
        OPEN_ALWAYS,
        FILE_FLAG_WRITE_THROUGH,
        nullptr
    );
    if (file == INVALID_HANDLE_VALUE)
    {
        return;
    }

    SetFilePointer(file, 0, nullptr, FILE_END);
    auto cfg = CConfig::ms_pInstance;
    char fmtBuf[1024]{};
    if (cfg)
    {
        wsprintfA(
            fmtBuf,
            "OS(%d.%d.%d)-SP:%s,x64:(%d), v(%d), CharacterName(%s), WorldID(%d), Ch(%d), Field(%d) ,\\r\\n",
            app->GetOSVersion(),
            app->GetOSMinorVersion(),
            app->GetOSBuildNumber(),
            static_cast<const char*>(app->GetOSCSDVersion()),
            app->Get64BitInfo(),
            CLIENT_VERSION,
            static_cast<const char*>(cfg->GetSessionCharacterName()),
            cfg->GetSessionWorldID(),
            cfg->GetSessionChannelID(),
            cfg->GetSessionFieldID()
        );
    }
    else
    {
        wsprintfA(fmtBuf, "ver.%d\r\n", CLIENT_VERSION);
    }
    WriteFile(file, fmtBuf, strlen(fmtBuf), nullptr, nullptr);

    fmtBuf[0] = 0;
    wsprintfA(
        fmtBuf,
        "%lu,%lu/%lu,%lu/%lu), PlayTime(%d min)\r\n",
        pmc.WorkingSetSize / 1024,
        pmc.QuotaPagedPoolUsage / 1024,
        pmc.QuotaPeakPagedPoolUsage / 1024,
        pmc.QuotaNonPagedPoolUsage / 1024,
        pmc.QuotaPeakNonPagedPoolUsage / 1024,
        cfg->GetPlayTime()
    );
    WriteFile(file, fmtBuf, strlen(fmtBuf), nullptr, nullptr);
    CloseHandle(file);

    //__sub_005C8AE0(bReportGenerated, sReportFileName);
}

long CWvsApp::GetOSVersion() const
{
    return m_nOSVersion;
}

long CWvsApp::GetOSMinorVersion() const
{
    return m_nOSMinorVersion;
}

long CWvsApp::GetOSBuildNumber() const
{
    return m_nOSBuildNumber;
}

ZXString<char> CWvsApp::GetOSCSDVersion()
{
    return m_sCSDVersion;
}

int32_t CWvsApp::Get64BitInfo() const
{
    return m_b64BitInfo;
}

void CWvsApp::InitializePCOM()
{
    if (const auto hr = PcInitialize(nullptr) < 0)
    {
        _com_raise_error(hr);
    }
    m_bPCOMInitialized = 1;

    //__sub_005C16C0(this, nullptr);
}

void CWvsApp::CreateMainWindow()
{
    const auto className = "MapleStoryClass";
    const auto wndTitle = "MapleStory";


    WNDCLASSEXA wc{};
    wc.cbSize = sizeof(WNDCLASSEXA);
    wc.style = CS_CLASSDC | CS_DBLCLKS;
    wc.lpfnWndProc = CWvsApp::WindowProc;
    wc.hInstance = GetModuleHandle(nullptr);
    wc.hIcon = LoadIconA(wc.hInstance, reinterpret_cast<const char*>(0x65));
    wc.lpszClassName = className;
    RegisterClassExA(&wc);


    const auto wndMode = CConfig::GetInstance()->m_sysOpt.bSysOpt_WindowedMode;
    const auto style = wndMode ? WS_CAPTION | WS_SYSMENU | WS_GROUP : WS_POPUP | WS_SYSMENU;
    tagRECT rc
    {
        .left = 0,
        .top = 0,
        .right = 800,
        .bottom = 600
    };
    AdjustWindowRect(&rc, style, false);

    const auto w = rc.right - rc.left;
    const auto h = rc.bottom - rc.top;
    m_hWnd = CreateWindowExA(
        wndMode ? 8 : 0,
        className,
        wndTitle,
        style,
        0x80000000,
        0x80000000,
        w,
        h,
        nullptr,
        nullptr,
        wc.hInstance,
        this);

    if (!m_hWnd)
    {
        ZException(GetLastError()).Throw();
    }


    //__sub_005C74A0(this, nullptr);
}

void CWvsApp::CreateWndManager() const
{
    auto* wndMan = new CWndMan(m_hWnd);
    wndMan->CreateWnd(0, 0, 1024, 768, static_cast<int>(0x80000000), true, nullptr, true, CWnd::UIOrigin::Origin_LT);
    //__sub_005C2060(this, nullptr);
}

void CWvsApp::InitializeResMan() const
{
    auto& sp = StringPool::GetInstance();

    auto resManUol = sp.GetStringW(1766);
    auto rm = G_PCOM.CreateObjectPtr<IWzResMan>(reinterpret_cast<const wchar_t*>(resManUol.c_str()), nullptr);
    _D_G_RM = rm;
    Z_CHECK_HR(rm->SetResManParam(static_cast<RESMAN_PARAM>(RC_AUTO_SERIALIZE | RC_AUTO_REPARSE), -1, -1));

    auto namespaceUol = sp.GetStringW(1768);
    auto root = G_PCOM.CreateObjectPtr<IWzNameSpace>(reinterpret_cast<const wchar_t*>(namespaceUol.c_str()), nullptr);
    _D_G_ROOT = root;
    Z_CHECK_HR(G_PCOM.SetRootNameSpace(root));

    auto namespaceFsUol = sp.GetStringW(1769);
    auto pFs = G_PCOM.CreateObjectPtr<IWzFileSystem>(reinterpret_cast<const wchar_t*>(namespaceFsUol.c_str()), nullptr);

    /*char path[MAX_PATH + 1];
    GetModuleFileNameA(nullptr, path, MAX_PATH);
    Dir_BackSlashToSlash(path);
    Dir_upDir(path);*/

    Z_CHECK_HR(pFs->Init(WZ_PATH));
    pFs->AddRef();

    auto nsPkgUol = sp.GetStringW(2334);
    auto pPkg = G_PCOM.CreateObjectPtr<IWzPackage>(reinterpret_cast<const wchar_t*>(nsPkgUol.c_str()), nullptr);
    //PcCreate_IWzPackage(reinterpret_cast<const wchar_t*>(nsPkgUol.c_str()), pPkg, nullptr);

    auto base = pFs->Getitem(Ztl_bstr_t(L"Base.wz"));
    _x_com_ptr<IWzSeekableArchive> pArchive(base.GetUnknown(false, false));

    Ztl_bstr_t version(L"95");
    Ztl_bstr_t uol;
    Z_CHECK_HR(pPkg->Init(version, uol, pArchive));

    // Mount root
    Z_CHECK_HR(_D_G_ROOT->Mount(Ztl_bstr_t(L"/"), pPkg, 0));

    std::array<wchar_t const*, 0xf> ITEMS{
        L"Character",
        L"Mob",
        L"Skill",
        L"Reactor",
        L"Npc",
        L"UI",
        L"Quest",
        L"Item",
        L"Effect",
        L"String",
        L"Etc",
        L"Morph",
        L"TamingMob",
        L"Sound",
        L"Map"
    };

    wchar_t fmt[0x100]{};

    for (auto i = 0; i < ITEMS.size(); ++i)
    {
        auto& item = ITEMS[i];
        swprintf_s(fmt, L"%s.wz", item);

        auto pkg = G_PCOM.CreateObjectPtr<IWzPackage>(reinterpret_cast<const wchar_t*>(nsPkgUol.c_str()), nullptr);
        auto vArchive = pFs->Getitem(fmt);
        _x_com_ptr<IWzSeekableArchive> pCurArchive(vArchive.GetUnknown(false, false));
        auto vSubNs = root->Getitem(item);
        _x_com_ptr<IWzNameSpace> subNs(vSubNs.GetUnknown(false, false));
        get_sub(i) = subNs;

        Z_CHECK_HR(pkg->Init(version, item, pCurArchive.GetInterfacePtr()));

        auto sub = get_sub(i);
        auto pkgNs = G_PCOM.CreateObjectPtr<IWzNameSpace>(reinterpret_cast<const wchar_t*>(namespaceUol.c_str()),
                                                          nullptr);
        Z_CHECK_HR(pkgNs->Mount(Ztl_bstr_t(L"/"), pkg, 0));
        Z_CHECK_HR(sub->Mount(Ztl_bstr_t(L"/"), pkgNs, 1));
    }

    //UNIMPLEMENTED;

    //__sub_005C9540(this, nullptr);
}

void CWvsApp::InitializeGr2D()
{
    auto gr2dUol = StringPool::GetInstance().GetStringW(0x1917);
    PcCreate_IWzGr2D(reinterpret_cast<const wchar_t*>(gr2dUol.c_str()), _D_G_GR, nullptr);

    auto gr = get_gr();
    auto cfg = CConfig::ms_pInstance;

    m_bEnabledDX9 = true;
    auto wndMode = cfg->m_sysOpt.bSysOpt_WindowedMode;
    auto bpp = !wndMode ? 16 : 0;

    auto h = get_screen_height();
    auto w = get_screen_width();
    Ztl_variant_t vHWnd(reinterpret_cast<long>(m_hWnd), VT_I4);
    vHWnd.GetVARIANT().vt |= VT_BYREF;
    Ztl_variant_t vRefreshRate(0, VT_I4); //cfg->m_nScr_RRate);
    Ztl_variant_t vBPP(0, VT_I4);
    Z_CHECK_HR(gr->Initialize(w, h, vHWnd, vBPP, vRefreshRate));
    gr->PutbackColor(0xff000000);

    auto redTone = gr->GetredTone();
    redTone->Putx(0xFF);
    auto greenBlueTone = gr->GetgreenBlueTone();
    Z_CHECK_HR(greenBlueTone->Move(0xff, 0xff));
    Z_CHECK_HR(gr->raw_AdjustCenter(0, -get_adjust_cy()));

    Z_CHECK_HR(gr->DisableFpsPanel());
    CVecProcess::CreateInstance();

    //__sub_005C7670(this, nullptr);
}

void CWvsApp::InitializeInput()
{
    CInputSystem::CreateInstance();
    CInputSystem::GetInstance()->Init(m_hWnd, m_ahInput.data());

    //__sub_005C7E40(this, nullptr);
}

void CWvsApp::InitializeSound() const
{
    const auto sound_man = new CSoundMan();
    sound_man->Init(m_hWnd, 30000, 2, 2, 0x10);
    //__sub_005CA170(this, nullptr);
}

void CWvsApp::InitializeGameData() const
{
    // TODO readd splashscreen
    CItemInfo::CreateInstance()->IterateItemInfo();
    CItemMakerInfo::CreateInstance()->Load();
    CItemOptionInfo::CreateInstance()->IterateItemOptionInfo();
    CPartyQuestInfoManager::CreateInstance()->Load();

    CMobTemplate::Load();
    CMorphTemplate::Load();
    CTamingMobTemplate::Load();
    CNpcTemplate::Load();
    CReactorTemplate::Load();
    CEmployeeTemplate::Load();

    auto skillInfo = CSkillInfo::CreateInstance();
    skillInfo->IterateSkillInfo();
    skillInfo->LoadMobSkill();
    skillInfo->LoadMCSkill();
    skillInfo->LoadMCGuardian();
    skillInfo->LoadItemSkill();
    skillInfo->LoadItemOptionSkill();

    CalcDamage::LoadStandardPDD();

    CSequencedKeyMan::CreateInstance();
    CClientOptMan::CreateInstance();
    CStageSystem::CreateInstance();
    if (!CStageSystem::GetInstance()->IterateStageSystem())
    {
        throwTerminateException(0x22000006);
    }

    //__sub_005C8440(this, nullptr);
}

void CWvsApp::InitializeAuth() const
{
    auto nmcoClient = CNMCOClientObject::GetInstance();
    if (!nmcoClient->SetPatchOption(0))
    {
        throwTerminateException(0x2200000c);
    }

    if (!nmcoClient->SetLocaleAndRegion(0x200, 0xc9))
    {
        throwTerminateException(0x2200000c);
    }

    if (!nmcoClient->Initialize(0x2002213))
    {
        throwTerminateException(0x2200000c);
    }
}

void CWvsApp::ISMsgProc(const uint32_t message, const uint32_t wParam, const long lParam) const
{
    if (!CWndMan::IsInstantiated())
    {
        return;
    }
    const auto wndMan = CWndMan::GetInstance();
    if (message >= 0x500 && message <= 0x501)
    {
        wndMan->ProcessJoystick(message, wParam, lParam);
    }
    else if (message >= WM_MOUSEFIRST && message <= WM_MOUSELAST)
    {
        wndMan->ProcessMouse(message, wParam, lParam);
    }
    else if (message == WM_KEYDOWN)
    {
        wndMan->ProcessKey(message, wParam, lParam);
    }
}

bool CWvsApp::IsEnabledDX9() const
{
    return m_bEnabledDX9;
}

void CWvsApp::SetBackupPacket(CInPacket& iPacket)
{
    m_dwBackupBufferSize = iPacket.BackupBuffer(m_pBackupBuffer, 0x1000);
    //__sub_005C2110(this, nullptr, iPacket);
}

void CWvsApp::SendBackupPacket(long nCallType, unsigned long dwErrorCode)
{
    if (m_dwBackupBufferSize == 0 || m_dwBackupBufferSize > 0x1000)
    {
        return;
    }

    COutPacket pkt(Cp::Clientdumplog);
    pkt.Encode2(nCallType);
    pkt.Encode4(dwErrorCode);
    pkt.Encode2(m_dwBackupBufferSize);
    pkt.EncodeBuffer(&m_pBackupBuffer[0], m_dwBackupBufferSize);
    SendPacket(pkt);
    m_dwBackupBufferSize = 0;
    //__sub_005C7A80(this, nullptr, nCallType, dwErrorCode);
}

void CWvsApp::SetClearStackLog(unsigned long dwLog)
{
    if (m_dwClearStackLog & dwLog)
    {
        return;
    }
    m_dwClearStackLog += dwLog;
    //__sub_005C1960(this, nullptr, dwLog);
}

void CWvsApp::SendClearStackLog(long nCallType, unsigned long dwErrorCode)
{
    if (!m_dwClearStackLog)
    {
        return;
    }
    COutPacket p(Cp::Clientdumplog);
    p.Encode2(nCallType);
    p.Encode4(dwErrorCode);
    p.Encode2(0xC);
    p.Encode4(0);
    p.Encode4(m_dwClearStackLog);
    p.Encode4(0);
    m_dwClearStackLog = 0;

    // TODO SendPacket(&p);
}

int32_t CWvsApp::CheckWebLunchingFailOS()
{
    return __sub_005C08C0(this, nullptr);
}

void CWvsApp::SetWindowActive(int32_t bEnable)
{
    m_bWindowActive = bEnable;
}

int32_t CWvsApp::IsWindowActive() const
{
    return m_bWindowActive;
}

CWvsApp& CWvsApp::operator=(const CWvsApp& arg0)
{
    return _op_assign_61(this, arg0);
}

CWvsApp& CWvsApp::_op_assign_61(CWvsApp* pThis, const CWvsApp& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzResMan___GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf___(
    const wchar_t* sUOL, _x_com_ptr<IWzResMan>& pObj, IUnknown* pUnkOuter)
{
    return __sub_005C2EB0(sUOL, pObj, pUnkOuter);
}

HRESULT __cdecl PcSetRootNameSpace(IUnknown* pNameSpace)
{
    return G_PCOM.SetRootNameSpace(pNameSpace);
    // return __sub_005C0AE0(pNameSpace);
}

unsigned long
__cdecl Crc32_GetCrc32_VMTable(unsigned long* pmem, unsigned long size, unsigned long* pcheck, unsigned long* pCrc32)
{
    return __sub_005C1500(pmem, size, pcheck, pCrc32);
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzPackage___GUID_e610818b_038d_4522_9232_30fcd5f4737c___(
    const wchar_t* sUOL, _x_com_ptr<IWzPackage>& pObj, IUnknown* pUnkOuter)
{
    return __sub_005C47A0(sUOL, pObj, pUnkOuter);
}

void
__cdecl PcCreateObject__com_ptr_t__com_IIID_IWzGr2D___GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9___(const wchar_t* sUOL,
    _x_com_ptr<IWzGr2D>& pObj,
    IUnknown* pUnkOuter)
{
    return __sub_005C3040(sUOL, pObj, pUnkOuter);
}

unsigned long
__cdecl Crc32_GetCrc32(unsigned long* pmem, unsigned long size, unsigned long* pcheck, unsigned long base1,
                       unsigned long* pCrc32, unsigned long base2)
{
    return __sub_005C0B00(pmem, size, pcheck, base1, pCrc32, base2);
}

_x_com_ptr<IWzNameSpace>&__cdecl get_sub(long nIdx)
{
    return _D_G_SUB[nIdx];
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzNameSpace___GUID_2aeeeb36_a4e1_4e2b_8f6f_2e7bdec5c53d___(
    const wchar_t* sUOL, _x_com_ptr<IWzNameSpace>& pObj, IUnknown* pUnkOuter)
{
    return __sub_005C2F40(sUOL, pObj, pUnkOuter);
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzFileSystem___GUID_352d8655_51e4_4668_8ce4_0866e2b6a5b5___(
    const wchar_t* sUOL, _x_com_ptr<IWzFileSystem>& pObj, IUnknown* pUnkOuter)
{
    return __sub_005C4710(sUOL, pObj, pUnkOuter);
}

int get_update_time()
{
    return CWvsApp::ms_pInstance->GetUpdateTime();
}

_x_com_ptr<IWzGr2D>& __cdecl get_gr()
{
    return _D_G_GR;
}
