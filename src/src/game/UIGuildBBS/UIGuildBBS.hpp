// UIGuildBBS.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "UIWnd/UIWnd.hpp"

class CCtrlEdit;
class CCtrlMLEdit;
class CCtrlScrollBar;
class CCtrlSelector;

// Level: 1 0x112d9
class CUIGuildBBS;

class CUIGuildBBS : public CUIWnd, public TSingleton<CUIGuildBBS>
{
	// Nested
public:
	struct COMMENT : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		long m_nSN{};

	public:
		long m_nCharacterID{};

	public:
		ZXString<char> m_sComment;

	public:
		_FILETIME m_ftDate;
		// Methods
	public:
		virtual ~COMMENT();

	public:
		void _dtor_0();

	public:
		COMMENT(const CUIGuildBBS::COMMENT &arg0);

	public:
		void _ctor_1(const CUIGuildBBS::COMMENT &arg0);

	public:
		COMMENT();

	public:
		void _ctor_0();

	public:
		CUIGuildBBS::COMMENT &operator=(const CUIGuildBBS::COMMENT &arg0);

	public:
		static CUIGuildBBS::COMMENT &_op_assign_3(CUIGuildBBS::COMMENT *pThis, const CUIGuildBBS::COMMENT &arg0);
	};

public:
	struct CURENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		long nCurEntryID{};

	public:
		long nCurCharacterID{};

	public:
		_FILETIME ftCurDate;

	public:
		ZXString<char> sCurTitle;

	public:
		ZXString<char> sCurText;

	public:
		long nEmoticon{};

	public:
		ZArray<ZRef<CUIGuildBBS::COMMENT>> aComments;
		// Methods
	public:
		virtual ~CURENTRY();

	public:
		void _dtor_0();

	public:
		CURENTRY(const CUIGuildBBS::CURENTRY &arg0);

	public:
		void _ctor_1(const CUIGuildBBS::CURENTRY &arg0);

	public:
		CURENTRY();

	public:
		void _ctor_0();

	public:
		CUIGuildBBS::CURENTRY &operator=(const CUIGuildBBS::CURENTRY &arg0);

	public:
		static CUIGuildBBS::CURENTRY &_op_assign_3(CUIGuildBBS::CURENTRY *pThis, const CUIGuildBBS::CURENTRY &arg0);
	};

public:
	struct ENTRYLIST : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		long nEntryID{};

	public:
		ZXString<char> sTitle;

	public:
		long nCharacterID{};

	public:
		_FILETIME ftDate;

	public:
		int32_t nComments{};

	public:
		long nEmoticon{};
		// Methods
	public:
		virtual ~ENTRYLIST();

	public:
		void _dtor_0();

	public:
		ENTRYLIST(const CUIGuildBBS::ENTRYLIST &arg0);

	public:
		void _ctor_1(const CUIGuildBBS::ENTRYLIST &arg0);

	public:
		ENTRYLIST();

	public:
		void _ctor_0();

	public:
		CUIGuildBBS::ENTRYLIST &operator=(const CUIGuildBBS::ENTRYLIST &arg0);

	public:
		static CUIGuildBBS::ENTRYLIST &_op_assign_3(CUIGuildBBS::ENTRYLIST *pThis, const CUIGuildBBS::ENTRYLIST &arg0);
	};

public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_WRITE = 2000,
	ID_CTRL_BT_WRITE_NOTICE = 2001,
	ID_CTRL_BT_DELETE = 2002,
	ID_CTRL_BT_MODIFY = 2003,
	ID_CTRL_BT_REGISTER = 2004,
	ID_CTRL_BT_REGISTER_MODIFY = 2005,
	ID_CTRL_BT_REGISTER_NOTICE = 2006,
	ID_CTRL_BT_CANCEL = 2007,
	ID_CTRL_BT_COMMENT = 2008,
	ID_CTRL_BT_COMMENT_DELETE_0 = 2009,
	ID_CTRL_BT_COMMENT_DELETE_1 = 2010,
	ID_CTRL_BT_COMMENT_DELETE_2 = 2011,
	ID_CTRL_BT_COMMENT_DELETE_3 = 2012,
	ID_CTRL_BT_EXIT = 2013,
	ID_CTRL_BT_EMOTICONLEFT = 2014,
	ID_CTRL_BT_EMOTICONRIGHT = 2015,
	ID_CTRL_EDIT_TITLE = 2016,
	ID_CTRL_EDIT_TEXT = 2017,
	ID_CTRL_EDIT_COMMENT = 2018,
	ID_CTRL_SCR_COMMENT = 2019,
	ID_CTRL_SCR_EDIT = 2020,
	ID_CTRL_SELECTOR = 2021
};
enum k
{
	kWidth = 734,
	kHeight = 526,
	kBtClose_X = 714,
	kBtClose_Y = 6,
	kTextBox_X = 399,
	kTextBox_Y = 18,
	kListBox_L = 22,
	kListBox_T = 103,
	kListBox_R = 366,
	kListBox_B = 440,
	kListBox_OneEntry_Y = 31,
	kGuild_Mark_X = 20,
	kGuild_Mark_Y = 24,
	kScrComment_X = 710,
	kScrComment_Y = 326,
	kScrComment_Len = 125,
	kCommentWidth = 300,
	kScrEdit_Write_X = 706,
	kScrEdit_Write_Y = 53,
	kScrEdit_Write_Len = 187,
	kScrEdit_View_X = 704,
	kScrEdit_View_Y = 78,
	kScrEdit_View_Len = 190,
	kEditWidth = 300,
	kListNameWidth = 70
};

	// Fields
protected:
	int32_t m_bViewEntry{};

protected:
	long m_nViewRequestEntryID{};

protected:
	ZRef<CUIGuildBBS::CURENTRY> m_CurEntry;

protected:
	long m_nEntryListStart{};

protected:
	ZArray<ZRef<CUIGuildBBS::ENTRYLIST>> m_aEntryList;

protected:
	ZRef<CUIGuildBBS::ENTRYLIST> m_Notice;

protected:
	int32_t m_bWriteTextBox{};

protected:
	long m_nEmoticonIdx{};

protected:
	long m_nEmoticonID{};

protected:
	ZRef<CCtrlButton> m_pBtWrite;

protected:
	ZRef<CCtrlButton> m_pBtWriteNotice;

protected:
	ZRef<CCtrlButton> m_pBtDelete;

protected:
	ZRef<CCtrlButton> m_pBtModify;

protected:
	ZRef<CCtrlButton> m_pBtRegister;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtComment;

protected:
	std::array<ZRef<CCtrlButton>, 4> m_pBtCommentDelete;

protected:
	ZRef<CCtrlButton> m_pBtExit;

protected:
	ZRef<CCtrlButton> m_pBtEmoticonLeft;

protected:
	ZRef<CCtrlButton> m_pBtEmoticonRight;

protected:
	ZRef<CCtrlEdit> m_pEditTitle;

protected:
	ZRef<CCtrlMLEdit> m_pEditText;

protected:
	ZRef<CCtrlEdit> m_pEditComment;

protected:
	ZRef<CCtrlScrollBar> m_pSBComment;

protected:
	ZRef<CCtrlScrollBar> m_pSBEdit;

protected:
	ZRef<CCtrlSelector> m_pSelector;

protected:
	_x_com_ptr<IWzCanvas> m_pTextBox;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 3> m_pDefaultEmoticon;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 7> m_pCashEmoticon;

protected:
	_x_com_ptr<IWzCanvas> m_pEmoticonSelect;

protected:
	ZArray<long> m_aCashEmoticonID;
	// Methods
public:
	virtual ~CUIGuildBBS();

public:
	void _dtor_0();

public:
	CUIGuildBBS(const CUIGuildBBS &arg0);

public:
	void _ctor_1(const CUIGuildBBS &arg0);
	CTOR_DEFAULT(CUIGuildBBS);
public:
	CUIGuildBBS();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void ClearToolTip();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	void SetScrollBar();

public:
	void LoadViewTextBox();

public:
	void ShowDeleteCommentButtons();

public:
	void LoadWriteTextBox(int32_t bModify, int32_t bNotice);

public:
	void DestroyPreviousControls();

public:
	void OnWrite(int32_t bModify, int32_t bNotice);

public:
	void OnRegister(int32_t bModify, int32_t bNotice);

public:
	void OnDelete();

public:
	void OnCancel();

public:
	void OnComment();

public:
	void OnCommentDelete(int32_t nIdx);

public:
	void SendLoadListRequest();

public:
	void SendViewEntryRequest();

public:
	void SendModifyCheckRequest();

public:
	void OnGuildBBSPacket(CInPacket &iPacket);

public:
	void OnLoadListResult(CInPacket &iPacket);

public:
	void OnViewEntryResult(CInPacket &iPacket);

public:
	void OnEntryNotFound();

public:
	int32_t IsGuildBBSAdmin();

public:
	void MoveEmoticon(int32_t nCode);

public:
	void DrawList(ZRef<CUIGuildBBS::ENTRYLIST> &pEntryList, _x_com_ptr<IWzCanvas> &pCanvas, long nTop);

public:
	void FormatDate(const _FILETIME &ftTime, ZXString<char> &sDate);

public:
	void FormatShortDate(const _FILETIME &ftTime, ZXString<char> &sDate);
	CLASS_RTTI_(CUIGuildBBS, CUIWnd);

public:
	CUIGuildBBS &operator=(const CUIGuildBBS &arg0);

public:
	static CUIGuildBBS &_op_assign_38(CUIGuildBBS *pThis, const CUIGuildBBS &arg0);
};
STATIC_ASSERT_SIZE(CUIGuildBBS, 3080);

