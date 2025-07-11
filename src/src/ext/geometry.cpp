#include "geometry.hpp"

Geometry::InclusionChecker::Line::Line(int y, int x1, int x2, bool bOpen)
{
    _y = y;
    _x1 = x1;
    _x2 = x2;
    _bOpen = bOpen;
}

Geometry::InclusionChecker::Line::Line()
{
    _y = -1;
    _x1 = -1;
    _x2 = -1;
    _bOpen = false;
}

int Geometry::InclusionChecker::Line::GetY() const
{
    return _y;
}

int Geometry::InclusionChecker::Line::GetX1() const
{
    return _x1;
}

int Geometry::InclusionChecker::Line::GetX2() const
{
    return _x2;
}

bool Geometry::InclusionChecker::Line::IsOpen() const
{
    return _bOpen;
}

bool Geometry::InclusionChecker::Line::operator<(const Line& other) const
{
    return _y < other._y;
}

Geometry::InclusionChecker::InclusionChecker()
{
}

void Geometry::InclusionChecker::AddToArea(const tagRECT* rects, int32_t n)
{
    if (n <= 0)
    {
        return;
    }

    ZFatalSectionGuard guard(m_lock);
    for (int32_t i = 0; i < n; i++)
    {
        this->_AddToArea(rects[i]);
    }

    this->MakeArea();
}

void Geometry::InclusionChecker::_AddToArea(const tagRECT& rect)
{
    ZFatalSectionGuard guard(const_cast<ZFatalSection*>(&m_lock));
    this->vecRect.Insert(rect);
}

void Geometry::InclusionChecker::ClearArea()
{
    ZFatalSectionGuard guard(const_cast<ZFatalSection*>(&m_lock));
    vvArea.RemoveAll();
    vecX.RemoveAll();
    vecY.RemoveAll();
}

bool Geometry::InclusionChecker::IsInArea(int32_t x, int32_t y) const
{
    ZFatalSectionGuard guard(const_cast<ZFatalSection*>(&m_lock));
    if (vecX.IsEmpty() || vecY.IsEmpty())
    {
        return false;
    }

    auto ix = vecX.SortedFindIndexOf(x);
    auto iy = vecY.SortedFindIndexOf(y);
    if (ix == SIZE_MAX || iy == SIZE_MAX)
    {
        return false;
    }

    return vvArea[iy][ix];
}

bool Geometry::InclusionChecker::IsInArea(const tagPOINT& point) const
{
    return IsInArea(point.x, point.y);
}

void Geometry::InclusionChecker::MakeArea()
{
    ZFatalSectionGuard guard(m_lock);

    vecX.RemoveAll();
    vecY.RemoveAll();

    for (auto& rc : vecRect)
    {
        vecX.Insert(rc.left);
        vecX.Insert(rc.right);
        vecY.Insert(rc.top);
        vecY.Insert(rc.bottom);
    }

    SortAndUnique(vecX);
    SortAndUnique(vecY);

    ZArray<Line> lines;

    for (auto& rc : vecRect)
    {
        auto x1 = vecX.SortedFindIndexOf(rc.left);
        auto x2 = vecX.SortedFindIndexOf(rc.right);
        auto y1 = vecY.SortedFindIndexOf(rc.top);
        auto y2 = vecY.SortedFindIndexOf(rc.bottom);

        lines.Insert(Line(y1, x1, x2, true));
        lines.Insert(Line(y2, x1, x2, false));
    }


    std::sort(lines.begin(), lines.end());

    vvArea.ReAlloc(vecY.GetCount(), 0, ZAllocHelper(1));
    for (auto i = 0; i < vecY.GetCount(); ++i)
    {
        vvArea[i].ReAlloc(vecX.GetCount(), 0, ZAllocHelper(1));
    }

    for (auto line : lines)
    {
        for (auto x = line.GetX1(); x < line.GetX2(); ++x)
            vvArea[line.GetY()][x] = line.IsOpen();
    }
}

void Geometry::InclusionChecker::SortAndUnique(ZArray<int>& a)
{
    std::sort(a.begin(), a.end());
    auto last = std::unique(a.begin(), a.end());
    auto n = std::distance(a.end(), last);
    a.ReAlloc(n, 1, ZAllocHelper(1));
}
