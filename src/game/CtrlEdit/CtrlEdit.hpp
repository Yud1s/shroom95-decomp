// CtrlEdit.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlComboBox/CtrlComboBox.hpp"
#include "Wnd/Wnd.hpp"
#include "WndMan/WndMan.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0x19da
class CCtrlEdit;

class CCtrlEdit : public CCtrlWnd
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
		tagPOINT ptCaret{};

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
		int32_t bNumber{};

	public:
		ZXString16 sEmptyImageUOL;
		// Methods
	public:
		~CREATEPARAM();

	public:
		void _dtor_0();

		CTOR_DEFAULT(CREATEPARAM)

	public:
		CREATEPARAM(const CCtrlEdit::CREATEPARAM &arg0);

	public:
		void _ctor_1(const CCtrlEdit::CREATEPARAM &arg0);

	public:
		CREATEPARAM();

	public:
		void _ctor_0();


	public:
		CCtrlEdit::CREATEPARAM &operator=(const CCtrlEdit::CREATEPARAM &arg0);

	public:
		static CCtrlEdit::CREATEPARAM &_op_assign_3(CCtrlEdit::CREATEPARAM *pThis, const CCtrlEdit::CREATEPARAM &arg0);
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
		// Methods
	public:
		~CEditCaret();

	public:
		void _dtor_0();

	public:
		CEditCaret(const CCtrlEdit::CEditCaret &arg0);

	public:
		void _ctor_1(const CCtrlEdit::CEditCaret &arg0);

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
		void Update(int32_t bShow);

	public:
		void Clear();

	public:
		CCtrlEdit::CEditCaret &operator=(const CCtrlEdit::CEditCaret &arg0);

	public:
		static CCtrlEdit::CEditCaret &_op_assign_8(CCtrlEdit::CEditCaret *pThis, const CCtrlEdit::CEditCaret &arg0);
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
			CREATEPARAM(const CCtrlEdit::CIMECandWnd::CREATEPARAM &arg0);

		public:
			void _ctor_1(const CCtrlEdit::CIMECandWnd::CREATEPARAM &arg0);

		public:
			CREATEPARAM();

		public:
			void _ctor_0();

		public:
			CCtrlEdit::CIMECandWnd::CREATEPARAM &operator=(const CCtrlEdit::CIMECandWnd::CREATEPARAM &arg0);

		public:
			static CCtrlEdit::CIMECandWnd::CREATEPARAM &_op_assign_3(CCtrlEdit::CIMECandWnd::CREATEPARAM *pThis, const CCtrlEdit::CIMECandWnd::CREATEPARAM &arg0);
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
		CIMECandWnd(const CCtrlEdit::CIMECandWnd &arg0);

	public:
		void _ctor_1(const CCtrlEdit::CIMECandWnd &arg0);

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
		CCtrlEdit::CIMECandWnd &operator=(const CCtrlEdit::CIMECandWnd &arg0);

	public:
		static CCtrlEdit::CIMECandWnd &_op_assign_9(CCtrlEdit::CIMECandWnd *pThis, const CCtrlEdit::CIMECandWnd &arg0);
	};

public:
	enum CARET_MOVE_
	{
		CARET_MOVE_LEFT = 0,
		CARET_MOVE_RIGHT = 1,
		CARET_MOVE_HOME = 2,
		CARET_MOVE_END = 3
	};
	// Fields
protected:
	ZXString<char> m_sText;

protected:
	tagPOINT m_ptText{};

protected:
	tagPOINT m_ptCaret{};

protected:
	long m_col{};

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
	int32_t m_bNumber{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasEmptyText;

protected:
	CCtrlEdit::CEditCaret m_editCaret;

protected:
	ZRef<CWnd> m_pIMECandWnd;

protected:
	CCtrlComboBox *m_pParentComboBox{};
	// Methods

	CTOR_DEFAULT(CCtrlEdit)
public:
	virtual ~CCtrlEdit();

public:
	void _dtor_0();

public:
	CCtrlEdit(const CCtrlEdit &arg0);

public:
	void _ctor_1(const CCtrlEdit &arg0);
	void _ctor_0();

public:
	CCtrlEdit();


public:
	ZXString<char> GetText();

public:
	void SetText(const char *sText);

public:
	void SelectAll();

public:
	void SetParentComboBox(CCtrlComboBox *arg0);

public:
	void MoveCaret(int32_t nCode);

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
	virtual ZXString<char> FilterString(ZXString<char> sInput);

protected:
	void MouseDown(long rx, long ry);

protected:
	void MouseDblClk(long rx, long ry);

protected:
	void MouseUp(long arg0, long arg1);

protected:
	void MouseMove(long rx, long ry);

protected:
	int32_t IsSelected() const;

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
	void AdjustHorz(long nCursor, int32_t bUnselect, int32_t bSelect);

protected:
	long CalcCaretPos(long lCoordX);

protected:
	long GetPrevCount();

protected:
	long GetNextCount_0(const char *sCur);

protected:
	long GetNextCount_1();

protected:
	int32_t IsBackTransparent() const;

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
	CLASS_RTTI_(CCtrlEdit, CCtrlWnd);

public:
	CCtrlEdit &operator=(const CCtrlEdit &arg0);

public:
	static CCtrlEdit &_op_assign_49(CCtrlEdit *pThis, const CCtrlEdit &arg0);
};
STATIC_ASSERT_SIZE(CCtrlEdit, 188);
