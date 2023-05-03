#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        int h = n - 1, l = 0;
        int m, i;
        while (h != l)
        {
            m = (h + l) / 2;
            if (nums[m] < nums[m + 1])
            {
                l = m + 1;
            }
            else
            {
                h = m;
            }
        }

        return h;
    }
};