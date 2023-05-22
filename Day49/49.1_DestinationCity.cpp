#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        int n = paths.size();
        string cur = paths[0][1];
        for (int i = 0; i < n; i++)
        {
            if (paths[i][0] == cur)
            {
                cur = paths[i][1];
                i = 0;
            }
        }
        return cur;
    }
};