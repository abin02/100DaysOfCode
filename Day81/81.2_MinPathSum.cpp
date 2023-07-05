#include <bits/stdc++.h>
using namespace std;

// tabular form
class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n));
        dp[0][0] = grid[0][0];
        for (int i = 1; i < n; i++)
        {
            dp[0][i] = dp[0][i - 1] + grid[0][i];
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    dp[i][j] = dp[i - 1][j] + grid[i][j];
                }
                else
                {
                    dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};
// space optimized
class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> dp1(n);
        vector<int> dp2(n);
        dp1[0] = grid[0][0];
        for (int i = 1; i < n; i++)
        {
            dp1[i] = dp1[i - 1] + grid[0][i];
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    dp2[j] = dp1[j] + grid[i][j];
                }
                else
                {
                    dp2[j] = grid[i][j] + min(dp1[j], dp2[j - 1]);
                }
            }
            dp1 = dp2;
        }
        return dp1[n - 1];
    }
};