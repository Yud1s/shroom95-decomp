//
//

#ifndef GMS95_REGEN_ASM_HELPER_H
#define GMS95_REGEN_ASM_HELPER_H

#include <cstdint>
#include <cstring>
#include <array>

#define _SUB_EXCEPTION_HANDLER(__SUB__)                                                             \
    EXCEPTION_DISPOSITION __stdcall _EXCEPTION_HANDLER_##__SUB__(PEXCEPTION_RECORD ExceptionRecord, \
                                                                 void *EstablisherFrame,            \
                                                                 PCONTEXT ContextRecord,            \
                                                                 void *DispatcherContext)           \
    {                                                                                               \
        return ExceptionContinueExecution;                                                          \
    }

#define EXPAND_ARGS(...) __VA_ARGS__
#define _ASM_PLACEHOLDER(ADDR, TY_IX) __asm { ret }
#define _RASM_PLACEHOLDER(ADDR) __asm {ret}

#define NAKED __declspec(naked)

#define __SUB0(ADDR, CCONV, TY_IX, RET_TY) NAKED RET_TY CCONV __sub_##ADDR()
#define __SUB(ADDR, CCONV, TY_IX, RET_TY, ...) NAKED RET_TY CCONV __sub_##ADDR(EXPAND_ARGS(__VA_ARGS__))

#define __SUB_CLASS0(ADDR, CCONV, TY_IX, THIS_TY, RET_TY) NAKED RET_TY CCONV __sub_##ADDR(THIS_TY *pThis)
#define __SUB_CLASS(ADDR, CCONV, TY_IX, THIS_TY, RET_TY, ...) NAKED RET_TY CCONV __sub_##ADDR(THIS_TY *pThis, EXPAND_ARGS(__VA_ARGS__))

#define __SUB_CLASS_THIS0(ADDR, CCONV, TY_IX, THIS_TY, RET_TY) NAKED RET_TY __fastcall __sub_##ADDR(THIS_TY *pThis, void *pEdx)
#define __SUB_CLASS_THIS(ADDR, CCONV, TY_IX, THIS_TY, RET_TY, ...) NAKED RET_TY __fastcall __sub_##ADDR(THIS_TY *pThis, void *pEdx, EXPAND_ARGS(__VA_ARGS__))

/// Sadly msvc is unable to accept parameter of types which can throw like `class A`
/// Not even marking almost every functions including ctor/dtor/etc with noexcept(true) is helping
/// c++ compilers are soooooooooooooo great and well designed esp those dudes at Microsoft doing such a gooooooooood job
template <typename T>
class NakedParam
{

public:
    std::array<uint8_t, sizeof(T)> data{0};
    NakedParam(T *param)
    {
        std::memcpy(data.data(), param, sizeof(T));
    }
    NakedParam()
    {
    }
};

#endif // GMS95_REGEN_ASM_HELPER_H
