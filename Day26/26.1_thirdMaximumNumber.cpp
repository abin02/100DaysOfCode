#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int m1 = INT_MIN, m2 = INT_MIN, m3 = INT_MIN;
        int n = nums.size();
        int f = 0;
        for (int i = 0; i < n; i++)
        {

            if ((nums[i] > m1) || (nums[i] == INT_MIN && f < 1))
            {
                m3 = m2;
                m2 = m1;
                m1 = nums[i];
                f++;
            }
            else if ((nums[i] > m2 && nums[i] != m1) || (nums[i] == INT_MIN && f < 2 && nums[i] != m1))
            {
                m3 = m2;
                m2 = nums[i];
                f++;
            }
            else if (nums[i] >= m3 && nums[i] != m1 && nums[i] != m2)
            {
                m3 = nums[i];
                f++;
            }
        }
        if (f < 3)
        {
            return m1;
        }
        return m3;
    }
};