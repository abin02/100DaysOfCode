#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int i, lar = 0, maxp = 0;
        int n = prices.size();
        vector<int>::iterator a = prices.end();
        for (i = 0; i < n; i++)
        {
            lar = max(lar, *(a - 1 - i));
            if (lar - *(a - 1 - i) > maxp)
            {
                maxp = lar - *(a - 1 - i);
            }
        }
        return maxp;
    }
};