// Stat.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"
#include "util/extra.h"

#include "UInt128/UInt128.hpp"
#include "Stat/TempStatFlags.hpp"
#include "SkillInfo/SkillInfo.hpp"
#include "DBBasic/DBBasic.hpp"
#include "Packet/Packet.hpp"
#include "MobTemplate/MobTemplate.hpp"
#include "Rand32/Rand32.hpp"

// External
struct PassiveSkillData
{
	// Nested
public:
	enum UnnamedEnum4826
	{
		MHPR = 0,
		MMPR = 1,
		CR = 2,
		CDMIN = 3,
		ACCR = 4,
		EVAR = 5,
		AR = 6,
		ER = 7,
		PDDR = 8,
		MDDR = 9,
		PDR = 10,
		MDR = 11,
		DIPR = 12,
		PDAMR = 13,
		MDAMR = 14,
		PADR = 15,
		MADR = 16,
		EXPR = 17,
		IMPR = 18,
		ASRR = 19,
		TERR = 20,
		MESOR = 21,
		NO = 22
	};
	// Fields
public:
	long nMHPr{};

public:
	long nMMPr{};

public:
	long nCr{};

public:
	long nCDMin{};

public:
	long nACCr{};

public:
	long nEVAr{};

public:
	long nAr{};

public:
	long nEr{};

public:
	long nPDDr{};

public:
	long nMDDr{};

public:
	long nPDr{};

public:
	long nMDr{};

public:
	long nDIPr{};

public:
	long nPDamr{};

public:
	long nMDamr{};

public:
	long nPADr{};

public:
	long nMADr{};

public:
	long nEXPr{};

public:
	long nIMPr{};

public:
	long nASRr{};

public:
	long nTERr{};

public:
	long nMESOr{};

public:
	long nPADx{};

public:
	long nMADx{};

public:
	long nIMDr{};

public:
	long nPsdJump{};

public:
	long nPsdSpeed{};

public:
	long nOCr{};

public:
	long nDCr{};

public:
	ZMap<long, ZRef<AdditionPsd>, long> mAdditionPsd;
	// Methods
public:
	~PassiveSkillData();

public:
	void _dtor_0();

public:
	PassiveSkillData(const PassiveSkillData &arg0);

public:
	void _ctor_1(const PassiveSkillData &arg0);

public:
	PassiveSkillData();

public:
	void _ctor_0();

public:
	void ClearData();

public:
	PassiveSkillData &operator=(const PassiveSkillData &arg0);

public:
	static PassiveSkillData &_op_assign_4(PassiveSkillData *pThis, const PassiveSkillData &arg0);
};
STATIC_ASSERT_SIZE(PassiveSkillData, 140);

class CharacterData;

struct SKILLENTRY;

class CMobTemplate;

// Level: 0 0x1dd1
struct SecondaryStatRateOption;
// Level: 0 0x1e0f
struct SecondaryStat;
// Level: 0 0x1dcc
struct BasicStat;
// Level: 0 0x1c28
struct ForcedStat;
// Level: 0 0x2027f
struct NEXTLEVEL;
// Level: 0 0x12b64
struct EQUIPPED_SETITEM;

// Level: 0 0x1eb0
class CalcDamage;

// Level: 0 0x1e7a
struct MobStat;

template <typename T>
class TemporaryStatBase;

struct SecondaryStatRateOption
{
    // Nested
    // Fields
public:
    long nPADr{};

public:
    long nPDDr{};

public:
    long nMADr{};

public:
    long nMDDr{};

public:
    long nACCr{};

public:
    long nEVAr{};
    // Methods

    CTOR_DEFAULT(SecondaryStatRateOption);

public:
    SecondaryStatRateOption();

public:
    void _ctor_0();
};

STATIC_ASSERT_SIZE(SecondaryStatRateOption, 24);

struct SecondaryStat
{
    // Nested
public:
    struct VIEWELEM : public ZRefCounted
    {
        // Nested
        // Fields
    public:
        MY_UINT128 uFlag;

    public:
        long tDuration{};
        // Methods
    public:
        virtual ~VIEWELEM();

    public:
        void _dtor_0();

    public:
        VIEWELEM(const SecondaryStat::VIEWELEM &arg0);

    public:
        void _ctor_1(const SecondaryStat::VIEWELEM &arg0);

        CTOR_DEFAULT(VIEWELEM);

    public:
        VIEWELEM();

    public:
        void _ctor_0();

    public:
        SecondaryStat::VIEWELEM &operator=(const SecondaryStat::VIEWELEM &arg0);

    public:
        static SecondaryStat::VIEWELEM &
        _op_assign_3(SecondaryStat::VIEWELEM *pThis, const SecondaryStat::VIEWELEM &arg0);
    };
    // Fields
public:
    std::array<long, 2> _ZtlSecureTear_nPAD{};

public:
    uint32_t _ZtlSecureTear_nPAD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPAD_{};

public:
    uint32_t _ZtlSecureTear_nPAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rPAD_{};

public:
    uint32_t _ZtlSecureTear_rPAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tPAD_{};

public:
    uint32_t _ZtlSecureTear_tPAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemPADR{};

public:
    uint32_t _ZtlSecureTear_nItemPADR_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPDD{};

public:
    uint32_t _ZtlSecureTear_nPDD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPDD_{};

public:
    uint32_t _ZtlSecureTear_nPDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rPDD_{};

public:
    uint32_t _ZtlSecureTear_rPDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tPDD_{};

public:
    uint32_t _ZtlSecureTear_tPDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemPDDR{};

public:
    uint32_t _ZtlSecureTear_nItemPDDR_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMAD{};

public:
    uint32_t _ZtlSecureTear_nMAD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMAD_{};

public:
    uint32_t _ZtlSecureTear_nMAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMAD_{};

public:
    uint32_t _ZtlSecureTear_rMAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMAD_{};

public:
    uint32_t _ZtlSecureTear_tMAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemMADR{};

public:
    uint32_t _ZtlSecureTear_nItemMADR_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMDD{};

public:
    uint32_t _ZtlSecureTear_nMDD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMDD_{};

public:
    uint32_t _ZtlSecureTear_nMDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMDD_{};

public:
    uint32_t _ZtlSecureTear_rMDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMDD_{};

public:
    uint32_t _ZtlSecureTear_tMDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemMDDR{};

public:
    uint32_t _ZtlSecureTear_nItemMDDR_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nACC{};

public:
    uint32_t _ZtlSecureTear_nACC_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nACC_{};

public:
    uint32_t _ZtlSecureTear_nACC__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rACC_{};

public:
    uint32_t _ZtlSecureTear_rACC__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tACC_{};

public:
    uint32_t _ZtlSecureTear_tACC__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemACCR{};

public:
    uint32_t _ZtlSecureTear_nItemACCR_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEVA{};

public:
    uint32_t _ZtlSecureTear_nEVA_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEVA_{};

public:
    uint32_t _ZtlSecureTear_nEVA__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rEVA_{};

public:
    uint32_t _ZtlSecureTear_rEVA__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tEVA_{};

public:
    uint32_t _ZtlSecureTear_tEVA__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemEVAR{};

public:
    uint32_t _ZtlSecureTear_nItemEVAR_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nCraft{};

public:
    uint32_t _ZtlSecureTear_nCraft_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nCraft_{};

public:
    uint32_t _ZtlSecureTear_nCraft__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rCraft_{};

public:
    uint32_t _ZtlSecureTear_rCraft__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tCraft_{};

public:
    uint32_t _ZtlSecureTear_tCraft__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSpeed{};

public:
    uint32_t _ZtlSecureTear_nSpeed_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSpeed_{};

public:
    uint32_t _ZtlSecureTear_nSpeed__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSpeed_{};

public:
    uint32_t _ZtlSecureTear_rSpeed__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSpeed_{};

public:
    uint32_t _ZtlSecureTear_tSpeed__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nJump{};

public:
    uint32_t _ZtlSecureTear_nJump_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nJump_{};

public:
    uint32_t _ZtlSecureTear_nJump__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rJump_{};

public:
    uint32_t _ZtlSecureTear_rJump__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tJump_{};

public:
    uint32_t _ZtlSecureTear_tJump__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMagicGuard_{};

public:
    uint32_t _ZtlSecureTear_nMagicGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMagicGuard_{};

public:
    uint32_t _ZtlSecureTear_rMagicGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMagicGuard_{};

public:
    uint32_t _ZtlSecureTear_tMagicGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDarkSight_{};

public:
    uint32_t _ZtlSecureTear_nDarkSight__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDarkSight_{};

public:
    uint32_t _ZtlSecureTear_rDarkSight__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDarkSight_{};

public:
    uint32_t _ZtlSecureTear_tDarkSight__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_mDarkSight_{};

public:
    uint32_t _ZtlSecureTear_mDarkSight__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_pDarkSight_{};

public:
    uint32_t _ZtlSecureTear_pDarkSight__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBooster_{};

public:
    uint32_t _ZtlSecureTear_nBooster__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rBooster_{};

public:
    uint32_t _ZtlSecureTear_rBooster__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tBooster_{};

public:
    uint32_t _ZtlSecureTear_tBooster__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPowerGuard_{};

public:
    uint32_t _ZtlSecureTear_nPowerGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rPowerGuard_{};

public:
    uint32_t _ZtlSecureTear_rPowerGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tPowerGuard_{};

public:
    uint32_t _ZtlSecureTear_tPowerGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMechanic_{};

public:
    uint32_t _ZtlSecureTear_nMechanic__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMechanic_{};

public:
    uint32_t _ZtlSecureTear_rMechanic__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMechanic_{};

public:
    uint32_t _ZtlSecureTear_tMechanic__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMaxHP_{};

public:
    uint32_t _ZtlSecureTear_nMaxHP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMaxHP_{};

public:
    uint32_t _ZtlSecureTear_rMaxHP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMaxHP_{};

public:
    uint32_t _ZtlSecureTear_tMaxHP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMaxMP_{};

public:
    uint32_t _ZtlSecureTear_nMaxMP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMaxMP_{};

public:
    uint32_t _ZtlSecureTear_rMaxMP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMaxMP_{};

public:
    uint32_t _ZtlSecureTear_tMaxMP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nInvincible_{};

public:
    uint32_t _ZtlSecureTear_nInvincible__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rInvincible_{};

public:
    uint32_t _ZtlSecureTear_rInvincible__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tInvincible_{};

public:
    uint32_t _ZtlSecureTear_tInvincible__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSoulArrow_{};

public:
    uint32_t _ZtlSecureTear_nSoulArrow__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSoulArrow_{};

public:
    uint32_t _ZtlSecureTear_rSoulArrow__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSoulArrow_{};

public:
    uint32_t _ZtlSecureTear_tSoulArrow__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nStun_{};

public:
    uint32_t _ZtlSecureTear_nStun__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rStun_{};

public:
    uint32_t _ZtlSecureTear_rStun__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tStun_{};

public:
    uint32_t _ZtlSecureTear_tStun__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPoison_{};

public:
    uint32_t _ZtlSecureTear_nPoison__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rPoison_{};

public:
    uint32_t _ZtlSecureTear_rPoison__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tPoison_{};

public:
    uint32_t _ZtlSecureTear_tPoison__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSeal_{};

public:
    uint32_t _ZtlSecureTear_nSeal__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSeal_{};

public:
    uint32_t _ZtlSecureTear_rSeal__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSeal_{};

public:
    uint32_t _ZtlSecureTear_tSeal__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDarkness_{};

public:
    uint32_t _ZtlSecureTear_nDarkness__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDarkness_{};

public:
    uint32_t _ZtlSecureTear_rDarkness__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDarkness_{};

public:
    uint32_t _ZtlSecureTear_tDarkness__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nComboCounter_{};

public:
    uint32_t _ZtlSecureTear_nComboCounter__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rComboCounter_{};

public:
    uint32_t _ZtlSecureTear_rComboCounter__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tComboCounter_{};

public:
    uint32_t _ZtlSecureTear_tComboCounter__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_mComboCounter_{};

public:
    uint32_t _ZtlSecureTear_mComboCounter__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nWeaponCharge_{};

public:
    uint32_t _ZtlSecureTear_nWeaponCharge__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rWeaponCharge_{};

public:
    uint32_t _ZtlSecureTear_rWeaponCharge__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tWeaponCharge_{};

public:
    uint32_t _ZtlSecureTear_tWeaponCharge__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDragonBlood_{};

public:
    uint32_t _ZtlSecureTear_nDragonBlood__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDragonBlood_{};

public:
    uint32_t _ZtlSecureTear_rDragonBlood__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDragonBlood_{};

public:
    uint32_t _ZtlSecureTear_tDragonBlood__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nHolySymbol_{};

public:
    uint32_t _ZtlSecureTear_nHolySymbol__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rHolySymbol_{};

public:
    uint32_t _ZtlSecureTear_rHolySymbol__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tHolySymbol_{};

public:
    uint32_t _ZtlSecureTear_tHolySymbol__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMesoUp_{};

public:
    uint32_t _ZtlSecureTear_nMesoUp__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMesoUp_{};

public:
    uint32_t _ZtlSecureTear_rMesoUp__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMesoUp_{};

public:
    uint32_t _ZtlSecureTear_tMesoUp__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nShadowPartner_{};

public:
    uint32_t _ZtlSecureTear_nShadowPartner__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rShadowPartner_{};

public:
    uint32_t _ZtlSecureTear_rShadowPartner__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tShadowPartner_{};

public:
    uint32_t _ZtlSecureTear_tShadowPartner__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPickPocket_{};

public:
    uint32_t _ZtlSecureTear_nPickPocket__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rPickPocket_{};

public:
    uint32_t _ZtlSecureTear_rPickPocket__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tPickPocket_{};

public:
    uint32_t _ZtlSecureTear_tPickPocket__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMesoGuard_{};

public:
    uint32_t _ZtlSecureTear_nMesoGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMesoGuard_{};

public:
    uint32_t _ZtlSecureTear_rMesoGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMesoGuard_{};

public:
    uint32_t _ZtlSecureTear_tMesoGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nThaw_{};

public:
    uint32_t _ZtlSecureTear_nThaw__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rThaw_{};

public:
    uint32_t _ZtlSecureTear_rThaw__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tThaw_{};

public:
    uint32_t _ZtlSecureTear_tThaw__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nWeakness_{};

public:
    uint32_t _ZtlSecureTear_nWeakness__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rWeakness_{};

public:
    uint32_t _ZtlSecureTear_rWeakness__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tWeakness_{};

public:
    uint32_t _ZtlSecureTear_tWeakness__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nCurse_{};

public:
    uint32_t _ZtlSecureTear_nCurse__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rCurse_{};

public:
    uint32_t _ZtlSecureTear_rCurse__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tCurse_{};

public:
    uint32_t _ZtlSecureTear_tCurse__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSlow_{};

public:
    uint32_t _ZtlSecureTear_nSlow__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSlow_{};

public:
    uint32_t _ZtlSecureTear_rSlow__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSlow_{};

public:
    uint32_t _ZtlSecureTear_tSlow__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMorph_{};

public:
    uint32_t _ZtlSecureTear_nMorph__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMorph_{};

public:
    uint32_t _ZtlSecureTear_rMorph__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMorph_{};

public:
    uint32_t _ZtlSecureTear_tMorph__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nGhost_{};

public:
    uint32_t _ZtlSecureTear_nGhost__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rGhost_{};

public:
    uint32_t _ZtlSecureTear_rGhost__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tGhost_{};

public:
    uint32_t _ZtlSecureTear_tGhost__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nRegen_{};

public:
    uint32_t _ZtlSecureTear_nRegen__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rRegen_{};

public:
    uint32_t _ZtlSecureTear_rRegen__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tRegen_{};

public:
    uint32_t _ZtlSecureTear_tRegen__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBasicStatUp_{};

public:
    uint32_t _ZtlSecureTear_nBasicStatUp__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rBasicStatUp_{};

public:
    uint32_t _ZtlSecureTear_rBasicStatUp__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tBasicStatUp_{};

public:
    uint32_t _ZtlSecureTear_tBasicStatUp__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nStance_{};

public:
    uint32_t _ZtlSecureTear_nStance__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rStance_{};

public:
    uint32_t _ZtlSecureTear_rStance__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tStance_{};

public:
    uint32_t _ZtlSecureTear_tStance__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSharpEyes_{};

public:
    uint32_t _ZtlSecureTear_nSharpEyes__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSharpEyes_{};

public:
    uint32_t _ZtlSecureTear_rSharpEyes__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSharpEyes_{};

public:
    uint32_t _ZtlSecureTear_tSharpEyes__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_mSharpEyes_{};

public:
    uint32_t _ZtlSecureTear_mSharpEyes__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nManaReflection_{};

public:
    uint32_t _ZtlSecureTear_nManaReflection__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rManaReflection_{};

public:
    uint32_t _ZtlSecureTear_rManaReflection__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tManaReflection_{};

public:
    uint32_t _ZtlSecureTear_tManaReflection__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nAttract_{};

public:
    uint32_t _ZtlSecureTear_nAttract__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rAttract_{};

public:
    uint32_t _ZtlSecureTear_rAttract__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tAttract_{};

public:
    uint32_t _ZtlSecureTear_tAttract__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSpiritJavelin_{};

public:
    uint32_t _ZtlSecureTear_nSpiritJavelin__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSpiritJavelin_{};

public:
    uint32_t _ZtlSecureTear_rSpiritJavelin__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSpiritJavelin_{};

public:
    uint32_t _ZtlSecureTear_tSpiritJavelin__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_mSpiritJavelin_{};

public:
    uint32_t _ZtlSecureTear_mSpiritJavelin__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nInfinity_{};

public:
    uint32_t _ZtlSecureTear_nInfinity__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rInfinity_{};

public:
    uint32_t _ZtlSecureTear_rInfinity__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tInfinity_{};

public:
    uint32_t _ZtlSecureTear_tInfinity__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tUpdateInfinity_{};

public:
    uint32_t _ZtlSecureTear_tUpdateInfinity__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nHolyshield_{};

public:
    uint32_t _ZtlSecureTear_nHolyshield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rHolyshield_{};

public:
    uint32_t _ZtlSecureTear_rHolyshield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tHolyshield_{};

public:
    uint32_t _ZtlSecureTear_tHolyshield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nHamString_{};

public:
    uint32_t _ZtlSecureTear_nHamString__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rHamString_{};

public:
    uint32_t _ZtlSecureTear_rHamString__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tHamString_{};

public:
    uint32_t _ZtlSecureTear_tHamString__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBlind_{};

public:
    uint32_t _ZtlSecureTear_nBlind__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rBlind_{};

public:
    uint32_t _ZtlSecureTear_rBlind__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tBlind_{};

public:
    uint32_t _ZtlSecureTear_tBlind__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nConcentration_{};

public:
    uint32_t _ZtlSecureTear_nConcentration__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rConcentration_{};

public:
    uint32_t _ZtlSecureTear_rConcentration__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tConcentration_{};

public:
    uint32_t _ZtlSecureTear_tConcentration__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBanMap_{};

public:
    uint32_t _ZtlSecureTear_nBanMap__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rBanMap_{};

public:
    uint32_t _ZtlSecureTear_rBanMap__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tBanMap_{};

public:
    uint32_t _ZtlSecureTear_tBanMap__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_mBanMap_{};

public:
    uint32_t _ZtlSecureTear_mBanMap__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMaxLevelBuff_{};

public:
    uint32_t _ZtlSecureTear_nMaxLevelBuff__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMaxLevelBuff_{};

public:
    uint32_t _ZtlSecureTear_rMaxLevelBuff__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMaxLevelBuff_{};

public:
    uint32_t _ZtlSecureTear_tMaxLevelBuff__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nAura_{};

public:
    uint32_t _ZtlSecureTear_nAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rAura_{};

public:
    uint32_t _ZtlSecureTear_rAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tAura_{};

public:
    uint32_t _ZtlSecureTear_tAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tUpdateAura_{};

public:
    uint32_t _ZtlSecureTear_tUpdateAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSuperBody_{};

public:
    uint32_t _ZtlSecureTear_nSuperBody__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSuperBody_{};

public:
    uint32_t _ZtlSecureTear_rSuperBody__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSuperBody_{};

public:
    uint32_t _ZtlSecureTear_tSuperBody__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDarkAura_{};

public:
    uint32_t _ZtlSecureTear_nDarkAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDarkAura_{};

public:
    uint32_t _ZtlSecureTear_rDarkAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDarkAura_{};

public:
    uint32_t _ZtlSecureTear_tDarkAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_cDarkAura_{};

public:
    uint32_t _ZtlSecureTear_cDarkAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBlueAura_{};

public:
    uint32_t _ZtlSecureTear_nBlueAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rBlueAura_{};

public:
    uint32_t _ZtlSecureTear_rBlueAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tBlueAura_{};

public:
    uint32_t _ZtlSecureTear_tBlueAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_cBlueAura_{};

public:
    uint32_t _ZtlSecureTear_cBlueAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nYellowAura_{};

public:
    uint32_t _ZtlSecureTear_nYellowAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rYellowAura_{};

public:
    uint32_t _ZtlSecureTear_rYellowAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tYellowAura_{};

public:
    uint32_t _ZtlSecureTear_tYellowAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_cYellowAura_{};

public:
    uint32_t _ZtlSecureTear_cYellowAura__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBarrier_{};

public:
    uint32_t _ZtlSecureTear_nBarrier__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tBarrier_{};

public:
    uint32_t _ZtlSecureTear_tBarrier__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rBarrier_{};

public:
    uint32_t _ZtlSecureTear_rBarrier__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDojangShield_{};

public:
    uint32_t _ZtlSecureTear_nDojangShield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDojangShield_{};

public:
    uint32_t _ZtlSecureTear_tDojangShield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDojangShield_{};

public:
    uint32_t _ZtlSecureTear_rDojangShield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nReverseInput_{};

public:
    uint32_t _ZtlSecureTear_nReverseInput__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rReverseInput_{};

public:
    uint32_t _ZtlSecureTear_rReverseInput__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tReverseInput_{};

public:
    uint32_t _ZtlSecureTear_tReverseInput__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDojangBerserk_{};

public:
    uint32_t _ZtlSecureTear_nDojangBerserk__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDojangBerserk_{};

public:
    uint32_t _ZtlSecureTear_rDojangBerserk__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDojangBerserk_{};

public:
    uint32_t _ZtlSecureTear_tDojangBerserk__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDojangInvincible_{};

public:
    uint32_t _ZtlSecureTear_nDojangInvincible__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDojangInvincible_{};

public:
    uint32_t _ZtlSecureTear_rDojangInvincible__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDojangInvincible_{};

public:
    uint32_t _ZtlSecureTear_tDojangInvincible__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMesoUpByItem{};

public:
    uint32_t _ZtlSecureTear_nMesoUpByItem_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMesoUpByItem_{};

public:
    uint32_t _ZtlSecureTear_nMesoUpByItem__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMesoUpByItem_{};

public:
    uint32_t _ZtlSecureTear_rMesoUpByItem__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMesoUpByItem_{};

public:
    uint32_t _ZtlSecureTear_tMesoUpByItem__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemUpByItem{};

public:
    uint32_t _ZtlSecureTear_nItemUpByItem_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nItemUpByItem_{};

public:
    uint32_t _ZtlSecureTear_nItemUpByItem__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rItemUpByItem_{};

public:
    uint32_t _ZtlSecureTear_rItemUpByItem__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tItemUpByItem_{};

public:
    uint32_t _ZtlSecureTear_tItemUpByItem__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_xItemUpByItem_{};

public:
    uint32_t _ZtlSecureTear_xItemUpByItem__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nRespectPImmune{};

public:
    uint32_t _ZtlSecureTear_nRespectPImmune_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nRespectPImmune_{};

public:
    uint32_t _ZtlSecureTear_nRespectPImmune__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rRespectPImmune_{};

public:
    uint32_t _ZtlSecureTear_rRespectPImmune__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tRespectPImmune_{};

public:
    uint32_t _ZtlSecureTear_tRespectPImmune__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nRespectMImmune{};

public:
    uint32_t _ZtlSecureTear_nRespectMImmune_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nRespectMImmune_{};

public:
    uint32_t _ZtlSecureTear_nRespectMImmune__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rRespectMImmune_{};

public:
    uint32_t _ZtlSecureTear_rRespectMImmune__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tRespectMImmune_{};

public:
    uint32_t _ZtlSecureTear_tRespectMImmune__CS{};

public:
    std::array<char, 2> _ZtlSecureTear_nDefenseAtt{};

public:
    uint32_t _ZtlSecureTear_nDefenseAtt_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDefenseAtt_{};

public:
    uint32_t _ZtlSecureTear_nDefenseAtt__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDefenseAtt_{};

public:
    uint32_t _ZtlSecureTear_rDefenseAtt__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDefenseAtt_{};

public:
    uint32_t _ZtlSecureTear_tDefenseAtt__CS{};

public:
    std::array<char, 2> _ZtlSecureTear_nDefenseState{};

public:
    uint32_t _ZtlSecureTear_nDefenseState_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDefenseState_{};

public:
    uint32_t _ZtlSecureTear_nDefenseState__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDefenseState_{};

public:
    uint32_t _ZtlSecureTear_rDefenseState__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDefenseState_{};

public:
    uint32_t _ZtlSecureTear_tDefenseState__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nIncEffectHPPotion{};

public:
    uint32_t _ZtlSecureTear_nIncEffectHPPotion_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nIncEffectHPPotion_{};

public:
    uint32_t _ZtlSecureTear_nIncEffectHPPotion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rIncEffectHPPotion_{};

public:
    uint32_t _ZtlSecureTear_rIncEffectHPPotion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tIncEffectHPPotion_{};

public:
    uint32_t _ZtlSecureTear_tIncEffectHPPotion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nIncEffectMPPotion{};

public:
    uint32_t _ZtlSecureTear_nIncEffectMPPotion_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nIncEffectMPPotion_{};

public:
    uint32_t _ZtlSecureTear_nIncEffectMPPotion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rIncEffectMPPotion_{};

public:
    uint32_t _ZtlSecureTear_rIncEffectMPPotion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tIncEffectMPPotion_{};

public:
    uint32_t _ZtlSecureTear_tIncEffectMPPotion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSpark_{};

public:
    uint32_t _ZtlSecureTear_nSpark__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSpark_{};

public:
    uint32_t _ZtlSecureTear_rSpark__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSpark_{};

public:
    uint32_t _ZtlSecureTear_tSpark__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSoulMasterFinal_{};

public:
    uint32_t _ZtlSecureTear_nSoulMasterFinal__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSoulMasterFinal_{};

public:
    uint32_t _ZtlSecureTear_rSoulMasterFinal__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSoulMasterFinal_{};

public:
    uint32_t _ZtlSecureTear_tSoulMasterFinal__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nWindBreakerFinal_{};

public:
    uint32_t _ZtlSecureTear_nWindBreakerFinal__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rWindBreakerFinal_{};

public:
    uint32_t _ZtlSecureTear_rWindBreakerFinal__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tWindBreakerFinal_{};

public:
    uint32_t _ZtlSecureTear_tWindBreakerFinal__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nElementalReset_{};

public:
    uint32_t _ZtlSecureTear_nElementalReset__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rElementalReset_{};

public:
    uint32_t _ZtlSecureTear_rElementalReset__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tElementalReset_{};

public:
    uint32_t _ZtlSecureTear_tElementalReset__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nWindWalk_{};

public:
    uint32_t _ZtlSecureTear_nWindWalk__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rWindWalk_{};

public:
    uint32_t _ZtlSecureTear_rWindWalk__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tWindWalk_{};

public:
    uint32_t _ZtlSecureTear_tWindWalk__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEventRate_{};

public:
    uint32_t _ZtlSecureTear_nEventRate__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rEventRate_{};

public:
    uint32_t _ZtlSecureTear_rEventRate__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tEventRate_{};

public:
    uint32_t _ZtlSecureTear_tEventRate__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nComboAbilityBuff_{};

public:
    uint32_t _ZtlSecureTear_nComboAbilityBuff__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rComboAbilityBuff_{};

public:
    uint32_t _ZtlSecureTear_rComboAbilityBuff__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tComboAbilityBuff_{};

public:
    uint32_t _ZtlSecureTear_tComboAbilityBuff__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nComboDrain_{};

public:
    uint32_t _ZtlSecureTear_nComboDrain__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rComboDrain_{};

public:
    uint32_t _ZtlSecureTear_rComboDrain__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tComboDrain_{};

public:
    uint32_t _ZtlSecureTear_tComboDrain__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nComboBarrier_{};

public:
    uint32_t _ZtlSecureTear_nComboBarrier__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rComboBarrier_{};

public:
    uint32_t _ZtlSecureTear_rComboBarrier__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tComboBarrier_{};

public:
    uint32_t _ZtlSecureTear_tComboBarrier__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBodyPressure_{};

public:
    uint32_t _ZtlSecureTear_nBodyPressure__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rBodyPressure_{};

public:
    uint32_t _ZtlSecureTear_rBodyPressure__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tBodyPressure_{};

public:
    uint32_t _ZtlSecureTear_tBodyPressure__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSmartKnockback_{};

public:
    uint32_t _ZtlSecureTear_nSmartKnockback__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSmartKnockback_{};

public:
    uint32_t _ZtlSecureTear_rSmartKnockback__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSmartKnockback_{};

public:
    uint32_t _ZtlSecureTear_tSmartKnockback__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nRepeatEffect_{};

public:
    uint32_t _ZtlSecureTear_nRepeatEffect__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rRepeatEffect_{};

public:
    uint32_t _ZtlSecureTear_rRepeatEffect__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tRepeatEffect_{};

public:
    uint32_t _ZtlSecureTear_tRepeatEffect__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nExpBuffRate_{};

public:
    uint32_t _ZtlSecureTear_nExpBuffRate__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rExpBuffRate_{};

public:
    uint32_t _ZtlSecureTear_rExpBuffRate__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tExpBuffRate_{};

public:
    uint32_t _ZtlSecureTear_tExpBuffRate__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nStopPortion_{};

public:
    uint32_t _ZtlSecureTear_nStopPortion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rStopPortion_{};

public:
    uint32_t _ZtlSecureTear_rStopPortion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tStopPortion_{};

public:
    uint32_t _ZtlSecureTear_tStopPortion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nStopMotion_{};

public:
    uint32_t _ZtlSecureTear_nStopMotion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rStopMotion_{};

public:
    uint32_t _ZtlSecureTear_rStopMotion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tStopMotion_{};

public:
    uint32_t _ZtlSecureTear_tStopMotion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nFear_{};

public:
    uint32_t _ZtlSecureTear_nFear__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rFear_{};

public:
    uint32_t _ZtlSecureTear_rFear__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tFear_{};

public:
    uint32_t _ZtlSecureTear_tFear__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEvanSlow_{};

public:
    uint32_t _ZtlSecureTear_nEvanSlow__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rEvanSlow_{};

public:
    uint32_t _ZtlSecureTear_rEvanSlow__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tEvanSlow_{};

public:
    uint32_t _ZtlSecureTear_tEvanSlow__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMagicShield_{};

public:
    uint32_t _ZtlSecureTear_nMagicShield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMagicShield_{};

public:
    uint32_t _ZtlSecureTear_rMagicShield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMagicShield_{};

public:
    uint32_t _ZtlSecureTear_tMagicShield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_mMagicShield_{};

public:
    uint32_t _ZtlSecureTear_mMagicShield__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMagicResistance_{};

public:
    uint32_t _ZtlSecureTear_nMagicResistance__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMagicResistance_{};

public:
    uint32_t _ZtlSecureTear_rMagicResistance__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMagicResistance_{};

public:
    uint32_t _ZtlSecureTear_tMagicResistance__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSoulStone_{};

public:
    uint32_t _ZtlSecureTear_nSoulStone__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSoulStone_{};

public:
    uint32_t _ZtlSecureTear_rSoulStone__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSoulStone_{};

public:
    uint32_t _ZtlSecureTear_tSoulStone__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nFlying_{};

public:
    uint32_t _ZtlSecureTear_nFlying__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rFlying_{};

public:
    uint32_t _ZtlSecureTear_rFlying__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tFlying_{};

public:
    uint32_t _ZtlSecureTear_tFlying__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nFrozen_{};

public:
    uint32_t _ZtlSecureTear_nFrozen__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rFrozen_{};

public:
    uint32_t _ZtlSecureTear_rFrozen__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tFrozen_{};

public:
    uint32_t _ZtlSecureTear_tFrozen__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nAssistCharge_{};

public:
    uint32_t _ZtlSecureTear_nAssistCharge__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rAssistCharge_{};

public:
    uint32_t _ZtlSecureTear_rAssistCharge__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tAssistCharge_{};

public:
    uint32_t _ZtlSecureTear_tAssistCharge__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEnrage_{};

public:
    uint32_t _ZtlSecureTear_nEnrage__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rEnrage_{};

public:
    uint32_t _ZtlSecureTear_rEnrage__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tEnrage_{};

public:
    uint32_t _ZtlSecureTear_tEnrage__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSuddenDeath_{};

public:
    uint32_t _ZtlSecureTear_nSuddenDeath__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSuddenDeath_{};

public:
    uint32_t _ZtlSecureTear_rSuddenDeath__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSuddenDeath_{};

public:
    uint32_t _ZtlSecureTear_tSuddenDeath__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_mSuddenDeath_{};

public:
    uint32_t _ZtlSecureTear_mSuddenDeath__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nNotDamaged_{};

public:
    uint32_t _ZtlSecureTear_nNotDamaged__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rNotDamaged_{};

public:
    uint32_t _ZtlSecureTear_rNotDamaged__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tNotDamaged_{};

public:
    uint32_t _ZtlSecureTear_tNotDamaged__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nFinalCut_{};

public:
    uint32_t _ZtlSecureTear_nFinalCut__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rFinalCut_{};

public:
    uint32_t _ZtlSecureTear_rFinalCut__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tFinalCut_{};

public:
    uint32_t _ZtlSecureTear_tFinalCut__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nThornsEffect_{};

public:
    uint32_t _ZtlSecureTear_nThornsEffect__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rThornsEffect_{};

public:
    uint32_t _ZtlSecureTear_rThornsEffect__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tThornsEffect_{};

public:
    uint32_t _ZtlSecureTear_tThornsEffect__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSwallowAttackDamage_{};

public:
    uint32_t _ZtlSecureTear_nSwallowAttackDamage__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSwallowAttackDamage_{};

public:
    uint32_t _ZtlSecureTear_rSwallowAttackDamage__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSwallowAttackDamage_{};

public:
    uint32_t _ZtlSecureTear_tSwallowAttackDamage__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMorewildDamageUp_{};

public:
    uint32_t _ZtlSecureTear_nMorewildDamageUp__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMorewildDamageUp_{};

public:
    uint32_t _ZtlSecureTear_rMorewildDamageUp__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMorewildDamageUp_{};

public:
    uint32_t _ZtlSecureTear_tMorewildDamageUp__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEMHP{};

public:
    uint32_t _ZtlSecureTear_nEMHP_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEMHP_{};

public:
    uint32_t _ZtlSecureTear_nEMHP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rEMHP_{};

public:
    uint32_t _ZtlSecureTear_rEMHP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tEMHP_{};

public:
    uint32_t _ZtlSecureTear_tEMHP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEMMP{};

public:
    uint32_t _ZtlSecureTear_nEMMP_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEMMP_{};

public:
    uint32_t _ZtlSecureTear_nEMMP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rEMMP_{};

public:
    uint32_t _ZtlSecureTear_rEMMP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tEMMP_{};

public:
    uint32_t _ZtlSecureTear_tEMMP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEPAD{};

public:
    uint32_t _ZtlSecureTear_nEPAD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEPAD_{};

public:
    uint32_t _ZtlSecureTear_nEPAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rEPAD_{};

public:
    uint32_t _ZtlSecureTear_rEPAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tEPAD_{};

public:
    uint32_t _ZtlSecureTear_tEPAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEPDD{};

public:
    uint32_t _ZtlSecureTear_nEPDD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEPDD_{};

public:
    uint32_t _ZtlSecureTear_nEPDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rEPDD_{};

public:
    uint32_t _ZtlSecureTear_rEPDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tEPDD_{};

public:
    uint32_t _ZtlSecureTear_tEPDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEMDD{};

public:
    uint32_t _ZtlSecureTear_nEMDD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEMDD_{};

public:
    uint32_t _ZtlSecureTear_nEMDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rEMDD_{};

public:
    uint32_t _ZtlSecureTear_rEMDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tEMDD_{};

public:
    uint32_t _ZtlSecureTear_tEMDD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nGuard_{};

public:
    uint32_t _ZtlSecureTear_nGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rGuard_{};

public:
    uint32_t _ZtlSecureTear_rGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tGuard_{};

public:
    uint32_t _ZtlSecureTear_tGuard__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMine_{};

public:
    uint32_t _ZtlSecureTear_nMine__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMine_{};

public:
    uint32_t _ZtlSecureTear_rMine__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMine_{};

public:
    uint32_t _ZtlSecureTear_tMine__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSafetyDamage_{};

public:
    uint32_t _ZtlSecureTear_nSafetyDamage__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSafetyDamage_{};

public:
    uint32_t _ZtlSecureTear_rSafetyDamage__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSafetyDamage_{};

public:
    uint32_t _ZtlSecureTear_tSafetyDamage__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSafetyAbsorb_{};

public:
    uint32_t _ZtlSecureTear_nSafetyAbsorb__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSafetyAbsorb_{};

public:
    uint32_t _ZtlSecureTear_rSafetyAbsorb__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSafetyAbsorb_{};

public:
    uint32_t _ZtlSecureTear_tSafetyAbsorb__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nCyclone_{};

public:
    uint32_t _ZtlSecureTear_nCyclone__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rCyclone_{};

public:
    uint32_t _ZtlSecureTear_rCyclone__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tCyclone_{};

public:
    uint32_t _ZtlSecureTear_tCyclone__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSwallowCritical_{};

public:
    uint32_t _ZtlSecureTear_nSwallowCritical__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSwallowCritical_{};

public:
    uint32_t _ZtlSecureTear_rSwallowCritical__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSwallowCritical_{};

public:
    uint32_t _ZtlSecureTear_tSwallowCritical__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSwallowMaxMP_{};

public:
    uint32_t _ZtlSecureTear_nSwallowMaxMP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSwallowMaxMP_{};

public:
    uint32_t _ZtlSecureTear_rSwallowMaxMP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSwallowMaxMP_{};

public:
    uint32_t _ZtlSecureTear_tSwallowMaxMP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSwallowDefence_{};

public:
    uint32_t _ZtlSecureTear_nSwallowDefence__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSwallowDefence_{};

public:
    uint32_t _ZtlSecureTear_rSwallowDefence__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSwallowDefence_{};

public:
    uint32_t _ZtlSecureTear_tSwallowDefence__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSwallowEvasion_{};

public:
    uint32_t _ZtlSecureTear_nSwallowEvasion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSwallowEvasion_{};

public:
    uint32_t _ZtlSecureTear_rSwallowEvasion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSwallowEvasion_{};

public:
    uint32_t _ZtlSecureTear_tSwallowEvasion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSwallowBuffTime_{};

public:
    uint32_t _ZtlSecureTear_tSwallowBuffTime__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nConversion_{};

public:
    uint32_t _ZtlSecureTear_nConversion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rConversion_{};

public:
    uint32_t _ZtlSecureTear_rConversion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tConversion_{};

public:
    uint32_t _ZtlSecureTear_tConversion__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nRevive_{};

public:
    uint32_t _ZtlSecureTear_nRevive__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rRevive_{};

public:
    uint32_t _ZtlSecureTear_rRevive__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tRevive_{};

public:
    uint32_t _ZtlSecureTear_tRevive__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSneak_{};

public:
    uint32_t _ZtlSecureTear_nSneak__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSneak_{};

public:
    uint32_t _ZtlSecureTear_rSneak__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSneak_{};

public:
    uint32_t _ZtlSecureTear_tSneak__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMorewildMaxHP_{};

public:
    uint32_t _ZtlSecureTear_nMorewildMaxHP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rMorewildMaxHP_{};

public:
    uint32_t _ZtlSecureTear_rMorewildMaxHP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tMorewildMaxHP_{};

public:
    uint32_t _ZtlSecureTear_tMorewildMaxHP__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDice_{};

public:
    uint32_t _ZtlSecureTear_nDice__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDice_{};

public:
    uint32_t _ZtlSecureTear_rDice__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDice_{};

public:
    uint32_t _ZtlSecureTear_tDice__CS{};

public:
    std::array<long, 22> aDiceInfo{};

public:
    std::array<long, 2> _ZtlSecureTear_nBlessingArmor_{};

public:
    uint32_t _ZtlSecureTear_nBlessingArmor__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rBlessingArmor_{};

public:
    uint32_t _ZtlSecureTear_rBlessingArmor__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tBlessingArmor_{};

public:
    uint32_t _ZtlSecureTear_tBlessingArmor__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBlessingArmorIncPAD_{};

public:
    uint32_t _ZtlSecureTear_nBlessingArmorIncPAD__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDamR_{};

public:
    uint32_t _ZtlSecureTear_nDamR__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rDamR_{};

public:
    uint32_t _ZtlSecureTear_rDamR__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tDamR_{};

public:
    uint32_t _ZtlSecureTear_tDamR__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nTeleportMasteryOn_{};

public:
    uint32_t _ZtlSecureTear_nTeleportMasteryOn__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rTeleportMasteryOn_{};

public:
    uint32_t _ZtlSecureTear_rTeleportMasteryOn__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tTeleportMasteryOn_{};

public:
    uint32_t _ZtlSecureTear_tTeleportMasteryOn__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nCombatOrders_{};

public:
    uint32_t _ZtlSecureTear_nCombatOrders__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rCombatOrders_{};

public:
    uint32_t _ZtlSecureTear_rCombatOrders__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tCombatOrders_{};

public:
    uint32_t _ZtlSecureTear_tCombatOrders__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nBeholder_{};

public:
    uint32_t _ZtlSecureTear_nBeholder__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rBeholder_{};

public:
    uint32_t _ZtlSecureTear_rBeholder__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tBeholder_{};

public:
    uint32_t _ZtlSecureTear_tBeholder__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSummonBomb_{};

public:
    uint32_t _ZtlSecureTear_nSummonBomb__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_rSummonBomb_{};

public:
    uint32_t _ZtlSecureTear_rSummonBomb__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_tSummonBomb_{};

public:
    uint32_t _ZtlSecureTear_tSummonBomb__CS{};

public:
    std::array<long, 2> _ZtlSecureTear_lSummonBomb_{};

public:
    uint32_t _ZtlSecureTear_lSummonBomb__CS{};

public:
    std::array<ZRef<TemporaryStatBase<long>>, 7> aTemporaryStat{};
    // Methods
public:
    ~SecondaryStat();

public:
    void _dtor_0();

public:
    SecondaryStat(const SecondaryStat &arg0);

public:
    void _ctor_1(const SecondaryStat &arg0);

    CTOR_DEFAULT(SecondaryStat);

public:
    SecondaryStat();

public:
    void _ctor_0();

public:
    long __fastcall _ZtlSecureGet_nPAD() const;

public:
    long __fastcall _ZtlSecurePut_nPAD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPAD_() const;

    long __fastcall _ZtlSecurePut_nPAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rPAD_() const;

public:
    long __fastcall _ZtlSecurePut_rPAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tPAD_() const;

public:
    long __fastcall _ZtlSecurePut_tPAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemPADR() const;

public:
    long __fastcall _ZtlSecurePut_nItemPADR(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPDD() const;

public:
    long __fastcall _ZtlSecurePut_nPDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPDD_() const;

public:
    long __fastcall _ZtlSecurePut_nPDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rPDD_() const;

public:
    long __fastcall _ZtlSecurePut_rPDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tPDD_() const;

public:
    long __fastcall _ZtlSecurePut_tPDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemPDDR() const;

public:
    long __fastcall _ZtlSecurePut_nItemPDDR(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMAD() const;

public:
    long __fastcall _ZtlSecurePut_nMAD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMAD_() const;

public:
    long __fastcall _ZtlSecurePut_nMAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMAD_() const;

public:
    long __fastcall _ZtlSecurePut_rMAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMAD_() const;

public:
    long __fastcall _ZtlSecurePut_tMAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemMADR() const;

public:
    long __fastcall _ZtlSecurePut_nItemMADR(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMDD() const;

public:
    long __fastcall _ZtlSecurePut_nMDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMDD_() const;

public:
    long __fastcall _ZtlSecurePut_nMDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMDD_() const;

public:
    long __fastcall _ZtlSecurePut_rMDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMDD_() const;

public:
    long __fastcall _ZtlSecurePut_tMDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemMDDR() const;

public:
    long __fastcall _ZtlSecurePut_nItemMDDR(long arg0);

public:
    long __fastcall _ZtlSecureGet_nACC() const;

public:
    long __fastcall _ZtlSecurePut_nACC(long arg0);

public:
    long __fastcall _ZtlSecureGet_nACC_() const;

public:
    long __fastcall _ZtlSecurePut_nACC_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rACC_() const;

public:
    long __fastcall _ZtlSecurePut_rACC_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tACC_() const;

public:
    long __fastcall _ZtlSecurePut_tACC_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemACCR() const;

public:
    long __fastcall _ZtlSecurePut_nItemACCR(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEVA() const;

public:
    long __fastcall _ZtlSecurePut_nEVA(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEVA_() const;

public:
    long __fastcall _ZtlSecurePut_nEVA_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rEVA_() const;

public:
    long __fastcall _ZtlSecurePut_rEVA_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tEVA_() const;

public:
    long __fastcall _ZtlSecurePut_tEVA_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemEVAR() const;

public:
    long __fastcall _ZtlSecurePut_nItemEVAR(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCraft() const;

public:
    long __fastcall _ZtlSecurePut_nCraft(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCraft_() const;

public:
    long __fastcall _ZtlSecurePut_nCraft_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rCraft_() const;

public:
    long __fastcall _ZtlSecurePut_rCraft_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tCraft_() const;

public:
    long __fastcall _ZtlSecurePut_tCraft_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSpeed() const;

public:
    long __fastcall _ZtlSecurePut_nSpeed(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSpeed_() const;

public:
    long __fastcall _ZtlSecurePut_nSpeed_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSpeed_() const;

public:
    long __fastcall _ZtlSecurePut_rSpeed_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSpeed_() const;

public:
    long __fastcall _ZtlSecurePut_tSpeed_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nJump() const;

public:
    long __fastcall _ZtlSecurePut_nJump(long arg0);

public:
    long __fastcall _ZtlSecureGet_nJump_() const;

public:
    long __fastcall _ZtlSecurePut_nJump_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rJump_() const;

public:
    long __fastcall _ZtlSecurePut_rJump_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tJump_() const;

public:
    long __fastcall _ZtlSecurePut_tJump_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMagicGuard_() const;

public:
    long __fastcall _ZtlSecurePut_nMagicGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMagicGuard_() const;

public:
    long __fastcall _ZtlSecurePut_rMagicGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMagicGuard_() const;

public:
    long __fastcall _ZtlSecurePut_tMagicGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDarkSight_() const;

public:
    long __fastcall _ZtlSecurePut_nDarkSight_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDarkSight_() const;

public:
    long __fastcall _ZtlSecurePut_rDarkSight_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDarkSight_() const;

public:
    long __fastcall _ZtlSecurePut_tDarkSight_(long arg0);

public:
    long __fastcall _ZtlSecureGet_mDarkSight_() const;

public:
    long __fastcall _ZtlSecurePut_mDarkSight_(long arg0);

public:
    long __fastcall _ZtlSecureGet_pDarkSight_() const;

public:
    long __fastcall _ZtlSecurePut_pDarkSight_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBooster_() const;

public:
    long __fastcall _ZtlSecurePut_nBooster_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rBooster_() const;

public:
    long __fastcall _ZtlSecurePut_rBooster_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tBooster_() const;

public:
    long __fastcall _ZtlSecurePut_tBooster_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPowerGuard_() const;

public:
    long __fastcall _ZtlSecurePut_nPowerGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rPowerGuard_() const;

public:
    long __fastcall _ZtlSecurePut_rPowerGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tPowerGuard_() const;

public:
    long __fastcall _ZtlSecurePut_tPowerGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMechanic_() const;

public:
    long __fastcall _ZtlSecurePut_nMechanic_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMechanic_() const;

public:
    long __fastcall _ZtlSecurePut_rMechanic_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMechanic_() const;

public:
    long __fastcall _ZtlSecurePut_tMechanic_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMaxHP_() const;

public:
    long __fastcall _ZtlSecurePut_nMaxHP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMaxHP_() const;

public:
    long __fastcall _ZtlSecurePut_rMaxHP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMaxHP_() const;

public:
    long __fastcall _ZtlSecurePut_tMaxHP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMaxMP_() const;

public:
    long __fastcall _ZtlSecurePut_nMaxMP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMaxMP_() const;

public:
    long __fastcall _ZtlSecurePut_rMaxMP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMaxMP_() const;

public:
    long __fastcall _ZtlSecurePut_tMaxMP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nInvincible_() const;

public:
    long __fastcall _ZtlSecurePut_nInvincible_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rInvincible_() const;

public:
    long __fastcall _ZtlSecurePut_rInvincible_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tInvincible_() const;

public:
    long __fastcall _ZtlSecurePut_tInvincible_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSoulArrow_() const;

public:
    long __fastcall _ZtlSecurePut_nSoulArrow_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSoulArrow_() const;

public:
    long __fastcall _ZtlSecurePut_rSoulArrow_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSoulArrow_() const;

public:
    long __fastcall _ZtlSecurePut_tSoulArrow_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nStun_() const;

public:
    long __fastcall _ZtlSecurePut_nStun_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rStun_() const;

public:
    long __fastcall _ZtlSecurePut_rStun_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tStun_() const;

public:
    long __fastcall _ZtlSecurePut_tStun_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPoison_() const;

public:
    long __fastcall _ZtlSecurePut_nPoison_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rPoison_() const;

public:
    long __fastcall _ZtlSecurePut_rPoison_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tPoison_() const;

public:
    long __fastcall _ZtlSecurePut_tPoison_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSeal_() const;

public:
    long __fastcall _ZtlSecurePut_nSeal_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSeal_() const;

public:
    long __fastcall _ZtlSecurePut_rSeal_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSeal_() const;

public:
    long __fastcall _ZtlSecurePut_tSeal_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDarkness_() const;

public:
    long __fastcall _ZtlSecurePut_nDarkness_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDarkness_() const;

public:
    long __fastcall _ZtlSecurePut_rDarkness_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDarkness_() const;

public:
    long __fastcall _ZtlSecurePut_tDarkness_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nComboCounter_() const;

public:
    long __fastcall _ZtlSecurePut_nComboCounter_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rComboCounter_() const;

public:
    long __fastcall _ZtlSecurePut_rComboCounter_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tComboCounter_() const;

public:
    long __fastcall _ZtlSecurePut_tComboCounter_(long arg0);

public:
    long __fastcall _ZtlSecureGet_mComboCounter_() const;

public:
    long __fastcall _ZtlSecurePut_mComboCounter_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nWeaponCharge_() const;

public:
    long __fastcall _ZtlSecurePut_nWeaponCharge_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rWeaponCharge_() const;

public:
    long __fastcall _ZtlSecurePut_rWeaponCharge_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tWeaponCharge_() const;

public:
    long __fastcall _ZtlSecurePut_tWeaponCharge_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDragonBlood_() const;

public:
    long __fastcall _ZtlSecurePut_nDragonBlood_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDragonBlood_() const;

public:
    long __fastcall _ZtlSecurePut_rDragonBlood_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDragonBlood_() const;

public:
    long __fastcall _ZtlSecurePut_tDragonBlood_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nHolySymbol_() const;

public:
    long __fastcall _ZtlSecurePut_nHolySymbol_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rHolySymbol_() const;

public:
    long __fastcall _ZtlSecurePut_rHolySymbol_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tHolySymbol_() const;

public:
    long __fastcall _ZtlSecurePut_tHolySymbol_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMesoUp_() const;

public:
    long __fastcall _ZtlSecurePut_nMesoUp_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMesoUp_() const;

public:
    long __fastcall _ZtlSecurePut_rMesoUp_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMesoUp_() const;

public:
    long __fastcall _ZtlSecurePut_tMesoUp_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nShadowPartner_() const;

public:
    long __fastcall _ZtlSecurePut_nShadowPartner_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rShadowPartner_() const;

public:
    long __fastcall _ZtlSecurePut_rShadowPartner_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tShadowPartner_() const;

public:
    long __fastcall _ZtlSecurePut_tShadowPartner_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPickPocket_() const;

public:
    long __fastcall _ZtlSecurePut_nPickPocket_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rPickPocket_() const;

public:
    long __fastcall _ZtlSecurePut_rPickPocket_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tPickPocket_() const;

public:
    long __fastcall _ZtlSecurePut_tPickPocket_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMesoGuard_() const;

public:
    long __fastcall _ZtlSecurePut_nMesoGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMesoGuard_() const;

public:
    long __fastcall _ZtlSecurePut_rMesoGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMesoGuard_() const;

public:
    long __fastcall _ZtlSecurePut_tMesoGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nThaw_() const;

public:
    long __fastcall _ZtlSecurePut_nThaw_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rThaw_() const;

public:
    long __fastcall _ZtlSecurePut_rThaw_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tThaw_() const;

public:
    long __fastcall _ZtlSecurePut_tThaw_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nWeakness_() const;

public:
    long __fastcall _ZtlSecurePut_nWeakness_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rWeakness_() const;

public:
    long __fastcall _ZtlSecurePut_rWeakness_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tWeakness_() const;

public:
    long __fastcall _ZtlSecurePut_tWeakness_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCurse_() const;

public:
    long __fastcall _ZtlSecurePut_nCurse_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rCurse_() const;

public:
    long __fastcall _ZtlSecurePut_rCurse_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tCurse_() const;

public:
    long __fastcall _ZtlSecurePut_tCurse_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSlow_() const;

public:
    long __fastcall _ZtlSecurePut_nSlow_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSlow_() const;

public:
    long __fastcall _ZtlSecurePut_rSlow_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSlow_() const;

public:
    long __fastcall _ZtlSecurePut_tSlow_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMorph_() const;

public:
    long __fastcall _ZtlSecurePut_nMorph_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMorph_() const;

public:
    long __fastcall _ZtlSecurePut_rMorph_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMorph_() const;

public:
    long __fastcall _ZtlSecurePut_tMorph_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nGhost_() const;

public:
    long __fastcall _ZtlSecurePut_nGhost_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rGhost_() const;

public:
    long __fastcall _ZtlSecurePut_rGhost_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tGhost_() const;

public:
    long __fastcall _ZtlSecurePut_tGhost_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nRegen_() const;

public:
    long __fastcall _ZtlSecurePut_nRegen_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rRegen_() const;

public:
    long __fastcall _ZtlSecurePut_rRegen_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tRegen_() const;

public:
    long __fastcall _ZtlSecurePut_tRegen_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBasicStatUp_() const;

public:
    long __fastcall _ZtlSecurePut_nBasicStatUp_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rBasicStatUp_() const;

public:
    long __fastcall _ZtlSecurePut_rBasicStatUp_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tBasicStatUp_() const;

public:
    long __fastcall _ZtlSecurePut_tBasicStatUp_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nStance_() const;

public:
    long __fastcall _ZtlSecurePut_nStance_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rStance_() const;

public:
    long __fastcall _ZtlSecurePut_rStance_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tStance_() const;

public:
    long __fastcall _ZtlSecurePut_tStance_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSharpEyes_() const;

public:
    long __fastcall _ZtlSecurePut_nSharpEyes_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSharpEyes_() const;

public:
    long __fastcall _ZtlSecurePut_rSharpEyes_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSharpEyes_() const;

public:
    long __fastcall _ZtlSecurePut_tSharpEyes_(long arg0);

public:
    long __fastcall _ZtlSecureGet_mSharpEyes_() const;

public:
    long __fastcall _ZtlSecurePut_mSharpEyes_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nManaReflection_() const;

public:
    long __fastcall _ZtlSecurePut_nManaReflection_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rManaReflection_() const;

public:
    long __fastcall _ZtlSecurePut_rManaReflection_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tManaReflection_() const;

public:
    long __fastcall _ZtlSecurePut_tManaReflection_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nAttract_() const;

public:
    long __fastcall _ZtlSecurePut_nAttract_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rAttract_() const;

public:
    long __fastcall _ZtlSecurePut_rAttract_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tAttract_() const;

public:
    long __fastcall _ZtlSecurePut_tAttract_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSpiritJavelin_() const;

public:
    long __fastcall _ZtlSecurePut_nSpiritJavelin_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSpiritJavelin_() const;

public:
    long __fastcall _ZtlSecurePut_rSpiritJavelin_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSpiritJavelin_() const;

public:
    long __fastcall _ZtlSecurePut_tSpiritJavelin_(long arg0);

public:
    long __fastcall _ZtlSecureGet_mSpiritJavelin_() const;

public:
    long __fastcall _ZtlSecurePut_mSpiritJavelin_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nInfinity_() const;

public:
    long __fastcall _ZtlSecurePut_nInfinity_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rInfinity_() const;

public:
    long __fastcall _ZtlSecurePut_rInfinity_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tInfinity_() const;

public:
    long __fastcall _ZtlSecurePut_tInfinity_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tUpdateInfinity_() const;

public:
    long __fastcall _ZtlSecurePut_tUpdateInfinity_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nHolyshield_() const;

public:
    long __fastcall _ZtlSecurePut_nHolyshield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rHolyshield_() const;

public:
    long __fastcall _ZtlSecurePut_rHolyshield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tHolyshield_() const;

public:
    long __fastcall _ZtlSecurePut_tHolyshield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nHamString_() const;

public:
    long __fastcall _ZtlSecurePut_nHamString_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rHamString_() const;

public:
    long __fastcall _ZtlSecurePut_rHamString_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tHamString_() const;

public:
    long __fastcall _ZtlSecurePut_tHamString_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBlind_() const;

public:
    long __fastcall _ZtlSecurePut_nBlind_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rBlind_() const;

public:
    long __fastcall _ZtlSecurePut_rBlind_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tBlind_() const;

public:
    long __fastcall _ZtlSecurePut_tBlind_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nConcentration_() const;

public:
    long __fastcall _ZtlSecurePut_nConcentration_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rConcentration_() const;

public:
    long __fastcall _ZtlSecurePut_rConcentration_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tConcentration_() const;

public:
    long __fastcall _ZtlSecurePut_tConcentration_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBanMap_() const;

public:
    long __fastcall _ZtlSecurePut_nBanMap_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rBanMap_() const;

public:
    long __fastcall _ZtlSecurePut_rBanMap_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tBanMap_() const;

public:
    long __fastcall _ZtlSecurePut_tBanMap_(long arg0);

public:
    long __fastcall _ZtlSecureGet_mBanMap_() const;

public:
    long __fastcall _ZtlSecurePut_mBanMap_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMaxLevelBuff_() const;

public:
    long __fastcall _ZtlSecurePut_nMaxLevelBuff_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMaxLevelBuff_() const;

public:
    long __fastcall _ZtlSecurePut_rMaxLevelBuff_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMaxLevelBuff_() const;

public:
    long __fastcall _ZtlSecurePut_tMaxLevelBuff_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nAura_() const;

public:
    long __fastcall _ZtlSecurePut_nAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rAura_() const;

public:
    long __fastcall _ZtlSecurePut_rAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tAura_() const;

public:
    long __fastcall _ZtlSecurePut_tAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tUpdateAura_() const;

public:
    long __fastcall _ZtlSecurePut_tUpdateAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSuperBody_() const;

public:
    long __fastcall _ZtlSecurePut_nSuperBody_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSuperBody_() const;

public:
    long __fastcall _ZtlSecurePut_rSuperBody_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSuperBody_() const;

public:
    long __fastcall _ZtlSecurePut_tSuperBody_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDarkAura_() const;

public:
    long __fastcall _ZtlSecurePut_nDarkAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDarkAura_() const;

public:
    long __fastcall _ZtlSecurePut_rDarkAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDarkAura_() const;

public:
    long __fastcall _ZtlSecurePut_tDarkAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_cDarkAura_() const;

public:
    long __fastcall _ZtlSecurePut_cDarkAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBlueAura_() const;

public:
    long __fastcall _ZtlSecurePut_nBlueAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rBlueAura_() const;

public:
    long __fastcall _ZtlSecurePut_rBlueAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tBlueAura_() const;

public:
    long __fastcall _ZtlSecurePut_tBlueAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_cBlueAura_() const;

public:
    long __fastcall _ZtlSecurePut_cBlueAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nYellowAura_() const;

public:
    long __fastcall _ZtlSecurePut_nYellowAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rYellowAura_() const;

public:
    long __fastcall _ZtlSecurePut_rYellowAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tYellowAura_() const;

public:
    long __fastcall _ZtlSecurePut_tYellowAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_cYellowAura_() const;

public:
    long __fastcall _ZtlSecurePut_cYellowAura_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBarrier_() const;

public:
    long __fastcall _ZtlSecurePut_nBarrier_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tBarrier_() const;

public:
    long __fastcall _ZtlSecurePut_tBarrier_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rBarrier_() const;

public:
    long __fastcall _ZtlSecurePut_rBarrier_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDojangShield_() const;

public:
    long __fastcall _ZtlSecurePut_nDojangShield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDojangShield_() const;

public:
    long __fastcall _ZtlSecurePut_tDojangShield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDojangShield_() const;

public:
    long __fastcall _ZtlSecurePut_rDojangShield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nReverseInput_() const;

public:
    long __fastcall _ZtlSecurePut_nReverseInput_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rReverseInput_() const;

public:
    long __fastcall _ZtlSecurePut_rReverseInput_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tReverseInput_() const;

public:
    long __fastcall _ZtlSecurePut_tReverseInput_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDojangBerserk_() const;

public:
    long __fastcall _ZtlSecurePut_nDojangBerserk_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDojangBerserk_() const;

public:
    long __fastcall _ZtlSecurePut_rDojangBerserk_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDojangBerserk_() const;

public:
    long __fastcall _ZtlSecurePut_tDojangBerserk_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDojangInvincible_() const;

public:
    long __fastcall _ZtlSecurePut_nDojangInvincible_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDojangInvincible_() const;

public:
    long __fastcall _ZtlSecurePut_rDojangInvincible_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDojangInvincible_() const;

public:
    long __fastcall _ZtlSecurePut_tDojangInvincible_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMesoUpByItem() const;

public:
    long __fastcall _ZtlSecurePut_nMesoUpByItem(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMesoUpByItem_() const;

public:
    long __fastcall _ZtlSecurePut_nMesoUpByItem_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMesoUpByItem_() const;

public:
    long __fastcall _ZtlSecurePut_rMesoUpByItem_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMesoUpByItem_() const;

public:
    long __fastcall _ZtlSecurePut_tMesoUpByItem_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemUpByItem() const;

public:
    long __fastcall _ZtlSecurePut_nItemUpByItem(long arg0);

public:
    long __fastcall _ZtlSecureGet_nItemUpByItem_() const;

public:
    long __fastcall _ZtlSecurePut_nItemUpByItem_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rItemUpByItem_() const;

public:
    long __fastcall _ZtlSecurePut_rItemUpByItem_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tItemUpByItem_() const;

public:
    long __fastcall _ZtlSecurePut_tItemUpByItem_(long arg0);

public:
    long __fastcall _ZtlSecureGet_xItemUpByItem_() const;

public:
    long __fastcall _ZtlSecurePut_xItemUpByItem_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nRespectPImmune() const;

public:
    long __fastcall _ZtlSecurePut_nRespectPImmune(long arg0);

public:
    long __fastcall _ZtlSecureGet_nRespectPImmune_() const;

public:
    long __fastcall _ZtlSecurePut_nRespectPImmune_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rRespectPImmune_() const;

public:
    long __fastcall _ZtlSecurePut_rRespectPImmune_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tRespectPImmune_() const;

public:
    long __fastcall _ZtlSecurePut_tRespectPImmune_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nRespectMImmune() const;

public:
    long __fastcall _ZtlSecurePut_nRespectMImmune(long arg0);

public:
    long __fastcall _ZtlSecureGet_nRespectMImmune_() const;

public:
    long __fastcall _ZtlSecurePut_nRespectMImmune_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rRespectMImmune_() const;

public:
    long __fastcall _ZtlSecurePut_rRespectMImmune_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tRespectMImmune_() const;

public:
    long __fastcall _ZtlSecurePut_tRespectMImmune_(long arg0);

public:
    char __fastcall _ZtlSecureGet_nDefenseAtt() const;

public:
    char __fastcall _ZtlSecurePut_nDefenseAtt(char arg0);

public:
    long __fastcall _ZtlSecureGet_nDefenseAtt_() const;

public:
    long __fastcall _ZtlSecurePut_nDefenseAtt_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDefenseAtt_() const;

public:
    long __fastcall _ZtlSecurePut_rDefenseAtt_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDefenseAtt_() const;

public:
    long __fastcall _ZtlSecurePut_tDefenseAtt_(long arg0);

public:
    char __fastcall _ZtlSecureGet_nDefenseState() const;

public:
    char __fastcall _ZtlSecurePut_nDefenseState(char arg0);

public:
    long __fastcall _ZtlSecureGet_nDefenseState_() const;

public:
    long __fastcall _ZtlSecurePut_nDefenseState_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDefenseState_() const;

public:
    long __fastcall _ZtlSecurePut_rDefenseState_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDefenseState_() const;

public:
    long __fastcall _ZtlSecurePut_tDefenseState_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nIncEffectHPPotion() const;

public:
    long __fastcall _ZtlSecurePut_nIncEffectHPPotion(long arg0);

public:
    long __fastcall _ZtlSecureGet_nIncEffectHPPotion_() const;

public:
    long __fastcall _ZtlSecurePut_nIncEffectHPPotion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rIncEffectHPPotion_() const;

public:
    long __fastcall _ZtlSecurePut_rIncEffectHPPotion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tIncEffectHPPotion_() const;

public:
    long __fastcall _ZtlSecurePut_tIncEffectHPPotion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nIncEffectMPPotion() const;

public:
    long __fastcall _ZtlSecurePut_nIncEffectMPPotion(long arg0);

public:
    long __fastcall _ZtlSecureGet_nIncEffectMPPotion_() const;

public:
    long __fastcall _ZtlSecurePut_nIncEffectMPPotion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rIncEffectMPPotion_() const;

public:
    long __fastcall _ZtlSecurePut_rIncEffectMPPotion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tIncEffectMPPotion_() const;

public:
    long __fastcall _ZtlSecurePut_tIncEffectMPPotion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSpark_() const;

public:
    long __fastcall _ZtlSecurePut_nSpark_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSpark_() const;

public:
    long __fastcall _ZtlSecurePut_rSpark_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSpark_() const;

public:
    long __fastcall _ZtlSecurePut_tSpark_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSoulMasterFinal_() const;

public:
    long __fastcall _ZtlSecurePut_nSoulMasterFinal_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSoulMasterFinal_() const;

public:
    long __fastcall _ZtlSecurePut_rSoulMasterFinal_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSoulMasterFinal_() const;

public:
    long __fastcall _ZtlSecurePut_tSoulMasterFinal_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nWindBreakerFinal_() const;

public:
    long __fastcall _ZtlSecurePut_nWindBreakerFinal_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rWindBreakerFinal_() const;

public:
    long __fastcall _ZtlSecurePut_rWindBreakerFinal_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tWindBreakerFinal_() const;

public:
    long __fastcall _ZtlSecurePut_tWindBreakerFinal_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nElementalReset_() const;

public:
    long __fastcall _ZtlSecurePut_nElementalReset_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rElementalReset_() const;

public:
    long __fastcall _ZtlSecurePut_rElementalReset_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tElementalReset_() const;

public:
    long __fastcall _ZtlSecurePut_tElementalReset_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nWindWalk_() const;

public:
    long __fastcall _ZtlSecurePut_nWindWalk_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rWindWalk_() const;

public:
    long __fastcall _ZtlSecurePut_rWindWalk_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tWindWalk_() const;

public:
    long __fastcall _ZtlSecurePut_tWindWalk_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEventRate_() const;

public:
    long __fastcall _ZtlSecurePut_nEventRate_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rEventRate_() const;

public:
    long __fastcall _ZtlSecurePut_rEventRate_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tEventRate_() const;

public:
    long __fastcall _ZtlSecurePut_tEventRate_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nComboAbilityBuff_() const;

public:
    long __fastcall _ZtlSecurePut_nComboAbilityBuff_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rComboAbilityBuff_() const;

public:
    long __fastcall _ZtlSecurePut_rComboAbilityBuff_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tComboAbilityBuff_() const;

public:
    long __fastcall _ZtlSecurePut_tComboAbilityBuff_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nComboDrain_() const;

public:
    long __fastcall _ZtlSecurePut_nComboDrain_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rComboDrain_() const;

public:
    long __fastcall _ZtlSecurePut_rComboDrain_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tComboDrain_() const;

public:
    long __fastcall _ZtlSecurePut_tComboDrain_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nComboBarrier_() const;

public:
    long __fastcall _ZtlSecurePut_nComboBarrier_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rComboBarrier_() const;

public:
    long __fastcall _ZtlSecurePut_rComboBarrier_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tComboBarrier_() const;

public:
    long __fastcall _ZtlSecurePut_tComboBarrier_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBodyPressure_() const;

public:
    long __fastcall _ZtlSecurePut_nBodyPressure_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rBodyPressure_() const;

public:
    long __fastcall _ZtlSecurePut_rBodyPressure_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tBodyPressure_() const;

public:
    long __fastcall _ZtlSecurePut_tBodyPressure_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSmartKnockback_() const;

public:
    long __fastcall _ZtlSecurePut_nSmartKnockback_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSmartKnockback_() const;

public:
    long __fastcall _ZtlSecurePut_rSmartKnockback_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSmartKnockback_() const;

public:
    long __fastcall _ZtlSecurePut_tSmartKnockback_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nRepeatEffect_() const;

public:
    long __fastcall _ZtlSecurePut_nRepeatEffect_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rRepeatEffect_() const;

public:
    long __fastcall _ZtlSecurePut_rRepeatEffect_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tRepeatEffect_() const;

public:
    long __fastcall _ZtlSecurePut_tRepeatEffect_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nExpBuffRate_() const;

public:
    long __fastcall _ZtlSecurePut_nExpBuffRate_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rExpBuffRate_() const;

public:
    long __fastcall _ZtlSecurePut_rExpBuffRate_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tExpBuffRate_() const;

public:
    long __fastcall _ZtlSecurePut_tExpBuffRate_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nStopPortion_() const;

public:
    long __fastcall _ZtlSecurePut_nStopPortion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rStopPortion_() const;

public:
    long __fastcall _ZtlSecurePut_rStopPortion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tStopPortion_() const;

public:
    long __fastcall _ZtlSecurePut_tStopPortion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nStopMotion_() const;

public:
    long __fastcall _ZtlSecurePut_nStopMotion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rStopMotion_() const;

public:
    long __fastcall _ZtlSecurePut_rStopMotion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tStopMotion_() const;

public:
    long __fastcall _ZtlSecurePut_tStopMotion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nFear_() const;

public:
    long __fastcall _ZtlSecurePut_nFear_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rFear_() const;

public:
    long __fastcall _ZtlSecurePut_rFear_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tFear_() const;

public:
    long __fastcall _ZtlSecurePut_tFear_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEvanSlow_() const;

public:
    long __fastcall _ZtlSecurePut_nEvanSlow_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rEvanSlow_() const;

public:
    long __fastcall _ZtlSecurePut_rEvanSlow_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tEvanSlow_() const;

public:
    long __fastcall _ZtlSecurePut_tEvanSlow_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMagicShield_() const;

public:
    long __fastcall _ZtlSecurePut_nMagicShield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMagicShield_() const;

public:
    long __fastcall _ZtlSecurePut_rMagicShield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMagicShield_() const;

public:
    long __fastcall _ZtlSecurePut_tMagicShield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_mMagicShield_() const;

public:
    long __fastcall _ZtlSecurePut_mMagicShield_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMagicResistance_() const;

public:
    long __fastcall _ZtlSecurePut_nMagicResistance_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMagicResistance_() const;

public:
    long __fastcall _ZtlSecurePut_rMagicResistance_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMagicResistance_() const;

public:
    long __fastcall _ZtlSecurePut_tMagicResistance_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSoulStone_() const;

public:
    long __fastcall _ZtlSecurePut_nSoulStone_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSoulStone_() const;

public:
    long __fastcall _ZtlSecurePut_rSoulStone_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSoulStone_() const;

public:
    long __fastcall _ZtlSecurePut_tSoulStone_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nFlying_() const;

public:
    long __fastcall _ZtlSecurePut_nFlying_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rFlying_() const;

public:
    long __fastcall _ZtlSecurePut_rFlying_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tFlying_() const;

public:
    long __fastcall _ZtlSecurePut_tFlying_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nFrozen_() const;

public:
    long __fastcall _ZtlSecurePut_nFrozen_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rFrozen_() const;

public:
    long __fastcall _ZtlSecurePut_rFrozen_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tFrozen_() const;

public:
    long __fastcall _ZtlSecurePut_tFrozen_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nAssistCharge_() const;

public:
    long __fastcall _ZtlSecurePut_nAssistCharge_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rAssistCharge_() const;

public:
    long __fastcall _ZtlSecurePut_rAssistCharge_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tAssistCharge_() const;

public:
    long __fastcall _ZtlSecurePut_tAssistCharge_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEnrage_() const;

public:
    long __fastcall _ZtlSecurePut_nEnrage_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rEnrage_() const;

public:
    long __fastcall _ZtlSecurePut_rEnrage_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tEnrage_() const;

public:
    long __fastcall _ZtlSecurePut_tEnrage_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSuddenDeath_() const;

public:
    long __fastcall _ZtlSecurePut_nSuddenDeath_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSuddenDeath_() const;

public:
    long __fastcall _ZtlSecurePut_rSuddenDeath_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSuddenDeath_() const;

public:
    long __fastcall _ZtlSecurePut_tSuddenDeath_(long arg0);

public:
    long __fastcall _ZtlSecureGet_mSuddenDeath_() const;

public:
    long __fastcall _ZtlSecurePut_mSuddenDeath_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nNotDamaged_() const;

public:
    long __fastcall _ZtlSecurePut_nNotDamaged_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rNotDamaged_() const;

public:
    long __fastcall _ZtlSecurePut_rNotDamaged_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tNotDamaged_() const;

public:
    long __fastcall _ZtlSecurePut_tNotDamaged_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nFinalCut_() const;

public:
    long __fastcall _ZtlSecurePut_nFinalCut_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rFinalCut_() const;

public:
    long __fastcall _ZtlSecurePut_rFinalCut_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tFinalCut_() const;

public:
    long __fastcall _ZtlSecurePut_tFinalCut_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nThornsEffect_() const;

public:
    long __fastcall _ZtlSecurePut_nThornsEffect_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rThornsEffect_() const;

public:
    long __fastcall _ZtlSecurePut_rThornsEffect_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tThornsEffect_() const;

public:
    long __fastcall _ZtlSecurePut_tThornsEffect_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSwallowAttackDamage_() const;

public:
    long __fastcall _ZtlSecurePut_nSwallowAttackDamage_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSwallowAttackDamage_() const;

public:
    long __fastcall _ZtlSecurePut_rSwallowAttackDamage_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSwallowAttackDamage_() const;

public:
    long __fastcall _ZtlSecurePut_tSwallowAttackDamage_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMorewildDamageUp_() const;

public:
    long __fastcall _ZtlSecurePut_nMorewildDamageUp_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMorewildDamageUp_() const;

public:
    long __fastcall _ZtlSecurePut_rMorewildDamageUp_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMorewildDamageUp_() const;

public:
    long __fastcall _ZtlSecurePut_tMorewildDamageUp_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEMHP() const;

public:
    long __fastcall _ZtlSecurePut_nEMHP(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEMHP_() const;

public:
    long __fastcall _ZtlSecurePut_nEMHP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rEMHP_() const;

public:
    long __fastcall _ZtlSecurePut_rEMHP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tEMHP_() const;

public:
    long __fastcall _ZtlSecurePut_tEMHP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEMMP() const;

public:
    long __fastcall _ZtlSecurePut_nEMMP(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEMMP_() const;

public:
    long __fastcall _ZtlSecurePut_nEMMP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rEMMP_() const;

public:
    long __fastcall _ZtlSecurePut_rEMMP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tEMMP_() const;

public:
    long __fastcall _ZtlSecurePut_tEMMP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEPAD() const;

public:
    long __fastcall _ZtlSecurePut_nEPAD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEPAD_() const;

public:
    long __fastcall _ZtlSecurePut_nEPAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rEPAD_() const;

public:
    long __fastcall _ZtlSecurePut_rEPAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tEPAD_() const;

public:
    long __fastcall _ZtlSecurePut_tEPAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEPDD() const;

public:
    long __fastcall _ZtlSecurePut_nEPDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEPDD_() const;

public:
    long __fastcall _ZtlSecurePut_nEPDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rEPDD_() const;

public:
    long __fastcall _ZtlSecurePut_rEPDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tEPDD_() const;

public:
    long __fastcall _ZtlSecurePut_tEPDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEMDD() const;

public:
    long __fastcall _ZtlSecurePut_nEMDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEMDD_() const;

public:
    long __fastcall _ZtlSecurePut_nEMDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rEMDD_() const;

public:
    long __fastcall _ZtlSecurePut_rEMDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tEMDD_() const;

public:
    long __fastcall _ZtlSecurePut_tEMDD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nGuard_() const;

public:
    long __fastcall _ZtlSecurePut_nGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rGuard_() const;

public:
    long __fastcall _ZtlSecurePut_rGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tGuard_() const;

public:
    long __fastcall _ZtlSecurePut_tGuard_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMine_() const;

public:
    long __fastcall _ZtlSecurePut_nMine_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMine_() const;

public:
    long __fastcall _ZtlSecurePut_rMine_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMine_() const;

public:
    long __fastcall _ZtlSecurePut_tMine_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSafetyDamage_() const;

public:
    long __fastcall _ZtlSecurePut_nSafetyDamage_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSafetyDamage_() const;

public:
    long __fastcall _ZtlSecurePut_rSafetyDamage_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSafetyDamage_() const;

public:
    long __fastcall _ZtlSecurePut_tSafetyDamage_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSafetyAbsorb_() const;

public:
    long __fastcall _ZtlSecurePut_nSafetyAbsorb_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSafetyAbsorb_() const;

public:
    long __fastcall _ZtlSecurePut_rSafetyAbsorb_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSafetyAbsorb_() const;

public:
    long __fastcall _ZtlSecurePut_tSafetyAbsorb_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCyclone_() const;

public:
    long __fastcall _ZtlSecurePut_nCyclone_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rCyclone_() const;

public:
    long __fastcall _ZtlSecurePut_rCyclone_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tCyclone_() const;

public:
    long __fastcall _ZtlSecurePut_tCyclone_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSwallowCritical_() const;

public:
    long __fastcall _ZtlSecurePut_nSwallowCritical_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSwallowCritical_() const;

public:
    long __fastcall _ZtlSecurePut_rSwallowCritical_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSwallowCritical_() const;

public:
    long __fastcall _ZtlSecurePut_tSwallowCritical_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSwallowMaxMP_() const;

public:
    long __fastcall _ZtlSecurePut_nSwallowMaxMP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSwallowMaxMP_() const;

public:
    long __fastcall _ZtlSecurePut_rSwallowMaxMP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSwallowMaxMP_() const;

public:
    long __fastcall _ZtlSecurePut_tSwallowMaxMP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSwallowDefence_() const;

public:
    long __fastcall _ZtlSecurePut_nSwallowDefence_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSwallowDefence_() const;

public:
    long __fastcall _ZtlSecurePut_rSwallowDefence_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSwallowDefence_() const;

public:
    long __fastcall _ZtlSecurePut_tSwallowDefence_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSwallowEvasion_() const;

public:
    long __fastcall _ZtlSecurePut_nSwallowEvasion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSwallowEvasion_() const;

public:
    long __fastcall _ZtlSecurePut_rSwallowEvasion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSwallowEvasion_() const;

public:
    long __fastcall _ZtlSecurePut_tSwallowEvasion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSwallowBuffTime_() const;

public:
    long __fastcall _ZtlSecurePut_tSwallowBuffTime_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nConversion_() const;

public:
    long __fastcall _ZtlSecurePut_nConversion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rConversion_() const;

public:
    long __fastcall _ZtlSecurePut_rConversion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tConversion_() const;

public:
    long __fastcall _ZtlSecurePut_tConversion_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nRevive_() const;

public:
    long __fastcall _ZtlSecurePut_nRevive_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rRevive_() const;

public:
    long __fastcall _ZtlSecurePut_rRevive_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tRevive_() const;

public:
    long __fastcall _ZtlSecurePut_tRevive_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSneak_() const;

public:
    long __fastcall _ZtlSecurePut_nSneak_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSneak_() const;

public:
    long __fastcall _ZtlSecurePut_rSneak_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSneak_() const;

public:
    long __fastcall _ZtlSecurePut_tSneak_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMorewildMaxHP_() const;

public:
    long __fastcall _ZtlSecurePut_nMorewildMaxHP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rMorewildMaxHP_() const;

public:
    long __fastcall _ZtlSecurePut_rMorewildMaxHP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tMorewildMaxHP_() const;

public:
    long __fastcall _ZtlSecurePut_tMorewildMaxHP_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDice_() const;

public:
    long __fastcall _ZtlSecurePut_nDice_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDice_() const;

public:
    long __fastcall _ZtlSecurePut_rDice_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDice_() const;

public:
    long __fastcall _ZtlSecurePut_tDice_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBlessingArmor_() const;

public:
    long __fastcall _ZtlSecurePut_nBlessingArmor_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rBlessingArmor_() const;

public:
    long __fastcall _ZtlSecurePut_rBlessingArmor_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tBlessingArmor_() const;

public:
    long __fastcall _ZtlSecurePut_tBlessingArmor_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBlessingArmorIncPAD_() const;

public:
    long __fastcall _ZtlSecurePut_nBlessingArmorIncPAD_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDamR_() const;

public:
    long __fastcall _ZtlSecurePut_nDamR_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rDamR_() const;

public:
    long __fastcall _ZtlSecurePut_rDamR_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tDamR_() const;

public:
    long __fastcall _ZtlSecurePut_tDamR_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nTeleportMasteryOn_() const;

public:
    long __fastcall _ZtlSecurePut_nTeleportMasteryOn_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rTeleportMasteryOn_() const;

public:
    long __fastcall _ZtlSecurePut_rTeleportMasteryOn_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tTeleportMasteryOn_() const;

public:
    long __fastcall _ZtlSecurePut_tTeleportMasteryOn_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nCombatOrders_() const;

public:
    long __fastcall _ZtlSecurePut_nCombatOrders_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rCombatOrders_() const;

public:
    long __fastcall _ZtlSecurePut_rCombatOrders_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tCombatOrders_() const;

public:
    long __fastcall _ZtlSecurePut_tCombatOrders_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nBeholder_() const;

public:
    long __fastcall _ZtlSecurePut_nBeholder_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rBeholder_() const;

public:
    long __fastcall _ZtlSecurePut_rBeholder_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tBeholder_() const;

public:
    long __fastcall _ZtlSecurePut_tBeholder_(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSummonBomb_() const;

public:
    long __fastcall _ZtlSecurePut_nSummonBomb_(long arg0);

public:
    long __fastcall _ZtlSecureGet_rSummonBomb_() const;

public:
    long __fastcall _ZtlSecurePut_rSummonBomb_(long arg0);

public:
    long __fastcall _ZtlSecureGet_tSummonBomb_() const;

public:
    long __fastcall _ZtlSecurePut_tSummonBomb_(long arg0);

public:
    long __fastcall _ZtlSecureGet_lSummonBomb_() const;

public:
    long __fastcall _ZtlSecurePut_lSummonBomb_(long arg0);

public:
    void Clear();

public:
    static int32_t __cdecl IsMovementAffectingStat(MY_UINT128 uFlag);

public:
    // const TemporaryStatBase<long> *operator[](int32_t index);

public:
    static const TemporaryStatBase<long> *_op_index_833(SecondaryStat *pThis, int32_t index);

public:
    TemporaryStatBase<long> *operator[](int32_t arg0);

public:
    static TemporaryStatBase<long> *_op_index_834(SecondaryStat *pThis, int32_t arg0);

public:
    long
    GetPAD(const CharacterData &cd, long nBulletItemID, long nPsdPADX, long nPsdPADR, long nIncPAD, long *pIncinOrg);

public:
    long GetMAD(long nPsdMADX, long nPsdMADR, long nDragonFury, long *pIncinOrg);

public:
    long GetPDD(long nBasePDD, const CharacterData &cd, long nPsdPDDR, long *pIncinOrg, int32_t bShieldEquiped,
                long nDarkForcePddr);

public:
    long GetMDD(long nBaseMDD, const CharacterData &cd, long nPsdMDDR, long *pIncinOrg, int32_t bShieldEquiped);

public:
    long GetACC(const CharacterData &cd, long nPdsACCR, long nBaseACC, long *pIncinOrg) const;

public:
    long GetEVA(const CharacterData &cd, long nPdsEVAR, long nBaseEVA, long *pIncinOrg);

public:
    long GetSpeed(long nPsdSpeed) const;

public:
    long GetJump(long nPsdJump);

public:
    long GetIncPAD(const CharacterData &cd);

public:
    long GetIncACC(const CharacterData &cd)const;

public:
    long GetIncEVA(const CharacterData &cd);

public:
    long GetIncEPAD(const CharacterData &cd);

public:
    int32_t IsRidingVehicle();

public:
    int32_t IsRidingSkillVehicle();

public:
    int32_t IsRidingTamedMob();

public:
    int32_t IsRidingEvanDragon();

public:
    int32_t IsEventVehicle();

public:
    int32_t IsMechanicVehicle();

public:
    int32_t IsWildhunterJaguarVehicle();

public:
    long GetVechicleID();

public:
    long GetJaguarRidingMaxHPUp(const CharacterData &c);

public:
    void Reset(MY_UINT128 uFlagTemp);

public:
    MY_UINT128 DecodeForLocal(CInPacket &tCur, ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long> &uFlagTemp);

public:
    MY_UINT128 DecodeForRemote(CInPacket &iPacket);

public:
    void SetFrom(const CharacterData &c, const BasicStat &bs, const ForcedStat &fs, ZRef<GW_ItemSlotBase> *aRealEquip,
                 ZRef<GW_ItemSlotBase> *aRealEquip2, ZRef<GW_ItemSlotBase> *aRealDragonEquip,
                 ZRef<GW_ItemSlotBase> *aRealMechanicEquip);

public:
    void ApplyItemOption(long nItemOptionID, long nLevel);

public:
    void ApplyItemOptionR(long nItemOptionID, long nLevel, SecondaryStatRateOption &option);

public:
    void ApplySocketOption(long nSocketOptionID, long nLevel);

public:
    void ApplySocketOptionR(long nSocketOptionID, long nLevel, SecondaryStatRateOption &option);

public:
    MY_UINT128 CheckByTime(long tCur);

public:
    long GetRemainTime(long arg0, long arg1);

public:
    int32_t IsSetted(long nReason);

public:
    SecondaryStat &operator=(const SecondaryStat &arg0);

public:
    static SecondaryStat &_op_assign_867(SecondaryStat *pThis, const SecondaryStat &arg0);
};

STATIC_ASSERT_SIZE(SecondaryStat, 5104);

struct BasicStat
{
    // Nested
    // Fields
public:
    std::array<long, 2> _ZtlSecureTear_nGender{};

public:
    uint32_t _ZtlSecureTear_nGender_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nLevel{};

public:
    uint32_t _ZtlSecureTear_nLevel_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nJob{};

public:
    uint32_t _ZtlSecureTear_nJob_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSTR{};

public:
    uint32_t _ZtlSecureTear_nSTR_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDEX{};

public:
    uint32_t _ZtlSecureTear_nDEX_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nINT{};

public:
    uint32_t _ZtlSecureTear_nINT_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nLUK{};

public:
    uint32_t _ZtlSecureTear_nLUK_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPOP{};

public:
    uint32_t _ZtlSecureTear_nPOP_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMHP{};

public:
    uint32_t _ZtlSecureTear_nMHP_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMMP{};

public:
    uint32_t _ZtlSecureTear_nMMP_CS{};
    // Methods
public:
    BasicStat();

public:
    void _ctor_0();

public:
    long __fastcall _ZtlSecureGet_nGender() const;

public:
    long __fastcall _ZtlSecurePut_nGender(long arg0);

public:
    long __fastcall _ZtlSecureGet_nLevel() const;

public:
    long __fastcall _ZtlSecurePut_nLevel(long arg0);

public:
    long __fastcall _ZtlSecureGet_nJob() const;

public:
    long __fastcall _ZtlSecurePut_nJob(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSTR() const;

public:
    long __fastcall _ZtlSecurePut_nSTR(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDEX() const;

public:
    long __fastcall _ZtlSecurePut_nDEX(long arg0);

public:
    long __fastcall _ZtlSecureGet_nINT() const;

public:
    long __fastcall _ZtlSecurePut_nINT(long arg0);

public:
    long __fastcall _ZtlSecureGet_nLUK() const;

public:
    long __fastcall _ZtlSecurePut_nLUK(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPOP() const;

public:
    long __fastcall _ZtlSecurePut_nPOP(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMHP() const;

public:
    long __fastcall _ZtlSecurePut_nMHP(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMMP() const;

public:
    long __fastcall _ZtlSecurePut_nMMP(long arg0);

public:
    long CalcBasePDD() const;

public:
    long CalcBaseMDD();

public:
    long CalcBasePACC() const;

public:
    long CalcBaseMACC();

public:
    long CalcBasePEVA();

public:
    long CalcBaseMEVA();

public:
    void SetFrom(const CharacterData &c, const ForcedStat &fs, ZRef<GW_ItemSlotBase> *aRealEquip,
                 ZRef<GW_ItemSlotBase> *aRealEquip2, ZRef<GW_ItemSlotBase> *aRealDragonEquip,
                 ZRef<GW_ItemSlotBase> *aRealMechanicEquip, long nMaxHPIncRate, long nMaxMPIncRate, long nBasicStatInc,
                 long nMaxHPInc, long nMaxMPInc, long nSwallowMaxMPIncRate, long nConversionMaxHPIncRate,
                 long nMorewildMaxHPIncRate, long nPdsMHPr, long nPdsMMPr, long nJaguarRidingHPIncRate);

public:
    void ApplyItemOption(long nItemOptionID, long nLevel);

public:
    void ApplyItemOptionR(long nItemOptionID, long nLevel, BasicStatRateOption &option);

public:
    void ApplySocketOption(long nSocketOptionID, long nLevel);

public:
    void ApplySocketOptionR(long nSocketOptionID, long nLevel, BasicStatRateOption &option);

public:
    void Clear();
};

STATIC_ASSERT_SIZE(BasicStat, 120);

struct ForcedStat
{
    // Nested
public:
    enum UnnamedEnum4930
    {
        AUTO = 0,
        STR = 1,
        DEX = 2,
        INT = 4,
        LUK = 8,
        PAD = 16,
        PDD = 32,
        MAD = 64,
        MDD = 128,
        ACC = 256,
        EVA = 512,
        SPEED = 1024,
        JUMP = 2048,
        SPEEDMAX = 4096,
        ALL = 8191
    };
    // Fields
public:
    std::array<long, 2> _ZtlSecureTear_nSTR{};

public:
    uint32_t _ZtlSecureTear_nSTR_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nDEX{};

public:
    uint32_t _ZtlSecureTear_nDEX_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nINT{};

public:
    uint32_t _ZtlSecureTear_nINT_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nLUK{};

public:
    uint32_t _ZtlSecureTear_nLUK_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPAD{};

public:
    uint32_t _ZtlSecureTear_nPAD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nPDD{};

public:
    uint32_t _ZtlSecureTear_nPDD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMAD{};

public:
    uint32_t _ZtlSecureTear_nMAD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nMDD{};

public:
    uint32_t _ZtlSecureTear_nMDD_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nACC{};

public:
    uint32_t _ZtlSecureTear_nACC_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nEVA{};

public:
    uint32_t _ZtlSecureTear_nEVA_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSpeed{};

public:
    uint32_t _ZtlSecureTear_nSpeed_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nJump{};

public:
    uint32_t _ZtlSecureTear_nJump_CS{};

public:
    std::array<long, 2> _ZtlSecureTear_nSpeedMax{};

public:
    uint32_t _ZtlSecureTear_nSpeedMax_CS{};
    // Methods
public:
    ForcedStat();

public:
    void _ctor_0();

public:
    long __fastcall _ZtlSecureGet_nSTR() const;

public:
    long __fastcall _ZtlSecurePut_nSTR(long arg0);

public:
    long __fastcall _ZtlSecureGet_nDEX() const;

public:
    long __fastcall _ZtlSecurePut_nDEX(long arg0);

public:
    long __fastcall _ZtlSecureGet_nINT() const;

public:
    long __fastcall _ZtlSecurePut_nINT(long arg0);

public:
    long __fastcall _ZtlSecureGet_nLUK() const;

public:
    long __fastcall _ZtlSecurePut_nLUK(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPAD() const;

public:
    long __fastcall _ZtlSecurePut_nPAD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nPDD() const;

public:
    long __fastcall _ZtlSecurePut_nPDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMAD() const;

public:
    long __fastcall _ZtlSecurePut_nMAD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nMDD() const;

public:
    long __fastcall _ZtlSecurePut_nMDD(long arg0);

public:
    long __fastcall _ZtlSecureGet_nACC() const;

public:
    long __fastcall _ZtlSecurePut_nACC(long arg0);

public:
    long __fastcall _ZtlSecureGet_nEVA() const;

public:
    long __fastcall _ZtlSecurePut_nEVA(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSpeed() const;

public:
    long __fastcall _ZtlSecurePut_nSpeed(long arg0);

public:
    long __fastcall _ZtlSecureGet_nJump() const;

public:
    long __fastcall _ZtlSecurePut_nJump(long arg0);

public:
    long __fastcall _ZtlSecureGet_nSpeedMax() const;

public:
    long __fastcall _ZtlSecurePut_nSpeedMax(long arg0);

public:
    void Clear();

public:
    void Encode(COutPacket &arg0, long arg1);

public:
    void Decode(CInPacket &iPacket);

public:
    int32_t IsForced();
};

STATIC_ASSERT_SIZE(ForcedStat, 156);

struct NEXTLEVEL
{
    // Nested
    // Fields
public:
    std::array<long, 201> n{};
    // Methods
public:
    NEXTLEVEL();

public:
    void _ctor_0();

public:
    long GetNextLevelExp(long arg0);
};

STATIC_ASSERT_SIZE(NEXTLEVEL, 804);

class CalcDamage
{
public:
    static int32_t ms_aanStandardPDD[6][201];

    // Nested
public:
    enum nRndSize
    {
        nRndSize = 7
    };
    // Fields
protected:
    CRand32 m_RndGenForCharacter;

protected:
    CRand32 m_RndForCheckDamageMiss;

protected:
    CRand32 m_RndForMortalBlow;

protected:
    CRand32 m_RndForSummoned;

protected:
    CRand32 m_RndForMob;

protected:
    CRand32 m_RndGenForMob;
    // Methods
public:
    ~CalcDamage();

public:
    void _dtor_0();

    CTOR_DEFAULT(CalcDamage)
public:
    CalcDamage();

public:
    void _ctor_0();

public:
    void SetSeed(uint32_t s1, uint32_t s2, uint32_t s3);

public:
    static double __cdecl GetMsateryConstByWT(long nWT);

public:
    static double __cdecl CalcDamageByWT(long nWT, const BasicStat &bs, long nPAD, long nMAD);

public:
    long PDamage(const MobStat &ms, const CharacterData &cd, const BasicStat &bs, SecondaryStat &ss,
                 MobAttackInfo *pInfo, uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd, long *pnReduce,
                 unsigned long dwMobTemplateID, int32_t bShieldEquiped, long nDarkForcePddr);

    long PDamage_0(const MobStat &ms, const CharacterData &cd, const BasicStat &bs, SecondaryStat &ss,
                   MobAttackInfo *pInfo, uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd, long *pnReduce,
                   unsigned long dwMobTemplateID, int32_t bShieldEquiped, long nDarkForcePddr)
    {
        return PDamage(ms, cd, bs, ss, pInfo, nRandForMissCheck, pPsd, pnReduce, dwMobTemplateID, bShieldEquiped,
                       nDarkForcePddr);
    }

public:
    long PDamage(const MobStat &msMobAttack, const MobStat &msMobTarget);

    long PDamage_1(const MobStat &msMobAttack, const MobStat &msMobTarget)
    {
        return PDamage(msMobAttack, msMobTarget);
    }

public:
    long PDamage(const unsigned long dwMobID, const MobStat &ms, const CharacterData &cd, const BasicStat &bs,
                 const SecondaryStat &ss, const SKILLENTRY *pSkill, long nSLV, const ZRef<PassiveSkillData> pPsd,
                 long nDamage, long nWeaponItemID, long nBulletItemID);

    long PDamage_2(const unsigned long dwMobID, const MobStat &ms, const CharacterData &cd, const BasicStat &bs,
                   const SecondaryStat &ss, const SKILLENTRY *pSkill, long nSLV, const ZRef<PassiveSkillData> pPsd,
                   long nDamage, long nWeaponItemID, long nBulletItemID)
    {
        return PDamage(dwMobID, ms, cd, bs, ss, pSkill, nSLV, pPsd, nDamage, nWeaponItemID, nBulletItemID);
    }

public:
    void PDamage(const CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss, const unsigned long dwMobID,
                 const MobStat &ms, const CMobTemplate *pTemplate, const ZRef<PassiveSkillData> pPsd,
                 int32_t &bNextAttackCritical, long nAttackCount, long nDamagePerMob, long nWeaponItemID,
                 long nBulletItemID, long nAttackType, long nAction, int32_t bShadowPartner, const SKILLENTRY *pSkill,
                 long nSLV, long *aDamage, int32_t *abCritical, long nCriticalProb, long nCriticalDamage,
                 long nTotalDAMr, long nBossDAMr, long nIgnoreTargetDEF, long nDragonFury, long nAR01Pad, long tKeyDown,
                 long nDarkForce, long nAdvancedChargeDamage, int32_t bInvincible);

    void PDamage_3(const CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss, const unsigned long dwMobID,
                   const MobStat &ms, const CMobTemplate *pTemplate, const ZRef<PassiveSkillData> pPsd,
                   int32_t &bNextAttackCritical, long nAttackCount, long nDamagePerMob, long nWeaponItemID,
                   long nBulletItemID, long nAttackType, long nAction, int32_t bShadowPartner, const SKILLENTRY *pSkill,
                   long nSLV, long *aDamage, int32_t *abCritical, long nCriticalProb, long nCriticalDamage,
                   long nTotalDAMr, long nBossDAMr, long nIgnoreTargetDEF, long nDragonFury, long nAR01Pad,
                   long tKeyDown, long nDarkForce, long nAdvancedChargeDamage, int32_t bInvincible)
    {
        PDamage(cd, bs, ss, dwMobID, ms, pTemplate, pPsd, bNextAttackCritical, nAttackCount, nDamagePerMob,
                nWeaponItemID, nBulletItemID, nAttackType, nAction, bShadowPartner, pSkill, nSLV, aDamage, abCritical,
                nCriticalProb, nCriticalDamage, nTotalDAMr, nBossDAMr, nIgnoreTargetDEF, nDragonFury, nAR01Pad,
                tKeyDown, nDarkForce, nAdvancedChargeDamage, bInvincible);
    }

public:
    long MDamage(const MobStat &ms, const CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss,
                 uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd, long *pnReduce, int32_t bShieldEquiped);

    long MDamage_0(const MobStat &ms, const CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss,
                   uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd, long *pnReduce,
                   int32_t bShieldEquiped)
    {
        return MDamage(ms, cd, bs, ss, nRandForMissCheck, pPsd, pnReduce, bShieldEquiped);
    }

public:
    long MDamage(const MobStat &msMobAttack, const MobStat &msMobTarget);

    long MDamage_1(const MobStat &msMobAttack, const MobStat &msMobTarget)
    {
        return MDamage(msMobAttack, msMobTarget);
    }

public:
    long MDamage(const unsigned long dwMobID, const MobStat &ms, const CharacterData &cd, const BasicStat &bs,
                 const SecondaryStat &ss, const SKILLENTRY *pSkill, long nSLV, const ZRef<PassiveSkillData> pPsd,
                 long nDamage, long nWeaponItemID, long nDragonFury);

    long MDamage_2(const unsigned long dwMobID, const MobStat &ms, const CharacterData &cd, const BasicStat &bs,
                   const SecondaryStat &ss, const SKILLENTRY *pSkill, long nSLV, const ZRef<PassiveSkillData> pPsd,
                   long nDamage, long nWeaponItemID, long nDragonFury)
    {
        return MDamage(dwMobID, ms, cd, bs, ss, pSkill, nSLV, pPsd, nDamage, nWeaponItemID, nDragonFury);
    }

public:
    long MDamage(const CharacterData &arg0, const BasicStat &arg1, const SecondaryStat &arg2, const unsigned long arg3,
                 const MobStat &arg4, const CMobTemplate *arg5, const ZRef<PassiveSkillData> arg6, long arg7, long arg8,
                 long arg9, long arg10, long arg11, long arg12, long arg13, long arg14);

    long
    MDamage_3(const CharacterData &arg0, const BasicStat &arg1, const SecondaryStat &arg2, const unsigned long arg3,
              const MobStat &arg4, const CMobTemplate *arg5, const ZRef<PassiveSkillData> arg6, long arg7, long arg8,
              long arg9, long arg10, long arg11, long arg12, long arg13, long arg14)
    {
        return MDamage(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }

public:
    void MDamage(const CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss, const unsigned long dwMobID,
                 const MobStat &ms, const CMobTemplate *pTemplate, const ZRef<PassiveSkillData> pPsd,
                 int32_t &bNextAttackCritical, long nDamagePerMob, long nWeaponItemID, long nAction,
                 const SKILLENTRY *pSkill, long nSLV, long *aDamage, int32_t *abCritical, long nCriticalProb,
                 long nCriticalDamage, long nTotalDAMr, long nBossDAMr, long nIgnoreTargetDEF, long nMobCount,
                 long tKeyDown, long nDragonFury, long nAR01Mad);

    void MDamage_4(const CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss, const unsigned long dwMobID,
                   const MobStat &ms, const CMobTemplate *pTemplate, const ZRef<PassiveSkillData> pPsd,
                   int32_t &bNextAttackCritical, long nDamagePerMob, long nWeaponItemID, long nAction,
                   const SKILLENTRY *pSkill, long nSLV, long *aDamage, int32_t *abCritical, long nCriticalProb,
                   long nCriticalDamage, long nTotalDAMr, long nBossDAMr, long nIgnoreTargetDEF, long nMobCount,
                   long tKeyDown, long nDragonFury, long nAR01Mad)
    {
        MDamage(cd, bs, ss, dwMobID, ms, pTemplate, pPsd, bNextAttackCritical, nDamagePerMob, nWeaponItemID, nAction,
                pSkill, nSLV, aDamage, abCritical, nCriticalProb, nCriticalDamage, nTotalDAMr, nBossDAMr,
                nIgnoreTargetDEF, nMobCount, tKeyDown, nDragonFury, nAR01Mad);
    }

public:
    int32_t CheckPDamageMiss(const MobStat &ms, const CharacterData &cd, const BasicStat &bs, SecondaryStat &ss,
                             uint32_t nRandForMissCheck, long nPsdEVAR, long nPsdER);

public:
    int32_t CheckMDamageMiss(const MobStat &ms, const CharacterData &cd, const BasicStat &bs, SecondaryStat &ss,
                             uint32_t nRandForMissCheck, long nPsdEVAR, long nPsdER);

public:
    uint32_t GetManagedRandom();

public:
    uint32_t GetCheckDamageMissRandom();

public:
    uint32_t GetMortalBlowRandom();

public:
    int32_t CalcMImmune(const MobStat &ms, const SecondaryStat &ss, long nRand);

public:
    int32_t CalcPImmune(const MobStat &ms, const SecondaryStat &ss, long nRand) const;

public:
    int32_t IsCounterAttackHit(const MobStat &ms, const CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss,
                               const ZRef<PassiveSkillData> pPsd, int32_t bInvincible, int32_t bMagicAttack);

public:
    static void __cdecl LoadStandardPDD();

public:
    static long __cdecl GetStandardPDD(long arg0, long arg1);

public:
    long GetMesoGuardReduce(const CharacterData &cd, double damage);

public:
    long PDamageSummoned(const MobStat &ms, const CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss,
                         MobAttackInfo *pInfo, uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd,
                         long *pnReduce, unsigned long dwMobTemplateID, int32_t bShieldEquiped, long nDarkForcePddr);

public:
    long MDamageSummoned(const MobStat &ms, const CharacterData &cd, const BasicStat &bs, const SecondaryStat &ss,
                         uint32_t nRandForMissCheck, const ZRef<PassiveSkillData> pPsd, long *pnReduce,
                         int32_t bShieldEquiped);

public:
    static long __cdecl GetCounterDamage(long nAT, MobStat *pMobStat, long tAttackTime, long nMobCount, long nDamagePerMob,
                                         long nSkillID, long nAction);
};

STATIC_ASSERT_SIZE(CalcDamage, 192);

struct MobStat
{

public:
    static inline MY_UINT128 MS_PAD{true, 0};
    static inline MY_UINT128 MS_PDR{true, 1};
    static inline MY_UINT128 MS_MAD{true, 2};
    static inline MY_UINT128 MS_MDR{true, 3};
    static inline MY_UINT128 MS_ACC{true, 4};
    static inline MY_UINT128 MS_EVA{true, 5};
    static inline MY_UINT128 MS_Speed{true, 6};
    static inline MY_UINT128 MS_Stun{true, 7};
    static inline MY_UINT128 MS_Freeze{true, 8};
    static inline MY_UINT128 MS_Poison{true, 9};
    static inline MY_UINT128 MS_Seal{true, 10};
    static inline MY_UINT128 MS_Darkness{true, 11};
    static inline MY_UINT128 MS_PowerUp{true, 12};
    static inline MY_UINT128 MS_MagicUp{true, 13};
    static inline MY_UINT128 MS_PGuardUp{true, 14};
    static inline MY_UINT128 MS_MGuardUp{true, 15};
    static inline MY_UINT128 MS_Doom{true, 16};
    static inline MY_UINT128 MS_Web{true, 17};
    static inline MY_UINT128 MS_PImmune{true, 18};
    static inline MY_UINT128 MS_MImmune{true, 19};
    static inline MY_UINT128 MS_Showdown{true, 20};
    static inline MY_UINT128 MS_HardSkin{true, 21};
    static inline MY_UINT128 MS_Ambush{true, 22};
    static inline MY_UINT128 MS_DamagedElemAttr{true, 23};
    static inline MY_UINT128 MS_Venom{true, 24};
    static inline MY_UINT128 MS_Blind{true, 25};
    static inline MY_UINT128 MS_SealSkill{true, 26};
    static inline MY_UINT128 MS_Burned{true, 27};
    static inline MY_UINT128 MS_Dazzle{true, 28};
    static inline MY_UINT128 MS_PCounter{true, 29};
    static inline MY_UINT128 MS_MCounter{true, 30};
    static inline MY_UINT128 MS_Disable{true, 31};
    static inline MY_UINT128 MS_RiseByToss{true, 32};
    static inline MY_UINT128 MS_BodyPressure{true, 33};
    static inline MY_UINT128 MS_Weakness{true, 34};
    static inline MY_UINT128 MS_TimeBomb{true, 35};
    static inline MY_UINT128 MS_MagicCrash{true, 36};
    static inline MY_UINT128 MS_HealByDamage{true, 37};

    // Nested
public:
    struct BURNED_INFO
    {
        // Nested
        // Fields
    public:
        unsigned long dwCharacterID{};

    public:
        long nSkillID{};

    public:
        long nDamage{};

    public:
        long tInterval{};

    public:
        long tEnd{};

    public:
        long tLastUpdate{};

    public:
        long nAttrRate{};

    public:
        long nDotCount{};
        // Methods
    public:
        void Encode(COutPacket &arg0);

    public:
        void Decode(CInPacket &arg0);
    };
    // Fields
public:
    long nLevel{};

public:
    std::array<long, 8> aDamagedElemAttr{};

public:
    long nPAD{};

public:
    long nPAD_{};

public:
    long rPAD_{};

public:
    long tPAD_{};

public:
    long nPDR{};

public:
    long nPDR_{};

public:
    long rPDR_{};

public:
    long tPDR_{};

public:
    long nMAD{};

public:
    long nMAD_{};

public:
    long rMAD_{};

public:
    long tMAD_{};

public:
    long nMDR{};

public:
    long nMDR_{};

public:
    long rMDR_{};

public:
    long tMDR_{};

public:
    long nACC{};

public:
    long nACC_{};

public:
    long rACC_{};

public:
    long tACC_{};

public:
    long nEVA{};

public:
    long nEVA_{};

public:
    long rEVA_{};

public:
    long tEVA_{};

public:
    long nSpeed{};

public:
    long nSpeed_{};

public:
    long rSpeed_{};

public:
    long tSpeed_{};

public:
    long nStun_{};

public:
    long rStun_{};

public:
    long tStun_{};

public:
    long nFreeze_{};

public:
    long rFreeze_{};

public:
    long tFreeze_{};

public:
    long nPoison_{};

public:
    long rPoison_{};

public:
    long tPoison_{};

public:
    unsigned long wPoison_{};

public:
    long nSeal_{};

public:
    long rSeal_{};

public:
    long tSeal_{};

public:
    long nDarkness_{};

public:
    long rDarkness_{};

public:
    long tDarkness_{};

public:
    long nPowerUp_{};

public:
    long rPowerUp_{};

public:
    long tPowerUp_{};

public:
    long nMagicUp_{};

public:
    long rMagicUp_{};

public:
    long tMagicUp_{};

public:
    long nPGuardUp_{};

public:
    long rPGuardUp_{};

public:
    long tPGuardUp_{};

public:
    long nMGuardUp_{};

public:
    long rMGuardUp_{};

public:
    long tMGuardUp_{};

public:
    long nDoom_{};

public:
    long rDoom_{};

public:
    long tDoom_{};

public:
    long nWeb_{};

public:
    long rWeb_{};

public:
    long tWeb_{};

public:
    unsigned long wWeb_{};

public:
    long nPImmune_{};

public:
    long rPImmune_{};

public:
    long tPImmune_{};

public:
    long nMImmune_{};

public:
    long rMImmune_{};

public:
    long tMImmune_{};

public:
    long nShowdown_{};

public:
    long rShowdown_{};

public:
    long tShowdown_{};

public:
    long nHardSkin_{};

public:
    long rHardSkin_{};

public:
    long tHardSkin_{};

public:
    long nAmbush_{};

public:
    long rAmbush_{};

public:
    long tAmbush_{};

public:
    unsigned long wAmbush_{};

public:
    long nVenom_{};

public:
    long rVenom_{};

public:
    long tVenom_{};

public:
    unsigned long wVenom_{};

public:
    long nBlind_{};

public:
    long rBlind_{};

public:
    long tBlind_{};

public:
    long nSealSkill_{};

public:
    long rSealSkill_{};

public:
    long tSealSkill_{};

public:
    long nDazzle_{};

public:
    long rDazzle_{};

public:
    long tDazzle_{};

public:
    long nRiseByToss_{};

public:
    long rRiseByToss_{};

public:
    long tRiseByToss_{};

public:
    long nPCounter_{};

public:
    long rPCounter_{};

public:
    long tPCounter_{};

public:
    long wPCounter_{};

public:
    long nMCounter_{};

public:
    long rMCounter_{};

public:
    long tMCounter_{};

public:
    long wMCounter_{};

public:
    long nCounterProb_{};

public:
    long nBodyPressure_{};

public:
    long rBodyPressure_{};

public:
    long tBodyPressure_{};

public:
    long nWeakness_{};

public:
    long rWeakness_{};

public:
    long tWeakness_{};

public:
    long nTimeBomb_{};

public:
    long rTimeBomb_{};

public:
    long tTimeBomb_{};

public:
    unsigned long wTimeBomb_{};

public:
    long nMagicCrash_{};

public:
    long rMagicCrash_{};

public:
    long tMagicCrash_{};

public:
    long nDamagedElemAttr_{};

public:
    long rDamagedElemAttr_{};

public:
    long tDamagedElemAttr_{};

public:
    long nHealByDamage_{};

public:
    long rHealByDamage_{};

public:
    long tHealByDamage_{};

public:
    double nFs{};

public:
    int32_t bInvincible{};

public:
    int32_t bDisable{};

public:
    int32_t bCannotEvade{};

public:
    ZList<MobStat::BURNED_INFO> lBurnedInfo;
    // Methods
public:
    ~MobStat();

public:
    void _dtor_0();

public:
    MobStat(const MobStat &arg0);

public:
    void _ctor_1(const MobStat &arg0);

public:
    MobStat();

public:
    void _ctor_0();

public:
    void AddBurnedInfo(long arg0, long arg1, long arg2, unsigned long arg3, long arg4, long arg5, long arg6, long arg7);

public:
    void SetFrom(const CMobTemplate *pTemplate);

public:
    void SetFromWhenDoom(const CMobTemplate *pTemplate);

public:
    void EncodeTemporary(MY_UINT128 arg0, COutPacket &arg1, long arg2);

public:
    void DecodeTemporary(MY_UINT128 uFlag, CInPacket &iPacket, long tCur);

public:
    MY_UINT128 ResetTemporary(long arg0, ZList<ZPair<unsigned long, long>> &arg1);

public:
    void Reset(MY_UINT128 uReset, CInPacket &iPacket);

    void Reset_1(MY_UINT128 uReset, CInPacket &iPacket)
    {
        return this->Reset(uReset, iPacket);
    }

public:
    void Reset(MY_UINT128 uReset);

    void Reset_0(MY_UINT128 uReset)
    {
        return this->Reset(uReset);
    }

public:
    void AdjustDamagedElemAttr(long nSkillID, const long *aOriginalDamagedElemAttr);

public:
    void ResetDamagedElemAttr(const long *aOriginalDamagedElemAttr);

public:
    static int32_t __cdecl IsMovementAffectingStat(MY_UINT128 uFlag);

public:
    MobStat &operator=(const MobStat &arg0);

public:
    static MobStat &_op_assign_14(MobStat *pThis, const MobStat &arg0);
};

STATIC_ASSERT_SIZE(MobStat, 568);

// 86D3B0 804
static NEXTLEVEL _D_S_NEXTLEVEL{};

double __cdecl zmax_double_(double a, double b);

uint32_t __fastcall _ZtlSecureTear_char_(char arg0, char *arg1);

unsigned long __cdecl _anon_DecodeTime(CInPacket &iPacket);

double __cdecl get_damage_adjusted_by_elemAttr(double damage, long nAttr, double dAdjust, double dBoost);

double __cdecl get_rand(uint32_t nRand, double f0, double f1);

// TODO
double __cdecl get_rand_1(uint32_t nRand, double f0, double f1);

double __cdecl get_damage_adjusted_by_charged_elemAttr(double damage, const long *aDamagedElemAttr, const SecondaryStat &ss,
                                                       const CharacterData &cd);

long __cdecl get_next_item_level_exp(ZRef<GW_ItemSlotBase> pItem);

void __cdecl _anon_ApplyGuidedBulletDamage(const CharacterData &cd, SecondaryStat &ss, const unsigned long dwMobID,
                                           double &damage);

double __cdecl _anon_adjust_ramdom_damage(double damage, long nRand, double k, long nMastery);

void __cdecl _anon_EncodeTime(COutPacket &oPacket, const unsigned long tTime);

long __cdecl _anon_calc_base_damage(long p1, long p2, long p3, long ad, double k);

int32_t __cdecl GetIdealStatUp(const BasicStat &bs, int32_t bWantToBeInfighter, ZArray<StatPair> &aStatUp);

double __cdecl _anon_calc_mob_base_damamge(long p1, long nRand);

double __cdecl _anon_adjust_base_depense(double damage, long nADD, long nAttackLevel, long nTargetLevel, long nPsdDR);

int32_t __cdecl IsCalcDamageStat(MY_UINT128 uFlag);

double __cdecl get_damage_adjusted_by_elemAttr(double arg0, const SKILLENTRY *arg1, const long *arg2, const long arg3,
                                               double arg4, double arg5);

long __cdecl _anon_calc_accr(long nACC, long nMobEVA, long nAttackLevel, long nTargetLevel, long nAr);

void __cdecl get_real_equip(const CharacterData& c, ZRef<GW_ItemSlotPet>* aPetItems, ZRef<GW_ItemSlotBase>* aRealEquip,
                            ZRef<GW_ItemSlotBase>* aRealEquip2, ZRef<GW_ItemSlotBase>* aDragonEquip, ZRef<GW_ItemSlotBase>* aMechanicEquip,
                            long nBasicStatInc, long nExcl1, long nExcl2);

void __cdecl ApplyItemOption(long nItemOptionID, long nLevel, long &niSTR, long &niINT, long &niDEX, long &niLUK);


void ApplySocketOption(long socketOptId, long nLevel, long &niSTR, long &niINT, long &niDEX, long &niLUK);
void ApplySocketOptionR(long socketOptId, long nLevel, long &niSTRr, long &niINTr, long &niDEXr, long &niLUKr);
void ClearSocketOption(long socketOptId, long nLevel, long &niSTR, long &niINT, long &niDEX, long &niLUK);
void ClearSocketOptionR(long socketOptId, long nLevel, long &niSTRr, long &niINTr, long &niDEXr, long &niLUKr);
void ApplyItemOptionR(long itemOptId, long nLevel, long &niSTRr, long &niINTr, long &niDEXr, long &niLUKr);
void ClearItemOption(long nItemOptionID, long nLevel, long &niSTR, long &niINT, long &niDEX, long &niLUK);
void ClearItemOptionR(long itemOptId, long nLevel, long &niSTRr, long &niINTr, long &niDEXr, long &niLUKr);
