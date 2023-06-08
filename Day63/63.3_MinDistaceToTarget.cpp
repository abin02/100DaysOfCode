#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        int n = nums.size();
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                mini = min(abs(i - start), mini);
            }
        }
        return mini;
    }
};