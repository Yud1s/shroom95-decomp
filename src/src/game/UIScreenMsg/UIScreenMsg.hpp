// UIScreenMsg.hpp
#pragma once

#include "util/base.h"
#include "extra.h"
#include "pcom/wz.h"


// Level: 1 0xb2ee
class CUIScreenMsg;

class CUIScreenMsg : public TSingleton<CUIScreenMsg> {
// Nested
// Fields
protected:
    int32_t m_bQuickSlotShown{};
protected:
    ZList<_x_com_ptr<IWzGr2DLayer> > m_llScrMsg;
// Methods
public:
    virtual  ~CUIScreenMsg();

public:
    void _dtor_0();

public:
    CUIScreenMsg(const CUIScreenMsg &arg0);

public:
    void _ctor_1( const CUIScreenMsg &arg0);

public:
    CUIScreenMsg();

public:
    void _ctor_0();

public:
    void ScrMsg_Add(const char *sScrMsg, FONT_TYPE fType, FONT_TYPE fOutlineType);

public:
    void MoveScrMsg();

protected:
    void LayoutScrMsg();

public:
    CUIScreenMsg &operator=(const CUIScreenMsg &arg0);

public:
    static CUIScreenMsg &_op_assign_6(CUIScreenMsg *pThis, const CUIScreenMsg &arg0);
};

STATIC_ASSERT_SIZE(CUIScreenMsg, 28);


