#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        int m = min(strs[0].size(), strs[n - 1].size());
        sort(strs.begin(), strs.end());
        string ans = "";
        for (int i = 0; i < m; i++)
        {
            if (strs[0][i] == strs[n - 1][i])
            {
                ans += strs[0][i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};