#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> a;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (a.find(s[i]) == a.end())
            {
                a[s[i]] = 1;
            }
            else
            {
                a[s[i]] += 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};