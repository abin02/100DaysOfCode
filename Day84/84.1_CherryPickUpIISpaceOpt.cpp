#include <bits/stdc++.h>
using namespace std;
class Solution
{
public: 
    int cherryPickup(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp1(n, vector<int>(n, 0));
        vector<vector<int>> dp2(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    dp1[i][j] = grid[m - 1][i];
                    continue;
                }
                dp1[i][j] = grid[m - 1][i] + grid[m - 1][j];
            }
        }
        int maxi = 0, val = 0;
        for (int x = m - 2; x >= 0; x--)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    maxi = 0;
                    if (i == j)
                    {
                        val = grid[x][i];
                    }
                    else
                    {
                        val = grid[x][i] + grid[x][j];
                    }
                    for (int p = -1; p < 2; p++)
                    {
                        if (i + p < 0 || i + p > n - 1)
                        {
                            continue;
                        }
                        for (int q = -1; q < 2; q++)
                        {
                            if (j + q < 0 || j + q > n - 1)
                            {
                                continue;
                            }
                            maxi = max(maxi, val + dp1[i + p][j + q]);
                        }
                    }
                    dp2[i][j] = maxi;
                }
            }
            dp1 = dp2;
        }
        return dp1[0][n - 1];
    }
};