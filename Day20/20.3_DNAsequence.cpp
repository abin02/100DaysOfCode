#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        unordered_map<string, int> str;
        string ch;
        vector<string> ans;
        int n = s.length();
        for (int i = 0; i < n - 9; i++)
        {
            ch = s.substr(i, 10);
            if (str.find(ch) == str.end())
            {
                str[ch] = 1;
            }
            else
            {
                str[ch]++;
            }
        }
        for (auto x : str)
        {
            if (x.second > 1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};