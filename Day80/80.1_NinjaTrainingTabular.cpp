#include <bits/stdc++.h>
using namespace std;
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4, -1));
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][1], points[0][0]);
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));
    for (int x = 1; x < n; x++)
    {
        for (int act = 0; act < 4; act++)
        {
            dp[x][act] = 0;
            for (int i = 0; i < 3; i++)
            {
                if (i != act)
                {
                    dp[x][act] = max(dp[x][act], points[x][i] + dp[x - 1][i]);
                }
            }
        }
    }
    return dp[n - 1][3];
}

// Space optimized!
int ninjaTraining(int n, vector<vector<int>> &points)
{
    int dp[4];
    int dp1[4];
    dp[0] = max(points[0][1], points[0][2]);
    dp[1] = max(points[0][0], points[0][2]);
    dp[2] = max(points[0][1], points[0][0]);
    dp[3] = max(points[0][0], max(points[0][1], points[0][2]));
    for (int x = 1; x < n; x++)
    {
        for (int act = 0; act < 4; act++)
        {
            dp1[act] = 0;
            for (int i = 0; i < 3; i++)
            {
                if (i != act)
                {
                    dp1[act] = max(dp1[act], points[x][i] + dp[i]);
                }
            }
        }
        for (int i = 0; i < 4; i++)
        {
            dp[i] = dp1[i];
        }
    }
    return dp1[3];
}