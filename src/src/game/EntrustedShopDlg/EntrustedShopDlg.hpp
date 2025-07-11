// EntrustedShopDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "PersonalShopDlg/PersonalShopDlg.hpp"
#include "Packet/Packet.hpp"
#include "Dialog/Dialog.hpp"

// Level: 1 0xebe7
class CEntrustedShopDlg;

class CEntrustedShopDlg : public CPersonalShopDlg
{
	// Nested
public:
	class CBlackListDlg : public CDialog
	{
		// Nested
	public:
		enum ID_CTRL_BT_
		{
			ID_CTRL_BT_ADD_BLACKLIST = 3000,
			ID_CTRL_BT_DEL_BLACKLIST = 3001
		};
		// Fields
	protected:
		std::array<tagRECT, 20> m_rcCell{};

	protected:
		long m_nCellIndex{};

	protected:
		CEntrustedShopDlg *m_pDlg{};

	protected:
		ZRef<CCtrlButton> m_pBtAddBlackList;

	protected:
		ZRef<CCtrlButton> m_pBtDelBlackList;

	protected:
		ZList<ZXString<char>> m_lBlackList;

	private:
		CLayoutMan m_lm;
		// Methods
	public:
		virtual ~CBlackListDlg();

	public:
		void _dtor_0();

	public:
		CBlackListDlg(const CEntrustedShopDlg::CBlackListDlg &arg0);

	public:
		void _ctor_1(const CEntrustedShopDlg::CBlackListDlg &arg0);

	public:
		CBlackListDlg(CEntrustedShopDlg *pDlg, const ZList<ZXString<char>> &lBlackList);

	public:
		void _ctor_0(CEntrustedShopDlg *pDlg, const ZList<ZXString<char>> &lBlackList);

	public:
		virtual void OnCreate(void *pData);

	public:
		virtual void OnButtonClicked(uint32_t nId);

	public:
		virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

	public:
		virtual void Draw(const tagRECT *pRect);

	public:
		virtual void SetRet(long nRet);

	protected:
		void AddBlackList();

	protected:
		void DeleteBlackList();

	public:
		CEntrustedShopDlg::CBlackListDlg &operator=(const CEntrustedShopDlg::CBlackListDlg &arg0);

	public:
		static CEntrustedShopDlg::CBlackListDlg &_op_assign_10(CEntrustedShopDlg::CBlackListDlg *pThis, const CEntrustedShopDlg::CBlackListDlg &arg0);
	};

public:
	class CVisitListDlg : public CDialog
	{
		// Nested
	public:
		struct VISITLOGENTRY
		{
			// Nested
			// Fields
		public:
			ZXString<char> sName;

		public:
			unsigned long tStay{};
			// Methods
		public:
			~VISITLOGENTRY();

		public:
			void _dtor_0();

		public:
			VISITLOGENTRY(const CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &arg0);

		public:
			void _ctor_1(const CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &arg0);

		public:
			VISITLOGENTRY();

		public:
			void _ctor_0();

		public:
			CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &operator=(const CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &arg0);

		public:
			static CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &_op_assign_3(CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY *pThis, const CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &arg0);
		};

	public:
		enum ID_CTRL_BT_SAVE_NAME
		{
			ID_CTRL_BT_SAVE_NAME = 4000
		};
		// Fields
	protected:
		std::array<tagRECT, 10> m_rcCell{};

	protected:
		long m_nCellIndex{};

	protected:
		CEntrustedShopDlg *m_pDlg{};

	protected:
		ZRef<CCtrlOriginButton> m_pBtSaveName;

	protected:
		ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>> m_lVisitLog;

	private:
		CLayoutMan m_lm;
		// Methods
	public:
		virtual ~CVisitListDlg();

	public:
		void _dtor_0();

	public:
		CVisitListDlg(const CEntrustedShopDlg::CVisitListDlg &arg0);

	public:
		void _ctor_1(const CEntrustedShopDlg::CVisitListDlg &arg0);

	public:
		CVisitListDlg(CEntrustedShopDlg *pDlg, const ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>> &vl);

	public:
		void _ctor_0(CEntrustedShopDlg *pDlg, const ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>> &vl);

	public:
		virtual void OnCreate(void *pData);

	public:
		virtual void OnButtonClicked(uint32_t nId);

	public:
		virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

	public:
		virtual void Draw(const tagRECT *pRect);

	public:
		virtual void SetRet(long nRet);

	public:
		CEntrustedShopDlg::CVisitListDlg &operator=(const CEntrustedShopDlg::CVisitListDlg &arg0);

	public:
		static CEntrustedShopDlg::CVisitListDlg &_op_assign_8(CEntrustedShopDlg::CVisitListDlg *pThis, const CEntrustedShopDlg::CVisitListDlg &arg0);
	};
	// Fields
protected:
	ZXString<char> m_sEmployerName;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasEmployer;

protected:
	long m_nMoney{};

protected:
	long m_tPass{};

protected:
	long m_tEnter{};

protected:
	long m_tLastDraw{};

protected:
	long m_tRemainMin{};

protected:
	ZRef<CEntrustedShopDlg::CBlackListDlg> m_pBlackList;

protected:
	ZRef<CEntrustedShopDlg::CVisitListDlg> m_pVisitList;
	// Methods
public:
	virtual ~CEntrustedShopDlg();

public:
	void _dtor_0();

public:
	CEntrustedShopDlg(const CEntrustedShopDlg &arg0);

public:
	void _ctor_1(const CEntrustedShopDlg &arg0);

public:
	CEntrustedShopDlg();

public:
	void _ctor_0();

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void SetRet(long nRet);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void DrawEmployee();

public:
	void DrawRemainingTime();

public:
	virtual void Update();

public:
	virtual int32_t IsEntrusted();

public:
	virtual void RegisterEmployer(unsigned long dwTemplateID);

public:
	void AddBlackList(ZXString<char> sName);

public:
	void DeleteBlackList(ZXString<char> sName);

public:
	void DestroyBlackListDlg();

public:
	void DestroyVisitListDlg();

protected:
	virtual void OnPacket(long nType, CInPacket &iPacket);

protected:
	virtual void OnStart();

protected:
	virtual void OnRefresh(CInPacket &iPacket);

protected:
	virtual void OnEnterResult(CInPacket &iPacket);

protected:
	virtual void OnLeave(long nSlot, CInPacket &iPacket);

protected:
	virtual long GetMoney();

protected:
	virtual unsigned char GetMiniRoomType();

protected:
	virtual void OnCorrectSSN2(long nProc);

protected:
	void DecodeSoldItemList(CInPacket &iPacket);

protected:
	void OnGoOut();

protected:
	void OnArrange();

protected:
	void OnWithdrawMoney();

protected:
	void OnBlackList();

protected:
	void OnVisitList();

protected:
	void OnArrangeItemResult(CInPacket &iPacket);

protected:
	void OnWithdrawAllResult(CInPacket &iPacket);

protected:
	void OnWithdrawMoneyResult(CInPacket &iPacket);

protected:
	void OnBlackListResult(CInPacket &iPacket);

protected:
	void OnVisitListResult(CInPacket &iPacket);

public:
	CEntrustedShopDlg &operator=(const CEntrustedShopDlg &arg0);

public:
	static CEntrustedShopDlg &_op_assign_34(CEntrustedShopDlg *pThis, const CEntrustedShopDlg &arg0);
};
STATIC_ASSERT_SIZE(CEntrustedShopDlg, 3352);
