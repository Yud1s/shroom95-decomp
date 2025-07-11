// MapleTVMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AdminShopDlg/AdminShopDlg.hpp"
#include "Packet/Packet.hpp"
#include "Avatar/Avatar.hpp"

// Level: 1 0x113f8
class CMapleTVMan;

class CMapleTVMan: public TSingleton<CMapleTVMan> {
// Nested
public: 
enum  EDITTVTYPE {
	NORMAL_MULTI_EDIT = 0,
	SOLE_MULTI_EDIT = 1,
	LOVE_MULTI_EDIT = 2
};

// Fields
	private:  int32_t m_bShowMessage{};
	private:  int32_t m_bQueueExists{};
	private:  int32_t m_bMessageCleaned{};
	private:  int32_t m_bIsSelfMessage{};
	private:  AvatarLook m_alSender;
	private:  AvatarLook m_alReceiver;
	private:  ZXString<char> m_sSenderName;
	private:  ZXString<char> m_sReceiverName;
	private:  ZXString<char> m_sDisplayMessage1;
	private:  ZXString<char> m_sDisplayMessage2;
	private:  ZXString<char> m_sDisplayMessage3;
	private:  ZXString<char> m_sDisplayMessage4;
	private:  ZXString<char> m_sDisplayMessage5;
	private:  long m_nX{};
	private:  long m_nY{};
	private:  long m_nMapleTVDefaultMediaNum{};
	private:  int32_t m_bAbleToUseFlash{};
	private:  int32_t m_bIsMediaLoaded{};
	private:  long m_nTotalWaitTime{};
	private:  ZXString<char> m_sCurAdvName;
	private:  ZXString<char> m_sShortCurAdvName;
	private:  int32_t m_bLoadFlash{};
	private:  unsigned char m_nMessageType{};
// Methods
	public:    ~CMapleTVMan();
		public: void _dtor_0();
	public:    CMapleTVMan(const CMapleTVMan& arg0);
		public: void _ctor_1( const CMapleTVMan& arg0);
	public:    CMapleTVMan();
		public: void _ctor_0();
	public:   void Init();
		public:   void OnPacket(long nType, CInPacket& iPacket);
		public:   void OnSetMessage(CInPacket& iPacket);
		public:   void OnClearMessage(CInPacket& iPacket);
		public:   void OnSendMessageResult(CInPacket& iPacket);
		public:   void ShowDisplay();
		public:   int32_t ShowMessage();
		public:   int32_t QueueExists();
		public:   void QueueDone();
		public:   int32_t IsMessageCleaned();
		public:   void SetMessageCleaned();
		public:   void SetMessageNotCleaned();
		public:   int32_t IsSelfMessage();
		public:   AvatarLook GetSenderAvartarLook();
		public:   AvatarLook GetReceiverAvartarLook();
		public:   ZXString<char> GetSenderName();
		public:   ZXString<char> GetReceivername();
		public:   ZXString<char> GetMessageStr1();
		public:   ZXString<char> GetMessageStr2();
		public:   ZXString<char> GetMessageStr3();
		public:   ZXString<char> GetMessageStr4();
		public:   ZXString<char> GetMessageStr5();
		public:   void SetFlashAbsLocation(long nX, long nY);
		public:   void LoadFlashMedia(ZXString<char> arg0);
		public:   void LoadMapleTVMedia();
		public:   long GetRandomMapleTVDefaultMedia();
		public:   int32_t ConfirmTimeRemaining();
		public:   const ZXString<char>& GetCurAdvName();
		public:   const ZXString<char>& GetShortCurAdvName();
		public:   int32_t IsLoadFlash();
		public:   const unsigned char GetMsgType();
		public:   int32_t IsAbleToUseFlash();
		private:   void OnDownLoadFlashAfterWaiting(CInPacket& arg0);
		public:   CMapleTVMan& operator=(const CMapleTVMan& arg0);
		public: static CMapleTVMan& _op_assign_36(CMapleTVMan* pThis, const CMapleTVMan& arg0);
};
STATIC_ASSERT_SIZE(CMapleTVMan, 1120);

