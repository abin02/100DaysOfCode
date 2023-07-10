#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        map<vector<int>, int> row;
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            row[grid[i]]++;
        }
        map<vector<int>, int> col;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < n; j++)
            {
                temp.push_back(grid[j][i]);
            }
            col[temp]++;
        }
        int ans = 0;
        for (auto x : col)
        {
            if (row.find(x.first) != row.end())
            {
                ans = ans + (row[x.first] * x.second);
            }
        }
        return ans;
    }
};