// KeywordEffectManager.cpp
#include "KeywordEffectManager.hpp"

static ZMap<long, _x_com_ptr<IWzProperty>, long> _FAKE_ZMap_long__x_com_ptr_IWzProperty_long;
static ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>> _FAKE_ZRef_ZMap_long__x_com_ptr_IWzProperty_long;
#include "KeywordEffectManager_regen.ipp"

CKeywordEffectManager::~CKeywordEffectManager()
{
}

void CKeywordEffectManager::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CKeywordEffectManager::CKeywordEffectManager(const CKeywordEffectManager& arg0)
{
    _ctor_1(arg0);
}

void CKeywordEffectManager::_ctor_1(const CKeywordEffectManager& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CKeywordEffectManager::CKeywordEffectManager()
{
}

void CKeywordEffectManager::_ctor_0()
{
    new(this) CKeywordEffectManager();
    //return __sub_001CC470(this, nullptr);
}

_x_com_ptr<IWzProperty> __cdecl CKeywordEffectManager::GetKeywordEffectProp(long nItemID)
{
    return __sub_001CC640(nItemID);
}

void CKeywordEffectManager::Show(const char* szChat, _x_com_ptr<IWzVector2D> pOrigin, long base_z)
{
    __sub_001CCFD0(this, nullptr, szChat, CreateNakedParam(pOrigin), base_z);
}

void CKeywordEffectManager::RegisterKeyword(const char* szKeyword, long nItemID, _x_com_ptr<IWzProperty> pProp)
{
    __sub_001CD110(this, nullptr, szKeyword, nItemID, CreateNakedParam(pProp));
}

void CKeywordEffectManager::ClearKeyword()
{
    __sub_001CC0D0(this, nullptr);
}

void CKeywordEffectManager::Update()
{
    __sub_001CBE50(this, nullptr);
}

void CKeywordEffectManager::ShowKeywordEffect(const char* szKeyword, _x_com_ptr<IWzVector2D> pOrigin, long base_z)
{
    __sub_001CCAD0(this, nullptr, szKeyword, CreateNakedParam(pOrigin), base_z);
}

CKeywordEffectManager& CKeywordEffectManager::operator=(const CKeywordEffectManager& arg0)
{
    return _op_assign_9(this, arg0);
}

CKeywordEffectManager& CKeywordEffectManager::_op_assign_9(CKeywordEffectManager* pThis,
                                                           const CKeywordEffectManager& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
