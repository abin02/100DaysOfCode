#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int s = 0, e = n - 1;
        int m;
        int piv = -1;
        while (s <= e)
        {
            m = (s + e) / 2;
            if (nums[m] == target)
            {
                return true;
            }
            if (nums[m] == nums[s] || nums[m] == nums[e])
            {
                e -= int(nums[m] == nums[e]);
                s += int(nums[m] == nums[s]);
            }
            else if (nums[m] < nums[n - 1])
            {
                if (nums[n - 1] < target)
                {
                    e = m - 1;
                }
                else if (nums[m] < target)
                {
                    s = m + 1;
                }
                else
                {
                    e = m - 1;
                }
            }
            else
            {
                if (nums[m] < target || nums[0] > target)
                {
                    s = m + 1;
                }
                else
                {
                    e = m - 1;
                }
            }
        }
        return false;
    }
};