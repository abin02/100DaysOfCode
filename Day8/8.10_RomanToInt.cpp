#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        int count = 0;
        int n = s.length();
        unordered_map<char, int> a;
        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
        a['C'] = 100;
        a['D'] = 500;
        a['M'] = 1000;
        int i;
        for (i = 0; i < n - 1; i++)
        {
            if (a[s[i]] >= a[s[i + 1]])
                count += a[s[i]];
            else
            {
                count -= a[s[i]];
            }
        }
        count += a[s[i]];
        return count;
    }
};