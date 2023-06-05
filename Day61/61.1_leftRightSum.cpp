#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        int left[n], right[n];
        left[0] = 0;
        right[n - 1] = 0;
        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] + nums[i - 1];
            right[n - i - 1] = right[n - i] + nums[n - i];
        }
        for (int i = 0; i < n; i++)
        {
            ans[i] = abs(left[i] - right[i]);
            // cout<<right[i]<<" ";
        }
        return ans;
    }
};