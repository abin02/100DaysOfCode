#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rec(int x, int y, int m, int n, vector<vector<int>> &dp)
    {
        int left = 0, right = 0;
        if (dp[x][y] != -1)
        {
            return dp[x][y];
        }
        if (x == m - 1 && y == n - 1)
        {
            return 1;
        }
        if (x + 1 != m)
        {
            left = rec(x + 1, y, m, n, dp);
        }
        if (y + 1 != n)
        {
            right = rec(x, y + 1, m, n, dp);
        }
        return dp[x][y] = left + right;
    }
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return rec(0, 0, m, n, dp);
    }
};