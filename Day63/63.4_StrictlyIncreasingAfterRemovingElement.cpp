#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canBeIncreasing(vector<int> &nums)
    {
        int flag = 1;
        int n = nums.size();
        nums.insert(nums.begin(), INT_MIN);
        nums.push_back(INT_MAX);
        for (int i = 0; i < n - 1; i++)
        {
            if (flag < 0)
            {
                break;
            }
            if (nums[i] >= nums[i + 1])
            {
                flag--;
                if (nums[i - 1] < nums[i + 1])
                {
                    nums.erase(nums.begin() + i);
                }
                else
                {
                    nums.erase(nums.begin() + i + 1);
                }
                i--;
            }
        }
        // for(auto x : nums){
        //     cout<<x<<" ";
        // }
        if (flag >= 0)
        {
            return true;
        }
        return false;
    }
};