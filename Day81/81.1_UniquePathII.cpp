#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();

        vector<int> dp1(n);
        vector<int> dp2(n);
        int p = 1;
        for (int i = 0; i < n; i++)
        {
            if (obstacleGrid[0][i] == 1)
            {
                p = 0;
            }
            dp1[i] = p;
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (obstacleGrid[i][j] == 1)
                {
                    dp2[j] = 0;
                }
                else if (j == 0)
                {
                    dp2[j] = dp1[j];
                }
                else
                {
                    dp2[j] = dp2[j - 1] + dp1[j];
                }
            }
            dp1 = dp2;
        }
        return dp1[n - 1];
    }
};