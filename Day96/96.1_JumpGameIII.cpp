#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool rec(vector<int> &arr, int i, vector<bool> &dp)
    {
        if (i < 0 || i >= arr.size())
        {
            return false;
        }
        if (dp[i])
        {
            return false;
        }
        dp[i] = 1;
        if (arr[i] == 0)
        {
            return true;
        }
        return rec(arr, i + arr[i], dp) || rec(arr, i - arr[i], dp);
    }
    bool canReach(vector<int> &arr, int start)
    {
        int n = arr.size();
        vector<bool> dp(n, false);
        return rec(arr, start, dp);
    }
};