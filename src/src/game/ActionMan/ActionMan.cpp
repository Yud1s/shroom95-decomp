// ActionMan.cpp
#include "ActionMan.hpp"

#include <pcom/xcom.hpp>

Ztl_bstr_t _D_S_SZMAPIMG(L"zmap.img");
Ztl_bstr_t _D_S_SSMAPIMG(L"smap.img");

static _x_com_ptr<IWzUOL> FAKE__x_com_ptr_IWzUOL{};

static ZArray<CActionFrame> FAKE_ZArray_CActionFrame{};
static ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_SUMMONEDACTIONFRAMEENTRY{};
static ZRef<CActionMan::FACELOOKENTRY> FAKE_ZRef_CActionMan_FACELOOKENTRY{};
static ZRef<CActionMan::DRAGONACTIONENTRY> FAKE_ZRef_CActionMan_DRAGONACTIONENTRY{};
static ZRef<CActionMan::MELEEATTACKAFTERIMAGE> FAKE_ZRef_CActionMan_MELEEATTACKAFTERIMAGE{};
static ZRef<CActionMan::SUMMONEDACTIONENTRY> FAKE_ZRef_CActionMan_SUMMONEDACTIONENTRY{};
static ZRef<CActionMan::NPCIMGENTRY> FAKE_ZRef_CActionMan_NPCIMGENTRY{};
static ZRef<CActionMan::PETIMGENTRY> FAKE_ZRef_CActionMan_PETIMGENTRY{};
static ZRef<CActionMan::EMPLOYEEIMGENTRY> FAKE_ZRef_CActionMan_EMPLOYEEIMGENTRY{};
static ZRef<CActionMan::MOBIMGENTRY> FAKE_ZRef_CActionMan_MOBIMGENTRY{};
static ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>> FAKE_ZArray_ZRef_CActionMan_CHARACTERACTIONFRAMEENTRY{};
static ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>> FAKE_ZArray_ZRef_CActionMan_TAMINGMOBACTIONFRAMEENTRY{};

static ZRef<CActionMan::NPCACTIONENTRY> FAKE_ZRef_CActionMan_NPCACTIONENTRY{};
static ZRef<CActionMan::NPCACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_NPCACTIONFRAMEENTRY{};

static ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long> FAKE_ZMap_long_ZRef_CActionMan_DRAGONACTIONENTRY_long{};

static ZRef<CActionMan::PETACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_PETACTIONFRAMEENTRY{};
static ZRef<CActionMan::PETACTIONENTRY> FAKE_ZRef_CActionMan_PETACTIONENTRY{};
static ZRef<CActionMan::CHARACTERIMGENTRY> FAKE_ZRef_CActionMan_CHARACTERIMGENTRY{};
static ZRef<CActionMan::MORPHIMGENTRY> FAKE_ZRef_CActionMan_MORPHIMGENTRY{};
static ZRef<CActionMan::MORPHACTIONENTRY> FAKE_ZRef_CActionMan_MORPHACTIONENTRY{};
static ZRef<CActionMan::MORPHACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_MORPHACTIONFRAMEENTRY{};
static ZRef<CActionMan::SHADOWPARTNERACTIONENTRY> FAKE_ZRef_CActionMan_SHADOWPARTNERACTIONENTRY{};
static ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_SHADOWPARTNERACTIONFRAMEENTRY{};
static ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_EMPLOYEEACTIONFRAMEENTRY{};
static ZRef<CActionMan::EMPLOYEEACTIONENTRY> FAKE_ZRef_CActionMan_EMPLOYEEACTIONENTRY{};
static ZRef<CActionMan::MOBACTIONENTRY> FAKE_ZRef_CActionMan_MOBACTIONENTRY{};
static ZRef<CActionMan::MOBACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_MOBACTIONFRAMEENTRY{};
// TODO ipp
#include "ActionMan_regen.ipp"


ACTIONDATA ActionData::m_saCharacterActions[273]
{
    ACTIONDATA(0, 0, 540, L"walk1", {
                   ACTIONDATA::PIECE(5046317, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536672, 0, 180, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4980768, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6357108, 0, 180, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 540, L"walk2", {
                   ACTIONDATA::PIECE(5242957, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4456480, 0, 180, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(2883621, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6881352, 0, 180, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(1, 0, 0, L"stand1", {
                   ACTIONDATA::PIECE(6619223, 0, 500, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5767268, 0, 500, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7929970, 0, 500, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5767268, 0, 500, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(1, 0, 0, L"stand2", {
                   ACTIONDATA::PIECE(7077953, 0, 500, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(2097262, 0, 500, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6488174, 0, 500, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(2097262, 0, 500, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(1, 0, 0, L"alert", {
                   ACTIONDATA::PIECE(5046363, 0, 500, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6094897, 0, 500, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(5046304, 0, 500, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6094897, 0, 500, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingO1", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6357108, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingO2", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7077888, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingO3", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7077888, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 400, L"swingOF", {
                   ACTIONDATA::PIECE(5046317, 0, 200, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536672, 0, 100, 0, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4980768, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6357108, 0, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingT1", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6619136, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingT2", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6619136, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingT3", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6619136, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 500, L"swingTF", {
                   ACTIONDATA::PIECE(5046363, 0, 200, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(6094897, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(5046304, 0, 150, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5242957, 0, 200, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingP1", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6619136, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingP2", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6619136, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 500, L"swingPF", {
                   ACTIONDATA::PIECE(7209033, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7340129, 0, 200, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6357024, 0, 200, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6553714, 0, 200, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 350, L"stabO1", {
                   ACTIONDATA::PIECE(6815811, 0, 350, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 450, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 350, L"stabO2", {
                   ACTIONDATA::PIECE(6815811, 0, 350, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 450, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 400, L"stabOF", {
                   ACTIONDATA::PIECE(6815811, 0, 250, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6619136, 0, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 400, L"stabT1", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 100, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6619136, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 400, L"stabT2", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 100, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(49, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 500, L"stabTF", {
                   ACTIONDATA::PIECE(5046317, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536672, 0, 200, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4980768, 0, 200, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6357108, 0, 200, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 180, L"swingD1", {
                   ACTIONDATA::PIECE(6, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6, 2, 300, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 1, 150, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 3, 300, 1, 0, 0, 21, 0),
               }),
    ACTIONDATA(0, 1, 180, L"swingD2", {
                   ACTIONDATA::PIECE(6, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6, 2, 300, 1, 0, 0, -5, 0),
                   ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, -10, 0), ACTIONDATA::PIECE(8, 0, 330, 1, 0, 0, -15, 0),
               }),
    ACTIONDATA(0, 1, 180, L"stabD1", {
                   ACTIONDATA::PIECE(16, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 1, 240, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7, 2, 150, 1, 0, 0, 15, 0), ACTIONDATA::PIECE(19, 2, 330, 1, 0, 0, 5, 0),
               }),
    ACTIONDATA(0, 1, 30, L"tripleBlow", {
                   ACTIONDATA::PIECE(4, 1, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5, 0, 60, 1, 0, 0, -5, 0),
                   ACTIONDATA::PIECE(5, 1, 60, 1, 0, 0, -5, 0), ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 7, 0),
                   ACTIONDATA::PIECE(5, 2, 60, 1, 0, 0, 7, 0), ACTIONDATA::PIECE(7, 0, 90, 1, 0, 0, -21, 0),
                   ACTIONDATA::PIECE(7, 1, 120, 1, 0, 0, -6, 0), ACTIONDATA::PIECE(5, 1, 90, 1, 0, 0, -26, 0),
                   ACTIONDATA::PIECE(16, 1, 210, 1, 0, 0, -17, 0), ACTIONDATA::PIECE(4, 1, 60, 1, 0, 0, -22, 0),
               }),
    ACTIONDATA(0, 1, 30, L"quadBlow", {
                   ACTIONDATA::PIECE(4, 1, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5, 0, 60, 1, 0, 0, -5, 0),
                   ACTIONDATA::PIECE(7, 0, 90, 1, 0, 0, -21, 0), ACTIONDATA::PIECE(7, 1, 120, 1, 0, 0, -6, 0),
                   ACTIONDATA::PIECE(5, 1, 90, 1, 0, 0, -26, 0), ACTIONDATA::PIECE(17, 1, 120, 1, 0, 0, -17, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, -21, 0), ACTIONDATA::PIECE(17, 1, 60, 1, 1, 0, -64, 0),
                   ACTIONDATA::PIECE(17, 1, 90, 1, 0, 0, -50, 0), ACTIONDATA::PIECE(17, 1, 90, 1, 0, 0, -51, 0),
                   ACTIONDATA::PIECE(4, 1, 60, 1, 0, 0, -74, 0),
               }),
    ACTIONDATA(0, 1, 0, L"deathBlow", {
                   ACTIONDATA::PIECE(15, 1, 60, 1, 0, 0, 9, 0), ACTIONDATA::PIECE(17, 1, 120, 1, 0, 0, -21, 0),
                   ACTIONDATA::PIECE(5, 2, 90, 1, 0, 0, -24, 0), ACTIONDATA::PIECE(6, 1, 60, 1, 0, 0, 30, 0),
                   ACTIONDATA::PIECE(6, 2, 120, 1, 0, 0, 17, 0), ACTIONDATA::PIECE(8, 0, 60, 1, 0, 0, 6, 0),
                   ACTIONDATA::PIECE(20, 2, 120, 1, 0, 0, 7, 0), ACTIONDATA::PIECE(20, 2, 90, 1, 1, 0, -57, 0),
                   ACTIONDATA::PIECE(19, 2, 120, 1, 0, 0, -37, 0), ACTIONDATA::PIECE(8, 0, 60, 1, 0, 0, -65, 0),
                   ACTIONDATA::PIECE(4, 1, 30, 1, 0, 0, -74, 0),
               }),
    ACTIONDATA(0, 1, 0, L"finishBlow", {
                   ACTIONDATA::PIECE(15, 1, 60, 1, 0, 0, 9, 0), ACTIONDATA::PIECE(17, 1, 120, 1, 0, 0, -3, 0),
                   ACTIONDATA::PIECE(5, 2, 60, 1, 0, 0, 7, 0), ACTIONDATA::PIECE(6, 1, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 2, 120, 1, 0, 0, -13, 0), ACTIONDATA::PIECE(8, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(20, 2, 120, 1, 0, 0, -14, 0), ACTIONDATA::PIECE(8, 1, 90, 0, 1, 0, 0, -41),
                   ACTIONDATA::PIECE(15, 2, 120, 1, 0, 0, 21, -29), ACTIONDATA::PIECE(15, 3, 120, 1, 0, 0, 30, 1),
                   ACTIONDATA::PIECE(15, 3, 60, 1, 0, 0, 30, 0),
               }),
    ACTIONDATA(0, 1, 270, L"finishAttack_link", {
                   ACTIONDATA::PIECE(16, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 3, 0), ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 3, 0),
                   ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 3, 0), ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -29, 0),
                   ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -34, 0), ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -35, 0),
                   ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -36, 0), ACTIONDATA::PIECE(5, 0, 60, 1, 0, 0, -45, 0),
               }),
    ACTIONDATA(0, 1, 270, L"finishAttack_link2", {
                   ACTIONDATA::PIECE(16, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 30, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(16, 0, 30, 1, 0, 0, 3, 0), ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 4, 0),
                   ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 4, 0), ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 4, 0),
                   ACTIONDATA::PIECE(17, 1, 90, 1, 0, 0, -29, 0), ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -34, 0),
                   ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -35, 0), ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -37, 0),
                   ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -37, 0), ACTIONDATA::PIECE(8, 0, 90, 1, 0, 0, -38, 0),
                   ACTIONDATA::PIECE(4, 1, 60, 1, 0, 0, -44, 0),
               }),
    ACTIONDATA(0, 0, 450, L"shoot1", {
                   ACTIONDATA::PIECE(3145776, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536745, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(3276849, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 670, L"shoot2", {
                   ACTIONDATA::PIECE(6619218, 0, 160, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7208992, 0, 160, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6619245, 0, 250, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7667822, 0, 100, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4259872, 0, 150, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingO1", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(3276849, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingO2", {
                   ACTIONDATA::PIECE(3145776, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536745, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(3211313, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingO3", {
                   ACTIONDATA::PIECE(3145776, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536745, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(3145777, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"shootF", {
                   ACTIONDATA::PIECE(3145776, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536745, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(57, 0, 250, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingO1", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(56, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"swingO3", {
                   ACTIONDATA::PIECE(3145776, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536745, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(55, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 350, L"stabO1", {
                   ACTIONDATA::PIECE(3145776, 0, 350, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536745, 0, 450, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 450, L"heal", {
                   ACTIONDATA::PIECE(3145776, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7536745, 0, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(53, 0, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 300, L"proneStab", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 400, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 0, L"prone", {ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 0, 300, L"fly", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 0, L"jump", {ACTIONDATA::PIECE(3145776, 0, 200, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 0, 250, L"ladder", {
                   ACTIONDATA::PIECE(3145776, 0, 250, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(7536745, 0, 250, 0, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 250, L"rope", {
                   ACTIONDATA::PIECE(6815811, 0, 250, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 250, 0, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 0, L"dead", {ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 0, 0, L"sit", {ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"sit2", {ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, -45),}),
    ACTIONDATA(0, 1, 0, L"sit3", {ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, -12),}),
    ACTIONDATA(0, 1, 0, L"sit4", {ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, -100),}),
    ACTIONDATA(0, 1, 0, L"sit5", {ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, -200),}),
    ACTIONDATA(0, 1, 0, L"sit6", {ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, -17),}),
    ACTIONDATA(0, 1, 0, L"sit7", {ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, -24),}),
    ACTIONDATA(0, 0, 13035136, L"tired", {}),
    ACTIONDATA(0, 1, 0, L"tank_prone", {ACTIONDATA::PIECE(48, 0, 300, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 200, L"proneStab_jaguar", {
                   ACTIONDATA::PIECE(48, 0, 200, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 400, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"alert2", {
                   ACTIONDATA::PIECE(4, 0, 200, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 200, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 200, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1000, L"alert3", {
                   ACTIONDATA::PIECE(4, 0, 500, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 500, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 500, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 600, L"alert4", {
                   ACTIONDATA::PIECE(4, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 300, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 300, L"alert5", {
                   ACTIONDATA::PIECE(4, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 300, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"alert6", {
                   ACTIONDATA::PIECE(4, 0, 330, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 330, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 330, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"alert7", {
                   ACTIONDATA::PIECE(4, 0, 360, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"ladder2", {
                   ACTIONDATA::PIECE(45, 0, 300, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(45, 1, 300, 0, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"rope2", {
                   ACTIONDATA::PIECE(46, 0, 300, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(46, 1, 300, 0, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 640, L"shoot6", {
                   ACTIONDATA::PIECE(36, 0, 480, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(36, 1, 160, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(36, 2, 260, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 900, L"magic1", {
                   ACTIONDATA::PIECE(36, 1, 900, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 1, 200, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7, 2, 200, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 350, L"magic2", {
                   ACTIONDATA::PIECE(4, 0, 350, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 350, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 300, L"magic3", {
                   ACTIONDATA::PIECE(2, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(2, 1, 300, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(2, 2, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 720, L"magic5", {
                   ACTIONDATA::PIECE(4, 0, 720, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 240, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 240, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 300, L"magic6", {
                   ACTIONDATA::PIECE(4, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 600, L"burster1", {
                   ACTIONDATA::PIECE(19, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(19, 1, 300, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(19, 2, 150, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(21, 1, 150, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 600, L"burster2", {
                   ACTIONDATA::PIECE(19, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(19, 1, 300, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(19, 2, 150, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(21, 1, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(20, 2, 150, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 360, L"savage", {
                   ACTIONDATA::PIECE(16, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(41, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(18, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 720, L"avenger", {
                   ACTIONDATA::PIECE(7, 0, 720, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 1, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7, 2, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 600, L"assaulter", {
                   ACTIONDATA::PIECE(5, 0, 600, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 3, 600, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 700, L"prone2", {
                   ACTIONDATA::PIECE(41, 0, 700, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(41, 0, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 700, L"assassination", {
                   ACTIONDATA::PIECE(2, 0, 540, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 0, 80, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 1, 80, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 2, 80, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 3, 320, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 0, 80, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7, 1, 80, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 2, 80, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 0, 80, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6, 1, 80, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 2, 320, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"assassinationS", {
                   ACTIONDATA::PIECE(18, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(18, 2, 180, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(18, 2, 180, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tornadoDash", {
                   ACTIONDATA::PIECE(7, 2, 90, 1, 0, 0, 8, 0), ACTIONDATA::PIECE(7, 2, 90, 1, 0, 0, 8, -2),
               }),
    ACTIONDATA(0, 1, 0, L"tornadoDashStop", {ACTIONDATA::PIECE(8, 0, 400, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"tornadoRush", {
                   ACTIONDATA::PIECE(4, 0, 0, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 2, 30, 1, 0, 90, -15, 0),
                   ACTIONDATA::PIECE(8, 2, 60, 1, 0, 90, -15, 0), ACTIONDATA::PIECE(8, 2, 60, 1, 1, 270, 15, -44),
                   ACTIONDATA::PIECE(8, 1, 60, 0, 1, 270, 18, -30), ACTIONDATA::PIECE(8, 2, 60, 1, 0, 90, -15, 0),
                   ACTIONDATA::PIECE(8, 2, 60, 1, 1, 270, 15, -44), ACTIONDATA::PIECE(8, 1, 60, 0, 1, 270, 18, -25),
                   ACTIONDATA::PIECE(8, 2, 90, 1, 0, 90, -15, 0), ACTIONDATA::PIECE(8, 3, 150, 1, 0, 0, 32, 0),
                   ACTIONDATA::PIECE(8, 3, 330, 1, 0, 0, 25, 0),
               }),
    ACTIONDATA(0, 1, 0, L"rush", {
                   ACTIONDATA::PIECE(19, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(19, 2, 500, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"rush2", {
                   ACTIONDATA::PIECE(18, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(18, 2, 500, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 360, L"brandish1", {
                   ACTIONDATA::PIECE(8, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 1, 120, 0, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(18, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(18, 1, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(18, 2, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 240, L"brandish2", {
                   ACTIONDATA::PIECE(11, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(11, 1, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(11, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(12, 0, 120, 0, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(12, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(12, 3, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 120, L"braveslash", {
                   ACTIONDATA::PIECE(14, 1, 30, 1, 0, 0, 18, 0), ACTIONDATA::PIECE(16, 0, 30, 1, 0, 0, 32, 0),
                   ACTIONDATA::PIECE(16, 0, 30, 1, 0, 0, 34, 0), ACTIONDATA::PIECE(16, 0, 30, 1, 0, 0, 36, 0),
                   ACTIONDATA::PIECE(9, 2, 60, 1, 0, 0, 10, 0), ACTIONDATA::PIECE(9, 2, 150, 1, 0, 0, 8, 0),
                   ACTIONDATA::PIECE(10, 2, 60, 1, 0, 0, 8, 0), ACTIONDATA::PIECE(12, 0, 60, 0, 0, 0, -21, 0),
                   ACTIONDATA::PIECE(12, 1, 150, 1, 0, 0, -21, 0), ACTIONDATA::PIECE(16, 1, 60, 1, 0, 0, -23, 0),
                   ACTIONDATA::PIECE(16, 1, 180, 1, 0, 0, -25, 0),
               }),
    ACTIONDATA(0, 1, 1080, L"sanctuary", {
                   ACTIONDATA::PIECE(18, 0, 1080, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(18, 0, 480, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(18, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(18, 2, 720, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 360, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 360, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 180, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 2160, L"meteor", {
                   ACTIONDATA::PIECE(4, 0, 360, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 1800, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 1320, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 400, L"paralyze", {
                   ACTIONDATA::PIECE(4, 0, 400, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 200, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 200, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 2160, L"blizzard", {
                   ACTIONDATA::PIECE(4, 0, 360, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 1800, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 1320, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1800, L"genesis", {
                   ACTIONDATA::PIECE(4, 0, 900, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 900, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 900, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 480, L"ninjastorm", {
                   ACTIONDATA::PIECE(4, 0, 480, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 210, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 240, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 540, L"blast", {
                   ACTIONDATA::PIECE(17, 0, 540, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(17, 1, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 300, L"holyshield", {
                   ACTIONDATA::PIECE(16, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 1, 840, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1170, L"showdown", {
                   ACTIONDATA::PIECE(41, 0, 900, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 2, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 3, 180, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1680, L"resurrection", {
                   ACTIONDATA::PIECE(4, 0, 840, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 840, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 840, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 540, L"chainlightning", {
                   ACTIONDATA::PIECE(7, 0, 540, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(17, 1, 240, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 900, L"smokeshell", {
                   ACTIONDATA::PIECE(8, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 1, 120, 0, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 3, 180, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 360, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 270, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 270, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 240, L"handgun", {
                   ACTIONDATA::PIECE(32, 0, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 540, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(32, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"somersault", {
                   ACTIONDATA::PIECE(4, 0, 0, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 3, 120, 1, 0, 0, 35, 0),
                   ACTIONDATA::PIECE(10, 0, 120, 1, 0, 0, -10, -8), ACTIONDATA::PIECE(14, 1, 120, 1, 0, 180, -30, -112),
                   ACTIONDATA::PIECE(14, 0, 120, 1, 0, 180, -13, -115),
                   ACTIONDATA::PIECE(14, 0, 120, 1, 0, 180, -7, -111),
                   ACTIONDATA::PIECE(20, 1, 120, 1, 0, 270, 35, -84), ACTIONDATA::PIECE(15, 3, 120, 1, 0, 0, 35, 0),
                   ACTIONDATA::PIECE(4, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 240, L"straight", {
                   ACTIONDATA::PIECE(16, 0, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 1, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"eburster", {
                   ACTIONDATA::PIECE(4, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -2, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -1, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -1, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(6, 1, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 480, L"backspin", {
                   ACTIONDATA::PIECE(14, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, 16, 0),
                   ACTIONDATA::PIECE(32, 3, 480, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 810, L"eorb", {
                   ACTIONDATA::PIECE(8, 0, 630, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, 1, 6),
                   ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, 1, 3), ACTIONDATA::PIECE(8, 2, 90, 1, 0, 0, 11, 4),
                   ACTIONDATA::PIECE(8, 3, 180, 1, 0, 0, 28, 0), ACTIONDATA::PIECE(20, 0, 90, 1, 0, 0, -7, 0),
                   ACTIONDATA::PIECE(4, 1, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"screw", {
                   ACTIONDATA::PIECE(17, 1, 600, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(14, 1, 240, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 420, L"doubleupper", {
                   ACTIONDATA::PIECE(4, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 0, 120, 1, 0, 0, 5, 0),
                   ACTIONDATA::PIECE(14, 1, 120, 1, 0, 0, 4, 0), ACTIONDATA::PIECE(14, 0, 120, 1, 0, 0, -3, 0),
                   ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, 17, 0), ACTIONDATA::PIECE(17, 0, 240, 1, 0, 0, -4, 0),
                   ACTIONDATA::PIECE(32, 3, 120, 1, 0, 0, -4, 0), ACTIONDATA::PIECE(4, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 990, L"dragonstrike", {
                   ACTIONDATA::PIECE(14, 1, 90, 1, 0, 0, 6, -14), ACTIONDATA::PIECE(14, 0, 90, 1, 0, 0, 1, -20),
                   ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, 6, -19), ACTIONDATA::PIECE(10, 0, 90, 1, 1, 0, -7, -35),
                   ACTIONDATA::PIECE(12, 1, 90, 1, 0, 0, 8, -34), ACTIONDATA::PIECE(12, 1, 90, 1, 0, 0, 8, -35),
                   ACTIONDATA::PIECE(12, 1, 90, 1, 0, 0, 8, -34), ACTIONDATA::PIECE(12, 1, 90, 1, 0, 0, 8, -28),
                   ACTIONDATA::PIECE(8, 3, 90, 1, 0, 0, 43, 0), ACTIONDATA::PIECE(8, 3, 90, 1, 0, 0, 43, 1),
                   ACTIONDATA::PIECE(8, 3, 90, 1, 0, 0, 43, 2), ACTIONDATA::PIECE(8, 3, 90, 1, 0, 0, 43, 3),
               }),
    ACTIONDATA(0, 1, 0, L"doublefire", {
                   ACTIONDATA::PIECE(32, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 360, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(32, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"triplefire", {
                   ACTIONDATA::PIECE(32, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 720, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(32, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"fake", {
                   ACTIONDATA::PIECE(32, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 720, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(32, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1980, L"airstrike", {
                   ACTIONDATA::PIECE(4, 0, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 240, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(10, 1, 120, 1, 0, 0, 9, -12),
                   ACTIONDATA::PIECE(9, 0, 120, 1, 0, 0, 0, -15), ACTIONDATA::PIECE(9, 0, 120, 1, 0, 0, 0, -16),
                   ACTIONDATA::PIECE(9, 0, 120, 1, 0, 0, 0, -15), ACTIONDATA::PIECE(9, 0, 120, 1, 0, 0, 0, -13),
                   ACTIONDATA::PIECE(10, 2, 120, 1, 0, 0, 15, 1), ACTIONDATA::PIECE(10, 2, 120, 1, 0, 0, 15, 2),
                   ACTIONDATA::PIECE(10, 2, 120, 1, 0, 0, 15, 3), ACTIONDATA::PIECE(11, 1, 120, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(4, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 450, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 450, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"edrain", {ACTIONDATA::PIECE(4, 0, 600, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"octopus", {
                   ACTIONDATA::PIECE(4, 0, 0, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 3, 90, 1, 0, 0, 37, 0),
                   ACTIONDATA::PIECE(20, 1, 90, 1, 0, 270, 36, -83), ACTIONDATA::PIECE(10, 0, 90, 1, 0, 180, -8, -108),
                   ACTIONDATA::PIECE(14, 0, 90, 1, 0, 180, -11, -114),
                   ACTIONDATA::PIECE(14, 1, 90, 1, 0, 180, -24, -111), ACTIONDATA::PIECE(10, 0, 90, 1, 0, 0, -9, -14),
                   ACTIONDATA::PIECE(8, 3, 270, 1, 0, 0, 32, 0), ACTIONDATA::PIECE(4, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"backstep", {ACTIONDATA::PIECE(16, 0, 300, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 240, L"shot", {
                   ACTIONDATA::PIECE(32, 0, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 540, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(32, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"recovery", {ACTIONDATA::PIECE(4, 0, 30, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 510, L"fireburner", {
                   ACTIONDATA::PIECE(32, 0, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 270, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 2, 0), ACTIONDATA::PIECE(32, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 330, L"coolingeffect", {
                   ACTIONDATA::PIECE(32, 0, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(16, 0, 270, 1, 0, 0, 2, 0), ACTIONDATA::PIECE(32, 0, 0, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 450, L"fist", {
                   ACTIONDATA::PIECE(4, 2, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 90, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 0, 270, 1, 0, 0, 2, 0), ACTIONDATA::PIECE(18, 1, 90, 1, 0, 0, -1, 2),
                   ACTIONDATA::PIECE(18, 1, 90, 1, 0, 0, -2, 2), ACTIONDATA::PIECE(17, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(12, 1, 90, 1, 0, 0, 15, 0), ACTIONDATA::PIECE(18, 1, 90, 1, 0, 0, 13, 2),
                   ACTIONDATA::PIECE(18, 1, 90, 1, 0, 0, 12, 2), ACTIONDATA::PIECE(10, 0, 90, 1, 0, 0, 4, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -5, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -6, 0),
                   ACTIONDATA::PIECE(21, 2, 90, 1, 0, 0, 3, 8), ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, -13, -11),
                   ACTIONDATA::PIECE(8, 2, 90, 1, 0, 0, 3, -11), ACTIONDATA::PIECE(9, 2, 90, 1, 0, 0, -2, 0),
                   ACTIONDATA::PIECE(9, 2, 90, 1, 0, 0, -3, 2), ACTIONDATA::PIECE(18, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(14, 0, 90, 1, 0, 0, 0, -16), ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, 4, -21),
                   ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, 7, -27), ACTIONDATA::PIECE(8, 2, 90, 1, 1, 0, -24, -23),
                   ACTIONDATA::PIECE(15, 3, 90, 1, 0, 0, 51, 0),
               }),
    ACTIONDATA(0, 1, 990, L"timeleap", {
                   ACTIONDATA::PIECE(4, 0, 450, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 540, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 450, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"rapidfire", {ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 7, 0),}),
    ACTIONDATA(0, 1, 720, L"homing", {
                   ACTIONDATA::PIECE(7, 0, 720, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 1, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 540, L"ghostwalk", {
                   ACTIONDATA::PIECE(5242957, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7274608, 0, 180, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(3801172, 0, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145780, 0, 180, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(1, 0, 0, L"ghoststand", {
                   ACTIONDATA::PIECE(5242957, 0, 500, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6357110, 0, 500, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4390944, 0, 500, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6357110, 0, 500, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 0, L"ghostjump", {ACTIONDATA::PIECE(3145776, 0, 200, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 0, 300, L"ghostproneStab", {
                   ACTIONDATA::PIECE(3473459, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3211317, 0, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 300, L"ghostfly", {
                   ACTIONDATA::PIECE(6815811, 0, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 300, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 250, L"ghostladder", {
                   ACTIONDATA::PIECE(6815811, 0, 250, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 250, 0, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 250, L"ghostrope", {
                   ACTIONDATA::PIECE(6815811, 0, 250, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(3145776, 0, 250, 0, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 0, 0, L"ghostsit", {ACTIONDATA::PIECE(3145776, 0, 150, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"cannon", {ACTIONDATA::PIECE(4, 0, 780, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"torpedo", {ACTIONDATA::PIECE(4, 0, 990, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"darksight", {ACTIONDATA::PIECE(4, 0, 100, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 3360, L"bamboo", {
                   ACTIONDATA::PIECE(4, 1, 720, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 1, 120, 1, 0, 0, 8, 0),
                   ACTIONDATA::PIECE(14, 1, 120, 1, 0, 0, 6, -218), ACTIONDATA::PIECE(14, 0, 120, 1, 0, 0, 1, -266),
                   ACTIONDATA::PIECE(8, 1, 120, 0, 0, 0, 6, -287), ACTIONDATA::PIECE(10, 0, 120, 1, 1, 0, 6, -299),
                   ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 8, -299), ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 23, -308),
                   ACTIONDATA::PIECE(7, 1, 120, 1, 0, 0, 18, -306), ACTIONDATA::PIECE(6, 2, 120, 1, 0, 0, 4, -308),
                   ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, 6, -306), ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 6, -304),
                   ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 23, -313), ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, 6, -309),
                   ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 6, -307), ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 6, -308),
                   ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 6, -308), ACTIONDATA::PIECE(16, 1, 120, 1, 0, 0, -12, -316),
                   ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, -3, -311), ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 1, -311),
                   ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 2, -311), ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 3, -311),
                   ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 4, -311), ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 5, -311),
                   ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 6, -311), ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 6, -287),
                   ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 43, 2), ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 43, 3),
                   ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 43, 3), ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 43, 3),
                   ACTIONDATA::PIECE(4, 1, 240, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 960, L"pyramid", {
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 1, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 1, 120, 0, 0, 0, 3, -34), ACTIONDATA::PIECE(14, 0, 120, 1, 0, 0, 6, -68),
                   ACTIONDATA::PIECE(8, 1, 120, 0, 0, 0, 9, -102), ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 14, -127),
                   ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 14, -132), ACTIONDATA::PIECE(12, 1, 120, 1, 0, 0, 14, -137),
                   ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 35, -96), ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 35, -47),
                   ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 35, 0), ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 540, L"wave", {
                   ACTIONDATA::PIECE(12, 1, 60, 1, 0, 0, 14, 0), ACTIONDATA::PIECE(12, 1, 420, 1, 0, 0, 15, 0),
                   ACTIONDATA::PIECE(16, 1, 60, 1, 0, 0, -29, 0), ACTIONDATA::PIECE(16, 1, 450, 1, 0, 0, -30, 0),
                   ACTIONDATA::PIECE(4, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 570, L"blade", {
                   ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, -1, -4), ACTIONDATA::PIECE(12, 1, 90, 1, 0, 0, 6, -13),
                   ACTIONDATA::PIECE(12, 2, 90, 1, 0, 0, 11, -27), ACTIONDATA::PIECE(12, 2, 90, 1, 0, 0, 11, -32),
                   ACTIONDATA::PIECE(12, 2, 90, 1, 0, 0, 11, -33), ACTIONDATA::PIECE(12, 2, 120, 1, 0, 0, 11, -34),
                   ACTIONDATA::PIECE(12, 2, 60, 1, 0, 0, 11, -34), ACTIONDATA::PIECE(12, 3, 360, 1, 0, 0, 16, 0),
               }),
    ACTIONDATA(0, 1, 1600, L"souldriver", {
                   ACTIONDATA::PIECE(4, 0, 800, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 800, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 1, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 540, L"firestrike", {
                   ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 6, 0), ACTIONDATA::PIECE(16, 0, 480, 1, 0, 0, 7, 0),
                   ACTIONDATA::PIECE(16, 1, 60, 1, 0, 0, -24, 0), ACTIONDATA::PIECE(16, 1, 60, 1, 0, 0, -36, 0),
                   ACTIONDATA::PIECE(16, 1, 60, 1, 0, 0, -39, 0), ACTIONDATA::PIECE(16, 1, 120, 1, 0, 0, -41, 0),
               }),
    ACTIONDATA(0, 1, 1260, L"flamegear", {
                   ACTIONDATA::PIECE(4, 0, 630, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 630, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 180, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 180, L"stormbreak", {
                   ACTIONDATA::PIECE(11, 0, 90, 1, 0, 0, -9, 0), ACTIONDATA::PIECE(11, 1, 90, 1, 0, 0, -20, 0),
                   ACTIONDATA::PIECE(11, 2, 90, 1, 0, 0, -15, 0), ACTIONDATA::PIECE(11, 2, 180, 1, 0, 0, -15, 0),
               }),
    ACTIONDATA(0, 1, 1350, L"vampire", {
                   ACTIONDATA::PIECE(4, 0, 450, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 450, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 450, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"float", {ACTIONDATA::PIECE(4, 0, 1320, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 180, L"swingT2PoleArm", {
                   ACTIONDATA::PIECE(10, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(10, 1, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(10, 2, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 180, L"swingP1PoleArm", {
                   ACTIONDATA::PIECE(13, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(13, 1, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(13, 2, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 180, L"swingP2PoleArm", {
                   ACTIONDATA::PIECE(14, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(14, 1, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(14, 2, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 90, L"doubleSwing", {
                   ACTIONDATA::PIECE(14, 2, 90, 1, 0, 0, 11, -1), ACTIONDATA::PIECE(15, 0, 90, 1, 1, 0, -2, 0),
                   ACTIONDATA::PIECE(21, 0, 60, 1, 1, 0, -53, 11), ACTIONDATA::PIECE(21, 2, 90, 1, 1, 0, -54, 11),
                   ACTIONDATA::PIECE(21, 2, 90, 1, 1, 0, -56, 14),
               }),
    ACTIONDATA(0, 1, 330, L"tripleSwing", {
                   ACTIONDATA::PIECE(15, 1, 60, 1, 0, 0, -32, 0), ACTIONDATA::PIECE(41, 0, 60, 1, 0, 90, -55, -31),
                   ACTIONDATA::PIECE(41, 0, 60, 1, 1, 90, 31, -45), ACTIONDATA::PIECE(15, 2, 60, 1, 0, 0, -41, -30),
                   ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, -45, -36), ACTIONDATA::PIECE(14, 2, 120, 1, 0, 0, -41, 0),
                   ACTIONDATA::PIECE(14, 2, 120, 1, 0, 0, -41, 1), ACTIONDATA::PIECE(14, 2, 90, 1, 0, 0, -41, 2),
               }),
    ACTIONDATA(0, 1, 90, L"fullSwingDouble", {
                   ACTIONDATA::PIECE(20, 2, 90, 1, 0, 0, -9, 0), ACTIONDATA::PIECE(20, 2, 60, 1, 0, 0, -9, 0),
                   ACTIONDATA::PIECE(19, 0, 120, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(19, 2, 150, 1, 0, 0, -25, 0),
               }),
    ACTIONDATA(0, 1, 330, L"fullSwingTriple", {
                   ACTIONDATA::PIECE(10, 0, 60, 1, 0, 90, -84, -85), ACTIONDATA::PIECE(10, 0, 60, 1, 0, 180, -57, -152),
                   ACTIONDATA::PIECE(15, 2, 60, 1, 0, 0, -42, -51), ACTIONDATA::PIECE(15, 2, 60, 1, 0, 0, -42, -55),
                   ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, -42, -56), ACTIONDATA::PIECE(15, 3, 120, 1, 0, 0, -34, 0),
                   ACTIONDATA::PIECE(15, 3, 120, 1, 0, 0, -34, 1), ACTIONDATA::PIECE(15, 3, 90, 1, 0, 0, -34, 2),
               }),
    ACTIONDATA(0, 1, 90, L"overSwingDouble", {
                   ACTIONDATA::PIECE(15, 3, 90, 1, 1, 0, -41, 0), ACTIONDATA::PIECE(19, 2, 90, 1, 0, 0, 22, 0),
                   ACTIONDATA::PIECE(15, 3, 120, 1, 1, 0, -57, 0), ACTIONDATA::PIECE(19, 2, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 330, L"overSwingTriple", {
                   ACTIONDATA::PIECE(21, 2, 30, 1, 1, 0, -67, -18), ACTIONDATA::PIECE(21, 2, 60, 1, 0, 0, -29, -38),
                   ACTIONDATA::PIECE(15, 2, 60, 1, 0, 0, -29, -54), ACTIONDATA::PIECE(15, 2, 60, 1, 0, 0, -29, -57),
                   ACTIONDATA::PIECE(15, 2, 60, 1, 0, 0, -29, -59), ACTIONDATA::PIECE(15, 2, 60, 1, 0, 0, -29, -60),
                   ACTIONDATA::PIECE(15, 3, 120, 1, 0, 0, -33, 0), ACTIONDATA::PIECE(15, 3, 120, 1, 0, 0, -33, 1),
                   ACTIONDATA::PIECE(15, 3, 90, 1, 0, 0, -33, 2),
               }),
    ACTIONDATA(0, 1, 360, L"rollingSpin", {
                   ACTIONDATA::PIECE(19, 2, 120, 1, 1, 0, -33, -21), ACTIONDATA::PIECE(19, 2, 120, 1, 0, 0, 27, -29),
                   ACTIONDATA::PIECE(19, 2, 120, 1, 1, 0, -33, -35), ACTIONDATA::PIECE(19, 2, 120, 1, 0, 0, 27, -39),
                   ACTIONDATA::PIECE(21, 2, 120, 1, 0, 0, 13, -17), ACTIONDATA::PIECE(21, 2, 120, 1, 0, 0, 13, -22),
                   ACTIONDATA::PIECE(21, 2, 120, 1, 0, 0, 13, -7),
               }),
    ACTIONDATA(0, 1, 360, L"comboSmash", {
                   ACTIONDATA::PIECE(8, 2, 120, 1, 0, 0, 39, -12), ACTIONDATA::PIECE(8, 1, 120, 0, 0, 0, 34, -18),
                   ACTIONDATA::PIECE(8, 2, 120, 1, 1, 0, 4, -14), ACTIONDATA::PIECE(20, 2, 120, 1, 0, 0, 38, 0),
                   ACTIONDATA::PIECE(20, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(20, 2, 600, 1, 0, 0, -2, 0),
               }),
    ACTIONDATA(0, 1, 900, L"comboFenrir", {
                   ACTIONDATA::PIECE(4, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(10, 0, 90, 1, 0, 0, 3, 0),
                   ACTIONDATA::PIECE(10, 1, 90, 1, 0, 0, 3, 0), ACTIONDATA::PIECE(15, 3, 90, 1, 0, 0, 45, 0),
                   ACTIONDATA::PIECE(14, 2, 90, 1, 0, 0, 33, 0), ACTIONDATA::PIECE(21, 2, 90, 1, 0, 0, 60, 16),
                   ACTIONDATA::PIECE(21, 2, 360, 1, 0, 0, 61, 16), ACTIONDATA::PIECE(20, 2, 90, 1, 0, 0, -82, 0),
                   ACTIONDATA::PIECE(20, 2, 540, 1, 0, 0, -87, 0),
               }),
    ACTIONDATA(0, 1, 2400, L"comboTempest", {
                   ACTIONDATA::PIECE(4, 0, 1200, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 1200, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 600, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 120, L"finalCharge", {
                   ACTIONDATA::PIECE(21, 2, 120, 1, 0, 0, 13, 14), ACTIONDATA::PIECE(21, 2, 120, 1, 0, 0, 14, 13),
                   ACTIONDATA::PIECE(20, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(20, 2, 120, 1, 1, 0, -56, 0),
                   ACTIONDATA::PIECE(20, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(20, 2, 90, 1, 1, 0, -56, 0),
                   ACTIONDATA::PIECE(20, 2, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(20, 2, 90, 1, 1, 0, -56, 0),
                   ACTIONDATA::PIECE(20, 2, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(20, 2, 60, 1, 0, 0, -2, 0),
                   ACTIONDATA::PIECE(20, 2, 60, 1, 0, 0, -1, 0),
               }),
    ACTIONDATA(0, 1, 0, L"combatStep", {
                   ACTIONDATA::PIECE(1, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(1, 1, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(1, 2, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(1, 3, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 540, L"finalBlow", {
                   ACTIONDATA::PIECE(10, 2, 90, 1, 0, 0, 4, 0), ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, -2, -12),
                   ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, -2, -33), ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, -2, -40),
                   ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, -2, -41), ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, -2, -40),
                   ACTIONDATA::PIECE(15, 3, 90, 1, 0, 0, 23, 6), ACTIONDATA::PIECE(15, 3, 90, 1, 0, 0, 23, 7),
                   ACTIONDATA::PIECE(15, 3, 90, 1, 0, 0, 23, 2),
               }),
    ACTIONDATA(0, 1, 90, L"finalToss", {
                   ACTIONDATA::PIECE(15, 3, 90, 1, 0, 0, 47, 0), ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, 14, -54),
                   ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, 14, -60), ACTIONDATA::PIECE(15, 2, 90, 1, 0, 0, 14, -63),
                   ACTIONDATA::PIECE(15, 2, 30, 1, 0, 0, 14, -64), ACTIONDATA::PIECE(14, 0, 30, 1, 0, 0, 0, -74),
               }),
    ACTIONDATA(0, 1, 480, L"magicmissile", {
                   ACTIONDATA::PIECE(0, 1, 120, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(16, 0, 120, 1, 0, 0, 10, 0),
                   ACTIONDATA::PIECE(16, 0, 120, 1, 0, 0, 11, 0), ACTIONDATA::PIECE(7, 1, 120, 1, 0, 0, 11, 0),
                   ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, 11, 0), ACTIONDATA::PIECE(7, 2, 210, 1, 0, 0, 10, 0),
               }),
    ACTIONDATA(0, 1, 600, L"lightingBolt", {
                   ACTIONDATA::PIECE(4, 0, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 120, 1, 0, 0, 9, 0),
                   ACTIONDATA::PIECE(6, 2, 120, 1, 0, 0, 4, 0), ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(6, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(6, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 240, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"dragonBreathe", {
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -23, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -35, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -40, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -42, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -43, 0), ACTIONDATA::PIECE(16, 1, 360, 1, 0, 0, -44, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, -10, 0), ACTIONDATA::PIECE(4, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"breathe_prepare", {ACTIONDATA::PIECE(0, 0, 1, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"dragonIceBreathe", {
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -23, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -35, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -40, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -42, 0),
                   ACTIONDATA::PIECE(16, 1, 270, 1, 0, 0, -43, 0), ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, -10, 0),
                   ACTIONDATA::PIECE(4, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"icebreathe_prepare", {ACTIONDATA::PIECE(0, 0, 1, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 480, L"blaze", {
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 120, 1, 0, 0, 4, 0),
                   ACTIONDATA::PIECE(16, 0, 120, 1, 0, 0, 6, 0), ACTIONDATA::PIECE(16, 0, 120, 1, 0, 0, 7, 0),
                   ACTIONDATA::PIECE(16, 1, 120, 1, 0, 0, -2, 0), ACTIONDATA::PIECE(16, 1, 120, 1, 0, 0, -6, 0),
                   ACTIONDATA::PIECE(16, 1, 120, 1, 0, 0, -8, 0), ACTIONDATA::PIECE(16, 1, 120, 1, 0, 0, -9, 0),
                   ACTIONDATA::PIECE(16, 1, 120, 1, 0, 0, -9, 0), ACTIONDATA::PIECE(4, 0, 240, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 240, L"fireCircle", {
                   ACTIONDATA::PIECE(0, 1, 120, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(16, 0, 120, 1, 0, 0, 10, 0),
                   ACTIONDATA::PIECE(16, 0, 240, 1, 0, 0, 11, 0), ACTIONDATA::PIECE(7, 1, 120, 1, 0, 0, -9, 0),
                   ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, -8, 0), ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, -9, 0),
                   ACTIONDATA::PIECE(4, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1170, L"illusion", {
                   ACTIONDATA::PIECE(4, 0, 270, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 15, 0),
                   ACTIONDATA::PIECE(16, 0, 630, 1, 0, 0, 16, 0), ACTIONDATA::PIECE(7, 0, 90, 1, 0, 0, 8, 0),
                   ACTIONDATA::PIECE(17, 1, 90, 1, 0, 0, -13, 0), ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -19, 0),
                   ACTIONDATA::PIECE(17, 1, 60, 1, 0, 0, -21, 0), ACTIONDATA::PIECE(17, 1, 240, 1, 0, 0, -22, 0),
                   ACTIONDATA::PIECE(4, 1, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 420, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 600, L"magicFlare", {
                   ACTIONDATA::PIECE(4, 0, 270, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 60, 1, 0, 0, 9, 0),
                   ACTIONDATA::PIECE(6, 2, 60, 1, 0, 0, 4, 0), ACTIONDATA::PIECE(6, 1, 210, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(6, 0, 600, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 960, L"elementalReset", {
                   ACTIONDATA::PIECE(2, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 600, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, -4, 0), ACTIONDATA::PIECE(6, 0, 240, 1, 0, 0, -9, 0),
                   ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, -4, 0), ACTIONDATA::PIECE(4, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(2, 0, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1080, L"magicRegistance", {
                   ACTIONDATA::PIECE(2, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 2, 120, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(4, 0, 600, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, 3, 0), ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 7, 0),
                   ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 4, 0), ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 3, 0),
                   ACTIONDATA::PIECE(4, 2, 480, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1440, L"recoveryAura", {
                   ACTIONDATA::PIECE(4, 2, 120, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 0, 360, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(44, 0, 120, 1, 0, 0, 1, -42),
                   ACTIONDATA::PIECE(44, 0, 120, 1, 0, 0, 1, -44), ACTIONDATA::PIECE(7, 1, 120, 1, 0, 0, 22, -38),
                   ACTIONDATA::PIECE(6, 2, 480, 1, 0, 0, 8, 0), ACTIONDATA::PIECE(4, 2, 360, 1, 0, 0, 1, 0),
               }),
    ACTIONDATA(0, 1, 960, L"magicBooster", {
                   ACTIONDATA::PIECE(2, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 600, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, -4, 0), ACTIONDATA::PIECE(6, 0, 240, 1, 0, 0, -9, 0),
                   ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, -4, 0), ACTIONDATA::PIECE(4, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(2, 0, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"magicShield", {
                   ACTIONDATA::PIECE(2, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 2, 840, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(2, 0, 960, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 990, L"flameWheel", {
                   ACTIONDATA::PIECE(4, 0, 90, 1, 0, 0, 8, 0), ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 25, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 27, 0), ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 28, 0),
                   ACTIONDATA::PIECE(16, 0, 450, 1, 0, 0, 29, 0), ACTIONDATA::PIECE(7, 0, 90, 1, 0, 0, 16, 0),
                   ACTIONDATA::PIECE(17, 1, 90, 1, 0, 0, -5, 0), ACTIONDATA::PIECE(17, 1, 90, 1, 0, 0, -11, 0),
                   ACTIONDATA::PIECE(17, 1, 90, 1, 0, 0, -13, 0), ACTIONDATA::PIECE(17, 1, 270, 1, 0, 0, -14, 0),
                   ACTIONDATA::PIECE(4, 2, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 630, L"killingWing", {
                   ACTIONDATA::PIECE(2, 0, 270, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 1, 90, 1, 0, 0, 10, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -11, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -13, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -13, 0), ACTIONDATA::PIECE(5, 2, 90, 1, 0, 0, 22, 0),
                   ACTIONDATA::PIECE(5, 2, 90, 1, 0, 0, 28, 0), ACTIONDATA::PIECE(5, 2, 90, 1, 0, 0, 29, 0),
                   ACTIONDATA::PIECE(6, 2, 450, 1, 0, 0, 12, 0), ACTIONDATA::PIECE(4, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 960, L"OnixBlessing", {
                   ACTIONDATA::PIECE(2, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 2, 840, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 240, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(2, 0, 840, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1170, L"Earthquake", {
                   ACTIONDATA::PIECE(4, 1, 180, 1, 0, 0, -3, 0), ACTIONDATA::PIECE(4, 0, 360, 1, 0, 0, -3, 0),
                   ACTIONDATA::PIECE(6, 1, 90, 1, 0, 0, -1, 0), ACTIONDATA::PIECE(6, 0, 450, 1, 0, 0, -4, 0),
                   ACTIONDATA::PIECE(6, 2, 90, 1, 0, 0, -12, 0), ACTIONDATA::PIECE(6, 2, 90, 1, 0, 0, -15, 0),
                   ACTIONDATA::PIECE(6, 2, 180, 1, 0, 0, -16, 0), ACTIONDATA::PIECE(6, 2, 90, 1, 0, 0, -12, 0),
                   ACTIONDATA::PIECE(4, 0, 180, 1, 0, 0, -7, 0),
               }),
    ACTIONDATA(0, 1, 0, L"soulStone", {
                   ACTIONDATA::PIECE(4, 2, 120, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 1, 600, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, -2, 0), ACTIONDATA::PIECE(5, 2, 240, 1, 0, 0, -3, 0),
                   ACTIONDATA::PIECE(4, 2, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 810, L"dragonThrust", {
                   ACTIONDATA::PIECE(4, 2, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 540, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -23, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -40, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -43, 0),
                   ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -44, 0), ACTIONDATA::PIECE(16, 1, 90, 1, 0, 0, -45, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, -11, 0), ACTIONDATA::PIECE(4, 2, 450, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 900, L"ghostLettering", {
                   ACTIONDATA::PIECE(4, 2, 180, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(4, 1, 90, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 0, 630, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(5, 2, 90, 1, 0, 0, 4, 0),
                   ACTIONDATA::PIECE(5, 2, 90, 1, 0, 0, -2, 0), ACTIONDATA::PIECE(5, 2, 90, 1, 0, 0, -3, 0),
                   ACTIONDATA::PIECE(5, 2, 90, 1, 0, 0, -4, 0), ACTIONDATA::PIECE(4, 2, 360, 1, 0, 0, 1, 0),
               }),
    ACTIONDATA(0, 1, 2340, L"darkFog", {
                   ACTIONDATA::PIECE(4, 1, 360, 1, 0, 0, 8, 0), ACTIONDATA::PIECE(4, 2, 90, 1, 0, 0, 8, 0),
                   ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 10, 0), ACTIONDATA::PIECE(6, 0, 1800, 1, 0, 0, 11, 0),
                   ACTIONDATA::PIECE(6, 1, 90, 1, 0, 0, 9, 0), ACTIONDATA::PIECE(6, 2, 630, 1, 0, 0, 10, 0),
               }),
    ACTIONDATA(0, 1, 0, L"slow", {
                   ACTIONDATA::PIECE(4, 2, 120, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 0, 600, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(6, 1, 120, 1, 0, 0, 3, 0),
                   ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 6, 0), ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 3, 0),
                   ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 2, 0), ACTIONDATA::PIECE(4, 2, 480, 1, 0, 0, 1, 0),
               }),
    ACTIONDATA(0, 1, 0, L"mapleHero", {
                   ACTIONDATA::PIECE(4, 2, 90, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(4, 1, 90, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 0, 1350, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(4, 2, 720, 1, 0, 0, 1, 0),
               }),
    ACTIONDATA(0, 1, 0, L"Awakening", {
                   ACTIONDATA::PIECE(4, 2, 120, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(4, 0, 840, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(4, 2, 960, 1, 0, 0, 1, 0),
               }),
    ACTIONDATA(0, 1, 0, L"flyingAssaulter", {
                   ACTIONDATA::PIECE(15, 2, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 3, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 3, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(19, 2, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(19, 2, 120, 1, 1, 0, 0, 0), ACTIONDATA::PIECE(19, 2, 450, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(6, 0, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 120, L"tripleStab", {
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5, 1, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7, 1, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 2, 150, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 1, 150, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 142, L"fatalBlow", {
                   ACTIONDATA::PIECE(4, 0, 142, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 1, 270, 1, 0, 0, -90, 0),
                   ACTIONDATA::PIECE(5, 0, 120, 1, 0, 0, -75, 0), ACTIONDATA::PIECE(5, 1, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(5, 2, 120, 1, 0, 0, 21, 0), ACTIONDATA::PIECE(8, 2, 120, 1, 0, 0, 0, -65),
                   ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, 0, -65), ACTIONDATA::PIECE(8, 2, 90, 1, 0, 0, 0, -65),
                   ACTIONDATA::PIECE(8, 3, 300, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 240, L"slashStorm1", {
                   ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 20, 0), ACTIONDATA::PIECE(16, 1, 120, 1, 1, 0, -39, 0),
                   ACTIONDATA::PIECE(18, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 120, L"slashStorm2", {
                   ACTIONDATA::PIECE(8, 3, 120, 1, 0, 0, 20, 0), ACTIONDATA::PIECE(16, 1, 120, 1, 1, 0, -39, 0),
                   ACTIONDATA::PIECE(18, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 1, 60, 0, 0, 0, 0, -47), ACTIONDATA::PIECE(8, 2, 90, 1, 0, 0, 0, -85),
                   ACTIONDATA::PIECE(8, 3, 150, 1, 0, 0, 20, 0),
               }),
    ACTIONDATA(0, 1, 360, L"bloodyStorm", {
                   ACTIONDATA::PIECE(4, 0, 0, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 0, 90, 1, 1, 180, 0, -101),
                   ACTIONDATA::PIECE(8, 2, 90, 1, 1, 270, 47, -85), ACTIONDATA::PIECE(7, 0, 60, 1, 1, 0, -15, 0),
                   ACTIONDATA::PIECE(8, 3, 60, 1, 0, 0, 20, 0), ACTIONDATA::PIECE(16, 1, 60, 1, 1, 0, -39, 0),
                   ACTIONDATA::PIECE(18, 2, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 2, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 1, 60, 0, 0, 0, 0, -47), ACTIONDATA::PIECE(8, 2, 60, 1, 0, 0, 0, -85),
                   ACTIONDATA::PIECE(8, 3, 150, 1, 0, 0, 20, 0),
               }),
    ACTIONDATA(0, 1, 0, L"flashBang", {
                   ACTIONDATA::PIECE(7, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 1, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(7, 2, 330, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 240, L"upperStab", {
                   ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 3, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(15, 2, 120, 1, 0, 0, 0, -20), ACTIONDATA::PIECE(15, 2, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1350, L"suddenRaid", {
                   ACTIONDATA::PIECE(4, 2, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 2, 360, 1, 0, 0, 20, -50),
                   ACTIONDATA::PIECE(8, 3, 330, 1, 0, 0, 20, 0), ACTIONDATA::PIECE(4, 1, 210, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 1350, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"chainPull", {
                   ACTIONDATA::PIECE(16, 1, 330, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(7, 1, 180, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(16, 0, 150, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"chainAttack", {
                   ACTIONDATA::PIECE(5, 1, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5, 2, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, -35, -15), ACTIONDATA::PIECE(6, 1, 90, 1, 1, 0, -35, -15),
                   ACTIONDATA::PIECE(8, 3, 90, 1, 1, 0, -75, 0), ACTIONDATA::PIECE(7, 1, 90, 1, 0, 0, -31, 0),
                   ACTIONDATA::PIECE(8, 1, 90, 0, 0, 0, -55, -65), ACTIONDATA::PIECE(8, 3, 90, 1, 1, 0, -125, -95),
                   ACTIONDATA::PIECE(7, 1, 90, 1, 0, 0, -55, -115), ACTIONDATA::PIECE(15, 2, 240, 1, 0, 0, -55, -130),
                   ACTIONDATA::PIECE(8, 2, 60, 1, 0, 0, -55, -145), ACTIONDATA::PIECE(5, 2, 270, 1, 0, 0, -55, -170),
                   ACTIONDATA::PIECE(8, 2, 60, 1, 0, 0, -55, -145), ACTIONDATA::PIECE(8, 2, 60, 1, 0, 0, -55, -24),
                   ACTIONDATA::PIECE(15, 3, 60, 1, 0, 0, -55, 0), ACTIONDATA::PIECE(8, 1, 60, 0, 0, 0, -30, -45),
                   ACTIONDATA::PIECE(8, 2, 60, 1, 0, 0, -20, -45), ACTIONDATA::PIECE(8, 1, 60, 0, 0, 0, -10, -20),
                   ACTIONDATA::PIECE(8, 2, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 120, L"owlDead", {
                   ACTIONDATA::PIECE(16, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(16, 0, 840, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(5, 0, 450, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"monsterBombPrepare", {ACTIONDATA::PIECE(15, 1, 1200, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"monsterBombThrow", {
                   ACTIONDATA::PIECE(8, 1, 150, 0, 0, 0, 0, -58), ACTIONDATA::PIECE(8, 2, 150, 1, 0, 0, 0, -115),
                   ACTIONDATA::PIECE(5, 2, 150, 1, 0, 0, 0, -120), ACTIONDATA::PIECE(5, 2, 150, 1, 0, 0, 0, -115),
                   ACTIONDATA::PIECE(8, 2, 150, 1, 0, 0, 0, -58), ACTIONDATA::PIECE(8, 3, 150, 1, 0, 0, 20, 0),
                   ACTIONDATA::PIECE(15, 1, 150, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 150, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"finalCut", {
                   ACTIONDATA::PIECE(5, 2, 180, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(5, 2, 780, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"finalCutPrepare", {ACTIONDATA::PIECE(8, 0, 1200, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"cyclone_pre", {
                   ACTIONDATA::PIECE(4, 1, 450, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 180, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 10, 0), ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 11, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 13, 0), ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 1, -6),
                   ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -8), ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -12),
                   ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -12), ACTIONDATA::PIECE(6, 0, 90, 1, 1, 0, -6, -14),
                   ACTIONDATA::PIECE(6, 0, 90, 1, 1, 0, -6, -15), ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 1, -15),
                   ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -13), ACTIONDATA::PIECE(6, 0, 90, 1, 1, 0, -6, -11),
               }),
    ACTIONDATA(0, 1, 0, L"cyclone", {
                   ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 1, -13), ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -16),
                   ACTIONDATA::PIECE(6, 0, 90, 1, 1, 0, -6, -18), ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 1, -19),
                   ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -20), ACTIONDATA::PIECE(6, 0, 90, 1, 1, 0, -6, -20),
                   ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 1, -19), ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -18),
                   ACTIONDATA::PIECE(6, 0, 90, 1, 1, 0, -6, -16), ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 1, -13),
                   ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -11), ACTIONDATA::PIECE(6, 0, 90, 1, 1, 0, -6, -11),
               }),
    ACTIONDATA(0, 1, 0, L"cyclone_after", {
                   ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 1, -13), ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -12),
                   ACTIONDATA::PIECE(6, 0, 90, 1, 1, 0, -6, -11), ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 1, -9),
                   ACTIONDATA::PIECE(12, 0, 90, 0, 0, 0, 1, -5), ACTIONDATA::PIECE(4, 0, 90, 1, 1, 0, -5, 1),
                   ACTIONDATA::PIECE(4, 0, 90, 1, 0, 0, -1, 2), ACTIONDATA::PIECE(4, 1, 90, 1, 0, 0, 0, 1),
                   ACTIONDATA::PIECE(4, 2, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"doubleJump", {ACTIONDATA::PIECE(48, 0, 720, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 450, L"knockback", {
                   ACTIONDATA::PIECE(48, 0, 450, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 600, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"rbooster_pre", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"rbooster", {
                   ACTIONDATA::PIECE(4, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"rbooster_after", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 480, L"crossRoad", {
                   ACTIONDATA::PIECE(48, 0, 480, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 840, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1680, L"nemesis", {
                   ACTIONDATA::PIECE(4, 0, 840, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 840, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 2, 1560, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"wildbeast", {ACTIONDATA::PIECE(48, 0, 1530, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"siege_pre", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"siege", {
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"siege_stand", {
                   ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"siege_after", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_pre", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 180, L"tank", {
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_stand", {
                   ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_after", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_walk", {
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 660, L"tank_laser", {
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_siegepre", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_siegeattack", {
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_siegestand", {
                   ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 150, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_siegeafter", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 1260, L"sonicBoom", {
                   ACTIONDATA::PIECE(48, 0, 1260, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 720, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"revive", {
                   ACTIONDATA::PIECE(4, 2, 200, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 200, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 200, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 200, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 200, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 200, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 630, L"darkSpear", {
                   ACTIONDATA::PIECE(6, 0, 90, 1, 0, 0, 6, 0), ACTIONDATA::PIECE(6, 1, 90, 1, 0, 0, 10, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 14, 0), ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 17, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 19, 0), ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 20, 0),
                   ACTIONDATA::PIECE(16, 0, 90, 1, 0, 0, 20, 0), ACTIONDATA::PIECE(17, 1, 120, 1, 0, 0, 13, 0),
                   ACTIONDATA::PIECE(17, 1, 960, 1, 0, 0, 12, 0),
               }),
    ACTIONDATA(0, 1, 630, L"darkChain", {
                   ACTIONDATA::PIECE(7, 0, 70, 1, 0, 0, 4, 0), ACTIONDATA::PIECE(6, 2, 70, 1, 0, 0, 11, 0),
                   ACTIONDATA::PIECE(6, 1, 70, 1, 0, 0, 9, 0), ACTIONDATA::PIECE(6, 0, 70, 1, 0, 0, 5, 0),
                   ACTIONDATA::PIECE(6, 0, 350, 1, 0, 0, 5, 0), ACTIONDATA::PIECE(16, 0, 420, 1, 0, 0, 13, 0),
               }),
    ACTIONDATA(0, 1, 0, L"flamethrower_pre", {
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"flamethrower", {
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"flamethrower_after", {
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"flamethrower_pre2", {
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"flamethrower2", {
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"flamethrower_after2", {
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"mbooster", {
                   ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 100, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"msummon", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"msummon2", {
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"gatlingshot", {ACTIONDATA::PIECE(48, 0, 810, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"gatlingshot2", {ACTIONDATA::PIECE(48, 0, 810, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 90, L"drillrush", {
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 810, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 660, L"earthslug", {
                   ACTIONDATA::PIECE(48, 0, 660, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 570, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 450, L"rpunch", {
                   ACTIONDATA::PIECE(48, 0, 450, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 660, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 450, L"clawCut", {
                   ACTIONDATA::PIECE(48, 0, 450, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 1080, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 810, L"swallow", {
                   ACTIONDATA::PIECE(48, 0, 810, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 450, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"swallow_loop", {ACTIONDATA::PIECE(48, 0, 270, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 120, L"swallow_attack", {
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 600, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 810, L"swallow_pre", {ACTIONDATA::PIECE(48, 0, 810, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 1320, L"flashRain", {
                   ACTIONDATA::PIECE(4, 0, 1320, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 1320, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"mine", {ACTIONDATA::PIECE(48, 0, 1350, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"capture", {
                   ACTIONDATA::PIECE(32, 1, 90, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(32, 2, 90, 1, 0, 0, 1, 0),
                   ACTIONDATA::PIECE(32, 3, 270, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(32, 4, 90, 1, 0, 0, 2, 0),
                   ACTIONDATA::PIECE(32, 4, 90, 1, 0, 0, 1, 0), ACTIONDATA::PIECE(32, 3, 360, 1, 0, 0, 1, 0),
               }),
    ACTIONDATA(0, 1, 0, L"ride", {
                   ACTIONDATA::PIECE(2, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(44, 0, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(44, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 720, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"getoff", {
                   ACTIONDATA::PIECE(48, 0, 120, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(44, 0, 360, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(15, 3, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 120, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(3, 0, 240, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"ride2", {
                   ACTIONDATA::PIECE(4, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 3, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(15, 3, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 3, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(15, 3, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 3, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(15, 3, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(44, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 1, 60, 0, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 2, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(44, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"getoff2", {
                   ACTIONDATA::PIECE(48, 0, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 240, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 240, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(44, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(8, 2, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(8, 1, 60, 0, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(44, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 3, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(15, 3, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 3, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(15, 3, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(15, 3, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(15, 3, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 30, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(4, 0, 30, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 0, 30, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"mRush", {ACTIONDATA::PIECE(48, 0, 180, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"tank_msummon", {
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 270, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_msummon2", {
                   ACTIONDATA::PIECE(48, 0, 540, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 4140, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 960, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_mRush", {
                   ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 90, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_rbooster_pre", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"tank_rbooster_after", {
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
                   ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(48, 0, 60, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 870, L"shockwave", {
                   ACTIONDATA::PIECE(4, 0, 870, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 360, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 450, L"demolition", {
                   ACTIONDATA::PIECE(4, 0, 450, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 2670, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 630, L"snatch", {
                   ACTIONDATA::PIECE(4, 0, 630, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 180, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 660, L"windspear", {
                   ACTIONDATA::PIECE(4, 0, 660, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 540, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 600, L"windshot", {
                   ACTIONDATA::PIECE(4, 0, 600, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(4, 1, 660, 1, 0, 0, 0, 0),
               }),
    ACTIONDATA(0, 1, 0, L"fly2", {ACTIONDATA::PIECE(43, 1, 150, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 0, L"fly2Move", {ACTIONDATA::PIECE(43, 0, 150, 1, 0, 0, 0, 0),}),
    ACTIONDATA(0, 1, 360, L"fly2Skill", {
                   ACTIONDATA::PIECE(4, 0, 150, 1, 0, 0, 0, 0), ACTIONDATA::PIECE(21, 1, 210, 1, 0, 0, 0, 0),
               }),

};

Ztl_bstr_t ActionData::m_saMorphActions[49]{};
Ztl_bstr_t ActionData::m_saEmotionName[24]{};
Ztl_bstr_t ActionData::m_sNpcAction[2]{};
Ztl_bstr_t ActionData::m_sPetAction[34]{};
Ztl_bstr_t ActionData::m_saEmployeeAction[1]{};
Ztl_bstr_t ActionData::m_saMobAction[43]{};
Ztl_bstr_t ActionData::m_saSummonedAction[19]{};

/*void InitCharacterActionData() {
	auto& strPool = StringPool::GetInstance();
	auto& act  = ActionData::m_saCharacterActions;

	act[0] = ACTIONDATA(0, 0, strPool.GetBSTR(0x403));
	act[1] = ACTIONDATA(0, 0, strPool.GetBSTR(0x404));
	act[2] = ACTIONDATA(1, 0, strPool.GetBSTR(0x42d));
	act[3] = ACTIONDATA(1, 0, strPool.GetBSTR(0x42e));
	act[4] = ACTIONDATA(1, 0, strPool.GetBSTR(0x405));
	act[5] = ACTIONDATA(0, 0, strPool.GetBSTR(0x407));
}*/

ActionKey::ActionKey(long arg0, long arg1, long arg2)
{
    nSkillID = arg0;
    nSLV = arg1;
    nAction = arg2;
}

void ActionKey::_ctor_0(long arg0, long arg1, long arg2)
{
    new(this) ActionKey(arg0, arg1, arg2);
}

int32_t ActionKey::operator==(const ActionKey& rhs) const
{
    return nSkillID == rhs.nSkillID && nSLV == rhs.nSLV && nAction == rhs.nAction;
}

int32_t ActionKey::_op_eq_1(ActionKey* pThis, const ActionKey& rhs)
{
    return pThis->operator==(rhs);
    // return __sub_00006280(pThis, nullptr, rhs);
}

CActionMan::~CActionMan()
{
    if (CActionFrame::s_pZMapper)
    {
        CActionFrame::s_pZMapper = 0;
    }

    if (CActionFrame::s_pSMapper)
    {
        CActionFrame::s_pSMapper = 0;
    }
}

void CActionMan::_dtor_0()
{
    this->~CActionMan();
    // return __sub_00013290(this, nullptr);
}

CActionMan::CActionMan(const CActionMan& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::_ctor_1(const CActionMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CActionMan()
{
    ms_pInstance = this;
    m_tLastSweepCache = timeGetTime();


    // UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::_ctor_0()
{
    //return __sub_00012ED0(this, nullptr);
    new(this) CActionMan();
}

void CActionMan::Init()
{
    auto& sp = StringPool::GetInstance();
    ActionData::m_sNpcAction[0] = sp.GetBSTR(0x1AC2);
    ActionData::m_sNpcAction[1] = sp.GetBSTR(0x42B);

    ActionData::m_saEmployeeAction[0] = sp.GetBSTR(0x42B);

    const std::array emotionKeys = {
        0x3ee, 0x1ab7, 0x3ef, 0x3f0, 0x1aa7, 0x3f1, 0x3f2,
        0x3f3, 0x3f4, 0x3f5, 0x3f6, 0x3f7, 0x3f8, 0x3f9,
        0x3fa, 0x1AA1, 0x3fb, 0x3fc, 0x3fd, 0x3fe, 0x3ff,
        0x1AB8, 0x400, 0x401
    };

    for (auto i = 0; i < emotionKeys.size(); ++i)
    {
        ActionData::m_saEmotionName[i] = sp.GetBSTR(emotionKeys[i]);
    }

    const std::array mobKeys = {
        0x1AC2, 0x42b, 0x1abc, 0x1ab1, 0x432, 0x1acf, 0x453,
        0x442, 0x443, 0x444, 0x450, 0x451, 0x452, 0x445,
        0x446, 0x447, 0x448, 0x449, 0x44a, 0x44b, 0x44c, 0x44d,
        0xadb, 0xadc, 0xadd, 0xade, 0xadf, 0xae0, 0xae1, 0xae2,
        0xae3, 0xae4, 0xae5, 0xae6, 0xae7, 0xae8, 0xae9, 0xaea, 0xaeb,
        0xd74, 0x14f8, 0x1ad3, 0x165
    };

    for (auto i = 0; i < mobKeys.size(); ++i)
    {
        ActionData::m_saMobAction[i] = sp.GetBSTR(mobKeys[i]);
    }

    const std::array summKeys = {
        0x42B, 0x1ac2, 0x1ab1, 0x45e, 0x445, 0x446,
        0x44e, 0xadb, 0xadc, 0xadd, 0xade, 0xadf,
        0xae0, 0xab5, 0x165e, 0x1ab7, 0x44f, 0x1ad3,
        0xac8
    };

    for (auto i = 0; i < summKeys.size(); ++i)
    {
        ActionData::m_saSummonedAction[i] = sp.GetBSTR(summKeys[i]);
    }


    /*CActionFrame::LoadMappers();
    auto entry = GetCharacterImgEntry(2000);*/
    __sub_0001BEB0(this, nullptr);
}

void CActionMan::LoadCharacterAction(long nAction, long nGender, long nSkin, long* aAvatarHairEquip,
                                     ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>& apFE, long nWeaponStickerID,
                                     long nVehicleID,
                                     int32_t bTamingMobTired, long nGhostIndex)
{
    __sub_00027D00(this, nullptr, nAction, nGender, nSkin, aAvatarHairEquip, apFE, nWeaponStickerID, nVehicleID,
                   bTamingMobTired, nGhostIndex);
    /*AHECODES code;
    code.nAction = nAction;
    auto& hairEq = code.aHair;
    if (nAction == 47)
    {
        hairEq[0] = aAvatarHairEquip[0];
        hairEq[1] = aAvatarHairEquip[1];
        hairEq[3] = aAvatarHairEquip[3];
        hairEq[4] = aAvatarHairEquip[4];
    }
    else
    {
        std::copy_n(aAvatarHairEquip, 60, hairEq.begin());
        hairEq[14] = 0;
        hairEq[2] = 0;
        for (auto& ring: _D_G_ANRINGBODYPART)
        {
            hairEq[ring] = 0;
        }
        hairEq[15] = 0;
        hairEq[16] = 0;

        auto slot5 = hairEq[5];
        auto slot6 = hairEq[6];
        if ( slot5 / 10000 == 105 && slot6 )
        {
            auto itemInfo = CItemInfo::GetInstance();
            if (itemInfo->IsCashItem(slot5) || !itemInfo->IsCashItem(slot6))
            {
                hairEq[6] = 0;
                slot6 = 0;
            }
        }

        if (!slot5)
        {
            slot5 = nGender != 0 ? 1041046 : 1040036;
            hairEq[5] = slot5;
        }

        if (!slot6 && slot5 / 10000 != 105)
            hairEq[6] = nGender != 0 ? 1061039 : 1060026;;
    }

    if ( hairEq[1] == 1002186 )
        hairEq[1] = 0;
    if ( hairEq[4] == 1032024 )
        hairEq[4] = 0;
    if ( hairEq[3] == 1022079 )
        hairEq[3] = 0;
    if ( hairEq[7] == 1072153 )
        hairEq[7] = 0;
    if ( hairEq[8] == 1082102 )
        hairEq[8] = 0;
    if ( hairEq[9] == 1102039 )
        hairEq[9] = 0;
    if ( hairEq[10] == 1092067 )
        hairEq[10] = 0;


    auto wep = nWeaponStickerID;
    if ( nWeaponStickerID == 1702099 || nWeaponStickerID == 1702190 )
    {
        hairEq[11] = 0;
        wep = 0;
    }

    if ( nVehicleID / 10000 == 190
    || nVehicleID / 10000 == 193
    || nVehicleID == 1902040
    || nVehicleID == 1902041
    || nVehicleID == 1902042
    || nVehicleID / 1000 == 1983 )
    {
        hairEq[10] = 0;
        hairEq[11] = 0;
        if ( nAction != 257 && nAction != 258 && nAction != 64 && nAction != 65 )
        {
            if ( nAction == 45 || (code.nAction = 48, nAction == 46) )
                code.nAction = 46;
        }
    }

    if ( nAction == 100 )
    {
        hairEq[10] = 0;
        hairEq[11] = 0;
    }

    if ( nGhostIndex )
    {
        for ( auto i = 0; i <= 59; ++i )
        {
            if ( static_cast<unsigned int>(i) >= 2 && i != 3 && i != 4 )
                hairEq[i] = 0;
        }
    }

    if (wep && (nAction == 80 || nAction == 81))
        wep = 0;

    ZArray<CActionFrame> aCharFrame;
    load_character_action(code.nAction, nSkin, hairEq.data(), aCharFrame, wep, nGhostIndex);
    MergeCharacterSprite(code, aCharFrame, apFE);*/
}

int32_t CActionMan::load_character_action(long nAction, const long nSkin, const long* aAvatarHairEquip,
                                          ZArray<CActionFrame>& aFrame, const long nWeaponStickerID,
                                          const long nGhostIndex) const
{
    auto bCapEquip = aAvatarHairEquip[0] != 0;
    load_item_action(
        nAction,
        nSkin,
        nSkin + 2000,
        aFrame,
        0,
        nGhostIndex,
        bCapEquip);

    action_mapping_for_ghost(nAction);

    load_item_action(
        nAction == 47 ? 44 : nAction,
        nSkin,
        nSkin + 12000,
        aFrame,
        0,
        nGhostIndex,
        bCapEquip);

    auto wepStickerId = nWeaponStickerID / 100000 == 17 ? nWeaponStickerID : 0;
    for (auto i = 0; i < 60; i++)
    {
        if (i == 11)
        {
            if (nAction == 88 ||
                nAction == 96 ||
                nAction == 112 ||
                nAction == 138 ||
                nAction == 87 ||
                nAction == 27 ||
                nAction == 28)
            {
                continue;
            }
        }

        if (i == 18 || i == 19 || i == 20)
        {
            continue;
        }

        auto id = aAvatarHairEquip[i];
        if (id)
        {
            load_item_action(
                nAction == 47 ? 44 : nAction,
                nSkin,
                id,
                aFrame,
                id == 11 ? nWeaponStickerID : 0,
                nGhostIndex,
                bCapEquip);
        }
    }

    if (!bCapEquip)
    {
        return 1;
    }

    static Ztl_bstr_t bsCapHairVSlot = StringPool::GetInstance().GetBSTR(0x4A1);
    for (auto i = 0; i < aFrame.GetCount(); i++)
    {
        // TODO: &ghostIndex == aFrame.m_sExclVSlot ???
        aFrame[i].SetExclusiveVSlot(bsCapHairVSlot);
        //if(aFrame[i].m_sExclVSlot)
        //TODO assign vslot somehow
    }
    return 1;


    return __sub_00026CE0((CActionMan*)this, nullptr, nAction, nSkin, (long*)aAvatarHairEquip, aFrame, nWeaponStickerID,
                          nGhostIndex);
}

void CActionMan::LoadTamingMobAction(long b, long aFrame, long* arg2, int32_t arg3,
                                     ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>& arg4)
{
    __sub_00027A10(this, nullptr, b, aFrame, arg2, arg3, arg4);
}

long CActionMan::LoadFaceLook(long arg0, long arg1, long arg2, long arg3, ZList<_x_com_ptr<IWzCanvas>>& arg4)
{
    return __sub_0001CAB0(this, nullptr, arg0, arg1, arg2, arg3, arg4);
}

ZRef<CActionMan::CHARACTERIMGENTRY> CActionMan::GetInfoImgEntry(long nUOLKey)
{
    ZRef<CActionMan::CHARACTERIMGENTRY> ret;
    return *__sub_00017FD0(this, nullptr, &ret, nUOLKey);
}

ZRef<CActionMan::CHARACTERIMGENTRY> CActionMan::GetCharacterImgEntry(long nUOLKey)
{
    //ZRef<CActionMan::CHARACTERIMGENTRY> ret;
    //return *__sub_00017FD0(this, nullptr, &ret, nUOLKey);
    if (nUOLKey <= 0)
        return {};
    ZRef<CHARACTERIMGENTRY> img;
    if (!m_mCharacterImgEntry.GetAt(nUOLKey, &img))
    {
        img = new CHARACTERIMGENTRY();
        auto eq_path = get_equip_data_path(nUOLKey);
        if (!eq_path.IsEmpty())
        {
            auto prop = get_rm()->GetObjectT<IWzProperty>(eq_path.c_str());
            img->pImg = prop;

            auto infoProp = prop->GetItemT<IWzProperty>(_GetBSTR(981));
            img->sISlot = infoProp->Getitem(_GetBSTR(1177)).GetStr();
            img->sVSlot = infoProp->Getitem(_GetBSTR(1178)).GetStr();
            img->sSfx = infoProp->Getitem(_GetBSTR(1179)).GetStr();
            img->bWeekly = infoProp->Getitem(_GetBSTR(1186)).GetInt32(0);
            img->nWeapon = GetWeaponType(nUOLKey);
            if (img->nWeapon)
            {

                img->sWeaponAfterimage = infoProp->Getitem(_GetBSTR(1180)).GetStr();
                img->nWalk = infoProp->Getitem(_GetBSTR(1181)).GetInt32(0);
                img->nStand = infoProp->Getitem(_GetBSTR(1067)).GetInt32(0);
                img->nAttack = infoProp->Getitem(_GetBSTR(6814)).GetInt32(0);
                img->nAttackSpeed = infoProp->Getitem(_GetBSTR(1182)).GetInt32(0);
            }

            m_lCharacterImgEntry.Insert(img);
            img->posMap = (__POSITION*)m_mCharacterImgEntry.Insert(nUOLKey, img);
        }
    }


    img->tLastAccessed = timeGetTime();
    if (img->bWeekly)
    {
        auto day = CDayOfWeek::GetInstance()->GetCurrentDay();
        auto path = get_weekly_data_path(nUOLKey, day);
        if (!path.IsEmpty())
        {
            img->pWeeklyImg = get_rm()->GetObjectT<IWzProperty>(path.c_str());
        }
    }

    if (!img->pWeeklyImg)
        img->pWeeklyImg = img->pImg;

    return img;
}

void CActionMan::LoadMorphAction(unsigned long dwTemplateID, long nAction,
                                 ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>& apFE)
{
    __sub_000193C0(this, nullptr, dwTemplateID, nAction, apFE);
}

ZRef<CActionMan::MORPHIMGENTRY> CActionMan::GetMorphImgEntry(unsigned long dwTemplateID)
{
    ZRef<CActionMan::MORPHIMGENTRY> ret;
    return *__sub_00018B30(this, nullptr, &ret, dwTemplateID);
}

template <typename T>
_com_ptr_t<_com_IIID<T, &__uuidof(T)>> GetPropT(IWzProperty* prop, Ztl_bstr_t path)
{
    auto vObj = prop->Getitem(path);
    auto unk = get_unknown(vObj);
    return _com_ptr_t<_com_IIID<T, &__uuidof(T)>>(unk);
}

int GetIntProp(IWzProperty* p, int spKey, int defaultValue = 0)
{
    auto vObj = p->Getitem(StringPool::GetInstance().GetBSTR(spKey));
    return get_int32(vObj, defaultValue);
}

SECRECT PropGetRect(IWzProperty* prop)
{
    auto& sp = StringPool::GetInstance();
    auto lt = prop->GetItemT<IWzVector2D>(sp.GetBSTR(6846));
    auto rb = prop->GetItemT<IWzVector2D>(sp.GetBSTR(6859));

    SECRECT rc{};
    if (lt && rb)
    {
        auto ltx = lt->Getx();
        auto lty = lt->Gety();
        auto rbx = rb->Getx();
        auto rby = rb->Gety();

        SECRECT::SetRect(rc, ltx, lty, rbx, rby);
    }
    else
    {
        rc.SetRectEmpty();
    }
    return rc;
}

void CActionMan::LoadMobAction(unsigned long dwTemplateID, long nAction,
                               ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>& lpFrame)
{
    //__sub_0001F530(this, nullptr, arg0, arg1, arg2);
    auto key = nAction | (dwTemplateID << 8);

    ZRef<MOBACTIONENTRY> entry;
    if (m_mMobAction.GetAt(key, &entry))
    {
        entry->tLastAccessed = get_update_time();
        lpFrame.RemoveAll();
        lpFrame.AddTail(entry->lpFrame);
        return;
    }

    auto imgEntry = GetMobImgEntry(dwTemplateID);
    auto& mobActionName = ActionData::m_saMobAction[nAction];

    auto prop = imgEntry->pImg->GetItemT<IWzProperty>(mobActionName);
    IUnknown* enm{};
    //TODO(game) might need to free
    Z_CHECK_HR(prop->Get__NewEnum(&enm));
    _x_com_ptr<IEnumVARIANT> penm((IEnumVARIANT*)enm);
    ULONG fetched = 0;

    Ztl_variant_t vName;

    ZList<ZRef<MOBACTIONFRAMEENTRY>> frames;
    auto& sp = StringPool::GetInstance();
    while (penm->Next(1, &vName, &fetched) == S_OK)
    {
        auto name = DetachBSTR(vName);

        if (dwTemplateID == 8800101)
        {
            if (nAction == 16)
            {
                // TODO(game) 0x1763, 0x1762 load either action if they are empty
            }
        }
        // 8800101 + action== 16 same as above


        //TODO get_unknown
        auto canvas = GetPropT<IWzCanvas>(prop, name);
        if (canvas)
        {
            auto canvasProp = canvas->Getproperty();

            ZRef<MOBACTIONFRAMEENTRY> actionEntry(ZAllocHelper(1));
            actionEntry->pCanvas = canvas;


            actionEntry->tDelay = GetIntProp(canvasProp, 6825, 120); //delay
            actionEntry->a0 = GetIntProp(canvasProp, 6808, -1); // a0
            actionEntry->a1 = GetIntProp(canvasProp, 6809, -1); // a1
            auto lt = canvasProp->GetItemT<IWzVector2D>(sp.GetBSTR(6846));
            auto rb = canvasProp->GetItemT<IWzVector2D>(sp.GetBSTR(6859));


            actionEntry->rcBody = PropGetRect(canvasProp);

            auto multiBodyProp = canvasProp->GetItemT<IWzProperty>(sp.GetBSTR(5961));
            if (multiBodyProp)
            {
                for (int i = 0; ; ++i)
                {
                    wchar_t mbKey[32]{};
                    _itow_s(i, mbKey, 10);

                    auto sprop = multiBodyProp->GetItemT<IWzProperty>(mbKey);
                    if (!sprop)
                    {
                        break;
                    }

                    actionEntry->arcMultiBody.Insert(PropGetRect(sprop));
                }
            }

            auto attackOnlyProp = canvasProp->GetItemT<IWzProperty>(sp.GetBSTR(2919));
            if (attackOnlyProp)
            {
                for (int i = 0; ; ++i)
                {
                    wchar_t mbKey[32]{};
                    _itow_s(i, mbKey, 10);

                    auto sprop = attackOnlyProp->GetItemT<IWzProperty>(mbKey);
                    if (!sprop)
                    {
                        break;
                    }

                    actionEntry->arcAttackOnlyBody.Insert(PropGetRect(sprop));
                }
            }

            auto head = canvasProp->GetItemT<IWzVector2D>(sp.GetBSTR(6836));
            if (head)
            {
                actionEntry->ptHead.x = head->Getx();
                actionEntry->ptHead.y = head->Gety();
            }
            frames.Insert(actionEntry);
        }
    }


    auto bZigZag = GetIntProp(prop, 1183, 0); //TODO zigzab

    ZRef<MOBACTIONENTRY> mobActionEntry(ZAllocHelper(1));
    mobActionEntry->lpFrame = frames;
    mobActionEntry->nAction = nAction;
    mobActionEntry->tLastAccessed = get_update_time();
    mobActionEntry->dwTemplateID = dwTemplateID;

    auto lPos = m_lMobAction.Insert(mobActionEntry);
    auto mPos = m_mMobAction.Insert(key, mobActionEntry);

    mobActionEntry->posList = (__POSITION*)lPos;
    mobActionEntry->posMap = (__POSITION*)mPos;

    lpFrame.RemoveAll();
    lpFrame.AddTail(frames);
}

ZRef<CActionMan::MOBIMGENTRY> CActionMan::GetMobImgEntry(unsigned long dwTemplateID)
{
    ZRef<CActionMan::MOBIMGENTRY> ret;
    return *__sub_00019F20(this, nullptr, &ret, dwTemplateID);
}

void CActionMan::LoadNpcAction(CNpcTemplate* pTemplate, long nAction,
                               ZList<ZRef<NPCACTIONFRAMEENTRY>>& lpFrame, long nClientActionIdx)
{
    auto& sp = StringPool::GetInstance();
    auto actIx = nClientActionIdx;
    if (nClientActionIdx == -2)
        actIx = pTemplate->CalcClientActionSetIdx(false);

    auto t = timeGetTime();
    auto id = pTemplate->dwTemplateID;
    auto key = static_cast<int64_t>(id) << 8 | nAction;
    ZRef<NPCACTIONENTRY> entry;
    if (m_mNpcAction.GetAt(key, &entry))
    {
        lpFrame.RemoveAll();
        lpFrame.AddTail(entry->lpFrame);
        return;
    }
    auto npcEntry = GetNpcImgEntry(id);


    auto& actProp = actIx >= 0 ? pTemplate->m_lClientActionSet.FindIndex((size_t)actIx)->pProp : npcEntry->pImg;
    if (actProp)
    {
        nAction = 1; //TODO
        auto actionKey = nAction >= 2
                             ? pTemplate->aAct[nAction].bsAction
                             : ActionData::m_sNpcAction[nAction];

        auto prop = actProp->GetItemT<IWzProperty>(actionKey);

        IUnknown* enm;
        //TODO(game) might need to free
        Z_CHECK_HR(prop->Get__NewEnum(&enm));
        _x_com_ptr<IEnumVARIANT> enumVar((IEnumVARIANT*)enm);


        ZRef<NPCACTIONENTRY> actionEntry(ZAllocHelper(1));

        while (true)
        {
            Ztl_variant_t name;
            ULONG fetched = 0;
            if (enumVar->Next(1, &name, &fetched))
            {
                break;
            }

            auto sName = DetachBSTR(name);
            auto item = prop->Getitem(sName);
            auto unkItem = get_unknown(item);
            if (!unkItem)
                continue;
            _x_com_ptr<IWzCanvas> pCanvas(unkItem.op_arrow()); //TODO correct?


            if (!pCanvas)
                continue;

            auto canvasProp = pCanvas->Getproperty();
            auto delayStr = canvasProp->Getitem(StringPool::GetInstance().GetBSTR(0x1aa9));
            auto delay = get_int32(delayStr, 180);

            if (delay)
            {
                auto& frame = actionEntry->lpFrame.AddTail();
                frame = new CActionMan::NPCACTIONFRAMEENTRY();
                frame->nDelay = delay;
                frame->pCanvas = pCanvas;
            }
        }

        auto zigZag = GetIntProp(prop, 1183, 0);
        if (zigZag)
        {
            //TODO zigzag, add frames in reverse order as tail
        }


        actionEntry->tLastAccessed = timeGetTime();
        actionEntry->dwTemplateID = id;
        actionEntry->nAction = nAction;

        m_mNpcAction.Insert(key, actionEntry);

        lpFrame.AddTail(actionEntry->lpFrame);
    }

    //__sub_00020AE0(this, nullptr, pTemplate, nAction, lpFrame, nClientActionIdx);
}

ZRef<CActionMan::NPCIMGENTRY> CActionMan::GetNpcImgEntry(unsigned long dwTemplateID)
{
    /*auto& sp = StringPool::GetInstance();
    auto fmt = sp.GetStringW(0x3CF);
    auto npcKey = ZXString16::FromFmt(fmt.c_str(), dwTemplateID);


    ZRef<NPCIMGENTRY> npc;
    if (m_mNpcImgEntry.GetAt(dwTemplateID, &npc))
    {
        return npc;
    }



    npc = new NPCIMGENTRY();
    auto npcProp = get_rm()->GetObjectT<IWzProperty>(reinterpret_cast<const wchar_t*>(npcKey.c_str()));
    auto prop = npcProp->GetItemT<IWzProperty>(sp.GetBSTR(981));
    //auto entryProp = prop->GetItemT<>()


    return {};*/
    ZRef<CActionMan::NPCIMGENTRY> ret;
    return *__sub_0001A840(this, nullptr, &ret, dwTemplateID);
}

void CActionMan::LoadPetAction(CPetTemplate* arg0, long arg1, long arg2,
                               ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>& arg3)
{
    __sub_000213F0(this, nullptr, arg0, arg1, arg2, arg3);
}

ZRef<CActionMan::PETIMGENTRY> CActionMan::GetPetImgEntry(unsigned long dwTemplateID)
{
    ZRef<CActionMan::PETIMGENTRY> ret;
    return *__sub_0001B0D0(this, nullptr, &ret, dwTemplateID);
}

void CActionMan::LoadEmployeeAction(CEmployeeTemplate* pTemplate, long nAction,
                                    ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>& lpFrame)
{
    __sub_00022940(this, nullptr, pTemplate, nAction, lpFrame);
}

ZRef<CActionMan::EMPLOYEEIMGENTRY> CActionMan::GetEmployeeImgEntry(unsigned long dwTemplateID)
{
    ZRef<CActionMan::EMPLOYEEIMGENTRY> ret;
    return *__sub_0001B490(this, nullptr, &ret, dwTemplateID);
}

void CActionMan::LoadSummonedAction(long nSkillID, long nSLV, long nAction,
                                    ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>& lpFrame)
{
    //__sub_00023100(this, nullptr, nSkillID, nSLV, nAction, lpFrame);
    ActionKey actKey(nSkillID, nSLV, nAction);
    ZRef<SUMMONEDACTIONENTRY> entry;
    if (m_mSummonedAction.GetAt(actKey, &entry))
    {
        lpFrame.RemoveAll();
        lpFrame.AddTail(entry->lpFrame);
        return;
    }

    entry = new SUMMONEDACTIONENTRY();
    entry->nSkillID = nSkillID;
    entry->nSLV = nSLV;
    entry->nAction = nAction;

    auto prop = GetSummonedProp(nSkillID, nSLV);
    auto actProp = prop->GetItemT<IWzProperty>(ActionData::m_saSummonedAction[nAction]);

    EnumVariantWrapper enm(actProp);
    for (Ztl_variant_t& v : enm)
    {
        auto sKey = v.GetStr();
        auto item = actProp->Getitem(sKey);
        auto unk = get_unknown(item);
        if (!unk)
            continue;

        _x_com_ptr<IWzCanvas> canvas(unk.op_arrow());


        ZRef<SUMMONEDACTIONFRAMEENTRY> frame(ZAllocHelper(1));
        frame->pCanvas = canvas;

        auto canvasProp = canvas->Getproperty();
        frame->tDelay = GetIntProp(canvasProp, 6825, 120);
        frame->a0 = GetIntProp(canvasProp, 6808, -1);
        frame->a1 = GetIntProp(canvasProp, 6809, -1);
        auto lt = canvasProp->GetItemT<IWzVector2D>(StringPool::GetInstance().GetBSTR(6846));
        auto rb = canvasProp->GetItemT<IWzVector2D>(StringPool::GetInstance().GetBSTR(6859));

        if (lt && rb)
        {
            frame->rcBody.Set(lt->Getx(), lt->Gety(), rb->Getx(), rb->Gety());
        }
        else
        {
            frame->rcBody.SetEmpty();
        }

        entry->lpFrame.AddTail(frame);
    }

    auto zigZag = GetIntProp(actProp, 1183, 0);
    entry->bZigZag = zigZag;
    //TODO(game) zigzagh

    entry->posList = (__POSITION*)m_lSummonedAction.Insert(entry);
    entry->posMap = (__POSITION*)m_mSummonedAction.Insert(actKey, entry);

    lpFrame.RemoveAll();
    lpFrame.AddTail(entry->lpFrame);
}

_x_com_ptr<IWzProperty> CActionMan::GetSummonedProp(long nSkillID, long nSLV)
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_0001B830(this, nullptr, &ret, nSkillID, nSLV);
}

void CActionMan::LoadShadowPartnerAction(long arg0, long arg1,
                                         ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>& arg2)
{
    __sub_00023CF0(this, nullptr, arg0, arg1, arg2);
}

_x_com_ptr<IWzProperty> CActionMan::GetShadowPartnerProp(long nSkillID)
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_0001BA60(this, nullptr, &ret, nSkillID);
}

void CActionMan::LoadDragonAction(long nJob, long nAction, ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>& lpFrame)
{
    __sub_000247C0(this, nullptr, nJob, nAction, lpFrame);
}

void CActionMan::CreateAfterimageLayer(Ztl_bstr_t sAfterimageUOL, long nAction, _x_com_ptr<IWzGr2DLayer> pLayer)
{
    __sub_00028A20(this, nullptr, CreateNakedParam(sAfterimageUOL), nAction, CreateNakedParam(pLayer));
}

void CActionMan::GetMeleeAttackRange(Ztl_bstr_t sAfterimageUOL, long nAction, tagRECT& rc)
{
    //__sub_00028D00(this, nullptr, CreateNakedParam(sAfterimageUOL), nAction, rc);
    if (nAction == 74)
    {
        SetRect(&rc, -88, -62, -18, -6);
    }
    else
    {
        //TODO fix this
        /*if (nAction == 85)
            nAction = 8;*/
        if (nAction == 57)
            nAction = 41;
        if (const auto img = GetWeaponAfterImage(sAfterimageUOL))
            rc = static_cast<tagRECT>(img->arcRange[nAction]);
        else
            SetRectEmpty(&rc);
    }
}

void CActionMan::SweepCache()
{
    __sub_00015F60(this, nullptr);
}

void CActionMan::MergeCharacterSprite(const AHECODES& b, ZArray<CActionFrame>& aFrame,
                                      ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>& apFE)
{
    __sub_000172F0(this, nullptr, b, aFrame, apFE);
}

void CActionMan::MergeTamingMobSprite(ZArray<CActionFrame>& aFrame,
                                      ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>& apFE)
{
    __sub_00017510(this, nullptr, aFrame, apFE);
}

CActionMan::MELEEATTACKAFTERIMAGE* CActionMan::GetWeaponAfterImage(Ztl_bstr_t arg0)
{
    return __sub_00028080(this, nullptr, CreateNakedParam(arg0));
    /*if (auto img = m_mAfterimage.GetAt(arg0, nullptr))
    {
        return img->op_arrow();
    }

    ZRef img(new MELEEATTACKAFTERIMAGE(), true);

    auto prop = get_rm()->GetObjectT<IWzProperty>(arg0);

    auto actIx = 0;
    for (auto& act : ActionData::m_saCharacterActions)
    {
        auto item = prop->Getitem(act.bsName);
        auto unk = get_unknown(item);
        if (!unk)
            continue;
        //TODO(game) simplify this
        _x_com_ptr<IWzProperty> actProp(unk.op_arrow());

        auto lt = actProp->GetItemT<IWzVector2D>(_GetBSTR(6846));
        auto rb = actProp->GetItemT<IWzVector2D>(_GetBSTR(6859));

        if (lt && rb)
        {
            img->arcRange[actIx].Set(lt->Getx(), lt->Gety(), rb->Getx(), rb->Gety());
        }
        else
        {
            img->arcRange[actIx].SetEmpty();
        }


        EnumVariantWrapper enm(actProp);
        for (Ztl_variant_t& cur: enm)
        {
            auto subProp = actProp->GetItemT<IWzProperty>(cur.GetStr());
            auto n = subProp->Getcount();
            auto& actCanvas = img->aapCanvas[actIx];
            actCanvas.Alloc(n);
        }


        auto n = prop->Getcount();
        auto& actCanvas = img->aapCanvas[actIx];
        actCanvas.Alloc(n);
        for (auto i = 0; i < n; ++i)
        {
            wchar_t key[32]{};
            _itow_s(i, key, 10);
            auto canvas = prop->GetItemT<IWzCanvas>(key);
            if (canvas)
                actCanvas[i] = canvas;
        }

        ++actIx;
    }

    m_mAfterimage.Insert(arg0, img);
    return img.op_arrow();*/
}

CActionMan& CActionMan::operator=(const CActionMan& arg0)
{
    return _op_assign_31(this, arg0);
}

CActionMan& CActionMan::_op_assign_31(CActionMan* pThis, const CActionMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CHARACTERIMGENTRY::~CHARACTERIMGENTRY()
{
    //_dtor_0();
}

void CActionMan::CHARACTERIMGENTRY::_dtor_0()
{
    this->~CHARACTERIMGENTRY();
    // return __sub_00017230(this, nullptr);
}

CActionMan::CHARACTERIMGENTRY::CHARACTERIMGENTRY(const CActionMan::CHARACTERIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::CHARACTERIMGENTRY::_ctor_1(const CActionMan::CHARACTERIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CHARACTERIMGENTRY::CHARACTERIMGENTRY()
{
}

void CActionMan::CHARACTERIMGENTRY::_ctor_0()
{
    new(this) CHARACTERIMGENTRY();
}

CActionMan::CHARACTERIMGENTRY& CActionMan::CHARACTERIMGENTRY::operator=(const CActionMan::CHARACTERIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::CHARACTERIMGENTRY& CActionMan::CHARACTERIMGENTRY::_op_assign_3(
    CActionMan::CHARACTERIMGENTRY* pThis, const CActionMan::CHARACTERIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CHARACTERACTIONFRAMEENTRY::~CHARACTERACTIONFRAMEENTRY()
{
}

void CActionMan::CHARACTERACTIONFRAMEENTRY::_dtor_0()
{
    this->~CHARACTERACTIONFRAMEENTRY();
}

CActionMan::CHARACTERACTIONFRAMEENTRY::CHARACTERACTIONFRAMEENTRY(const CActionMan::CHARACTERACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::CHARACTERACTIONFRAMEENTRY::_ctor_1(const CActionMan::CHARACTERACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::CHARACTERACTIONFRAMEENTRY::CHARACTERACTIONFRAMEENTRY()
{
}

void CActionMan::CHARACTERACTIONFRAMEENTRY::_ctor_0()
{
    new(this) CHARACTERACTIONFRAMEENTRY();
}

CActionMan::CHARACTERACTIONFRAMEENTRY& CActionMan::CHARACTERACTIONFRAMEENTRY::operator=(
    const CActionMan::CHARACTERACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::CHARACTERACTIONFRAMEENTRY& CActionMan::CHARACTERACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::CHARACTERACTIONFRAMEENTRY* pThis, const CActionMan::CHARACTERACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY::~TAMINGMOBACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::TAMINGMOBACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY::TAMINGMOBACTIONFRAMEENTRY(const CActionMan::TAMINGMOBACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::TAMINGMOBACTIONFRAMEENTRY::_ctor_1(const CActionMan::TAMINGMOBACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY::TAMINGMOBACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::TAMINGMOBACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY& CActionMan::TAMINGMOBACTIONFRAMEENTRY::operator=(
    const CActionMan::TAMINGMOBACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::TAMINGMOBACTIONFRAMEENTRY& CActionMan::TAMINGMOBACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::TAMINGMOBACTIONFRAMEENTRY* pThis, const CActionMan::TAMINGMOBACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MELEEATTACKAFTERIMAGE::~MELEEATTACKAFTERIMAGE()
{
}

void CActionMan::MELEEATTACKAFTERIMAGE::_dtor_0()
{
    this->~MELEEATTACKAFTERIMAGE();
}

CActionMan::MELEEATTACKAFTERIMAGE::MELEEATTACKAFTERIMAGE(const CActionMan::MELEEATTACKAFTERIMAGE& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MELEEATTACKAFTERIMAGE::_ctor_1(const CActionMan::MELEEATTACKAFTERIMAGE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MELEEATTACKAFTERIMAGE::MELEEATTACKAFTERIMAGE()
{
    aapCanvas.Alloc(0x111);
    arcRange.Alloc(0x111);
}

void CActionMan::MELEEATTACKAFTERIMAGE::_ctor_0()
{
    new(this) MELEEATTACKAFTERIMAGE();
}

CActionMan::MELEEATTACKAFTERIMAGE& CActionMan::MELEEATTACKAFTERIMAGE::operator=(
    const CActionMan::MELEEATTACKAFTERIMAGE& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MELEEATTACKAFTERIMAGE& CActionMan::MELEEATTACKAFTERIMAGE::_op_assign_3(
    CActionMan::MELEEATTACKAFTERIMAGE* pThis, const CActionMan::MELEEATTACKAFTERIMAGE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::FACELOOKENTRY::~FACELOOKENTRY()
{
}

void CActionMan::FACELOOKENTRY::_dtor_0()
{
    //return __sub_000135E0(this, nullptr);
}

CActionMan::FACELOOKENTRY::FACELOOKENTRY(const CActionMan::FACELOOKENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::FACELOOKENTRY::_ctor_1(const CActionMan::FACELOOKENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::FACELOOKENTRY::FACELOOKENTRY()
{
}

void CActionMan::FACELOOKENTRY::_ctor_0()
{
    //return __sub_000135B0(this, nullptr);
    new(this) FACELOOKENTRY();
}

CActionMan::FACELOOKENTRY& CActionMan::FACELOOKENTRY::operator=(const CActionMan::FACELOOKENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::FACELOOKENTRY& CActionMan::FACELOOKENTRY::_op_assign_3(CActionMan::FACELOOKENTRY* pThis,
                                                                   const CActionMan::FACELOOKENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHIMGENTRY::~MORPHIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MORPHIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHIMGENTRY::MORPHIMGENTRY(const CActionMan::MORPHIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MORPHIMGENTRY::_ctor_1(const CActionMan::MORPHIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHIMGENTRY::MORPHIMGENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MORPHIMGENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHIMGENTRY& CActionMan::MORPHIMGENTRY::operator=(const CActionMan::MORPHIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MORPHIMGENTRY& CActionMan::MORPHIMGENTRY::_op_assign_3(CActionMan::MORPHIMGENTRY* pThis,
                                                                   const CActionMan::MORPHIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONFRAMEENTRY::~MORPHACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MORPHACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONFRAMEENTRY::MORPHACTIONFRAMEENTRY(const CActionMan::MORPHACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MORPHACTIONFRAMEENTRY::_ctor_1(const CActionMan::MORPHACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONFRAMEENTRY::MORPHACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MORPHACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONFRAMEENTRY& CActionMan::MORPHACTIONFRAMEENTRY::operator=(
    const CActionMan::MORPHACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MORPHACTIONFRAMEENTRY& CActionMan::MORPHACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::MORPHACTIONFRAMEENTRY* pThis, const CActionMan::MORPHACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONENTRY::~MORPHACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MORPHACTIONENTRY::_dtor_0()
{
    return __sub_000172A0(this, nullptr);
}

CActionMan::MORPHACTIONENTRY::MORPHACTIONENTRY(const CActionMan::MORPHACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MORPHACTIONENTRY::_ctor_1(const CActionMan::MORPHACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONENTRY::MORPHACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MORPHACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MORPHACTIONENTRY& CActionMan::MORPHACTIONENTRY::operator=(const CActionMan::MORPHACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MORPHACTIONENTRY& CActionMan::MORPHACTIONENTRY::_op_assign_3(
    CActionMan::MORPHACTIONENTRY* pThis, const CActionMan::MORPHACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBIMGENTRY::~MOBIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MOBIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBIMGENTRY::MOBIMGENTRY(const CActionMan::MOBIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MOBIMGENTRY::_ctor_1(const CActionMan::MOBIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBIMGENTRY::MOBIMGENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::MOBIMGENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBIMGENTRY& CActionMan::MOBIMGENTRY::operator=(const CActionMan::MOBIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MOBIMGENTRY& CActionMan::MOBIMGENTRY::_op_assign_3(CActionMan::MOBIMGENTRY* pThis,
                                                               const CActionMan::MOBIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONFRAMEENTRY::~MOBACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::MOBACTIONFRAMEENTRY::_dtor_0()
{
    return __sub_000136A0(this, nullptr);
}

CActionMan::MOBACTIONFRAMEENTRY::MOBACTIONFRAMEENTRY(const CActionMan::MOBACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MOBACTIONFRAMEENTRY::_ctor_1(const CActionMan::MOBACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONFRAMEENTRY::MOBACTIONFRAMEENTRY()
{
}

void CActionMan::MOBACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONFRAMEENTRY& CActionMan::MOBACTIONFRAMEENTRY::operator=(const CActionMan::MOBACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MOBACTIONFRAMEENTRY& CActionMan::MOBACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::MOBACTIONFRAMEENTRY* pThis, const CActionMan::MOBACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONENTRY::~MOBACTIONENTRY()
{
}

void CActionMan::MOBACTIONENTRY::_dtor_0()
{
    return __sub_00013640(this, nullptr);
}

CActionMan::MOBACTIONENTRY::MOBACTIONENTRY(const CActionMan::MOBACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::MOBACTIONENTRY::_ctor_1(const CActionMan::MOBACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONENTRY::MOBACTIONENTRY()
{
}

void CActionMan::MOBACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::MOBACTIONENTRY& CActionMan::MOBACTIONENTRY::operator=(const CActionMan::MOBACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::MOBACTIONENTRY& CActionMan::MOBACTIONENTRY::_op_assign_3(CActionMan::MOBACTIONENTRY* pThis,
                                                                     const CActionMan::MOBACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCIMGENTRY::~NPCIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::NPCIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCIMGENTRY::NPCIMGENTRY(const CActionMan::NPCIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::NPCIMGENTRY::_ctor_1(const CActionMan::NPCIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCIMGENTRY::NPCIMGENTRY()
{
}

void CActionMan::NPCIMGENTRY::_ctor_0()
{
    new(this) NPCIMGENTRY();
}

CActionMan::NPCIMGENTRY& CActionMan::NPCIMGENTRY::operator=(const CActionMan::NPCIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::NPCIMGENTRY& CActionMan::NPCIMGENTRY::_op_assign_3(CActionMan::NPCIMGENTRY* pThis,
                                                               const CActionMan::NPCIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCACTIONFRAMEENTRY::~NPCACTIONFRAMEENTRY()
{
}

void CActionMan::NPCACTIONFRAMEENTRY::_dtor_0()
{
    this->~NPCACTIONFRAMEENTRY();
}

CActionMan::NPCACTIONFRAMEENTRY::NPCACTIONFRAMEENTRY(const CActionMan::NPCACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::NPCACTIONFRAMEENTRY::_ctor_1(const CActionMan::NPCACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCACTIONFRAMEENTRY::NPCACTIONFRAMEENTRY()
{
}

void CActionMan::NPCACTIONFRAMEENTRY::_ctor_0()
{
    new(this) NPCACTIONFRAMEENTRY();
}

CActionMan::NPCACTIONFRAMEENTRY& CActionMan::NPCACTIONFRAMEENTRY::operator=(const CActionMan::NPCACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::NPCACTIONFRAMEENTRY& CActionMan::NPCACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::NPCACTIONFRAMEENTRY* pThis, const CActionMan::NPCACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCACTIONENTRY::~NPCACTIONENTRY()
{
}

void CActionMan::NPCACTIONENTRY::_dtor_0()
{
    this->~NPCACTIONENTRY();
}

CActionMan::NPCACTIONENTRY::NPCACTIONENTRY(const CActionMan::NPCACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::NPCACTIONENTRY::_ctor_1(const CActionMan::NPCACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::NPCACTIONENTRY::NPCACTIONENTRY()
{
}

void CActionMan::NPCACTIONENTRY::_ctor_0()
{
    new(this) NPCACTIONENTRY();
}

CActionMan::NPCACTIONENTRY& CActionMan::NPCACTIONENTRY::operator=(const CActionMan::NPCACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::NPCACTIONENTRY& CActionMan::NPCACTIONENTRY::_op_assign_3(CActionMan::NPCACTIONENTRY* pThis,
                                                                     const CActionMan::NPCACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETIMGENTRY::~PETIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::PETIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETIMGENTRY::PETIMGENTRY(const CActionMan::PETIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::PETIMGENTRY::_ctor_1(const CActionMan::PETIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETIMGENTRY::PETIMGENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::PETIMGENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETIMGENTRY& CActionMan::PETIMGENTRY::operator=(const CActionMan::PETIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::PETIMGENTRY& CActionMan::PETIMGENTRY::_op_assign_3(CActionMan::PETIMGENTRY* pThis,
                                                               const CActionMan::PETIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONFRAMEENTRY::~PETACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::PETACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONFRAMEENTRY::PETACTIONFRAMEENTRY(const CActionMan::PETACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::PETACTIONFRAMEENTRY::_ctor_1(const CActionMan::PETACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONFRAMEENTRY::PETACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::PETACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONFRAMEENTRY& CActionMan::PETACTIONFRAMEENTRY::operator=(const CActionMan::PETACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::PETACTIONFRAMEENTRY& CActionMan::PETACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::PETACTIONFRAMEENTRY* pThis, const CActionMan::PETACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONENTRY::~PETACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::PETACTIONENTRY::_dtor_0()
{
    return __sub_00013770(this, nullptr);
}

CActionMan::PETACTIONENTRY::PETACTIONENTRY(const CActionMan::PETACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::PETACTIONENTRY::_ctor_1(const CActionMan::PETACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONENTRY::PETACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::PETACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::PETACTIONENTRY& CActionMan::PETACTIONENTRY::operator=(const CActionMan::PETACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::PETACTIONENTRY& CActionMan::PETACTIONENTRY::_op_assign_3(CActionMan::PETACTIONENTRY* pThis,
                                                                     const CActionMan::PETACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEIMGENTRY::~EMPLOYEEIMGENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::EMPLOYEEIMGENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEIMGENTRY::EMPLOYEEIMGENTRY(const CActionMan::EMPLOYEEIMGENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::EMPLOYEEIMGENTRY::_ctor_1(const CActionMan::EMPLOYEEIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEIMGENTRY::EMPLOYEEIMGENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::EMPLOYEEIMGENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEIMGENTRY& CActionMan::EMPLOYEEIMGENTRY::operator=(const CActionMan::EMPLOYEEIMGENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::EMPLOYEEIMGENTRY& CActionMan::EMPLOYEEIMGENTRY::_op_assign_3(
    CActionMan::EMPLOYEEIMGENTRY* pThis, const CActionMan::EMPLOYEEIMGENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY::~EMPLOYEEACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::EMPLOYEEACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY::EMPLOYEEACTIONFRAMEENTRY(const CActionMan::EMPLOYEEACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::EMPLOYEEACTIONFRAMEENTRY::_ctor_1(const CActionMan::EMPLOYEEACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY::EMPLOYEEACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::EMPLOYEEACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY& CActionMan::EMPLOYEEACTIONFRAMEENTRY::operator=(
    const CActionMan::EMPLOYEEACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::EMPLOYEEACTIONFRAMEENTRY& CActionMan::EMPLOYEEACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::EMPLOYEEACTIONFRAMEENTRY* pThis, const CActionMan::EMPLOYEEACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONENTRY::~EMPLOYEEACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::EMPLOYEEACTIONENTRY::_dtor_0()
{
    return __sub_000137D0(this, nullptr);
}

CActionMan::EMPLOYEEACTIONENTRY::EMPLOYEEACTIONENTRY(const CActionMan::EMPLOYEEACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::EMPLOYEEACTIONENTRY::_ctor_1(const CActionMan::EMPLOYEEACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONENTRY::EMPLOYEEACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::EMPLOYEEACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::EMPLOYEEACTIONENTRY& CActionMan::EMPLOYEEACTIONENTRY::operator=(const CActionMan::EMPLOYEEACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::EMPLOYEEACTIONENTRY& CActionMan::EMPLOYEEACTIONENTRY::_op_assign_3(
    CActionMan::EMPLOYEEACTIONENTRY* pThis, const CActionMan::EMPLOYEEACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONFRAMEENTRY::~SUMMONEDACTIONFRAMEENTRY()
{
}

void CActionMan::SUMMONEDACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONFRAMEENTRY::SUMMONEDACTIONFRAMEENTRY(const CActionMan::SUMMONEDACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::SUMMONEDACTIONFRAMEENTRY::_ctor_1(const CActionMan::SUMMONEDACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONFRAMEENTRY::SUMMONEDACTIONFRAMEENTRY()
{
}

void CActionMan::SUMMONEDACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONFRAMEENTRY& CActionMan::SUMMONEDACTIONFRAMEENTRY::operator=(
    const CActionMan::SUMMONEDACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::SUMMONEDACTIONFRAMEENTRY& CActionMan::SUMMONEDACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::SUMMONEDACTIONFRAMEENTRY* pThis, const CActionMan::SUMMONEDACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONENTRY::~SUMMONEDACTIONENTRY()
{
}

void CActionMan::SUMMONEDACTIONENTRY::_dtor_0()
{
    return __sub_00013830(this, nullptr);
}

CActionMan::SUMMONEDACTIONENTRY::SUMMONEDACTIONENTRY(const CActionMan::SUMMONEDACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::SUMMONEDACTIONENTRY::_ctor_1(const CActionMan::SUMMONEDACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONENTRY::SUMMONEDACTIONENTRY()
{
}

void CActionMan::SUMMONEDACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SUMMONEDACTIONENTRY& CActionMan::SUMMONEDACTIONENTRY::operator=(const CActionMan::SUMMONEDACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::SUMMONEDACTIONENTRY& CActionMan::SUMMONEDACTIONENTRY::_op_assign_3(
    CActionMan::SUMMONEDACTIONENTRY* pThis, const CActionMan::SUMMONEDACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::~SHADOWPARTNERACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::SHADOWPARTNERACTIONFRAMEENTRY(
    const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::_ctor_1(const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::SHADOWPARTNERACTIONFRAMEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::operator=(
    const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::_op_assign_3(
    CActionMan::SHADOWPARTNERACTIONFRAMEENTRY* pThis, const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONENTRY::~SHADOWPARTNERACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::SHADOWPARTNERACTIONENTRY::_dtor_0()
{
    return __sub_00013890(this, nullptr);
}

CActionMan::SHADOWPARTNERACTIONENTRY::SHADOWPARTNERACTIONENTRY(const CActionMan::SHADOWPARTNERACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::SHADOWPARTNERACTIONENTRY::_ctor_1(const CActionMan::SHADOWPARTNERACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONENTRY::SHADOWPARTNERACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::SHADOWPARTNERACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::SHADOWPARTNERACTIONENTRY& CActionMan::SHADOWPARTNERACTIONENTRY::operator=(
    const CActionMan::SHADOWPARTNERACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::SHADOWPARTNERACTIONENTRY& CActionMan::SHADOWPARTNERACTIONENTRY::_op_assign_3(
    CActionMan::SHADOWPARTNERACTIONENTRY* pThis, const CActionMan::SHADOWPARTNERACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::DRAGONACTIONENTRY::~DRAGONACTIONENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CActionMan::DRAGONACTIONENTRY::_dtor_0()
{
    return __sub_000138F0(this, nullptr);
}

CActionMan::DRAGONACTIONENTRY::DRAGONACTIONENTRY(const CActionMan::DRAGONACTIONENTRY& arg0)
{
    _ctor_1(arg0);
}

void CActionMan::DRAGONACTIONENTRY::_ctor_1(const CActionMan::DRAGONACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::DRAGONACTIONENTRY::DRAGONACTIONENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CActionMan::DRAGONACTIONENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CActionMan::DRAGONACTIONENTRY& CActionMan::DRAGONACTIONENTRY::operator=(const CActionMan::DRAGONACTIONENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CActionMan::DRAGONACTIONENTRY& CActionMan::DRAGONACTIONENTRY::_op_assign_3(
    CActionMan::DRAGONACTIONENTRY* pThis, const CActionMan::DRAGONACTIONENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

/*_x_com_ptr<IUnknown> __cdecl get_unknown(Ztl_variant_t &v)
{
	return __sub_000176E0(v);
}*/
/*long __cdecl get_int32(Ztl_variant_t &v, long nDefault)
{
	return __sub_00006830(v, nDefault);
}*/
tagRECT&__cdecl operator___146404(tagRECT& rcDst, const SECRECT& rcSrc)
{
    return __sub_00007820(rcDst, rcSrc);
}

char*__cdecl ZStrUtil___Conv(const wchar_t* w, char* m, int32_t nChars)
{
    return __sub_00006250(w, m, nChars);
}

int32_t __cdecl operator___146393(const none& b1, const none& b2)
{
    return __sub_00006300(b1, b2);
}

uint32_t __fastcall _ZtlSecureTear_long_(long arg0, long* arg1)
{
    return __sub_0000B5C0(arg0, arg1);
}

void __cdecl load_tamingmob_action(long arg0, long arg1, long arg2, ZArray<CActionFrame>& arg3)
{
    return __sub_00026F80(arg0, arg1, arg2, arg3);
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzProperty___GUID_986515d9_0a0b_4929_8b4f_718682177b92___(
    const wchar_t* sUOL, _x_com_ptr<IWzProperty>& pObj, IUnknown* pUnkOuter)
{
    return __sub_0000B040(sUOL, pObj, pUnkOuter);
}

void __cdecl operatordelete_146388(void* __formal, void* ___formal)
{
    return __sub_00006200(__formal, __formal);
}

void __cdecl load_item_action(long arg0, long arg1, long arg2, ZArray<CActionFrame>& arg3, long arg4, long arg5,
                              int32_t arg6)
{
    return __sub_00025770(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

int32_t __cdecl ZStrUtil___ConvReqSize(const wchar_t* w, char* __formal, int32_t nChars)
{
    return __sub_00006230(w, __formal, nChars);
}

long __cdecl _ZtlSecureFuse_long_(const long* at, uint32_t uCS)
{
    return __sub_00007520(at, uCS);
}

void __cdecl action_mapping_for_ghost(long& nAction)
{
    switch (nAction)
    {
    case 124:
        nAction = 0;
        break;
    case 125:
        nAction = 2;
        break;
    case 126:
        nAction = 44;
        break;
    case 127:
        nAction = 41;
        break;
    case 128:
        nAction = 43;
        break;
    case 129:
        nAction = 45;
        break;
    case 130:
        nAction = 46;
        break;
    case 131:
        nAction = 48;
        break;
    default:
        break;
    }
    // return __sub_00006500(nAction);
}
