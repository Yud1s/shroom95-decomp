// Msgbox.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"


// Level: 1 0x1348c
class CMsgbox;

// Level: 1 0x134a6
class CMsgboxLinkWeb;

class CMsgbox : public TSingleton<CMsgbox> {
// Nested
// Fields
private:
    ZXString<char> m_sMsg;
private:
    ZXString<char> m_sLink;
private:
    ZXString<char> m_sDesc;
private:
    tagRECT m_rtMsg{};
private:
    tagRECT m_rtLink{};
private:
    int32_t m_bLinkClicked{};
private:
    HICON__ *m_hCursorHand{};
private:
    HICON__ *m_hCursorArrow{};
// Methods
public:
    virtual  ~CMsgbox();

public:
    void _dtor_0();

public:
    CMsgbox(const CMsgbox &arg0);

public:
    void _ctor_1(const CMsgbox &arg0);

public:
    CMsgbox();

public:
    void _ctor_0();

public:
    void Init(ZXString<char> sMsg, ZXString<char> sLink, ZXString<char> sDesc);

public:
    CMsgbox &operator=(const CMsgbox &arg0);

public:
    static CMsgbox &_op_assign_4(CMsgbox *pThis, const CMsgbox &arg0);
};

STATIC_ASSERT_SIZE(CMsgbox, 60);

class CMsgboxLinkWeb : public TSingleton<CMsgboxLinkWeb> {
// Nested
// Fields
private:
    ZXString<char> m_sMsg;
private:
    ZXString<char> m_sLink;
private:
    tagRECT m_rtMsg{};
// Methods
public:
    virtual  ~CMsgboxLinkWeb();

public:
    void _dtor_0();

public:
    CMsgboxLinkWeb(const CMsgboxLinkWeb &arg0);

public:
    void _ctor_1(const CMsgboxLinkWeb &arg0);

public:
    CMsgboxLinkWeb();

public:
    void _ctor_0();

public:
    void Init(ZXString<char> sMsg, ZXString<char> sLink);

public:
    CMsgboxLinkWeb &operator=(const CMsgboxLinkWeb &arg0);

public:
    static CMsgboxLinkWeb &_op_assign_4(CMsgboxLinkWeb *pThis, const CMsgboxLinkWeb &arg0);
};

STATIC_ASSERT_SIZE(CMsgboxLinkWeb, 28);

int __stdcall MsgLinkWebDlgProc(HWND__ *hDlg, uint32_t iMessage, uint32_t wParam, long lParam);
int32_t __stdcall MsgDlgProc(HWND__ *hDlg, uint32_t iMessage, uint32_t wParam, long lParam);
