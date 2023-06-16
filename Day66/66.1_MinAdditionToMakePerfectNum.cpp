#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long makeIntegerBeautiful(long long n, int target)
    {
        int sum = 0;
        long long c = n;
        long long ans = 0;
        while (c > 0)
        {
            sum += c % 10;
            c /= 10;
        }
        if (sum <= target)
        {
            return 0;
        }
        c = n;
        long long q = 1;
        while (sum + 1 > target)
        {
            sum = (sum - (n % 10));
            ans = ans + (n % 10) * q;
            n /= 10;
            q *= 10;
        }
        return q - ans;
    }
};