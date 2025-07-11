// MessageBoxPool.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"

// Level: 0 0xc7e3
struct MESSAGEBOX;
// Level: 1 0xc7cd
class CMessageBoxPool;

struct MESSAGEBOX {
// Nested
// Fields
	public:  __POSITION* posList;
	public:  unsigned char nMessageBoxType{};
	public:  ZXString<char> sHope;
	public:  ZXString<char> sCharacterName;
	public:  unsigned long dwID{};
	public:  _x_com_ptr<IWzGr2DLayer> pLayer;
	public:  _x_com_ptr<IWzVector2D> pvec;
	public:  tagPOINT ptHost{};
	public:  tagPOINT ptMessageBox{};
	public:  double fAngle{};
	public:  long nItemID{};
// Methods
	public:    ~MESSAGEBOX();
		public: void _dtor_0();
	public:    MESSAGEBOX(const MESSAGEBOX& arg0);
		public: void _ctor_1( const MESSAGEBOX& arg0);
	public:    MESSAGEBOX();
		public: void _ctor_0();
	public:   MESSAGEBOX& operator=(const MESSAGEBOX& arg0);
		public: static MESSAGEBOX& _op_assign_3(MESSAGEBOX* pThis, const MESSAGEBOX& arg0);
};
STATIC_ASSERT_SIZE(MESSAGEBOX, 64);
class CMessageBoxPool: public TSingleton<CMessageBoxPool> {
// Nested
// Fields
	protected:  ZMap<unsigned long,ZRef<MESSAGEBOX>,unsigned long> m_mMessageBox;
	protected:  ZList<ZRef<MESSAGEBOX> > m_lMessageBox;
	protected:  _x_com_ptr<IWzProperty> m_pPropMoneyIcon;
// Methods
	public:  virtual  ~CMessageBoxPool();
		public: void _dtor_0();
	public:    CMessageBoxPool(const CMessageBoxPool& arg0);
		public: void _ctor_1( const CMessageBoxPool& arg0);
	public:    CMessageBoxPool();
		public: void _ctor_0();
	public:   MESSAGEBOX* FindMessageBox(const tagPOINT& pt);
		public:   void Update(long pos);
		public:   void OnPacket(long nType, CInPacket& iPacket);
		protected:   void OnCreateFailed(CInPacket& iPacket);
		protected:   void OnMessageBoxEnterField(CInPacket& iPacket);
		protected:   void OnMessageBoxLeaveField(CInPacket& iPacket);
		protected:   void AddMessageBox(ZRef<MESSAGEBOX> pr);
		protected:   void RemoveMessageBox(ZRef<MESSAGEBOX> pr);
		public:   CMessageBoxPool& operator=(const CMessageBoxPool& arg0);
		public: static CMessageBoxPool& _op_assign_11(CMessageBoxPool* pThis, const CMessageBoxPool& arg0);
};
STATIC_ASSERT_SIZE(CMessageBoxPool, 52);


