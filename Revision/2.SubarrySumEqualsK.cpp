#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> sum;
        sum[0] = 1;
        int n = nums.size();
        int add = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            add += nums[i];
            if (sum.find(add - k) != sum.end())
            {
                ans += sum[add - k];
            }
            if (sum.find(add) != sum.end())
            {
                sum[add]++;
            }
            else
            {
                sum[add] = 1;
            }
        }
        return ans;
    }
};