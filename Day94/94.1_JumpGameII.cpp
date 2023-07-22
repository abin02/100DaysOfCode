#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        int i = 1;
        if (n == 1)
        {
            return 0;
        }
        int maxi = nums[0];
        int high = maxi;
        int count = 0;
        while (1)
        {
            if (maxi >= n - 1)
            {
                return count + 1;
            }
            while (high < n - 1 && i <= high)
            {
                maxi = max(maxi, i + nums[i]);
                i++;
            }
            count++;
            high = maxi;
        }
    }
};