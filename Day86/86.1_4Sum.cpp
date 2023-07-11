#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        long long t;
        for (int i = 0; i < n - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            t = nums[i];
            for (int j = n - 1; j > i; j--)
            {
                if (j < n - 1 && nums[j] == nums[j + 1])
                {
                    continue;
                }
                int ptr1 = i + 1;
                int ptr2 = j - 1;
                ;
                while (ptr1 < ptr2)
                {
                    if (t + nums[j] + nums[ptr1] + nums[ptr2] == target)
                    {
                        vector<int> cpy = {nums[i], nums[j], nums[ptr1], nums[ptr2]};
                        if (ans.empty() || ans.back() != cpy)
                        {
                            ans.push_back(cpy);
                        }
                        ptr1++;
                        ptr2--;
                    }
                    else if (t + nums[j] + nums[ptr1] + nums[ptr2] < target)
                    {
                        ptr1++;
                    }
                    else
                    {
                        ptr2--;
                    }
                }
            }
        }
        return ans;
    }
};