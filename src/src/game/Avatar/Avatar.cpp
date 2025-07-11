// Avatar.cpp
#include "Avatar.hpp"

static ZRef<CActionMan::CHARACTERIMGENTRY> FAKE_ZRef_CActionMan_CHARACTERIMGENTRY{};

#include "Avatar_regen.ipp"

template <typename T, size_t N>
bool arr_contains(const std::array<T, N>& arr, const T& val)
{
    return std::find(arr.begin(), arr.end(), val) != arr.end();
}

AvatarLook::~AvatarLook()
{
    //UNIMPLEMENTED; // _dtor_0();
}

void AvatarLook::_dtor_0()
{
    this->~AvatarLook();
}

AvatarLook::AvatarLook(const AvatarLook& __that)
{
    //_ctor_2(__that);
    nGender = __that.nGender;
    nSkin = __that.nSkin;
    nFace = __that.nFace;
    nWeaponStickerID = __that.nWeaponStickerID;
    anHairEquip = __that.anHairEquip;
    anUnseenEquip = __that.anUnseenEquip;
}

void AvatarLook::_ctor_2(const AvatarLook& __that)
{
    //return __sub_0006D470(this, nullptr, __that);
    new(this) AvatarLook(__that);
}

AvatarLook::AvatarLook(const GW_CharacterStat& cs, const ZRef<GW_ItemSlotBase>* apEquipped,
                       const ZRef<GW_ItemSlotBase>* apEquipped2)
{
    //_ctor_0(cs, apEquipped, apEquipped2);
    Load(cs, apEquipped, apEquipped2);
}

void AvatarLook::_ctor_4(const GW_CharacterStat& cs, const ZRef<GW_ItemSlotBase>* apEquipped,
                         const ZRef<GW_ItemSlotBase>* apEquipped2)
{
    //return __sub_0057ACD0(this, nullptr, cs, apEquipped, apEquipped2);
    new(this) AvatarLook(cs, apEquipped, apEquipped2);
}

AvatarLook::AvatarLook(const GW_CharacterStat& arg0, const long* arg1, const long* arg2)
{
    _ctor_3(arg0, arg1, arg2);
}

void AvatarLook::_ctor_3(const GW_CharacterStat& arg0, const long* arg1, const long* arg2) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

AvatarLook::AvatarLook(const CharacterData& cd)
{
    Load(cd.characterStat, cd.aEquipped.data(), cd.aEquipped2.data());
}

void AvatarLook::_ctor_0(const CharacterData& cd)
{
    new(this) AvatarLook(cd);
}

AvatarLook::AvatarLook(CInPacket& iPacket)
{
    //_ctor_5(iPacket);
    Decode(iPacket);
}

void AvatarLook::_ctor_5(CInPacket& iPacket)
{
    //return __sub_002371D0(this, nullptr, iPacket);
    new(this) AvatarLook(iPacket);
}

AvatarLook::AvatarLook()
{
    //UNIMPLEMENTED; //_ctor_1();
}

void AvatarLook::_ctor_1()
{
    //return __sub_00038B60(this, nullptr);
    new(this) AvatarLook();
}

void AvatarLook::Load(const GW_CharacterStat& cs, const ZRef<GW_ItemSlotBase>* apEquipped,
                      const ZRef<GW_ItemSlotBase>* apEquipped2)
{
    //__sub_000F6E70(this, nullptr, cs, apEquipped, apEquipped2);
    nGender = cs.nGender;
    nSkin = cs.nSkin;
    nFace = cs.nFace;

    anHairEquip.fill(0);
    anUnseenEquip.fill(0);
    anHairEquip[0] = cs.nHair;


    for (auto i = 1; i < 60; ++i)
    {
        // Skip weapon
        /*if (i == 11)
        {
            continue;
        }*/

        if (auto item = apEquipped[i])
        {
            anHairEquip[i] = item->nItemID;
        }

        if (auto item = apEquipped2[i])
        {
            anUnseenEquip[i] = item->nItemID;
        }
    }

    if (auto weapon = apEquipped2[11])
    {
        nWeaponStickerID = weapon->nItemID;
    }
    else
    {
        nWeaponStickerID = 0;
    }
}

void AvatarLook::Load(const GW_CharacterStat& arg0, const long* arg1, const long* arg2) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void AvatarLook::Load(const CharacterData& cd)
{
    Load(cd.characterStat, cd.aEquipped.data(), cd.aEquipped2.data());
    //__sub_00029660(this, nullptr, cd);
}

void AvatarLook::Encode(COutPacket& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void AvatarLook::Decode(CInPacket& iPacket)
{
    nGender = iPacket.Decode1();
    nSkin = iPacket.Decode1();
    nFace = iPacket.Decode4();
    anHairEquip.fill(0);

    iPacket.Decode1();
    anHairEquip[0] = iPacket.Decode4();

    while (true)
    {
        const auto nBodyParty = iPacket.Decode1();
        if (nBodyParty == 0xFF)
        {
            break;
        }

        if (const auto id = static_cast<long>(iPacket.Decode4()); nBodyParty <= 59 && nBodyParty && is_correct_bodypart(
            id, nBodyParty, 2))
        {
            anHairEquip[nBodyParty] = id;
        }
    }

    anUnseenEquip.fill(0);
    while (true)
    {
        auto nBodyParty = iPacket.Decode1();
        if (nBodyParty == 0xFF)
        {
            break;
        }

        auto id = static_cast<long>(iPacket.Decode4());
        if (nBodyParty <= 59 && nBodyParty && is_correct_bodypart(id, nBodyParty, 2))
        {
            anUnseenEquip[nBodyParty] = id;
        }
    }

    nWeaponStickerID = iPacket.Decode4();
    anPetID[0] = iPacket.Decode4();
    anPetID[1] = iPacket.Decode4();
    anPetID[2] = iPacket.Decode4();
    //__sub_000F2C00(this, nullptr, iPacket);
}

AvatarLook& AvatarLook::operator=(const AvatarLook& __that)
{
    //return _op_assign_12(this, __that);
    nGender = __that.nGender;
    nSkin = __that.nSkin;
    nFace = __that.nFace;
    nWeaponStickerID = __that.nWeaponStickerID;
    anHairEquip = __that.anHairEquip;
    anUnseenEquip = __that.anUnseenEquip;
    anPetID = __that.anPetID;
    return *this;
}

AvatarLook& AvatarLook::_op_assign_12(AvatarLook* pThis, const AvatarLook& __that)
{
    //return __sub_0005F2A0(pThis, nullptr, __that);
    return *pThis = __that;
}

CAvatar::~CAvatar()
{
}

void CAvatar::_dtor_0()
{
    this->~CAvatar();
    //return __sub_000644C0(this, nullptr);
}

CAvatar::CAvatar(const CAvatar& arg0)
{
    _ctor_1(arg0);
}

void CAvatar::_ctor_1(const CAvatar& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAvatar::CAvatar()
{
    m_nTamingMobOneTimeAction = -1;
    m_nTamingMobAction = 2;

    const auto dirMode = CWvsContext::GetInstance()->GetDirectionMode();
    m_nMoveAction = ((dirMode & 1) | 6);
    m_nScale = -1;
    this->_ZtlSecurePut_m_nEmotion(-1);
}

void CAvatar::_ctor_0()
{
    new(this) CAvatar();
    //return __sub_000667C0(this, nullptr);
}

void CAvatar::Init(_x_com_ptr<IWzVector2D> pOrigin, long x, long y, _x_com_ptr<IWzGr2DLayer> pOverlay, long z)
{
    __sub_00062330(this, nullptr, CreateNakedParam(pOrigin), x, y, CreateNakedParam(pOverlay), z);

    //TODO check !x && !y
    /*if (x || y)
    {
        m_pRawOrigin = G_PCOM.CreateVector2D();
        m_pRawOrigin->PutOrigin(pOrigin);
        m_pRawOrigin->RelMove(x, y, vtMissing, vtMissing);
    }
    else
    {
        m_pRawOrigin = pOrigin;
    }
    m_pOrigin = G_PCOM.CreateVector2D();
    m_pOrigin->PutOrigin(m_pRawOrigin);
    m_pOrigin->RelMove(0, 0, vtMissing, vtMissing);

    m_pBodyOrigin = G_PCOM.CreateVector2D();
    m_pBodyOrigin->PutOrigin(m_pRawOrigin);
    m_pBodyOrigin->RelMove(0, 0, vtMissing, vtMissing);

    m_pFaceOrigin = G_PCOM.CreateVector2D();
    m_pFaceOrigin->PutOrigin(m_pRawOrigin);

    m_pMuzzleOrigin = G_PCOM.CreateVector2D();
    m_pMuzzleOrigin->PutOrigin(m_pRawOrigin);

    m_pTMNavelOrigin = G_PCOM.CreateVector2D();
    m_pTMNavelOrigin->PutOrigin(m_pOrigin);

    m_pTMHeadOrigin = G_PCOM.CreateVector2D();
    m_pTMHeadOrigin->PutOrigin(m_pOrigin);

    m_pTMMuzzleOrigin = G_PCOM.CreateVector2D();
    m_pTMMuzzleOrigin->PutOrigin(m_pOrigin);


    auto layerFilter = Ztl_variant_t(m_nScale != 100 ? 2 : 0);
    m_pLayerUnderFace = get_gr()->CreateLayer(0, 0, 0, 0, 0, Ztl_variant_t(0), layerFilter);
    m_pLayerUnderFace->PutOrigin(m_pBodyOrigin);
    m_pLayerUnderFace->Putcolor(0xFFFFFF);

    if (pOverlay)
    {
        m_pLayerUnderFace->PutOverlay(pOverlay);
        m_pLayerUnderFace->Putz(z);
    }


    m_pLayerFace = get_gr()->CreateLayer(0, 0, 0, 0, 1, Ztl_variant_t(0), layerFilter);
    m_pLayerFace->PutOrigin(m_pFaceOrigin);
    m_pLayerFace->PutOverlay(m_pLayerUnderFace);
    m_pLayerFace->Putcolor(0xFFFFFF);

    m_pLayerOverFace = get_gr()->CreateLayer(0, 0, 0, 0, 2, Ztl_variant_t(0), layerFilter);
    m_pLayerOverFace->PutOrigin(m_pBodyOrigin);
    m_pLayerOverFace->PutOverlay(m_pLayerUnderFace);
    m_pLayerOverFace->Putcolor(0xFFFFFF);

    m_pLayerShadowPartner = get_gr()->CreateLayer(0, 0, 0, 0, -2, Ztl_variant_t(0), layerFilter);
    m_pLayerShadowPartner->PutOrigin(m_pBodyOrigin);
    m_pLayerShadowPartner->PutOverlay(m_pLayerUnderFace);
    m_pLayerShadowPartner->Putcolor(0xFFFFFF);

    for (auto& act : m_aiAction)
    {
        act.aSPAction.Alloc(0x111);
    }

    m_pLayerUnderCharacter = get_gr()->CreateLayer(0, 0, 0, 0, -1, Ztl_variant_t(0), layerFilter);
    m_pLayerUnderCharacter->PutOrigin(m_pOrigin);
    m_pLayerUnderCharacter->PutOverlay(m_pLayerUnderFace);
    m_pLayerUnderCharacter->Putcolor(0xFFFFFF);

    m_pLayerOverCharacter = get_gr()->CreateLayer(0, 0, 0, 0, 3, Ztl_variant_t(0), layerFilter);
    m_pLayerOverCharacter->PutOrigin(m_pOrigin);
    m_pLayerOverCharacter->PutOverlay(m_pLayerUnderFace);
    m_pLayerOverCharacter->Putcolor(0xFFFFFF);

    m_pLayerOverlay = get_gr()->CreateLayer(0, 0, 0, 0, 0, Ztl_variant_t(0), layerFilter);
    m_pLayerOverlay->PutOverlay(m_pLayerUnderFace);
    //m_pLayerOverlay->Putcolor(0xFFFFFF);


    int orgX = 0;
    int orgY = 0;
    m_pOrigin->_GetSnapshot(&orgX, &orgY, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, vtMissing);

    m_ptPosPrev.x = orgX;
    m_ptPosPrev.y = orgY;
    m_ptPos.x = orgX;
    m_ptPos.y = orgY;*/
}

void CAvatar::Init(const AvatarLook& al, const long nMoveAction, _x_com_ptr<IWzVector2D> pOrigin,
                   const _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long x, long y, long nScale, long nDefaultEmotion)
{
    m_nScale = nScale;
    Init(pOrigin, x, y, pOverlay, z);
    m_avatarLook = al;
    m_nMoveAction = nMoveAction;
    m_nDefaultEmotion = nDefaultEmotion;
    NotifyAvatarModified(false);

    /*__sub_0006D360(this, nullptr, al, nMoveAction, CreateNakedParam(pOrigin), CreateNakedParam(pOverlay), z, x, y,
      ´             nScale, nDefaultEmotion);*/
}

AvatarLook& CAvatar::GetAvatarLook()
{
    return m_avatarLook;
}

void CAvatar::SetAvatarLook(const AvatarLook& al)
{
    m_avatarLook = al;
    NotifyAvatarModified(false);
    //__sub_0006D450(this, nullptr, al);
}

int32_t CAvatar::IsForcingAppearance() const
{
    return m_bForcingAppearance;
}

long* CAvatar::GetAvatarHairEquipForced()
{
    return m_aAvatarHairEquipForced.data();
}

void CAvatar::NotifyAvatarModified(int32_t bForced)
{
    __sub_0006BB20(this, nullptr, bForced);
}

int32_t CAvatar::CanUseBareHand()
{
    return 0;
}

int32_t CAvatar::IsEvanJob()
{
    return 0;
}

void CAvatar::OnAvatarModified()
{
}

long CAvatar::GetGender() const
{
    return this->m_avatarLook.nGender;
    //return __sub_00060170(this, nullptr);
}

void CAvatar::ForcingAppearance(int32_t bSet, long* pAvatarHairEquip)
{
    if (!pAvatarHairEquip)
    {
        return;
    }

    m_nRidingVehicleID = 0;
    m_nRidingChairID = 0;
    m_bForcingAppearance = bSet;
    if (bSet)
    {
        std::copy_n(pAvatarHairEquip, m_aAvatarHairEquipForced.size(),
                    m_aAvatarHairEquipForced.begin());
    }
    ClearActionLayer(false);
    if (GetOneTimeAction() <= -1)
    {
        SetMoveAction(m_nMoveAction, true);
    }
    //__sub_00066A90(this, nullptr, bSet, pAvatarHairEquip);
}

long CAvatar::GetWeaponItemID() const
{
    return this->m_nWeaponItemID;
    //return __sub_000FEEA0(this, nullptr);
}

long CAvatar::GetSubWeaponItemID() const
{
    return this->m_nSubWeaponItemID;
    // return __sub_000FEEA0(this, nullptr);
}

long CAvatar::GetShieldItemID()
{
    return m_nShieldItemID;
    return __sub_000FEEA0(this, nullptr);
}

int32_t CAvatar::IsAlertMode() const
{
    //TODO might be a time check
    return m_tAlertRemain >= 0;
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsDead() const
{
    return (this->m_nMoveAction & 0xFFFFFFFE) == 18;
    //return __sub_000FFF80(this, nullptr);
}

long CAvatar::GetMoveAction() const
{
    return m_nMoveAction;
    //return __sub_000FEEA0(this, nullptr);
}

void CAvatar::SetMoveAction(long nMA, int32_t bReload)
{
    if (is_wildhunter_jaguar_vehicle(m_nRidingVehicleID))
    {
        SetResistanceRidingMoveAction(nMA, bReload);
    }
    else if (bReload || nMA != m_nMoveAction)
    {
        m_nMoveAction = nMA;
        if (IsDead())
        {
            m_nOneTimeAction = -1;
            m_nTamingMobOneTimeAction = -1;
            ClearActionLayer(1);
        }
        if (GetOneTimeAction() <= -1)
        {
            PrepareActionLayer(6, 100, false);
        }
    }
    else
    {
        return;
    }

    auto raw = MoveAction2RawAction(m_nMoveAction, nullptr);
    if (IsOnPlayingOneTimeAction())
    {
        raw = GetOneTimeAction();
    }
    if ((m_dwMorphTemplateID && (raw == 8 || raw == 20))
        || (!m_dwMorphTemplateID && (raw == 42 || raw == 41 || raw == 57)))
    {
        if (GetEmotion() == 8)
        {
            SetEmotion(0, -1);
        }
    }

    //__sub_0006BF40(this, nullptr, nMA, bReload);
}

void CAvatar::SetLayerZ(const long z) const
{
    if (m_pLayerUnderFace)
    {
        m_pLayerUnderFace->Putz(z);
    }
    //__sub_00060120(this, nullptr, z);
}

long CAvatar::GetLayerZ() const
{
    if (!m_pLayerUnderFace)
        return 0;
    return m_pLayerUnderFace->Getz();
    //return __sub_00060170(this, nullptr);
}

void CAvatar::SetLayerColor(const long nColor) const
{
    m_pLayerFace->Putcolor(nColor);
    m_pLayerOverFace->Putcolor(nColor);
    m_pLayerUnderFace->Putcolor(nColor);
    //__sub_000601D0(this, nullptr, nColor);
}

int32_t CAvatar::IsOnPlayingOneTimeAction() const
{
    return GetOneTimeAction() > -1;
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsOnPlayingRotateAction() const
{
    constexpr std::array<long, 6> aRotateAction{
        82,
        101,
        114,
        149,
        151,
        193
    };
    return arr_contains(aRotateAction, GetOneTimeAction());
    //return __sub_000FFF80(this, nullptr);
}

long CAvatar::GetOneTimeAction() const
{
    int iVar1 = 0;

    if ((this->m_dwMorphTemplateID == 0) ||
        (iVar1 = CMorphTemplate::IsSuperMan(this->m_dwMorphTemplateID), iVar1 == 0))
    {
        if ((this->m_dwMorphTemplateID != 0) &&
            (iVar1 = CMorphTemplate::IsAttackableMorphed(this->m_dwMorphTemplateID), iVar1 != 0))
        {
            iVar1 = this->m_nOneTimeAction;
            if (iVar1 < 0x10a)
            {
                if (iVar1 == 0x109)
                {
                    return 0x2c;
                }
                switch (iVar1)
                {
                case 9:
                    goto switchD_0045f40e_caseD_9;
                case 0xb:
                    goto switchD_0045f40e_caseD_b;
                case 0x10:
                    goto switchD_0045f40e_caseD_10;
                case 0x11:
                    goto switchD_0045f40e_caseD_11;
                case 0x1f:
                    goto switchD_0045f40e_caseD_1f;
                case 0x24:
                    goto switchD_0045f40e_caseD_24;
                case 0x29:
                    goto switchD_0045f40e_caseD_29;
                case 0x3a:
                    goto switchD_0045f40e_caseD_3a;
                case 0x3b:
                    goto switchD_0045f40e_caseD_3b;
                case 0x3c:
                    goto switchD_0045f40e_caseD_3c;
                case 0x3d:
                    goto switchD_0045f40e_caseD_3d;
                case 0x40:
                    goto switchD_0045f40e_caseD_40;
                case 0x41:
                    goto switchD_0045f40e_caseD_41;
                case 0x65:
                    goto switchD_0045f40e_caseD_65;
                case 0x66:
                    goto switchD_0045f40e_caseD_66;
                case 0x67:
                    goto switchD_0045f40e_caseD_67;
                case 0x68:
                    goto switchD_0045f40e_caseD_68;
                case 0x69:
                    goto switchD_0045f40e_caseD_69;
                case 0x6a:
                    goto switchD_0045f40e_caseD_6a;
                case 0x6b:
                    goto switchD_0045f40e_caseD_6b;
                case 0x6c:
                    goto switchD_0045f40e_caseD_6c;
                case 0x6d:
                    goto switchD_0045f40e_caseD_6d;
                case 0x71:
                    goto switchD_0045f40e_caseD_71;
                case 0x75:
                    goto switchD_0045f40e_caseD_75;
                case 0x78:
                    goto switchD_0045f40e_caseD_78;
                case 0x79:
                    goto switchD_0045f40e_caseD_79;
                case 0x89:
                    goto switchD_0045f40e_caseD_89;
                case 0x8e:
                    goto switchD_0045f40e_caseD_8e;
                default:
                    UNIMPLEMENTED;
                }
            }
            else
            {
                switch (iVar1)
                {
                case 0x10a:
                    goto switchD_0045f4e7_caseD_10a;
                case 0x10b:
                    goto switchD_0045f4e7_caseD_10b;
                case 0x10c:
                    goto switchD_0045f4e7_caseD_10c;
                case 0x10d:
                    goto switchD_0045f4e7_caseD_10d;
                case 0x10e:
                    goto switchD_0045f4e7_caseD_10e;
                case 0x10f:
                    goto switchD_0045f4e7_caseD_10f;
                case 0x110:
                    goto switchD_0045f4e7_caseD_110;
                default:
                    UNIMPLEMENTED;
                }
            }
        }
    }
    else
    {
        iVar1 = this->m_nOneTimeAction;
        if (iVar1 < 0x10a)
        {
            if (iVar1 == 0x109)
            {
                return 0x2c;
            }
            switch (iVar1)
            {
            case 9:
            switchD_0045f40e_caseD_9:
                return 0x10;
            case 0xb:
            switchD_0045f40e_caseD_b:
                return 0x11;
            case 0x10:
            switchD_0045f40e_caseD_10:
                return 0x15;
            case 0x11:
            switchD_0045f40e_caseD_11:
                return 0x16;
            case 0x1f:
            switchD_0045f40e_caseD_1f:
                return 0x12;
            case 0x24:
            switchD_0045f40e_caseD_24:
                return 0x13;
            case 0x29:
            switchD_0045f40e_caseD_29:
                return 0x14;
            case 0x3a:
            switchD_0045f40e_caseD_3a:
                return 4;
            case 0x3b:
            switchD_0045f40e_caseD_3b:
                return 5;
            case 0x3c:
            switchD_0045f40e_caseD_3c:
                return 6;
            case 0x3d:
            switchD_0045f40e_caseD_3d:
                return 3;
            case 0x40:
            switchD_0045f40e_caseD_40:
                return 0x1b;
            case 0x41:
            switchD_0045f40e_caseD_41:
                return 0x1c;
            case 0x65:
            switchD_0045f40e_caseD_65:
                return 0x1f;
            case 0x66:
            switchD_0045f40e_caseD_66:
                return 0x20;
            case 0x67:
            switchD_0045f40e_caseD_67:
                return 0x19;
            case 0x68:
            switchD_0045f40e_caseD_68:
                return 0x23;
            case 0x69:
            switchD_0045f40e_caseD_69:
                return 0x24;
            case 0x6a:
            switchD_0045f40e_caseD_6a:
                return 0x21;
            case 0x6b:
            switchD_0045f40e_caseD_6b:
                return 0x22;
            case 0x6c:
            switchD_0045f40e_caseD_6c:
                return 0x26;
            case 0x6d:
            switchD_0045f40e_caseD_6d:
                return 0x1e;
            case 0x71:
            switchD_0045f40e_caseD_71:
                return 0x1a;
            case 0x75:
            switchD_0045f40e_caseD_75:
                return 0x27;
            case 0x78:
            switchD_0045f40e_caseD_78:
                return 0x25;
            case 0x79:
            switchD_0045f40e_caseD_79:
                return 0x18;
            case 0x89:
            switchD_0045f40e_caseD_89:
                return 0x28;
            case 0x8e:
            switchD_0045f40e_caseD_8e:
                return 0x1d;
            default:
                UNIMPLEMENTED;
            }
        }
        else
        {
            switch (iVar1)
            {
            case 0x10a:
            switchD_0045f4e7_caseD_10a:
                return 0x2d;
            case 0x10b:
            switchD_0045f4e7_caseD_10b:
                return 0x2e;
            case 0x10c:
            switchD_0045f4e7_caseD_10c:
                return 0x2f;
            case 0x10d:
            switchD_0045f4e7_caseD_10d:
                return 0x30;
            case 0x10e:
            switchD_0045f4e7_caseD_10e:
                return 0x29;
            case 0x10f:
            switchD_0045f4e7_caseD_10f:
                return 0x2a;
            case 0x110:
            switchD_0045f4e7_caseD_110:
                return 0x2b;

            default:
                UNIMPLEMENTED;
            }
        }
    }
    return this->m_nOneTimeAction;
    //return __sub_000FEEA0(this, nullptr);
}

int32_t CAvatar::IsLeft() const
{
    return m_nMoveAction & 1;
    //return __sub_000FFF80(this, nullptr);
}

long CAvatar::GetCurrentAction(long* pnDir)
{
    const auto res = MoveAction2RawAction(m_nMoveAction, pnDir);
    if (IsOnPlayingOneTimeAction())
    {
        return GetOneTimeAction();
    }
    return res;
    //return __sub_00060800(this, nullptr, pnDir);
}

void CAvatar::GetBodyRect(tagRECT& rc, int32_t bContinuous)
{
    /*auto check = (this->m_nMoveAction & 0xFFFFFFFE) == 10;
    if (m_dwMorphTemplateID)
    {

    }*/
    __sub_00062190(this, nullptr, rc, bContinuous);
}

long CAvatar::GetHeight()
{
    return __sub_000FEEA0(this, nullptr);
}

void CAvatar::SetEmotion(long nEmotion, long tDuration)
{
    __sub_00066B00(this, nullptr, nEmotion, tDuration);
}

long CAvatar::GetEmotion() const
{
    return _ZtlSecureFuseHelper<long>::call(_ZtlSecureTear_m_nEmotion.data(), _ZtlSecureTear_m_nEmotion_CS);
    //return __sub_000FEEA0(this, nullptr);
}

_x_com_ptr<IWzGr2DLayer> CAvatar::GetLayerUnderFace()
{
    return m_pLayerUnderFace;
    //return __sub_00060860(this, nullptr);
}

_x_com_ptr<IWzVector2D> CAvatar::GetOrigin()
{
    return m_pOrigin;
    //return __sub_00060890(this, nullptr);
}

_x_com_ptr<IWzVector2D> CAvatar::GetFaceOrigin()
{
    return m_pFaceOrigin;
    //return __sub_00060890(this, nullptr);
}

_x_com_ptr<IWzVector2D> CAvatar::GetBodyOrigin()
{
    return m_pBodyOrigin;
    //return __sub_00060890(this, nullptr);
}

_x_com_ptr<IWzVector2D> CAvatar::GetTMNavelOrigin()
{
    return m_pTMNavelOrigin;
    //return __sub_00060890(this, nullptr);
}

_x_com_ptr<IWzVector2D> CAvatar::GetTMHeadOrigin()
{
    return m_pTMHeadOrigin;
    //return __sub_00060890(this, nullptr);
}

_x_com_ptr<IWzVector2D> CAvatar::GetTMMuzzleOrigin()
{
    return m_pTMMuzzleOrigin;
    //return __sub_00060890(this, nullptr);
}

_x_com_ptr<IWzVector2D> CAvatar::GetSuitableMuzzleOrigin()
{
    return m_pMuzzleOrigin;
    //return __sub_00060890(this, nullptr);
}

void CAvatar::Update()
{
    __sub_0006C050(this, nullptr);
}

int32_t CAvatar::SetMorphed(unsigned long dwMorphTemplateID)
{
    return __sub_00069C80(this, nullptr, dwMorphTemplateID);
}

void CAvatar::SetGhostState(long nGhostIndex)
{
    m_nGhostIndex = nGhostIndex;
    ClearActionLayer(0);
    PrepareActionLayer(6, 100, false);
    //__sub_00064E70(this, nullptr, nGhostIndex);
}

void CAvatar::SetMechanicMode(long nMechanicMode)
{
    m_nMechanicMode = nMechanicMode;
    if (!IsOnPlayingOneTimeAction())
    {
        ClearActionLayer(0);
        PrepareActionLayer(6, 100, false);
    }
    //__sub_00064EA0(this, nullptr, nMechanicMode);
}

long CAvatar::GetGhostState() const
{
    UNIMPLEMENTED;
    //return __sub_000FEEA0(this, nullptr);
}

int32_t CAvatar::IsMorphed() const
{
    //TODO
    return m_dwMorphTemplateID != 0;
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsSuperMan() const
{
    return IsMorphed() && CMorphTemplate::IsSuperMan(m_dwMorphTemplateID);
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsMonsterMorphed() const
{
    return IsMorphed() && !IsSuperMan() && !IsHideMorphed() && !IsAttackableMorphed();
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsHideMorphed() const
{
    return IsMorphed() && CMorphTemplate::IsHideMorphed(m_dwMorphTemplateID);
    //return __sub_000FFF80(this, nullptr);
}

long CAvatar::GetMechanicMode() const
{
    return m_nMechanicMode;
    //return __sub_000FEEA0(this, nullptr);
}

int32_t CAvatar::IsAttackableMorphed() const
{
    return IsMorphed() && CMorphTemplate::IsAttackableMorphed(m_dwMorphTemplateID);
    //return __sub_000FFF80(this, nullptr);
}

void CAvatar::SetRidingVehicle(const long nVehicleID, const int32_t bRidingAction)
{
    __sub_0006A790(this, nullptr, nVehicleID, bRidingAction);
}

long CAvatar::GetRidingVehicle() const
{
    return m_nRidingVehicleID;
    //return __sub_000FEEA0(this, nullptr);
}

void CAvatar::SetRidingChair(const long nVehicleID)
{
    if (!m_bForcingAppearance)
    {
        m_nRidingChairID = nVehicleID;
        SetRidingVehicle(nVehicleID, false);
    }
    //__sub_0006AB80(this, nullptr, nVehicleID);
}

int32_t CAvatar::IsRidingVehicle() const
{
    return m_nRidingVehicleID != 0;
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsRidingTamedMob() const
{
    return m_nRidingVehicleID / 10000 == 190;
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsRidingSkillVehicle() const
{
    return m_nRidingVehicleID / 10000 == 193;
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsRidingEventVehicle() const
{
    UNIMPLEMENTED;
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsRidingEvanDragon() const
{
    return is_evan_dragon_riding_item(m_nRidingVehicleID);
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsRidingWildHunterJaguar() const
{
    return is_wildhunter_jaguar_vehicle(m_nRidingVehicleID);
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsRidingMechanic() const
{
    return m_nRidingVehicleID == 1932016;
    //return __sub_000FFF80(this, nullptr);
}

int32_t CAvatar::IsRidingChair() const
{
    //TODO
    return m_nRidingChairID > 0;
    //return __sub_000FFF80(this, nullptr);
}

void CAvatar::SetTamingMobTired(const int32_t arg0)
{
    //TODO
    m_bTamingMobTired = arg0;
}

int32_t CAvatar::IsDelayedLoad() const
{
    return m_bDelayedLoad;
    //return __sub_000FFF80(this, nullptr);
}

void CAvatar::SetDelayedLoad(const int32_t arg0)
{
    m_bDelayedLoad = arg0;
}

void CAvatar::SetVisibleMan(const int32_t bVisible) const
{
    const auto color = bVisible ? 0xFFFFFFFF : 0x00FFFFFF;
    m_pLayerUnderFace->Putcolor(color);
    m_pLayerOverFace->Putcolor(color);
    //__sub_00060270(this, nullptr, bVisible);
}

void CAvatar::SetVisibleTamingMob(const int32_t bVisible) const
{
    m_pLayerOverCharacter->Putcolor(bVisible ? 0xFFFFFFFF : 0x00FFFFFF);
    m_pLayerUnderCharacter->Putcolor(bVisible ? 0xFFFFFFFF : 0x00FFFFFF);

    //__sub_00060320(this, nullptr, bVisible);
}

int32_t CAvatar::IsTransFormSkill() const
{
    return m_dwMorphTemplateID == 1000
        || m_dwMorphTemplateID == 1001
        || m_dwMorphTemplateID == 1100
        || m_dwMorphTemplateID == 1101;
    //return __sub_0005F040(this, nullptr);
}

long CAvatar::CalcMorphedFrameDelay(long arg0, int32_t arg1, long arg2) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAvatar::IsActionHold(const long nAction, const long nIndex) const
{
    if (nAction == 122 && !nIndex)
    {
        return 1;
    }
    if (nAction == 31 && nIndex == 2)
    {
        return 1;
    }
    return nIndex == 4;
    //return __sub_0005F070(this, nullptr, nAction, nIndex);
}

void CAvatar::ApplyScaleAndOffset(_x_com_ptr<IWzGr2DLayer>& pLayer, _x_com_ptr<IWzCanvas>& pCanvas, long nIndex)
{
    __sub_0005F7F0(this, nullptr, pLayer, pCanvas, nIndex);
}

long CAvatar::GetCurrentActionType() const
{
    return m_nAttackActionType;
    //return __sub_000FEEA0(this, nullptr);
}

CAvatar::ACTIONINFO& CAvatar::GetActionInfo()
{
    return m_aiAction[IsOnPlayingOneTimeAction()];
    //return __sub_000608C0(this, nullptr);
}

void CAvatar::LoadBarrier()
{
    __sub_000612A0(this, nullptr);
}

void CAvatar::RemoveBarrier()
{
    m_pLayerBarrier = 0;
    //__sub_00061480(this, nullptr);
}

void CAvatar::LoadCyclone()
{
    __sub_00064EE0(this, nullptr);
}

void CAvatar::SetRidingVehicleID(long arg0)
{
    m_nRidingVehicleID = arg0;
    UNIMPLEMENTED;
}

long* CAvatar::GetAppearance() const
{
    return (long*)this->m_aAvatarHairEquipForced.data();
}

void CAvatar::TakeOffWeapon()
{
    m_nStandType = 1;
    m_nWalkType = 1;
    m_nWeaponItemID = 0;
    m_nAttackActionType = 0;
    m_sWeaponAfterimage = nullptr;
    //__sub_00064180(this, nullptr);
}

void CAvatar::ChangeWeapon(long arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CAvatar::ChangeCashItemLook() const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAvatar::IsResetEmotion() const
{
    return m_bResetEmotion;
}

void CAvatar::SetResetEmotion(int32_t arg0)
{
    m_bResetEmotion = arg0;
}

void CAvatar::SetOneTimeAction(const long nAction)
{
    m_nOneTimeAction = -1;
    m_nTamingMobOneTimeAction = -1;
    ClearActionLayer(1);
    m_nOneTimeAction = nAction;
    PrepareActionLayer(6, 100, false);
    //__sub_0006ABA0(this, nullptr, nAction);
}

void CAvatar::PrepareActionLayer(long nActionSpeed, long nWalkSpeed, int32_t bKeyDown)
{
    __sub_00066CB0(this, nullptr, nActionSpeed, nWalkSpeed, bKeyDown);
}

void CAvatar::PrepareFaceLayer(long tDuration)
{
    __sub_000647D0(this, nullptr, tDuration);
}

void CAvatar::ClearActionLayer(long nIndex)
{
    auto& actInfo = m_aiAction[nIndex];
    for (auto& act : actInfo.aaAction)
    {
        act.RemoveAll();
    }
    for (auto& act : actInfo.aaTamingMobAction)
    {
        act.RemoveAll();
    }
    for (auto& act : actInfo.aaMorphAction)
    {
        act.RemoveAll();
    }

    //__sub_00064D60(this, nullptr, nIndex);
}

void CAvatar::ResetOneTimeAction()
{
    m_nOneTimeAction = -1;
    m_nTamingMobOneTimeAction = -1;
    ClearActionLayer(1);
    //__sub_000666A0(this, nullptr);
}

void CAvatar::ActionProcess(long nSaveAction)
{
    switch (nSaveAction)
    {
    case 204:
    case 205:
        this->m_nOneTimeAction = 205;
        break;
    case 249:
    case 251:
        this->m_nOneTimeAction = -1;
        this->m_nTamingMobOneTimeAction = -1;
        ClearActionLayer(1);
        this->m_nOneTimeAction = 249;
        goto LABEL_5;
    case 256:
    case 258:
        this->m_nRidingVehicleID = 0;
        this->m_nOneTimeAction = -1;
        this->m_nTamingMobOneTimeAction = -1;
        ClearActionLayer(1);
    LABEL_5:
        this->PrepareActionLayer(6, 100, 0);
        break;
    default:
        break;
    }
    if (GetOneTimeAction() == 205)
        LoadCyclone();
    //__sub_000666C0(this, nullptr, nSaveAction);
}

void CAvatar::RegisterNextBlink()
{
    this->m_bBlinking = 0;
    auto v2 = rand() % 3000;
    this->m_tNextBlink = get_update_time() + v2 + 2000;
    //__sub_0005F320(this, nullptr);
}

void CAvatar::SetAlertMode()
{
    m_tAlertRemain = 5000;
}

void CAvatar::Zoom(_x_com_ptr<IWzGr2DLayer> arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CAvatar::MoveAction2RawAction(long nMA, long* pnDir)
{
    int result; // eax

    if (pnDir)
        *pnDir = nMA & 1;
    auto act = nMA >> 1;
    auto m_nMechanicMode = this->m_nMechanicMode;
    if (this->m_dwMorphTemplateID)
    {
        if (IsMonsterMorphed())
        {
            switch (act)
            {
            case 2:
            case 4:
            case 10:
                goto $LN119_0;
            case 3:
                goto $LN116;
            case 5:
                goto $LN105_1;
            case 6:
            case 17:
            case 18:
                goto $LN117;
            case 7:
                goto $LN115;
            case 8:
                goto $LN114;
            case 9:
                goto $LN113_1;
            default:
                return 0;
            }
        }
        if (this->m_dwMorphTemplateID && CMorphTemplate::IsHideMorphed(this->m_dwMorphTemplateID))
        {
            switch (act)
            {
            case 2:
            case 4:
            case 10:
                goto $LN119_0;
            case 3:
                goto $LN116;
            case 5:
                goto $LN105_1;
            case 6:
                goto $LN117;
            case 7:
                goto $LN115;
            case 8:
                goto $LN114;
            case 9:
                goto $LN113_1;
            case 17:
                goto $LN99;
            case 18:
                goto $LN98_0;
            default:
                return 0;
            }
        }
        if (this->m_dwMorphTemplateID && CMorphTemplate::IsSuperMan(this->m_dwMorphTemplateID))
        {
            switch (act)
            {
            case 2:
                goto $LN119_0;
            case 3:
                goto $LN116;
            case 4:
                goto $LN90;
            case 5:
                goto $LN105_1;
            case 6:
                goto $LN117;
            case 7:
                goto $LN115;
            case 8:
                goto $LN114;
            case 9:
                goto $LN113_1;
            case 10:
                goto $LN72_0;
            case 17:
                goto $LN99;
            case 18:
                goto $LN98_0;
            default:
                return 0;
            }
        }
        if (IsAttackableMorphed())
        {
            switch (act)
            {
            case 2:
            $LN119_0:
                result = 1;
                break;
            case 3:
            $LN116:
                result = 2;
                break;
            case 4:
            $LN90:
                result = 3;
                break;
            case 5:
            $LN105_1:
                result = 8;
                break;
            case 6:
            $LN117:
                result = 7;
                break;
            case 7:
            $LN115:
                result = 9;
                break;
            case 8:
            $LN114:
                result = 10;
                break;
            case 9:
            $LN113_1:
                result = 11;
                break;
            case 10:
            $LN72_0:
                result = 12;
                break;
            case 17:
            $LN99:
                result = 41;
                break;
            case 18:
                goto $LN98_0;
            default:
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else if (this->m_nGhostIndex)
    {
        switch (act)
        {
        case 1:
            result = 124;
            break;
        case 3:
            result = 126;
            break;
        case 5:
            result = 127;
            break;
        case 6:
            result = 128;
            break;
        case 7:
            result = 129;
            break;
        case 8:
            result = 130;
            break;
        case 9:
            goto $LN51_0;
        case 10:
            result = 131;
            break;
        default:
            result = 125;
            break;
        }
    }
    else
    {
        switch (m_nMechanicMode)
        {
        case 35111004:
            return 217;
        case 35121005:
            if (this->m_bRocketBoosterStart || this->m_bRocketBoosterLoop)
            {
                return 210;
            }
            else
            {
                switch (act)
                {
                case 1:
                    result = 223;
                    break;
                case 5:
                    result = 56;
                    break;
                case 20:
                    return 210;
                default:
                    result = 221;
                    break;
                }
            }
            break;
        case 35121013:
            return 227;
        case 35001001:
            return 234;
        case 35101009:
            return 237;
        default:
            switch (act)
            {
            case 1:
                result = this->m_nWalkType != 1;
                break;
            case 2:
                result = (this->m_nStandType != 1) + 2;
                break;
            case 3:
                result = 44;
                break;
            case 4:
                result = 4;
                break;
            case 5:
            $LN98_0:
                result = 42;
                break;
            case 6:
                result = 43;
                break;
            case 7:
                result = 45;
                break;
            case 8:
                result = 46;
                break;
            case 9:
            $LN51_0:
                result = 47;
                break;
            case 10:
                switch (m_nChairHeight)
                {
                case 1:
                    result = 49;
                    break;
                case 2:
                    result = 50;
                    break;
                case 3:
                    result = 51;
                    break;
                case 4:
                    result = 52;
                    break;
                case 5:
                    result = 53;
                    break;
                default:
                    result = m_nChairHeight != 6 ? 48 : 54;
                    break;
                }
                break;
            case 17:
                result = 270;
                break;
            case 18:
                result = 271;
                break;
            case 19:
                result = 80;
                break;
            case 20:
                return 210;
            default:
                return 0;
            }
            break;
        }
    }
    return result;
}

void CAvatar::AvatarLayerRemoveCanvas(long nIndex)
{
    __sub_00060D30(this, nullptr, nIndex);
}

void CAvatar::AvatarLayerFlip(const long nFlip) const
{
    m_pLayerUnderFace->Putflip(nFlip);
    m_pLayerOverFace->Putflip(nFlip);
    m_pLayerFace->Putflip(nFlip);
    m_pLayerUnderCharacter->Putflip(nFlip);
    m_pLayerOverCharacter->Putflip(nFlip);
    //__sub_0005FF20(this, nullptr, nFlip);
}

_ZTL_SEC_GETSETI(
    long,
    CAvatar,
    m_nWeaponAttackSpeed);

_ZTL_SEC_GETSETI(
    long,
    CAvatar,
    m_nEmotion);

int32_t CAvatar::IsRidingEx() const
{
    //TODO
    return is_wildhunter_jaguar_vehicle(m_nRidingVehicleID);
    //return __sub_00060040(this, nullptr);
}

void CAvatar::ResetCharacterOneTimeAction()
{
    m_nOneTimeAction = -1;
    ClearCharacterActionLayer(1);
    //__sub_000667A0(this, nullptr);
}

void CAvatar::ResetTamingMobOneTimeAction()
{
    m_nTamingMobOneTimeAction = -1;
    ClearTamingMobActionLayer(1);
}

long CAvatar::ConvertCharacterAction(long nAction) const
{
    if (nAction >= 2 && nAction <= 3
        || nAction == 48
        || nAction == 49
        || nAction == 50
        || nAction == 51
        || nAction == 52
        || nAction == 53
        || nAction == 54
        || nAction == 125
        || static_cast<unsigned int>(nAction) < 2
        || nAction == 124
        || nAction == 42
        || nAction == 56)
    {
        return 48;
    }
    if (IsRidingWildHunterJaguar() && nAction == 41)
        return 57;
    return nAction;
    //return __sub_00060070(this, nullptr, nAction);
}

long CAvatar::GetCurCharacterAction(long* pnDir)
{
    /*const auto act = MoveAction2RawAction(this->m_nMoveAction, pnDir);
    const auto oneTime = GetOneTimeAction();
    if (oneTime <= -1)
        return ConvertCharacterAction(act);
    return ConvertCharacterAction(oneTime);*/
    return __sub_000608E0(this, nullptr, pnDir);
}

long CAvatar::GetCurTamingMobAction()
{
    //TODO might be wrong to convert
    auto v3 = MoveAction2RawAction(this->m_nTamingMobOneTimeAction, nullptr);
    if (GetTamingMobOneTimeAction() <= -1)
        return ConvertCharacterAction(v3);
    return ConvertCharacterAction(GetTamingMobOneTimeAction());
    //return __sub_000FEEA0(this, nullptr);
}

void CAvatar::ClearCharacterActionLayer(long nIndex)
{
    for (auto& act : m_aiAction[nIndex].aaAction)
    {
        act.RemoveAll();
    }
    //__sub_00064DF0(this, nullptr, nIndex);
}

void CAvatar::ClearTamingMobActionLayer(long nIndex)
{
    for (auto& act : m_aiAction[nIndex].aaTamingMobAction)
    {
        act.RemoveAll();
    }
    //__sub_00064E30(this, nullptr, nIndex);
}

void CAvatar::PrepareCharacterActionLayer(long nActionSpeed, long nWalkSpeed, int32_t bKeyDown)
{
    __sub_00065100(this, nullptr, nActionSpeed, nWalkSpeed, bKeyDown);
}

void CAvatar::PrepareTamingMobActionLayer(long nActionSpeed, long nWalkSpeed, int32_t bKeyDown)
{
    __sub_00065CE0(this, nullptr, nActionSpeed, nWalkSpeed, bKeyDown);
}

int32_t CAvatar::CharacterFrameUpdate()
{
    return __sub_0006ABE0(this, nullptr);
}

void CAvatar::TamingMobFrameUpdate()
{
    __sub_0006B450(this, nullptr);
}

void CAvatar::FixCharacterPosition()
{
    __sub_000616B0(this, nullptr);
}

long CAvatar::GetCurTamingMobActionType() const
{
    UNIMPLEMENTED;
    //return __sub_000FEEA0(this, nullptr);
}

CAvatar::ACTIONINFO& CAvatar::GetTamingMobActionInfo() const
{
    UNIMPLEMENTED;
    //return __sub_000608C0(this, nullptr);
}

int32_t CAvatar::IsOnPlayingTamingMobOneTimeAction() const
{
    return m_nTamingMobOneTimeAction > -1;
    //return __sub_000FFF80(this, nullptr);
}

long CAvatar::GetTamingMobOneTimeAction() const
{
    return m_nTamingMobOneTimeAction;
    //return __sub_000FEEA0(this, nullptr);
}

void CAvatar::SetResistanceRidingMoveAction(long nMA, int32_t bReload)
{
    __sub_0006B980(this, nullptr, nMA, bReload);
}

void CAvatar::SetChairHeight(long nItemID)
{
    if (nItemID == 3010125)
    {
        this->m_nChairHeight = 1;
    }
    else if (nItemID == 3010117 || nItemID == 3010118 || nItemID == 3010075)
    {
        this->m_nChairHeight = 5;
    }
    else
    {
        this->m_nChairHeight = nItemID != 3010177 ? 0 : 6;
    }
}

void CAvatar::DoLevitationAction()
{
    __sub_000603B0(this, nullptr);
}

void CAvatar::StopLevitationAction()
{
    m_tLevitationFlowTime = 0;
    m_tLevitationLastUpdateTime = 0;
    m_pOrigin->RelMove(0, 0, vtMissing, vtMissing);
    //__sub_00060640(this, nullptr);
}

CAvatar& CAvatar::operator=(const CAvatar& arg0)
{
    return _op_assign_122(this, arg0);
}

CAvatar& CAvatar::_op_assign_122(CAvatar* pThis, const CAvatar& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAvatar::ACTIONINFO::~ACTIONINFO()
{
}

void CAvatar::ACTIONINFO::_dtor_0()
{
    this->~ACTIONINFO();
    //return __sub_00064400(this, nullptr);
}

CAvatar::ACTIONINFO::ACTIONINFO(const CAvatar::ACTIONINFO& arg0)
{
    _ctor_1(arg0);
}

void CAvatar::ACTIONINFO::_ctor_1(const CAvatar::ACTIONINFO& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAvatar::ACTIONINFO::ACTIONINFO()
{
    nCurFrameIndex = -1;
    nCurTMFrameIndex = -1;
}

void CAvatar::ACTIONINFO::_ctor_0()
{
    new(this) ACTIONINFO();
    //return __sub_00064330(this, nullptr);
}

void CAvatar::ACTIONINFO::SetCurFrameStop(int32_t arg0)
{
    this->bCurFrameStop = arg0;
}

CAvatar::ACTIONINFO& CAvatar::ACTIONINFO::operator=(const CAvatar::ACTIONINFO& arg0)
{
    return _op_assign_4(this, arg0);
}

CAvatar::ACTIONINFO& CAvatar::ACTIONINFO::_op_assign_4(CAvatar::ACTIONINFO* pThis, const CAvatar::ACTIONINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrl*__cdecl rc_vc(IWzVector2D* p)
{
    //return __sub_0005F150(p);
    if (p)
        return dynamic_cast<CVecCtrl*>(p);
    return nullptr;
}

int32_t __cdecl is_back_action(long nAction, int32_t bMorphed)
{
    if (bMorphed)
    {
        if (nAction != 9 && nAction != 10)
            return 0;
    }
    else if (nAction != 45 && nAction != 46 && nAction != 130 && nAction != 129)
    {
        return 0;
    }
    return 1;
    //return __sub_0005F1B0(nAction, bMorphed);
}
