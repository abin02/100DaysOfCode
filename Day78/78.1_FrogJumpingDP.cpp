#include <bits/stdc++.h>
using namespace std;

// using DP recursion
int rec(int n, vector<int> h, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int one = rec(n - 1, h, dp) + abs(h[n - 1] - h[n]);
    int two = INT_MAX;

    if (n > 1)
    {
        two = rec(n - 2, h, dp) + abs(h[n - 2] - h[n]);
    }
    return dp[n] = min(one, two);
}

// using bottom up approach
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n);
    dp[0] = 0;
    if (n <= 1)
    {
        return 0;
    }
    dp[1] = abs(heights[0] - heights[1]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i - 1] + abs(heights[i] - heights[i - 1]), dp[i - 2] + abs(heights[i] - heights[i - 2]));
    }
    return dp[n - 1];
}