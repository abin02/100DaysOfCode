#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {
        int p = m - 1, ans = -1;
        for (int i = 0; i < m; i++)
        {
            if (arr[0][i] == 1)
            {
                p = i - 1;
                ans = 0;
                break;
            }
        }
        int j;
        // cout<<"p:"<<p<<endl;
        for (int i = 1; i < n; i++)
        {
            for (j = p; j > -1; j--)
            {
                if (arr[i][j] == 1)
                {
                    p = j - 1;
                    ans = i;
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
    }
};