#include "sectype.h"

SECPOINT &SECPOINT::operator=(const SECPOINT &other) { // NOLINT(*-use-equals-default)
    x = other.x;
    y = other.y;
    return *this;
}

SECPOINT &SECPOINT::operator=(const tagPOINT &other) {
    x = other.x;
    y = other.y;
    return *this;
}

bool SECPOINT::operator==(const SECPOINT &other) const {
    return x == other.x && y == other.y;
}

bool SECPOINT::operator==(const tagPOINT &other) const {
    return x.GetData() == other.x && y.GetData() == other.y;
}

void SECPOINT::_ctor_default() {
    new(this) SECPOINT();
}

SECPOINT &SECPOINT::op_assign_1(const SECPOINT &other) {
    *this = other;
    return *this;
}

SECPOINT &SECPOINT::op_assign_0(const tagPOINT &pt) {
    *this = pt;
    return *this;
}

bool SECPOINT::op_neq_tagpoint(const tagPOINT &pt) const {
    return *this != pt;
}

SECPOINT::operator tagPOINT() const {
    return {x.GetData(), y.GetData()};
}

tagPOINT SECPOINT::op_tagpoint() const {
    return {x.GetData(), y.GetData()};
}
