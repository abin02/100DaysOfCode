#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int num = 1;
        int i = 0, j = -1;
        int r = 0, c = 0;
        vector<vector<int>> ans(n, vector<int>(n));
        while (num <= n * n)
        {
            for (j++; j < n - c; j++)
            {
                ans[i][j] = num;
                num++;
            }
            j--;
            for (i++; i < n - r; i++)
            {
                ans[i][j] = num;
                num++;
            }
            i--;
            for (j--; j >= 0 + c; j--)
            {
                ans[i][j] = num;
                num++;
            }
            r++;
            j++;
            for (i--; i >= 0 + r; i--)
            {
                ans[i][j] = num;
                num++;
            }
            i++;
            c++;
        }
        return ans;
    }
};