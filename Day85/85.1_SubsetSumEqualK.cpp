#include <bits/stdc++.h>
using namespace std;
bool rec(int i, int t, vector<int> &arr, vector<vector<int>> &dp)
{
    if (dp[i][t] != -1)
    {
        return dp[i][t] == 1;
    }
    if (t == 0)
    {
        return true;
    }
    if (i == 0)
    {
        return dp[i][t] = (arr[i] == t);
    }
    bool notTake = rec(i - 1, t, arr, dp);
    bool Take = false;
    if (t >= arr[i])
    {
        Take = rec(i - 1, t - arr[i], arr, dp);
    }
    return dp[i][t] = (notTake || Take);
}

bool subsetSumToK(int n, int k, vector<int> &arr)
{
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    return rec(n - 1, k, arr, dp);
}

// tabular
bool subsetSumToK(int n, int k, vector<int> &arr)
{
    vector<vector<bool>> dp(n, vector<bool>(k + 1, false));
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = true;
    }
    dp[0][arr[0]] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int t = 1; t < k + 1; t++)
        {
            bool notTake = dp[i - 1][t];
            bool Take = false;
            if (t >= arr[i])
            {
                Take = dp[i - 1][t - arr[i]];
            }
            dp[i][t] = Take || notTake;
        }
    }
    return dp[n - 1][k];
}

// space Optimization
bool subsetSumToK(int n, int k, vector<int> &arr)
{
    vector<bool> dp1(k + 1, false);
    vector<bool> dp2(k + 1, false);

    dp2[0] = dp1[0] = true;
    if (arr[0] <= k)
    {
        dp2[arr[0]] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int t = 1; t < k + 1; t++)
        {
            bool notTake = dp2[t];
            bool Take = false;
            if (t >= arr[i])
            {
                Take = dp2[t - arr[i]];
            }
            dp1[t] = Take || notTake;
        }
        dp2 = dp1;
    }
    return dp2[k];
}