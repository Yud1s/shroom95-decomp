// UtilDlg.cpp
#include "UtilDlg.hpp"

static ZRef<CUtilDlg> FAKE_ZRef_CUtilDlg{};
static ZList<CUtilDlg *> FAKE_ZList_CUtilDlg{};

#include "UtilDlg_regen.ipp"

ZList<CUtilDlg *> CUtilDlg::ms_lDialog;

CUICancelCharacterCouponRequests::~CUICancelCharacterCouponRequests()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUICancelCharacterCouponRequests::_dtor_0()
{
	return __sub_0056A400(this, nullptr);
}
CUICancelCharacterCouponRequests::CUICancelCharacterCouponRequests(const CUICancelCharacterCouponRequests &arg0)
{
	_ctor_1( arg0);
}
void CUICancelCharacterCouponRequests::_ctor_1( const CUICancelCharacterCouponRequests &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICancelCharacterCouponRequests::CUICancelCharacterCouponRequests(long nType)
{
	_ctor_0( nType);
}
void CUICancelCharacterCouponRequests::_ctor_0( long nType)
{
	return __sub_0056A2D0(this, nullptr, nType);
}
void CUICancelCharacterCouponRequests::OnCreate(void *pData)
{
	__sub_00570210(this, nullptr, pData);
}
void CUICancelCharacterCouponRequests::Draw(const tagRECT *pRect)
{
	__sub_00568B00(this, nullptr, pRect);
}
void CUICancelCharacterCouponRequests::OnButtonClicked(uint32_t nId)
{
	__sub_00568B50(this, nullptr, nId);
}
void CUICancelCharacterCouponRequests::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_00568B10(this, nullptr, wParam, lParam);
}
CUICancelCharacterCouponRequests &CUICancelCharacterCouponRequests::operator=(const CUICancelCharacterCouponRequests &arg0)
{
	return _op_assign_7(this, arg0);
}
CUICancelCharacterCouponRequests &CUICancelCharacterCouponRequests::_op_assign_7(CUICancelCharacterCouponRequests *pThis, const CUICancelCharacterCouponRequests &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUtilDlg::~CUtilDlg()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUtilDlg::_dtor_0()
{
	return __sub_005746D0(this, nullptr);
}
CUtilDlg::CUtilDlg(const CUtilDlg &arg0)
{
	_ctor_1( arg0);
}
void CUtilDlg::_ctor_1( const CUtilDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUtilDlg::CUtilDlg()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUtilDlg::_ctor_0()
{
	return __sub_003B9B50(this, nullptr);
}
int32_t __cdecl CUtilDlg::Notice(ZXString<char> sMsg, const wchar_t *sSndName, ZRef<CDialog> *ppDialog, int32_t bAutoSeparated, int32_t bIsTightLine)
{
	return __sub_00577220(CreateNakedParam(sMsg), sSndName, ppDialog, bAutoSeparated, bIsTightLine);
}
int32_t __cdecl CUtilDlg::NoticeOnTop(ZXString<char> arg0, const wchar_t *arg1, ZRef<CDialog> *arg2, int32_t arg3, int32_t arg4)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CUtilDlg::YesNo(ZXString<char> sMsg, int32_t bCenter, int32_t bFixedW)
{
	return __sub_005776B0(CreateNakedParam(sMsg), bCenter, bFixedW);
}
int32_t __cdecl CUtilDlg::YesNo(ZXString<char> sMsg, const wchar_t *sSndName, ZRef<CDialog> *ppDialog, int32_t bAutoSeparated, int32_t bNoEnterInput)
{
	return __sub_005773B0(CreateNakedParam(sMsg), sSndName, ppDialog, bAutoSeparated, bNoEnterInput);
}
int32_t __cdecl CUtilDlg::YesNo2(ZXString<char> sMsg, const wchar_t *sSndName, ZRef<CDialog> *ppDialog, int32_t bAutoSeparated, int32_t bNoEnterInput)
{
	return __sub_00577530(CreateNakedParam(sMsg), sSndName, ppDialog, bAutoSeparated, bNoEnterInput);
}
void __cdecl CUtilDlg::ForcedRet()
{
	__sub_00569B10();
}
void CUtilDlg::PreCreateWnd(long l, long t, long w, long h, long z, int32_t bScreenCoord, void *pData)
{
	__sub_005696B0(this, nullptr, l, t, w, h, z, bScreenCoord, pData);
}
void CUtilDlg::OnCreate(void *pData)
{
	__sub_00574860(this, nullptr, pData);
}
void CUtilDlg::OnButtonClicked(uint32_t nId)
{
	__sub_003B9BF0(this, nullptr, nId);
}
void CUtilDlg::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_003B9C60(this, nullptr, wParam, lParam);
}
void CUtilDlg::Draw(const tagRECT *pRect)
{
	__sub_0056B6B0(this, nullptr, pRect);
}
void CUtilDlg::SetUtilDlg(long nUtilDlgType, ZXString<char> sMsg, const wchar_t *sSndName, int32_t bAutoSeparated, int32_t bNoEnterInput, int32_t bIsTightLine)
{
	__sub_0056B430(this, nullptr, nUtilDlgType, CreateNakedParam(sMsg), sSndName, bAutoSeparated, bNoEnterInput, bIsTightLine);
}
void CUtilDlg::SetUtilDlg(long nUtilDlgType, const wchar_t *sSndName, int32_t bNoEnterInput, int32_t bIsTightLine)
{
	__sub_0056B240(this, nullptr, nUtilDlgType, sSndName, bNoEnterInput, bIsTightLine);
}
void CUtilDlg::SetUtilDlg_Input(long nHorzMax, ZXString<char> sMsgDefault)
{
	__sub_0056B360(this, nullptr, nHorzMax, CreateNakedParam(sMsgDefault));
}
void CUtilDlg::SetUtilDlg_COMBOBOX(ZList<ZXString<char>> &lItems)
{
	__sub_0056B5F0(this, nullptr, lItems);
}
ZXString<char> CUtilDlg::GetInputResult()
{
	return __sub_003B8260(this, nullptr);
}
ZXString<char> CUtilDlg::GetComboBoxStr()
{
	return __sub_003B7F90(this, nullptr);
}
int32_t CUtilDlg::IsCheckBoxChecked()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUtilDlg::GetTextTileCount()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUtilDlg &CUtilDlg::operator=(const CUtilDlg &arg0)
{
	return _op_assign_22(this, arg0);
}
CUtilDlg &CUtilDlg::_op_assign_22(CUtilDlg *pThis, const CUtilDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIChannelShift::~CUIChannelShift()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIChannelShift::_dtor_0()
{
	return __sub_0056C050(this, nullptr);
}
CUIChannelShift::CUIChannelShift(const CUIChannelShift &arg0)
{
	_ctor_1( arg0);
}
void CUIChannelShift::_ctor_1( const CUIChannelShift &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIChannelShift::CUIChannelShift()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIChannelShift::_ctor_0()
{
	return __sub_0056BE90(this, nullptr);
}
void CUIChannelShift::OnCreate(void *pData)
{
	__sub_0056C160(this, nullptr, pData);
}
void CUIChannelShift::Draw(const tagRECT *arg0)
{
	__sub_0056CCB0(this, nullptr, arg0);
}
void CUIChannelShift::SetRet(long nRet)
{
	__sub_00569400(this, nullptr, nRet);
}
void CUIChannelShift::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
	__sub_00569380(this, nullptr, msg, wParam, rx, ry);
}
void CUIChannelShift::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_005687A0(this, nullptr, wParam, lParam);
}
int32_t CUIChannelShift::HitTest(long rx, long ry, CCtrlWnd **ppCtrl)
{
	return __sub_00568980(this, nullptr, rx, ry, ppCtrl);
}
long CUIChannelShift::GetResult()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
tagRECT CUIChannelShift::GetRectFromIdx(long idx)
{
	tagRECT rect;
	rect.left = ((idx % 5) * 70) + 11;
	rect.top = ((idx / 5) * 20) + 55;
	rect.right = ((idx % 5) * 70) + 79;
	rect.bottom = ((idx / 5) * 20) + 75;
	return rect;


	//return __sub_005689C0(this, nullptr, idx);
}
long CUIChannelShift::GetIdxFromPoint(long rx, long ry)
{
	return __sub_00568A10(this, nullptr, rx, ry);
}
CUIChannelShift &CUIChannelShift::operator=(const CUIChannelShift &arg0)
{
	return _op_assign_12(this, arg0);
}
CUIChannelShift &CUIChannelShift::_op_assign_12(CUIChannelShift *pThis, const CUIChannelShift &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICashItemGachapon::~CUICashItemGachapon()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUICashItemGachapon::_dtor_0()
{
	return __sub_0056A8D0(this, nullptr);
}
CUICashItemGachapon::CUICashItemGachapon(const CUICashItemGachapon &arg0)
{
	_ctor_1( arg0);
}
void CUICashItemGachapon::_ctor_1( const CUICashItemGachapon &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICashItemGachapon::CUICashItemGachapon(_LARGE_INTEGER liSN, CCashShop *pCashShop, long nItemID)
{
	_ctor_0( liSN, pCashShop, nItemID);
}
void CUICashItemGachapon::_ctor_0( _LARGE_INTEGER liSN, CCashShop *pCashShop, long nItemID)
{
	return __sub_0056A6C0(this, nullptr, liSN, pCashShop, nItemID);
}
void CUICashItemGachapon::OnCreate(void *pData)
{
	__sub_00570860(this, nullptr, pData);
}
void CUICashItemGachapon::OnCashItemGachaponResult(CInPacket &iPacket)
{
	__sub_00569F70(this, nullptr, iPacket);
}
void CUICashItemGachapon::ShowResult()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUICashItemGachapon::Draw(const tagRECT *pRect)
{
	__sub_00569B40(this, nullptr, pRect);
}
void CUICashItemGachapon::OnButtonClicked(uint32_t nId)
{
	__sub_0056AA40(this, nullptr, nId);
}
void CUICashItemGachapon::Update()
{
	__sub_00579C80(this, nullptr);
}
void CUICashItemGachapon::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_00568E60(this, nullptr, wParam, lParam);
}
void CUICashItemGachapon::ClearToolTip()
{
	__sub_0056A870(this, nullptr);
}
int32_t CUICashItemGachapon::PutItem(GW_ItemSlotBase *arg0, long arg1, long arg2)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICashItemGachapon &CUICashItemGachapon::operator=(const CUICashItemGachapon &arg0)
{
	return _op_assign_15(this, arg0);
}
CUICashItemGachapon &CUICashItemGachapon::_op_assign_15(CUICashItemGachapon *pThis, const CUICashItemGachapon &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIBlockUser::~CUIBlockUser()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIBlockUser::_dtor_0()
{
	return __sub_0056F190(this, nullptr);
}
CUIBlockUser::CUIBlockUser(const CUIBlockUser &arg0)
{
	_ctor_1( arg0);
}
void CUIBlockUser::_ctor_1( const CUIBlockUser &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIBlockUser::CUIBlockUser(ZXString<char> sCharacterName, unsigned long nDuration, unsigned long nBlockReason)
{
	_ctor_0( sCharacterName, nDuration, nBlockReason);
}
void CUIBlockUser::_ctor_0( ZXString<char> sCharacterName, unsigned long nDuration, unsigned long nBlockReason)
{
	return __sub_0056F040(this, nullptr, CreateNakedParam(sCharacterName), nDuration, nBlockReason);
}
void CUIBlockUser::OnCreate(void *arg0)
{
	__sub_0056F300(this, nullptr, arg0);
}
void CUIBlockUser::Draw(const tagRECT *pRect)
{
	__sub_0056FF40(this, nullptr, pRect);
}
void CUIBlockUser::OnButtonClicked(uint32_t nId)
{
	__sub_00578D50(this, nullptr, nId);
}
void CUIBlockUser::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_00578D10(this, nullptr, wParam, lParam);
}
void CUIBlockUser::GetResult(unsigned long &nDuration, unsigned long &nBlockReason, ZXString<char> &sDescription)
{
	__sub_0056B3D0(this, nullptr, nDuration, nBlockReason, sDescription);
}
void CUIBlockUser::SetResult()
{
	__sub_00570150(this, nullptr);
}
CUIBlockUser &CUIBlockUser::operator=(const CUIBlockUser &arg0)
{
	return _op_assign_9(this, arg0);
}
CUIBlockUser &CUIBlockUser::_op_assign_9(CUIBlockUser *pThis, const CUIBlockUser &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICashGachapon::~CUICashGachapon()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUICashGachapon::_dtor_0()
{
	return __sub_0056AE80(this, nullptr);
}
CUICashGachapon::CUICashGachapon(const CUICashGachapon &arg0)
{
	_ctor_1( arg0);
}
void CUICashGachapon::_ctor_1( const CUICashGachapon &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICashGachapon::CUICashGachapon(_LARGE_INTEGER liSN, CCashShop *pCashShop)
{
	_ctor_0( liSN, pCashShop);
}
void CUICashGachapon::_ctor_0( _LARGE_INTEGER liSN, CCashShop *pCashShop)
{
	return __sub_0056AB80(this, nullptr, liSN, pCashShop);
}
void CUICashGachapon::OnCreate(void *pData)
{
	__sub_00570F60(this, nullptr, pData);
}
void CUICashGachapon::OnCashGachaponOpenResult(long nItemID, long nCount)
{
	__sub_00568EE0(this, nullptr, nItemID, nCount);
}
void CUICashGachapon::OnCashGachaponItemCopyResult(int32_t bRandomItemCopy, long nLostItemID, long nLostItemNumber)
{
	__sub_00568F20(this, nullptr, bRandomItemCopy, nLostItemID, nLostItemNumber);
}
void CUICashGachapon::Draw(const tagRECT *pRect)
{
	__sub_00569C30(this, nullptr, pRect);
}
void CUICashGachapon::OnButtonClicked(uint32_t nId)
{
	__sub_0057A330(this, nullptr, nId);
}
void CUICashGachapon::Update()
{
	__sub_00571330(this, nullptr);
}
void CUICashGachapon::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_00568EA0(this, nullptr, wParam, lParam);
}
int32_t CUICashGachapon::OnMouseMove(long rx, long ry)
{
	return __sub_0056A0B0(this, nullptr, rx, ry);
}
void CUICashGachapon::ClearToolTip()
{
	__sub_0056AE20(this, nullptr);
}
int32_t CUICashGachapon::PutItem(GW_ItemSlotBase *arg0, long arg1, long arg2)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICashGachapon &CUICashGachapon::operator=(const CUICashGachapon &arg0)
{
	return _op_assign_16(this, arg0);
}
CUICashGachapon &CUICashGachapon::_op_assign_16(CUICashGachapon *pThis, const CUICashGachapon &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIGachaponBox::~CUIGachaponBox()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIGachaponBox::_dtor_0()
{
	return __sub_00578F60(this, nullptr);
}
CUIGachaponBox::CUIGachaponBox(const CUIGachaponBox &arg0)
{
	_ctor_1( arg0);
}
void CUIGachaponBox::_ctor_1( const CUIGachaponBox &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIGachaponBox::CUIGachaponBox(long nBoxStatus, int32_t bIsGoldBox)
{
	_ctor_0( nBoxStatus, bIsGoldBox);
}
void CUIGachaponBox::_ctor_0( long nBoxStatus, int32_t bIsGoldBox)
{
	return __sub_00578DC0(this, nullptr, nBoxStatus, bIsGoldBox);
}
void CUIGachaponBox::OnCreate(void *pData)
{
	__sub_00570660(this, nullptr, pData);
}
void CUIGachaponBox::Draw(const tagRECT *pRect)
{
	__sub_00568C70(this, nullptr, pRect);
}
void CUIGachaponBox::OnButtonClicked(uint32_t nId)
{
	__sub_00568CD0(this, nullptr, nId);
}
void CUIGachaponBox::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_00568C80(this, nullptr, wParam, lParam);
}
CUIGachaponBox &CUIGachaponBox::operator=(const CUIGachaponBox &arg0)
{
	return _op_assign_7(this, arg0);
}
CUIGachaponBox &CUIGachaponBox::_op_assign_7(CUIGachaponBox *pThis, const CUIGachaponBox &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIArtSpeakerSample::~CUIArtSpeakerSample()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIArtSpeakerSample::_dtor_0()
{
	return __sub_00579330(this, nullptr);
}
CUIArtSpeakerSample::CUIArtSpeakerSample(const CUIArtSpeakerSample &arg0)
{
	_ctor_1( arg0);
}
void CUIArtSpeakerSample::_ctor_1( const CUIArtSpeakerSample &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIArtSpeakerSample::CUIArtSpeakerSample(long nItemID, tagPOINT pt)
{
	_ctor_0( nItemID, pt);
}
void CUIArtSpeakerSample::_ctor_0( long nItemID, tagPOINT pt)
{
	return __sub_00579030(this, nullptr, nItemID, CreateNakedParam(pt));
}
void CUIArtSpeakerSample::OnCreate(void *pData)
{
	__sub_005793E0(this, nullptr, pData);
}
void CUIArtSpeakerSample::OnDestroy()
{
	__sub_00569490(this, nullptr);
}
void CUIArtSpeakerSample::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
	__sub_00568D90(this, nullptr, msg, wParam, rx, ry);
}
void CUIArtSpeakerSample::OnButtonClicked(uint32_t nId)
{
	__sub_00568D50(this, nullptr, nId);
}
int32_t CUIArtSpeakerSample::HitTest(long rx, long ry, CCtrlWnd **ppCtrl)
{
	return __sub_00568E50(this, nullptr, rx, ry, ppCtrl);
}
void CUIArtSpeakerSample::Draw(const tagRECT *pRect)
{
	__sub_00568D40(this, nullptr, pRect);
}
long CUIArtSpeakerSample::GetResult()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIArtSpeakerSample &CUIArtSpeakerSample::operator=(const CUIArtSpeakerSample &arg0)
{
	return _op_assign_10(this, arg0);
}
CUIArtSpeakerSample &CUIArtSpeakerSample::_op_assign_10(CUIArtSpeakerSample *pThis, const CUIArtSpeakerSample &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIPamsSong::~CUIPamsSong()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIPamsSong::_dtor_0()
{
	return __sub_0056B130(this, nullptr);
}
CUIPamsSong::CUIPamsSong(const CUIPamsSong &arg0)
{
	_ctor_1( arg0);
}
void CUIPamsSong::_ctor_1( const CUIPamsSong &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIPamsSong::CUIPamsSong()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIPamsSong::_ctor_0()
{
	return __sub_0056B060(this, nullptr);
}
void CUIPamsSong::OnCreate(void *pData)
{
	__sub_00573BB0(this, nullptr, pData);
}
CUIPamsSong &CUIPamsSong::operator=(const CUIPamsSong &arg0)
{
	return _op_assign_4(this, arg0);
}
CUIPamsSong &CUIPamsSong::_op_assign_4(CUIPamsSong *pThis, const CUIPamsSong &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIContextMenu::~CUIContextMenu()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIContextMenu::_dtor_0()
{
	return __sub_0056DAA0(this, nullptr);
}
CUIContextMenu::CUIContextMenu(const CUIContextMenu &arg0)
{
	_ctor_1( arg0);
}
void CUIContextMenu::_ctor_1( const CUIContextMenu &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIContextMenu::CUIContextMenu(ZXString<char> sCharacterName, tagPOINT pt, int32_t bCantFollow)
{
	_ctor_0( sCharacterName, pt, bCantFollow);
}
void CUIContextMenu::_ctor_0( ZXString<char> sCharacterName, tagPOINT pt, int32_t bCantFollow)
{
	return __sub_0056D870(this, nullptr, CreateNakedParam(sCharacterName), CreateNakedParam(pt), bCantFollow);
}
void CUIContextMenu::OnCreate(void *pData)
{
	__sub_0056DC70(this, nullptr, pData);
}
void CUIContextMenu::OnDestroy()
{
	__sub_00569460(this, nullptr);
}
void CUIContextMenu::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
	__sub_00568AA0(this, nullptr, msg, wParam, rx, ry);
}
void CUIContextMenu::OnButtonClicked(uint32_t nId)
{
	__sub_00568A70(this, nullptr, nId);
}
int32_t CUIContextMenu::HitTest(long rx, long ry, CCtrlWnd **ppCtrl)
{
	return __sub_00568AF0(this, nullptr, rx, ry, ppCtrl);
}
void CUIContextMenu::Draw(const tagRECT *pRect)
{
	__sub_0056EE30(this, nullptr, pRect);
}
long CUIContextMenu::GetResult()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIContextMenu &CUIContextMenu::operator=(const CUIContextMenu &arg0)
{
	return _op_assign_10(this, arg0);
}
CUIContextMenu &CUIContextMenu::_op_assign_10(CUIContextMenu *pThis, const CUIContextMenu &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIGameOpt::~CUIGameOpt()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIGameOpt::_dtor_0()
{
	return __sub_0056BC40(this, nullptr);
}
CUIGameOpt::CUIGameOpt(const CUIGameOpt &arg0)
{
	_ctor_1( arg0);
}
void CUIGameOpt::_ctor_1( const CUIGameOpt &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIGameOpt::CUIGameOpt()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIGameOpt::_ctor_0()
{
	return __sub_0056BB00(this, nullptr);
}
void CUIGameOpt::OnCreate(void *paramCheckBox)
{
	__sub_005777D0(this, nullptr, paramCheckBox);
}
void CUIGameOpt::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
	__sub_00569760(this, nullptr, nId, param1, param2);
}
void CUIGameOpt::SetRet(long nRet)
{
	__sub_005697A0(this, nullptr, nRet);
}
int32_t CUIGameOpt::HitTest(long rx, long ry, CCtrlWnd **ppCtrl)
{
	return __sub_00568720(this, nullptr, rx, ry, ppCtrl);
}
void CUIGameOpt::SetCtrlFromSysOpt()
{
	__sub_00568F90(this, nullptr);
}
void CUIGameOpt::GetSysOptFromCtrl()
{
	__sub_00569080(this, nullptr);
}
CUIGameOpt &CUIGameOpt::operator=(const CUIGameOpt &arg0)
{
	return _op_assign_9(this, arg0);
}
CUIGameOpt &CUIGameOpt::_op_assign_9(CUIGameOpt *pThis, const CUIGameOpt &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICancelCharacterCouponResults::~CUICancelCharacterCouponResults()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUICancelCharacterCouponResults::_dtor_0()
{
	return __sub_0056A610(this, nullptr);
}
CUICancelCharacterCouponResults::CUICancelCharacterCouponResults(const CUICancelCharacterCouponResults &arg0)
{
	_ctor_1( arg0);
}
void CUICancelCharacterCouponResults::_ctor_1( const CUICancelCharacterCouponResults &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUICancelCharacterCouponResults::CUICancelCharacterCouponResults(long nType)
{
	_ctor_0( nType);
}
void CUICancelCharacterCouponResults::_ctor_0( long nType)
{
	return __sub_0056A4D0(this, nullptr, nType);
}
void CUICancelCharacterCouponResults::OnCreate(void *pData)
{
	__sub_005704F0(this, nullptr, pData);
}
void CUICancelCharacterCouponResults::Draw(const tagRECT *pRect)
{
	__sub_00568BC0(this, nullptr, pRect);
}
void CUICancelCharacterCouponResults::OnButtonClicked(uint32_t nId)
{
	__sub_00568C10(this, nullptr, nId);
}
void CUICancelCharacterCouponResults::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_00568BD0(this, nullptr, wParam, lParam);
}
CUICancelCharacterCouponResults &CUICancelCharacterCouponResults::operator=(const CUICancelCharacterCouponResults &arg0)
{
	return _op_assign_7(this, arg0);
}
CUICancelCharacterCouponResults &CUICancelCharacterCouponResults::_op_assign_7(CUICancelCharacterCouponResults *pThis, const CUICancelCharacterCouponResults &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIRandomMesoBag::~CUIRandomMesoBag()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIRandomMesoBag::_dtor_0()
{
	return __sub_0057ABF0(this, nullptr);
}
CUIRandomMesoBag::CUIRandomMesoBag(const CUIRandomMesoBag &arg0)
{
	_ctor_1( arg0);
}
void CUIRandomMesoBag::_ctor_1( const CUIRandomMesoBag &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIRandomMesoBag::CUIRandomMesoBag(long nRank, long nMesoAmount)
{
	_ctor_0( nRank, nMesoAmount);
}
void CUIRandomMesoBag::_ctor_0( long nRank, long nMesoAmount)
{
	return __sub_0057A830(this, nullptr, nRank, nMesoAmount);
}
void CUIRandomMesoBag::OnCreate(void *pData)
{
	__sub_00573A70(this, nullptr, pData);
}
void CUIRandomMesoBag::Draw(const tagRECT *pRect)
{
	__sub_005736A0(this, nullptr, pRect);
}
CUIRandomMesoBag &CUIRandomMesoBag::operator=(const CUIRandomMesoBag &arg0)
{
	return _op_assign_5(this, arg0);
}
CUIRandomMesoBag &CUIRandomMesoBag::_op_assign_5(CUIRandomMesoBag *pThis, const CUIRandomMesoBag &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUISysOpt::~CUISysOpt()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUISysOpt::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUISysOpt::CUISysOpt(const CUISysOpt &arg0)
{
	_ctor_1( arg0);
}
void CUISysOpt::_ctor_1( const CUISysOpt &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUISysOpt::CUISysOpt()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUISysOpt::_ctor_0()
{
	return __sub_003A7ED0(this, nullptr);
}
void CUISysOpt::OnCreate(void *paramCheckBox)
{
	__sub_00578010(this, nullptr, paramCheckBox);
}
void CUISysOpt::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
	__sub_00569820(this, nullptr, nId, param1, param2);
}
void CUISysOpt::SetRet(long nRet)
{
	__sub_00569980(this, nullptr, nRet);
}
int32_t CUISysOpt::HitTest(long rx, long ry, CCtrlWnd **ppCtrl)
{
	return __sub_00568760(this, nullptr, rx, ry, ppCtrl);
}
void CUISysOpt::SetCtrlFromSysOpt()
{
	__sub_00569150(this, nullptr);
}
void CUISysOpt::GetSysOptFromCtrl()
{
	__sub_005692A0(this, nullptr);
}
CUISysOpt &CUISysOpt::operator=(const CUISysOpt &arg0)
{
	return _op_assign_9(this, arg0);
}
CUISysOpt &CUISysOpt::_op_assign_9(CUISysOpt *pThis, const CUISysOpt &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
