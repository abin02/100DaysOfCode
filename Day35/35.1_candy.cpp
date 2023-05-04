#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        int ar[n];
        ar[0] = 1;
        int ans;
        for (int i = 1; i < n; i++)
        {
            if (ratings[i - 1] < ratings[i])
            {
                ar[i] = ar[i - 1] + 1;
            }
            else
            {
                ar[i] = 1;
            }
        }
        ans = ar[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i + 1] < ratings[i])
            {
                ar[i] = max(ar[i], ar[i + 1] + 1);
            }
            ans += ar[i];
        }
        return ans;
    }
};