#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        for (int i = 0; i < pow(2, nums.size()); i++)
        {
            bitset<32> ab(i);
            int j = 0;
            vector<int> num;
            while (ab.count())
            {
                if (ab.test(j))
                {
                    ab.reset(j);
                    num.push_back(nums[j]);
                }
                j++;
            }
            ans.push_back(num);
        }
        return ans;
    }
};

class Solution2
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        for (int i = 0; i < pow(2, nums.size()); i++)
        {
            vector<int> num;
            int n = nums.size() - 1;
            while (n >= 0)
            {
                if (i & 1 << n)
                {
                    num.push_back(nums[n]);
                }
                n--;
            }
            ans.push_back(num);
        }
        return ans;
    }
};