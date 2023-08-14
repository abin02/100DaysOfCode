#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool rec(int i, int t, vector<int> &num, vector<vector<int>> &dp)
    {
        if (t == 0)
        {
            return true;
        }
        if (t < 0 || i < 0)
        {
            return false;
        }
        if (dp[i][t] != -1)
        {
            return dp[i][t];
        }
        bool take = rec(i - 1, t - num[i], num, dp);
        bool NTake = rec(i - 1, t, num, dp);
        return dp[i][t] = take || NTake;
    }
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (int x : nums)
        {
            sum += x;
        }
        if (sum % 2 != 0)
        {
            return false;
        }
        vector<vector<int>> dp(nums.size(), vector<int>(sum + 1, -1));
        return rec(nums.size() - 1, sum / 2, nums, dp);
    }
};