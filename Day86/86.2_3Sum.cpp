#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int l = i + 1;
            int r = n - 1;
            while (l < r)
            {
                if (nums[i] + nums[l] + nums[r] == 0)
                {
                    vector<int> temp = {nums[i], nums[l], nums[r]};
                    if (ans.empty() || ans.back() != temp)
                        ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                }
                else if (nums[i] + nums[l] + nums[r] > 0)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        return ans;
    }
};