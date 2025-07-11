// UIFamily.cpp
#include "UIFamily.hpp"

static ZMap<unsigned long, ZRef<CUIFamilyChart::FamilyItem>, unsigned long> FAKE_ZMapUnsignedLongZRefCUIFamilyChartFamilyItemUnsignedLong{};

#include "UIFamily_regen.ipp"

CUIFamilyChart::~CUIFamilyChart()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIFamilyChart::_dtor_0()
{
	return __sub_003B1A60(this, nullptr);
}
CUIFamilyChart::CUIFamilyChart(const CUIFamilyChart &arg0)
{
	_ctor_1( arg0);
}
void CUIFamilyChart::_ctor_1( const CUIFamilyChart &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIFamilyChart::CUIFamilyChart()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIFamilyChart::_ctor_0()
{
	return __sub_003B3670(this, nullptr);
}
void CUIFamilyChart::OnCreate(void *pData)
{
	__sub_003B37C0(this, nullptr, pData);
}
void CUIFamilyChart::OnDestroy()
{
	__sub_003B0E40(this, nullptr);
}
void CUIFamilyChart::Draw(const tagRECT *pRect)
{
	__sub_003B6760(this, nullptr, pRect);
}
void CUIFamilyChart::OnButtonClicked(uint32_t nId)
{
	__sub_003B5450(this, nullptr, nId);
}
int32_t CUIFamilyChart::OnMouseMove(long rx, long ry)
{
	return __sub_003B7070(this, nullptr, rx, ry);
}
void CUIFamilyChart::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
	__sub_003B5480(this, nullptr, msg, wParam, rx, ry);
}
void CUIFamilyChart::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
	__sub_003B21D0(this, nullptr, nId, param1, param2);
}
int32_t CUIFamilyChart::IsMine()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIFamilyChart::DecodeLocalChart(CInPacket &iPacket)
{
	__sub_003B55A0(this, nullptr, iPacket);
}
void CUIFamilyChart::SetLoginOrLogout(ZXString<char> strCharacterName, int32_t bLogin)
{
	__sub_003B2080(this, nullptr, CreateNakedParam(strCharacterName), bLogin);
}
long CUIFamilyChart::_FindItemByPoint(long rx, long ry)
{
	return __sub_003B0C10(this, nullptr, rx, ry);
}
void CUIFamilyChart::_DrawChartItem(long nIndex)
{
	__sub_003B5EF0(this, nullptr, nIndex);
}
int32_t CUIFamilyChart::_IsChildNode(long nIndex)
{
	return __sub_003B0C90(this, nullptr, nIndex);
}
void CUIFamilyChart::_UnregisterCharacter()
{
	__sub_003B4040(this, nullptr);
}
ZXString<char> CUIFamilyChart::_GetMineToolTip()
{
	return __sub_003B6C00(this, nullptr);
}
ZXString<char> CUIFamilyChart::_GetOtherToolTip(long nIndex)
{
	ZXString<char> ret;
	return *__sub_003B4610(this, nullptr, &ret, nIndex);
}
CUIFamilyChart &CUIFamilyChart::operator=(const CUIFamilyChart &arg0)
{
	return _op_assign_22(this, arg0);
}
CUIFamilyChart &CUIFamilyChart::_op_assign_22(CUIFamilyChart *pThis, const CUIFamilyChart &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIFamilyChart::FamilyItem::~FamilyItem()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIFamilyChart::FamilyItem::_dtor_0()
{
	return __sub_003B39B0(this, nullptr);
}
CUIFamilyChart::FamilyItem::FamilyItem(const CUIFamilyChart::FamilyItem &arg0)
{
	_ctor_1( arg0);
}
void CUIFamilyChart::FamilyItem::_ctor_1( const CUIFamilyChart::FamilyItem &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIFamilyChart::FamilyItem::FamilyItem()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIFamilyChart::FamilyItem::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIFamilyChart::FamilyItem &CUIFamilyChart::FamilyItem::operator=(const CUIFamilyChart::FamilyItem &arg0)
{
	return _op_assign_3(this, arg0);
}
CUIFamilyChart::FamilyItem &CUIFamilyChart::FamilyItem::_op_assign_3(CUIFamilyChart::FamilyItem *pThis, const CUIFamilyChart::FamilyItem &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIFamily::~CUIFamily()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIFamily::_dtor_0()
{
	return __sub_003B1910(this, nullptr);
}
CUIFamily::CUIFamily(const CUIFamily &arg0) : m_FamilyInfo(arg0.m_FamilyInfo), m_apPrivilege(arg0.m_apPrivilege)
{
}
void CUIFamily::_ctor_1( const CUIFamily &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIFamily::CUIFamily(ZArray<ZRef<PrivilegeItem>> &apPrivilege, FamilyInfo &familyInfo) : m_FamilyInfo(familyInfo), m_apPrivilege(apPrivilege)
{
	_ctor_0( apPrivilege, familyInfo);
}
void CUIFamily::_ctor_0( ZArray<ZRef<PrivilegeItem>> &apPrivilege, FamilyInfo &familyInfo)
{
	return __sub_003B2720(this, nullptr, apPrivilege, familyInfo);
}
void CUIFamily::OnCreate(void *pData)
{
	__sub_003B2830(this, nullptr, pData);
}
void CUIFamily::OnDestroy()
{
	__sub_003B0E20(this, nullptr);
}
void CUIFamily::Draw(const tagRECT *pRect)
{
	__sub_003B4B50(this, nullptr, pRect);
}
int32_t CUIFamily::OnMouseMove(long rx, long ry)
{
	return __sub_003B2B40(this, nullptr, rx, ry);
}
void CUIFamily::OnButtonClicked(uint32_t nId)
{
	__sub_003B2D80(this, nullptr, nId);
}
void CUIFamily::Update()
{
	__sub_003B3060(this, nullptr);
}
void CUIFamily::ResetFamilyInfo()
{
	__sub_003B0D70(this, nullptr);
}
void CUIFamily::_MakePreceptLayer()
{
	__sub_003B1270(this, nullptr);
}
void __cdecl _anon_CopyChild_(ZRef<CUIFamilyChart::FamilyItem> *target, ZArray<ZRef<CUIFamilyChart::FamilyItem>> &src, long nCount)
{
	return __sub_003B1BD0(target, src, nCount);
}
void __cdecl _anon_UnregisterChild_(ZRef<CUIFamilyChart::FamilyItem> pMine, ZRef<CUIFamilyChart::FamilyItem> pChild)
{
	return __sub_003B3A60(CreateNakedParam(pMine), CreateNakedParam(pChild));
}
void __cdecl _anon_DrawTextAlign_(_x_com_ptr<IWzCanvas> pCanvas, _x_com_ptr<IWzFont> pFont, long x, long y, long width, const char *str, _anon_Align align)
{
	return __sub_003B23C0(CreateNakedParam(pCanvas), CreateNakedParam(pFont), x, y, width, str, align);
}

void
_anon_UnregisterParent_(ZRef<CUIFamilyChart::FamilyItem> arg0, ZRef<CUIFamilyChart::FamilyItem> arg2) {
    //0x7b3d30 TODO
}

void _anon_RegisterJunior_() {
    // 0x7b2600 TODO
}
