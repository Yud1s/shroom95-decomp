#pragma once

#include "base.h"

namespace Geometry {
    class InclusionChecker {
    public:
        class Line {
        private:
            int _y;
        private:
            int _x1;
        private:
            int _x2;
        private:
            bool _bOpen{};

        public:
            Line(int, int, int, bool);

            Line();

            int32_t GetY() const;

            int32_t GetX1() const;

            int32_t GetX2() const;

            bool IsOpen() const;

            bool operator<(const Geometry::InclusionChecker::Line &) const;
        };

    private:
        ZArray<tagRECT> vecRect;
        ZArray<int> vecX;
        ZArray<int> vecY;
        ZArray<ZArray<bool>> vvArea;
        ZFatalSection m_lock;

    public:
        InclusionChecker();

        void AddToArea(const tagRECT *rects, int32_t n);

        void _AddToArea(const tagRECT &rect);

        void ClearArea();

        bool IsInArea(int32_t, int32_t) const;

        bool IsInArea(const tagPOINT &point) const;

        //TODO private
        void MakeArea();

        static void SortAndUnique(ZArray<int> &);
    };
}