#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long fac(int b)
    {
        if (b <= 1)
        {
            return 1;
        }
        else
        {
            return (b * fac(b - 1) % 1000000007);
        }
    }
    int numPrimeArrangements(int n)
    {
        int count = 0;
        vector<int> a(n + 1, 1);
        a[0] = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (a[i] == 1)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    a[j] = 0;
                }
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (a[i] == 1)
                count++;
        }
        return (fac(count) * fac(n - count)) % 1000000007;
    }
};