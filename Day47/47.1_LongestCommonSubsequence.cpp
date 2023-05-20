#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int n = text1.size() + 1, m = text2.size() + 1;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            a[i][m - 1] = 0;
        }
        for (int i = 0; i < m; i++)
        {
            a[n - 1][i] = 0;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = m - 2; j >= 0; j--)
            {
                if (text1[i] == text2[j])
                {
                    a[i][j] = a[i + 1][j + 1] + 1;
                }
                else
                {
                    a[i][j] = max(a[i + 1][j], a[i][j + 1]);
                }
            }
        }
        return (a[0][0]);
    }
};