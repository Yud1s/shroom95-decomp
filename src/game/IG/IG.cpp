// IG.cpp
#include "IG.hpp"
#include "IG_regen.ipp"

IGObj::IGObj(const IGObj& arg0)
{
    _ctor_0(arg0);
}

void IGObj::_ctor_0(const IGObj& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

IGObj::IGObj()
{
    //TODO UNIMPLEMENTED; //_ctor_1();
}

void IGObj::_ctor_1()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void IGObj::Update()
{
    __sub_00038CA0(this, nullptr);
}

IGObj& IGObj::operator=(const IGObj& arg0)
{
    return _op_assign_3(this, arg0);
}

IGObj& IGObj::_op_assign_3(IGObj* pThis, const IGObj& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}


IUIMsgHandler::IUIMsgHandler(const IUIMsgHandler& arg0)
{
    _ctor_0(arg0);
}

void IUIMsgHandler::_ctor_0(const IUIMsgHandler& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

IUIMsgHandler::IUIMsgHandler()
{
    //UNIMPLEMENTED; //_ctor_1();
}

void IUIMsgHandler::_ctor_1()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void IUIMsgHandler::OnKey(uint32_t wParam, int32_t lParam)
{
}

int32_t IUIMsgHandler::OnSetFocus(int32_t bFocus)
{
    return 0;
}

void IUIMsgHandler::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
}

int32_t IUIMsgHandler::OnMouseMove(long rx, long ry)
{
    return 0;
}

int32_t IUIMsgHandler::OnMouseWheel(long rx, long ry, long nWheel)
{
    return 0;
}

void IUIMsgHandler::OnMouseEnter(int32_t arg0)
{
}

void IUIMsgHandler::OnDraggableMove(long nState, IDraggable* pObj, long rx, long ry)
{
}

void IUIMsgHandler::SetEnable(int32_t bEnable)
{
}

int32_t IUIMsgHandler::IsEnabled()
{
    return 1;
}

void IUIMsgHandler::SetShow(int32_t bShow)
{
}

int32_t IUIMsgHandler::IsShown()
{
    return true;
}

long IUIMsgHandler::GetAbsLeft()
{
    return 0;
}

long IUIMsgHandler::GetAbsTop()
{
    return 0;
}

void IUIMsgHandler::ClearToolTip()
{
}

void IUIMsgHandler::OnIMEModeChange(char cMode)
{
}

void IUIMsgHandler::OnIMEResult(const char* sComp)
{
}

void IUIMsgHandler::OnIMEComp(const char* sComp, ZArray<unsigned long>& adwCls, uint32_t nClsIdx, long nCursor,
                              ZList<ZXString<char>>& lCand, long nBegin, long nPage, long nCur)
{
}

IUIMsgHandler& IUIMsgHandler::operator=(const IUIMsgHandler& arg0)
{
    return _op_assign_22(this, arg0);
}

IUIMsgHandler& IUIMsgHandler::_op_assign_22(IUIMsgHandler* pThis, const IUIMsgHandler& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

INetMsgHandler::INetMsgHandler(const INetMsgHandler& arg0)
{
    _ctor_0(arg0);
}

void INetMsgHandler::_ctor_0(const INetMsgHandler& arg0)
{
    new(this) INetMsgHandler();
}

INetMsgHandler::INetMsgHandler()
{
}

void INetMsgHandler::_ctor_1()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void INetMsgHandler::OnPacket(long nType, CInPacket& iPacket)
{
}

INetMsgHandler& INetMsgHandler::operator=(const INetMsgHandler& arg0)
{
    return _op_assign_3(this, arg0);
}

INetMsgHandler& INetMsgHandler::_op_assign_3(INetMsgHandler* pThis, const INetMsgHandler& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
