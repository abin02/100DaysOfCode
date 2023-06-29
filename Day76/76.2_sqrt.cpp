#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 1, r = x;
        long mid = 1;
        if (x == 0)
        {
            return 0;
        }
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (mid <= x / mid && (mid + 1) > x / (mid + 1))
            {
                return mid;
            }
            else if (mid < x / mid)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return mid;
    }
};