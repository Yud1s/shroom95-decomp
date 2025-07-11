// MapleTVDownloader.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "util/extra.h"


// Level: 1 0x20ec5
class CMapleTVDownloader;

class CMapleTVDownloader: public TSingleton<CMapleTVDownloader>, public ZThread {
// Nested
// Fields
	private:  void* m_hOpen;
	private:  void* m_hConnect;
	private:  ZXString<char> m_sLocalFilePath;
	private:  ZXString<char> m_sMapleStoryPath;
	private:  int32_t m_bTerminate{};
	private:  long m_nDownLoadWaitTime{};
	private:  int32_t m_bDownLoadAttempt{};
	private:  int32_t m_bDownLoad{};
	private:  long m_nFlashNum{};
	private:  long m_nTotalFrequency{};
	private:  ZArray<ZRef<__tag_FILE_IDX> > m_FlashFileList;
// Methods
	public:  virtual  ~CMapleTVDownloader();
		public: void _dtor_0();
	public:    CMapleTVDownloader(const CMapleTVDownloader& arg0);
		public: void _ctor_1( const CMapleTVDownloader& arg0);
	public:    CMapleTVDownloader();
		public: void _ctor_0();
	public:   ZXString<char> GetRandMediaFileName();
		public:  virtual int32_t Run(void* arg0, ZThread::ZThreadResult* arg1);
		public:   void Terminate();
		public:   void SetDownLoadWaitTime(long arg0);
		public:   void SetDownLoad(int32_t arg0);
		private:   int32_t ProcessDownloading();
		private:   unsigned long DeleteUselessFiles();
		private:   int32_t OpenConnection();
		private:   void CloseConnection();
		private:   int32_t GetMediaFileList();
		private:   int32_t DownloadFile(ZXString<char> arg0, int32_t arg1);
		private:   int32_t IsLocalFileExist(ZXString<char> arg0, unsigned long* arg1);
		public:   CMapleTVDownloader& operator=(const CMapleTVDownloader& arg0);
		public: static CMapleTVDownloader& _op_assign_15(CMapleTVDownloader* pThis, const CMapleTVDownloader& arg0);
};
STATIC_ASSERT_SIZE(CMapleTVDownloader, 56);


