#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans(101);
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            ans[nums[i]]++;
        }
        for (int i = 1; i <= 100; i++)
        {
            ans[i] += ans[i - 1];
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                nums[i] = 0;
            }
            else
                nums[i] = ans[nums[i] - 1];
        }
        return nums;
    }
};