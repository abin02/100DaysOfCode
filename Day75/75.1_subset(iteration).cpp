#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> num;
        ans.push_back(num);
        for (int i = 0; i < nums.size(); i++)
        {
            int n = ans.size();
            for (int j = 0; j < n; j++)
            {
                num = ans[j];
                num.push_back(nums[i]);
                ans.push_back(num);
            }
        }
        return ans;
    }
};