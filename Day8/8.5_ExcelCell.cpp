#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int cur = 1;
        int def = 'A' - 1;
        int n = columnTitle.length();
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            ans += cur * (columnTitle[i] - def);
            if (i != 0)
            {
                cur *= 26;
            }
        }
        return ans;
    }
};