#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long long mid = num / 2, end = num, start = 0;
        while (end >= start)
        {
            mid = (end + start) / 2;
            if (mid * mid == num)
            {
                return true;
            }
            else if (mid * mid > num)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return false;
    }
};