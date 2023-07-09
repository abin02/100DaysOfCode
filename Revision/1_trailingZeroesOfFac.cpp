#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int f = 0;
        while (n > 0)
        {
            f += (n / 5);
            n /= 5;
        }
        return f;
    }
};