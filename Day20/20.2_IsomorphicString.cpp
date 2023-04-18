#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        char a[256] = {0}, b[256] = {0};
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (a[s[i]] != b[t[i]])
            {
                return false;
            }
            if (!a[s[i]])
            {
                a[s[i]] = i + 1;
                b[t[i]] = i + 1;
            }
        }
        return true;
    }
};