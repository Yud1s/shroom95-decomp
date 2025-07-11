// Exception.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

//#include "ActionMan/ActionMan.hpp"

// Level: 1 0x1d574
class CMSException;

class CMSException : public ZException
{
	//TODO
public:
	static void *THROW_INFO;
	// Nested
	// Fields
	// Methods
public:
	CMSException();
	~CMSException();
	explicit CMSException(HRESULT hr);

public:
	void _ctor_0( HRESULT hr);

public:
	ZXString<char> GetMessageA();
};
STATIC_ASSERT_SIZE(CMSException, 4);

class CTerminateException : public CMSException
{
public:
	static void *THROW_INFO;
public:
	~CTerminateException();
	explicit CTerminateException(HRESULT hr);
	void _ctor_1( HRESULT hr);
};
STATIC_ASSERT_SIZE(CTerminateException, 4);


class CPatchException : public CMSException
{
    // Nested
public:
    struct PATCHINFO
    {
        // Nested
        // Fields
    public:
        uint16_t nCurrentVersion{};
        uint16_t nTargetVersion{};
        std::array<unsigned char, 768> sReserved{};
        std::array<char, 256> sCommandLine{};
        std::array<char, 256> sRootPath{};
    };

public:
    static void *THROW_INFO;
    // Fields
public:
    CPatchException::PATCHINFO m_pi;
    // Methods
public:
    ~CPatchException();
    explicit CPatchException(long nTargetVersion);
    void _ctor_1(long nTargetVersion);
};
STATIC_ASSERT_SIZE(CPatchException, 1288);

class CDisconnectException : public CMSException
{
public:
    static void *THROW_INFO;
public:
    ~CDisconnectException();
    explicit CDisconnectException(HRESULT hr);
    void _ctor_1(HRESULT hr);
    long GetNoticeIdx();
};
STATIC_ASSERT_SIZE(CDisconnectException, 4);
