#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestPalindromeSubseq(string s)
    {
        int m = s.size() + 1;
        int a[m][m];
        for (int i = 0; i < m; i++)
        {
            a[m - 1][i] = 0;
            a[i][m - 1] = 0;
        }
        string p = s;
        reverse(s.begin(), s.end());
        for (int i = m - 2; i >= 0; i--)
        {
            for (int j = m - 2; j >= 0; j--)
            {
                if (p[i] == s[j])
                {
                    a[i][j] = 1 + a[i + 1][j + 1];
                }
                else
                {
                    a[i][j] = max(a[i][j + 1], a[i + 1][j]);
                }
            }
        }
        return a[0][0];
    }
};