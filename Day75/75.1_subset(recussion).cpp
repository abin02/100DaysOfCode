#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        if (nums.size() > 0)
        {
            vector<int> num(nums.begin() + 1, nums.end());
            int x = nums[0];
            ans = subsets(num);
            int n = ans.size();
            for (int i = 0; i < n; i++)
            {
                vector<int> vec = ans[i];
                vec.push_back(x);
                ans.push_back(vec);
            }
            return ans;
        }
        else
        {
            vector<int> num;
            ans.push_back(num);
            return ans;
        }
    }
};