#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkRecord(string s)
    {
        int n = s.length();
        int a = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'P')
            {
                l = 0;
            }
            else if (s[i] == 'A')
            {
                a++;
                l = 0;
            }
            else if (s[i] == 'L')
            {
                l++;
            }
            if (l > 2 || a > 1)
            {
                return false;
            }
        }
        return true;
    }
};