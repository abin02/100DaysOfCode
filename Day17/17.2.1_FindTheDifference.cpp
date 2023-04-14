#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int n = t.length();
        char c = t[n - 1];
        int i = 0;
        while (i < n - 1)
        {
            c ^= s[i] ^ t[i];
            i++;
        }
        return c;
    }
};