// DropPool.cpp
#include "DropPool.hpp"

static ZRef<DROP> FAKE_ZRefDROP_{};
static ZArray<DROP*> FAKE_ZArrayDROP_{};
static ZList<CPet*> FAKE_ZListCPet_{};
static ZList<CMob*> FAKE_ZListCMob_{};

#include "DropPool_regen.ipp"

DROP::~DROP()
{
}

void DROP::_dtor_0()
{
    return __sub_00110D40(this, nullptr);
}

DROP::DROP(const DROP& arg0)
{
    _ctor_1(arg0);
}

void DROP::_ctor_1(const DROP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

DROP::DROP()
{
}

void DROP::_ctor_0()
{
    return __sub_00111620(this, nullptr);
}

DROP& DROP::operator=(const DROP& arg0)
{
    return _op_assign_3(this, arg0);
}

DROP& DROP::_op_assign_3(DROP* pThis, const DROP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDropPool::~CDropPool()
{
    ms_pInstance = nullptr;
}

void CDropPool::_dtor_0()
{
    return __sub_001111D0(this, nullptr);
}

CDropPool::CDropPool(const CDropPool& arg0)
{
    _ctor_1(arg0);
}

void CDropPool::_ctor_1(const CDropPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDropPool::CDropPool()
{
    ms_pInstance = this;
    auto img900 = StringPool::GetInstance().GetBSTR(0x6de);
    m_pPropMoneyIcon = get_rm()->GetObjectT<IWzProperty>(img900);
}

void CDropPool::_ctor_0()
{
    return __sub_00112900(this, nullptr);
}

void CDropPool::Update(long tCur)
{
    __sub_00115890(this, nullptr, tCur);
}

long CDropPool::IsThereDropNear(const tagPOINT& arg0, const tagPOINT& arg1, uint16_t arg2, CPet* arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CDropPool::TryPickUpDrop(const tagPOINT& pt)
{
    __sub_00111860(this, nullptr, pt);
}

void CDropPool::TryPickUpDropByMob(CMob* pMob, const tagPOINT& pt)
{
    __sub_001112A0(this, nullptr, pMob, pt);
}

void CDropPool::TryPickUpDropByPet(CPet* pPet, const tagPOINT& ptPos, const SECPOINT& ptPosCheck)
{
    __sub_00111AB0(this, nullptr, pPet, ptPos, ptPosCheck);
}

void CDropPool::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_00117410(this, nullptr, nType, iPacket);
}

void CDropPool::GetExplosiveDropInRect(const tagRECT& rc, ZArray<DROP*>& aDrop, long nMaxCount)
{
    __sub_00112630(this, nullptr, rc, aDrop, nMaxCount);
}

void CDropPool::SetFieldAttr(const CAttrField* arg0)
{
    m_pAttrField = arg0;
}

void CDropPool::RecordRecentPickupItem(unsigned long dwItemID)
{
    __sub_00115140(this, nullptr, dwItemID);
}

void CDropPool::BoobyTrapCheckPickupItem(const tagPOINT& pt)
{
    __sub_001104E0(this, nullptr, pt);
}

void CDropPool::OnDropEnterField(CInPacket& iPacket)
{
    __sub_00116670(this, nullptr, iPacket);
}

void CDropPool::OnDropLeaveField(CInPacket& iPacket)
{
    __sub_00111E20(this, nullptr, iPacket);
}

void CDropPool::UpdateChasingDropForPet()
{
    //TODO(dropgame)
    //__sub_001152F0(this, nullptr);
}

int32_t CDropPool::IsInExceptionList(long nItemID)
{
    return __sub_0010FDC0(this, nullptr, nItemID);
}

void CDropPool::Add(ZRef<DROP> pr)
{
    __sub_00115180(this, nullptr, CreateNakedParam(pr));
}

void CDropPool::Remove(ZRef<DROP> pr)
{
    __sub_00111120(this, nullptr, CreateNakedParam(pr));
}

long CDropPool::GetMoneyIconType(long nMoney)
{
    //return __sub_0010F440(this, nullptr, nMoney);
    if ( nMoney < 50 )
        return 0;
    if ( nMoney >= 100 )
        return (nMoney >= 1000) + 2;
    return 1;
}

_x_com_ptr<IWzCanvas> CDropPool::GetMoneyIcon(long nMoney, long nCanvasNo)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_00112B30(this, nullptr, &ret, nMoney, nCanvasNo);
}

void CDropPool::MakeMoneyAnimation(ZRef<DROP> pr)
{
    __sub_00112DF0(this, nullptr, CreateNakedParam(pr));
}

CDropPool& CDropPool::operator=(const CDropPool& arg0)
{
    return _op_assign_22(this, arg0);
}

CDropPool& CDropPool::_op_assign_22(CDropPool* pThis, const CDropPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long __cdecl tolong(double d)
{
    if ( d < 0.0 )
        return (long)(d - 0.499999999);
    else
        return (long)(d + 0.5);
}
