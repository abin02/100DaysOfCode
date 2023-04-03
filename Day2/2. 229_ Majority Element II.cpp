#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int count1 = 0, count2 = 0;
        int no1 = 0, no2 = 0;
        int c = n;
        for (int i = 0; i < n; i++)
        {
            if (no1 == nums[i])
            {
                count1++;
            }
            else if (no2 == nums[i])
            {
                count2++;
            }
            else if (count1 == 0)
            {
                no1 = nums[i];
                count1++;
            }
            else if (count2 == 0)
            {
                no2 = nums[i];
                count2++;
            }
            else
            {
                count1--;
                count2--;
                c -= 3;
            }
        }
        count1 = 0;
        count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (no1 == nums[i])
            {
                count1++;
            }
            else if (no2 == nums[i])
            {
                count2++;
            }
        }
        vector<int> ans;
        if (count1 > n / 3)
        {
            ans.push_back(no1);
        }
        if (count2 > n / 3)
        {
            ans.push_back(no2);
        }
        return ans;
    }
};