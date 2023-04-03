#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int mx = prices[n - 1];
        int profit[n];
        profit[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            mx = max(mx, prices[i]);
            profit[i] = max(profit[i + 1], mx - prices[i]);
        }
        int mn = prices[0];
        for (int i = 1; i < n; i++)
        {
            mn = min(mn, prices[i]);
            profit[i] = max(profit[i - 1], profit[i] + (prices[i] - mn));
        }
        return profit[n - 1];
    }
};