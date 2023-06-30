#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int count = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int i = g.size() - 1, j = s.size() - 1; i >= 0 && j >= 0;)
        {
            if (g[i] <= s[j])
            {
                count++;
                i--, j--;
            }
            else
            {
                i--;
            }
        }
        return count;
    }
};