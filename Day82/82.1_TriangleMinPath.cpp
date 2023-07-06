#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int m = triangle.size();
        int n = triangle[m - 1].size();
        vector<int> dp1(n);
        vector<int> dp2(n);
        if (m == 1)
        {
            return triangle[0][0];
        }
        dp1[0] = triangle[0][0];
        int mini;
        for (int i = 1; i < m; i++)
        {
            mini = INT_MAX;
            for (int j = 0; j <= i; j++)
            {
                if (j == i)
                {
                    dp2[j] = dp1[j - 1] + triangle[i][j];
                }
                else if (j == 0)
                {
                    dp2[j] = dp1[j] + triangle[i][j];
                }
                else
                {
                    dp2[j] = triangle[i][j] + min(dp1[j - 1], dp1[j]);
                }
                mini = min(mini, dp2[j]);
            }
            dp1 = dp2;
        }
        return mini;
    }
};
