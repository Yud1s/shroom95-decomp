// MacroSysMan.cpp
#include "MacroSysMan.hpp"
#include "MacroSysMan_regen.ipp"

CMacroSysMan::~CMacroSysMan()
{
}

void CMacroSysMan::_dtor_0()
{
    return __sub_0020EB30(this, nullptr);
}

CMacroSysMan::CMacroSysMan(const CMacroSysMan& arg0)
{
    _ctor_1(arg0);
}

void CMacroSysMan::_ctor_1(const CMacroSysMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMacroSysMan::CMacroSysMan()
{
    //TODO UNIMPLEMENTED; //_ctor_0();
}

void CMacroSysMan::_ctor_0()
{
    return __sub_0020EAE0(this, nullptr);
}

void CMacroSysMan::Update()
{
    __sub_0020EDF0(this, nullptr);
}

void CMacroSysMan::Reset()
{
    __sub_0020EDD0(this, nullptr);
}

void CMacroSysMan::CheckMacro()
{
    __sub_0020E520(this, nullptr);
}

void CMacroSysMan::SetMacro(CInPacket& iPacket)
{
    __sub_0020E580(this, nullptr, iPacket);
}

long CMacroSysMan::GetMacro(long nMacroIdx, long nSkillIdx)
{
    return __sub_0020E5D0(this, nullptr, nMacroIdx, nSkillIdx);
}

ZXString<char> CMacroSysMan::GetMacroName(long nMacroIdx)
{
    ZXString<char> ret;
    return *__sub_0020EFA0(this, nullptr, &ret, nMacroIdx);
}

long CMacroSysMan::GetMacroCount()
{
    UNIMPLEMENTED;
}

void CMacroSysMan::FlushToSvr()
{
    __sub_0020EA20(this, nullptr);
}

void CMacroSysMan::DoActiveMacro(long nMacroIdx)
{
    __sub_0020F190(this, nullptr, nMacroIdx);
}

void CMacroSysMan::Stop()
{
    __sub_0020EBE0(this, nullptr);
}

int32_t CMacroSysMan::IsOnPlayingMacro()
{

    return m_lDoingNow.GetCount() > 0;
}

void CMacroSysMan::Delete(long nMacroIdx, long nSkillIdx)
{
    __sub_0020E5A0(this, nullptr, nMacroIdx, nSkillIdx);
}

void CMacroSysMan::Map(long nMacroIdx, long nSkillIdx, long nSkillID)
{
    __sub_0020EC80(this, nullptr, nMacroIdx, nSkillIdx, nSkillID);
}

int32_t CMacroSysMan::IsShoutMacro(long nMacroIdx)
{
    //return __sub_0020E610(this, nullptr, nMacroIdx);
    return nMacroIdx < 0
      || nMacroIdx >= m_macrosysdata.aMacroSkill.GetCount()
      || !m_macrosysdata.aMacroSkill[nMacroIdx].bMute;
}

void CMacroSysMan::SetMacroInfo(long nMacroIdx, ZXString<char> sName, int32_t bShout)
{
    __sub_0020ECB0(this, nullptr, nMacroIdx, CreateNakedParam(sName), bShout);
}

int32_t CMacroSysMan::CanItShow(ZXString16 sChat)
{
    return __sub_0020F0E0(this, nullptr, CreateNakedParam(sChat));
}

void CMacroSysMan::ValidateMacro()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMacroSysMan::Realloc(long nMacroCount)
{
    __sub_0020EC10(this, nullptr, nMacroCount);
}

CMacroSysMan& CMacroSysMan::operator=(const CMacroSysMan& arg0)
{
    return _op_assign_21(this, arg0);
}

CMacroSysMan& CMacroSysMan::_op_assign_21(CMacroSysMan* pThis, const CMacroSysMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
