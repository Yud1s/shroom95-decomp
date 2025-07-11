// SplashScreen.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"


// Level: 1 0x12ee5
class CSplashScreen;

class CSplashScreen: public TSingleton<CSplashScreen> {
// Nested
// Fields
	private:  HWND__* m_hWnd;
	private:  HWND__* m_hLog;
	private:  HICON__* m_hIcon;
// Methods
	public:    ~CSplashScreen();
		public: void _dtor_0();
	public:    CSplashScreen();
		public: void _ctor_1();
	public:   void Create();
		public:   void Destroy();
		public:   void Log(const ZXString<char>& str);
	};
STATIC_ASSERT_SIZE(CSplashScreen, 12);


