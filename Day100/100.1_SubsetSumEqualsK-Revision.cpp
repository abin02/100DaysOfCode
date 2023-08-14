#include <bits/stdc++.h>
bool rec(int i, int k, vector<int> &arr, vector<vector<int>> &dp)
{
    if (k == 0)
    {
        return true;
    }
    if (i < 0 || k < 0)
    {
        return false;
    }
    if (dp[i][k] != -1)
    {
        return dp[i][k];
    }
    bool take = rec(i - 1, k - arr[i], arr, dp);
    bool Ntake = rec(i - 1, k, arr, dp);
    return dp[i][k] = take || Ntake;
}
bool subsetSumToK(int n, int k, vector<int> &arr)
{
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    return rec(n - 1, k, arr, dp);
}