#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {
        int tarea = (ax2 - ax1) * (ay2 - ay1);
        int x1, y1, x2, y2;
        tarea += (by2 - by1) * (bx2 - bx1);
        if ((ax1 > bx2) || (bx1 > ax2))
        {
            return tarea;
        }
        if ((ay2 < by1) || (by2 < ay1))
        {
            return tarea;
        }

        x1 = max(ax1, bx1);
        x2 = min(ax2, bx2);
        y1 = max(ay1, by1);
        y2 = min(ay2, by2);
        tarea -= (abs(x2 - x1) * abs(y2 - y1));
        return tarea;
    }
};