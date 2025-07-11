// NoticeQuestProgress.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Wnd/Wnd.hpp"

// Level: 1 0xe8dd
class CNoticeQuestProgress;

class CNoticeQuestProgress : public CWnd
{
	// Nested
public:
	struct NOTICE_CHANGE
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;

	public:
		_x_com_ptr<IWzVector2D> pOrigin;

	public:
		uint16_t usQuestID{};

	public:
		long nItemID{};

	public:
		unsigned long dwMobID{};

	public:
		long tLastChange{};

	public:
		ZXString<char> sName;

	public:
		long nCurCount{};

	public:
		long nDemandCount{};

	public:
		int32_t bUpdated{};

	public:
		ZXString<char> sScriptMsg;
		// Methods
		CTOR_DEFAULT(NOTICE_CHANGE);
	public:
		~NOTICE_CHANGE();

	public:
		void _dtor_0();

	public:
		NOTICE_CHANGE(const CNoticeQuestProgress::NOTICE_CHANGE &arg0);

	public:
		void _ctor_1(const CNoticeQuestProgress::NOTICE_CHANGE &arg0);

	public:
		NOTICE_CHANGE();

	public:
		void _ctor_0();

	public:
		CNoticeQuestProgress::NOTICE_CHANGE &operator=(const CNoticeQuestProgress::NOTICE_CHANGE &arg0);

	public:
		static CNoticeQuestProgress::NOTICE_CHANGE &_op_assign_3(CNoticeQuestProgress::NOTICE_CHANGE *pThis, const CNoticeQuestProgress::NOTICE_CHANGE &arg0);
	};

public:
	enum  NUM_NOTICE_CHANGE
{
	NUM_NOTICE_CHANGE = 5
};

	// Fields
protected:
	std::array<CNoticeQuestProgress::NOTICE_CHANGE, 5> m_aNoticeChange;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFont_Boundary;
	// Methods
public:
	virtual ~CNoticeQuestProgress();

public:
	void _dtor_0();

public:
	CNoticeQuestProgress(const CNoticeQuestProgress &arg0);

public:
	void _ctor_1(const CNoticeQuestProgress &arg0);

public:
	CNoticeQuestProgress();

public:
	void _ctor_0();

public:
	virtual void Update();

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	void OnQuestProgressUpdated_Item(uint16_t usQuestID, long nItemID);

public:
	void OnQuestProgressUpdated_Mob(uint16_t usQuestID, ZXString<char> sOldRecord);

public:
	void OnQuestProgressUpdated_Script(ZXString<char> sMsg);

protected:
	void NoticeProgressChange();

public:
	CNoticeQuestProgress &operator=(const CNoticeQuestProgress &arg0);

public:
	static CNoticeQuestProgress &_op_assign_10(CNoticeQuestProgress *pThis, const CNoticeQuestProgress &arg0);
};
STATIC_ASSERT_SIZE(CNoticeQuestProgress, 356);

