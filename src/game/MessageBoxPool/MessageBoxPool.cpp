// MessageBoxPool.cpp
#include "MessageBoxPool.hpp"
#include "MessageBoxPool_regen.ipp"

MESSAGEBOX::~MESSAGEBOX()
{
    UNIMPLEMENTED; // _dtor_0();
}

void MESSAGEBOX::_dtor_0()
{
    return __sub_00236690(this, nullptr);
}

MESSAGEBOX::MESSAGEBOX(const MESSAGEBOX& arg0)
{
    _ctor_1(arg0);
}

void MESSAGEBOX::_ctor_1(const MESSAGEBOX& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MESSAGEBOX::MESSAGEBOX()
{
    UNIMPLEMENTED; //_ctor_0();
}

void MESSAGEBOX::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MESSAGEBOX& MESSAGEBOX::operator=(const MESSAGEBOX& arg0)
{
    return _op_assign_3(this, arg0);
}

MESSAGEBOX& MESSAGEBOX::_op_assign_3(MESSAGEBOX* pThis, const MESSAGEBOX& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMessageBoxPool::~CMessageBoxPool()
{
    ms_pInstance = nullptr;
}

void CMessageBoxPool::_dtor_0()
{
    return __sub_00235970(this, nullptr);
}

CMessageBoxPool::CMessageBoxPool(const CMessageBoxPool& arg0)
{
    _ctor_1(arg0);
}

void CMessageBoxPool::_ctor_1(const CMessageBoxPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMessageBoxPool::CMessageBoxPool()
{
    ms_pInstance = this;
}

void CMessageBoxPool::_ctor_0()
{
    return __sub_00235910(this, nullptr);
}

MESSAGEBOX* CMessageBoxPool::FindMessageBox(const tagPOINT& pt)
{
    return __sub_00235A00(this, nullptr, pt);
}

void CMessageBoxPool::Update(long pos)
{
    __sub_00235B30(this, nullptr, pos);
}

void CMessageBoxPool::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_00237150(this, nullptr, nType, iPacket);
}

void CMessageBoxPool::OnCreateFailed(CInPacket& iPacket)
{
    __sub_00236760(this, nullptr, iPacket);
}

void CMessageBoxPool::OnMessageBoxEnterField(CInPacket& iPacket)
{
    __sub_002369C0(this, nullptr, iPacket);
}

void CMessageBoxPool::OnMessageBoxLeaveField(CInPacket& iPacket)
{
    __sub_00235D60(this, nullptr, iPacket);
}

void CMessageBoxPool::AddMessageBox(ZRef<MESSAGEBOX> pr)
{
    __sub_002368B0(this, nullptr, CreateNakedParam(pr));
}

void CMessageBoxPool::RemoveMessageBox(ZRef<MESSAGEBOX> pr)
{
    __sub_00235870(this, nullptr, CreateNakedParam(pr));
}

CMessageBoxPool& CMessageBoxPool::operator=(const CMessageBoxPool& arg0)
{
    return _op_assign_11(this, arg0);
}

CMessageBoxPool& CMessageBoxPool::_op_assign_11(CMessageBoxPool* pThis, const CMessageBoxPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
