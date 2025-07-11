#pragma once

#include <comdef.h>
#include "ztl/xcomutil.h"
#include "ztl/zcomapi.h"
#include "ztl/zcom.h"

inline void TESTHR(HRESULT x) {if FAILED(x) _com_issue_error(x);};
inline void TESTHR_EX(HRESULT x, IUnknown* p, const GUID& guid) {if FAILED(x) _com_issue_errorex(x, p, guid);};

template<typename T>
inline void TESTHR_EX_T(HRESULT x, T* p) {if FAILED(x) _com_issue_errorex(x, p, __uuidof(T));};

//TODO
/*class Ztl_bstr_t : public _bstr_t
{
public:
    Ztl_bstr_t()
    {
        // this->bstr = nullptr;
    }
    Ztl_bstr_t(const Ztl_bstr_t &arg0) : _bstr_t(arg0) {
    }
	Ztl_bstr_t(const wchar_t* str) : _bstr_t(str) {
	}
    
	Ztl_bstr_t(const unsigned short* str) : _bstr_t((const wchar_t*)str) {
	}
    ~Ztl_bstr_t()
    {
    }

    operator unsigned short*() const
    {
        //TODO
        return nullptr;
    }

    void _ctor_default() {
        
    }

    void _ctor_copy() {

    }

    void _ctor_0() {

    }

    void _ctor_1() {

    }

    void _ctor_2() {

    }

    void _ctor_3() {

    }

    void _ctor_4() {

    }

    _bstr_t& op_add_assign(const wchar_t* s) {
        return _bstr_t::operator+=(s);
    }

    Ztl_bstr_t& op_assign(const Ztl_bstr_t& other) {
        return operator=(other);
    }

    bool op_eq(const wchar_t* s) {
        return _bstr_t::operator==(s);
    }

    _bstr_t op_add_0(const wchar_t* s) {
        return _bstr_t::operator+(s);
    }

    _bstr_t op_add_1(const Ztl_bstr_t& other) {
        
        return _bstr_t::operator+(other);
    }

    // Copy operator
    Ztl_bstr_t &operator=(const Ztl_bstr_t &arg0)
    {
        _bstr_t::operator=(arg0);
        return *this;
    }

    bool operator==(const wchar_t* s) {
        return _bstr_t::operator==(s);
    
    }
};

class Ztl_variant_t : public _variant_t
{
public:
    void _ctor_default() {
        
    }


    void _ctor_0()
    {
    }

    void _ctor_1()
    {
    }

    void _ctor_2()
    {
    }
    void _ctor_3()
    {
    }
    void _ctor_4()
    {
    }
    Ztl_variant_t()
    {
    }

	Ztl_variant_t(variant_t& var) : _variant_t(var){

	}

    ~Ztl_variant_t()
    {
    }

    IUnknown *GetUnknown(bool, bool) const
    {
        return nullptr;
    }

};*/


interface IWzArchive;
interface IWzCanvas;
interface IWzFont;
interface IWzGr2D;
interface IWzGr2DLayer;
interface IWzProperty;
interface IWzRawCanvas;
interface IWzRawCanvasAllocator;
interface IWzResMan;
interface IWzSeekableArchive;
interface IWzSerialize;
interface IWzShape2D;
interface IWzVector2D;
interface IWzNameSpace;



typedef enum tagCANVAS_DITHERTYPE {
	CD_NONE = 0,
	CD_FS0 = 1,
	CD_FS1 = 2,
	CD_FS = 3,
	CD_FD0 = 17,
	CD_FD1 = 18,
	CD_FD = 19,
} CANVAS_DITHERTYPE;

typedef enum tagCANVAS_LEVELMAP {
	CL_ALL16 = 1,
	CL_ALL32 = 2,
	CL_ALL56 = 513,
	CL_USE32OVER1 = 65538,
	CL_USE32OVER2 = 131074,
	CL_USE56OVER1 = 66049,
	CL_USE56OVER2 = 131585,
} CANVAS_LEVELMAP;

typedef enum tagCANVAS_PIXFORMAT {
	CP_UNKNOWN = 0,
	CP_A4R4G4B4 = 1,
	CP_A8R8G8B8 = 2,
	CP_R5G6B5 = 513,
	CP_DXT3 = 1026,
} CANVAS_PIXFORMAT;

typedef enum tagCANVAS_ALPHATYPE {
	CA_OVERWRITE = -1,
	CA_REMOVEALPHA = -2,
} CANVAS_ALPHATYPE;

enum RESMAN_PARAM
{
	RC_AUTO_SERIALIZE = 0x1,
	RC_AUTO_SERIALIZE_NO_CACHE = 0x2,
	RC_NO_AUTO_SERIALIZE = 0x4,
	RC_DEFAULT_AUTO_SERIALIZE = 0x0,
	RC_AUTO_SERIALIZE_MASK = 0x7,
	RC_AUTO_REPARSE = 0x10,
	RC_NO_AUTO_REPARSE = 0x20,
	RC_DEFAULT_AUTO_REPARSE = 0x0,
	RC_AUTO_REPARSE_MASK = 0x30,
};

enum GR2D_ANITYPE
{
	GA_STOP = 0x0,
	GA_WAIT = 0x100,
	GA_NORMAL = 0x0,
	GA_FIRST = 0x10,
	GA_REPEAT = 0x20,
};

enum LAYER_BLENDTYPE
{
	LB_NORMAL = 0x0,
	LB_ADD = 0x1,
	LB_INVERSE = 0x2,
	LB_ISOLATED = 0x4,
};