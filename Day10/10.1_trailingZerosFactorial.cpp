#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int f = 0, c = 0;
        int m = n;
        if (n == 0)
        {
            return 0;
        }
        while (n > 0)
        {
            f += n / 5;
            n = n / 5;
        }
        while (m > 0)
        {
            c += m / 2;
            m /= 2;
        }
        return min(c, f);
    }
};