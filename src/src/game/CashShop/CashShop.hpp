// CashShop.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "Packet/Packet.hpp"
#include "DBBasic/DBBasic.hpp"
#include "Dialog/Dialog.hpp"
#include "LayoutMan/LayoutMan.hpp"

struct CS_COMMODITY_EX;
class CCtrlEdit;
class CCtrlOriginButton;
class CLayoutMan;
class CCtrlComboBox;
class CCashShop;

// Level: 0 0x23a08
struct CommMoreFunc;
// Level: 1 0x1607
struct CS_COMMODITY;
// Level: 1 0x23955
class CCouponUseSelectDlg;
// Level: 1 0x23907
class CConfirmPurchaseDlg;
// Level: 1 0xbe57
class CCSWnd_ItemSearch;

struct CommMoreFunc
{
	// Nested
	// Fields
	// Methods
public:
	int32_t operator()(const ZRef<CS_COMMODITY_EX> a, const ZRef<CS_COMMODITY_EX> b);

public:
	static int32_t _op_call_0(CommMoreFunc *pThis, const ZRef<CS_COMMODITY_EX> a, const ZRef<CS_COMMODITY_EX> b);

public:
	// int32_t operator()(const ZRef<CS_COMMODITY> arg0, const ZRef<CS_COMMODITY> arg1);

public:
	static int32_t _op_call_1(CommMoreFunc *pThis, const ZRef<CS_COMMODITY> arg0, const ZRef<CS_COMMODITY> arg1);
};
STATIC_ASSERT_SIZE(CommMoreFunc, 1);
struct CS_COMMODITY : public ZRefCounted
{
	// Nested
public:
	enum UnnamedEnum4936
{
	NONE = 0,
	LIMITED = 1,
	LIMITED_FIRST_CASH = 2,
	LIMITED_NXCID = 3
};
	// Fields
public:
	long nSN{};

public:
	TSecType<long> nItemId;

public:
	long nCount{};

public:
	long nPrice{};

public:
	int32_t bBonus{};

public:
	long nPriority{};

public:
	long nPeriod{};

public:
	long nReqPOP{};

public:
	long nReqLEV{};

public:
	long nMaplePoint{};

public:
	long nMeso{};

public:
	int32_t bForPremiumUser{};

public:
	long nReqLev{};

public:
	long nCommodityGender{};

public:
	int32_t bOnSale{};

public:
	long nClass{};

public:
	long nLimit{};

public:
	long nPbCash{};

public:
	long nPbPoint{};

public:
	long nPbGift{};

public:
	long nDiscountRate{};

public:
	ZArray<long> aPackageSN;

public:
	ZArray<long> aOriginalSN;

public:
	long nOriginalPrice{};

public:
	unsigned long dwModifiedFlag{};
	// Methods
public:
	virtual ~CS_COMMODITY();

public:
	void _dtor_0();

public:
	CS_COMMODITY(const CS_COMMODITY &arg0);

public:
	void _ctor_1( const CS_COMMODITY &arg0);

	CTOR_DEFAULT(CS_COMMODITY);
public:
	CS_COMMODITY();

public:
	void _ctor_0();

public:
	int32_t IsLimited_FirstCash();

public:
	int32_t IsLimited_NXCID();

public:
	int32_t IsLimitedByRecord();

public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	void EncodeModifiedData(COutPacket &arg0);

public:
	void DecodeModifiedData(CInPacket &iPacket);

public:
	CS_COMMODITY &operator=(CS_COMMODITY &__that);

public:
	static CS_COMMODITY &_op_assign_10(CS_COMMODITY *pThis, CS_COMMODITY &__that);
};
STATIC_ASSERT_SIZE(CS_COMMODITY, 120);
class CCouponUseSelectDlg : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
{
	ID_CTRL_CHECKBOX_GIFT = 1000,
	ID_CTRL_EDIT_COUPON = 1001,
	ID_CTRL_EDIT_CHARACTER = 1002
};
	// Fields
protected:
	ZRef<CCtrlEdit> m_pEditCouponID;

protected:
	ZRef<CCtrlEdit> m_pEditCharacterID;

protected:
	ZRef<CCtrlOriginButton> m_pBtOK;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 2> m_pPasswordBox{};

protected:
	std::array<_x_com_ptr<IWzFont>, 2> m_pPasswordFont{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CCouponUseSelectDlg();

public:
	void _dtor_0();

public:
	CCouponUseSelectDlg(const CCouponUseSelectDlg &arg0);

public:
	void _ctor_1( const CCouponUseSelectDlg &arg0);

public:
	CCouponUseSelectDlg();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);

public:
	virtual void SetRet(long nRet);

public:
	static int32_t __cdecl Confirm(ZXString<char> &sCouponID, ZXString<char> &sCharacterID);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

protected:
	int32_t IsCouponIDValid();

protected:
	int32_t IsCharacterIDValid();

public:
	CCouponUseSelectDlg &operator=(const CCouponUseSelectDlg &arg0);

public:
	static CCouponUseSelectDlg &_op_assign_11(CCouponUseSelectDlg *pThis, const CCouponUseSelectDlg &arg0);
};
STATIC_ASSERT_SIZE(CCouponUseSelectDlg, 204);
class CConfirmPurchaseDlg : public CDialog
{
	// Nested
public:
	enum ID_CTRL_C
{
	ID_CTRL_CHECKBOX_MAPLEPOINT = 1000,
	ID_CTRL_CHECKBOX_PREPAIDCARDCASH = 1001,
	ID_CTRL_CHECKBOX_NEXONCASH = 1002,
	ID_CTRL_COMBOBOX_PRICE_PERIOD = 1003
};
	// Fields
protected:
	ZArray<ZXString<char>> m_aMsg;

protected:
	long m_nType{};

protected:
	unsigned long m_dwOption{};

protected:
	long m_nCount{};

protected:
	long m_nLineCount{};

protected:
	ZArray<ZRef<CS_COMMODITY_EX>> m_aCSC;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlCheckBox> m_pCBMaplePoint;

protected:
	ZRef<CCtrlCheckBox> m_pCBPrePaidCash;

protected:
	ZRef<CCtrlCheckBox> m_pCBNexonCash;

protected:
	int32_t m_bIsMesoCommodity{};

protected:
	ZRef<CCtrlComboBox> m_pCBBPriceAndPeriod;
	// Methods
public:
	virtual ~CConfirmPurchaseDlg();

public:
	void _dtor_0();

public:
	CConfirmPurchaseDlg(const CConfirmPurchaseDlg &arg0);

public:
	void _ctor_1( const CConfirmPurchaseDlg &arg0);

public:
	CConfirmPurchaseDlg(ZXString<char> sMsg, long nType, unsigned long dwOption, ZArray<ZRef<CS_COMMODITY>> &aCSC, int32_t bIsMesoCommodity);

public:
	void _ctor_0( ZXString<char> sMsg, long nType, unsigned long dwOption, ZArray<ZRef<CS_COMMODITY>> &aCSC, int32_t bIsMesoCommodity);

public:
	CConfirmPurchaseDlg(ZXString<char> sMsg, long nType, unsigned long dwOption, ZArray<ZRef<CS_COMMODITY_EX>> &aCSC, int32_t bIsMesoCommodity);

public:
	void _ctor_3( ZXString<char> sMsg, long nType, unsigned long dwOption, ZArray<ZRef<CS_COMMODITY_EX>> &aCSC, int32_t bIsMesoCommodity);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	void DrawBackgrnd();

public:
	void SetLayer();

public:
	static int32_t __cdecl Confirm(ZXString<char> sMsg, long nType, unsigned long &dwOption, ZRef<CS_COMMODITY_EX> CSC, long *pComboBoxParam);

public:
	static int32_t __cdecl Confirm_3(ZXString<char> sMsg, long nType, unsigned long &dwOption, ZArray<ZRef<CS_COMMODITY_EX>> &aCSC, long *pComboBoxParam, int32_t bIsMesoCommodity);

public:
	static int32_t __cdecl Confirm(ZXString<char> sMsg, long nType, unsigned long &dwOption);

public:
	static int32_t __cdecl Confirm_1(ZXString<char> sMsg, long nType, unsigned long &dwOption, ZRef<CS_COMMODITY> CSC, int32_t bIsMesoCommodity);

public:
	static int32_t __cdecl Confirm_0(ZXString<char> sMsg, long nType, unsigned long &dwOption, ZArray<ZRef<CS_COMMODITY>> &aCSC, int32_t bIsMesoCommodity);

public:
	virtual void SetRet(long nRet);

public:
	CConfirmPurchaseDlg &operator=(const CConfirmPurchaseDlg &arg0);

public:
	static CConfirmPurchaseDlg &_op_assign_14(CConfirmPurchaseDlg *pThis, const CConfirmPurchaseDlg &arg0);
};
STATIC_ASSERT_SIZE(CConfirmPurchaseDlg, 220);
class CCSWnd_ItemSearch : public CWnd
{
	// Nested
public:
	enum ID_CTRL_BT_SEARCH
{
	ID_CTRL_BT_SEARCH = 1000
};
	// Fields
public:
	ZArray<tagPOINT> m_aPrices;

protected:
	ZRef<CCtrlButton> m_pBtSearch;

protected:
	CCashShop *m_pCashShop{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerButtonAni;
	// Methods
public:
	virtual ~CCSWnd_ItemSearch();

public:
	void _dtor_0();

public:
	CCSWnd_ItemSearch(const CCSWnd_ItemSearch &arg0);

public:
	void _ctor_1( const CCSWnd_ItemSearch &arg0);

public:
	CCSWnd_ItemSearch();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnButtonClicked(uint32_t nID);

public:
	CCSWnd_ItemSearch &operator=(const CCSWnd_ItemSearch &arg0);

public:
	static CCSWnd_ItemSearch &_op_assign_5(CCSWnd_ItemSearch *pThis, const CCSWnd_ItemSearch &arg0);
};
STATIC_ASSERT_SIZE(CCSWnd_ItemSearch, 148);






void __cdecl ZSort_ZRef_CS_COMMODITY_EX__CommMoreFunc_(ZArray<ZRef<CS_COMMODITY_EX>> &a, __POSITION *posFrom, __POSITION *posTo, CommMoreFunc comp);
unsigned char __cdecl _ZtlSecureFuse_unsignedchar_(const unsigned char *at, uint32_t uCS);
const ZRef<CS_COMMODITY_EX> &__cdecl Median_ZRef_CS_COMMODITY_EX__CommMoreFunc_(const ZRef<CS_COMMODITY_EX> &a, const ZRef<CS_COMMODITY_EX> &b, const ZRef<CS_COMMODITY_EX> &c, CommMoreFunc &comp);
int32_t __cdecl is_dual_job_born(long nJob, short nSubJob);
short __cdecl _ZtlSecureFuse_short_(const short *at, uint32_t uCS);
int32_t __cdecl Partition_ZRef_CS_COMMODITY_EX__CommMoreFunc_(ZArray<ZRef<CS_COMMODITY_EX>> &a, int32_t nFrom, int32_t nTo, const ZRef<CS_COMMODITY_EX> &pivot, CommMoreFunc &comp);
long __cdecl get_inven_redundant_inc(CharacterData &nInc, long arg1, long arg2);
void __cdecl DownHeap_ZRef_CS_COMMODITY_EX__CommMoreFunc_(ZArray<ZRef<CS_COMMODITY_EX>> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, CommMoreFunc &comp);
void __cdecl InsertionSort_ZRef_CS_COMMODITY_EX__CommMoreFunc_(ZArray<ZRef<CS_COMMODITY_EX>> &a, int32_t nFrom, int32_t nTo, CommMoreFunc &comp);
