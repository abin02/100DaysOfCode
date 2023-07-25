#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void msort(vector<int> &nums, int s, int e)
    {
        if (s >= e)
        {
            return;
        }
        int m = (s + e) / 2;
        msort(nums, s, m);
        msort(nums, m + 1, e);
        int copy = s;
        int l = m + 1;
        vector<int> ans;
        while (s <= m && l <= e)
        {
            if (nums[s] < nums[l])
            {
                ans.push_back(nums[s]);
                s++;
            }
            else
            {
                ans.push_back(nums[l]);
                l++;
            }
        }
        while (s <= m)
        {
            ans.push_back(nums[s]);
            s++;
        }
        while (l <= e)
        {
            ans.push_back(nums[l]);
            l++;
        }
        int i = 0;
        while (copy <= e)
        {
            nums[copy] = ans[i];
            i++;
            copy++;
        }
    }
    vector<int> sortArray(vector<int> &nums)
    {
        msort(nums, 0, nums.size() - 1);
        return nums;
    }
};