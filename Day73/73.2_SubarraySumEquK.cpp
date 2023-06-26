#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> sum;
        sum[0] = 1;
        int sm = 0;
        int ans = 0;
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            sm = (sm + nums[i]);
            if (sum.find(sm - k) != sum.end())
            {
                count += sum[sm - k];
            }

            if (sum.find(sm) != sum.end())
            {
                sum[sm] += 1;
            }
            else
            {
                sum[sm] = 1;
            }
        }
        return count;
    }
};