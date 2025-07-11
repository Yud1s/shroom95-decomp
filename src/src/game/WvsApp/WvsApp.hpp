// WvsApp.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include "pcom/PCom.h"


#include "Packet/Packet.hpp"

// Level: 1 0xb6c4
class CMonsterBookMan;
struct MonsterBookCard;
struct MonsterBookStr;
// Level: 1 0xcedb
class CWvsApp;

class CMonsterBookMan : public TSingleton<CMonsterBookMan>
{
	// Nested
	// Fields
protected:
	std::array<ZArray<ZRef<MonsterBookCard>>, 9> m_aCard{};

protected:
	ZMap<long, ZRef<MonsterBookCard>, long> m_mCard;

protected:
	ZMap<unsigned short, unsigned short, unsigned short> m_mIdx2ID;

protected:
	ZMap<unsigned short, unsigned short, unsigned short> m_mID2Idx;

protected:
	ZMap<ZXString<char>, long, ZXString<char>> m_mName;

protected:
	ZMap<long, ZRef<MonsterBookStr>, long> m_mStr;

protected:
	ZArray<_x_com_ptr<IWzCanvas>> m_aBookIcon;
	// Methods
public:
	virtual ~CMonsterBookMan();

public:
	void _dtor_0();

public:
	CMonsterBookMan(const CMonsterBookMan &arg0);

public:
	void _ctor_1( const CMonsterBookMan &arg0) const;

public:
	CMonsterBookMan();

public:
	void _ctor_0();

public:
	int32_t LoadBook();

public:
//TODO
	ZRef<MonsterBookCard> GetCard_(const ZXString<char> &arg0) const;
	ZRef<MonsterBookCard> GetCard0(const ZXString<char> &arg0) {
		return GetCard_(arg0);
	}

public:
	ZRef<MonsterBookCard> GetCard_(long arg0, long arg1) const;
	ZRef<MonsterBookCard> GetCard1(long arg0, long arg1){
		return GetCard_(arg0, arg1);
	
	}

public:
	ZRef<MonsterBookCard> GetCard(long nCardID);
	ZRef<MonsterBookCard> GetCard2(long nCardID)
	{
		return GetCard(nCardID);
	}

public:
	uint16_t GetID(uint16_t arg0) const;

public:
	uint16_t GetIndex(uint16_t arg0) const;

public:
	uint16_t GetSize() const;

protected:
	int32_t LoadCard();

public:
	ZRef<MonsterBookStr> GetString(long nCardID);

public:
	_x_com_ptr<IWzCanvas> GetBookIcon(long arg0) const;

protected:
	int32_t LoadStringA();

protected:
	int32_t LoadBookIcon();

public:
	CMonsterBookMan &operator=(const CMonsterBookMan &arg0);

public:
	static CMonsterBookMan &_op_assign_15(CMonsterBookMan *pThis, const CMonsterBookMan &arg0);
};
STATIC_ASSERT_SIZE(CMonsterBookMan, 164);
class CWvsApp : public TSingleton<CWvsApp>
{
	// Nested
public:
    enum GSM_
    {
        GSM_NONE = 0,
        GSM_WEB = 1,
        GSM_GAME = 2
    };

	enum class GSM: int
	{
		NONE = 0,
		WEB = 1,
		GAME = 2
	};
	// Fields
protected:
	HWND__ *m_hWnd{};

protected:
	int32_t m_bPCOMInitialized{};

protected:
	unsigned long m_dwMainThreadId{};

protected:
	HHOOK__ *m_hHook{};

protected:
	int32_t m_bWin9x{};

protected:
	long m_nOSVersion{};

protected:
	long m_nOSMinorVersion{};

protected:
	long m_nOSBuildNumber{};

protected:
	ZXString<char> m_sCSDVersion;

protected:
	int32_t m_b64BitInfo{};

protected:
	long m_tUpdateTime{};

protected:
	int32_t m_bFirstUpdate{};

protected:
	ZXString<char> m_sCmdLine;

protected:
	long m_nGameStartMode{};

protected:
	int32_t m_bAutoConnect{};

protected:
	int32_t m_bShowAdBalloon{};

protected:
	int32_t m_bExitByTitleEscape{};

protected:
	HRESULT m_hrZExceptionCode{};

protected:
	HRESULT m_hrComErrorCode{};

protected:
	unsigned long m_dwSecurityErrorCode{};

protected:
	long m_nTargetVersion{};

protected:
	long m_tLastServerIPCheck{};

protected:
	long m_tLastServerIPCheck2{};

protected:
	long m_tLastGGHookingAPICheck{};

protected:
	long m_tLastSecurityCheck{};

protected:
	std::array<void *, 3> m_ahInput{};

private:
	long m_tNextSecurityCheck{};

private:
	bool m_bEnabledDX9{};

private:
	ZArray<unsigned char> m_pBackupBuffer;

private:
	unsigned long m_dwBackupBufferSize{};

private:
	unsigned long m_dwClearStackLog{};

protected:
	int32_t m_bWindowActive{};
	// Methods
public:
	virtual ~CWvsApp();

public:
	void _dtor_0();

public:
	CWvsApp(const CWvsApp &arg0);

public:
	void _ctor_1( const CWvsApp &arg0) const;

public:
	explicit CWvsApp(const char *sCmdLine);

public:
	void _ctor_0( const char *sCmdLine);

public:
	void SetUp();

public:
	void Run(const int32_t *pbTerminate);

public:
	void CleanUp();

public:
	static void ConnectLogin();

public:
	HWND__ *GetMainWindow() const;

public:
	[[nodiscard]] unsigned long GetMainThreadId() const;

public:
	void SetZExceptionCode(HRESULT arg0);

public:
	void SetComErrorCode(HRESULT arg0);

public:
	void SetSecurityErrorCode(unsigned long dwLog);

public:
	void SetPatchExceptionInfo(long tCurTime);

public:
	int32_t ExtractZExceptionCode(HRESULT &hr);

public:
	int32_t ExtractComErrorCode(HRESULT &hr);

public:
	long GetTimeGap() const;

public:
	long GetUpdateTime() const;

public:
	void CallUpdate(long tCurTime);

public:
	ZXString<char> GetCmdLine(int32_t nArg);

public:
	GSM GetGameStartMode() const;

public:
	int32_t GetAutoConnect() const;

public:
	void SetAutoConnect(int32_t bEnable);

public:
	void SetPatchInfo(uint16_t version);

public:
	static long __stdcall WindowProc(HWND__ *hWnd, uint32_t msg, uint32_t wParam, long lParam);

public:
	static long __stdcall LowLevelKeyboardProc(int32_t nCode, uint32_t wParam, long lParam);

public:
	void SetShowAdBalloon();

public:
	void ResetShowAdBalloon();

public:
	int32_t GetShowAdBalloon() const;

public:
	int32_t GetExitByTitleEscape() const;

public:
	void SetExitByTitleEscape(int32_t bEnable);

public:
	void EnableWinKey(int32_t bEnable);

public:
	static void __cdecl Dir_BackSlashToSlash(char *sDir);

public:
	static void __cdecl Dir_SlashToBackSlash(char *sDir);

public:
	static void __cdecl Dir_upDir(char *sDir);

public:
	void SetClipboardText(const char *sText) const;

public:
	ZXString<char> GetClipboardText() const;

public:
	static const char *__cdecl GetExceptionFileName();

public:
	static void __cdecl ZtlExceptionHandler(int32_t bReportGenerated, const char *sReportFileName);

public:
	long GetOSVersion() const;

public:
	long GetOSMinorVersion() const;

public:
	long GetOSBuildNumber() const;

public:
	ZXString<char> GetOSCSDVersion();

public:
	int32_t Get64BitInfo() const;

protected:
	void InitializePCOM();

protected:
	void CreateMainWindow();

protected:
	void CreateWndManager() const;

protected:
	void InitializeResMan() const;

protected:
	void InitializeGr2D();

protected:
	void InitializeInput();

protected:
	void InitializeSound() const;

protected:
	void InitializeGameData() const;

protected:
	void InitializeAuth() const;

protected:
	void ISMsgProc(uint32_t message, uint32_t wParam, long lParam) const;

public:
	bool IsEnabledDX9() const;

public:
	void SetBackupPacket(CInPacket &iPacket);

public:
	void SendBackupPacket(long nCallType, unsigned long dwErrorCode);

public:
	void SetClearStackLog(unsigned long dwLog);

public:
	void SendClearStackLog(long nCallType, unsigned long dwErrorCode);

public:
	int32_t CheckWebLunchingFailOS();

public:
	void SetWindowActive(int32_t bEnable);

public:
	int32_t IsWindowActive() const;

public:
	CWvsApp &operator=(const CWvsApp &arg0);

public:
	static CWvsApp &_op_assign_61(CWvsApp *pThis, const CWvsApp &arg0);
};
STATIC_ASSERT_SIZE(CWvsApp, 140);

int get_update_time();
_x_com_ptr<IWzGr2D> &__cdecl get_gr();

extern _x_com_ptr<IWzResMan> _D_G_RM;
extern _x_com_ptr<IWzGr2D>_D_G_GR;
extern _x_com_ptr<IWzSound> _D_G_SOUND;
extern _x_com_ptr<IWzNameSpace> _D_G_ROOT;
extern std::array<_x_com_ptr<IWzNameSpace>, 0xf> _D_G_SUB;


void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzResMan___GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf___(const wchar_t *sUOL, _x_com_ptr<IWzResMan> &pObj, IUnknown *pUnkOuter);
HRESULT __cdecl PcSetRootNameSpace(IUnknown *pNameSpace);
unsigned long __cdecl Crc32_GetCrc32_VMTable(unsigned long *pmem, unsigned long size, unsigned long *pcheck, unsigned long *pCrc32);
void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzPackage___GUID_e610818b_038d_4522_9232_30fcd5f4737c___(const wchar_t *sUOL, _x_com_ptr<IWzPackage> &pObj, IUnknown *pUnkOuter);
void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzGr2D___GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9___(const wchar_t *sUOL, _x_com_ptr<IWzGr2D> &pObj, IUnknown *pUnkOuter);
unsigned long __cdecl Crc32_GetCrc32(unsigned long *pmem, unsigned long size, unsigned long *pcheck, unsigned long base1, unsigned long *pCrc32, unsigned long base2);
_x_com_ptr<IWzNameSpace> &__cdecl get_sub(long nIdx);
void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzNameSpace___GUID_2aeeeb36_a4e1_4e2b_8f6f_2e7bdec5c53d___(const wchar_t *sUOL, _x_com_ptr<IWzNameSpace> &pObj, IUnknown *pUnkOuter);
void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzFileSystem___GUID_352d8655_51e4_4668_8ce4_0866e2b6a5b5___(const wchar_t *sUOL, _x_com_ptr<IWzFileSystem> &pObj, IUnknown *pUnkOuter);
