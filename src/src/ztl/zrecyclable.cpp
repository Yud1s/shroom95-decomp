#include "zrecyclable.h"


[[maybe_unused]] void ZRecyclableStatic::Register(CallBack *p) {
    p->_next = _head;
    _head = p;
}

ZRecyclableStatic &ZRecyclableStatic::GetInstance() {
    static ZRecyclableStatic s_pInstance;
    return s_pInstance;
}

ZRecyclableStatic::~ZRecyclableStatic() {
    auto p = _head;
    while (p) {
        auto next = p->_next;
        //TODO fix this either wrong or double freed:
        //delete p;
        break;
        //p = next;
    }

}
