#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int nthUglyNumber(int n)
    {
        vector<int> a(n + 1, 1);
        int i = 0, j = 0, k = 0;
        for (int p = 0; p < n; p++)
        {
            a[p + 1] = (min(a[i] * 2, min(a[j] * 3, a[k] * 5)));
            if (a[p + 1] == a[i] * 2)
            {
                i++;
            }
            if (a[p + 1] == a[j] * 3)
            {
                j++;
            }
            if (a[p + 1] == a[k] * 5)
            {
                k++;
            }
        }
        return a[n - 1];
    }
};  