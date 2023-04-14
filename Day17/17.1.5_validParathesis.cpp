#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int n = s.length();
        int count = 0;
        int o = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')' && o == 0)
            {
                count++;
            }
            else if (s[i] == '(')
            {
                o++;
            }
            else
            {
                o--;
            }
        }
        return (count + o);
    }
};