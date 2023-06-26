#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int sum;
        int ans = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int l = i + 1, r = nums.size() - 1;
            while (l < r)
            {
                sum = nums[i] + nums[l] + nums[r];
                if (target == sum)
                {
                    return target;
                }
                if (abs(target - ans) > abs(target - sum))
                {
                    ans = sum;
                }
                if (target > sum)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return ans;
    }
};