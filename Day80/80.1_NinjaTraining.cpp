#include <bits/stdc++.h>
using namespace std;
int rec(int x, int act, vector<vector<int>> &p, vector<vector<int>> &dp)
{
    if (dp[x][act] != -1)
    {
        return dp[x][act];
    }
    int maxi = 0;
    if (x == 0)
    {
        for (int i = 0; i < 3; i++)
        {
            if (i != act)
            {
                maxi = max(maxi, p[x][i]);
            }
        }
        return dp[x][act] = maxi;
    }

    for (int i = 0; i < 3; i++)
    {
        if (i != act)
        {
            int m = p[x][i] + rec(x - 1, i, p, dp);
            maxi = max(maxi, m);
        }
    }
    return dp[x][act] = maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4, -1));
    return rec(n - 1, 3, points, dp);
}