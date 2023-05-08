#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int i, j, q = nums.size();
        vector<int> ans;
        ans.push_back(1);
        for (i = 1; i < q; i++)
        {
            ans.push_back(nums[i - 1] * ans[i - 1]);
        }
        j = 1;
        for (i = q - 1; i >= 0; i--)
        {
            ans[i] *= j;
            j *= nums[i];
        }
        return ans;
    }
};