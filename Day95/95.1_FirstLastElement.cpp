#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int m, e = n - 1, s = 0;
        int index = -1;
        vector<int> ans;
        while (s <= e)
        {
            m = (s + e) / 2;
            if (nums[m] == target)
            {
                index = m;
            }
            if (nums[m] >= target)
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
        }
        ans.push_back(index);
        index = -1;
        s = 0, e = n - 1;
        while (s <= e)
        {
            m = (s + e) / 2;
            if (nums[m] == target)
            {
                index = m;
            }
            if (nums[m] <= target)
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
        }
        ans.push_back(index);
        return ans;
    }
};