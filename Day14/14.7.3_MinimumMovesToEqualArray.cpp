#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = nums.size() - 1; i > 0; i--)
        {
            sum += nums[i] - nums[0];
        }
        return sum;
    }
};