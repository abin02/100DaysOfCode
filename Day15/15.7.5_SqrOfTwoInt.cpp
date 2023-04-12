#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        int i = 0, j = int(sqrt(c));
        long long r, x = (long long)(c);
        while (i <= j)
        {
            r = (long long)(i * i) + (long long)(j * j);
            if (r == c)
            {
                return true;
            }
            else if (r < c)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};