// UIPQReward.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "Packet/Packet.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

class CBitmapNumber;

// Level: 1 0xa86a
class CUIPQReward;

class CUIPQReward : public CUniqueModeless
{
	// Nested
public:
	struct RewardBoxInfo
	{
		// Nested
		// Fields
	public:
		ZXString<char> sName;

	public:
		int32_t bRare{};

	public:
		int32_t bRemote{};

	public:
		long nReward{};

	public:
		long nGrade{};

	public:
		short nOption1{};

	public:
		short nOption2{};

	public:
		short nOption3{};

	public:
		_x_com_ptr<IWzCanvas> pCanvasSlot;

	public:
		long nX{};

	public:
		long nY{};
		// Methods
		CTOR_DEFAULT(RewardBoxInfo)
	public:
		~RewardBoxInfo();

	public:
		void _dtor_0();

	public:
		RewardBoxInfo(const CUIPQReward::RewardBoxInfo &arg0);

	public:
		void _ctor_1(const CUIPQReward::RewardBoxInfo &arg0);

	public:
		RewardBoxInfo();

	public:
		void _ctor_0();

	public:
		CUIPQReward::RewardBoxInfo &operator=(const CUIPQReward::RewardBoxInfo &arg0);

	public:
		static CUIPQReward::RewardBoxInfo &_op_assign_3(CUIPQReward::RewardBoxInfo *pThis, const CUIPQReward::RewardBoxInfo &arg0);
	};

public:
	enum  ID_CTRL_BT_REWARD
{
	ID_CTRL_BT_REWARD1 = 1000,
	ID_CTRL_BT_REWARD2 = 1001,
	ID_CTRL_BT_REWARD3 = 1002,
	ID_CTRL_BT_REWARD4 = 1003,
	ID_CTRL_BT_REWARD5 = 1004,
	ID_CTRL_BT_REWARD6 = 1005
};
	// Fields
protected:
	std::array<ZRef<CCtrlButton>, 6> m_apButton;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	std::array<CUIPQReward::RewardBoxInfo, 6> m_aRewardBoxInfo;

protected:
	int32_t m_bRequest{};

protected:
	int32_t m_bRequestReward{};

protected:
	int32_t m_bReceived{};

protected:
	int32_t m_bDrawIcon{};

protected:
	_x_com_ptr<IWzFont> m_pFontMine;

protected:
	_x_com_ptr<IWzFont> m_pFontOthers;

protected:
	ZRef<CBitmapNumber> m_pBN;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerClear;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerCount;

protected:
	long m_nCount{};

protected:
	long m_tLastTime{};

protected:
	long m_tDelay{};

protected:
	long m_tTimeOver{};

protected:
	CUIToolTip m_uiToolTip;
	// Methods
public:
	virtual ~CUIPQReward();

public:
	void _dtor_0();

public:
	CUIPQReward(const CUIPQReward &arg0);

public:
	void _ctor_1(const CUIPQReward &arg0);

public:
	CUIPQReward(ZArray<int> &aRare);

public:
	void _ctor_0(ZArray<int> &aRare);

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Update();

public:
	int32_t SelectReward(long nBTId);

public:
	void RequestReward();

public:
	int32_t IsRequest();

public:
	void SetRequest(int32_t arg0);

public:
	int32_t IsReceived();

public:
	void SetReceived(int32_t arg0);

public:
	int32_t IsRequestReward();

public:
	void SetRequestReward(int32_t arg0);

public:
	void OnSelectRewardSuccess(ZXString<char> sName, int32_t bRemote, long nSelectedIdx);

public:
	void OnSelectRewardFail(long nRetCode);

public:
	void OnReceiveReward(CInPacket &iPacket);

public:
	void OnFailToRequestReward(CInPacket &iPacket);

	CLASS_RTTI_(CUIPQReward, CUniqueModeless);

public:
	CUIPQReward &operator=(const CUIPQReward &arg0);

public:
	static CUIPQReward &_op_assign_24(CUIPQReward *pThis, const CUIPQReward &arg0);
};
STATIC_ASSERT_SIZE(CUIPQReward, 3132);


