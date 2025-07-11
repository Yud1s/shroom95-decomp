// MapLoadable.cpp
#include "MapLoadable.hpp"

#include <Field/Field.hpp>

static ZRef<CMapLoadable::OBSTACLE> FAKE_ZRef_CMapLoadable_OBSTACLE{};
static ZRef<CMapLoadable::REFLECTION_INFO> FAKE_ZRef_CMapLoadable_REFLECTION_INFO{};
static ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>> FAKE_ZRef_ZList__x_com_ptr_IWzGr2DLayer{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<ZList<_x_com_ptr<IWzGr2DLayer>>>>
FAKE_ZRefCounted_AllocHelper_ZList__x_com_ptr_IWzGr2DLayer{};

#include "MapLoadable_regen.ipp"


CMapLoadable::~CMapLoadable()
{
    get_rm()->raw_FlushCachedObjects(false);
}

void CMapLoadable::_dtor_0()
{
    //return __sub_00213170(this, nullptr);
}

CMapLoadable::CMapLoadable(const CMapLoadable& arg0)
{
    _ctor_1(arg0);
}

void CMapLoadable::_ctor_1(const CMapLoadable& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::CMapLoadable()
{
    //UNIMPLEMENTED; //_ctor_0();
}

void CMapLoadable::_ctor_0()
{
    new(this) CMapLoadable();
    //return __sub_00214950(this, nullptr);
}

void CMapLoadable::Init(void* pParam)
{
    __sub_00214DD0(this, nullptr, pParam);
}

void CMapLoadable::Close()
{
    //__sub_002133D0(this, nullptr);
    CStage::FadeOut();

    auto center = get_gr()->Getcenter();
    center->Putorigin(vtMissing);
    center->raw_Move(0, 0);

    m_lpLayerGen.RemoveAll();
    m_lpLayerObj.RemoveAll();
    m_mlLayerBack.RemoveAll();
    WeatherLayer_RemoveAll();
    m_lpObstacle.RemoveAll();
    m_mTagedObj.RemoveAll();
    m_lpLayerLetterBox.RemoveAll();
    m_pSpace2D = 0;
    m_bField = 0;
    CConfig::GetInstance()->ApplySysOpt(nullptr, false);

}

void CMapLoadable::Update()
{
    __sub_0021DFC0(this, nullptr);
}

void CMapLoadable::LoadMap()
{
    __sub_00223980(this, nullptr);
}

const tagRECT& CMapLoadable::GetViewRangeRect()
{
    return m_rcViewRange;
}

int32_t CMapLoadable::GetCollideObstacleRect(const tagRECT& rc, long& nDamage, unsigned long& dwObstacleData,
                                             tagPOINT& vecForce, unsigned long& dwTargetField, int32_t bIsMob)
{
    return __sub_00212660(this, nullptr, rc, nDamage, dwObstacleData, vecForce, dwTargetField, bIsMob);
}

int32_t CMapLoadable::IsInSafeZone(const tagRECT& rc)
{
    return __sub_00210720(this, nullptr, rc);
}

int32_t CMapLoadable::IsField()
{
    return this->IsKindOf(&CField::ms_RTTI_CField);
}

void CMapLoadable::CheckNearestObstacle(const tagPOINT& arg0, const tagRECT& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMapLoadable::TransientLayer_Exist()
{
    return __sub_005CF8F0(this, nullptr);
}

int32_t CMapLoadable::IsJukeBoxPlaying()
{
    return __sub_005CF8F0(this, nullptr);
}

void CMapLoadable::SetFieldMagLevel()
{
    __sub_00223770(this, nullptr);
}

void CMapLoadable::OnEventChangeScreenResolution()
{
    __sub_0021F550(this, nullptr);
}

void CMapLoadable::SetSysTrembleOpt(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMapLoadable::GetSysTrembleOpt()
{
    return __sub_005CF8F0(this, nullptr);
}

long CMapLoadable::GetObjectState(const char* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMapLoadable::SetObjectState(const char* sName, long nState)
{
    return __sub_002203B0(this, nullptr, sName, nState);
}

tagRECT CMapLoadable::GetObjectRect(const char* sName)
{
    tagRECT ret{};
    return *__sub_00220A70(this, nullptr, &ret, sName);
}

long CMapLoadable::GetObjectSN(const char* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMapLoadable::FootHoldMove(const char* sName, long x1, long y1)
{
    __sub_00220020(this, nullptr, sName, x1, y1);
}

void CMapLoadable::FootHoldStateChange(const char* sName, long nState)
{
    __sub_00220240(this, nullptr, sName, nState);
}

void CMapLoadable::PlayNextMusic()
{
    __sub_0021DAB0(this, nullptr);
}

void CMapLoadable::PrepareNextBGM()
{
    __sub_00210040(this, nullptr);
}

void CMapLoadable::UpdateObstacleInfo()
{
    __sub_0021A530(this, nullptr);
}

void CMapLoadable::OnLeaveDirectionMode()
{
    __sub_00210070(this, nullptr);
}

void CMapLoadable::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_0021FD80(this, nullptr, nType, iPacket);
}

void CMapLoadable::RestoreTile()
{
    __sub_0021E190(this, nullptr);
}

void CMapLoadable::MakeTile(int32_t nPageIdx, _x_com_ptr<IWzProperty> pTileSet, _x_com_ptr<IWzProperty> pPiece)
{
    __sub_0021B500(this, nullptr, nPageIdx, CreateNakedParam(pTileSet), CreateNakedParam(pPiece));
}

void CMapLoadable::RestoreObj()
{
    __sub_002233D0(this, nullptr);
}

void CMapLoadable::MakeObj(int32_t nPageIdx, _x_com_ptr<IWzProperty> pPiece)
{
    __sub_00220EE0(this, nullptr, nPageIdx, CreateNakedParam(pPiece));
}

_x_com_ptr<IWzGr2DLayer> CMapLoadable::MakeObjLayer(_x_com_ptr<IWzProperty> pProp, long nPageIdx, long x, long y,
                                                    long z, int32_t f, long rx, long ry, long nFlow, long nMagLevel,
                                                    long& nOption, const ZXString<char>& sObjName)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_0021F6C0(this, nullptr, &ret, CreateNakedParam(pProp), nPageIdx, x, y, z, f, rx, ry, nFlow, nMagLevel,
                           nOption, sObjName);
}

void CMapLoadable::MakeObstacles(_x_com_ptr<IWzProperty> pProp, _x_com_ptr<IWzGr2DLayer> pLayer, int32_t bFlip,
                                 const ZXString<char>& sObjName)
{
    __sub_0021E810(this, nullptr, CreateNakedParam(pProp), CreateNakedParam(pLayer), bFlip, sObjName);
}

void __cdecl CMapLoadable::AnimateObjLayer(_x_com_ptr<IWzGr2DLayer> pLayer, long nRepeat)
{
    __sub_002107B0(CreateNakedParam(pLayer), nRepeat);
}

void CMapLoadable::RestoreBack()
{
    __sub_0021EE00(this, nullptr);
}

void CMapLoadable::MakeBack(int32_t arg0, _x_com_ptr<IWzProperty> arg1, unsigned long arg2, int32_t arg3, long arg4,
                            long arg5, long arg6, long arg7)
{
    __sub_0021BBA0(this, nullptr, arg0, CreateNakedParam(arg1), arg2, arg3, arg4, arg5, arg6, arg7);
}

void CMapLoadable::MakeGrid(_x_com_ptr<IWzGr2DLayer> pLayer, long type, long cx, long cy, long alpha, long nAnimate,
                            int32_t bObj, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>> pList, unsigned long ulColor)
{
    __sub_00214F70(this, nullptr, CreateNakedParam(pLayer), type, cx, cy, alpha, nAnimate, bObj,
                   CreateNakedParam(pList), ulColor);
}

void CMapLoadable::MakeVectorAnimate(_x_com_ptr<IWzGr2DLayer> pLayer, _x_com_ptr<IWzVector2D> pOrigin)
{
    __sub_00216460(this, nullptr, CreateNakedParam(pLayer), CreateNakedParam(pOrigin));
}

void CMapLoadable::RestoreWeather()
{
    __sub_0021D6C0(this, nullptr);
}

void CMapLoadable::MakeCloud()
{
    __sub_00216DA0(this, nullptr);
}

void CMapLoadable::TransientLayer_Weather(const ZXString16& arg0, long arg1, long arg2, long arg3)
{
    __sub_002177C0(this, nullptr, arg0, arg1, arg2, arg3);
}

void CMapLoadable::TransientLayer_FireCracker(ZXString16 sPath)
{
    __sub_0021D7C0(this, nullptr, CreateNakedParam(sPath));
}

void CMapLoadable::WeatherLayer_RemoveAll()
{
    __sub_00212630(this, nullptr);
}

void CMapLoadable::TransientLayer_NewYear(ZXString16 sPath)
{
    __sub_0021D930(this, nullptr, CreateNakedParam(sPath));
}

void CMapLoadable::TransientLayer_Clear()
{
    __sub_00211B00(this, nullptr);
}

void CMapLoadable::RestoreViewRange()
{
    __sub_0021A010(this, nullptr);
}

void CMapLoadable::PlayBGMFromMapInfo()
{
    __sub_0021A330(this, nullptr);
}

void CMapLoadable::RestoreBGM()
{
    __sub_0021A4F0(this, nullptr);
}

void CMapLoadable::ProcessReflection()
{
    __sub_00213FE0(this, nullptr);
}

void CMapLoadable::RenderAvatar(_x_com_ptr<IWzCanvas> pCanvas, CAvatar* pAvatar, tagRECT* pRc)
{
    __sub_00213610(this, nullptr, CreateNakedParam(pCanvas), pAvatar, pRc);
}

void CMapLoadable::ReloadBack()
{
    __sub_0021F0C0(this, nullptr);
}

void CMapLoadable::RestoreLetterBox()
{
    __sub_0021DC70(this, nullptr);
}

void CMapLoadable::AddLetterBox(long w, long h, long l, long t)
{
    __sub_0021AEB0(this, nullptr, w, h, l, t);
}

void CMapLoadable::OnSetBackEffect(CInPacket& iPacket)
{
    __sub_00212850(this, nullptr, iPacket);
}

void CMapLoadable::OnClearBackEffect(CInPacket& iPacket)
{
    __sub_0021F230(this, nullptr, iPacket);
}

void CMapLoadable::OnSetMapObjectVisible(CInPacket& iPacket)
{
    __sub_0021AE00(this, nullptr, iPacket);
}

void CMapLoadable::SetMapObjectVisible(const ZXString<char>& sTag, int32_t bVisible)
{
    __sub_00214700(this, nullptr, sTag, bVisible);
}

void __cdecl CMapLoadable::SetLayerListVisible(ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>> plLayer, int32_t bVisible)
{
    __sub_00212CA0(CreateNakedParam(plLayer), bVisible);
}

void CMapLoadable::PlaySoundWithMuteBgm(const ZXString<char>& sName)
{
    __sub_0021F240(this, nullptr, sName);
}

CMapLoadable& CMapLoadable::operator=(const CMapLoadable& arg0)
{
    return _op_assign_64(this, arg0);
}

CMapLoadable& CMapLoadable::_op_assign_64(CMapLoadable* pThis, const CMapLoadable& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::OBSTACLE::~OBSTACLE()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CMapLoadable::OBSTACLE::_dtor_0()
{
    return __sub_002135A0(this, nullptr);
}

CMapLoadable::OBSTACLE::OBSTACLE(const CMapLoadable::OBSTACLE& arg0)
{
    _ctor_1(arg0);
}

void CMapLoadable::OBSTACLE::_ctor_1(const CMapLoadable::OBSTACLE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::OBSTACLE::OBSTACLE()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CMapLoadable::OBSTACLE::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::OBSTACLE& CMapLoadable::OBSTACLE::operator=(const CMapLoadable::OBSTACLE& arg0)
{
    return _op_assign_3(this, arg0);
}

CMapLoadable::OBSTACLE& CMapLoadable::OBSTACLE::_op_assign_3(CMapLoadable::OBSTACLE* pThis,
                                                             const CMapLoadable::OBSTACLE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::OBJECT_STATE::~OBJECT_STATE()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CMapLoadable::OBJECT_STATE::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::OBJECT_STATE::OBJECT_STATE(const CMapLoadable::OBJECT_STATE& arg0)
{
    _ctor_1(arg0);
}

void CMapLoadable::OBJECT_STATE::_ctor_1(const CMapLoadable::OBJECT_STATE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::OBJECT_STATE::OBJECT_STATE()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CMapLoadable::OBJECT_STATE::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::OBJECT_STATE& CMapLoadable::OBJECT_STATE::operator=(const CMapLoadable::OBJECT_STATE& arg0)
{
    return _op_assign_3(this, arg0);
}

CMapLoadable::OBJECT_STATE& CMapLoadable::OBJECT_STATE::_op_assign_3(CMapLoadable::OBJECT_STATE* pThis,
                                                                     const CMapLoadable::OBJECT_STATE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::CHANGING_OBJECT::~CHANGING_OBJECT()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CMapLoadable::CHANGING_OBJECT::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::CHANGING_OBJECT::CHANGING_OBJECT(const CMapLoadable::CHANGING_OBJECT& arg0)
{
    _ctor_1(arg0);
}

void CMapLoadable::CHANGING_OBJECT::_ctor_1(const CMapLoadable::CHANGING_OBJECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::CHANGING_OBJECT::CHANGING_OBJECT()
{
}

void CMapLoadable::CHANGING_OBJECT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::CHANGING_OBJECT& CMapLoadable::CHANGING_OBJECT::operator=(const CMapLoadable::CHANGING_OBJECT& arg0)
{
    return _op_assign_3(this, arg0);
}

CMapLoadable::CHANGING_OBJECT& CMapLoadable::CHANGING_OBJECT::_op_assign_3(
    CMapLoadable::CHANGING_OBJECT* pThis, const CMapLoadable::CHANGING_OBJECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::REFLECTION_INFO::~REFLECTION_INFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CMapLoadable::REFLECTION_INFO::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::REFLECTION_INFO::REFLECTION_INFO(const CMapLoadable::REFLECTION_INFO& arg0)
{
    _ctor_1(arg0);
}

void CMapLoadable::REFLECTION_INFO::_ctor_1(const CMapLoadable::REFLECTION_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::REFLECTION_INFO::REFLECTION_INFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CMapLoadable::REFLECTION_INFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::REFLECTION_INFO& CMapLoadable::REFLECTION_INFO::operator=(const CMapLoadable::REFLECTION_INFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CMapLoadable::REFLECTION_INFO& CMapLoadable::REFLECTION_INFO::_op_assign_3(
    CMapLoadable::REFLECTION_INFO* pThis, const CMapLoadable::REFLECTION_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::VISIBLE_BY_QUEST::~VISIBLE_BY_QUEST()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CMapLoadable::VISIBLE_BY_QUEST::_dtor_0()
{
    return __sub_00213110(this, nullptr);
}

CMapLoadable::VISIBLE_BY_QUEST::VISIBLE_BY_QUEST(const CMapLoadable::VISIBLE_BY_QUEST& arg0)
{
    _ctor_1(arg0);
}

void CMapLoadable::VISIBLE_BY_QUEST::_ctor_1(const CMapLoadable::VISIBLE_BY_QUEST& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::VISIBLE_BY_QUEST::VISIBLE_BY_QUEST()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CMapLoadable::VISIBLE_BY_QUEST::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMapLoadable::VISIBLE_BY_QUEST& CMapLoadable::VISIBLE_BY_QUEST::operator=(const CMapLoadable::VISIBLE_BY_QUEST& arg0)
{
    return _op_assign_3(this, arg0);
}

CMapLoadable::VISIBLE_BY_QUEST& CMapLoadable::VISIBLE_BY_QUEST::_op_assign_3(
    CMapLoadable::VISIBLE_BY_QUEST* pThis, const CMapLoadable::VISIBLE_BY_QUEST& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl draw_layer(_x_com_ptr<IWzCanvas> pCanvas, _x_com_ptr<IWzGr2DLayer> pLayer, long ox, long oy, tagRECT* pRc,
                        int32_t bIsLeft)
{
    return __sub_00210A50(CreateNakedParam(pCanvas), CreateNakedParam(pLayer), ox, oy, pRc, bIsLeft);
}
