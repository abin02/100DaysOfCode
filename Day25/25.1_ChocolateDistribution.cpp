#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // code
        sort(a.begin(), a.end());
        long long min = LLONG_MAX;
        for (long long i = 0; i <= n - m; i++)
        {
            if ((a[i + m - 1] - a[i]) < min)
            {
                min = a[i + m - 1] - a[i];
            }
        }
        return min;
    }
};