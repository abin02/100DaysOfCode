#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rec(int r1, int r2, int c1, int n, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
    {
        int c2 = r1 + c1 - r2;
        if (c2 < 0 || c1 < 0 || r1 < 0 || r2 < 0 || grid[r1][c1] == -1 || grid[r2][c2] == -1)
        {
            return -1e7;
        }
        if (dp[r1][r2][c1] != -1)
        {
            return dp[r1][r2][c1];
        }
        if (r1 == 0 && c1 == 0)
        {
            return grid[0][0];
        }
        int one = 0, two = 0, three = 0, four = 0;
        int ans = 0;
        if (r1 == r2)
        {
            ans = grid[r1][c1];
        }
        else
        {
            ans = grid[r1][c1] + grid[r2][c2];
        }
        one = rec(r1 - 1, r2 - 1, c1, n, grid, dp);
        two = rec(r1 - 1, r2, c1, n, grid, dp);
        three = rec(r1, r2 - 1, c1 - 1, n, grid, dp);
        four = rec(r1, r2, c1 - 1, n, grid, dp);
        ans += max({one, two, three, four});
        return dp[r1][r2][c1] = ans;
    }
    int cherryPickup(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(n, -1)));
        return max(0, rec(n - 1, n - 1, n - 1, n, grid, dp));
    }
};