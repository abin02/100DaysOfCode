#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> ans;
        int n = nums.size();
        ans[0] = -1;
        int sum = 0;
        bool a = false;
        for (int i = 0; i < n; i++)
        {
            sum = (sum + nums[i]) % k;
            if (ans.find(sum) != ans.end())
            {
                if (i - ans[sum] >= 2)
                {
                    a = true;
                    break;
                }
            }
            else
            {
                ans[sum] = i;
            }
        }
        return a;
    }
};