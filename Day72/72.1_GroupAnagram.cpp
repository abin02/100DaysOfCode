#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> list;

        for (string str : strs)
        {
            string p = str;
            sort(str.begin(), str.end());
            list[str].push_back(p);
        }
        vector<vector<string>> ans;
        for (auto x : list)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};