#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int e = n - 1, s = 0, m;
        while (e >= s)
        {
            m = (s + e) / 2;
            if (nums[m] == target)
            {
                return m;
            }
            else if (nums[m] > nums[e])
            {
                if (target < nums[s])
                {
                    s = m + 1;
                }
                else if (nums[m] > target)
                {
                    e = m - 1;
                }
                else
                {
                    s = m + 1;
                }
            }
            else
            {
                if (target > nums[e])
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
        }
        return -1;
    }
};