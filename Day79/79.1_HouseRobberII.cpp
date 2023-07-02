#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rec(vector<int> num)
    {
        int n = num.size();
        if (n == 1)
        {
            return num[0];
        }
        int one = max(num[0], num[1]);
        int two = num[0];
        for (int i = 2; i < n; i++)
        {
            int cur = max(two + num[i], one);
            two = one;
            one = cur;
        }
        return one;
    }
    int rob(vector<int> &nums)
    {
        vector<int> num1, num2;
        int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
            {
                num1.push_back(nums[i]);
            }
            if (i != n - 1)
            {
                num2.push_back(nums[i]);
            }
        }
        // cout<<num1[0]<<":"<<num1[num1.size()-1];
        // cout<<endl<<num2[0]<<":"<<num2[num2.size()-1];
        return max(rec(num1), rec(num2));
    }
};