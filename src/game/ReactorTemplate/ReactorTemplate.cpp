// ReactorTemplate.cpp
#include "ReactorTemplate.hpp"

// Fake instantiations
static ZRefCounted_AllocHelper<ZRefCountedDummy<CReactorTemplate::REACTOREVENTINFO>>
FAKE_ZRefCountedDummy_CReactorTemplate_REACTOREVENTINFO{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<CReactorTemplate::STATEINFO>>
FAKE_ZRefCountedDummy_CReactorTemplate_STATEINFO{};

static ZRef<CReactorTemplate> FAKE_ZRef_CReactorTemplate{};
static ZRef<CReactorTemplate::STATEINFO> FAKE_ZRef_CReactorTemplate_STATEINFO{};


ZMap<unsigned long, ZRef<CReactorTemplate>, unsigned long> CReactorTemplate::ms_mReactorTemplate{};

#include "ReactorTemplate_regen.ipp"

CReactorTemplate::~CReactorTemplate()
{
}

void CReactorTemplate::_dtor_0()
{
    return __sub_002D1580(this, nullptr);
}

CReactorTemplate::CReactorTemplate(const CReactorTemplate& arg0)
{
    _ctor_1(arg0);
}

void CReactorTemplate::_ctor_1(const CReactorTemplate& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorTemplate::CReactorTemplate()
{
}

void CReactorTemplate::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZRef<CReactorTemplate::STATEINFO> CReactorTemplate::GetStateInfo(long nState)
{
    ZRef<CReactorTemplate::STATEINFO> ret;
    return *__sub_002D0300(this, nullptr, &ret, nState);
}

int32_t CReactorTemplate::IsMovable()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_x_com_ptr<IWzProperty> CReactorTemplate::GetTemplateProp()
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_002D0670(this, nullptr, &ret);
}

_x_com_ptr<IWzProperty> CReactorTemplate::GetHitProp(long nCurState, long nProperEventIdx)
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_002D0D80(this, nullptr, &ret, nCurState, nProperEventIdx);
}

void __cdecl CReactorTemplate::Load()
{
    __sub_002D2AB0();
}

void __cdecl CReactorTemplate::Unload()
{
    __sub_002CFFF0();
}

CReactorTemplate* __cdecl CReactorTemplate::GetReactorTemplate(unsigned long dwTemplateID)
{
    return __sub_002D27C0(dwTemplateID);
}

int32_t __cdecl CReactorTemplate::RegisterReactor(unsigned long dwTemplateID, _x_com_ptr<IWzProperty> pProp)
{
    return __sub_002D1DE0(dwTemplateID, CreateNakedParam(pProp));
}

int32_t __cdecl CReactorTemplate::LoadEvent(_x_com_ptr<IWzProperty> arg0,
                                            ZArray<ZRef<CReactorTemplate::REACTOREVENTINFO>>& arg1)
{
    return __sub_002D16C0(CreateNakedParam(arg0), arg1);
}

CReactorTemplate& CReactorTemplate::operator=(const CReactorTemplate& arg0)
{
    return _op_assign_12(this, arg0);
}

CReactorTemplate& CReactorTemplate::_op_assign_12(CReactorTemplate* pThis, const CReactorTemplate& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorTemplate::REACTOREVENTINFO::~REACTOREVENTINFO()
{
}

void CReactorTemplate::REACTOREVENTINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorTemplate::REACTOREVENTINFO::REACTOREVENTINFO(const CReactorTemplate::REACTOREVENTINFO& arg0)
{
    _ctor_1(arg0);
}

void CReactorTemplate::REACTOREVENTINFO::_ctor_1(const CReactorTemplate::REACTOREVENTINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorTemplate::REACTOREVENTINFO::REACTOREVENTINFO()
{
}

void CReactorTemplate::REACTOREVENTINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorTemplate::REACTOREVENTINFO& CReactorTemplate::REACTOREVENTINFO::operator=(
    const CReactorTemplate::REACTOREVENTINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CReactorTemplate::REACTOREVENTINFO& CReactorTemplate::REACTOREVENTINFO::_op_assign_3(
    CReactorTemplate::REACTOREVENTINFO* pThis, const CReactorTemplate::REACTOREVENTINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorTemplate::STATEINFO::~STATEINFO()
{
}

void CReactorTemplate::STATEINFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorTemplate::STATEINFO::STATEINFO(const CReactorTemplate::STATEINFO& arg0)
{
    _ctor_1(arg0);
}

void CReactorTemplate::STATEINFO::_ctor_1(const CReactorTemplate::STATEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorTemplate::STATEINFO::STATEINFO()
{
}

void CReactorTemplate::STATEINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorTemplate::STATEINFO& CReactorTemplate::STATEINFO::operator=(const CReactorTemplate::STATEINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CReactorTemplate::STATEINFO& CReactorTemplate::STATEINFO::_op_assign_3(CReactorTemplate::STATEINFO* pThis,
                                                                       const CReactorTemplate::STATEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
