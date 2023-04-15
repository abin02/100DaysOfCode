#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestPalindrome(string s)
    {
        int n = s.length();
        int ans = 0, flag = 1;
        unordered_map<char, int> a;
        for (int i = 0; i < n; i++)
        {
            if (a.find(s[i]) != a.end())
            {
                a[s[i]] += 1;
            }
            else
            {
                a[s[i]] = 1;
            }
        }
        for (auto x : a)
        {
            if (x.second % 2 == 0)
            {
                ans += x.second;
            }
            else
            {
                ans += x.second - 1;
                flag = 0;
            }
        }
        if (!flag)
        {
            ans++;
        }
        return ans;
    }
};