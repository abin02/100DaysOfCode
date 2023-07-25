#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int count = m * n;
        vector<int> ans;
        int c = 0, r = 0;
        int i = 0, j = -1;
        while (count > 0)
        {
            for (j++; j < n - c && count > 0; j++)
            {
                ans.push_back(matrix[i][j]);
                count--;
            }
            j--;
            for (i++; i < m - r && count > 0; i++)
            {
                ans.push_back(matrix[i][j]);
                count--;
            }
            i--;
            for (j--; j >= 0 + c && count > 0; j--)
            {
                ans.push_back(matrix[i][j]);
                count--;
            }
            r++;
            j++;
            for (i--; i >= 0 + r && count > 0; i--)
            {
                ans.push_back(matrix[i][j]);
                count--;
            }
            i++;
            c++;
        }
        return ans;
    }
};