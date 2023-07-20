#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return true;
        }
        int maxi = nums[0];
        int i = 1;
        while (maxi > 0 && i < n)
        {
            maxi = max(nums[i], maxi - 1);
            if (maxi + i >= n - 1)
            {
                return true;
            }
            i++;
        }
        return false;
    }
};