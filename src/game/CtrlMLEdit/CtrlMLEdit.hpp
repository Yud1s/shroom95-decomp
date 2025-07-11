// CtrlMLEdit.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "WndMan/WndMan.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

class CCtrlScrollBar;

// Level: 1 0x3bb5
class CCtrlMLEdit;

class CCtrlMLEdit : public CCtrlWnd
{
	// Nested
public:
	struct CREATEPARAM
	{
		// Nested
		// Fields
	public:
		ZXString<char> sText;

	public:
		tagPOINT ptText{};

	public:
		Ztl_bstr_t sFont;

	public:
		long nFontHeight{};

	public:
		long nFontColor{};

	public:
		wchar_t *sStyleFont{};

	public:
		long nBackColor{};

	public:
		int32_t bPasswd{};

	public:
		int32_t bReadOnly{};

	public:
		long nHorzMax{};

	public:
		long nMaxLineWidth{};

	public:
		long nRowMax{};

	public:
		int32_t bNumber{};
		// Methods
	public:
		~CREATEPARAM();

	public:
		void _dtor_0();

	public:
		CREATEPARAM(const CCtrlMLEdit::CREATEPARAM &arg0);

	public:
		void _ctor_1(const CCtrlMLEdit::CREATEPARAM &arg0);

		CTOR_DEFAULT(CREATEPARAM)
	public:
		CREATEPARAM();

	public:
		void _ctor_0();

	public:
		CCtrlMLEdit::CREATEPARAM &operator=(const CCtrlMLEdit::CREATEPARAM &arg0);

	public:
		static CCtrlMLEdit::CREATEPARAM &_op_assign_3(CCtrlMLEdit::CREATEPARAM *pThis, const CCtrlMLEdit::CREATEPARAM &arg0);
	};

public:
	class CEditCaret
	{
		// Nested
	public:
		enum CARET_
		{
			CARET_WIDTH = 1,
			CARET_BLINK_DELAY = 600
		};
		// Fields
	protected:
		long m_l{};

	protected:
		long m_t{};

	protected:
		unsigned long m_dwLastSet{};

	protected:
		int32_t m_bInit{};

	protected:
		long m_height{};

	protected:
		_x_com_ptr<IWzGr2DLayer> m_pLayerCaret;

	protected:
		int32_t m_bHideCaret{};

	protected:
		int32_t m_bReadOnlyCaret{};
		// Methods
	public:
		~CEditCaret();

	public:
		void _dtor_0();

	public:
		CEditCaret(const CCtrlMLEdit::CEditCaret &arg0);

	public:
		void _ctor_1(const CCtrlMLEdit::CEditCaret &arg0);

	public:
		CEditCaret();

	public:
		void _ctor_0();

	public:
		void MakeCaret(_x_com_ptr<IWzGr2DLayer> pLayerWnd, long l, long t, long height, long z);

	public:
		void SetCaret(long l, long t, long width);

	public:
		void HideCaret();

	public:
		void SetReadOnlyCaret();

	public:
		void SetHideCaret(int32_t bShow);

	public:
		void Update(int32_t bShow);

	public:
		void Clear();

	public:
		CCtrlMLEdit::CEditCaret &operator=(const CCtrlMLEdit::CEditCaret &arg0);

	public:
		static CCtrlMLEdit::CEditCaret &_op_assign_10(CCtrlMLEdit::CEditCaret *pThis, const CCtrlMLEdit::CEditCaret &arg0);
	};

public:
	class CIMECandWnd : public CWnd
	{
		// Nested
	public:
		struct CREATEPARAM
		{
			// Nested
			// Fields
		public:
			int32_t bVert{};

		public:
			ZList<ZXString<char>> lCand;

		public:
			long nBegin{};

		public:
			long nPage{};

		public:
			long nCur{};

		public:
			_x_com_ptr<IWzFont> pFont;

		public:
			_x_com_ptr<IWzFont> pFontSel;
			// Methods
		public:
			~CREATEPARAM();

		public:
			void _dtor_0();

		public:
			CREATEPARAM(const CCtrlMLEdit::CIMECandWnd::CREATEPARAM &arg0);

		public:
			void _ctor_1(const CCtrlMLEdit::CIMECandWnd::CREATEPARAM &arg0);

		public:
			CREATEPARAM();

		public:
			void _ctor_0();

		public:
			CCtrlMLEdit::CIMECandWnd::CREATEPARAM &operator=(const CCtrlMLEdit::CIMECandWnd::CREATEPARAM &arg0);

		public:
			static CCtrlMLEdit::CIMECandWnd::CREATEPARAM &_op_assign_3(CCtrlMLEdit::CIMECandWnd::CREATEPARAM *pThis, const CCtrlMLEdit::CIMECandWnd::CREATEPARAM &arg0);
		};
		// Fields
	protected:
		int32_t m_bVert{};

	protected:
		ZList<ZXString<char>> m_lCand;

	protected:
		long m_nBegin{};

	protected:
		long m_nPage{};

	protected:
		long m_nCur{};

	protected:
		_x_com_ptr<IWzFont> m_pFont;

	protected:
		_x_com_ptr<IWzFont> m_pFontSel;
		// Methods
	public:
		virtual ~CIMECandWnd();

	public:
		void _dtor_0();

	public:
		CIMECandWnd(const CCtrlMLEdit::CIMECandWnd &arg0);

	public:
		void _ctor_1(const CCtrlMLEdit::CIMECandWnd &arg0);

	public:
		CIMECandWnd();

	public:
		void _ctor_0();

	public:
		virtual void OnCreate(void *pData);

	public:
		virtual void OnDestroy();

	public:
		virtual int32_t OnActivate(int32_t bActive);

	public:
		virtual int32_t OnSetFocus(int32_t bFocus);

	public:
		virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

	public:
		virtual void Draw(const tagRECT *pRect);

	public:
		CCtrlMLEdit::CIMECandWnd &operator=(const CCtrlMLEdit::CIMECandWnd &arg0);

	public:
		static CCtrlMLEdit::CIMECandWnd &_op_assign_9(CCtrlMLEdit::CIMECandWnd *pThis, const CCtrlMLEdit::CIMECandWnd &arg0);
	};

public:
	enum CARET_MOVE_
	{
		CARET_MOVE_LEFT = 0,
		CARET_MOVE_RIGHT = 1,
		CARET_MOVE_HOME = 2,
		CARET_MOVE_END = 3,
		CARET_MOVE_UP = 4,
		CARET_MOVE_DOWN = 5
	};
	// Fields
protected:
	ZXString<char> m_sText;

protected:
	tagPOINT m_ptText{};

protected:
	long m_col{};

protected:
	ZArray<long> m_anLineStart;

protected:
	long m_nCurScrollLine{};

protected:
	long m_ext{};

protected:
	ZArray<unsigned long> m_adwIMECompClause;

protected:
	long m_nCurClause{};

protected:
	long m_nCaretX{};

protected:
	long m_selCol{};

protected:
	long m_nViewportX{};

protected:
	long m_nViewportWidth{};

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontDisabled;

protected:
	_x_com_ptr<IWzFont> m_pFontSel;

protected:
	_x_com_ptr<IWzFont> m_pFontCand;

protected:
	_x_com_ptr<IWzFont> m_pFontCandSel;

protected:
	long m_nFontHeight{};

protected:
	long m_nBackColor{};

protected:
	int32_t m_bPasswd{};

protected:
	int32_t m_bReadOnly{};

protected:
	long m_nHorzMax{};

protected:
	long m_nRowMax{};

protected:
	long m_nMaxLineWidth{};

protected:
	int32_t m_bNumber{};

protected:
	CCtrlMLEdit::CEditCaret m_editCaret;

protected:
	ZRef<CWnd> m_pIMECandWnd;

protected:
	ZRef<CCtrlScrollBar> m_pScrollbar;
	// Methods
public:
	virtual ~CCtrlMLEdit();

public:
	void _dtor_0();

public:
	CCtrlMLEdit(const CCtrlMLEdit &arg0);

public:
	void _ctor_1(const CCtrlMLEdit &arg0);

public:
	CCtrlMLEdit();

public:
	void _ctor_0();

public:
	ZXString<char> GetText();

public:
	void SetText(const char *sText);

public:
	void SetReadOnly(int32_t arg0);

public:
	long GetTotalRow();

public:
	const ZArray<long> &GetStartPOSs();

public:
	void SetCurScrollLine(long nCur);

public:
	void SetScrollbar(ZRef<CCtrlScrollBar> pScrollbar);

public:
	void UpdateScrollbar();

protected:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

protected:
	virtual int32_t OnSetFocus(int32_t bFocus);

protected:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

protected:
	virtual int32_t OnMouseMove(long rx, long ry);

protected:
	virtual void OnMouseEnter(int32_t bEnter);

protected:
	virtual int32_t OnDragDrop(long nState, DRAGCTX &ctx, long rx, long ry);

protected:
	virtual void OnIMEModeChange(char cMode);

protected:
	virtual void OnIMEResult(const char *sComp);

protected:
	virtual void OnIMEComp(const char *sComp, ZArray<unsigned long> &adwCls, uint32_t nClsIdx, long nCursor, ZList<ZXString<char>> &lCand, long nBegin, long nPage, long nCur);

public:
	virtual void Update();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	virtual void SetEnable(int32_t bEnable);

public:
	virtual int32_t OnMouseWheel(long rx, long ry, long nWheel);

protected:
	void MouseDown(long rx, long ry);

protected:
	void MouseDblClk(long rx, long ry);

protected:
	void MouseUp(long arg0, long arg1);

protected:
	void MouseMove(long rx, long ry);

protected:
	int32_t IsSelected();

protected:
	void UnSelect();

protected:
	void WordSelect();

protected:
	void ExtractSelection(int32_t bSave);

protected:
	void SetClipboard();

protected:
	ZXString<char> GetClipboard();

protected:
	long InsertString(ZXString<char> sSrc, int32_t bExtend, long nCursor);

protected:
	long DeleteString(int32_t bDelete);

protected:
	void MoveCaret(int32_t nCode);

protected:
	void AdjustHorz(long nCursor, int32_t bUnselect, int32_t bSelect);

protected:
	void AdjustVert(int32_t nCode);

protected:
	void CalcLineStart();

protected:
	long GetRow();

protected:
	void DisplayCaret(long nCursor);

protected:
	long CalcCaretPos(long lCoordX, long lCoordY);

protected:
	long GetPrevCount();

protected:
	long GetNextCount_0(const char *sCur);

protected:
	long GetNextCount_1();

protected:
	int32_t IsBackTransparent();

protected:
	void DrawTextLine(_x_com_ptr<IWzCanvas> pCanvas, long y, ZXString<char> sText, long sel0, long sel1);

protected:
	void DrawTextLineRange(_x_com_ptr<IWzCanvas> pCanvas, long nBegin, long nEnd);

protected:
	void CreateIMECandWnd(ZList<ZXString<char>> &lCand, long nBegin, long nPage, long nCur, int32_t bVert);

protected:
	void DestroyIMECandWnd();

protected:
	int32_t IsWhite(char arg0);
	CLASS_RTTI_(CCtrlMLEdit, CCtrlWnd);

public:
	CCtrlMLEdit &operator=(const CCtrlMLEdit &arg0);

public:
	static CCtrlMLEdit &_op_assign_57(CCtrlMLEdit *pThis, const CCtrlMLEdit &arg0);
};
STATIC_ASSERT_SIZE(CCtrlMLEdit, 204);
